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

namespace AndroidXR
{
    inline EAndroidXREyeState Convert(XrEyeStateANDROID NativeType)
    {
        switch (NativeType)
        {
        case XrEyeStateANDROID::XR_EYE_STATE_GAZING_ANDROID:
            return EAndroidXREyeState::Gazing;
        case XrEyeStateANDROID::XR_EYE_STATE_INVALID_ANDROID:
            return EAndroidXREyeState::Invalid;
        case XrEyeStateANDROID::XR_EYE_STATE_SHUT_ANDROID:
            return EAndroidXREyeState::Shut;
        default:
            return EAndroidXREyeState::Invalid;
        }
    }

    inline EAndroidXREyeTrackingMode Convert(XrEyeTrackingModeANDROID NativeType)
    {
        switch (NativeType)
        {
        case XrEyeTrackingModeANDROID::XR_EYE_TRACKING_MODE_BOTH_ANDROID:
            return EAndroidXREyeTrackingMode::Both;
        case XrEyeTrackingModeANDROID::XR_EYE_TRACKING_MODE_LEFT_ANDROID:
            return EAndroidXREyeTrackingMode::Left;
        case XrEyeTrackingModeANDROID::XR_EYE_TRACKING_MODE_RIGHT_ANDROID:
            return EAndroidXREyeTrackingMode::Right;
        case XrEyeTrackingModeANDROID::XR_EYE_TRACKING_MODE_NOT_TRACKING_ANDROID:
            return EAndroidXREyeTrackingMode::Not_Tracking;
        default:
            return EAndroidXREyeTrackingMode::Not_Tracking;
        }
    }
}