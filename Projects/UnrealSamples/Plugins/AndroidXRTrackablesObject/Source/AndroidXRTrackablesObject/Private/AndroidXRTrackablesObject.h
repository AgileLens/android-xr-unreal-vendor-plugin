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
#include "IAndroidXRTrackablesObjectModule.h"
#include "IOpenXRExtensionPlugin.h"
#include <AndroidXRHelpers.h>

DECLARE_LOG_CATEGORY_EXTERN(LogAndroidXRTrackablesObject, Log, All);

class FAndroidXRTrackablesObject : public IAndroidXRTrackablesObjectModule,
                                 public IOpenXRExtensionPlugin
{
public:
    FAndroidXRTrackablesObject();

    /** IModuleInterface */
    void StartupModule() override;
    void ShutdownModule() override;

    /** IOpenXRExtensionPlugin */
    FString GetDisplayName() override
    {
        return FString(TEXT("AndroidXRTrackablesObject"));
    }

    void PostCreateInstance(XrInstance InInstance) override;
    void PostCreateSession(XrSession InSession) override;
    bool GetRequiredExtensions(TArray<const ANSICHAR*>& OutExtensions) override;

    /** IAndroidXRTrackablesObjectModule */

    /** XR_ANDROID_trackables_object */
    bool CreateObjectTrackableTracker(const TSet<EAndroidXRTrackablesObjectLabel>& ActiveLabels,
        FAndroidXRTrackableTracker& TrackableTracker) override;
    bool GetTrackableObject(const FAndroidXRTrackableTracker& TrackableTracker,
        const FAndroidXRTrackable& Trackable,
        FAndroidXRTrackableObject& TrackableObject) override;
private:
    XrInstance Instance{};
    XrSession Session{};

    #define TRACKABLESOBJECT_FUNCTIONS(HelperMacro) \
        HelperMacro(xrGetTrackableObjectANDROID) \
        HelperMacro(xrCreateTrackableTrackerANDROID)

    TRACKABLESOBJECT_FUNCTIONS(DECLARE_OPENXR_FUNC);
};