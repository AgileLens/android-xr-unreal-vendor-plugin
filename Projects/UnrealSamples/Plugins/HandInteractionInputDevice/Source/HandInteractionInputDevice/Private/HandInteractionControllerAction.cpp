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

#include "HandInteractionControllerAction.h"
#include "HandInteractionBlueprintFunctionLibrary.h"

FHandInteractionAction::FHandInteractionAction(EHandInteractionActionType InActionType, EControllerHand InHand, EOpenXRHandInteractionType InInteractionType, const FKeyDetails& InKeyDetails)
	: ActionType(InActionType), Hand(InHand), InteractionType(InInteractionType), KeyDetails(InKeyDetails)
{
}

void FHandInteractionAction::UpdateState() {
	switch (ActionType)
	{
		case EHandInteractionActionType::Axis:
		{
			bLastActionResult = UHandInteractionBlueprintFunctionLibrary::GetInteractionValue(Hand, InteractionType, CurrentState.FloatValue);
			break;
		}
		case EHandInteractionActionType::Click:
		{
			bPreviousBoolValue = CurrentState.bBooleanValue;
			CurrentState.bBooleanValue = bLastActionResult = UHandInteractionBlueprintFunctionLibrary::GetInteractionReady(Hand, InteractionType);
			break;
		}
	}
}

void FHandInteractionAction::FireControllerEvent(TSharedPtr<FGenericApplicationMessageHandler>& MessageHandler, FPlatformUserId& UserId, FInputDeviceId& DeviceId)
{
	UpdateState();
	if (ActionType == EHandInteractionActionType::Click)
	{
		if (CurrentState.bBooleanValue && !bPreviousBoolValue)
		{
			MessageHandler->OnControllerButtonPressed(KeyDetails.GetKey().GetFName(), UserId, DeviceId, false);
		}
		else if(!CurrentState.bBooleanValue && bPreviousBoolValue)
		{
			MessageHandler->OnControllerButtonReleased(KeyDetails.GetKey().GetFName(), UserId, DeviceId, false);
		}
	}
	if (ActionType == EHandInteractionActionType::Axis)
	{
		if (!bLastActionResult)
		{
			return;
		}
		MessageHandler->OnControllerAnalog(KeyDetails.GetKey().GetFName(), UserId, DeviceId, CurrentState.FloatValue);
	}
}
