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

#include "AndroidXRDepthTextureBlueprintFunctionLibrary.h"
#include "IAndroidXRDepthTextureModule.h"

bool UAndroidXRDepthTextureBlueprintFunctionLibrary::IsValidDepthSwapchain(const FAndroidXRDepthSwapchain& Swapchain)
{
    return Swapchain.DepthSwapchain != nullptr;
}

bool UAndroidXRDepthTextureBlueprintFunctionLibrary::GetDepthSwapchainSupported()
{
    if (IAndroidXRDepthTextureModule::IsAvailable())
    {
        return IAndroidXRDepthTextureModule::Get().GetDepthSwapchainSupported();
    }
    return false;
}

bool UAndroidXRDepthTextureBlueprintFunctionLibrary::EnumerateDepthResolutions(TArray<EAndroidXRDepthCameraResolution>& SupportedResolutions)
{
    if (IAndroidXRDepthTextureModule::IsAvailable())
    {
        return IAndroidXRDepthTextureModule::Get().EnumerateDepthResolutions(SupportedResolutions);
    }
    return false;
}

bool UAndroidXRDepthTextureBlueprintFunctionLibrary::CreateDepthSwapchain(EAndroidXRDepthCameraResolution Resolution,
    int32 CreateFlags,
    FAndroidXRDepthSwapchain& Swapchain)
{
    if (IAndroidXRDepthTextureModule::IsAvailable())
    {
        return IAndroidXRDepthTextureModule::Get().CreateDepthSwapchain(Resolution, CreateFlags, Swapchain);
    }
    return false;
}

bool UAndroidXRDepthTextureBlueprintFunctionLibrary::DestroyDepthSwapchain(FAndroidXRDepthSwapchain& Swapchain)
{
    if (IAndroidXRDepthTextureModule::IsAvailable())
    {
        return IAndroidXRDepthTextureModule::Get().DestroyDepthSwapchain(Swapchain);
    }
    return false;
}

bool UAndroidXRDepthTextureBlueprintFunctionLibrary::EnumerateDepthSwapchainImages(const FAndroidXRDepthSwapchain& Swapchain,
    TArray<FAndroidXRDepthSwapchainImage>& SwapchainImages)
{
    SwapchainImages = { };
    if (IAndroidXRDepthTextureModule::IsAvailable())
    {
        return IAndroidXRDepthTextureModule::Get().EnumerateDepthSwapchainImages(Swapchain, SwapchainImages);
    }
    return false;
}

bool UAndroidXRDepthTextureBlueprintFunctionLibrary::AcquireDepthSwapchainImages(const FAndroidXRDepthSwapchain& Swapchain,
    FAndroidXRDepthAcquireResult& AcquireResult)
{
    AcquireResult = { };
    if (IAndroidXRDepthTextureModule::IsAvailable())
    {
        return IAndroidXRDepthTextureModule::Get().AcquireDepthSwapchainImages(Swapchain, AcquireResult);
    }
    return false;
}

UTexture2D* UAndroidXRDepthTextureBlueprintFunctionLibrary::CreateDepthSwapchainTexture(EAndroidXRDepthCameraResolution Resolution,
    EAndroidXRDepthSwapchainCreateFlag ImageSource)
{
    uint32 Dims{};
    switch (Resolution)
    {
        case EAndroidXRDepthCameraResolution::Resolution80:
            Dims = 80;
            break;
        case EAndroidXRDepthCameraResolution::Resolution160:
            Dims = 160;
            break;
        case EAndroidXRDepthCameraResolution::Resolution320:
            Dims = 320;
            break;
        default:
            return nullptr;
    }

    auto Format = EPixelFormat::PF_Unknown;
    switch (ImageSource)
    {
        case EAndroidXRDepthSwapchainCreateFlag::SmoothDepthImage:
        case EAndroidXRDepthSwapchainCreateFlag::RawDepthImage:
            Format = EPixelFormat::PF_R32_FLOAT;
            break;
        case EAndroidXRDepthSwapchainCreateFlag::SmoothConfidenceImage:
        case EAndroidXRDepthSwapchainCreateFlag::RawConfidenceImage:
            Format = EPixelFormat::PF_R8;
            break;
        default:
            return nullptr;
    }

    auto Texture = UTexture2D::CreateTransient(Dims, Dims * 2, Format);
    if (Texture != nullptr)
    {
        Texture->UpdateResource();
    }
    return Texture;
}

bool UAndroidXRDepthTextureBlueprintFunctionLibrary::UpdateTextureFromDepthSwapchainImage(const FAndroidXRDepthSwapchainImage& SwapchainImage,
    EAndroidXRDepthSwapchainCreateFlag ImageSource,
    UTexture2D* Texture)
{
    if (Texture != nullptr)
    {
        // Get pixel stride and source pointer from ImageSource parameter
        uint32 Stride{};
        const void* Source{};

        switch (ImageSource)
        {
            case EAndroidXRDepthSwapchainCreateFlag::SmoothDepthImage:
                Source = reinterpret_cast<const void*>
                    (SwapchainImage.SwapchainImage.smoothDepthImage);
                Stride = sizeof(float);
                break;
            case EAndroidXRDepthSwapchainCreateFlag::SmoothConfidenceImage:
                Source = reinterpret_cast<const void*>
                    (SwapchainImage.SwapchainImage.smoothDepthConfidenceImage);
                Stride = sizeof(uint8);
                break;
            case EAndroidXRDepthSwapchainCreateFlag::RawDepthImage:
                Source = reinterpret_cast<const void*>
                    (SwapchainImage.SwapchainImage.rawDepthImage);
                Stride = sizeof(float);
                break;
            case EAndroidXRDepthSwapchainCreateFlag::RawConfidenceImage:
                Source = reinterpret_cast<const void*>
                    (SwapchainImage.SwapchainImage.rawDepthConfidenceImage);
                Stride = sizeof(uint8);
                break;
            default:
                return false;
        }

        if (Source == nullptr)
        {
            return false;
        }

        if (auto MipData = Texture->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_WRITE))
        {
            auto Size = static_cast<uint32>(Texture->GetSurfaceWidth()) *
                        static_cast<uint32>(Texture->GetSurfaceHeight()) * Stride;
            FMemory::Memcpy(MipData, Source, Size);

            Texture->GetPlatformData()->Mips[0].BulkData.Unlock();
            Texture->UpdateResource();
            return true;
        }
    }
    return false;
}
