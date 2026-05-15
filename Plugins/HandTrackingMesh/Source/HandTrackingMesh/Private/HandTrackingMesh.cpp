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

#include "HandTrackingMesh.h"
#include "AndroidXRTypeConversions.h"
#include <IXRTrackingSystem.h>
#include "Engine/SkeletalMeshLODSettings.h"
#include "Engine/SkinnedAssetCommon.h"
#include "Rendering/SkeletalMeshModel.h"
#include "Components/SkeletalMeshComponent.h"
#include "Rendering/SkeletalMeshLODImporterData.h"
#include "Rendering/SkeletalMeshRenderData.h"
#include "KismetProceduralMeshLibrary.h"
#include "ProceduralMeshComponent.h"

DEFINE_LOG_CATEGORY(LogHandTrackingMesh);

FName OpenXRHandJointToBoneName(XrHandJointEXT HandJoint)
{
    switch (HandJoint)
    {
        case XR_HAND_JOINT_WRIST_EXT:
            return FName("Wrist");
        case XR_HAND_JOINT_THUMB_METACARPAL_EXT:
            return FName("ThumbMetacarpal");
        case XR_HAND_JOINT_THUMB_PROXIMAL_EXT:
            return FName("ThumbProximal");
        case XR_HAND_JOINT_THUMB_DISTAL_EXT:
            return FName("ThumbDistal");
        case XR_HAND_JOINT_INDEX_PROXIMAL_EXT:
            return FName("IndexProximal");
        case XR_HAND_JOINT_INDEX_INTERMEDIATE_EXT:
            return FName("IndexIntermediate");
        case XR_HAND_JOINT_INDEX_DISTAL_EXT:
            return FName("IndexDistal");
        case XR_HAND_JOINT_MIDDLE_PROXIMAL_EXT:
            return FName("MiddleProximal");
        case XR_HAND_JOINT_MIDDLE_INTERMEDIATE_EXT:
            return FName("MiddleIntermediate");
        case XR_HAND_JOINT_MIDDLE_DISTAL_EXT:
            return FName("MiddleDistal");
        case XR_HAND_JOINT_RING_PROXIMAL_EXT:
            return FName("RingProximal");
        case XR_HAND_JOINT_RING_INTERMEDIATE_EXT:
            return FName("RingIntermediate");
        case XR_HAND_JOINT_RING_DISTAL_EXT:
            return FName("RingDistal");
        case XR_HAND_JOINT_LITTLE_PROXIMAL_EXT:
            return FName("LittleProximal");
        case XR_HAND_JOINT_LITTLE_INTERMEDIATE_EXT:
            return FName("LittleIntermediate");
        case XR_HAND_JOINT_LITTLE_DISTAL_EXT:
            return FName("LittleDistal");
        default:
            break;
    }
    return { };
}

FHandTrackingMesh::FHandTrackingMesh()
{

}

FHandTrackingMesh::~FHandTrackingMesh()
{
    for (uint32 HandIndex = 0; HandIndex < kNumHands; ++HandIndex)
    {
        if (HandData[HandIndex].HandTracker != XR_NULL_HANDLE)
        {
            xrDestroyHandTrackerEXT(HandData[HandIndex].HandTracker);
        }
        HandData[HandIndex] = { };
    }
}

void FHandTrackingMesh::StartupModule()
{
    IHandTrackingMeshModule::StartupModule();
    RegisterOpenXRExtensionModularFeature();
}

void FHandTrackingMesh::ShutdownModule()
{
    UnregisterOpenXRExtensionModularFeature();
    IHandTrackingMeshModule::ShutdownModule();
}

