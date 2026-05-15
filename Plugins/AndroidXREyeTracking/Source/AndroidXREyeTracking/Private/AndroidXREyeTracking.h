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
#include "IAndroidXREyeTrackingModule.h"
#include "IOpenXRExtensionPlugin.h"

#include <AndroidXRHelpers.h>

DECLARE_LOG_CATEGORY_EXTERN(LogAndroidXREyeTracking, Log, All);

class FAndroidXREyeTracking : public IAndroidXREyeTrackingModule,
                                 public IOpenXRExtensionPlugin
{
public:
    FAndroidXREyeTracking();

    /** IModuleInterface */
    void StartupModule() override;
    void ShutdownModule() override;

    /** IOpenXRExtensionPlugin */
    FString GetDisplayName() override
    {
        return FString(TEXT("AndroidXREyeTracking"));
    }

    void PostCreateInstance(XrInstance InInstance) override;
    void PostCreateSession(XrSession InSession) override;
    bool GetRequiredExtensions(TArray<const ANSICHAR*>& OutExtensions) override;

    bool SupportsEyeTracking() override;
    bool CreateEyeTracker(FAndroidXREyeTracker& EyeTracker) override;
    bool DestroyEyeTracker(FAndroidXREyeTracker& EyeTracker) override;
    bool GetCoarseEyeTrackingInfo(const FAndroidXREyeTracker& EyeTracker, FAndroidXREyes& Eyes) override;
    bool GetFineEyeTrackingInfo(const FAndroidXREyeTracker& EyeTracker, FAndroidXREyes& Eyes) override;

private:
    bool GetEyeTrackingInfo(const FAndroidXREyeTracker& EyeTracker, FAndroidXREyes& Eyes, bool fineInfoRequested);
    void CreateEyeTrackingGetInfo(XrEyesGetInfoANDROID& GetInfo);
    bool ConvertEyesInfo(const XrEyesGetInfoANDROID& GetInfo, FAndroidXREyes& Eyes);
    XrInstance Instance{};
    XrSession Session{};

    #define EYETRACKING_FUNCTIONS(HelperMacro) \
        HelperMacro(xrGetSystemProperties) \
        HelperMacro(xrCreateEyeTrackerANDROID) \
        HelperMacro(xrDestroyEyeTrackerANDROID) \
        HelperMacro(xrGetFineTrackingEyesInfoANDROID) \
        HelperMacro(xrGetCoarseTrackingEyesInfoANDROID)

    EYETRACKING_FUNCTIONS(DECLARE_OPENXR_FUNC);
};
