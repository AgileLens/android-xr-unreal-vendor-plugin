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

#include "AndroidXRPassthroughMesh.h"
#include <IOpenXRHMDModule.h>
#include <IXRTrackingSystem.h>
#include <IHeadMountedDisplay.h>
#include "IOpenXRHMD.h"

DEFINE_LOG_CATEGORY(LogAndroidXRPassthroughMesh);

#define LOG_IF_OPENXR_ERROR_AND_RETURN(Tag, Function, Result) if(!XR_UNQUALIFIED_SUCCESS(Result)){ UE_LOG(LogAndroidXRPassthroughMesh, Error, TEXT("%s : %s failed with error %s"), TEXT(#Tag), TEXT(#Function), OpenXRResultToString(Result)); return false;}
#define RETURN_IF_FUNCTION_NOT_FOUND(Function) if(!Function){ UE_LOG(LogAndroidXRPassthroughMesh, Error, TEXT("Unable to locate function %s"), TEXT(#Function)); return false;}

FAndroidXRPassthroughMesh::FAndroidXRPassthroughMesh()
{
}

void FAndroidXRPassthroughMesh::StartupModule()
{
    IAndroidXRPassthroughMeshModule::StartupModule();
    RegisterOpenXRExtensionModularFeature();
}

void FAndroidXRPassthroughMesh::ShutdownModule()
{
    UnregisterOpenXRExtensionModularFeature();
    IAndroidXRPassthroughMeshModule::ShutdownModule();
}

bool FAndroidXRPassthroughMesh::GetRequiredExtensions(TArray<const ANSICHAR*>& OutExtensions)
{
    OutExtensions.Add(XR_ANDROID_COMPOSITION_LAYER_PASSTHROUGH_MESH_EXTENSION_NAME);
    return true;
}

void FAndroidXRPassthroughMesh::UpdateCompositionLayers_RHIThread(XrSession InSession, TArray<XrCompositionLayerBaseHeader*>& Headers)
{
    for (auto& LayerPair : PassthroughLayers)
    {
        Headers.Add((XrCompositionLayerBaseHeader*)&LayerPair.Value);
    }
}

void FAndroidXRPassthroughMesh::PostCreateInstance(XrInstance InInstance)
{
    Instance = InInstance;

    ResolveOpenXRFunctions(Instance,
        {
            PASSTHROUGHMESH_FUNCTIONS(RESOLVE_OPENXR_FUNC)
        },
        [](const char* UnresolvableFunctionName, XrResult Result)
        {
            UE_LOG(LogAndroidXRPassthroughMesh, Error,
                TEXT("Unable to resolve function pointer %s (error %s)"),
                UTF8_TO_TCHAR(UnresolvableFunctionName),
                OpenXRResultToString(Result));
        });
}

void FAndroidXRPassthroughMesh::PostCreateSession(XrSession InSession)
{
    Session = InSession;
}

bool FAndroidXRPassthroughMesh::GetPassthroughMeshSystemProperties(FAndroidXRSystemPassthroughProperties& Properties)
{
    RETURN_IF_FUNCTION_NOT_FOUND(xrGetSystemProperties);
    XrSystemPassthroughLayerPropertiesANDROID PassthroughLayerProperties{XR_TYPE_SYSTEM_PASSTHROUGH_LAYER_PROPERTIES_ANDROID};
    XrSystemProperties SystemProperties{
        .type = XR_TYPE_SYSTEM_PROPERTIES,
        .next = &PassthroughLayerProperties
    };

    auto Result = xrGetSystemProperties(Instance, IOpenXRHMDModule::Get().GetSystemId(), &SystemProperties);
    LOG_IF_OPENXR_ERROR_AND_RETURN(GetPassthroughMeshSystemProperties, XrGetSystemProperties, Result);

    Properties.bSupportsPassthroughLayer = !!PassthroughLayerProperties.supportsPassthroughLayer;
    Properties.MaxMeshVertexCount = PassthroughLayerProperties.maxMeshVertexCount;
    Properties.MaxMeshIndexCount = PassthroughLayerProperties.maxMeshIndexCount;
    return true;
}

