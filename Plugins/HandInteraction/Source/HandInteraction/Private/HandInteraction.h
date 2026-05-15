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

#include "IHandInteractionModule.h"
#include "IOpenXRExtensionPlugin.h"
#include <AndroidXRHelpers.h>
#include "ActionState.h"
#include "XRMotionControllerBase.h"

DECLARE_LOG_CATEGORY_EXTERN(LogHandInteraction, Log, All);

struct FActionCreateInfo;
struct FHandActionCreateInfo;
class UInputAction;
class FHandInteraction : public IHandInteractionModule, public IOpenXRExtensionPlugin, public FXRMotionControllerBase
{
protected:
    static constexpr uint32 kNumHands = 2;
public:
    FHandInteraction();

    /** IModuleInterface */
    void StartupModule() override;
    void ShutdownModule() override;

    /** IOpenXRExtensionPlugin */
    FString GetDisplayName() override
    {
        return FString(TEXT("HandInteraction"));
    }

    void PostCreateInstance(XrInstance InInstance) override;
    void PostCreateSession(XrSession InSession) override;
    bool GetRequiredExtensions(TArray<const ANSICHAR*>& OutExtensions) override;
    bool GetOptionalExtensions(TArray<const ANSICHAR*>& OutExtensions) override;
    bool GetInteractionProfiles(XrInstance InInstance, TArray<FString>& OutKeyPrefixes, TArray<XrPath>& OutPaths, TArray<bool>& OutHasHaptics) override;
    void AttachActionSets(TSet<XrActionSet>& OutActionSets) override;
    void GetActiveActionSetsForSync(TArray<XrActiveActionSet>& OutActiveSets) override;
    void PostSyncActions(XrSession InSession) override;
    void UpdateDeviceLocations(XrSession InSession, XrTime DisplayTime, XrSpace TrackingSpace) override;

    //MotionController
    FName GetMotionControllerDeviceTypeName() const override;
    ETrackingStatus GetControllerTrackingStatus(const int32 ControllerIndex, const FName MotionSource) const override;
    bool GetControllerOrientationAndPosition(const int32 ControllerIndex, const FName MotionSource, FRotator& OutOrientation, FVector& OutPosition, float WorldToMetersScale) const override;
    void EnumerateSources(TArray<FMotionControllerSource>& SourcesOut) const override;

    bool GetInteractionPose(EControllerHand Hand,
        EOpenXRHandInteractionType InteractionType,
        FTransform& InteractionPose) const override;
    bool GetInteractionValue(EControllerHand Hand,
        EOpenXRHandInteractionType InteractionType,
        float& InteractionValue) const override;
    bool GetInteractionReady(EControllerHand Hand,
        EOpenXRHandInteractionType InteractionType) const override;

    bool GetInteractionPose(EControllerHand Hand,
        EOpenXRHandInteractionType InteractionType,
        FTransform& InteractionPose, float WorldToMetersScale) const override;

    void RefreshMotionControllerSources();
private:
    XrInstance Instance{};
    XrSession Session{};
    XrPath ProfilePath{};

    TArray<HandInteraction::FActionStateFloat> FloatActionStates;
    TArray<HandInteraction::FActionStateBoolean> BooleanActionStates;
    TArray<HandInteraction::FActionStatePose> PoseActionStates;
    TArray<XrActionSet> ActionSets;

    TMap<FName, TPair<EControllerHand, EOpenXRHandInteractionType>> MotionSourceNameMap{};

    void PopulateMotionControllerSources(EControllerHand Hand);

    // Mapping of XrActionType to typed action state array index;
    // using a map because no count is defined for XrActionType
    using FActionStateIndexByActionType = TMap<XrActionType, int32>;
    // Above mapping for each interaction type
    using FActionStateIndexByInteraction = TMap<EOpenXRHandInteractionType, FActionStateIndexByActionType>;
    // Above mapping for each hand

    TArray<FActionStateIndexByInteraction> ActionStateIndexesByHand;

    void Cleanup();
    bool CreateAction(FString ActionName,
        FString LocalizedActionName,
        XrActionType ActionType,
        XrActionSet ActionSet,
        XrAction& CreatedAction);
    void CreateActionForHand(XrActionSet ActionSet,
        FActionStateIndexByActionType& ActionStateIndexes,
        EOpenXRHandInteractionType InteractionType,
        const FHandActionCreateInfo& HandActionCreateInfo,
        const FActionCreateInfo &InteractionCreateInfo,
        TArray<XrActionSuggestedBinding> &SuggestedBindings);
    bool CreateActionSet(FString ActionSetName,
        FString LocalizedActionSetName,
        XrActionSet& CreatedActionSet);
    void CreateInteraction(const FString& ActionSetName,
        EOpenXRHandInteractionType InteractionType,
        const TArray<FHandActionCreateInfo>& HandActionCreateInfos,
        const TArray<FActionCreateInfo>& InteractionCreateInfos,
        TArray<XrActionSuggestedBinding>& SuggestedBindings);
    bool CreateInteractions();
};
