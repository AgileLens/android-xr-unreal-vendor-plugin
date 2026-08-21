// Copyright 2026 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GamepadMotionSensorsSubsystem.generated.h"

/**
 * Exposes the IMU of a connected Bluetooth gamepad.
 *
 * Android surfaces a gamepad's accelerometer and gyroscope through
 * InputDevice.getSensorManager() (API 31+), which is separate from the global
 * SensorManager -- the global one only reports the host device's own sensors.
 * On XR devices that do not ship tracked 6DoF controllers this is the only
 * route to a hand-held motion source, and it is enough for a 3DoF pointer.
 *
 * Orientation is integrated from the gyroscope. Pitch and roll can be kept
 * level against the accelerometer's gravity vector, but yaw has no absolute
 * reference and will drift, so expose a recenter action in your UI.
 *
 * Android only. On other platforms IsAvailable() returns false and the getters
 * return identity/zero.
 */
UCLASS()
class GAMEPADMOTIONSENSORS_API UGamepadMotionSensorsSubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;

    /**
     * Attaches to the first connected input device that exposes a gyroscope.
     * Safe to call repeatedly -- returns true if already attached. Call again
     * after a controller reconnects.
     */
    UFUNCTION(BlueprintCallable, Category = "Gamepad Motion Sensors")
    bool StartGamepadMotion();

    UFUNCTION(BlueprintCallable, Category = "Gamepad Motion Sensors")
    void StopGamepadMotion();

    /** True once a gamepad with a gyroscope has been attached. */
    UFUNCTION(BlueprintPure, Category = "Gamepad Motion Sensors")
    bool IsAvailable() const;

    /** Name of the attached device, e.g. "DualSense Wireless Controller". */
    UFUNCTION(BlueprintPure, Category = "Gamepad Motion Sensors")
    FString GetDeviceName() const;

    /** Integrated orientation of the controller. Identity until recentered. */
    UFUNCTION(BlueprintPure, Category = "Gamepad Motion Sensors")
    FRotator GetOrientation() const;

    /** Integrated orientation as a quaternion. */
    UFUNCTION(BlueprintPure, Category = "Gamepad Motion Sensors")
    FQuat GetOrientationQuat() const;

    /** Raw angular velocity in radians/second, per controller axis. */
    UFUNCTION(BlueprintPure, Category = "Gamepad Motion Sensors")
    FVector GetAngularVelocity() const;

    /** Raw acceleration in m/s^2, including gravity. */
    UFUNCTION(BlueprintPure, Category = "Gamepad Motion Sensors")
    FVector GetAcceleration() const;

    /** Measured delivery rate of gyroscope samples, in Hz. */
    UFUNCTION(BlueprintPure, Category = "Gamepad Motion Sensors")
    float GetSampleRateHz() const;

    /** Resets orientation to identity. Bind this to a button. */
    UFUNCTION(BlueprintCallable, Category = "Gamepad Motion Sensors")
    void Recenter();

    /** Called from the JNI callback on the Android sensor thread. */
    static void HandleMotionUpdate(const FQuat& InOrientation, const FVector& InGyro,
                                   const FVector& InAccel, float InHz);
};
