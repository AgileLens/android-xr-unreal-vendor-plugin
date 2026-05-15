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
#include "AndroidXRPassthroughMeshTypes.h"

/**
 * The public interface to this module.  In most cases, this interface is only
 * public to sibling modules within this plugin.
 */
class ANDROIDXRPASSTHROUGHMESH_API IAndroidXRPassthroughMeshModule : public IModuleInterface
{
public:
    /**
     * Singleton-like access to this module's interface.  This is just for
     * convenience! Beware of calling this during the shutdown phase, though. Your
     * module might have been unloaded already.
     *
     * @return Returns singleton instance, loading the module on demand if needed
     */
    static inline IAndroidXRPassthroughMeshModule& Get()
    {
        return FModuleManager::LoadModuleChecked<IAndroidXRPassthroughMeshModule>("AndroidXRPassthroughMesh");
    }

    /**
     * Checks to see if this module is loaded and ready.  It is only valid to call
     * Get() if IsAvailable() returns true.
     *
     * @return True if the module is loaded and ready to use
     */
    static inline bool IsAvailable()
    {
        return FModuleManager::Get().IsModuleLoaded("AndroidXRPassthroughMesh");
    }

    /**
     * Gets the passthrough mesh system properties.
     * @param[out] The passthrough mesh properties of the system.
     * @return True if the underlying API call was successful.
     */
    virtual bool GetPassthroughMeshSystemProperties(FAndroidXRSystemPassthroughProperties& Properties) = 0;

    /**
     * Creates a passthrough layer for the mesh info.
     * @param[in] The mesh info for the passthrough layer.
     * @param[out] The passthrough layer created.
     * @return True if the underlying API call was successful.
     */
    virtual bool CreatePassthroughLayer(const FAndroidXRPassthroughLayerMeshInfo& MeshInfo, FAndroidXRPassthroughLayer& Layer) = 0;

    /**
     * Updates the passthrough layer's transform
     * @param[in] The layer to update the transform for.
     * @param[in] The new transform of the layer mesh.
     * @return True if the underlying API call was successful.
     */
    virtual bool UpdatePassthroughLayerTransform(const FAndroidXRPassthroughLayer& Layer, const FTransform& Transform) = 0;

    /**
     * Updates the passthrough layer texture's opacity
     * @param[in] The layer to update the opacity for.
     * @param[in] The new opacity of the layer texture.
     * @return True if the underlying API call was successful.
     */
    virtual bool UpdatePassthroughLayerOpacity(const FAndroidXRPassthroughLayer& Layer, float Opacity) = 0;

    /**
     * Updates the passthrough layer's mesh
     * @param[in] The layer to update the mesh for.
     * @param[in] The new vertices of the layer mesh.
     * @param[in] The new indices of the layer mesh.
     * @return True if the underlying API call was successful.
     */
    virtual bool UpdatePassthroughLayerMesh(const FAndroidXRPassthroughLayer& Layer, const TArray<FVector>& Vertices, const TArray<int32>& Indices) = 0;

    /**
     * Destroys the passthrough layer
     * @param[in] The passthrough layer to destroy
     * @return True if the underlying API call was successful.
     */
    virtual bool DestroyPassthroughLayer(FAndroidXRPassthroughLayer& Layer) = 0;
};
