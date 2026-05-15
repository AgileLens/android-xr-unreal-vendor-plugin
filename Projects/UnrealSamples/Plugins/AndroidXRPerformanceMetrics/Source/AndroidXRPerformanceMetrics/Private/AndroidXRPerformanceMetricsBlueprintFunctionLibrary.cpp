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

#include "AndroidXRPerformanceMetricsBlueprintFunctionLibrary.h"
#include "IAndroidXRPerformanceMetricsModule.h"

bool UAndroidXRPerformanceMetricsBlueprintFunctionLibrary::
    EnumeratePerformanceMetricsCounterPaths(TArray<FString>& MetricsCounterPaths)
{
    if (IAndroidXRPerformanceMetricsModule::IsAvailable())
    {
        return IAndroidXRPerformanceMetricsModule::Get().
            EnumeratePerformanceMetricsCounterPaths(MetricsCounterPaths);
    }
    return false;
}

bool UAndroidXRPerformanceMetricsBlueprintFunctionLibrary::
    SetPerformanceMetricsEnabled(bool bEnabled)
{
    if (IAndroidXRPerformanceMetricsModule::IsAvailable())
    {
        return IAndroidXRPerformanceMetricsModule::Get().
            SetPerformanceMetricsEnabled(bEnabled);
    }
    return false;
}

bool UAndroidXRPerformanceMetricsBlueprintFunctionLibrary::GetPerformanceMetricsEnabled()
{
    if (IAndroidXRPerformanceMetricsModule::IsAvailable())
    {
        return IAndroidXRPerformanceMetricsModule::Get().GetPerformanceMetricsEnabled();
    }
    return false;
}

bool UAndroidXRPerformanceMetricsBlueprintFunctionLibrary::
    QueryPerformanceMetricsCounter(FString CounterPath,
        FAndroidXRPerformanceMetricsCounter& PerformanceMetricsCounter)
{
    if (IAndroidXRPerformanceMetricsModule::IsAvailable())
    {
        return IAndroidXRPerformanceMetricsModule::Get().
            QueryPerformanceMetricsCounter(CounterPath, PerformanceMetricsCounter);
    }
    return false;
}
