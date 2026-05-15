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
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "CoreMinimal.h"
#include "AndroidXRStreamingRuntime.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogAndroidXRStreamingRuntime, Log, All);

USTRUCT()
struct FOpenXRRuntimeInfo
{
	GENERATED_BODY()

	UPROPERTY()
	FString Name{};

	UPROPERTY()
	FString LibraryPath{};

	UPROPERTY()
	FString RegistryKey{};
};

class ANDROIDXRSTREAMING_API UAndroidXRStreamingRuntime
{
public:

	UAndroidXRStreamingRuntime();

	bool IsAvailable() const
	{
		return bIsAvailable;
	}

	bool IsActive() const
	{
		return bIsActive;
	}

	FString ActiveRuntimeName() const
	{
		return ActiveRuntimeInfo.Name;
	}

	FString Name{};
	FString RegistryKey{};
	FString LibraryPath{};

	void EnableRuntime();
	void DisableRuntime();
private:
	bool bIsAvailable{};
	bool bIsActive{};
	bool FetchAllAvailableRuntimes();
	bool FetchActiveRuntime();
	void FetchRuntimeDetails(const FString& RuntimeKey, FOpenXRRuntimeInfo& RuntimeInfo);

	TArray<FOpenXRRuntimeInfo> AvailableRuntimes{};
	FOpenXRRuntimeInfo ActiveRuntimeInfo{};
	FOpenXRRuntimeInfo AndroidXRStreamingRuntimeInfo{};

	const FString OpenXRRuntimeRegistryKey = "SOFTWARE\\Khronos\\OpenXR\\1";
	const FString AvailableRuntimesRegistryKey = "AvailableRuntimes";
	const FString ActiveRuntimeRegistryKey = "ActiveRuntime";
	const FString AndroidXRRuntimeName = "Android XR Streaming";
	const FString OpenXRRuntimeEnvVariable = "XR_RUNTIME_JSON";
};
