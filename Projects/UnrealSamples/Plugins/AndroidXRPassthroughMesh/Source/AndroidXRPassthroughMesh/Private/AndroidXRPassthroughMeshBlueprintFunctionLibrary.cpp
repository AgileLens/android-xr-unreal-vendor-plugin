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

#include "AndroidXRPassthroughMeshBlueprintFunctionLibrary.h"
#include "IAndroidXRPassthroughMeshModule.h"

#define RETURN_IF_PASSTHROUGH_MESH_MODULE_NOT_FOUND() if (!IAndroidXRPassthroughMeshModule::IsAvailable()){return false;}

bool UAndroidXRPassthroughMeshBlueprintFunctionLibrary::IsValidPassthroughLayer(const FAndroidXRPassthroughLayer& Layer)
{
    return Layer.NativeLayer != XR_NULL_HANDLE;
}

bool UAndroidXRPassthroughMeshBlueprintFunctionLibrary::GetPassthroughMeshSystemProperties(FAndroidXRSystemPassthroughProperties& Properties)
{
    RETURN_IF_PASSTHROUGH_MESH_MODULE_NOT_FOUND();
    return IAndroidXRPassthroughMeshModule::Get().GetPassthroughMeshSystemProperties(Properties);
}

bool UAndroidXRPassthroughMeshBlueprintFunctionLibrary::CreatePassthroughLayer(const FAndroidXRPassthroughLayerMeshInfo& LayerInfo, FAndroidXRPassthroughLayer& Layer)
{
    RETURN_IF_PASSTHROUGH_MESH_MODULE_NOT_FOUND();
    return IAndroidXRPassthroughMeshModule::Get().CreatePassthroughLayer(LayerInfo, Layer);
}

bool UAndroidXRPassthroughMeshBlueprintFunctionLibrary::UpdatePassthroughLayerTransform(const FAndroidXRPassthroughLayer& Layer, const FTransform &Transform)
{
    RETURN_IF_PASSTHROUGH_MESH_MODULE_NOT_FOUND();
    return IAndroidXRPassthroughMeshModule::Get().UpdatePassthroughLayerTransform(Layer, Transform);
}

bool UAndroidXRPassthroughMeshBlueprintFunctionLibrary::UpdatePassthroughLayerOpacity(const FAndroidXRPassthroughLayer& Layer, float Opacity)
{
    RETURN_IF_PASSTHROUGH_MESH_MODULE_NOT_FOUND();
    return IAndroidXRPassthroughMeshModule::Get().UpdatePassthroughLayerOpacity(Layer, Opacity);
}

bool UAndroidXRPassthroughMeshBlueprintFunctionLibrary::UpdatePassthroughLayerMesh(const FAndroidXRPassthroughLayer& Layer, const TArray<FVector>& Vertices, const TArray<int32>& Indices)
{
    RETURN_IF_PASSTHROUGH_MESH_MODULE_NOT_FOUND();
    return IAndroidXRPassthroughMeshModule::Get().UpdatePassthroughLayerMesh(Layer, Vertices, Indices);
}

bool UAndroidXRPassthroughMeshBlueprintFunctionLibrary::DestroyPassthroughLayer(UPARAM(ref) FAndroidXRPassthroughLayer& Layer)
{
    RETURN_IF_PASSTHROUGH_MESH_MODULE_NOT_FOUND();
    return IAndroidXRPassthroughMeshModule::Get().DestroyPassthroughLayer(Layer);
}


