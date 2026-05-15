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

#include "AndroidXRStreamingEditorModule.h"
#include "AndroidDeviceDetection.h"
#include "LevelEditor.h"
#include "ISettingsCategory.h"
#include "ISettingsContainer.h"
#include "ISettingsSection.h"
#include "Widgets/SWidget.h"
#include "PropertyEditorModule.h"
#include "AndroidXRStreamingClientSettings.h"
#include "FAndroidXRStreamingSettingsCustomization.h"
#include "AndroidXRStreamingModule.h"

DEFINE_LOG_CATEGORY(LogAndroidXRStreamingEditor)
#define LOCTEXT_NAMESPACE "FAndroidXRStreamingEditorModule"

void FAndroidXRStreamingEditorModule::StartupModule()
{
    auto& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
    PropertyModule.RegisterCustomClassLayout(UAndroidXRStreamingClientSettings::StaticClass()->GetFName(), FOnGetDetailCustomizationInstance::CreateStatic(&FAndroidXRStreamingSettingsCustomization::CreateInstance));
    PropertyModule.NotifyCustomizationModuleChanged();

    ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings");
    if(SettingsModule)
    {
        SettingsModule->RegisterSettings("Project", "Plugins", "AndroidXRStreaming",
                                         LOCTEXT("AndroidXRStreamingSettingsName", "AndroidXRStreaming"),
                                         LOCTEXT("AndroidXRStreamingSettingsDescription", "Project settings for AndroidXRStreaming plugin"),
                                         GetMutableDefault<UAndroidXRStreamingSettings>());
        if(FModuleManager::GetModuleChecked<FAndroidXRStreamingModule>(TEXT("AndroidXRStreaming")).IsAndroidXRStreamingActive())
        {
            SettingsModule->RegisterSettings("Project", "Plugins", "AndroidXRStreamingClient",
                                         LOCTEXT("AndroidXRStreamingClientSettingsName", "AndroidXRStreamingClient"),
                                         LOCTEXT("AndroidXrStreamingClientDescription", "Client settings for AndroidXRStreaming"),
                                         GetMutableDefault<UAndroidXRStreamingClientSettings>());
        }
    }
}

void FAndroidXRStreamingEditorModule::ShutdownModule()
{
    // unregister settings
    ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings");

    if(SettingsModule != nullptr)
    {
        SettingsModule->UnregisterSettings("Project", "Plugins", "AndroidXRStreaming");
        SettingsModule->UnregisterSettings("Project", "Plugins", "AndroidXRStreamingClient");
    }
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FAndroidXRStreamingEditorModule, AndroidXRStreamingEditor);

