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
#include "Modules/ModuleManager.h"
#include "AndroidXRTypes.h"

/**
 * The public interface to this module.  In most cases, this interface is only
 * public to sibling modules within this plugin.
 */
class ANDROIDXRDEPTHTEXTURE_API IAndroidXRDepthTextureModule : public IModuleInterface
{
public:
    /**
     * Singleton-like access to this module's interface.  This is just for
     * convenience! Beware of calling this during the shutdown phase, though. Your
     * module might have been unloaded already.
     *
     * @return Returns singleton instance, loading the module on demand if needed
     */
    static inline IAndroidXRDepthTextureModule& Get()
    {
        return FModuleManager::LoadModuleChecked<IAndroidXRDepthTextureModule>("AndroidXRDepthTexture");
    }

    /**
     * Checks to see if this module is loaded and ready.  It is only valid to call
     * Get() if IsAvailable() returns true.
     *
     * @return True if the module is loaded and ready to use
     */
    static inline bool IsAvailable()
    {
        return FModuleManager::Get().IsModuleLoaded("AndroidXRDepthTexture");
    }

    virtual bool GetDepthSwapchainSupported() const = 0;
    virtual bool EnumerateDepthResolutions(TArray<EAndroidXRDepthCameraResolution>& SupportedResolutions) = 0;
    virtual bool CreateDepthSwapchain(EAndroidXRDepthCameraResolution Resolution,
        uint32 CreateFlags,
        FAndroidXRDepthSwapchain& Swapchain) = 0;
    virtual bool DestroyDepthSwapchain(FAndroidXRDepthSwapchain& Swapchain) = 0;
    virtual bool EnumerateDepthSwapchainImages(const FAndroidXRDepthSwapchain& Swapchain,
        TArray<FAndroidXRDepthSwapchainImage>& SwapchainImages) = 0;
    virtual bool AcquireDepthSwapchainImages(const FAndroidXRDepthSwapchain& Swapchain,
        FAndroidXRDepthAcquireResult& AcquireResult) = 0;
};