void FAndroidXRPassthroughMesh::ConvertVertexAndIndexData(const TArray<FVector>& UnrealVertices,const TArray<int32>& UnrealIndices, TArray<XrVector3f>& Vertices, TArray<uint16_t>& Indices)
{
    auto VertexJobFuture = Async(EAsyncExecution::Thread, [&](){
        Algo::Transform(UnrealVertices, Vertices, [](const FVector& Vector){
        return ToXrVector(Vector);
        });
    });

    auto IndexJobFuture = Async(EAsyncExecution::Thread, [&](){
        Algo::Transform(UnrealIndices, Indices, [](int32 Index){
        return static_cast<uint16_t>(Index);
        });
    });

    VertexJobFuture.Wait();
    IndexJobFuture.Wait();
}

bool FAndroidXRPassthroughMesh::CreatePassthroughLayer(const FAndroidXRPassthroughLayerMeshInfo& MeshInfo, FAndroidXRPassthroughLayer& Layer)
{
    RETURN_IF_FUNCTION_NOT_FOUND(xrCreatePassthroughLayerANDROID);
    TArray<XrVector3f> Vertices{};
    TArray<uint16_t> Indices{};
    ConvertVertexAndIndexData(MeshInfo.Vertices, MeshInfo.Indices, Vertices, Indices);

    XrPassthroughLayerCreateInfoANDROID CreateInfo{
        .type = XR_TYPE_PASSTHROUGH_LAYER_CREATE_INFO_ANDROID,
        .next = nullptr,
        .vertexCapacity = static_cast<uint32_t>(Vertices.Num()),
        .indexCapacity = static_cast<uint32_t>(Indices.Num())
    };
    XrPassthroughLayerANDROID NativeLayer{};
    auto Result = xrCreatePassthroughLayerANDROID(Session, &CreateInfo, &NativeLayer);
    LOG_IF_OPENXR_ERROR_AND_RETURN(CreatePassthroughLayer, xrCreatePassthroughLayerANDROID, Result);

    Layer.NativeLayer = NativeLayer;

    ActiveLayers.Add(NativeLayer);

    auto HMD = GEngine->XRSystem.Get()->GetIOpenXRHMD();
    XrCompositionLayerPassthroughANDROID Header{XR_TYPE_COMPOSITION_LAYER_PASSTHROUGH_ANDROID};
    Header.space = HMD->GetTrackingSpace();
    Header.pose = ToXrPose(MeshInfo.Transform, GEngine->XRSystem->GetWorldToMetersScale());
    auto TransformScale = MeshInfo.Transform.GetScale3D();
    auto WorldToMetersScale = GEngine->XRSystem->GetWorldToMetersScale();
    Header.scale = XrVector3f{(float)TransformScale.Y / WorldToMetersScale , (float)TransformScale.Z / WorldToMetersScale, (float)TransformScale.X / WorldToMetersScale};
    Header.opacity = MeshInfo.Opacity;
    Header.layer = NativeLayer;

    ENQUEUE_RENDER_COMMAND(CreatePassthroughLayer)([NativeLayer, Header, PassthroughLayerPtr = &PassthroughLayers](FRHICommandListImmediate& RHICmdList) {
        PassthroughLayerPtr->Add(NativeLayer, Header);
    });


    XrPassthroughLayerMeshANDROID LayerMesh{XR_TYPE_PASSTHROUGH_LAYER_MESH_ANDROID};

    LayerMesh.windingOrder = XrWindingOrderANDROID::XR_WINDING_ORDER_CCW_ANDROID;
    LayerMesh.vertexCount = Vertices.Num();
    LayerMesh.vertices = Vertices.GetData();
    LayerMesh.indexCount = Indices.Num();
    LayerMesh.indices = Indices.GetData();

    Result = xrSetPassthroughLayerMeshANDROID(NativeLayer, &LayerMesh);
    LOG_IF_OPENXR_ERROR_AND_RETURN(CreatePassthroughLayer, xrSetPassthroughLayerMeshANDROID, Result);
    return true;
}

