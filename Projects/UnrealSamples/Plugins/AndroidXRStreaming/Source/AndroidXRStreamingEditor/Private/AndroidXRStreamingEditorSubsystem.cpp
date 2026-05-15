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

#include "AndroidXRStreamingEditorSubsystem.h"
#include "AndroidXRStreamingClientSettings.h"
#include "EditorDialogLibrary.h"
#include "Internationalization/StringTableRegistry.h"
#include "SocketSubsystem.h"
#include "IPAddress.h"
#include "Framework/Notifications/NotificationManager.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "AndroidXRSettings.h"

DEFINE_LOG_CATEGORY(LogAndroidXRStreamingEditorSubsystem)

const FString XRStreamingClientActivity = "com.google.vr.streaming.client.XrStreamingActivity";
const FString XRStreamingClientPackage = "com.google.vr.streaming.client";

static void LogMessage(const FString& Message, ELogVerbosity::Type Verbosity)
{
    if(Verbosity == ELogVerbosity::Error)
    {
        UE_LOG(LogAndroidXRStreamingEditorSubsystem, Error, TEXT("%s"), *Message);
    }
    else if(Verbosity == ELogVerbosity::Warning)
    {
        UE_LOG(LogAndroidXRStreamingEditorSubsystem, Warning, TEXT("%s"), *Message);
    }
    else
    {
        UE_LOG(LogAndroidXRStreamingEditorSubsystem, Log, TEXT("%s"), *Message);
    }
}

static void ShowNotification(const FText& Message, SNotificationItem::ECompletionState CompletionState)
{
    FNotificationInfo NotificationInfo{ FAndroidXRStreamingConsts::GetText(EAndroidXRStringKey::StreamingNotificationTitle) };
    NotificationInfo.SubText = Message;
    auto Notification = FSlateNotificationManager::Get().AddNotification(NotificationInfo);
    Notification->SetCompletionState(CompletionState);
    LogMessage(Message.ToString(), CompletionState == SNotificationItem::ECompletionState::CS_Fail ? ELogVerbosity::Error : ELogVerbosity::Log);
}

static TSharedPtr<SNotificationItem> GetNotification(const FText& Message)
{
    FNotificationInfo NotificationInfo{ FAndroidXRStreamingConsts::GetText(EAndroidXRStringKey::StreamingNotificationTitle) };
    NotificationInfo.SubText = Message;
    auto Notification = FSlateNotificationManager::Get().AddNotification(NotificationInfo);
    return Notification;
}

static void ShowErrorDialog(const FText& Message)
{
    auto Settings = GetDefault<UAndroidXRStreamingClientSettings>();
    if(Settings && Settings->bShowErrorDialogs)
    {
        auto ErrorHeader = FAndroidXRStreamingConsts::GetText(EAndroidXRStringKey::StreamingErrorText);
        UEditorDialogLibrary::ShowMessage(ErrorHeader, Message, EAppMsgType::Type::Ok, EAppReturnType::Ok, EAppMsgCategory::Error);
    }
    LogMessage(Message.ToString(), ELogVerbosity::Error);
}

void UAndroidXRStreamingEditorSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    BeginPIEHandle = FEditorDelegates::BeginPIE.AddUObject(this, &UAndroidXRStreamingEditorSubsystem::LaunchStreamingClient);
    ExitPIEHandle = FEditorDelegates::EndPIE.AddUObject(this, &UAndroidXRStreamingEditorSubsystem::ShutdownStreamingClient);

    auto SocketSubsystem = ISocketSubsystem::Get();
    TArray<FString> AddressStrings{};
    if(SocketSubsystem)
    {
        TArray<TSharedPtr<FInternetAddr>> Addresses{};
        SocketSubsystem->GetLocalAdapterAddresses(Addresses);
        Algo::Transform(Addresses, AddressStrings, [](const TSharedPtr<FInternetAddr>& Addr)
        {
            return Addr->ToString(false);
        });
        if(!AddressStrings.IsEmpty())
        {
            HostIpAddress = AddressStrings[0];
        }
    }
}

