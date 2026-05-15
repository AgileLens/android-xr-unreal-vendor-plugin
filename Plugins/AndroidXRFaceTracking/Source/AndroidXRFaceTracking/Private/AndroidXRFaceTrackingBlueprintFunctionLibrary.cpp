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

#include "AndroidXRFaceTrackingBlueprintFunctionLibrary.h"
#include "IAndroidXRFaceTrackingModule.h"

#define RETURN_IF_MODULE_NOT_FOUND() if(!IAndroidXRFaceTrackingModule::IsAvailable()){ return false; }

bool UAndroidXRFaceTrackingBlueprintFunctionLibrary::IsValidFaceTracker(const FAndroidXRFaceTracker& FaceTracker)
{
    return FaceTracker.FaceTracker != XR_NULL_HANDLE;
}

bool UAndroidXRFaceTrackingBlueprintFunctionLibrary::CreateFaceTracker(FAndroidXRFaceTracker& FaceTracker)
{
    RETURN_IF_MODULE_NOT_FOUND()
    return IAndroidXRFaceTrackingModule::Get().CreateFaceTracker(FaceTracker);
}

bool UAndroidXRFaceTrackingBlueprintFunctionLibrary::DestroyFaceTracker(FAndroidXRFaceTracker& FaceTracker)
{
    RETURN_IF_MODULE_NOT_FOUND()
    return IAndroidXRFaceTrackingModule::Get().DestroyFaceTracker(FaceTracker);
}

bool UAndroidXRFaceTrackingBlueprintFunctionLibrary::GetFaceCalibrationState(const FAndroidXRFaceTracker& FaceTracker, bool& IsCalibrated)
{
    RETURN_IF_MODULE_NOT_FOUND()
    return IAndroidXRFaceTrackingModule::Get().GetFaceCalibrationState(FaceTracker, IsCalibrated);
}

bool UAndroidXRFaceTrackingBlueprintFunctionLibrary::GetFaceState(const FAndroidXRFaceTracker& FaceTracker, FAndroidXRFaceState& FaceState)
{
    RETURN_IF_MODULE_NOT_FOUND()
    return IAndroidXRFaceTrackingModule::Get().GetFaceState(FaceTracker, FaceState);
}
