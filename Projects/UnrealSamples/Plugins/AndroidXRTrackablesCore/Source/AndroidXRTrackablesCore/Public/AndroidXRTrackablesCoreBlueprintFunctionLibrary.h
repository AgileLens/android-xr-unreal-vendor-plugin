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
#include "AndroidXRTrackablesCoreBlueprintFunctionLibrary.generated.h"

UCLASS(ClassGroup=AndroidXRTrackablesCore)
class ANDROIDXRTRACKABLESCORE_API UAndroidXRTrackablesCoreBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()
public:
    /**
     * Determines whether or not an FAndroidXRTrackable is valid.
     * @param[in] Trackable Trackable to be verified.
     * @return True if the trackable is valid.
     */
    UFUNCTION(BlueprintPure, Category="AndroidXR|Trackables Core Function Library")
    static bool IsValidTrackable(const FAndroidXRTrackable& Trackable);

    /**
     * Determines whether or not a FAndroidXRTrackableTracker is valid.
     * @param[in] TrackableTracker TrackableTracker to be verified.
     * @return True if the trackable tracker is valid.
     */
    UFUNCTION(BlueprintPure, Category="AndroidXR|Trackables Core Function Library")
    static bool IsValidTrackableTracker(const FAndroidXRTrackableTracker& TrackableTracker);

    /**
     * Enumerates the trackable types supported by the Trackables API.
     * @param[out] TrackableTypes Array to be filled with supported trackable types.
     * @return True if the underlying API call was successful.
     */
    UFUNCTION(BlueprintCallable, Category="AndroidXR|Trackables Core Function Library")
    static bool EnumerateSupportedTrackableTypes(TArray<EAndroidXRTrackableType>& TrackableTypes);

    /**
     * Enumerates the anchor trackable types supported by the Trackables API.
     * @param[out] TrackableTypes Array to be filled with supported anchor trackable types.
     * @return True if the underlying API call was successful.
     */
    UFUNCTION(BlueprintCallable, Category="AndroidXR|Trackables Core Function Library")
    static bool EnumerateSupportedAnchorTrackableTypes(TArray<EAndroidXRTrackableType>& TrackableTypes);

    /**
     * Creates a trackable tracker for the specified trackable type.
     * @param[in] TrackableType Type of trackable tracker to be created.
     * @param[out] TrackableTracker Created trackable tracker.
     * @return True if the underlying API call was successful.
     */
    UFUNCTION(BlueprintCallable, Category="AndroidXR|Trackables Core Function Library")
    static bool CreateTrackableTracker(EAndroidXRTrackableType TrackableType,
        FAndroidXRTrackableTracker& TrackableTracker);

    /**
     * Destroys a trackable tracker.
     * @param[in] TrackableTracker Trackable tracker to be destroyed.
     * @return True if the underlying API call was successful.
     */
    UFUNCTION(BlueprintCallable, Category="AndroidXR|Trackables Core Function Library")
    static bool DestroyTrackableTracker(UPARAM(ref) FAndroidXRTrackableTracker& TrackableTracker);

    /**
     * Gets all trackables of the specified trackable tracker type.
     * @param[in] TrackableTracker Previously created tracker specifying what
     * type of trackables to get.
     * @param[out] Trackables Array to be filled with trackables.
     * @return True if the underlying API call was successful.
     */
    UFUNCTION(BlueprintCallable, Category="AndroidXR|Trackables Core Function Library")
    static bool GetAllTrackables(const FAndroidXRTrackableTracker& TrackableTracker,
        TArray<FAndroidXRTrackable>& Trackables);

    /**
     * Gets an FAndroidXRTrackablePlane from an FAndroidXRTrackable.
     * @param[in] TrackableTracker Previously created plane tracker.
     * @param[out] Trackable Previously obtained trackable.
     * @param[out] TrackablePlane Trackable plane.
     * @return True if the underlying API call was successful.
     */
    UFUNCTION(BlueprintCallable, Category="AndroidXR|Trackables Core Function Library")
    static bool GetTrackablePlane(const FAndroidXRTrackableTracker& TrackableTracker,
        const FAndroidXRTrackable& Trackable,
        FAndroidXRTrackablePlane& TrackablePlane);

    /**
     * Returns whether or not anchors are supported and provides the
     * maximum number of anchors.
     * @param[out] MaxAnchors The maximum number of anchors supported (if 0,
     * indicates anchors are not supported).
     * @return True if the underlying API call was successful.
     */
    UFUNCTION(BlueprintCallable, Category="AndroidXR|Trackables Core Function Library")
    static bool GetTrackableProperties(int32& MaxAnchors);

    /**
     * Creates an anchor space.
     * @param[in] Transform Anchor transform.
     * @param[in] Trackable Optional trackable to attach the anchor to.
     * @param[out] AnchorSpace Created anchor space.
     * @return True if the underlying API call was successful.
     */
    UFUNCTION(BlueprintCallable, Category="AndroidXR|Trackables Core Function Library")
    static bool CreateAnchorSpace(const FTransform& Transform,
        const FAndroidXRTrackable& Trackable,
        FAndroidXRSpace& AnchorSpace);

    /**
     * Enumerates the trackable types supported by the Raycast API.
     * @param[out] TrackableTypes Array to be filled with supported trackable types.
     * @return True if the underlying API call was successful.
     */
    UFUNCTION(BlueprintCallable, Category="AndroidXR|Trackables Core Function Library")
    static bool EnumerateRaycastSupportedTrackableTypes(TArray<EAndroidXRTrackableType>& TrackableTypes);

    /**
     * Performs a raycast against the specified trackable trackers.
     * @param[in] Origin Starting location of the ray.
     * @param[in] Direction Direction of the ray.
     * @param[in] TrackableTrackers Array of trackers to be raycast against.
     * @param[in] MaxResults The maximum number of results.
     * @param[out] HitResults Array to be filled with hit results.
     * @return True if the underlying API call was successful.
     */
    UFUNCTION(BlueprintCallable, Category="AndroidXR|Trackables Core Function Library")
    static bool Raycast(const FVector& Origin,
        const FVector& Direction,
        const TArray<FAndroidXRTrackableTracker>& TrackableTrackers,
        int32 MaxResults,
        TArray<FAndroidXRRaycastHit>& HitResults);
};
