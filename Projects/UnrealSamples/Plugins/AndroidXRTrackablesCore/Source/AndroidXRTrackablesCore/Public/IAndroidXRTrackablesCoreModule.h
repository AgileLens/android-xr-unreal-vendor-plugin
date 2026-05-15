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
#include "Modules/ModuleManager.h"
#include "AndroidXRTypes.h"

/**
 * The public interface to this module.  In most cases, this interface is only
 * public to sibling modules within this plugin.
 */
class ANDROIDXRTRACKABLESCORE_API IAndroidXRTrackablesCoreModule : public IModuleInterface
{
public:
    /**
     * Singleton-like access to this module's interface.  This is just for
     * convenience! Beware of calling this during the shutdown phase, though. Your
     * module might have been unloaded already.
     *
     * @return Returns singleton instance, loading the module on demand if needed
     */
    static inline IAndroidXRTrackablesCoreModule& Get()
    {
        return FModuleManager::LoadModuleChecked<IAndroidXRTrackablesCoreModule>("AndroidXRTrackablesCore");
    }

    /**
     * Checks to see if this module is loaded and ready.  It is only valid to call
     * Get() if IsAvailable() returns true.
     *
     * @return True if the module is loaded and ready to use
     */
    static inline bool IsAvailable()
    {
        return FModuleManager::Get().IsModuleLoaded("AndroidXRTrackablesCore");
    }

    /** XR_ANDROID_trackables */

    /**
     * Enumerates the trackable types supported by the Trackables API.
     * @param[out] TrackableTypes Array to be filled with supported trackable types.
     * @return True if the underlying API call was successful.
     */
    virtual bool EnumerateSupportedTrackableTypes(TArray<EAndroidXRTrackableType>& TrackableTypes) = 0;

    /**
     * Enumerates the anchor trackable types supported by the Trackables API.
     * @param[out] TrackableTypes Array to be filled with supported anchor trackable types.
     * @return True if the underlying API call was successful.
     */
    virtual bool EnumerateSupportedAnchorTrackableTypes(TArray<EAndroidXRTrackableType>& TrackableTypes) = 0;

    /**
     * Creates a trackable tracker for the specified trackable type.
     * @param[in] TrackableType Type of trackable tracker to be created.
     * @param[out] TrackableTracker Created trackable tracker.
     * @return True if the underlying API call was successful.
     */
    virtual bool CreateTrackableTracker(EAndroidXRTrackableType TrackableType,
        FAndroidXRTrackableTracker& TrackableTracker) = 0;

    /**
     * Destroys a trackable tracker.
     * @param[in] TrackableTracker Trackable tracker to be destroyed.
     * @return True if the underlying API call was successful.
     */
    virtual bool DestroyTrackableTracker(FAndroidXRTrackableTracker& TrackableTracker) = 0;

    /**
     * Gets all trackables of the specified trackable tracker type.
     * @param[in] TrackableTracker Previously created tracker specifying what
     * type of trackables to get.
     * @param[out] Trackables Array to be filled with trackables.
     * @return True if the underlying API call was successful.
     */
    virtual bool GetAllTrackables(const FAndroidXRTrackableTracker& TrackableTracker,
        TArray<FAndroidXRTrackable>& Trackables) = 0;

    /**
     * Gets an FAndroidXRTrackablePlane from an FAndroidXRTrackable.
     * @param[in] TrackableTracker Previously created plane tracker.
     * @param[out] Trackable Previously obtained trackable.
     * @param[out] TrackablePlane Trackable plane.
     * @return True if the underlying API call was successful.
     */
    virtual bool GetTrackablePlane(const FAndroidXRTrackableTracker& TrackableTracker,
        const FAndroidXRTrackable& Trackable,
        FAndroidXRTrackablePlane& TrackablePlane) = 0;

    /**
     * Returns whether or not anchors are supported and provides the
     * maximum number of anchors.
     * @param[out] MaxAnchors The maximum number of anchors supported (if 0,
     * indicates anchors are not supported).
     * @return True if the underlying API call was successful.
     */
    virtual bool GetTrackableProperties(uint32& MaxAnchors) = 0;

    /**
     * Creates an anchor space.
     * @param[in] Transform Anchor transform.
     * @param[in] ReferenceSpace Optional reference space (an empty parameter will
     * use the device space).
     * @param[in] Trackable Optional trackable to attach the anchor to.
     * @param[out] AnchorSpace Created anchor space.
     * @return True if the underlying API call was successful.
     */
    virtual bool CreateAnchorSpace(const FTransform& Transform,
        const FAndroidXRTrackable& Trackable,
        FAndroidXRSpace& AnchorSpace) = 0;

    /** XR_ANDROID_raycast */

    /**
     * Enumerates the trackable types supported by the Raycast API.
     * @param[out] TrackableTypes Array to be filled with supported trackable types.
     * @return True if the underlying API call was successful.
     */
    virtual bool EnumerateRaycastSupportedTrackableTypes(TArray<EAndroidXRTrackableType>& TrackableTypes) = 0;

    /**
     * Performs a raycast against the specified trackable trackers.
     * @param[in] Origin Starting location of the ray.
     * @param[in] Direction Direction of the ray.
     * @param[in] TrackableTrackers Array of trackers to be raycast against.
     * @param[in] MaxResults The maximum number of results.
     * @param[out] HitResults Array to be filled with hit results.
     * @return True if the underlying API call was successful.
     */
    virtual bool Raycast(const FVector& Origin,
        const FVector& Direction,
        const TArray<FAndroidXRTrackableTracker>& TrackableTrackers,
        uint32 MaxResults,
        TArray<FAndroidXRRaycastHit>& HitResults) = 0;
};
