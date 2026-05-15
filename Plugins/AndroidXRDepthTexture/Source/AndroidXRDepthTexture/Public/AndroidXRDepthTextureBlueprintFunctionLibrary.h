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

#include "AndroidXRTypes.h"
#include "AndroidXRDepthTextureBlueprintFunctionLibrary.generated.h"

UCLASS(ClassGroup=AndroidXRDepthTexture)
class ANDROIDXRDEPTHTEXTURE_API UAndroidXRDepthTextureBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()
public:
    /**
     * Determines whether or not an FAndroidXRDepthSwapchain is valid.
     * @param[in] Swapchain Swapchain to be verified.
     * @return True if the swapchain is valid.
     */
    UFUNCTION(BlueprintPure, Category="AndroidXR|Depth Texture Function Library")
    static bool IsValidDepthSwapchain(const FAndroidXRDepthSwapchain& Swapchain);

    /**
     * Determines whether or not depth swapchain is supported.
     * @return True if depth swapchain is supported.
     */
    UFUNCTION(BlueprintPure, Category="AndroidXR|Depth Texture Function Library")
    static bool GetDepthSwapchainSupported();

    /**
     * Enumerates the supported depth swapchain resolutions.
     * @param[out] SupportedResolutions The supported depth swapchain resolutions.
     * @return True if the underlying API call was successful.
     */
    UFUNCTION(BlueprintCallable, Category="AndroidXR|Depth Texture Function Library")
    static bool EnumerateDepthResolutions(TArray<EAndroidXRDepthCameraResolution>& SupportedResolutions);

    /**
     * Creates a depth swapchain.
     * @param[in] Resolution The desired resolution.
     * @param[in] CreateFlags The desired flags.
     * @param[out] Swapchain The created depth swapchain.
     * @return True if the underlying API call was successful.
     */
    UFUNCTION(BlueprintCallable, Category="AndroidXR|Depth Texture Function Library")
    static bool CreateDepthSwapchain(
        EAndroidXRDepthCameraResolution Resolution,
        UPARAM(meta=(Bitmask, BitmaskEnum="/Script/AndroidXR.EAndroidXRDepthSwapchainCreateFlag"))
        int32 CreateFlags,
        FAndroidXRDepthSwapchain& Swapchain);

    /**
     * Destroys a depth swapchain.
     * @param[in, out] Swapchain The swapchain to be destroyed.
     * @return True if the underlying API call was successful.
     */
    UFUNCTION(BlueprintCallable, Category="AndroidXR|Depth Texture Function Library")
    static bool DestroyDepthSwapchain(UPARAM(ref) FAndroidXRDepthSwapchain& Swapchain);

    /**
     * Enumerates the images contained by the swapchain.
     * @param[in] Swapchain The swapchain to be considered.
     * @param[out] SwapchainImages Array of images in the swapchain.
     * @return True if the underlying API call was successful.
     */
    UFUNCTION(BlueprintCallable, Category="AndroidXR|Depth Texture Function Library")
    static bool EnumerateDepthSwapchainImages(const FAndroidXRDepthSwapchain& Swapchain,
        TArray<FAndroidXRDepthSwapchainImage>& SwapchainImages);

    /**
     * Acquires a swapchain image. Should be called exactly once (per swapchain)
     * between xrBeginFrame and xrEndFrame.
     * @param[in] Swapchain The swapchain to be considered.
     * @param[out] AcquireResult The result of the acquisition.
     * @return True if the underlying API call was successful.
     */
    UFUNCTION(BlueprintCallable, Category="AndroidXR|Depth Texture Function Library")
    static bool AcquireDepthSwapchainImages(const FAndroidXRDepthSwapchain& Swapchain,
        FAndroidXRDepthAcquireResult& AcquireResult);

    /**
     * Creates a texture to contain a swapchain image. The texture will be Resolution x
     * Resolution*2, with the two views arranged in order in memory (they will appear
     * vertically if rendered).
     * @param[in] Resolution The swapchain resolution.
     * @param[in] ImageSource Flag defining desired image type (depth or confidence).
     * @return A valid UTexture2D if successful.
     */
    UFUNCTION(BlueprintCallable, Category="AndroidXR|Depth Texture Function Library")
    static UTexture2D* CreateDepthSwapchainTexture(EAndroidXRDepthCameraResolution Resolution,
        EAndroidXRDepthSwapchainCreateFlag ImageSource);

    /**
     * Updates a texture from a swapchain image.
     * @param[in] SwapchainImage The swapchain image to use as the source.
     * @param[in] ImageSource Flag defining desired image type.
     * @param[in] Texture The texture to be updated.
     * @return True if successful.
     */
    UFUNCTION(BlueprintCallable, Category="AndroidXR|Depth Texture Function Library")
    static bool UpdateTextureFromDepthSwapchainImage(const FAndroidXRDepthSwapchainImage& SwapchainImage,
        EAndroidXRDepthSwapchainCreateFlag ImageSource,
        UTexture2D* Texture);
};