void FHandTrackingMesh::PostCreateInstance(XrInstance InInstance)
{
    Instance = InInstance;

    ResolveOpenXRFunctions(Instance,
        {
            HANDTRACKINGMESH_FUNCTIONS(RESOLVE_OPENXR_FUNC)
        },
        [](const char* UnresolvableFunctionName, XrResult Result)
        {
            UE_LOG(LogHandTrackingMesh, Error,
                TEXT("Unable to resolve function pointer %s (error %s)"),
                UTF8_TO_TCHAR(UnresolvableFunctionName),
                OpenXRResultToString(Result));
        });
}

void FHandTrackingMesh::PostCreateSession(XrSession InSession)
{
    Session = InSession;
}

bool FHandTrackingMesh::GetRequiredExtensions(TArray<const ANSICHAR *>& OutExtensions)
{
    // OpenXRHandTracking module does not expose the raw OpenXR stuff we need, so we
    // need to create our own tracker(s)
    OutExtensions.Add(XR_EXT_HAND_TRACKING_EXTENSION_NAME);
    OutExtensions.Add(XR_FB_HAND_TRACKING_MESH_EXTENSION_NAME);
    return true;
}

void FHandTrackingMesh::UpdateDeviceLocations(XrSession InSession,
    XrTime DisplayTime,
    XrSpace TrackingSpace)
{
    if (xrLocateHandJointsEXT != nullptr)
    {
        XrHandJointLocationEXT JointLocations[XR_HAND_JOINT_COUNT_EXT];

        XrHandJointLocationsEXT HandJointLocations
        {
            .type = XR_TYPE_HAND_JOINT_LOCATIONS_EXT,
            .jointCount = XR_HAND_JOINT_COUNT_EXT,
            .jointLocations = JointLocations
        };

        XrHandJointsLocateInfoEXT LocateInfo
        {
            .type = XR_TYPE_HAND_JOINTS_LOCATE_INFO_EXT,
            .baseSpace = TrackingSpace,
            .time = DisplayTime
        };

        for (uint32 HandIndex = 0; HandIndex < kNumHands; ++HandIndex)
        {
            auto& HandDatum = HandData[HandIndex];

            if (HandDatum.HandTracker != XR_NULL_HANDLE)
            {
                if (!!HandDatum.HandTrackingScale.overrideHandScale)
                {
                    HandJointLocations.next = &HandDatum.HandTrackingScale;
                }
                else
                {
                    HandJointLocations.next = XR_NULL_HANDLE;
                }

                auto Result = xrLocateHandJointsEXT(HandDatum.HandTracker, &LocateInfo, &HandJointLocations);
                if (XR_UNQUALIFIED_SUCCESS(Result))
                {
                    if (!!HandJointLocations.isActive)
                    {
                        auto WorldToMeters = GEngine->XRSystem->GetWorldToMetersScale();
                        for (int32 JointIndex = 0; JointIndex < XR_HAND_JOINT_COUNT_EXT; ++JointIndex)
                        {
                            HandDatum.JointTransforms[JointIndex] =
                                ToFTransform(JointLocations[JointIndex].pose, WorldToMeters);
                        }
                    }
                }
            }
        }
    }
}

void CreateSkeleton(USkeleton* Skeleton,
    XrHandTrackingMeshFB& HandTrackingMesh,
    TArray<int16>& JointToBone,
    float WorldToMeters)
{
    // Create JointToBone mapping and add bones to skeleton
    int16 JointBoneIndex = 0;

    FReferenceSkeletonModifier Modifier(const_cast<FReferenceSkeleton&>
        (Skeleton->GetReferenceSkeleton()), Skeleton);

    // The array of parents starts out with two -1s, so we skip Palm
    JointToBone.Init(-1, HandTrackingMesh.jointCountOutput);
    TArray<FTransform> InverseTransforms;
    InverseTransforms.Init(FTransform::Identity, HandTrackingMesh.jointCountOutput);
    for (uint32 JointIndex = 1; JointIndex < HandTrackingMesh.jointCountOutput; ++JointIndex)
    {
        FMeshBoneInfo BoneInfo;

        BoneInfo.ParentIndex = HandTrackingMesh.jointParents[JointIndex];

        if (JointIndex == 1 || BoneInfo.ParentIndex != -1)
        {
            JointToBone[JointIndex] = JointBoneIndex++;

            auto JointTransform = ToFTransform(HandTrackingMesh.
                jointBindPoses[JointIndex], WorldToMeters);
            InverseTransforms[JointIndex] = JointTransform.Inverse();
            if (BoneInfo.ParentIndex != -1)
            {
                JointTransform *= InverseTransforms[BoneInfo.ParentIndex];
                BoneInfo.ParentIndex = JointToBone[BoneInfo.ParentIndex];
            }

            BoneInfo.Name = OpenXRHandJointToBoneName(static_cast<XrHandJointEXT>(JointIndex));

            Modifier.Add(BoneInfo, JointTransform);
        }
    }
}

