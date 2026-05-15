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

#include "FAndroidXRStreamingSettingsCustomization.h"
#include "DetailLayoutBuilder.h"
#include "DetailCategoryBuilder.h"
#include "DetailWidgetRow.h"
#include "AndroidXRStreamingEditorSubsystem.h"
#include "Widgets/Input/STextComboBox.h"
#include "AndroidXRStreamingConsts.h"
#include "AndroidXRStreamingModule.h"
#include <AndroidXRSettings.h>

#define FIND_STREAMING_SUBSYSTEM(Operation) auto Subsystem = GEditor->GetEditorSubsystem<UAndroidXRStreamingEditorSubsystem>(); if(Subsystem){Operation;}

TSharedRef<IDetailCustomization> FAndroidXRStreamingSettingsCustomization::CreateInstance()
{
    return MakeShared<FAndroidXRStreamingSettingsCustomization>();
}

FAndroidXRStreamingSettingsCustomization::FAndroidXRStreamingSettingsCustomization()
{
    FIND_STREAMING_SUBSYSTEM(Subsystem->OnDevicesRefreshed.BindRaw(this, &FAndroidXRStreamingSettingsCustomization::DeviceRefreshedHandler));
}

void FAndroidXRStreamingSettingsCustomization::PendingDelete()
{
    FIND_STREAMING_SUBSYSTEM(Subsystem->OnDevicesRefreshed.Unbind());
}

void FAndroidXRStreamingSettingsCustomization::DeviceRefreshedHandler()
{
    if(Builder.IsValid())
    {
        auto DetailBuilder = Builder.Pin();
        if(DetailBuilder.IsValid())
        {
            DetailBuilder->ForceRefreshDetails();
        }
    }
}

FReply FAndroidXRStreamingSettingsCustomization::RefreshClickedHandler()
{
    FIND_STREAMING_SUBSYSTEM(Subsystem->RefreshClients());
    DeviceRefreshedHandler();
    return FReply::Handled();
}

FReply FAndroidXRStreamingSettingsCustomization::ResetClickedHandler()
{
    FIND_STREAMING_SUBSYSTEM(Subsystem->SelectTargetDevice(""));
    return RefreshClickedHandler();
}

void FAndroidXRStreamingSettingsCustomization::DeviceSelectionChangedHandler(TSharedPtr<FString> SelectedDevice, ESelectInfo::Type SelectInfoType)
{
    FIND_STREAMING_SUBSYSTEM(Subsystem->SelectTargetDevice((SelectedDevice == NoneDeviceName || !SelectedDevice.IsValid()) ? "" : *SelectedDevice));
}

void FAndroidXRStreamingSettingsCustomization::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
    //Check if experimental features are enabled:
    if(!GetDefault<UAndroidXRSettings>()->bEnableExperimentalFeatures)
    {
        HideExperimentalFeatures(DetailBuilder);
    }
    auto bIsRefreshTaskRunning = false;
    FIND_STREAMING_SUBSYSTEM(bIsRefreshTaskRunning = Subsystem->IsRefreshTaskRunning());
    auto& CategoryBuilder = DetailBuilder.EditCategory("AndroidXR Streaming Target Client", FText::GetEmpty(), ECategoryPriority::Uncommon);
    CategoryBuilder.HeaderContent
    (
        SNew(SHorizontalBox)
        + SHorizontalBox::Slot()
        [
          SNew(SSpacer)
        ].FillWidth(0.6f)
        + SHorizontalBox::Slot()
        [
           SNew(SButton)
          .Text(FAndroidXRStreamingConsts::GetText(EAndroidXRStringKey::RefreshButtonText))
          .IsEnabled(!bIsRefreshTaskRunning)
          .OnClicked(FOnClicked::CreateRaw(this, &FAndroidXRStreamingSettingsCustomization::RefreshClickedHandler))
        ]
        .FillWidth(0.2f)
        + SHorizontalBox::Slot()
        [
          SNew(SButton)
         .Text(FAndroidXRStreamingConsts::GetText(EAndroidXRStringKey::ResetButtonText))
         .OnClicked(FOnClicked::CreateRaw(this, &FAndroidXRStreamingSettingsCustomization::ResetClickedHandler))
        ]
        .FillWidth(0.2f)
    );
    RefreshDeviceList(DetailBuilder);
}

void FAndroidXRStreamingSettingsCustomization::HideExperimentalFeatures(IDetailLayoutBuilder& DetailBuilder)
{
    DetailBuilder.HideProperty("StreamingMode");
}

void FAndroidXRStreamingSettingsCustomization::CustomizeDetails(const TSharedPtr<IDetailLayoutBuilder>& DetailBuilder)
{
    Builder = DetailBuilder.ToWeakPtr();
    IDetailCustomization::CustomizeDetails(DetailBuilder);
}

void FAndroidXRStreamingSettingsCustomization::RefreshDeviceList(IDetailLayoutBuilder& DetailBuilder)
{
    auto StreamingSubsystem = GEditor->GetEditorSubsystem<UAndroidXRStreamingEditorSubsystem>();
    if(StreamingSubsystem)
    {
        auto& CategoryBuilder = DetailBuilder.EditCategory("AndroidXR Streaming Target Client", FText::GetEmpty(), ECategoryPriority::Uncommon);
        auto& ClientsRow = CategoryBuilder.AddCustomRow(FAndroidXRStreamingConsts::GetText(EAndroidXRStringKey::ConnectedDevicesText));
        auto VerticalBox = SNew(SVerticalBox);
        DeviceNames.Reset();
        if(!NoneDeviceName.IsValid())
        {
            NoneDeviceName = MakeShared<FString>("None");
        }
        DeviceNames.Add(NoneDeviceName);
        TSharedPtr<FString> SelectedDevice = NoneDeviceName;
        for(auto& [DeviceName, DeviceInfo] : StreamingSubsystem->GetConnectedClients())
        {
            if(DeviceName == StreamingSubsystem->GetSelectedTargetDevice())
            {
                SelectedDevice = MakeShared<FString>(DeviceName);
                DeviceNames.Add(SelectedDevice);
            }
            else
            {
                DeviceNames.Add(MakeShared<FString>(DeviceName));
            }
        }
        ClientsRow.WholeRowContent()[
            SNew(STextComboBox)
                .OptionsSource(&DeviceNames)
                .InitiallySelectedItem(SelectedDevice)
                .OnSelectionChanged(STextComboBox::FOnTextSelectionChanged::CreateRaw(this, &FAndroidXRStreamingSettingsCustomization::DeviceSelectionChangedHandler))
        ];
    }
}