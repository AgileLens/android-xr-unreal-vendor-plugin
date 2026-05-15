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

#include "AndroidXREyeTracking.h"
#include <AndroidXREyeTrackingConversions.h>
#include <IOpenXRHMDModule.h>
#include <IXRTrackingSystem.h>
#include <IHeadMountedDisplay.h>
#include "IOpenXRHMD.h"

DEFINE_LOG_CATEGORY(LogAndroidXREyeTracking);

#define LOG_OPENXR_ERROR(Tag, FunctionName, Result) UE_LOG(LogAndroidXREyeTracking, Error, TEXT("%s %s failed with error %s (%d)"), TEXT(#Tag), TEXT(#FunctionName),  OpenXRResultToString(Result), Result);

FAndroidXREyeTracking::FAndroidXREyeTracking()
{
}

void FAndroidXREyeTracking::StartupModule()
{
    IAndroidXREyeTrackingModule::StartupModule();
    RegisterOpenXRExtensionModularFeature();
}

void FAndroidXREyeTracking::ShutdownModule()
{
    UnregisterOpenXRExtensionModularFeature();
    IAndroidXREyeTrackingModule::ShutdownModule();
}

bool FAndroidXREyeTracking::GetRequiredExtensions(TArray<const ANSICHAR*>& OutExtensions)
{
    OutExtensions.Add(XR_ANDROID_EYE_TRACKING_EXTENSION_NAME);
    return true;
}

void FAndroidXREyeTracking::PostCreateInstance(XrInstance InInstance)
{
    Instance = InInstance;

    ResolveOpenXRFunctions(Instance,
        {
            EYETRACKING_FUNCTIONS(RESOLVE_OPENXR_FUNC)
        },
        [](const char* UnresolvableFunctionName, XrResult Result)
        {
            UE_LOG(LogAndroidXREyeTracking, Error,
                TEXT("Unable to resolve function pointer %s (error %s)"),
                UTF8_TO_TCHAR(UnresolvableFunctionName),
                OpenXRResultToString(Result));
        });
}

void FAndroidXREyeTracking::PostCreateSession(XrSession InSession)
{
    Session = InSession;
}

bool FAndroidXREyeTracking::SupportsEyeTracking()
{
    if(xrGetSystemProperties != nullptr)
    {
        XrSystemEyeTrackingPropertiesANDROID EyeTrackingProperties{XR_TYPE_SYSTEM_EYE_TRACKING_PROPERTIES_ANDROID};
        XrSystemProperties SystemProperties{XR_TYPE_SYSTEM_PROPERTIES, &EyeTrackingProperties};
        auto Result = xrGetSystemProperties(Instance, IOpenXRHMDModule::Get().GetSystemId(), &SystemProperties);
        if(XR_UNQUALIFIED_SUCCESS(Result))
        {
            return EyeTrackingProperties.supportsEyeTracking == XR_TRUE;
        }
        LOG_OPENXR_ERROR(SupportsEyeTracking, xrGetSystemProperties, Result);
    }
    return false;
}

bool FAndroidXREyeTracking::CreateEyeTracker(FAndroidXREyeTracker &EyeTracker)
{
    XrEyeTrackerCreateInfoANDROID CreateInfo{XR_TYPE_EYE_TRACKER_CREATE_INFO_ANDROID};
    XrEyeTrackerANDROID NativeTracker{};
    auto Result = xrCreateEyeTrackerANDROID(Session, &CreateInfo, &NativeTracker);
    if(XR_UNQUALIFIED_SUCCESS(Result))
    {
        EyeTracker.EyeTracker = NativeTracker;
        return true;
    }
    LOG_OPENXR_ERROR(CreateEyeTracker, xrCreateEyeTrackerANDROID, Result);
    return false;
}

bool FAndroidXREyeTracking::DestroyEyeTracker(FAndroidXREyeTracker &EyeTracker)
{
    auto Result = xrDestroyEyeTrackerANDROID(EyeTracker.EyeTracker);
    if(XR_UNQUALIFIED_SUCCESS(Result))
    {
        EyeTracker.EyeTracker = XR_NULL_HANDLE;
        return true;
    }
    LOG_OPENXR_ERROR(DestroyEyeTracker, xrDestroyEyeTrackerANDROID, Result);
    return false;
}

bool FAndroidXREyeTracking::GetCoarseEyeTrackingInfo(const FAndroidXREyeTracker& EyeTracker, FAndroidXREyes& Eyes)
{
    return GetEyeTrackingInfo(EyeTracker, Eyes, false);
}

bool FAndroidXREyeTracking::GetFineEyeTrackingInfo(const FAndroidXREyeTracker& EyeTracker, FAndroidXREyes& Eyes)
{
    return GetEyeTrackingInfo(EyeTracker, Eyes, true);
}

bool FAndroidXREyeTracking::GetEyeTrackingInfo(const FAndroidXREyeTracker& EyeTracker, FAndroidXREyes& Eyes, bool fineInfoRequested)
{
    XrEyesGetInfoANDROID GetInfo{XR_TYPE_EYES_GET_INFO_ANDROID};
    auto HMD = GEngine->XRSystem.Get()->GetIOpenXRHMD();
    GetInfo.time = HMD->GetDisplayTime();
    GetInfo.baseSpace = HMD->GetTrackingSpace();

    auto WorldToMeters = GEngine->XRSystem->GetWorldToMetersScale();
    XrResult Result;

    XrEyesANDROID NativeEyes{XR_TYPE_EYES_ANDROID};
    if(!fineInfoRequested)
    {
        Result = xrGetCoarseTrackingEyesInfoANDROID(EyeTracker.EyeTracker, &GetInfo, &NativeEyes);
    }
    else
    {
        Result = xrGetFineTrackingEyesInfoANDROID(EyeTracker.EyeTracker, &GetInfo, &NativeEyes);
    }
    if(XR_UNQUALIFIED_SUCCESS(Result))
    {
        UEnum* EnumPtr = StaticEnum<EAndroidXREyeIndex>();
        if(!EnumPtr)
        {
            UE_LOG(LogAndroidXREyeTracking, Error, TEXT("Unable to fetch EnumPtr for EAndroidXREyeIndex"));
            return false;
        }
        Eyes.Mode = AndroidXR::Convert(NativeEyes.mode);
        Eyes.Eyes.SetNum(EnumPtr->NumEnums());
        for(auto i = 0; i < Eyes.Eyes.Num(); i++)
        {
            auto& Eye = Eyes.Eyes[i];
            auto& NativeEye = NativeEyes.eyes[i];
            Eye.EyeState = AndroidXR::Convert(NativeEye.eyeState);
            Eye.Transform = ToFTransform(NativeEye.eyePose, WorldToMeters);
        }
        return true;
    }
    if(!fineInfoRequested)
    {
        LOG_OPENXR_ERROR(GetEyeTrackingInfo, xrGetCoarseTrackingEyesInfoANDROID, Result);
    }
    else
    {
        LOG_OPENXR_ERROR(GetEyeTrackingInfo, xrGetFineTrackingEyesInfoANDROID, Result);
    }
    return false;
}

IMPLEMENT_MODULE(FAndroidXREyeTracking, AndroidXREyeTracking);


