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

#include "AndroidXRStreamingConsts.h"
#include "Internationalization/StringTableRegistry.h"

#define ENUM_KEY(Value) #Value
#define ANDROIDXR_STREAMING_TABLE "AndroidXRStreamingTable"

#define SET_STRING(Key, Value) LOCTABLE_SETSTRING(ANDROIDXR_STREAMING_TABLE, ENUM_KEY(Key), Value);

TSharedRef<FAndroidXRStreamingConsts> FAndroidXRStreamingConsts::Get()
{
    if(!Instance.IsValid())
    {
        Instance = MakeShared<FAndroidXRStreamingConsts>();
    }
    return Instance.ToSharedRef();
}

FText FAndroidXRStreamingConsts::GetTextInternal(EAndroidXRStringKey Key)
{
    auto EnumPtr = StaticEnum<EAndroidXRStringKey>();
    auto KeyStr = EnumPtr->GenerateFullEnumName(*EnumPtr->GetNameStringByValue(static_cast<int64>(Key)));
    return FText::FromStringTable(ANDROIDXR_STREAMING_TABLE, KeyStr);
}

FAndroidXRStreamingConsts::FAndroidXRStreamingConsts()
{
    LOCTABLE_NEW(ANDROIDXR_STREAMING_TABLE, ANDROIDXR_STREAMING_TABLE);
    SET_STRING(EAndroidXRStringKey::RefreshButtonText, "Refresh");
    SET_STRING(EAndroidXRStringKey::ResetButtonText, "Reset");
    SET_STRING(EAndroidXRStringKey::SeachingForDevices, "Searching for compatible devices");
    SET_STRING(EAndroidXRStringKey::ClientStartingMessage, "Starting Streaming Client on {0}");
    SET_STRING(EAndroidXRStringKey::ClientStartedSuccessMessage, "XR Streaming client was successfully started on {0}");
    SET_STRING(EAndroidXRStringKey::ClientStoppingMessage, "Stopping Streaming Client on {0}");
    SET_STRING(EAndroidXRStringKey::ClientStopFailMessage, "XR Streaming Client could not be stopped on {0}. Failed with {0}");
    SET_STRING(EAndroidXRStringKey::ClientStartFailedMessage, "XR Streaming Client could not be started on {0}. Failed with: {0}");
    SET_STRING(EAndroidXRStringKey::InvalidTarget, "The selected XR Streaming target {0} is invalid.");
    SET_STRING(EAndroidXRStringKey::NoTargetSelected, "No streaming target was selected. Please select one through the AndroidXRStreamingClient plugin settings");
    SET_STRING(EAndroidXRStringKey::TargetSelectedMessage, "{0} was selected as the XR Streaming target");
    SET_STRING(EAndroidXRStringKey::ConnectedDevicesText, "Connected Devices");
    SET_STRING(EAndroidXRStringKey::StreamingErrorText, "AndroidXR Streaming Error");
    SET_STRING(EAndroidXRStringKey::StreamingNotificationTitle, "AndroidXR Streaming");
    SET_STRING(EAndroidXRStringKey::NoCompatibleDevicesFound, "No compatible devices were found.");
    SET_STRING(EAndroidXRStringKey::StreamingClientRunning, "XR Streaming client is already running.");
}
