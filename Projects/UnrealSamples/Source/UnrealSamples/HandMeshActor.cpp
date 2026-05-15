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

#include "HandMeshActor.h"
#include "Components/PoseableMeshComponent.h"
#include "IHandTrackingMeshModule.h"
#include "HeadMountedDisplayFunctionLibrary.h"

// Sets default values
AHandMeshActor::AHandMeshActor()
{
    PrimaryActorTick.bCanEverTick = true;

    PoseableMeshComponent = CreateDefaultSubobject
        <UPoseableMeshComponent>(TEXT("PoseableMesh"));
    SetRootComponent(PoseableMeshComponent);
}

void AHandMeshActor::CreateHandMesh()
{
    if (IHandTrackingMeshModule::IsAvailable())
    {
        USkeletalMesh* SkeletalMesh;
        if (IHandTrackingMeshModule::Get().CreateHandMesh(ControllerHand, Material, SkeletalMesh))
        {
            PoseableMeshComponent->SetSkinnedAssetAndUpdate(SkeletalMesh, true);
        }
    }
}

void AHandMeshActor::SetHandMeshScale(float Scale)
{
    if (IHandTrackingMeshModule::IsAvailable())
    {
        IHandTrackingMeshModule::Get().SetHandMeshScale(ControllerHand, Scale);
    }
}

void AHandMeshActor::BeginPlay()
{
    CreateHandMesh();
    Super::BeginPlay();
}

void AHandMeshActor::Tick(float DeltaTime)
{
    if (IsValid(PoseableMeshComponent->GetSkinnedAsset()))
    {
        TArray<FTransform> JointTransforms;
        if (IHandTrackingMeshModule::Get().GetJointTransforms(ControllerHand, JointTransforms))
        {
            // Need to move the actor or we clip out
            SetActorTransform(JointTransforms[0]);

            for (int32 JointIndex = 0; JointIndex < JointTransforms.Num(); ++JointIndex)
            {
                auto BoneName = IHandTrackingMeshModule::Get().
                    GetBoneNameFromHandKeypoint(static_cast<EHandKeypoint>(JointIndex));

                if (BoneName.IsNone())
                {
                    continue;
                }

                PoseableMeshComponent->SetBoneTransformByName(BoneName,
                    JointTransforms[JointIndex],
                    EBoneSpaces::WorldSpace);
            }
        }
    }
    Super::Tick(DeltaTime);
}
