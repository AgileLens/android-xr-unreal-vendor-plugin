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

#include "AndroidXRTrackablesObject.h"
#include "AndroidXRTrackablesObjectConversions.h"
#include "AndroidXRTypeConversions.h"
#include <IOpenXRHMDModule.h>
#include <IXRTrackingSystem.h>
#include <IHeadMountedDisplay.h>
#include "IOpenXRHMD.h"

DEFINE_LOG_CATEGORY(LogAndroidXRTrackablesObject);

FAndroidXRTrackablesObject::FAndroidXRTrackablesObject()
{
}

void FAndroidXRTrackablesObject::StartupModule()
{
    IAndroidXRTrackablesObjectModule::StartupModule();
    RegisterOpenXRExtensionModularFeature();
}

void FAndroidXRTrackablesObject::ShutdownModule()
{
    UnregisterOpenXRExtensionModularFeature();
    IAndroidXRTrackablesObjectModule::ShutdownModule();
}

bool FAndroidXRTrackablesObject::GetRequiredExtensions(TArray<const ANSICHAR*>& OutExtensions)
{
    OutExtensions.Add(XR_ANDROID_TRACKABLES_EXTENSION_NAME);
    OutExtensions.Add(XR_ANDROID_TRACKABLES_OBJECT_EXTENSION_NAME);
    return true;
}

void FAndroidXRTrackablesObject::PostCreateInstance(XrInstance InInstance)
{
    Instance = InInstance;

    ResolveOpenXRFunctions(Instance,
        {
            TRACKABLESOBJECT_FUNCTIONS(RESOLVE_OPENXR_FUNC)
        },
        [](const char* UnresolvableFunctionName, XrResult Result)
        {
            UE_LOG(LogAndroidXRTrackablesObject, Error,
                TEXT("Unable to resolve function pointer %s (error %s)"),
                UTF8_TO_TCHAR(UnresolvableFunctionName),
                OpenXRResultToString(Result));
        });
}

void FAndroidXRTrackablesObject::PostCreateSession(XrSession InSession)
{
    Session = InSession;
}

bool FAndroidXRTrackablesObject::CreateObjectTrackableTracker(const TSet<EAndroidXRTrackablesObjectLabel>& ActiveLabels,
    FAndroidXRTrackableTracker& TrackableTracker)
{
    if (xrCreateTrackableTrackerANDROID != nullptr)
    {
        XrTrackableObjectConfigurationANDROID TrackerObjectConfig
        {
            .type = XR_TYPE_TRACKABLE_OBJECT_CONFIGURATION_ANDROID,
            .next = nullptr
        };

        TArray<XrObjectLabelANDROID> NativeLabels{};
        Algo::Transform(ActiveLabels, NativeLabels, [](const EAndroidXRTrackablesObjectLabel Label) { return AndroidXR::Convert(Label); });

        TrackerObjectConfig.labelCount = NativeLabels.Num();
        TrackerObjectConfig.activeLabels = NativeLabels.GetData();

        XrTrackableTrackerCreateInfoANDROID TrackerCreateInfo
            {
                .type = XR_TYPE_TRACKABLE_TRACKER_CREATE_INFO_ANDROID,
                .next = (NativeLabels.Num() > 0) ? &TrackerObjectConfig : nullptr,
                .trackableType = XR_TRACKABLE_TYPE_OBJECT_ANDROID
            };

        XrTrackableTrackerANDROID NativeTracker{};
        auto Result = xrCreateTrackableTrackerANDROID(Session, &TrackerCreateInfo, &NativeTracker);
        if (XR_UNQUALIFIED_SUCCESS(Result))
        {
            TrackableTracker.Tracker = NativeTracker;
            return true;
        }

        UE_LOG(LogAndroidXRTrackablesObject, Error,
            TEXT("CreateObjectTrackableTracker: "
                "xrCreateTrackableTrackerANDROID failed with error %s"),
                OpenXRResultToString(Result));
    }
    return false;
}

bool FAndroidXRTrackablesObject::GetTrackableObject(const FAndroidXRTrackableTracker& TrackableTracker, const FAndroidXRTrackable& Trackable,
    FAndroidXRTrackableObject& TrackableObject)
{
    if (xrGetTrackableObjectANDROID != nullptr)
    {
        XrTrackableGetInfoANDROID TrackableGetInfo
            {
                .type = XR_TYPE_TRACKABLE_GET_INFO_ANDROID,
                .trackable = Trackable.Trackable
            };

        auto HMD = GEngine->XRSystem.Get()->GetIOpenXRHMD();
        TrackableGetInfo.baseSpace = HMD->GetTrackingSpace();
        TrackableGetInfo.time = HMD->GetDisplayTime();

        XrTrackableObjectANDROID NativeObject{ XR_TYPE_TRACKABLE_OBJECT_ANDROID };

        auto Result = xrGetTrackableObjectANDROID(TrackableTracker.Tracker,
            &TrackableGetInfo, &NativeObject);
        if (XR_UNQUALIFIED_SUCCESS(Result))
        {
            auto WorldToMetersScale = GEngine->XRSystem->GetWorldToMetersScale();

            TrackableObject.TrackingState =
                AndroidXR::Convert(NativeObject.trackingState);
            TrackableObject.CenterPose = ToFTransform(NativeObject.
                centerPose, WorldToMetersScale);

            // Unreal custom for extents is half extent; also need
            // to correctly map width/height to axes
            TrackableObject.Extents.X = NativeObject.extents.depth * WorldToMetersScale * 0.5f;
            TrackableObject.Extents.Y = NativeObject.extents.width * WorldToMetersScale * 0.5f;
            TrackableObject.Extents.Z = NativeObject.extents.height * WorldToMetersScale * 0.5f;
            TrackableObject.ObjectLabel =
                AndroidXR::Convert(NativeObject.objectLabel);
            TrackableObject.LastUpdatedTime = ToFTimespan(NativeObject.lastUpdatedTime);
            return true;
        }

        UE_LOG(LogAndroidXRTrackablesObject, Error,
            TEXT("GetTrackableObject: "
                "xrGetTrackableObjectANDROID failed with error %s"),
                OpenXRResultToString(Result));
    }
    return false;
}

IMPLEMENT_MODULE(FAndroidXRTrackablesObject, AndroidXRTrackablesObject)