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

#include "IHandInteractionInputDeviceModule.h"
#include "IOpenXRExtensionPlugin.h"
#include "HandInteractionDevice.h"
#include <AndroidXRHelpers.h>

struct FHandInteractionKeys {
    inline static FKey LeftAimClick{ "HandInteractionLeftAimClick" };
    inline static FKey LeftAimAxis{ "HandInteractionLeftAimAxis" };
    inline static FKey LeftGripClick{ "HandInteractionLeftGraspClick" };
    inline static FKey LeftGripAxis{ "HandInteractionLeftGraspAxis" };
    inline static FKey LeftPinchClick{ "HandInteractionLeftPinchClick" };
    inline static FKey LeftPinchAxis{ "HandInteractionLeftPinchAxis" };

    inline static FKey RightAimClick{ "HandInteractionRightAimClick" };
    inline static FKey RightAimAxis{ "HandInteractionRightAimAxis" };
    inline static FKey RightGripClick{ "HandInteractionRightGraspClick" };
    inline static FKey RightGripAxis{ "HandInteractionRightGraspAxis" };
    inline static FKey RightPinchClick{ "HandInteractionRightPinchClick" };
    inline static FKey RightPinchAxis{ "HandInteractionRightPinchAxis" };

    static FKey& GetKey(EControllerHand Hand, EOpenXRHandInteractionType InteractionType, EHandInteractionActionType ActionType);
};

class FHandInteractionInputDevice : public IHandInteractionInputDeviceModule
{
protected:
public:
    void StartupModule() override;
    FHandInteractionInputDevice();
    TSharedPtr<class IInputDevice> CreateInputDevice(const TSharedRef<FGenericApplicationMessageHandler>& InMessageHandler) override;
private:
    TSharedPtr<HandInteractionDevice> InputDevice{};
    TMap<EControllerHand, TMap<EOpenXRHandInteractionType, TMap<EHandInteractionActionType, FKeyDetails>>> HandKeyTable{};
};
