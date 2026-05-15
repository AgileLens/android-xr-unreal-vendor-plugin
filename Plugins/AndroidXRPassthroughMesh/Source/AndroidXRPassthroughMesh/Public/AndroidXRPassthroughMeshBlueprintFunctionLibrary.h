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

#include "AndroidXRPassthroughMeshTypes.h"
#include "AndroidXRPassthroughMeshBlueprintFunctionLibrary.generated.h"

UCLASS(ClassGroup=AndroidXRPassthroughMesh)
class ANDROIDXRPASSTHROUGHMESH_API UAndroidXRPassthroughMeshBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()
public:
  /**
   * Checks if the passthrough layer is valid.
   * @param[in] The layer to check the validity of.
   * @return True if the layer is valid.
   */
   UFUNCTION(BlueprintPure, Category="AndroidXR|Passthrough Mesh Function Library")
   static bool IsValidPassthroughLayer(const FAndroidXRPassthroughLayer& Layer);

  /**
   * Gets the passthrough mesh system properties.
   * @param[out] The passthrough mesh properties of the system.
   * @return True if the underlying API call was successful.
   */
   UFUNCTION(BlueprintCallable, Category="AndroidXR|Passthrough Mesh Function Library")
   static bool GetPassthroughMeshSystemProperties(FAndroidXRSystemPassthroughProperties& Properties);

  /**
   * Creates a passthrough layer for the mesh info.
   * @param[in] The mesh info for the passthrough layer.
   * @param[out] The passthrough layer created.
   * @return True if the underlying API call was successful.
   */
   UFUNCTION(BlueprintCallable, Category="AndroidXR|Passthrough Mesh Function Library")
   static bool CreatePassthroughLayer(const FAndroidXRPassthroughLayerMeshInfo& LayerInfo, FAndroidXRPassthroughLayer& Layer);

  /**
   * Updates the passthrough layer's transform
   * @param[in] The layer to update the transform for.
   * @param[in] The new transform of the layer mesh.
   * @return True if the underlying API call was successful.
   */
   UFUNCTION(BlueprintCallable, Category="AndroidXR|Passthrough Mesh Function Library")
   static bool UpdatePassthroughLayerTransform(const FAndroidXRPassthroughLayer& Layer, const FTransform& Transform);

  /**
   * Updates the passthrough layer texture's opacity
   * @param[in] The layer to update the opacity for.
   * @param[in] The new opacity of the layer texture.
   * @return True if the underlying API call was successful.
   */
   UFUNCTION(BlueprintCallable, Category="AndroidXR|Passthrough Mesh Function Library")
   static bool UpdatePassthroughLayerOpacity(const FAndroidXRPassthroughLayer& Layer, float Opacity);

  /**
   * Updates the passthrough layer's mesh
   * @param[in] The layer to update the mesh for.
   * @param[in] The new vertices of the layer mesh.
   * @param[in] The new indices of the layer mesh.
   * @return True if the underlying API call was successful.
   */
   UFUNCTION(BlueprintCallable, Category="AndroidXR|Passthrough Mesh Function Library")
   static bool UpdatePassthroughLayerMesh(const FAndroidXRPassthroughLayer& Layer, const TArray<FVector>& Vertices, const TArray<int32>& Indices);

  /**
   * Destroys the passthrough layer
   * @param[in] The passthrough layer to destroy
   * @return True if the underlying API call was successful.
   */
   UFUNCTION(BlueprintCallable, Category="AndroidXR|Passthrough Mesh Function Library")
   static bool DestroyPassthroughLayer(UPARAM(ref) FAndroidXRPassthroughLayer& Layer);
};