bool FAndroidXRPassthroughMesh::UpdatePassthroughLayerTransform(const FAndroidXRPassthroughLayer& Layer, const FTransform& Transform)
{
    if (!ActiveLayers.Contains(Layer.NativeLayer))
    {
        UE_LOG(LogAndroidXRPassthroughMesh, Error, TEXT("The requested layer %d was not found."), Layer.NativeLayer);
        return false;
    }
    auto WorldToMetersScale = GEngine->XRSystem->GetWorldToMetersScale();
    auto UpdatedTransform = ToXrPose(Transform, GEngine->XRSystem->GetWorldToMetersScale());
    auto TransformScale = Transform.GetScale3D();
    auto UpdatedScale = XrVector3f{ (float)TransformScale.Y / WorldToMetersScale , (float)TransformScale.Z / WorldToMetersScale, (float)TransformScale.X / WorldToMetersScale };

    ENQUEUE_RENDER_COMMAND(UpdatePassthroughLayerTransform)([NativeLayer = Layer.NativeLayer, UpdatedScale, UpdatedTransform, PassthroughLayerPtr = &PassthroughLayers](FRHICommandListImmediate& RHICmdList) {
        auto Header = PassthroughLayerPtr->Find(NativeLayer);
        if (!Header) {
            return;
        }
        Header->pose = UpdatedTransform;
        Header->scale = UpdatedScale;
    });
    return true;
}

bool FAndroidXRPassthroughMesh::UpdatePassthroughLayerOpacity(const FAndroidXRPassthroughLayer &Layer, float Opacity)
{
    if (!ActiveLayers.Contains(Layer.NativeLayer))
    {
        UE_LOG(LogAndroidXRPassthroughMesh, Error, TEXT("The requested layer %d was not found."), Layer.NativeLayer);
        return false;
    }
    ENQUEUE_RENDER_COMMAND(UpdatePassthroughLayerOpacity)([Opacity, NativeLayer = Layer.NativeLayer, PassthroughLayerPtr = &PassthroughLayers](FRHICommandListImmediate& RHICmdList) {
        auto Header = PassthroughLayerPtr->Find(NativeLayer);
        if (!Header)
        {
            return;
        }
        Header->opacity = Opacity;
    });
    return true;
}

bool FAndroidXRPassthroughMesh::UpdatePassthroughLayerMesh(const FAndroidXRPassthroughLayer& Layer, const TArray<FVector>& Vertices, const TArray<int32>& Indices)
{
    RETURN_IF_FUNCTION_NOT_FOUND(xrSetPassthroughLayerMeshANDROID);
    TArray<XrVector3f> NativeVertices{};
    TArray<uint16_t> NativeIndices{};
    ConvertVertexAndIndexData(Vertices, Indices, NativeVertices, NativeIndices);

    XrPassthroughLayerMeshANDROID LayerMesh{XR_TYPE_PASSTHROUGH_LAYER_MESH_ANDROID};
    LayerMesh.vertexCount = NativeVertices.Num();
    LayerMesh.vertices = NativeVertices.GetData();
    LayerMesh.indices = NativeIndices.GetData();
    LayerMesh.indexCount = NativeIndices.Num();
    LayerMesh.windingOrder = XrWindingOrderANDROID::XR_WINDING_ORDER_CCW_ANDROID;
    auto Result = xrSetPassthroughLayerMeshANDROID(Layer.NativeLayer, &LayerMesh);
    LOG_IF_OPENXR_ERROR_AND_RETURN(UpdatePassthroughLayerMesh, xrSetPassthroughLayerMeshANDROID, Result);
    return true;
}

bool FAndroidXRPassthroughMesh::DestroyPassthroughLayer(FAndroidXRPassthroughLayer &Layer)
{
    RETURN_IF_FUNCTION_NOT_FOUND(xrDestroyPassthroughLayerANDROID);
    auto Result = xrDestroyPassthroughLayerANDROID(Layer.NativeLayer);
    LOG_IF_OPENXR_ERROR_AND_RETURN(DestroyPassthroughLayer, xrDestroyPassthroughLayerANDROID, Result);
    ActiveLayers.Remove(Layer.NativeLayer);
    ENQUEUE_RENDER_COMMAND(DestroyPassthroughLayer)([NativeLayer = Layer.NativeLayer, PassthroughLayersPtr = &PassthroughLayers](FRHICommandListImmediate& RHICmdList) {
        PassthroughLayersPtr->Remove(NativeLayer);
    });
    Layer.NativeLayer = XR_NULL_HANDLE;
    return true;
}

IMPLEMENT_MODULE(FAndroidXRPassthroughMesh, AndroidXRPassthroughMesh);

