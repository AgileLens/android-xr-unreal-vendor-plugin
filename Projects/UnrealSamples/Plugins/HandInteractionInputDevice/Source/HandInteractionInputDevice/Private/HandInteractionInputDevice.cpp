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

#include "HandInteractionInputDevice.h"

#define LOCTEXT_NAMESPACE "HandInteraction"

FHandInteractionInputDevice::FHandInteractionInputDevice()
{
}

FString GetKeyName(EControllerHand Hand, EOpenXRHandInteractionType Interaction, EHandInteractionActionType ActionType)
{
	auto ActionTypeStr = [](EHandInteractionActionType Type) {
		switch (Type)
		{
			case EHandInteractionActionType::Axis: return FString{ "Axis" };
			case EHandInteractionActionType::Click: return FString{ "Click" };
		}
		return FString{ "" };
	};

	auto HandStr = Hand == EControllerHand::Left ? FString{ "L" } : FString{ "R" };
	auto EnumPtr = StaticEnum<EControllerHand>();
	auto InteractionPtr = StaticEnum<EOpenXRHandInteractionType>();
	return FString::Printf(TEXT("Hand Interaction (%s) %s %s"), *EnumPtr->GetNameStringByValue(static_cast<uint64>(Hand)),
						   *InteractionPtr->GetNameStringByValue(static_cast<uint64>(Interaction)), *ActionTypeStr(ActionType));
}

FKeyDetails PopulateKeyDetails(EControllerHand Hand, EOpenXRHandInteractionType Interaction, EHandInteractionActionType ActionType)
{
	uint32 KeyFlags{};
	if (ActionType == EHandInteractionActionType::Axis)
	{
		KeyFlags |= FKeyDetails::EKeyFlags::Axis1D;
	}
	if (ActionType == EHandInteractionActionType::Click)
	{
		KeyFlags |= FKeyDetails::EKeyFlags::GamepadKey;
	}

	auto KeyName = GetKeyName(Hand, Interaction, ActionType);
	auto ActionKey = FHandInteractionKeys::GetKey(Hand, Interaction, ActionType);
	return FKeyDetails{ ActionKey, FText::FromString(KeyName), FText::FromString(KeyName), KeyFlags, "HandInteractionInput" };
}

void FHandInteractionInputDevice::StartupModule()
{
	TArray<EControllerHand> ValidHands{
			EControllerHand::Left,
			EControllerHand::Right
	};
	for (auto Hand : ValidHands)
	{
		HandKeyTable.Add(Hand, {});
	}
	TArray<EHandInteractionActionType> ValidActionTypes{
		EHandInteractionActionType::Click,
		EHandInteractionActionType::Axis,
	};

	TArray<EOpenXRHandInteractionType> ValidInteractionTypes{
		EOpenXRHandInteractionType::Aim,
		EOpenXRHandInteractionType::Grip,
		EOpenXRHandInteractionType::Pinch
	};
	EKeys::AddMenuCategoryDisplayInfo("HandInteractionInput", LOCTEXT("HandInteractionSubCategory", "HandInteraction"), TEXT("GraphEditor.PadEvent_16x"));
	for (auto Hand : ValidHands)
	{
		auto& KeyTable = HandKeyTable[Hand];
		for (auto InteractionType : ValidInteractionTypes)
		{
			auto& InteractionTable = KeyTable.Add(InteractionType, {});
			for (auto ActionType : ValidActionTypes)
			{
				auto KeyDetail = PopulateKeyDetails(Hand, InteractionType, ActionType);
				InteractionTable.Add(ActionType, KeyDetail);
				EKeys::AddKey(KeyDetail);
			}
		}
	}
	IHandInteractionInputDeviceModule::StartupModule();
}

TSharedPtr<class IInputDevice> FHandInteractionInputDevice::CreateInputDevice(const TSharedRef<FGenericApplicationMessageHandler>& InMessageHandler)
{
	if (InputDevice.IsValid())
	{
		return InputDevice;
	}
	InputDevice = MakeShared<HandInteractionDevice>(InMessageHandler);
	InputDevice->Initialize(HandKeyTable);
	return InputDevice;
}

FKey& FHandInteractionKeys::GetKey(EControllerHand Hand, EOpenXRHandInteractionType InteractionType, EHandInteractionActionType ActionType)
{
	if (Hand == EControllerHand::Left)
	{
		if (InteractionType == EOpenXRHandInteractionType::Aim)
		{
			if (ActionType == EHandInteractionActionType::Click)
			{
				return FHandInteractionKeys::LeftAimClick;
			}
			else
			{
				return FHandInteractionKeys::LeftAimAxis;
			}
		}
		if (InteractionType == EOpenXRHandInteractionType::Grip)
		{
			if (ActionType == EHandInteractionActionType::Click)
			{
				return FHandInteractionKeys::LeftGripClick;
			}
			else
			{
				return FHandInteractionKeys::LeftGripAxis;
			}
		}
		if (InteractionType == EOpenXRHandInteractionType::Pinch)
		{
			if (ActionType == EHandInteractionActionType::Click)
			{
				return FHandInteractionKeys::LeftPinchClick;
			}
			else
			{
				return FHandInteractionKeys::LeftPinchAxis;
			}
		}
	}
	if (Hand == EControllerHand::Right)
	{
		if (InteractionType == EOpenXRHandInteractionType::Aim)
		{
			if (ActionType == EHandInteractionActionType::Click)
			{
				return FHandInteractionKeys::RightAimClick;
			}
			else
			{
				return FHandInteractionKeys::RightAimAxis;
			}
		}
		if (InteractionType == EOpenXRHandInteractionType::Grip)
		{
			if (ActionType == EHandInteractionActionType::Click)
			{
				return FHandInteractionKeys::RightGripClick;
			}
			else
			{
				return FHandInteractionKeys::RightGripAxis;
			}
		}
		if (InteractionType == EOpenXRHandInteractionType::Pinch)
		{
			if (ActionType == EHandInteractionActionType::Click)
			{
				return FHandInteractionKeys::RightPinchClick;
			}
			else
			{
				return FHandInteractionKeys::RightPinchAxis;
			}
		}
	}
	return FHandInteractionKeys::LeftAimAxis;
}

IMPLEMENT_MODULE(FHandInteractionInputDevice, HandInteractionInputDevice);


