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
#include "Modules/ModuleManager.h"
#include "AndroidXRTypes.h"

/**
 * The public interface to this module.  In most cases, this interface is only
 * public to sibling modules within this plugin.
 */
class ANDROIDXRFACETRACKING_API IAndroidXRFaceTrackingModule : public IModuleInterface
{
public:
    /**
     * Singleton-like access to this module's interface.  This is just for
     * convenience! Beware of calling this during the shutdown phase, though. Your
     * module might have been unloaded already.
     *
     * @return Returns singleton instance, loading the module on demand if needed
     */
    static inline IAndroidXRFaceTrackingModule& Get()
    {
        return FModuleManager::LoadModuleChecked<IAndroidXRFaceTrackingModule>(FaceTrackingModuleName);
    }

    /**
     * Checks to see if this module is loaded and ready.  It is only valid to call
     * Get() if IsAvailable() returns true.
     *
     * @return True if the module is loaded and ready to use
     */
    static inline bool IsAvailable()
    {
        return FModuleManager::Get().IsModuleLoaded(FaceTrackingModuleName);
    }

    /**
     * Creates a face tracker
     * @param[out] FaceTracker The created face tracker
     * @return Whether the face tracker was created successfully
     */
    virtual bool CreateFaceTracker(FAndroidXRFaceTracker& FaceTracker) = 0;

    /**
     * Destroys a face tracker
     * @param[in] FaceTracker The face tracker to destroy
     * @return Whether the face tracker was destroyed successfully
     */
    virtual bool DestroyFaceTracker(FAndroidXRFaceTracker& FaceTracker) = 0;

    /**
     * Gets the calibration state of the face tracker
     * @param[in] FaceTracker The face tracker to check the calibration status for
     * @param[out] IsCalibrated The calibration status
     */
    virtual bool GetFaceCalibrationState(const FAndroidXRFaceTracker& FaceTracker, bool& IsCalibrated) = 0;

    /**
     * Gets the blend shapes of a facial expression
     * @param[in] FaceTracker The tracker to get the state through
     * @param[out] FaceState The face tracking state and facial expressions
     * @return Whether the state was able to be obtained successfully
     */
    virtual bool GetFaceState(const FAndroidXRFaceTracker& FaceTracker, FAndroidXRFaceState& FaceState) = 0;

private:
   inline static FName FaceTrackingModuleName = "AndroidXRFaceTracking";

};
