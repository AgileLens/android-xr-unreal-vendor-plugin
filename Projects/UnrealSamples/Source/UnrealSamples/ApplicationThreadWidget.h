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
#include "ApplicationThreadWidget.generated.h"

class UImage;
class UTextBlock;

struct FThreadDataStorage
{
public:
    uint32 WidthAndHeight{};
    int32 NumLoops{};

    // Worker thread consistently reads DepthConfidence and writes SobelEdgeResults
    // Gameplay thread consistently writes DepthConfidence and reads SobelEdgeResults
    TArray<uint8> DepthConfidence{};
    TArray<uint8> SobelEdgeResult{};

    TAtomic<bool> bStopAllThreads{};
    TAtomic<float> ThreadJobsPerSecond{};

    inline FThreadDataStorage(uint32 InWidthAndHeight, uint32 InNumLoops)
    : WidthAndHeight(InWidthAndHeight)
    , NumLoops(InNumLoops)
    {
        DepthConfidence.SetNum(WidthAndHeight * WidthAndHeight);
        SobelEdgeResult.SetNum(WidthAndHeight * WidthAndHeight);
    }
};

UCLASS()
class UNREALSAMPLES_API UApplicationThreadWidget : public UUserWidget
{
    GENERATED_BODY()

protected:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(BindWidget))
    TObjectPtr<UImage> Image_RenderSurface;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(BindWidget))
    TObjectPtr<UTextBlock> Text_Stats;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TObjectPtr<UMaterialInterface> Material;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    int32 NumThreadLoops = 100;

    UPROPERTY()
    TObjectPtr<UMaterialInstanceDynamic> MaterialInstance;

    UPROPERTY()
    TObjectPtr<UTexture2D> SobelTexture;

    TUniquePtr<FThreadDataStorage> DataStorage;

    FAndroidXRDepthSwapchain DepthSwapchain{};
    TUniquePtr<FThread> SobelThread;
    TArray<FAndroidXRDepthSwapchainImage> SwapchainImages;

    void NativeConstruct() override;
    void NativeDestruct() override;

    void CreateThread();
public:
    UFUNCTION(BlueprintCallable)
    bool CustomInitialize(FString& Result);

    UFUNCTION(BlueprintCallable)
    void UpdateDisplay();

    UFUNCTION(BlueprintCallable)
    bool SetAndroidApplicationThread(EAndroidXRAndroidThreadType ThreadType);
};
