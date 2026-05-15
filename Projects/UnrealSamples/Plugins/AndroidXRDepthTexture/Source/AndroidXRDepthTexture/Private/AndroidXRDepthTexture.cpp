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

#include "AndroidXRDepthTexture.h"
#include "AndroidXRTypeConversions.h"
#include <IOpenXRHMDModule.h>
#include <IOpenXRHMD.h>
#include <IXRTrackingSystem.h>

DEFINE_LOG_CATEGORY(LogAndroidXRDepthTexture);

FAndroidXRDepthTexture::FAndroidXRDepthTexture()
{
}

void FAndroidXRDepthTexture::StartupModule()
{
    IAndroidXRDepthTextureModule::StartupModule();
    RegisterOpenXRExtensionModularFeature();
}

void FAndroidXRDepthTexture::ShutdownModule()
{
    UnregisterOpenXRExtensionModularFeature();
    IAndroidXRDepthTextureModule::ShutdownModule();
}

void FAndroidXRDepthTexture::PostCreateInstance(XrInstance InInstance)
{
    Instance = InInstance;

    ResolveOpenXRFunctions(Instance,
        {
            ANDROIDXRDEPTHTEXTURE_FUNCTIONS(RESOLVE_OPENXR_FUNC)
        },
        [](const char* UnresolvableFunctionName, XrResult Result)
        {
            UE_LOG(LogAndroidXRDepthTexture, Error,
                TEXT("Unable to resolve function pointer %s (error %s)"),
                UTF8_TO_TCHAR(UnresolvableFunctionName),
                OpenXRResultToString(Result));
        });
}

void FAndroidXRDepthTexture::PostCreateSession(XrSession InSession)
{
    Session = InSession;
}

bool FAndroidXRDepthTexture::GetRequiredExtensions(TArray<const ANSICHAR *> &OutExtensions)
{
    OutExtensions.Add(XR_ANDROID_DEPTH_TEXTURE_EXTENSION_NAME);
    return true;
}

bool FAndroidXRDepthTexture::GetDepthSwapchainSupported() const
{
    if (xrGetSystemProperties != nullptr)
    {
        XrSystemDepthTrackingPropertiesANDROID DepthTrackingProperties
            { .type = XR_TYPE_SYSTEM_DEPTH_TRACKING_PROPERTIES_ANDROID };
        XrSystemProperties SystemProperties{
            .type = XR_TYPE_SYSTEM_PROPERTIES,
            .next = &DepthTrackingProperties };

        auto Result = xrGetSystemProperties(Instance,
            IOpenXRHMDModule::Get().GetSystemId(), &SystemProperties);
        if (XR_UNQUALIFIED_SUCCESS(Result))
        {
            return !!DepthTrackingProperties.supportsDepthTracking;
        }

        UE_LOG(LogAndroidXRDepthTexture, Error,
            TEXT("GetDepthSwapchainSupported: "
                "xrGetSystemProperties failed with error %s"),
                OpenXRResultToString(Result));
    }
    return false;
}

bool FAndroidXRDepthTexture::EnumerateDepthResolutions(TArray<EAndroidXRDepthCameraResolution>& SupportedResolutions)
{
    if (xrEnumerateDepthResolutionsANDROID != nullptr)
    {
        uint32_t NumDepthResolutions{ };
        auto Result = xrEnumerateDepthResolutionsANDROID(Session,
            0, &NumDepthResolutions, nullptr);
        if (XR_UNQUALIFIED_SUCCESS(Result))
        {
            TArray<XrDepthCameraResolutionANDROID> NativeResolutions;
            NativeResolutions.SetNum(NumDepthResolutions);
            Result = xrEnumerateDepthResolutionsANDROID(Session,
                NativeResolutions.Num(),
                &NumDepthResolutions,
                NativeResolutions.GetData());
            if (XR_UNQUALIFIED_SUCCESS(Result))
            {
                SupportedResolutions.Reserve(NativeResolutions.Num());
                for (const auto& NativeResolution : NativeResolutions)
                {
                    SupportedResolutions.Add(AndroidXR::Convert(NativeResolution));
                }

                return true;
            }
        }

        UE_LOG(LogAndroidXRDepthTexture, Error,
            TEXT("xrEnumerateDepthResolutionsANDROID failed with error %s"),
            OpenXRResultToString(Result));
    }
    return false;
}

bool FAndroidXRDepthTexture::CreateDepthSwapchain(EAndroidXRDepthCameraResolution Resolution,
    uint32 CreateFlags,
    FAndroidXRDepthSwapchain& Swapchain)
{
    if (xrCreateDepthSwapchainANDROID != nullptr)
    {
        XrDepthSwapchainCreateInfoANDROID CreateInfo
        {
            .type = XR_TYPE_DEPTH_SWAPCHAIN_CREATE_INFO_ANDROID,
            .resolution = AndroidXR::Convert(Resolution)
        };

        if (CreateFlags & static_cast<uint32>(EAndroidXRDepthSwapchainCreateFlag::SmoothDepthImage))
        {
            CreateInfo.createFlags |= XR_DEPTH_SWAPCHAIN_CREATE_SMOOTH_DEPTH_IMAGE_BIT_ANDROID;
        }
        if (CreateFlags & static_cast<uint32>(EAndroidXRDepthSwapchainCreateFlag::SmoothConfidenceImage))
        {
            CreateInfo.createFlags |= XR_DEPTH_SWAPCHAIN_CREATE_SMOOTH_CONFIDENCE_IMAGE_BIT_ANDROID;
        }
        if (CreateFlags & static_cast<uint32>(EAndroidXRDepthSwapchainCreateFlag::RawDepthImage))
        {
            CreateInfo.createFlags |= XR_DEPTH_SWAPCHAIN_CREATE_RAW_DEPTH_IMAGE_BIT_ANDROID;
        }
        if (CreateFlags & static_cast<uint32>(EAndroidXRDepthSwapchainCreateFlag::RawConfidenceImage))
        {
            CreateInfo.createFlags |= XR_DEPTH_SWAPCHAIN_CREATE_RAW_CONFIDENCE_IMAGE_BIT_ANDROID;
        }

        XrDepthSwapchainANDROID NativeSwapchain{};
        auto Result = xrCreateDepthSwapchainANDROID(Session,
            &CreateInfo, &NativeSwapchain);
        if (XR_UNQUALIFIED_SUCCESS(Result))
        {
            Swapchain.DepthSwapchain = NativeSwapchain;
            return true;
        }

        UE_LOG(LogAndroidXRDepthTexture, Error,
            TEXT("xrCreateDepthSwapchainANDROID failed with error %d"),
            Result);
    }
    return false;
}

