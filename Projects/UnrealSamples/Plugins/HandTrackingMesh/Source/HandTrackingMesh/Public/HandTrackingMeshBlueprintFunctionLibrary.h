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

#include "AndroidXRTypes.h"
#include "HandTrackingMeshBlueprintFunctionLibrary.generated.h"

UCLASS(ClassGroup=HandTrackingMesh)
class HANDTRACKINGMESH_API UHandTrackingMeshBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()
public:
    /**
     * Creates a hand mesh for a specified hand.
     * @param[in] ControllerHand Hand to mesh. EControllerHand::Right will use
     * the right hand; anything else will use the left hand.
     * @param[in] Material Material to use (Material must have 'Use with skeletal
     * mesh' parameter set or it will not be visible).
     * @param[out] SkeletalMesh The created mesh, if successful.
     * @return True if the underlying API call was successful.
     */
    UFUNCTION(BlueprintCallable, Category="HandTrackingMesh|Function Library")
    static bool CreateHandMesh(EControllerHand ControllerHand,
        UMaterialInterface* Material, USkeletalMesh*& SkeletalMesh);

    /**
     * Sets the hand mesh scale via OpenXR settings. Note that this scales bones
     * in length but not in radius.
     * @param[in] ControllerHand Hand to scale. EControllerHand::Right will use
     * the right hand; anything else will use the left hand.
     * @return True if the underlying API call was successful.
     */
    UFUNCTION(BlueprintCallable, Category="HandTrackingMesh|Function Library")
    static bool SetHandMeshScale(EControllerHand ControllerHand,
        float Scale);

    /**
     * Gets the transforms for the joints. Use EHandKeypoint enum for indexes
     * into the resulting array.
     * @param[in] ControllerHand Hand to retrieve. EControllerHand::Right will use
     * the right hand; anything else will use the left hand.
     * @param[out] JointTransforms An array transforms of size EHandKeypointCount
     * transforms, if successful.
     * @return True if the underlying API call was successful.
     */
    UFUNCTION(BlueprintCallable, Category="HandTrackingMesh|Function Library")
    static bool GetJointTransforms(EControllerHand ControllerHand,
        TArray<FTransform>& JointTransforms);

    /**
     * Gets the hand mesh bone name from an EHandKeypoint value. Not all hand
     * keypoints map to bones, so an empty FName may be returned.
     * @param[in] HandKeypoint Keypoint for which the bone name is desired.
     * @return Name of corresponding bone (may be empty if no bone matches).
     */
    UFUNCTION(BlueprintCallable, Category="HandTrackingMesh|Function Library")
    static FName GetBoneNameFromHandKeypoint(EHandKeypoint HandKeypoint);
};
