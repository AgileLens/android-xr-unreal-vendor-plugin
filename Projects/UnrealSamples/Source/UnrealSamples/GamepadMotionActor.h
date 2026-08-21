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
#include "GameFramework/Actor.h"
#include "GamepadMotionActor.generated.h"

class UGamepadMotionSensorsSubsystem;

/**
 * Rotates a mesh to match the orientation of a connected Bluetooth gamepad,
 * demonstrating the GamepadMotionSensors plugin.
 *
 * Android XR glasses-class devices do not currently ship tracked 6DoF
 * controllers, but a standard Bluetooth gamepad pairs and exposes its IMU
 * through InputDevice.getSensorManager(). That is enough for a 3DoF pointer.
 *
 * Orientation is integrated from the gyroscope, so yaw drifts over time.
 * Pressing Gamepad Face Button Bottom (A / cross) recenters.
 */
UCLASS()
class UNREALSAMPLES_API AGamepadMotionActor : public AActor
{
	GENERATED_BODY()

public:
	AGamepadMotionActor();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent);

	/** Mesh driven by the controller's orientation. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Gamepad Motion")
	TObjectPtr<class UStaticMeshComponent> Mesh;

	/**
	 * Status for on-screen display: which device is attached, its sample rate,
	 * or why no controller was found. Bound by the sample's Blueprint widget.
	 */
	UFUNCTION(BlueprintPure, Category = "Gamepad Motion")
	FString GetStatusText() const;

	/** True once a gamepad exposing a gyroscope has been attached. */
	UFUNCTION(BlueprintPure, Category = "Gamepad Motion")
	bool IsGamepadMotionAvailable() const;

	/** Resets orientation to identity. */
	UFUNCTION(BlueprintCallable, Category = "Gamepad Motion")
	void Recenter();

private:
	UGamepadMotionSensorsSubsystem* GetMotionSubsystem() const;

	/** Resolved in the constructor; the dynamic instance is made in BeginPlay. */
	UPROPERTY()
	TObjectPtr<class UMaterial> BaseMaterial;

	/** Material instance so the cube shades as a solid object, not world grid. */
	UPROPERTY()
	TObjectPtr<class UMaterialInstanceDynamic> DynamicMaterial;

	/**
	 * The controller may connect after the level loads, so retry attachment
	 * periodically rather than only once at BeginPlay.
	 */
	float RetryAccumulator = 0.0f;
};
