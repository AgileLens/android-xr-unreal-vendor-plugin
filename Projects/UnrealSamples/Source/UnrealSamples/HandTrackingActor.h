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
#include "HandTrackingActor.generated.h"

class AHandTrackingJointActor;
UCLASS()
class UNREALSAMPLES_API AHandTrackingActor : public AActor
{
	GENERATED_BODY()
public:
	AHandTrackingActor();

	UPROPERTY(EditDefaultsOnly)
	TSoftClassPtr<AHandTrackingJointActor> HandJointActorClass{};

	UFUNCTION(BlueprintCallable)
	void Initialize(EControllerHand Hand);

	UPROPERTY(BlueprintReadOnly)
	EControllerHand TrackingHand{};

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void ShouldShowHandJointLabels(bool bShowLabels);

	UFUNCTION(BlueprintCallable)
	void UpdateHandJointScaleFactor(float ScaleFactor);

	UFUNCTION(BlueprintCallable)
	void ShouldTrackHand(bool bShouldTrack);
private:
	TArray<TWeakObjectPtr<AHandTrackingJointActor>> HandJoints{};
	void SpawnHandJoints();

	bool bShouldTrackHand{ true };
};
