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
#include "Blueprint/UserWidget.h"
#include "OpenXRCore.h"
#include "openxr_delta.h"
#include "FollowMenuBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDebugMessageActorMessageDelegate,
    FString, DebugMessage);

UCLASS()
class UNREALSAMPLES_API UFollowMenuBase : public UUserWidget
{
    GENERATED_BODY()
protected:
    UPROPERTY(BlueprintAssignable)
    FDebugMessageActorMessageDelegate MessageDelegate{};

    XrDebugUtilsMessengerEXT DebugMessenger{};

    static XrBool32 DebugUtilsMessengerCallback(XrDebugUtilsMessageSeverityFlagsEXT SeverityFlags,
        XrDebugUtilsMessageTypeFlagsEXT MessageTypeFlags,
        const XrDebugUtilsMessengerCallbackDataEXT* CallbackData,
        void* UserData);

    void NativeDestruct() override;
public:
    UFUNCTION(BlueprintCallable)
    void CreateDebugMessageDelegate();

    UFUNCTION(BlueprintCallable)
    void DestroyDebugMessageDelegate();

    UFUNCTION(BlueprintImplementableEvent)
    void OnDebugMessage(const FString&   DebugMessage);
};
