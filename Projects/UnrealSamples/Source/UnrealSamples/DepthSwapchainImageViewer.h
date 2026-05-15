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
#include "AndroidXRTypes.h"
#include "DepthSwapchainImageViewer.generated.h"

class UComboBoxString;
class UImage;
class UTextBlock;

USTRUCT(NotBlueprintable)
struct FSwapchainImageViewData
{
    GENERATED_BODY()

    UPROPERTY()
    TObjectPtr<UMaterialInstanceDynamic> MaterialInstance;

    UPROPERTY()
    TObjectPtr<UTexture2D> Texture;

    EAndroidXRDepthSwapchainCreateFlag CreateFlag{};
};

UCLASS()
class UNREALSAMPLES_API UDepthSwapchainImageViewer : public UUserWidget
{
    GENERATED_BODY()
    
protected:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(BindWidget))
    TObjectPtr<UImage> Image_RenderSurface;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(BindWidget))
    TObjectPtr<UComboBoxString> ComboBox_Sources;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(BindWidget))
    TObjectPtr<UTextBlock> Text_Source;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(BindWidget))
    TObjectPtr<UTextBlock> Text_View0;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(BindWidget))
    TObjectPtr<UTextBlock> Text_View1;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TObjectPtr<UMaterialInterface> DefaultMaterial;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TObjectPtr<UMaterialInterface> DepthMaterial;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TObjectPtr<UMaterialInterface> ConfidenceMaterial;

    UPROPERTY()
    TArray<FSwapchainImageViewData> ImageViewData;

    UFUNCTION()
    void OnSourceChanged(FString SelectedItem, ESelectInfo::Type SelectionType);

    void NativeOnInitialized() override;
    void NativeConstruct() override;
public:
    UFUNCTION(BlueprintCallable)
    void ResetUI(bool bAddEmptySource);

    UFUNCTION(BlueprintCallable)
    void OnDepthSwapchainCreated(const FAndroidXRDepthSwapchain& Swapchain,
        EAndroidXRDepthCameraResolution Resolution,
        int32 CreateFlags);

    UFUNCTION(BlueprintCallable)
    void UpdateFromAcquiredDepthSwapchainImage(const TArray<FAndroidXRDepthSwapchainImage>& SwapchainImage,
        const TArray<FAndroidXRDepthView>& DepthViews,
        int32 AcquiredIndex);
};
