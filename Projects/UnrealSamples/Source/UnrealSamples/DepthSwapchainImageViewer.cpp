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

#include "DepthSwapchainImageViewer.h"
#include "Components/ComboBoxString.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "AndroidXRDepthTextureBlueprintFunctionLibrary.h"

void UDepthSwapchainImageViewer::OnSourceChanged(FString SelectedItem, ESelectInfo::Type SelectionType)
{
    if (Image_RenderSurface != nullptr)
    {
        auto SelectedIndex = ComboBox_Sources->GetSelectedIndex();
        if (SelectedIndex >= 0 && SelectedIndex < ImageViewData.Num())
        {
            Image_RenderSurface->SetBrushFromMaterial(ImageViewData[SelectedIndex].MaterialInstance);
        }
    }
}

void UDepthSwapchainImageViewer::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    if (ComboBox_Sources != nullptr)
    {
        ComboBox_Sources->OnSelectionChanged.
            AddDynamic(this, &ThisClass::OnSourceChanged);
    }
}

void UDepthSwapchainImageViewer::NativeConstruct()
{
    Super::NativeConstruct();
    ResetUI(true);
}

void UDepthSwapchainImageViewer::ResetUI(bool bAddEmptySource)
{
    for (const auto& ImageViewDatum : ImageViewData)
    {
        ImageViewDatum.Texture->ConditionalBeginDestroy();
        ImageViewDatum.MaterialInstance->ConditionalBeginDestroy();
    }
    ImageViewData.Empty();

    if (ComboBox_Sources != nullptr)
    {
        ComboBox_Sources->ClearOptions();
        ComboBox_Sources->ClearSelection();

        if (bAddEmptySource)
        {
            ComboBox_Sources->AddOption(FString(" "));
            ComboBox_Sources->SetSelectedIndex(0);
        }
    }

    if (Text_Source != nullptr)
    {
        Text_Source->SetText(FText::FromString(FString("Index:N/A")));
    }
    if (Text_View0 != nullptr)
    {
        Text_View0->SetText(FText::FromString(FString("View0:[N/A]")));
    }
    if (Text_View1 != nullptr)
    {
        Text_View1->SetText(FText::FromString(FString("View1:[N/A]")));
    }
    if (Image_RenderSurface != nullptr)
    {
        Image_RenderSurface->SetBrushFromMaterial(DefaultMaterial);
    }
}

void UDepthSwapchainImageViewer::OnDepthSwapchainCreated(const FAndroidXRDepthSwapchain& Swapchain,
    EAndroidXRDepthCameraResolution Resolution,
    int32 CreateFlags)
{
    auto SetupViewForCreateFlag = [this](EAndroidXRDepthCameraResolution Resolution,
        int32 CreateFlags,
        EAndroidXRDepthSwapchainCreateFlag Flag,
        UMaterialInterface* Material)
    {
        if ((CreateFlags & static_cast<uint32>(Flag)) != 0)
        {
            FSwapchainImageViewData ImageViewDatum
            {
                .MaterialInstance = UMaterialInstanceDynamic::Create(Material, this),
                .Texture = UAndroidXRDepthTextureBlueprintFunctionLibrary::
                    CreateDepthSwapchainTexture(Resolution, Flag),
                .CreateFlag = Flag
            };

            ImageViewDatum.MaterialInstance->
                SetTextureParameterValue(FName("Texture"), ImageViewDatum.Texture);

            ImageViewData.Add(ImageViewDatum);

            ComboBox_Sources->AddOption(StaticEnum<EAndroidXRDepthSwapchainCreateFlag>()->
                GetNameStringByValue(static_cast<uint8>(Flag)));
        }
    };

    ResetUI(false);

    if (DepthMaterial != nullptr)
    {
        SetupViewForCreateFlag(Resolution,
            CreateFlags,
            EAndroidXRDepthSwapchainCreateFlag::SmoothDepthImage,
            DepthMaterial);
        SetupViewForCreateFlag(Resolution,
            CreateFlags,
            EAndroidXRDepthSwapchainCreateFlag::RawDepthImage,
            DepthMaterial);
    }

    if (ConfidenceMaterial != nullptr)
    {
        SetupViewForCreateFlag(Resolution,
            CreateFlags,
            EAndroidXRDepthSwapchainCreateFlag::SmoothConfidenceImage,
            ConfidenceMaterial);
        SetupViewForCreateFlag(Resolution,
            CreateFlags,
            EAndroidXRDepthSwapchainCreateFlag::RawConfidenceImage,
            ConfidenceMaterial);
    }

    if (ImageViewData.Num() > 0)
    {
        Image_RenderSurface->SetBrushFromMaterial(ImageViewData[0].MaterialInstance);
        ComboBox_Sources->SetSelectedIndex(0);
    }
    else
    {
        ResetUI(true);
    }
}

void UDepthSwapchainImageViewer::UpdateFromAcquiredDepthSwapchainImage(const TArray<FAndroidXRDepthSwapchainImage>& SwapchainImages,
    const TArray<FAndroidXRDepthView>& DepthViews,
    int32 AcquiredIndex)
{
    if (ComboBox_Sources != nullptr)
    {
        auto SelectedIndex = ComboBox_Sources->GetSelectedIndex();
        if (SelectedIndex < ImageViewData.Num())
        {
            if (Text_Source != nullptr)
            {
                Text_Source->SetText(FText::FromString(FString::
                    Printf(TEXT("Index:%d"), AcquiredIndex)));
            }

            if (Text_View0 != nullptr && DepthViews.Num() > 0)
            {
                Text_View0->SetText(FText::FromString(FString::
                    Printf(TEXT("View0:[L:%2.2f, R:%2.2f, U:%2.2f, D:%2.2f]"),
                        DepthViews[0].FieldOfView.AngleLeft,
                        DepthViews[0].FieldOfView.AngleRight,
                        DepthViews[0].FieldOfView.AngleUp,
                        DepthViews[0].FieldOfView.AngleDown
                    )));
            }

            if (Text_View1 != nullptr && DepthViews.Num() > 1)
            {
                Text_View1->SetText(FText::FromString(FString::
                    Printf(TEXT("View1:[L:%2.2f, R:%2.2f, U:%2.2f, D:%2.2f]"),
                        DepthViews[1].FieldOfView.AngleLeft,
                        DepthViews[1].FieldOfView.AngleRight,
                        DepthViews[1].FieldOfView.AngleUp,
                        DepthViews[1].FieldOfView.AngleDown
                    )));
            }

            const auto& ImageViewDatum = ImageViewData[SelectedIndex];
            UAndroidXRDepthTextureBlueprintFunctionLibrary::
                UpdateTextureFromDepthSwapchainImage(SwapchainImages[AcquiredIndex],
                    ImageViewDatum.CreateFlag, ImageViewDatum.Texture);
        }
    }
}
