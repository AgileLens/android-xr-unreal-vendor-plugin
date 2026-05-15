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
#include "EditorSubsystem.h"
#include "AndroidDeviceDetection.h"
#include "AndroidXRStreamingConsts.h"

#include "AndroidXRStreamingEditorSubsystem.Generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogAndroidXRStreamingEditorSubsystem, Log, All);

DECLARE_DELEGATE(FOnDevicesRefreshed);


typedef struct FStreamingClientTaskResult {
    bool bSuccess;
    FString ErrorMessage;
}FStreamingClientTaskResult;

UCLASS()
class ANDROIDXRSTREAMINGEDITOR_API UAndroidXRStreamingEditorSubsystem : public UEditorSubsystem
{
    GENERATED_BODY()
public:
    void Initialize(FSubsystemCollectionBase& Collection) override;
    void Deinitialize() override;

    void LaunchStreamingClient(bool bIsSimulating);
    void ShutdownStreamingClient(bool bIsExiting);
    void RefreshClients();
    void RefreshClientsAsync();

    const TMap<FString, FAndroidDeviceInfo>& GetConnectedClients()
    {
        return ConnectedClients;
    }
    FString GetSelectedTargetDevice()
    {
        return SelectedTargetDevice;
    }

    void SelectTargetDevice(const FString& DeviceName);
    bool IsSelectedTargetConnected();

    FOnDevicesRefreshed OnDevicesRefreshed;

    bool IsRefreshTaskRunning() const
    {
        return bFetchingDevices;
    }

private:
    void LaunchStreamingClientAsync();
    void ShutdownStreamingClientAsync();

    FDelegateHandle BeginPIEHandle;
    FDelegateHandle ExitPIEHandle;
    TMap<FString, FAndroidDeviceInfo> ConnectedClients{};
    FString SelectedTargetDevice{};
    bool bFetchingDevices{};
    FString ADBPath{};
    FString HostIpAddress{};
    static bool RunAdbCommand(const FString& AdbPath, const FString& Command, FString& Ouput);
    static FString GetLaunchCommand(const FAndroidDeviceInfo& DeviceInfo, EAndroidXRClientStreamingMode StreamingMode, const FString& IPAddress);
    static bool IsStreamingClientRunning();
    static bool IsTargetDeviceValid(const FString& AdbPath, const FString& DeviceName, const FAndroidDeviceInfo& DeviceInfo);

    void PerformTaskAsync(TFunction<void(TSharedRef<FStreamingClientTaskResult>)> Function, EAndroidXRStringKey StartKey);
};
