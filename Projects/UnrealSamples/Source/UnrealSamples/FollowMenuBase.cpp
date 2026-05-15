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

#include "FollowMenuBase.h"
#include "IAndroidXRModule.h"

inline FString FlagsToString(const TArray<TTuple<uint32, FString>> FlagsAndStrings, uint32 SetFlags)
{
    FString BuiltString;

    for (const auto& FlagAndString : FlagsAndStrings)
    {
        if (SetFlags & FlagAndString.Get<0>())
        {
            BuiltString += FlagAndString.Get<1>() + FString(",");
        }
    }
    if (BuiltString.Len() > 0)
    {
        BuiltString.LeftChopInline(1);
    }
    else
    {
        BuiltString = FString("None");
    }
    return BuiltString;
}

XrBool32 XRAPI_CALL UFollowMenuBase::DebugUtilsMessengerCallback(
    XrDebugUtilsMessageSeverityFlagsEXT SeverityFlags,
    XrDebugUtilsMessageTypeFlagsEXT MessageTypeFlags,
    const XrDebugUtilsMessengerCallbackDataEXT* CallbackData,
    void* UserData)
{
    FString DebugMessage;

    DebugMessage += "SeverityFlags: ";
    DebugMessage += FlagsToString(
        {
            { XR_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT, "Verbose" },
            { XR_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT, "Info" },
            { XR_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT, "Warning" },
            { XR_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT, "Error" }
        },
        SeverityFlags
    );

    DebugMessage += "\nTypeFlags: ";
    DebugMessage += FlagsToString(
        {
            { XR_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT, "General" },
            { XR_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT, "Validation" },
            { XR_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT, "Performance" },
            { XR_DEBUG_UTILS_MESSAGE_TYPE_CONFORMANCE_BIT_EXT, "Conformance" }
        },
        MessageTypeFlags
    );

    DebugMessage += "\nMessageID: ";
    DebugMessage += UTF8_TO_TCHAR(CallbackData->messageId);
    DebugMessage += "\nFunction: ";
    DebugMessage += UTF8_TO_TCHAR(CallbackData->functionName);
    DebugMessage += "\nMessage: ";
    DebugMessage += UTF8_TO_TCHAR(CallbackData->message);
    DebugMessage += FString::Printf(TEXT("\n%d Objects %d Session Labels"),
        CallbackData->objectCount, CallbackData->sessionLabelCount);

    reinterpret_cast<UFollowMenuBase*>(UserData)->OnDebugMessage(DebugMessage);
    return XR_FALSE;
}

void UFollowMenuBase::CreateDebugMessageDelegate()
{
    XrDebugUtilsMessengerCreateInfoEXT MessengerCreateInfo
    {
        .type = XR_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT,
        .messageSeverities =
            XR_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT |
            XR_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT |
            XR_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT |
            XR_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT,
        .messageTypes =
            XR_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT |
            XR_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT |
            XR_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT |
            XR_DEBUG_UTILS_MESSAGE_TYPE_CONFORMANCE_BIT_EXT,
        .userCallback = &ThisClass::DebugUtilsMessengerCallback,
        .userData = this
    };

    IAndroidXRModule::Get().CreateDebugUtilsMessenger(MessengerCreateInfo, DebugMessenger);
}

void UFollowMenuBase::DestroyDebugMessageDelegate()
{
    if (DebugMessenger != XR_NULL_HANDLE)
    {
        IAndroidXRModule::Get().DestroyDebugUtilsMessenger(DebugMessenger);
    }
}

void UFollowMenuBase::NativeDestruct()
{
    DestroyDebugMessageDelegate();
    Super::NativeDestruct();
}
