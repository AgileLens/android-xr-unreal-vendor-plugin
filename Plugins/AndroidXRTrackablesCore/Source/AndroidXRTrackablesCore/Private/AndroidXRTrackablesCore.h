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
#include "IAndroidXRTrackablesCoreModule.h"
#include "IOpenXRExtensionPlugin.h"

#include <AndroidXRHelpers.h>

DECLARE_LOG_CATEGORY_EXTERN(LogAndroidXRTrackablesCore, Log, All);

class FAndroidXRTrackablesCore : public IAndroidXRTrackablesCoreModule,
                                 public IOpenXRExtensionPlugin
{
public:
    FAndroidXRTrackablesCore();

    /** IModuleInterface */
    void StartupModule() override;
    void ShutdownModule() override;

    /** IOpenXRExtensionPlugin */
    FString GetDisplayName() override
    {
        return FString(TEXT("AndroidXRTrackablesCore"));
    }

    void PostCreateInstance(XrInstance InInstance) override;
    void PostCreateSession(XrSession InSession) override;
    bool GetRequiredExtensions(TArray<const ANSICHAR*>& OutExtensions) override;

    /** IAndroidXRTrackablesCoreModule */

    /** XR_ANDROID_trackables */
    bool EnumerateSupportedTrackableTypes(TArray<EAndroidXRTrackableType>& TrackableTypes) override;
    bool EnumerateSupportedAnchorTrackableTypes(TArray<EAndroidXRTrackableType>& TrackableTypes) override;
    bool CreateTrackableTracker(EAndroidXRTrackableType TrackableType,
        FAndroidXRTrackableTracker& TrackableTracker) override;
    bool DestroyTrackableTracker(FAndroidXRTrackableTracker& TrackableTracker) override;
    bool GetAllTrackables(const FAndroidXRTrackableTracker& TrackableTracker,
        TArray<FAndroidXRTrackable>& Trackables) override;
    bool GetTrackablePlane(const FAndroidXRTrackableTracker& TrackableTracker,
        const FAndroidXRTrackable& Trackable,
        FAndroidXRTrackablePlane& TrackablePlane) override;
    bool GetTrackableProperties(uint32& MaxAnchors) override;
    bool CreateAnchorSpace(const FTransform& Transform,
        const FAndroidXRTrackable& Trackable,
        FAndroidXRSpace& AnchorSpace) override;

    /** XR_ANDROID_raycast */
    bool EnumerateRaycastSupportedTrackableTypes(TArray<EAndroidXRTrackableType>& TrackableTypes) override;
    bool Raycast(const FVector& Origin,
        const FVector& Direction,
        const TArray<FAndroidXRTrackableTracker>& TrackableTrackers,
        uint32 MaxResults,
        TArray<FAndroidXRRaycastHit>& HitResults) override;

private:
    XrInstance Instance{};
    XrSession Session{};

    #define TRACKABLESCORE_FUNCTIONS(HelperMacro) \
        HelperMacro(xrEnumerateSupportedTrackableTypesANDROID) \
        HelperMacro(xrEnumerateSupportedAnchorTrackableTypesANDROID) \
        HelperMacro(xrCreateTrackableTrackerANDROID) \
        HelperMacro(xrDestroyTrackableTrackerANDROID) \
        HelperMacro(xrGetAllTrackablesANDROID) \
        HelperMacro(xrGetTrackablePlaneANDROID) \
        HelperMacro(xrCreateAnchorSpaceANDROID) \
        HelperMacro(xrEnumerateRaycastSupportedTrackableTypesANDROID) \
        HelperMacro(xrRaycastANDROID)

    TRACKABLESCORE_FUNCTIONS(DECLARE_OPENXR_FUNC);
};
