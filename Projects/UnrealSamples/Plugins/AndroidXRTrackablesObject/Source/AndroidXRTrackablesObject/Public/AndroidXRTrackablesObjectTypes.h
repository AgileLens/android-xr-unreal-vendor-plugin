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
#include "AndroidXRTypes.h"
#include "AndroidXRTrackablesObjectTypes.generated.h"

/**
 * The object Label for the trackables object.
 */
UENUM(BlueprintType)
enum class EAndroidXRTrackablesObjectLabel : uint8
{
    // The object Label for the trackables object is not known.
    Unknown = 0,
    // The object Label for the trackables object is keyboard.
    Keyboard = 1,
    // The object Label for the trackables object is mouse.
    Mouse = 2,
    // The object Label for the trackables object is laptop.
    Laptop = 3,
};

/**
 * The trackables object
 */
USTRUCT(BlueprintType)
struct FAndroidXRTrackableObject
{
    GENERATED_BODY()

    // Tracking state
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="AndroidXR| Trackables Object")
    EAndroidXRTrackingState TrackingState{};

    // Center pose
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="AndroidXR| Trackables Object")
    FTransform CenterPose{};

    // Extents (half width/height)
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="AndroidXR| Trackables Object")
    FVector Extents{};

    // Object label
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="AndroidXR| Trackables Object")
    EAndroidXRTrackablesObjectLabel ObjectLabel{};

    // Last updated time
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="AndroidXR| Trackables Object")
    FTimespan LastUpdatedTime{};
};