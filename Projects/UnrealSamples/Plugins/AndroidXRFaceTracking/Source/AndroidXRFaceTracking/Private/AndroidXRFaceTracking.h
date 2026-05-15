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
#include "IAndroidXRFaceTrackingModule.h"
#include "IOpenXRExtensionPlugin.h"

#include <AndroidXRHelpers.h>

DECLARE_LOG_CATEGORY_EXTERN(LogAndroidXRFaceTracking, Log, All);

class FAndroidXRFaceTracking : public IAndroidXRFaceTrackingModule,
                                 public IOpenXRExtensionPlugin
{
public:
    FAndroidXRFaceTracking() = default;

    /** IModuleInterface */
    void StartupModule() override;
    void ShutdownModule() override;

    /** IOpenXRExtensionPlugin */
    FString GetDisplayName() override
    {
        return FString(TEXT("AndroidXRFaceTracking"));
    }

    void PostCreateInstance(XrInstance InInstance) override;
    void PostCreateSession(XrSession InSession) override;
    bool GetRequiredExtensions(TArray<const ANSICHAR*>& OutExtensions) override;

    /**IAndroidXRFaceTrackingModule */
    bool CreateFaceTracker(FAndroidXRFaceTracker& FaceTracker) override;
    bool DestroyFaceTracker(FAndroidXRFaceTracker& FaceTracker) override;
    bool GetFaceCalibrationState(const FAndroidXRFaceTracker& FaceTracker, bool& IsCalibrated) override;
    bool GetFaceState(const FAndroidXRFaceTracker& FaceTracker, FAndroidXRFaceState& FaceState) override;
private:
    XrInstance Instance{};
    XrSession Session{};

    #define FACETRACKING_FUNCTIONS(HelperMacro) \
        HelperMacro(xrCreateFaceTrackerANDROID) \
        HelperMacro(xrDestroyFaceTrackerANDROID) \
        HelperMacro(xrGetFaceStateANDROID) \
        HelperMacro(xrGetFaceCalibrationStateANDROID)

    FACETRACKING_FUNCTIONS(DECLARE_OPENXR_FUNC);
};
