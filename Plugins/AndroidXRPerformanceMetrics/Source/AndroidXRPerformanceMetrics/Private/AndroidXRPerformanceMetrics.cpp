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

#include "AndroidXRPerformanceMetrics.h"
#include "AndroidXRTypeConversions.h"

DEFINE_LOG_CATEGORY(LogAndroidXRPerformanceMetrics);

FAndroidXRPerformanceMetrics::FAndroidXRPerformanceMetrics()
{
}

void FAndroidXRPerformanceMetrics::StartupModule()
{
    IAndroidXRPerformanceMetricsModule::StartupModule();
    RegisterOpenXRExtensionModularFeature();
}

void FAndroidXRPerformanceMetrics::ShutdownModule()
{
    UnregisterOpenXRExtensionModularFeature();
    IAndroidXRPerformanceMetricsModule::ShutdownModule();
}

bool FAndroidXRPerformanceMetrics::GetRequiredExtensions(TArray<const ANSICHAR*>& OutExtensions)
{
    OutExtensions.Add(XR_ANDROID_PERFORMANCE_METRICS_EXTENSION_NAME);
    return true;
}

void FAndroidXRPerformanceMetrics::PostCreateInstance(XrInstance InInstance)
{
    Instance = InInstance;

    ResolveOpenXRFunctions(Instance,
        {
            ANDROIDXRPERFORMANCEMETRICS_FUNCTIONS(RESOLVE_OPENXR_FUNC)
        },
        [](const char* UnresolvableFunctionName, XrResult Result)
        {
            UE_LOG(LogAndroidXRPerformanceMetrics, Error,
                TEXT("Unable to resolve function pointer %s (error %s)"),
                UTF8_TO_TCHAR(UnresolvableFunctionName),
                OpenXRResultToString(Result));
        });
}

void FAndroidXRPerformanceMetrics::PostCreateSession(XrSession InSession)
{
    Session = InSession;
}

bool FAndroidXRPerformanceMetrics::EnumeratePerformanceMetricsCounterPaths(TArray<FString> &MetricsCounterPaths)
{
    if (xrEnumeratePerformanceMetricsCounterPathsANDROID != nullptr)
    {
        uint32_t NumCounterPaths;
        auto Result = xrEnumeratePerformanceMetricsCounterPathsANDROID(Instance,
            0, &NumCounterPaths, nullptr);

        if (XR_UNQUALIFIED_SUCCESS(Result))
        {
            TArray<XrPath> NativePaths;
            NativePaths.SetNum(NumCounterPaths);

            Result = xrEnumeratePerformanceMetricsCounterPathsANDROID(Instance,
                NativePaths.Num(), &NumCounterPaths, NativePaths.GetData());
            if (XR_UNQUALIFIED_SUCCESS(Result))
            {
                MetricsCounterPaths.Reserve(NumCounterPaths);
                for (const auto& NativePath : NativePaths)
                {
                    MetricsCounterPaths.Add(FOpenXRPath(NativePath).ToString());
                }
                return true;
            }
        }

        UE_LOG(LogAndroidXRPerformanceMetrics, Error,
            TEXT("EnumeratePerformanceMetricsCounterPaths: "
                "xrEnumeratePerformanceMetricsCounterPathsANDROID failed with error %s"),
                OpenXRResultToString(Result));
    }
    return false;
}

bool FAndroidXRPerformanceMetrics::SetPerformanceMetricsEnabled(bool bEnabled)
{
    if (xrSetPerformanceMetricsStateANDROID != nullptr)
    {
        XrPerformanceMetricsStateANDROID PerformanceMetricsState
        {
            .type = XR_TYPE_PERFORMANCE_METRICS_STATE_ANDROID,
            .enabled = bEnabled
        };

        auto Result = xrSetPerformanceMetricsStateANDROID(Session, &PerformanceMetricsState);
        if (XR_UNQUALIFIED_SUCCESS(Result))
        {
            return true;
        }

        UE_LOG(LogAndroidXRPerformanceMetrics, Error,
            TEXT("SetPerformanceMetricsEnabled: "
                "xrSetPerformanceMetricsStateANDROID failed with error %s"),
                OpenXRResultToString(Result));
    }
    return false;
}

bool FAndroidXRPerformanceMetrics::GetPerformanceMetricsEnabled()
{
    if (xrGetPerformanceMetricsStateANDROID != nullptr)
    {
        XrPerformanceMetricsStateANDROID PerformanceMetricsState
        {
            .type = XR_TYPE_PERFORMANCE_METRICS_STATE_ANDROID
        };

        auto Result = xrGetPerformanceMetricsStateANDROID(Session, &PerformanceMetricsState);
        if (XR_UNQUALIFIED_SUCCESS(Result))
        {
            return !!PerformanceMetricsState.enabled;
        }

        UE_LOG(LogAndroidXRPerformanceMetrics, Error,
            TEXT("GetPerformanceMetricsEnabled: "
                "xrGetPerformanceMetricsStateANDROID failed with error %s"),
                OpenXRResultToString(Result));
    }
    return false;
}

bool FAndroidXRPerformanceMetrics::QueryPerformanceMetricsCounter(FString CounterPath,
    FAndroidXRPerformanceMetricsCounter &PerformanceMetricsCounter)
{
    if (xrQueryPerformanceMetricsCounterANDROID != nullptr)
    {
        XrPerformanceMetricsCounterANDROID NativeMetricsCounter
        {
            .type = XR_TYPE_PERFORMANCE_METRICS_COUNTER_ANDROID
        };

        auto Result = xrQueryPerformanceMetricsCounterANDROID(Session,
            static_cast<XrPath>(FOpenXRPath(CounterPath)), &NativeMetricsCounter);
        if (XR_UNQUALIFIED_SUCCESS(Result))
        {
            if (NativeMetricsCounter.counterFlags &
                XR_PERFORMANCE_METRICS_COUNTER_ANY_VALUE_VALID_BIT_ANDROID)
            {
                PerformanceMetricsCounter.Flags |= static_cast<int64>
                    (EAndroidXRPerformanceMetricsCounterFlags::AnyValueValid);
            }
            if (NativeMetricsCounter.counterFlags &
                XR_PERFORMANCE_METRICS_COUNTER_UINT_VALUE_VALID_BIT_ANDROID)
            {
                PerformanceMetricsCounter.Flags |= static_cast<int64>
                    (EAndroidXRPerformanceMetricsCounterFlags::IntValueValid);
            }
            if (NativeMetricsCounter.counterFlags &
                XR_PERFORMANCE_METRICS_COUNTER_FLOAT_VALUE_VALID_BIT_ANDROID)
            {
                PerformanceMetricsCounter.Flags |= static_cast<int64>
                    (EAndroidXRPerformanceMetricsCounterFlags::FloatValueValid);
            }

            PerformanceMetricsCounter.Unit = AndroidXR::Convert(NativeMetricsCounter.counterUnit);
            PerformanceMetricsCounter.IntValue = NativeMetricsCounter.uintValue;
            PerformanceMetricsCounter.FloatValue = NativeMetricsCounter.floatValue;

            return true;
        }

        UE_LOG(LogAndroidXRPerformanceMetrics, Error,
            TEXT("QueryPerformanceMetricsCounter: "
                "xrQueryPerformanceMetricsCounterANDROID failed with error %s"),
                OpenXRResultToString(Result));
    }
    return false;
}

IMPLEMENT_MODULE(FAndroidXRPerformanceMetrics, AndroidXRPerformanceMetrics);