bool FAndroidXRDepthTexture::DestroyDepthSwapchain(FAndroidXRDepthSwapchain& Swapchain)
{
    if (xrDestroyDepthSwapchainANDROID != nullptr)
    {
        auto Result = xrDestroyDepthSwapchainANDROID(Swapchain.DepthSwapchain);
        if (XR_UNQUALIFIED_SUCCESS(Result))
        {
            Swapchain = { };
            return true;
        }

        UE_LOG(LogAndroidXRDepthTexture, Error,
            TEXT("xrDestroyDepthSwapchainANDROID failed with error %d"),
            Result);
    }
    return false;
}

bool FAndroidXRDepthTexture::EnumerateDepthSwapchainImages(const FAndroidXRDepthSwapchain& Swapchain,
    TArray<FAndroidXRDepthSwapchainImage>& SwapchainImages)
{
    if (xrEnumerateDepthSwapchainImagesANDROID != nullptr)
    {
        uint32_t ImageCountOutput{};
        auto Result = xrEnumerateDepthSwapchainImagesANDROID(Swapchain.DepthSwapchain,
            0,
            &ImageCountOutput,
            nullptr);
        if (XR_UNQUALIFIED_SUCCESS(Result))
        {
            TArray<XrDepthSwapchainImageANDROID> NativeImages;

            NativeImages.Init(
                {
                    .type = XR_TYPE_DEPTH_SWAPCHAIN_IMAGE_ANDROID
                }, ImageCountOutput);

            Result = xrEnumerateDepthSwapchainImagesANDROID(Swapchain.DepthSwapchain,
                NativeImages.Num(),
                &ImageCountOutput,
                NativeImages.GetData());
            if (XR_UNQUALIFIED_SUCCESS(Result))
            {
                SwapchainImages.Reserve(NativeImages.Num());
                for (const auto& NativeImage : NativeImages)
                {
                    SwapchainImages.Add(
                        {
                            .SwapchainImage = NativeImage
                        });
                }
                return true;
            }
        }

        UE_LOG(LogAndroidXRDepthTexture, Error,
            TEXT("xrEnumerateDepthSwapchainImagesANDROID failed with error %s"),
            OpenXRResultToString(Result));
    }
    return false;
}

bool FAndroidXRDepthTexture::AcquireDepthSwapchainImages(const FAndroidXRDepthSwapchain& Swapchain,
    FAndroidXRDepthAcquireResult& AcquireResult)
{
    if (xrAcquireDepthSwapchainImagesANDROID != nullptr)
    {
        auto HMD = GEngine->XRSystem.Get()->GetIOpenXRHMD();

        XrDepthAcquireInfoANDROID AcquireInfo
        {
            .type = XR_TYPE_DEPTH_ACQUIRE_INFO_ANDROID,
            .space = HMD->GetTrackingSpace(),
            .displayTime = HMD->GetDisplayTime()
        };

        XrDepthAcquireResultANDROID NativeAcquireResult
        {
            .type = XR_TYPE_DEPTH_ACQUIRE_RESULT_ANDROID
        };

        auto Result = xrAcquireDepthSwapchainImagesANDROID(Swapchain.
            DepthSwapchain, &AcquireInfo, &NativeAcquireResult);
        if (XR_UNQUALIFIED_SUCCESS(Result))
        {
            AcquireResult.AcquiredIndex = NativeAcquireResult.acquiredIndex;
            AcquireResult.ExposureTimespan =
                ToFTimespan(NativeAcquireResult.exposureTimestamp);

            auto WorldToMeters = GEngine->XRSystem->GetWorldToMetersScale();
            for (const auto& NativeView : NativeAcquireResult.views)
            {
                AcquireResult.Views.Add({
                    .FieldOfView =
                    {
                        .AngleLeft = FMath::RadiansToDegrees(NativeView.fov.angleLeft),
                        .AngleRight = FMath::RadiansToDegrees(NativeView.fov.angleRight),
                        .AngleUp = FMath::RadiansToDegrees(NativeView.fov.angleUp),
                        .AngleDown = FMath::RadiansToDegrees(NativeView.fov.angleDown)
                    },
                    .Transform = ToFTransform(NativeView.pose, WorldToMeters)
                });
            }

            return true;
        }

        UE_LOG(LogAndroidXRDepthTexture, Error,
            TEXT("xrAcquireDepthImagesANDROID failed with error %s"),
            OpenXRResultToString(Result));
    }
    return false;
}

IMPLEMENT_MODULE(FAndroidXRDepthTexture, AndroidXRDepthTexture);

