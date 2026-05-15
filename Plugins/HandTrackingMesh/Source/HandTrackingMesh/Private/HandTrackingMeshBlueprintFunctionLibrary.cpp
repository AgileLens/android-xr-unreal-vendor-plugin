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

#include "HandTrackingMeshBlueprintFunctionLibrary.h"
#include "IHandTrackingMeshModule.h"

bool UHandTrackingMeshBlueprintFunctionLibrary::CreateHandMesh(EControllerHand ControllerHand,
    UMaterialInterface* Material,
    USkeletalMesh*& SkeletalMesh)
{
    if (IHandTrackingMeshModule::IsAvailable())
    {
        return IHandTrackingMeshModule::Get().CreateHandMesh(ControllerHand, Material, SkeletalMesh);
    }
    return false;
}

bool UHandTrackingMeshBlueprintFunctionLibrary::SetHandMeshScale(EControllerHand ControllerHand,
    float Scale)
{
    if (IHandTrackingMeshModule::IsAvailable())
    {
        return IHandTrackingMeshModule::Get().SetHandMeshScale(ControllerHand, Scale);
    }
    return false;
}

bool UHandTrackingMeshBlueprintFunctionLibrary::GetJointTransforms(EControllerHand ControllerHand,
    TArray<FTransform>& JointTransforms)
{
    if (IHandTrackingMeshModule::IsAvailable())
    {
        return IHandTrackingMeshModule::Get().GetJointTransforms(ControllerHand, JointTransforms);
    }
    return false;
}

FName UHandTrackingMeshBlueprintFunctionLibrary::GetBoneNameFromHandKeypoint(EHandKeypoint HandKeypoint)
{
    if (IHandTrackingMeshModule::IsAvailable())
    {
        return IHandTrackingMeshModule::Get().GetBoneNameFromHandKeypoint(HandKeypoint);
    }
    return { };
}
