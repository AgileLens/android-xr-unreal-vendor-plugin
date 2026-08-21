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

#include "GamepadMotionActor.h"

#include "Components/StaticMeshComponent.h"
#include "Components/TextRenderComponent.h"
#include "Components/SceneComponent.h"
#include "Materials/Material.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Components/InputComponent.h"
#include "Engine/GameInstance.h"
#include "GamepadMotionSensorsSubsystem.h"
#include "GameFramework/InputSettings.h"
#include "UObject/ConstructorHelpers.h"

namespace
{
	/** How often to retry attaching, in seconds, while no gamepad is present. */
	constexpr float GamepadRetryIntervalSeconds = 2.0f;

	/**
	 * Long on X (the pointing axis), medium on Y, thin on Z -- distinct on all
	 * three axes so the mesh's orientation is unambiguous, which a uniform cube
	 * cannot convey.
	 */
	const FVector ControllerProportions(1.45f, 0.55f, 0.32f);
}

AGamepadMotionActor::AGamepadMotionActor()
{
	PrimaryActorTick.bCanEverTick = true;

	// The readout must not inherit the controller's rotation, so the mesh and the
	// text are siblings under a fixed pivot rather than the text being a child of
	// the mesh. Only the mesh is rotated in Tick.
	Pivot = CreateDefaultSubobject<USceneComponent>(TEXT("Pivot"));
	RootComponent = Pivot;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Pivot);

	// Applies to newly-dropped actors only. An actor already saved in a level
	// carries its own serialized component transform, which overrides this, so
	// the proportions are re-applied in BeginPlay as well.
	Mesh->SetRelativeScale3D(ControllerProportions);

	// Fall back to the engine cube so the actor is visible when dropped into a
	// level without further setup.
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMesh(
		TEXT("/Engine/BasicShapes/Cube.Cube"));
	if (CubeMesh.Succeeded())
	{
		Mesh->SetStaticMesh(CubeMesh.Object);
	}

	// The default material on BasicShapes is the world grid, which reads as
	// "unconfigured" rather than as a deliberate sample. Only the asset
	// reference is resolved here -- the dynamic instance is created in
	// BeginPlay, because UObject constructors can run on async-loading worker
	// threads and touching the render proxy there trips
	// "Assertion failed: IsInGameThread()" in RendererScene.
	static ConstructorHelpers::FObjectFinder<UMaterial> BaseMaterialFinder(
		TEXT("/Engine/BasicShapes/BasicShapeMaterial.BasicShapeMaterial"));
	if (BaseMaterialFinder.Succeeded())
	{
		BaseMaterial = BaseMaterialFinder.Object;
	}
	Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// The readout is rendered in world space rather than through UMG so the
	// sample works when dropped into a level with no Blueprint or widget setup.
	StatusText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("StatusText"));
	StatusText->SetupAttachment(Pivot);
	StatusText->SetRelativeLocation(FVector(0.0f, 0.0f, 140.0f));
	// TextRenderComponent's glyphs face +X by default, which points away from a
	// viewer standing in front of the actor. Yaw 180 turns them around.
	StatusText->SetRelativeRotation(FRotator(0.0f, 180.0f, 0.0f));
	StatusText->SetRelativeScale3D(FVector(0.35f));
	StatusText->SetHorizontalAlignment(EHTA_Center);
	StatusText->SetVerticalAlignment(EVRTA_TextTop);
	StatusText->SetTextRenderColor(FColor(225, 233, 239));
	StatusText->SetWorldSize(18.0f);
	StatusText->SetText(FText::FromString(TEXT("Gamepad Motion")));
}

UGamepadMotionSensorsSubsystem* AGamepadMotionActor::GetMotionSubsystem() const
{
	if (const UWorld* World = GetWorld())
	{
		if (UGameInstance* GameInstance = World->GetGameInstance())
		{
			return GameInstance->GetSubsystem<UGamepadMotionSensorsSubsystem>();
		}
	}
	return nullptr;
}

void AGamepadMotionActor::BeginPlay()
{
	Super::BeginPlay();

	// Re-assert the proportions: a level-placed actor's serialized component
	// transform takes precedence over the constructor default, so a cube saved
	// before this shape existed would otherwise stay a cube.
	if (Mesh)
	{
		Mesh->SetRelativeScale3D(ControllerProportions);
	}

	// Safe here: BeginPlay is guaranteed to run on the game thread.
	if (BaseMaterial)
	{
		DynamicMaterial = UMaterialInstanceDynamic::Create(BaseMaterial, this);
		if (DynamicMaterial)
		{
			DynamicMaterial->SetVectorParameterValue(TEXT("Color"), FLinearColor(0.16f, 0.38f, 0.72f));
			Mesh->SetMaterial(0, DynamicMaterial);
		}
	}

	if (UGamepadMotionSensorsSubsystem* Motion = GetMotionSubsystem())
	{
		Motion->StartGamepadMotion();
	}

	// Recenter on the gamepad's bottom face button (A / cross).
	if (APlayerController* PC = GetWorld() ? GetWorld()->GetFirstPlayerController() : nullptr)
	{
		EnableInput(PC);
		if (InputComponent)
		{
			// Bind all four so the sample works regardless of controller layout
			// and the user does not have to guess which button calibrates.
			const TArray<FKey> RecenterKeys = {
				EKeys::Gamepad_FaceButton_Bottom, EKeys::Gamepad_FaceButton_Right,
				EKeys::Gamepad_FaceButton_Left,   EKeys::Gamepad_FaceButton_Top,
				EKeys::Gamepad_Special_Right
			};
			for (const FKey& Key : RecenterKeys)
			{
				InputComponent->BindKey(Key, IE_Pressed, this, &AGamepadMotionActor::Recenter);
			}
		}
	}
}

