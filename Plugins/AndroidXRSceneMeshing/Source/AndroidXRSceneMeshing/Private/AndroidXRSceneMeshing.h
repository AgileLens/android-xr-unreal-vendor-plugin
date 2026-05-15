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

#include "IAndroidXRSceneMeshingModule.h"
#include "IOpenXRExtensionPlugin.h"

#include <AndroidXRHelpers.h>

DECLARE_LOG_CATEGORY_EXTERN(LogAndroidXRSceneMeshing, Log, All);

class FAndroidXRSceneMeshing : public IAndroidXRSceneMeshingModule, public IOpenXRExtensionPlugin
{
public:
    FAndroidXRSceneMeshing();

    /** IModuleInterface */
    void StartupModule() override;
    void ShutdownModule() override;

    /** IOpenXRExtensionPlugin */
    FString GetDisplayName() override
    {
        return FString(TEXT("AndroidXRSceneMeshing"));
    }

    void PostCreateInstance(XrInstance InInstance) override;
    void PostCreateSession(XrSession InSession) override;
    bool GetRequiredExtensions(TArray<const ANSICHAR*>& OutExtensions) override;

    bool EnumerateSupportedSemanticLabelSets(TArray<EAndroidXRSceneMeshSemanticLabelSet>& SupportedSets) const override;
    bool CreateSceneMeshingTracker(EAndroidXRSceneMeshSemanticLabelSet SemanticLabelSet,
        bool bEnableNormals,
        FAndroidXRSceneMeshingTracker& MeshingTracker) const override;
    bool DestroySceneMeshingTracker(FAndroidXRSceneMeshingTracker& MeshingTracker) const override;
    bool CreateSceneMeshSnapshot(const FAndroidXRSceneMeshingTracker& MeshingTracker,
        const FTransform& BoundsTransform,
        const FVector& BoundsExtents,
        FAndroidXRSceneMeshSnapshot& MeshSnapshot,
        ESceneMeshTrackingState& TrackingState) const override;
    bool DestroySceneMeshSnapshot(FAndroidXRSceneMeshSnapshot& MeshSnapshot) const override;
    bool GetAllSubmeshStates(const FAndroidXRSceneMeshSnapshot& MeshSnapshot,
        TArray<FAndroidXRSceneSubmeshState>& SubmeshStates) const override;
    bool GetSubmeshData(const FAndroidXRSceneMeshSnapshot& MeshSnapshot,
        const TArray<FGuid>& SubmeshIds,
        TArray<FAndroidXRSceneSubmeshData>& SubmeshData) const override;

private:
    XrInstance Instance{};
    XrSession Session{};

    #define ANDROIDXRSCENEMESHING_FUNCTIONS(HelperMacro) \
        HelperMacro(xrEnumerateSupportedSemanticLabelSetsANDROID) \
        HelperMacro(xrCreateSceneMeshingTrackerANDROID) \
        HelperMacro(xrDestroySceneMeshingTrackerANDROID) \
        HelperMacro(xrCreateSceneMeshSnapshotANDROID) \
        HelperMacro(xrDestroySceneMeshSnapshotANDROID) \
        HelperMacro(xrGetAllSubmeshStatesANDROID) \
        HelperMacro(xrGetSubmeshDataANDROID)

    ANDROIDXRSCENEMESHING_FUNCTIONS(DECLARE_OPENXR_FUNC);
};
