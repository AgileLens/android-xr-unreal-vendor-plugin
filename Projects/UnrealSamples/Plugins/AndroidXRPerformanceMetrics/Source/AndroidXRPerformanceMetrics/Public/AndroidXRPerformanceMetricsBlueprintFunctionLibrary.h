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
#include "AndroidXRPerformanceMetricsBlueprintFunctionLibrary.generated.h"

UCLASS(ClassGroup=AndroidXRPerformanceMetrics)
class ANDROIDXRPERFORMANCEMETRICS_API UAndroidXRPerformanceMetricsBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()
public:
    /**
     * Enumerates all performance metrics counter paths supported by the runtime.
     * @param[out] MetricsCounterPaths Array of supported performance metrics
     * counter paths, as strings.
     * @return True if the underlying API call was successful.
     */
    UFUNCTION(BlueprintPure, Category="AndroidXR|PerformanceMetricsFunctionLibrary")
    static bool EnumeratePerformanceMetricsCounterPaths(TArray<FString>& MetricsCounterPaths);

    /**
     * Enables or disables the performance metrics system.
     * @param[in] bEnabled Whether or not the system should be enabled.
     * @return True if the underlying API call was successful.
     */
    UFUNCTION(BlueprintCallable, Category="AndroidXR|PerformanceMetricsFunctionLibrary")
    static bool SetPerformanceMetricsEnabled(bool bEnabled);

    /**
     * Returns whether or not the performance metrics system is enabled.
     * @return True if the system is enabled.
     */
    UFUNCTION(BlueprintPure, Category="AndroidXR|PerformanceMetricsFunctionLibrary")
    static bool GetPerformanceMetricsEnabled();

    /**
     * Queries a performance metrics counter.
     * @param[in] CounterPath String representing the metric counter path.
     * @param[out] PerformanceMetricsCounter The metrics for the specified path.
     * @return True if the underlying API call was successful.
     */
    UFUNCTION(BlueprintCallable, Category="AndroidXR|PerformanceMetricsFunctionLibrary")
    static bool QueryPerformanceMetricsCounter(FString CounterPath,
        FAndroidXRPerformanceMetricsCounter& PerformanceMetricsCounter);
};
