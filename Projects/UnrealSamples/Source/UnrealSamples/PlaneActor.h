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

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "AndroidXRTypes.h"
#include "PlaneActor.generated.h"

UCLASS()
class UNREALSAMPLES_API APlaneActor : public AActor
{
    GENERATED_BODY()

public:
    APlaneActor();

protected:
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TObjectPtr<UInstancedStaticMeshComponent> PlaneBoundsInstancedMesh;
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TObjectPtr<UProceduralMeshComponent> PlanePolygonProceduralMesh;
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TObjectPtr<UMaterialInterface> PlanePolygonMaterial;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TObjectPtr<class UNiagaraComponent> PlanePolygonNiagara;

    UPROPERTY()
    TMap<EAndroidXRPlaneLabel, TObjectPtr<UMaterialInstanceDynamic>> PlanePolygonMaterialInstance;
    TArray<FVector4> PositionAndColorIndex;

    void BeginPlay() override;

public:
    UFUNCTION(BlueprintCallable)
    void ClearTrackablePlanes();

    UFUNCTION(BlueprintCallable)
    void AddTrackablePlane(const FAndroidXRTrackablePlane& TrackablePlane, bool bShowBounds, bool bShowPolygons);

    UFUNCTION(BlueprintCallable)
    void UpdateVisuals();
};
