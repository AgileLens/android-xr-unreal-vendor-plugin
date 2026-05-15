/* Copyright 2026 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     https://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "PlaneActor.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "CompGeom/ConvexHull3.h"
#include "GeomTools.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "UnrealSamples.h"
#include "NiagaraComponent.h"
#include "NiagaraDataInterfaceArrayFunctionLibrary.h"

static const FColor kDefaultColor(0x5D, 0xD6, 0xF5, 0xFF);
static constexpr float kBoundsOpacity = 0.20f;
static constexpr float kPolygonOpacity = 0.25f;

inline FColor LabelToColor(EAndroidXRPlaneLabel PlaneLabel)
{
    auto LabelColor(kDefaultColor);
    switch (PlaneLabel)
    {
        case EAndroidXRPlaneLabel::Wall:
            LabelColor = FColor::Blue;
            break;
        case EAndroidXRPlaneLabel::Floor:
            LabelColor = FColor::Green;
            break;
        case EAndroidXRPlaneLabel::Ceiling:
            LabelColor = FColor::Yellow;
            break;
        case EAndroidXRPlaneLabel::Table:
            LabelColor = FColor::Orange;
            break;
        default:
            break;
    }
    return LabelColor;
}

// Given a polygon, decompose into triangles
bool TriangulatePoly(TArray<int32> &OutTris,
    const TArray<FVector> &MeshVerts,
    const FVector &PolyNormal)
{
    auto NumVerts = MeshVerts.Num();
    if (NumVerts < 3)
    {
        if (NumVerts > 2)
        {
            OutTris.Add(0);
            OutTris.Add(2);
            OutTris.Add(1);
            return true;
        }
        return false;
    }

    auto TriBase = OutTris.Num();

    TArray<int32> VertIndices;
    VertIndices.AddUninitialized(NumVerts);
    for (int32 VertIndex = 0; VertIndex < NumVerts; ++VertIndex)
    {
        VertIndices[VertIndex] = VertIndex;
    }

    while (VertIndices.Num() >= 3)
    {
        // Look for an 'ear'
        auto bFoundEar = false;
        for (int32 EarVertexIndex = 0; EarVertexIndex < VertIndices.Num(); ++EarVertexIndex)
        {
            // Triangle is 'this' vert plus the one before and after
            auto AIndex = (EarVertexIndex == 0) ? VertIndices.Num() - 1 : EarVertexIndex - 1;
            auto BIndex = EarVertexIndex;
            auto CIndex = (EarVertexIndex + 1) % VertIndices.Num();

            auto &AVert = MeshVerts[VertIndices[AIndex]];
            auto &BVert = MeshVerts[VertIndices[BIndex]];
            auto &CVert = MeshVerts[VertIndices[CIndex]];

            // Check that this vertex is convex (cross product must be positive)
            auto ABEdge = BVert - AVert;
            auto ACEdge = CVert - AVert;
            auto TriangleDeterminant = (ABEdge ^ ACEdge) | PolyNormal;
            if (TriangleDeterminant > 0.0f)
            {
                continue;
            }

            // Ensure no other vert is contained in this triangle
            auto bFoundVertInside = false;
            for (int32 NormalIndex = 0; NormalIndex < VertIndices.Num(); ++NormalIndex)
            {
                auto &TestVert = MeshVerts[VertIndices[NormalIndex]];

                if (NormalIndex != AIndex &&
                    NormalIndex != BIndex &&
                    NormalIndex != CIndex &&
                    FGeomTools::PointInTriangle(FVector3f(AVert), FVector3f(BVert), FVector3f(CVert), FVector3f(TestVert)))
                {
                    bFoundVertInside = true;
                    break;
                }
            }

            if (!bFoundVertInside)
            {
                OutTris.Add(VertIndices[AIndex]);
                OutTris.Add(VertIndices[CIndex]);
                OutTris.Add(VertIndices[BIndex]);

                VertIndices.RemoveAt(EarVertexIndex);
                bFoundEar = true;
                break;
            }
        }

        // If we couldn't find an 'ear', then we cannot process the polygon
        if (!bFoundEar)
        {
            OutTris.SetNum(TriBase, EAllowShrinking::Yes);
            return false;
        }
    }
    return true;
}

bool CreatePolygon(UProceduralMeshComponent *ProceduralMesh,
                   UMaterialInstance *MaterialInstance,
                   const TArray<FVector> &Vertexes,
                   EAxis::Type NormalAxis,
                   const FTransform& CenterTransform)
{
    // Triangulate the polygon
    TArray<int32> TriIndexes;
    auto bResult = TriangulatePoly(TriIndexes,
        Vertexes, CenterTransform.GetUnitAxis(NormalAxis));
    if (bResult)
    {
        TArray<FVector> Normals;
        Normals.Init(CenterTransform.GetUnitAxis(NormalAxis), Vertexes.Num());

        auto SectionIndex = ProceduralMesh->GetNumSections();
        ProceduralMesh->CreateMeshSection(
            SectionIndex,
            Vertexes,
            TriIndexes,
            Normals,
            {}, // UV0
            {}, // UV1
            {}, // UV2
            {}, // UV3
            {}, // VertexColors
            {}, // Tangents
            false);

        ProceduralMesh->SetMaterial(SectionIndex, MaterialInstance);
    }
    else
    {
        UE_LOG(LogUnrealSamples, Warning, TEXT("Unable to triangulate plane polygon"));
    }
    return bResult;
}

APlaneActor::APlaneActor()
{
    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRoot"));
    SetRootComponent(RootComponent);

    PlaneBoundsInstancedMesh = CreateDefaultSubobject
        <UInstancedStaticMeshComponent>(TEXT("BoundsMesh"));
    PlaneBoundsInstancedMesh->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);
    PlaneBoundsInstancedMesh->SetGenerateOverlapEvents(false);
    PlaneBoundsInstancedMesh->SetNumCustomDataFloats(4); // RGBA floats
    PlaneBoundsInstancedMesh->SetupAttachment(RootComponent);

    PlanePolygonProceduralMesh = CreateDefaultSubobject
        <UProceduralMeshComponent>(TEXT("PolygonMesh"));
    PlanePolygonProceduralMesh->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);
    PlanePolygonProceduralMesh->SetGenerateOverlapEvents(false);
    PlanePolygonProceduralMesh->SetupAttachment(RootComponent);

    PlanePolygonNiagara = CreateDefaultSubobject<UNiagaraComponent>("PolygonNiagaraSystem");
    PlanePolygonNiagara->SetupAttachment(RootComponent);

    SetActorEnableCollision(false);
}

void APlaneActor::BeginPlay()
{
    Super::BeginPlay();

    if (PlanePolygonMaterial != nullptr)
    {
        // One material instance for each plane label
        for (int32 LabelIndex = 0; LabelIndex <= static_cast<int32>(EAndroidXRPlaneLabel::Table); ++LabelIndex)
        {
            auto MaterialInstance = UMaterialInstanceDynamic::
                Create(PlanePolygonMaterial, PlanePolygonProceduralMesh);

            auto LabelEnum = static_cast<EAndroidXRPlaneLabel>(LabelIndex);
            MaterialInstance->SetVectorParameterValue(FName(TEXT("Color")), LabelToColor(LabelEnum));
            MaterialInstance->SetScalarParameterValue(FName(TEXT("Opacity")), kPolygonOpacity);
            PlanePolygonMaterialInstance.Add(LabelEnum, MaterialInstance);
        }
    }
}

void APlaneActor::ClearTrackablePlanes()
{
    PositionAndColorIndex.Empty();
    PlanePolygonProceduralMesh->ClearAllMeshSections();
    PlaneBoundsInstancedMesh->ClearInstances();
}

void APlaneActor::AddTrackablePlane(const FAndroidXRTrackablePlane &TrackablePlane, bool bShowBounds, bool bShowPolygons)
{
    if (bShowBounds)
    {
        if (auto StaticMesh = PlaneBoundsInstancedMesh->GetStaticMesh())
        {
            auto BoxSphereBounds = StaticMesh->GetBounds();

            auto InstanceTransform(TrackablePlane.Transform);
            InstanceTransform.SetScale3D(FVector(
                TrackablePlane.Extents.X / BoxSphereBounds.BoxExtent.X,
                TrackablePlane.Extents.Y / BoxSphereBounds.BoxExtent.Y,
                0.01f));

            auto InstanceIndex = PlaneBoundsInstancedMesh->AddInstance(InstanceTransform, true);

            auto LabelColor = LabelToColor(TrackablePlane.PlaneLabel);
            PlaneBoundsInstancedMesh->SetCustomData(InstanceIndex,
                {
                    LabelColor.R / 255.0f,
                    LabelColor.G / 255.0f,
                    LabelColor.B / 255.0f,
                    kBoundsOpacity
                });
        }
    }

    if (bShowPolygons)
    {
        if (TrackablePlane.Vertices.Num() > 0)
        {
            TArray<FVector> WorldVertex;
            WorldVertex.Reserve(TrackablePlane.Vertices.Num());

            PositionAndColorIndex.Reserve(PositionAndColorIndex.
                Num() + TrackablePlane.Vertices.Num());

            // Make vertices 3D and in world space, append to Niagara buffer
            for (const auto Vertex2D : TrackablePlane.Vertices)
            {
                WorldVertex.Add(
                    TrackablePlane.Transform.TransformPositionNoScale(
                        FVector(Vertex2D.X, Vertex2D.Y, 0.0f)));
                PositionAndColorIndex.Add(FVector4(WorldVertex.Last(),
                    static_cast<float>(TrackablePlane.PlaneLabel)));
            }

            auto MaterialInstance = PlanePolygonMaterialInstance.Find(TrackablePlane.PlaneLabel);
            if (MaterialInstance != nullptr)
            {
                CreatePolygon(PlanePolygonProceduralMesh, *MaterialInstance,
                    WorldVertex, EAxis::Z, TrackablePlane.Transform);
            }
        }
    }
}

void APlaneActor::UpdateVisuals()
{
    UNiagaraDataInterfaceArrayFunctionLibrary::
        SetNiagaraArrayVector4(PlanePolygonNiagara,
            FName("USER.VertexPositionAndColorIndex"), PositionAndColorIndex);

    PlanePolygonNiagara->ReinitializeSystem();
}
