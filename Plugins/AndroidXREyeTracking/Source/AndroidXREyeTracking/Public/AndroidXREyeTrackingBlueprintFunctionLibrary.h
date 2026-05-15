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

#include "AndroidXREyeTrackingTypes.h"
#include "AndroidXREyeTrackingBlueprintFunctionLibrary.generated.h"

UCLASS(ClassGroup=AndroidXREyeTracking)
class ANDROIDXREYETRACKING_API UAndroidXREyeTrackingBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure, Category="AndroidXR|Eye Tracking Function Library")
    static bool SupportsEyeTracking();

    UFUNCTION(BlueprintPure, Category="AndroidXR|Eye Tracking Function Library")
    static bool IsTrackerValid(const FAndroidXREyeTracker& EyeTracker);

    UFUNCTION(BlueprintCallable, Category="AndroidXR|Eye Tracking Function Library")
    static bool CreateEyeTracker(FAndroidXREyeTracker& EyeTracker);

    UFUNCTION(BlueprintCallable, Category="AndroidXR|Eye Tracking Function Library")
    static bool DestroyEyeTracker(UPARAM(ref) FAndroidXREyeTracker& EyeTracker);

    UFUNCTION(BlueprintCallable, Category="AndroidXR|Eye Tracking Function Library")
    static bool GetFineEyeTrackingInfo(const FAndroidXREyeTracker& EyeTracker, FAndroidXREyes& Eyes);

    UFUNCTION(BlueprintCallable, Category="AndroidXR|Eye Tracking Function Library")
    static bool GetCoarseEyeTrackingInfo(const FAndroidXREyeTracker& EyeTracker, FAndroidXREyes& Eyes);
};