bool CreateSkeletalMesh(USkeletalMesh* SkeletalMesh,
    const XrHandTrackingMeshFB& HandTrackingMesh,
    const TArray<int16>& JointToBone,
    float WorldToMeters)
{
    constexpr uint32 kNumBoneInfluences = 4;

    // Convert positions
    TArray<FVector> VertexPositions;
    VertexPositions.Reserve(HandTrackingMesh.vertexCountOutput);
    for (uint32 VertexIndex = 0; VertexIndex < HandTrackingMesh.vertexCountOutput; ++VertexIndex)
    {
        VertexPositions.Add(ToFVector(HandTrackingMesh.vertexPositions[VertexIndex], WorldToMeters));
    }

    // Convert normals
    TArray<FVector> VertexNormals;
    VertexNormals.Reserve(HandTrackingMesh.vertexCountOutput);
    for (uint32 VertexIndex = 0; VertexIndex < HandTrackingMesh.vertexCountOutput; ++VertexIndex)
    {
        VertexNormals.Add(ToFVector(HandTrackingMesh.vertexNormals[VertexIndex]));
    }

    // Convert UVs
    TArray<FVector2D> VertexUVs;
    VertexUVs.Reserve(HandTrackingMesh.vertexCountOutput);
    for (uint32 VertexIndex = 0; VertexIndex < HandTrackingMesh.vertexCountOutput; ++VertexIndex)
    {
        VertexUVs.Add(ToFVector2D(HandTrackingMesh.vertexUVs[VertexIndex]));
    }

    // Convert indices
    TArray<uint32> Indices;
    Indices.Reserve(HandTrackingMesh.indexCountOutput);
    for (uint32 IndexIndex = 0; IndexIndex < HandTrackingMesh.indexCountOutput; ++IndexIndex)
    {
        Indices.Add(HandTrackingMesh.indices[IndexIndex]);
    }

    // Calculate tangents
    TArray<FProcMeshTangent> VertexTangents;
    UKismetProceduralMeshLibrary::CalculateTangentsForMesh(VertexPositions,
        reinterpret_cast<const TArray<int32>&>(Indices),
        VertexUVs, VertexNormals, VertexTangents);

    // Setup the static vertices, get bounds
    TArray<FStaticMeshBuildVertex> StaticVertices;

    FVector Min(+1.0e6f);
    FVector Max(-1.0e6f);
    StaticVertices.SetNum(VertexPositions.Num());
    for (int32 VertexIndex = 0; VertexIndex < StaticVertices.Num(); ++VertexIndex)
    {
        auto& StaticVertex = StaticVertices[VertexIndex];

        StaticVertex.Position = FVector3f(VertexPositions[VertexIndex]);
        StaticVertex.TangentZ = FVector3f(VertexNormals[VertexIndex]);
        StaticVertex.TangentX = FVector3f(VertexTangents[VertexIndex].TangentX);
        StaticVertex.TangentY = FVector3f::CrossProduct(StaticVertex.TangentZ, StaticVertex.TangentX);

        if (VertexTangents[VertexIndex].bFlipTangentY)
        {
            StaticVertex.TangentY *= -1.0f;
        }

        StaticVertex.UVs[0] = FVector2f(VertexUVs[VertexIndex]);

        Min = FVector::Min(Min, VertexPositions[VertexIndex]);
        Max = FVector::Max(Max, VertexPositions[VertexIndex]);
    }

    // Allocate and assign FSkeletalMeshRenderData
    SkeletalMesh->AllocateResourceForRendering();

    auto MeshRenderData = SkeletalMesh->GetResourceForRendering();
    auto LODMeshRenderData = new FSkeletalMeshLODRenderData;

    MeshRenderData->LODRenderData.Add(LODMeshRenderData);

    SkeletalMesh->ResetLODInfo();

    auto& MeshLodInfo = SkeletalMesh->AddLODInfo();

    // Setup render section
    LODMeshRenderData->RenderSections.SetNum(1);

    auto& RenderSection = LODMeshRenderData->RenderSections[0];

    RenderSection.NumVertices = StaticVertices.Num();
    RenderSection.NumTriangles = Indices.Num() / 3;
    RenderSection.MaxBoneInfluences = kNumBoneInfluences;

    // Index buffer
    LODMeshRenderData->MultiSizeIndexContainer.
        RebuildIndexBuffer(sizeof(uint16), Indices);

    // Vertex buffer(s)
    LODMeshRenderData->StaticVertexBuffers.
        PositionVertexBuffer.Init(StaticVertices, false);
    LODMeshRenderData->StaticVertexBuffers.
        StaticMeshVertexBuffer.Init(StaticVertices, 1, false);

    // Bone indices
    LODMeshRenderData->RequiredBones.Empty();
    LODMeshRenderData->ActiveBoneIndices.Empty();
    LODMeshRenderData->RenderSections[0].BoneMap.Empty();
    auto BoneNum = SkeletalMesh->GetSkeleton()->GetReferenceSkeleton().GetRawBoneNum();
    for (int32 BoneIndex = 0; BoneIndex < BoneNum; ++BoneIndex)
    {
        LODMeshRenderData->RequiredBones.AddUnique(BoneIndex);
        LODMeshRenderData->ActiveBoneIndices.AddUnique(BoneIndex);
        LODMeshRenderData->RenderSections[0].BoneMap.AddUnique(BoneIndex);
    }

    // Skin weights
    TArray<FSkinWeightInfo> SkinWeights;
    SkinWeights.AddZeroed(HandTrackingMesh.vertexCountOutput);
    for (uint32 VertexIndex = 0; VertexIndex < HandTrackingMesh.vertexCountOutput; ++VertexIndex)
    {
        auto BlendIndices = &HandTrackingMesh.vertexBlendIndices[VertexIndex].x;
        auto BlendWeights = &HandTrackingMesh.vertexBlendWeights[VertexIndex].x;

        for (int32 WeightIndex = 0; WeightIndex < kNumBoneInfluences; ++WeightIndex)
        {
            auto JointIndex = BlendIndices[WeightIndex];
            if (JointIndex < JointToBone.Num())
            {
                auto BoneIndex = JointToBone[JointIndex];
                if (BoneIndex != -1)
                {
                    SkinWeights[VertexIndex].InfluenceWeights[WeightIndex] =
                        FMath::Clamp(BlendWeights[WeightIndex], 0.0f, 1.0f) * 65535;
                    SkinWeights[VertexIndex].InfluenceBones[WeightIndex] = BoneIndex;
                    continue;
                }
            }

            UE_LOG(LogHandTrackingMesh, Warning,
                TEXT("Discarding vertex %d blend data for joint %d (no bone associated)"),
                VertexIndex,
                JointIndex);
        }
    }

    LODMeshRenderData->SkinWeightVertexBuffer.SetMaxBoneInfluences(kNumBoneInfluences);
    LODMeshRenderData->SkinWeightVertexBuffer.SetUse16BitBoneIndex(true);

    // This is an overloaded operator=
    LODMeshRenderData->SkinWeightVertexBuffer = SkinWeights;

    SkeletalMesh->SetImportedBounds(FBoxSphereBounds(
        (Min + Max) * 0.5f,
        (Max - Min) * 0.5f,
        (Max - Min).Size()));

    SkeletalMesh->PostLoad();

    return true;
}

