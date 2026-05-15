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

#include "HandTrackingActor.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "HandTrackingJointActor.h"

AHandTrackingActor::AHandTrackingActor()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AHandTrackingActor::Initialize(EControllerHand Hand)
{
	TrackingHand = Hand;
}

void AHandTrackingActor::BeginPlay()
{
	Super::BeginPlay();
	SpawnHandJoints();
}

void AHandTrackingActor::Tick(float DeltaTime)
{
	if (!bShouldTrackHand)
	{
		return;
	}
	Super::Tick(DeltaTime);
	FXRHandTrackingState HandTrackingState{};
	UHeadMountedDisplayFunctionLibrary::GetHandTrackingState(this, EXRSpaceType::UnrealWorldSpace, TrackingHand, HandTrackingState);
	if (!HandTrackingState.bValid)
	{
		for (auto HandJoint : HandJoints)
		{
			HandJoint->ShowHandJoint(false);
		}
	}
	else
	{
		auto EnumPtr = StaticEnum<EHandKeypoint>();
		if (!EnumPtr)
		{
			return;
		}
		for (int i = 0; i < EHandKeypointCount; i++)
		{
			if (i >= HandJoints.Num())
			{
				break;
			}
			auto JointKey = EnumPtr->GetValueByIndex(i);
			auto& HandJointActor = HandJoints[i];
			HandJointActor->ShowHandJoint(true);
			HandJointActor->UpdateHandJoint(static_cast<EHandKeypoint>(JointKey), HandTrackingState.HandKeyLocations[i], HandTrackingState.HandKeyRotations[i], HandTrackingState.HandKeyRadii[i]);
		}
	}
}

void AHandTrackingActor::ShouldShowHandJointLabels(bool bShowLabels)
{
	for (auto& HandJoint : HandJoints)
	{
		HandJoint->bShouldShowLabel = bShowLabels;
	}
}

void AHandTrackingActor::UpdateHandJointScaleFactor(float ScaleFactor)
{
	for (auto& HandJoint : HandJoints)
	{
		HandJoint->ScaleFactor = ScaleFactor;
	}
}

void AHandTrackingActor::ShouldTrackHand(bool bShouldTrack)
{
	bShouldTrackHand = bShouldTrack;
	if (!bShouldTrackHand)
	{
		for (auto& HandJoint : HandJoints)
		{
			HandJoint->ShowHandJoint(false);
		}
	}
}

void AHandTrackingActor::SpawnHandJoints()
{
	auto EnumPtr = StaticEnum<EHandKeypoint>();
	if (!EnumPtr)
	{
		return;
	}
	FActorSpawnParameters SpawnParameters{};
	SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnParameters.Owner = this;

	auto SpawnClass = HandJointActorClass.LoadSynchronous();
	for (int i = 0; i < EHandKeypointCount; i++)
	{
		auto JointActor = GetWorld()->SpawnActor<AHandTrackingJointActor>(SpawnClass, SpawnParameters);
		if (!JointActor)
		{
			break;
		}
		JointActor->ShowHandJoint(false);
		HandJoints.Add(JointActor);
	}
}
