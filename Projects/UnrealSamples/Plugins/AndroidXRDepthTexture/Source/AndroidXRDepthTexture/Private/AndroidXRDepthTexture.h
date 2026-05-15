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

#include "IAndroidXRDepthTextureModule.h"
#include "IOpenXRExtensionPlugin.h"

#include <AndroidXRHelpers.h>

DECLARE_LOG_CATEGORY_EXTERN(LogAndroidXRDepthTexture, Log, All);

class FAndroidXRDepthTexture : public IAndroidXRDepthTextureModule, public IOpenXRExtensionPlugin
{
public:
    FAndroidXRDepthTexture();

    /** IModuleInterface */
    void StartupModule() override;
    void ShutdownModule() override;

    /** IOpenXRExtensionPlugin */
    FString GetDisplayName() override
    {
        return FString(TEXT("AndroidXRDepthTexture"));
    }

    void PostCreateInstance(XrInstance InInstance) override;
    void PostCreateSession(XrSession InSession) override;
    bool GetRequiredExtensions(TArray<const ANSICHAR*>& OutExtensions) override;

    bool GetDepthSwapchainSupported() const override;
    bool EnumerateDepthResolutions(TArray<EAndroidXRDepthCameraResolution>& SupportedResolutions) override;
    bool CreateDepthSwapchain(EAndroidXRDepthCameraResolution Resolution,
        uint32 CreateFlags,
        FAndroidXRDepthSwapchain& Swapchain) override;
    bool DestroyDepthSwapchain(FAndroidXRDepthSwapchain& Swapchain) override;
    bool EnumerateDepthSwapchainImages(const FAndroidXRDepthSwapchain& Swapchain,
        TArray<FAndroidXRDepthSwapchainImage>& SwapchainImages) override;
    bool AcquireDepthSwapchainImages(const FAndroidXRDepthSwapchain& Swapchain,
        FAndroidXRDepthAcquireResult& AcquireResult) override;
private:
    XrInstance Instance{};
    XrSession Session{};

    #define ANDROIDXRDEPTHTEXTURE_FUNCTIONS(HelperMacro) \
        HelperMacro(xrCreateDepthSwapchainANDROID) \
        HelperMacro(xrDestroyDepthSwapchainANDROID) \
        HelperMacro(xrEnumerateDepthSwapchainImagesANDROID) \
        HelperMacro(xrEnumerateDepthResolutionsANDROID) \
        HelperMacro(xrAcquireDepthSwapchainImagesANDROID)

    ANDROIDXRDEPTHTEXTURE_FUNCTIONS(DECLARE_OPENXR_FUNC);
};
