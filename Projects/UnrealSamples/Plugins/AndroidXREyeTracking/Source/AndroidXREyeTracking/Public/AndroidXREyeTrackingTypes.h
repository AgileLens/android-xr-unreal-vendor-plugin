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

#include <CoreMinimal.h>
#include <OpenXRCore.h>
#include "openxr_delta.h"
#include "AndroidXREyeTrackingTypes.generated.h"

UENUM(BlueprintType)
enum class EAndroidXREyeIndex : uint8
{
    Left = 0,
    Right = 1
};

UENUM(BlueprintType)
enum class EAndroidXREyeState : uint8
{
    Invalid = 0,
    Gazing = 1,
    Shut = 2
};

UENUM(BlueprintType)
enum class EAndroidXREyeTrackingMode : uint8
{
    Not_Tracking = 0,
    Right = 1,
    Left = 2,
    Both = 3
};

USTRUCT(BlueprintType)
struct FAndroidXREyeTracker
{
    GENERATED_BODY()

    XrEyeTrackerANDROID EyeTracker{ XR_NULL_HANDLE };
};

USTRUCT(BlueprintType)
struct FAndroidXREye
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AndroidXR|Eye Tracking")
    EAndroidXREyeState EyeState{};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AndroidXR|Eye Tracking")
    FTransform Transform{};
};

USTRUCT(BlueprintType)
struct FAndroidXREyes
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AndroidXR|Eye Tracking")
    TArray<FAndroidXREye> Eyes{};

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AndroidXR|Eye Tracking")
    EAndroidXREyeTrackingMode Mode{};
};