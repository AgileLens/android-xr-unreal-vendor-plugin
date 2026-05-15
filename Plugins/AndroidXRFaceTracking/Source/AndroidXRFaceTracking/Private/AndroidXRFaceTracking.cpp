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

#include "AndroidXRFaceTracking.h"
#include<AndroidXRTypes.h>
#include <AndroidXRTypeConversions.h>
#include <IOpenXRHMDModule.h>
#include <IXRTrackingSystem.h>
#include "IOpenXRHMD.h"

DEFINE_LOG_CATEGORY(LogAndroidXRFaceTracking);

#define LOG_OPENXR_ERROR(Tag, FunctionName, Result) UE_LOG(LogAndroidXRFaceTracking, Error, TEXT("%s %s failed with error %s (%d)"), TEXT(#Tag), TEXT(#FunctionName),  OpenXRResultToString(Result), Result);

void FAndroidXRFaceTracking::StartupModule()
{
    IAndroidXRFaceTrackingModule::StartupModule();
    RegisterOpenXRExtensionModularFeature();
}

void FAndroidXRFaceTracking::ShutdownModule()
{
    UnregisterOpenXRExtensionModularFeature();
    IAndroidXRFaceTrackingModule::ShutdownModule();
}

bool FAndroidXRFaceTracking::GetRequiredExtensions(TArray<const ANSICHAR*>& OutExtensions)
{
    OutExtensions.Add(XR_ANDROID_FACE_TRACKING_EXTENSION_NAME);
    return true;
}

void FAndroidXRFaceTracking::PostCreateInstance(XrInstance InInstance)
{
    Instance = InInstance;

    ResolveOpenXRFunctions(Instance,
        {
            FACETRACKING_FUNCTIONS(RESOLVE_OPENXR_FUNC)
        },
        [](const char* UnresolvableFunctionName, XrResult Result)
        {
            UE_LOG(LogAndroidXRFaceTracking, Error,
                TEXT("Unable to resolve function pointer %s (error %s)"),
                UTF8_TO_TCHAR(UnresolvableFunctionName),
                OpenXRResultToString(Result));
        });
}

void FAndroidXRFaceTracking::PostCreateSession(XrSession InSession)
{
    Session = InSession;
}

bool FAndroidXRFaceTracking::CreateFaceTracker(FAndroidXRFaceTracker& FaceTracker)
{
    XrFaceTrackerCreateInfoANDROID CreateInfo{XR_TYPE_FACE_TRACKER_CREATE_INFO_ANDROID};
    XrFaceTrackerANDROID NativeTracker{};
    auto Result = xrCreateFaceTrackerANDROID(Session, &CreateInfo, &NativeTracker);
    if(!XR_UNQUALIFIED_SUCCESS(Result))
    {
        LOG_OPENXR_ERROR(CreateFaceTracker, xrCreateFaceTrackerANDROID, Result);
        return false;
    }
    FaceTracker.FaceTracker = NativeTracker;
    return true;
}

bool FAndroidXRFaceTracking::DestroyFaceTracker(FAndroidXRFaceTracker& FaceTracker)
{
    auto Result = xrDestroyFaceTrackerANDROID(FaceTracker.FaceTracker);
    if(!XR_UNQUALIFIED_SUCCESS(Result))
    {
        LOG_OPENXR_ERROR(DestroyFaceTracker, xrDestroyFaceTrackerANDROID, Result);
        return false;
    }
    FaceTracker.FaceTracker = XR_NULL_HANDLE;
    return true;
}

bool FAndroidXRFaceTracking::GetFaceCalibrationState(const FAndroidXRFaceTracker &FaceTracker, bool &IsCalibrated)
{
    XrBool32 NativeIsCalibrated{};
    IsCalibrated = false;
    auto Result = xrGetFaceCalibrationStateANDROID(FaceTracker.FaceTracker, &NativeIsCalibrated);
    if(!XR_UNQUALIFIED_SUCCESS(Result))
    {
        LOG_OPENXR_ERROR(GetFaceCalibrationState, xrGetFaceCalibrationStateANDROID, Result);
        return false;
    }
    IsCalibrated = static_cast<bool>(NativeIsCalibrated);
    return true;
}

bool FAndroidXRFaceTracking::GetFaceState(const FAndroidXRFaceTracker &FaceTracker, FAndroidXRFaceState &FaceState)
{
    XrFaceStateGetInfoANDROID GetInfo{XR_TYPE_FACE_STATE_GET_INFO_ANDROID};
    auto HMD = GEngine->XRSystem.Get()->GetIOpenXRHMD();
    GetInfo.time = HMD->GetDisplayTime();

    auto& FaceExpressionParameters = FaceState.Parameters;
    FaceExpressionParameters.SetNum(XR_FACE_PARAMETER_COUNT_ANDROID);

    auto& ConfidenceRegions = FaceState.ConfidenceRegions;
    ConfidenceRegions.SetNum(XR_FACE_REGION_CONFIDENCE_COUNT_ANDROID);

    XrFaceStateANDROID NativeFaceState{XR_TYPE_FACE_STATE_ANDROID};
    NativeFaceState.parametersCapacityInput = XR_FACE_PARAMETER_COUNT_ANDROID;
    NativeFaceState.parameters = FaceExpressionParameters.GetData();
    NativeFaceState.regionConfidencesCapacityInput = XR_FACE_REGION_CONFIDENCE_COUNT_ANDROID;
    NativeFaceState.regionConfidences = ConfidenceRegions.GetData();

    auto Result = xrGetFaceStateANDROID(FaceTracker.FaceTracker, &GetInfo, &NativeFaceState);
    if(!XR_UNQUALIFIED_SUCCESS(Result))
    {
        LOG_OPENXR_ERROR(GetFaceState, xrGetFaceStateANDROID, Result);
        FaceState.Parameters.Empty();
        FaceState.ConfidenceRegions.Empty();
        return false;
    }
    FaceState.IsValid = static_cast<bool>(NativeFaceState.isValid);
    FaceState.SampleTime = ToFTimespan(NativeFaceState.sampleTime);
    FaceState.FaceTrackingState = AndroidXR::Convert(NativeFaceState.faceTrackingState);
    return true;
}

IMPLEMENT_MODULE(FAndroidXRFaceTracking, AndroidXRFaceTracking);

