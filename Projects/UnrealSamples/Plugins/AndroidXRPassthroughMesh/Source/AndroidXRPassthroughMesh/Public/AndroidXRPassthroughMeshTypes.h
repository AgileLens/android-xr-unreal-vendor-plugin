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

#include <CoreMinimal.h>
#include <OpenXRCore.h>
#include "openxr_delta.h"
#include "AndroidXRPassthroughMeshTypes.generated.h"

/**
 * The passthrough layer properties supported by the system
 */
USTRUCT(BlueprintType)
struct FAndroidXRSystemPassthroughProperties
{
    GENERATED_BODY()

    // If the current system supports composition layer passthrough mesh.
    UPROPERTY(BlueprintReadOnly, Category="AndroidXR| Passthrough Mesh")
    bool bSupportsPassthroughLayer{};

    // The maximum count of indices that will be accepted for a passthrough mesh.
    UPROPERTY(BlueprintReadOnly, Category="AndroidXR| Passthrough Mesh")
    int MaxMeshIndexCount{};

    // The maximum count of vertices that will be accepted for a passthrough mesh.
    UPROPERTY(BlueprintReadOnly, Category="AndroidXR| Passthrough Mesh")
    int MaxMeshVertexCount{};
};

/**
 * Contains opaque pointer to XrPassthroughLayerANDROID
 */
USTRUCT(BlueprintType)
struct FAndroidXRPassthroughLayer
{
    GENERATED_BODY()

    XrPassthroughLayerANDROID NativeLayer{XR_NULL_HANDLE};
};

/**
 * The passthrough layer mesh info
 */
USTRUCT(BlueprintType)
struct FAndroidXRPassthroughLayerMeshInfo
{
    GENERATED_BODY()

    // The transform of the layer mesh
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AndroidXR| Passthrough Mesh")
    FTransform Transform{};

    // The opacity of the passthrough texture in range [0,1]
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AndroidXR| Passthrough Mesh")
    float Opacity{};

    // The vertex positions of the passthrough layer mesh
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AndroidXR| Passthrough Mesh")
    TArray<FVector> Vertices{};

    // The indicies of the passthrough layer mesh
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AndroidXR| Passthrough Mesh")
    TArray<int32> Indices{};
};