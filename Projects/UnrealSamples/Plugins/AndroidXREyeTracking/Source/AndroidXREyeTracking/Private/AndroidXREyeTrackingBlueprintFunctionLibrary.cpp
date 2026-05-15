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

#include "AndroidXREyeTrackingBlueprintFunctionLibrary.h"
#include "IAndroidXREyeTrackingModule.h"

#define RETURN_IF_NOT_AVAILABLE() if(!IAndroidXREyeTrackingModule::IsAvailable()){ return false; }

bool UAndroidXREyeTrackingBlueprintFunctionLibrary::SupportsEyeTracking()
{
    RETURN_IF_NOT_AVAILABLE();
    return IAndroidXREyeTrackingModule::Get().SupportsEyeTracking();
}

bool UAndroidXREyeTrackingBlueprintFunctionLibrary::IsTrackerValid(const FAndroidXREyeTracker &EyeTracker)
{
    return EyeTracker.EyeTracker != XR_NULL_HANDLE;
}

bool UAndroidXREyeTrackingBlueprintFunctionLibrary::CreateEyeTracker(FAndroidXREyeTracker& EyeTracker)
{
    RETURN_IF_NOT_AVAILABLE();
    return IAndroidXREyeTrackingModule::Get().CreateEyeTracker(EyeTracker);
}

bool UAndroidXREyeTrackingBlueprintFunctionLibrary::DestroyEyeTracker(FAndroidXREyeTracker& EyeTracker)
{
    RETURN_IF_NOT_AVAILABLE();
    return IAndroidXREyeTrackingModule::Get().DestroyEyeTracker(EyeTracker);
}

bool UAndroidXREyeTrackingBlueprintFunctionLibrary::GetFineEyeTrackingInfo(const FAndroidXREyeTracker& EyeTracker, FAndroidXREyes& Eyes)
{
    RETURN_IF_NOT_AVAILABLE();
    return IAndroidXREyeTrackingModule::Get().GetFineEyeTrackingInfo(EyeTracker, Eyes);
}

bool UAndroidXREyeTrackingBlueprintFunctionLibrary::GetCoarseEyeTrackingInfo(const FAndroidXREyeTracker& EyeTracker, FAndroidXREyes& Eyes)
{
    RETURN_IF_NOT_AVAILABLE();
    return IAndroidXREyeTrackingModule::Get().GetCoarseEyeTrackingInfo(EyeTracker, Eyes);
}