bool FHandTrackingMesh::CreateHandMesh(EControllerHand ControllerHand,
    UMaterialInterface* Material,
    USkeletalMesh*& SkeletalMesh)
{
    if (xrGetHandMeshFB != nullptr)
    {
        // Unfortunately there appears to be no way to get the hand tracker
        // from the OpenXRHandTracking module, so we need our own
        auto XrHand = XR_HAND_RIGHT_EXT;
        if (ControllerHand != EControllerHand::Right)
        {
            XrHand = XR_HAND_LEFT_EXT;
        }

        auto& HandDatum = HandData[XrHand - 1];
        if (HandDatum.HandTracker == XR_NULL_HANDLE)
        {
            XrHandTrackerCreateInfoEXT CreateInfo
            {
                .type = XR_TYPE_HAND_TRACKER_CREATE_INFO_EXT,
                .hand = XrHand,
                .handJointSet = XR_HAND_JOINT_SET_DEFAULT_EXT,
            };

            auto Result = xrCreateHandTrackerEXT(Session, &CreateInfo, &HandDatum.HandTracker);
            if (!XR_UNQUALIFIED_SUCCESS(Result))
            {
                UE_LOG(LogHandTrackingMesh, Error,
                    TEXT("xrCreateHandTrackerEXT failed with error %s"),
                    OpenXRResultToString(Result));
                return false;
            }
        }

        XrHandTrackingMeshFB HandTrackingMesh
        {
            .type = XR_TYPE_HAND_TRACKING_MESH_FB
        };

        auto Result = xrGetHandMeshFB(HandDatum.HandTracker, &HandTrackingMesh);
        if (XR_UNQUALIFIED_SUCCESS(Result))
        {
            if (HandTrackingMesh.jointCountOutput > 0 &&
                HandTrackingMesh.vertexCountOutput > 0 &&
                HandTrackingMesh.indexCountOutput > 0)
            {
                HandTrackingMesh.jointCapacityInput = HandTrackingMesh.jointCountOutput;

                TArray<XrPosef> NativeJointBindPoses;
                NativeJointBindPoses.SetNum(HandTrackingMesh.jointCountOutput);
                HandTrackingMesh.jointBindPoses = NativeJointBindPoses.GetData();

                TArray<float> NativeJointRadii;
                NativeJointRadii.SetNum(HandTrackingMesh.jointCountOutput);
                HandTrackingMesh.jointRadii = NativeJointRadii.GetData();

                TArray<XrHandJointEXT> NativeJointParents;
                NativeJointParents.SetNum(HandTrackingMesh.jointCountOutput);
                HandTrackingMesh.jointParents = NativeJointParents.GetData();

                HandTrackingMesh.vertexCapacityInput = HandTrackingMesh.vertexCountOutput;

                TArray<XrVector3f> NativeVertexPositions;
                NativeVertexPositions.SetNum(HandTrackingMesh.vertexCountOutput);
                HandTrackingMesh.vertexPositions = NativeVertexPositions.GetData();

                TArray<XrVector3f> NativeVertexNormals;
                NativeVertexNormals.SetNum(HandTrackingMesh.vertexCountOutput);
                HandTrackingMesh.vertexNormals = NativeVertexNormals.GetData();

                TArray<XrVector2f> NativeVertexUVs;
                NativeVertexUVs.SetNum(HandTrackingMesh.vertexCountOutput);
                HandTrackingMesh.vertexUVs = NativeVertexUVs.GetData();

                TArray<XrVector4sFB> NativeVertexBlendIndices;
                NativeVertexBlendIndices.SetNum(HandTrackingMesh.vertexCountOutput);
                HandTrackingMesh.vertexBlendIndices = NativeVertexBlendIndices.GetData();

                TArray<XrVector4f> NativeVertexBlendWeights;
                NativeVertexBlendWeights.SetNum(HandTrackingMesh.vertexCountOutput);
                HandTrackingMesh.vertexBlendWeights = NativeVertexBlendWeights.GetData();

                HandTrackingMesh.indexCapacityInput = HandTrackingMesh.indexCountOutput;

                TArray<int16_t> NativeIndices;
                NativeIndices.SetNum(HandTrackingMesh.indexCountOutput);
                HandTrackingMesh.indices = NativeIndices.GetData();

                Result = xrGetHandMeshFB(HandDatum.HandTracker, &HandTrackingMesh);
                if (XR_UNQUALIFIED_SUCCESS(Result))
                {
                    auto WorldToMeters = GEngine->XRSystem->GetWorldToMetersScale();

                    // Extension returns numerous joints that have no parent. We cannot
                    // add those to a skeleton or Unreal asserts out, as its skeletons can
                    // only have one root (ReferenceSkeleton.h line 214).
                    // So we have to drop a fair number of joints, and need to keep track
                    // of  which skeletal bones correspond to each joint.
                    TArray<int16> JointToBone;

                    auto Skeleton = NewObject<USkeleton>();
                    CreateSkeleton(Skeleton,
                        HandTrackingMesh,
                        JointToBone,
                        WorldToMeters);

                    SkeletalMesh = NewObject<USkeletalMesh>();
                    SkeletalMesh->SetSkeleton(Skeleton);
                    SkeletalMesh->SetRefSkeleton(Skeleton->GetReferenceSkeleton());
                    SkeletalMesh->SetMaterials({ Material });

                    CreateSkeletalMesh(SkeletalMesh,
                        HandTrackingMesh,
                        JointToBone,
                        WorldToMeters);

                    return true;
                }
                else
                {
                    UE_LOG(LogHandTrackingMesh, Error,
                        TEXT("xrGetHandMeshFB succeeded but returned no data"));
                    return false;
                }
            }
        }
        UE_LOG(LogHandTrackingMesh, Error,
            TEXT("xrGetHandMeshFB failed with error %s"),
            OpenXRResultToString(Result));
    }
    return false;
}

