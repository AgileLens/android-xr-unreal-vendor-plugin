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

#include "AndroidXRStreamingModule.h"
#include "Modules/ModuleManager.h"
#include "AndroidXRStreamingSettings.h"
#include "AndroidXRStreamingRuntime.h"

DEFINE_LOG_CATEGORY(LogAndroidXRStreaming)

void FAndroidXRStreamingModule::StartupModule()
{
	bool bShouldEnableRuntime{};
	GConfig->GetBool(*AndroidXRStreamingSettingsConfigPath, TEXT("bEnableAndroidXRStreaming"), bShouldEnableRuntime
		, GEngineIni);
	AndroidXRRuntime = MakeShared<UAndroidXRStreamingRuntime>();
	if (bShouldEnableRuntime)
	{
		if (AndroidXRRuntime->IsAvailable())
		{
			if (AndroidXRRuntime->IsActive())
			{
				return;
			}
			UE_LOG(LogAndroidXRStreaming, Log, TEXT("Enabling AndroidXR Runtime"));
			AndroidXRRuntime->EnableRuntime();
		}
	}
	else
	{
		if (AndroidXRRuntime->IsAvailable() && AndroidXRRuntime->IsActive())
		{
			AndroidXRRuntime->DisableRuntime();
		}
	}
}

void FAndroidXRStreamingModule::ShutdownModule()
{
}

bool FAndroidXRStreamingModule::IsAndroidXRStreamingActive() const
{
	return AndroidXRRuntime.IsValid() && AndroidXRRuntime->IsActive();
}

TSharedRef<UAndroidXRStreamingRuntime> FAndroidXRStreamingModule::GetRuntime()
{
	return AndroidXRRuntime.ToSharedRef();
}

IMPLEMENT_MODULE(FAndroidXRStreamingModule, AndroidXRStreaming);
