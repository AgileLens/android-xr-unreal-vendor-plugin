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
class ANDROIDXRPERFORMANCEMETRICS_API IAndroidXRPerformanceMetricsModule : public IModuleInterface
{
public:
    /**
     * Singleton-like access to this module's interface.  This is just for
     * convenience! Beware of calling this during the shutdown phase, though. Your
     * module might have been unloaded already.
     *
     * @return Returns singleton instance, loading the module on demand if needed
     */
    static inline IAndroidXRPerformanceMetricsModule& Get()
    {
        return FModuleManager::LoadModuleChecked<IAndroidXRPerformanceMetricsModule>("AndroidXRPerformanceMetrics");
    }

    /**
     * Checks to see if this module is loaded and ready.  It is only valid to call
     * Get() if IsAvailable() returns true.
     *
     * @return True if the module is loaded and ready to use
     */
    static inline bool IsAvailable()
    {
        return FModuleManager::Get().IsModuleLoaded("AndroidXRPerformanceMetrics");
    }

    /**
     * Enumerates all performance metrics counter paths supported by the runtime.
     * @param[out] MetricsCounterPaths Array of supported performance metrics
     * counter paths, as strings.
     * @return True if the underlying API call was successful.
     */
    virtual bool EnumeratePerformanceMetricsCounterPaths(TArray<FString>& MetricsCounterPaths) = 0;

    /**
     * Enables or disables the performance metrics system.
     * @param[in] bEnabled Whether or not the system should be enabled.
     * @return True if the underlying API call was successful.
     */
    virtual bool SetPerformanceMetricsEnabled(bool bEnabled) = 0;

    /**
     * Returns whether or not the performance metrics system is enabled.
     * @return True if the system is enabled.
     */
    virtual bool GetPerformanceMetricsEnabled() = 0;

    /**
     * Queries a performance metrics counter.
     * @param[in] CounterPath String representing the metric counter path.
     * @param[out] PerformanceMetricsCounter The metrics for the specified path.
     * @return True if the underlying API call was successful.
     */
    virtual bool QueryPerformanceMetricsCounter(FString CounterPath,
        FAndroidXRPerformanceMetricsCounter& PerformanceMetricsCounter) = 0;
};

