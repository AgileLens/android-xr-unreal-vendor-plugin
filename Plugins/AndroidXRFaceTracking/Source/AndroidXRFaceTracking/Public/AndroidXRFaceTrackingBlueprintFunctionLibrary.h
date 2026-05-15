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

#include "AndroidXRTypes.h"
#include "AndroidXRFaceTrackingBlueprintFunctionLibrary.generated.h"

UCLASS(ClassGroup=AndroidXRFaceTracking)
class ANDROIDXRFACETRACKING_API UAndroidXRFaceTrackingBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()
public:

    /**
     * Determines whether or not an FAndroidXRFaceTracker is valid.
     * @param[in] FaceTracker Face tracker to be verified.
     * @return True if the face tracker is valid.
     */
    UFUNCTION(BlueprintPure, Category="AndroidXR|Face Tracking Function Library")
    static bool IsValidFaceTracker(const FAndroidXRFaceTracker& FaceTracker);

     /**
     * Creates a face tracker
     * @param[out] FaceTracker The created face tracker
     * @return Whether the face tracker was created successfully
     */
    UFUNCTION(BlueprintCallable, Category="AndroidXR|Face Tracking Function Library")
    static bool CreateFaceTracker(FAndroidXRFaceTracker& FaceTracker);

    /**
     * Destroys a face tracker
     * @param[in] FaceTracker The face tracker to destroy
     * @return Whether the face tracker was destroyed successfully
     */
    UFUNCTION(BlueprintCallable, Category="AndroidXR|Face Tracking Function Library")
    static bool DestroyFaceTracker(UPARAM(ref) FAndroidXRFaceTracker& FaceTracker);

    /**
     * Gets the calibration state of the face tracker
     * @param[in] FaceTracker The face tracker to check the calibration status for
     * @param[out] IsCalibrated The calibration status
     */
    UFUNCTION(BlueprintCallable, Category="AndroidXR|Face Tracking Function Library")
    static bool GetFaceCalibrationState(const FAndroidXRFaceTracker& FaceTracker, bool& IsCalibrated);

     /**
     * Gets the blend shapes of a facial expression
     * @param[in] FaceTracker The tracker to get the state through
     * @param[out] FaceState The face tracking state and facial expressions
     * @return Whether the state was able to be obtained successfully
     */
    UFUNCTION(BlueprintCallable, Category="AndroidXR|Face Tracking Function Library")
    static bool GetFaceState(const FAndroidXRFaceTracker& FaceTracker, FAndroidXRFaceState& FaceState);
};
