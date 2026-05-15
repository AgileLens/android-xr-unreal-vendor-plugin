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
#include <HeadMountedDisplayFunctionLibrary.h>
#include "HandTrackingJointActor.generated.h"

UCLASS()
class UNREALSAMPLES_API AHandTrackingJointActor : public AActor
{
	GENERATED_BODY()

public:
	AHandTrackingJointActor();

public:
	UFUNCTION(BlueprintImplementableEvent)
	void UpdateHandJoint(EHandKeypoint HandKeyPoint, const FVector& JointPosition, const FQuat& JointRotation, float JointRadius);

	UFUNCTION()
	void ShowHandJoint(bool bShouldShow);

	UPROPERTY(BlueprintReadOnly)
	float ScaleFactor = 0.33f;

	UPROPERTY(BlueprintReadOnly)
	bool bShouldShowLabel = true;
};
