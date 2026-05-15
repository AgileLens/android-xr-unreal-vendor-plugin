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

#include "IHandTrackingMeshModule.h"
#include "IOpenXRExtensionPlugin.h"

#include <AndroidXRHelpers.h>

DECLARE_LOG_CATEGORY_EXTERN(LogHandTrackingMesh, Log, All);

class FHandTrackingMesh : public IHandTrackingMeshModule, public IOpenXRExtensionPlugin
{
protected:
    static constexpr uint32 kNumHands = 2;
public:
    FHandTrackingMesh();
    ~FHandTrackingMesh();

    /** IModuleInterface */
    void StartupModule() override;
    void ShutdownModule() override;

    /** IOpenXRExtensionPlugin */
    FString GetDisplayName() override
    {
        return FString(TEXT("HandTrackingMesh"));
    }

    void PostCreateInstance(XrInstance InInstance) override;
    void PostCreateSession(XrSession InSession) override;
    bool GetRequiredExtensions(TArray<const ANSICHAR*>& OutExtensions) override;
    void UpdateDeviceLocations(XrSession InSession, XrTime DisplayTime, XrSpace TrackingSpace) override;

    bool CreateHandMesh(EControllerHand ControllerHand,
        UMaterialInterface* Material,
        USkeletalMesh*& SkeletalMesh) override;
    bool SetHandMeshScale(EControllerHand ControllerHand,
        float Scale) override;
    bool GetJointTransforms(EControllerHand ControllerHand,
        TArray<FTransform>& JointTransforms) override;
    FName GetBoneNameFromHandKeypoint(EHandKeypoint HandKeypoint) override;
private:
    struct FHandData
    {
        XrHandTrackerEXT HandTracker{};
        XrHandTrackingScaleFB HandTrackingScale
        {
            .type = XR_TYPE_HAND_TRACKING_SCALE_FB
        };
        TArray<FTransform> JointTransforms;

        FHandData()
        {
            JointTransforms.SetNumZeroed(EHandKeypointCount);
        }
    };

    FHandData HandData[kNumHands];

    XrInstance Instance{};
    XrSession Session{};

    TUniquePtr<XrHandTrackingScaleFB> HandTrackingScale;

    #define HANDTRACKINGMESH_FUNCTIONS(HelperMacro) \
        HelperMacro(xrCreateHandTrackerEXT) \
        HelperMacro(xrDestroyHandTrackerEXT) \
        HelperMacro(xrLocateHandJointsEXT) \
        HelperMacro(xrGetHandMeshFB)

    HANDTRACKINGMESH_FUNCTIONS(DECLARE_OPENXR_FUNC);
};