void UAndroidXRStreamingEditorSubsystem::Deinitialize()
{
    FEditorDelegates::BeginPIE.Remove(BeginPIEHandle);
    FEditorDelegates::EndPIE.Remove(ExitPIEHandle);
}

void UAndroidXRStreamingEditorSubsystem::LaunchStreamingClient(bool bIsSimulating)
{
    auto Settings = GetDefault<UAndroidXRStreamingClientSettings>();
    if(!Settings->bAutoStartClientOnPreview)
    {
        return;
    }
    auto ErrorHeader = FAndroidXRStreamingConsts::GetText(EAndroidXRStringKey::StreamingErrorText);
    if(SelectedTargetDevice.IsEmpty())
    {
        ShowErrorDialog(FAndroidXRStreamingConsts::GetText(EAndroidXRStringKey::NoTargetSelected));
        return;
    }
    if(!IsSelectedTargetConnected())
    {
        ShowErrorDialog(FAndroidXRStreamingConsts::GetText(EAndroidXRStringKey::InvalidTarget, SelectedTargetDevice));
        return;
    }
    LaunchStreamingClientAsync();
}

void UAndroidXRStreamingEditorSubsystem::ShutdownStreamingClient(bool bIsExiting)
{
    auto Settings = GetDefault<UAndroidXRStreamingClientSettings>();
    if(!Settings->bAutoStopClientOnPreview)
    {
        return;
    }
    if(!IsSelectedTargetConnected())
    {
        return;
    }
    ShutdownStreamingClientAsync();
}


void UAndroidXRStreamingEditorSubsystem::RefreshClients()
{
    RefreshClientsAsync();
}

FString RefreshAdbPath()
{
    auto& DeviceDetectionModule = FModuleManager::LoadModuleChecked<IAndroidDeviceDetectionModule>(TEXT("AndroidDeviceDetection"));
    auto DeviceDetection = DeviceDetectionModule.GetAndroidDeviceDetection();
    if(!DeviceDetection)
    {
        LogMessage(TEXT("Device Detection was not found. Could not detect compatible connected devices"), ELogVerbosity::Error);
        return FString{};
    }
    return DeviceDetection->GetADBPath();
}

void UAndroidXRStreamingEditorSubsystem::SelectTargetDevice(const FString& DeviceName)
{
    SelectedTargetDevice = DeviceName;
    if(SelectedTargetDevice.IsEmpty())
    {
        return;
    }
    ShowNotification(FAndroidXRStreamingConsts::GetText(EAndroidXRStringKey::TargetSelectedMessage, SelectedTargetDevice), SNotificationItem::ECompletionState::CS_Success);
}

bool UAndroidXRStreamingEditorSubsystem::IsTargetDeviceValid(const FString& AdbPath, const FString& DeviceName, const FAndroidDeviceInfo& DeviceInfo)
{
    if(DeviceInfo.SerialNumber.IsEmpty())
    {
        return false;
    }
    //Check if device does have the streaming client installed
    const auto CheckClientCommand = FString::Printf(TEXT("-s %s shell pm list packages \"%s\""), *DeviceInfo.SerialNumber, *XRStreamingClientPackage);
    FString Output{};
    if(RunAdbCommand(AdbPath, CheckClientCommand, Output))
    {
        return Output.Contains(XRStreamingClientPackage);
    }
    return false;
}

void UAndroidXRStreamingEditorSubsystem::PerformTaskAsync(TFunction<void(TSharedRef<FStreamingClientTaskResult>)> Function, EAndroidXRStringKey StartKey)
{
    using namespace UE::Tasks;
    auto Notification = GetNotification(FAndroidXRStreamingConsts::GetText(StartKey, SelectedTargetDevice));
    Notification->SetCompletionState(SNotificationItem::ECompletionState::CS_Pending);
    TSharedRef<FStreamingClientTaskResult> Result = MakeShared<FStreamingClientTaskResult>();
    auto Task = Launch(UE_SOURCE_LOCATION, [Result, Function]()
    {
        Function(Result);
    });
    TArray<FTask> Prereq{ Task };
    auto CleanupTask = UE::Tasks::Launch(UE_SOURCE_LOCATION, [Result, Notification, this]()
    {
        auto NotificationState = Result->bSuccess ? SNotificationItem::CS_Success : SNotificationItem::CS_Fail;
        Notification->SetCompletionState(NotificationState);
        if(!Result->bSuccess)
        {
            LogMessage(Result->ErrorMessage, ELogVerbosity::Error);
        }
    }, Prereq, LowLevelTasks::ETaskPriority::Normal, EExtendedTaskPriority::GameThreadNormalPri);
}

