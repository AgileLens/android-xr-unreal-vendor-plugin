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
#include "IAndroidXRPassthroughMeshModule.h"
#include "IOpenXRExtensionPlugin.h"
#include <AndroidXRHelpers.h>

DECLARE_LOG_CATEGORY_EXTERN(LogAndroidXRPassthroughMesh, Log, All);

class FAndroidXRPassthroughMesh : public IAndroidXRPassthroughMeshModule,
                                 public IOpenXRExtensionPlugin
{
public:
    FAndroidXRPassthroughMesh();

    /** IModuleInterface */
    void StartupModule() override;
    void ShutdownModule() override;

    /** IOpenXRExtensionPlugin */
    FString GetDisplayName() override
    {
        return FString(TEXT("AndroidXRPassthroughMesh"));
    }

    void PostCreateInstance(XrInstance InInstance) override;
    void PostCreateSession(XrSession InSession) override;
    bool GetRequiredExtensions(TArray<const ANSICHAR*>& OutExtensions) override;

    /** IAndroidXRPassthroughMeshModule */
    void UpdateCompositionLayers_RHIThread(XrSession InSession, TArray<XrCompositionLayerBaseHeader*>& Headers) override;

    bool GetPassthroughMeshSystemProperties(FAndroidXRSystemPassthroughProperties& Properties) override;
    bool CreatePassthroughLayer(const FAndroidXRPassthroughLayerMeshInfo& MeshInfo, FAndroidXRPassthroughLayer& Layer) override;
    bool UpdatePassthroughLayerTransform(const FAndroidXRPassthroughLayer& Layer, const FTransform& Transform) override;
    bool UpdatePassthroughLayerOpacity(const FAndroidXRPassthroughLayer& Layer, float Opacity) override;
    bool UpdatePassthroughLayerMesh(const FAndroidXRPassthroughLayer& Layer, const TArray<FVector>& Vertices, const TArray<int32>& Indices) override;
    bool DestroyPassthroughLayer(FAndroidXRPassthroughLayer& Layer) override;

private:
    TMap<XrPassthroughLayerANDROID, XrCompositionLayerPassthroughANDROID> PassthroughLayers{};
    TSet<XrPassthroughLayerANDROID> ActiveLayers{};

    XrInstance Instance{};
    XrSession Session{};
    void ConvertVertexAndIndexData(const TArray<FVector>& UnrealVertices,const TArray<int32>& UnrealIndices, TArray<XrVector3f>& Vertices, TArray<uint16_t>& Indices);

    #define PASSTHROUGHMESH_FUNCTIONS(HelperMacro) \
        HelperMacro(xrCreatePassthroughLayerANDROID) \
        HelperMacro(xrDestroyPassthroughLayerANDROID) \
        HelperMacro(xrSetPassthroughLayerMeshANDROID)
    PASSTHROUGHMESH_FUNCTIONS(DECLARE_OPENXR_FUNC);
};