bool FHandTrackingMesh::SetHandMeshScale(EControllerHand ControllerHand,
    float Scale)
{
    auto XrHand = XR_HAND_RIGHT_EXT;
    if (ControllerHand != EControllerHand::Right)
    {
        XrHand = XR_HAND_LEFT_EXT;
    }

    auto& HandDatum = HandData[XrHand - 1];
    if (HandDatum.HandTracker != XR_NULL_HANDLE)
    {
        HandDatum.HandTrackingScale.overrideHandScale = XR_TRUE;
        HandDatum.HandTrackingScale.overrideValueInput = Scale;
        return true;
    }
    return false;
}

bool FHandTrackingMesh::GetJointTransforms(EControllerHand ControllerHand,
    TArray<FTransform>& JointTransforms)
{
    auto XrHand = XR_HAND_RIGHT_EXT;
    if (ControllerHand != EControllerHand::Right)
    {
        XrHand = XR_HAND_LEFT_EXT;
    }

    auto& HandDatum = HandData[XrHand - 1];
    if (HandDatum.HandTracker != XR_NULL_HANDLE)
    {
        JointTransforms = HandDatum.JointTransforms;
        return true;
    }

    return false;
}

FName FHandTrackingMesh::GetBoneNameFromHandKeypoint(EHandKeypoint HandKeypoint)
{
    return OpenXRHandJointToBoneName(AndroidXR::Convert(HandKeypoint));
}

IMPLEMENT_MODULE(FHandTrackingMesh, HandTrackingMesh);

