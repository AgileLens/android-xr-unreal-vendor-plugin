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

#include "ApplicationThreadWidget.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "IAndroidXRModule.h"
#include "IAndroidXRDepthTextureModule.h"

#include <chrono>

void UApplicationThreadWidget::NativeConstruct()
{
    if (Material != nullptr)
    {
        MaterialInstance = UMaterialInstanceDynamic::Create(Material, this);
    }
    Super::NativeConstruct();
}

void UApplicationThreadWidget::NativeDestruct()
{
    if (DataStorage != nullptr)
    {
        DataStorage->bStopAllThreads = true;
    }

    if (SobelThread != nullptr)
    {
        SobelThread->Join();
    }

    if (DepthSwapchain.DepthSwapchain != nullptr)
    {
        IAndroidXRDepthTextureModule::Get().DestroyDepthSwapchain(DepthSwapchain);
    }

    Super::NativeDestruct();
}

void UApplicationThreadWidget::CreateThread()
{
    SobelThread = MakeUnique<FThread>(TEXT("ApplicationThreadWidgetThread"),
    [DataStorage = this->DataStorage.Get()]()
    {
        // Sobel kernels
        int32 Gx[3][3] = { { -1,  0,  1 }, { -2, 0, 2 }, { -1, 0, 1 } };
        int32 Gy[3][3] = { { -1, -2, -1 }, {  0, 0, 0 }, {  1, 2, 1 } };

        auto Source = DataStorage->DepthConfidence.GetData();
        auto Output = DataStorage->SobelEdgeResult.GetData();

        auto StartTime = std::chrono::system_clock::now();
        while (!DataStorage->bStopAllThreads)
        {
            for (int32 Cycles = 0; Cycles < DataStorage->NumLoops; ++Cycles)
            {
                for (uint32 SourceY = 1; SourceY < DataStorage->WidthAndHeight - 1; ++SourceY)
                {
                    for (uint32 SourceX = 1; SourceX < DataStorage->WidthAndHeight - 1; ++SourceX)
                    {
                        int32 SumX = 0, SumY = 0;

                        for (int32 KernelY = -1; KernelY <= 1; ++KernelY)
                        {
                            for (int32 KernelX = -1; KernelX <= 1; ++KernelX)
                            {
                                SumX += Source[((SourceY + KernelY) * DataStorage->WidthAndHeight) +
                                    (SourceX + KernelX)] * Gx[KernelY + 1][KernelX + 1];
                                SumY += Source[((SourceY + KernelY) * DataStorage->WidthAndHeight) +
                                    (SourceX + KernelX)] * Gy[KernelY + 1][KernelX + 1];
                            }
                        }

                        Output[SourceY * DataStorage->WidthAndHeight + SourceX] =
                            FMath::Sqrt(float(SumX) * float(SumX) + float(SumY) * float(SumY));
                    }
                }

            }

            auto CurrentTime = std::chrono::system_clock::now();
            auto DeltaTime = std::chrono::duration_cast
                <std::chrono::milliseconds>(CurrentTime - StartTime);
            StartTime = CurrentTime;
            DataStorage->ThreadJobsPerSecond = 1.0e3f / DeltaTime.count();
        }
    });
}

bool UApplicationThreadWidget::CustomInitialize(FString& Result)
{
    if (MaterialInstance != nullptr)
    {
        auto& DTM = IAndroidXRDepthTextureModule::Get();

        TArray<EAndroidXRDepthCameraResolution> SupportedResolutions;
        DTM.EnumerateDepthResolutions(SupportedResolutions);
        if (SupportedResolutions.Num() > 0)
        {
            if (DTM.CreateDepthSwapchain(SupportedResolutions.Last(),
                static_cast<int32>(EAndroidXRDepthSwapchainCreateFlag::RawDepthImage) |
                static_cast<int32>(EAndroidXRDepthSwapchainCreateFlag::RawConfidenceImage),
                DepthSwapchain))
            {
                DTM.EnumerateDepthSwapchainImages(DepthSwapchain, SwapchainImages);

                uint32 SourceDims;
                if (SwapchainImages.Num() > 0)
                {
                    switch (SupportedResolutions.Last())
                    {
                        case EAndroidXRDepthCameraResolution::Resolution80:
                            SourceDims = 80;
                            break;
                        case EAndroidXRDepthCameraResolution::Resolution160:
                            SourceDims = 160;
                            break;
                        case EAndroidXRDepthCameraResolution::Resolution320:
                            SourceDims = 320;
                            break;
                    }

                    if ((SobelTexture = UTexture2D::
                        CreateTransient(SourceDims, SourceDims, PF_R8)))
                    {
                        SobelTexture->UpdateResource();

                        MaterialInstance->SetTextureParameterValue(FName("Texture"), SobelTexture);

                        if (Image_RenderSurface != nullptr)
                        {
                            Image_RenderSurface->SetBrushFromMaterial(MaterialInstance);
                        }

                        DataStorage = MakeUnique<FThreadDataStorage>(SourceDims, NumThreadLoops);

                        CreateThread();
                        Result = "Success";
                        return true;
                    }
                    Result = "Could not create Sobel texture";
                }
                else
                {
                    Result = "EnumerateDepthSwapchainImages returned no images";
                }
            }
            else
            {
                Result = "CreateDepthSwapchain returned false";
            }
        }
        else
        {
            Result = "EnumerateDepthResolutions returned no options";
        }
    }
    else
    {
        Result = "Material instance is not set";
    }
    return false;
}

void UApplicationThreadWidget::UpdateDisplay()
{
    if (DataStorage != nullptr)
    {
        FAndroidXRDepthAcquireResult AcquireResult;
        if (IAndroidXRDepthTextureModule::Get().
            AcquireDepthSwapchainImages(DepthSwapchain, AcquireResult))
        {
            // Pull depth confidence to analysis buffer
            FMemory::Memcpy(DataStorage->DepthConfidence.GetData(),
                SwapchainImages[AcquireResult.AcquiredIndex].
                    SwapchainImage.rawDepthConfidenceImage,
                DataStorage->WidthAndHeight * DataStorage->WidthAndHeight);

            // Write Sobel results to display image
            if (auto MipData = SobelTexture->GetPlatformData()->
                Mips[0].BulkData.Lock(LOCK_READ_WRITE))
            {
                FMemory::Memcpy(MipData, DataStorage->SobelEdgeResult.
                    GetData(), DataStorage->WidthAndHeight * DataStorage->WidthAndHeight);

                SobelTexture->GetPlatformData()->Mips[0].BulkData.Unlock();
                SobelTexture->UpdateResource();
            }
        }

        if (Text_Stats != nullptr)
        {
            Text_Stats->SetText(FText::FromString(FString::
                Printf(TEXT("tps: %.2f"), float(DataStorage->ThreadJobsPerSecond))));
        }
    }
}

bool UApplicationThreadWidget::SetAndroidApplicationThread(EAndroidXRAndroidThreadType ThreadType)
{
    if (SobelThread != nullptr)
    {
        return IAndroidXRModule::Get().
            SetAndroidApplicationThread(ThreadType, SobelThread->GetThreadId());
    }
    return false;
}