bool UAndroidXRStreamingEditorSubsystem::IsSelectedTargetConnected()
{
    return !SelectedTargetDevice.IsEmpty() && ConnectedClients.Contains(SelectedTargetDevice);
}

bool UAndroidXRStreamingEditorSubsystem::IsStreamingClientRunning()
{
    auto AdbPath = RefreshAdbPath();
    auto Command = FString::Printf(TEXT("shell \"dumpsys activity activities | grep %s\""), *XRStreamingClientActivity);
    FString Output{};
    RunAdbCommand(AdbPath, Command, Output);
    return !Output.IsEmpty();
}

void UAndroidXRStreamingEditorSubsystem::RefreshClientsAsync()
{
    if(bFetchingDevices)
    {
        return;
    }
    bFetchingDevices = true;
    using namespace UE::Tasks;
    using FClientTaskResult = TPair<FString, TMap<FString, FAndroidDeviceInfo>>;
    TSharedRef<FClientTaskResult> TaskResult = MakeShared<FClientTaskResult>();
    ConnectedClients.Reset();
    auto AdbPath = RefreshAdbPath();
    auto Notification = GetNotification(FAndroidXRStreamingConsts::GetText(EAndroidXRStringKey::SeachingForDevices));
    Notification->SetCompletionState(SNotificationItem::ECompletionState::CS_Pending);
    auto FindAllDevicesTask = Launch(UE_SOURCE_LOCATION, [AdbPath, TaskResult]()
    {
        TMap<FString, FAndroidDeviceInfo>& Clients = TaskResult->Value;
        FString& FirstDevice = TaskResult->Key;
        auto& DeviceDetectionModule = FModuleManager::LoadModuleChecked<IAndroidDeviceDetectionModule>(TEXT("AndroidDeviceDetection"));
        auto DeviceDetection = DeviceDetectionModule.GetAndroidDeviceDetection();
        if(!DeviceDetection)
        {
            LogMessage(TEXT("Device Detection was not found. Could not detect compatible connected devices"), ELogVerbosity::Error);
            return;
        }
        {
            FScopeLock DeviceMapLock{ DeviceDetection->GetDeviceMapLock() };
            const auto& AllDevices = DeviceDetection->GetDeviceMap();
            auto bIsFirstEntry = true;
            for(auto& [DeviceName, DeviceInfo] : AllDevices)
            {
                if(!IsTargetDeviceValid(AdbPath, DeviceName, DeviceInfo))
                {
                    continue;
                }
                if(bIsFirstEntry)
                {
                    FirstDevice = DeviceName;
                    bIsFirstEntry = false;
                }
                Clients.Add(DeviceName, DeviceInfo);
            }
        }
    });
    TArray<FTask> Prereq{ FindAllDevicesTask };
    auto CleanupTask = UE::Tasks::Launch(UE_SOURCE_LOCATION, [TaskResult, Notification, this]()
    {
        Notification->SetCompletionState(SNotificationItem::CS_Success);
        ConnectedClients = TaskResult->Value;
        auto Settings = GetDefault<UAndroidXRStreamingClientSettings>();
        if(Settings->bAutoSelectCompatibleDevice) {
            SelectTargetDevice(TaskResult->Key);
        }
        bFetchingDevices = false;
        OnDevicesRefreshed.ExecuteIfBound();
    }, Prereq, LowLevelTasks::ETaskPriority::Normal, EExtendedTaskPriority::GameThreadNormalPri);
}

