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

#include "HandInteractionDevice.h"

HandInteractionDevice::HandInteractionDevice(TSharedRef<FGenericApplicationMessageHandler> InHandler)
	: MessageHandler(InHandler)
{
}

void HandInteractionDevice::Tick(float DeltaTime)
{
}

void HandInteractionDevice::SendControllerEvents()
{
	auto Handler = MessageHandler.ToSharedPtr();
	auto UserId = IPlatformInputDeviceMapper::Get().GetPrimaryPlatformUser();
	auto DeviceId = IPlatformInputDeviceMapper::Get().GetDefaultInputDevice();
	for (auto& Action : Actions)
	{
		Action.FireControllerEvent(Handler, UserId, DeviceId);
	}
}

void HandInteractionDevice::SetMessageHandler(const TSharedRef<FGenericApplicationMessageHandler>& InMessageHandler)
{
	MessageHandler = InMessageHandler;
}

void HandInteractionDevice::SetChannelValue(int32 ControllerId, FForceFeedbackChannelType ChannelType, float Value)
{
}



void HandInteractionDevice::Initialize(TMap<EControllerHand, TMap<EOpenXRHandInteractionType, TMap<EHandInteractionActionType, FKeyDetails>>>& Table) {
	ActionKeyTable = Table;
	CreateActions();
}

void HandInteractionDevice::CreateActions()
{
	for (auto& [Hand, InteractionTable] : ActionKeyTable)
	{
		for (auto& [Interaction, KeyTable] : InteractionTable)
		{
			for (auto& [InteractionType, KeyDetail] : KeyTable)
			{
				Actions.Emplace(InteractionType, Hand, Interaction, KeyDetail);
			}
		}
	}
}

void HandInteractionDevice::SetChannelValues(int32 ControllerId, const FForceFeedbackValues& values)
{
}
