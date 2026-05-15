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

#include "AndroidXRTrackablesObjectTypes.h"

namespace AndroidXR
{
    inline XrObjectLabelANDROID Convert(EAndroidXRTrackablesObjectLabel UnrealType)
    {
        switch (UnrealType)
        {
            case EAndroidXRTrackablesObjectLabel::Unknown:
                return XR_OBJECT_LABEL_UNKNOWN_ANDROID;
            case EAndroidXRTrackablesObjectLabel::Keyboard:
                return XR_OBJECT_LABEL_KEYBOARD_ANDROID;
            case EAndroidXRTrackablesObjectLabel::Mouse:
                return XR_OBJECT_LABEL_MOUSE_ANDROID;
            case EAndroidXRTrackablesObjectLabel::Laptop:
                return XR_OBJECT_LABEL_LAPTOP_ANDROID;
            default:
                break;
        }
        return XR_OBJECT_LABEL_UNKNOWN_ANDROID;
    }
    inline EAndroidXRTrackablesObjectLabel Convert(XrObjectLabelANDROID NativeType)
    {
        switch (NativeType)
        {
            case XR_OBJECT_LABEL_UNKNOWN_ANDROID:
                return EAndroidXRTrackablesObjectLabel::Unknown;
            case XR_OBJECT_LABEL_KEYBOARD_ANDROID:
                return EAndroidXRTrackablesObjectLabel::Keyboard;
            case XR_OBJECT_LABEL_MOUSE_ANDROID:
                return EAndroidXRTrackablesObjectLabel::Mouse;
            case XR_OBJECT_LABEL_LAPTOP_ANDROID:
                return EAndroidXRTrackablesObjectLabel::Laptop;
            default:
                break;
        }
        return EAndroidXRTrackablesObjectLabel::Unknown;
    }
}