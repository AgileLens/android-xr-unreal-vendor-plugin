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
#include "IInputDevice.h"
#include "HandInteractionControllerAction.h"
#include "HandInteractionBlueprintFunctionLibrary.h"

class HANDINTERACTIONINPUTDEVICE_API HandInteractionDevice : public IInputDevice
{
public:
	HandInteractionDevice(TSharedRef<FGenericApplicationMessageHandler> InHandler);
	~HandInteractionDevice() = default;
	/** Tick the interface (e.g. check for new controllers) */
	void Tick(float DeltaTime) override;

	/** Poll for controller state and send events if needed */
	void SendControllerEvents() override;

	/** Set which MessageHandler will get the events from SendControllerEvents. */
	void SetMessageHandler(const TSharedRef< FGenericApplicationMessageHandler >& InMessageHandler) override;

	/** Exec handler to allow console commands to be passed through for debugging */
	bool Exec(UWorld* InWorld, const TCHAR* Cmd, FOutputDevice& Ar) {
		return false;
	}
	/**
	 * Force Feedback pass through functions
	 */
	void SetChannelValue(int32 ControllerId, FForceFeedbackChannelType ChannelType, float Value) override;
	void SetChannelValues(int32 ControllerId, const FForceFeedbackValues& values) override;

	void Initialize(TMap<EControllerHand, TMap<EOpenXRHandInteractionType, TMap<EHandInteractionActionType, FKeyDetails>>>& Table);
private:
	void CreateActions();

	TSharedRef<FGenericApplicationMessageHandler> MessageHandler{};
	TArray<FHandInteractionAction> Actions{};
	TMap<EControllerHand, TMap<EOpenXRHandInteractionType, TMap<EHandInteractionActionType, FKeyDetails>>> ActionKeyTable{};
};