void AGamepadMotionActor::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	if (PlayerInputComponent)
	{
		PlayerInputComponent->BindKey(EKeys::Gamepad_FaceButton_Bottom, IE_Pressed,
			this, &AGamepadMotionActor::Recenter);
	}
}

void AGamepadMotionActor::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (RecenterFlashSeconds > 0.0f)
	{
		RecenterFlashSeconds = FMath::Max(0.0f, RecenterFlashSeconds - DeltaSeconds);
		if (StatusText)
		{
			StatusText->SetTextRenderColor(RecenterFlashSeconds > 0.0f
				? FColor(85, 188, 162) : FColor(225, 233, 239));
		}
	}

	UGamepadMotionSensorsSubsystem* Motion = GetMotionSubsystem();
	if (Motion == nullptr)
	{
		return;
	}

	if (!Motion->IsAvailable())
	{
		// A controller may be switched on after the level loads.
		RetryAccumulator += DeltaSeconds;
		if (RetryAccumulator >= GamepadRetryIntervalSeconds)
		{
			RetryAccumulator = 0.0f;
			Motion->StartGamepadMotion();
		}
		if (StatusText)
		{
			StatusText->SetText(FText::FromString(GetStatusText()));
		}
		return;
	}

	Mesh->SetWorldRotation(Motion->GetOrientationQuat());

	if (StatusText)
	{
		StatusText->SetText(FText::FromString(GetStatusText()));
	}
}

void AGamepadMotionActor::Recenter()
{
	if (UGamepadMotionSensorsSubsystem* Motion = GetMotionSubsystem())
	{
		Motion->Recenter();
		RecenterFlashSeconds = 0.6f;
	}
}

bool AGamepadMotionActor::IsGamepadMotionAvailable() const
{
	const UGamepadMotionSensorsSubsystem* Motion = GetMotionSubsystem();
	return Motion != nullptr && Motion->IsAvailable();
}

FString AGamepadMotionActor::GetStatusText() const
{
	const UGamepadMotionSensorsSubsystem* Motion = GetMotionSubsystem();
	if (Motion == nullptr)
	{
		return TEXT("GamepadMotionSensors subsystem unavailable.");
	}
	if (!Motion->IsAvailable())
	{
		return TEXT("No gamepad with a gyroscope connected.\n"
					"Pair a Bluetooth controller that reports motion sensors,\n"
					"for example a PS5 DualSense.");
	}

	const FVector Gyro = Motion->GetAngularVelocity();
	const FVector Accel = Motion->GetAcceleration();
	const FRotator Rot = Motion->GetOrientation();
	// Gravity magnitude is a useful sanity check: a stationary controller should
	// read ~9.81 m/s^2. A wildly different value means the axes or scaling are
	// wrong, which is otherwise easy to miss.
	const float AccelMagnitude = Accel.Size();
	const float Battery = Motion->GetBatteryLevel();
	const FString BatteryText = Battery >= 0.0f
		? FString::Printf(TEXT("%3.0f%%"), Battery * 100.0f)
		: TEXT("n/a");

	return FString::Printf(TEXT(
		"%s\n"
		"rate      %5.0f Hz     battery %s\n"
		"\n"
		"gyro      %7.2f %7.2f %7.2f  rad/s\n"
		"accel     %7.2f %7.2f %7.2f  m/s\u00B2\n"
		"|accel|   %7.2f  m/s\u00B2  (~9.81 at rest)\n"
		"\n"
		"pitch     %7.1f\u00B0\n"
		"yaw       %7.1f\u00B0  (drifts - integrated)\n"
		"roll      %7.1f\u00B0\n"
		"\n"
		"Press A to recenter"),
		*Motion->GetDeviceName(),
		Motion->GetSampleRateHz(), *BatteryText,
		Gyro.X, Gyro.Y, Gyro.Z,
		Accel.X, Accel.Y, Accel.Z,
		AccelMagnitude,
		Rot.Pitch, Rot.Yaw, Rot.Roll);
}