void UAndroidXRStreamingEditorSubsystem::LaunchStreamingClientAsync()
{
    using namespace UE::Tasks;

    auto ClientCpy = ConnectedClients;
    auto AdbPath = RefreshAdbPath();
    auto StreamingMode = GetDefault<UAndroidXRStreamingClientSettings>()->StreamingMode;
    //if experimental features are not enabled, then default to USB
    if(!GetDefault<UAndroidXRSettings>()->bEnableExperimentalFeatures)
    {
        StreamingMode = EAndroidXRClientStreamingMode::USB;
    }
    auto IPAddress = HostIpAddress;
    auto StreamingClientRunningCheckTask = [TargetDevice = SelectedTargetDevice, ClientCpy, AdbPath, StreamingMode, IPAddress](TSharedRef<FStreamingClientTaskResult> Result)
    {
        if(!IsStreamingClientRunning())
        {
            auto DeviceInfoPtr = ClientCpy.Find(TargetDevice);
            if(!DeviceInfoPtr)
            {
                Result->ErrorMessage = "Unable to find the selected device";
            }
            auto Cmd = GetLaunchCommand(*DeviceInfoPtr, StreamingMode, IPAddress);
            FString Output{};
            if(!RunAdbCommand(AdbPath, Cmd, Output))
            {
                Result->ErrorMessage = Output;
            }
            else
            {
                Result->bSuccess = true;
            };
        }
        else
        {
            Result->bSuccess = true;
        }
    };
    PerformTaskAsync(StreamingClientRunningCheckTask, EAndroidXRStringKey::ClientStartingMessage);
}

void UAndroidXRStreamingEditorSubsystem::ShutdownStreamingClientAsync()
{
    using namespace UE::Tasks;
    auto Settings = GetDefault<UAndroidXRStreamingClientSettings>();
    if(!Settings->bAutoStopClientOnPreview)
    {
        return;
    }
    auto AdbPath = RefreshAdbPath();
    auto ShutdownTask = [AdbPath](TSharedRef<FStreamingClientTaskResult> Result)
    {
        auto ShutdownCommand = FString::Printf(TEXT("shell am force-stop %s"), *XRStreamingClientPackage);
        FString Output{};
        if(!RunAdbCommand(AdbPath, ShutdownCommand, Output))
        {
            Result->bSuccess = false;
            Result->ErrorMessage = Output;
        }
        Result->bSuccess = true;
    };
    PerformTaskAsync(ShutdownTask, EAndroidXRStringKey::ClientStoppingMessage);
}

bool UAndroidXRStreamingEditorSubsystem::RunAdbCommand(const FString& AdbPath, const FString& Command, FString& Output)
{
    void* ReadPipe{};
    void* WritePipe{};
    FPlatformProcess::CreatePipe(ReadPipe, WritePipe);
    auto ProcHandle = FPlatformProcess::CreateProc(*AdbPath, *Command, false, false, false, nullptr, 0, nullptr, WritePipe, ReadPipe);
    FPlatformProcess::WaitForProc(ProcHandle);
    auto OutputStr = FPlatformProcess::ReadPipe(ReadPipe);
    int32 ReturnCode;
    FPlatformProcess::GetProcReturnCode(ProcHandle, &ReturnCode);
    Output = OutputStr;
    return ReturnCode == 0;
}

FString UAndroidXRStreamingEditorSubsystem::GetLaunchCommand(const FAndroidDeviceInfo& DeviceInfo, EAndroidXRClientStreamingMode StreamingMode, const FString& IPAddress)
{
    auto BaseCommand = FString::Printf(TEXT("-s %s shell am start -n %s/%s"), *DeviceInfo.SerialNumber, *XRStreamingClientPackage, *XRStreamingClientActivity);
    if(StreamingMode == EAndroidXRClientStreamingMode::Wifi)
    {
        BaseCommand = FString::Printf(TEXT("%s -e remote_address %s -e stream_codec h264"), *BaseCommand, *IPAddress);
    }
    return BaseCommand;
}
