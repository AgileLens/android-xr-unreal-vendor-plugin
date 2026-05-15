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

#include "AndroidXRTrackablesCoreBlueprintFunctionLibrary.h"
#include "IAndroidXRTrackablesCoreModule.h"

bool UAndroidXRTrackablesCoreBlueprintFunctionLibrary::IsValidTrackable(const FAndroidXRTrackable &Trackable)
{
    return Trackable.Trackable != 0;
}

bool UAndroidXRTrackablesCoreBlueprintFunctionLibrary::IsValidTrackableTracker(const FAndroidXRTrackableTracker &TrackableTracker)
{
    return TrackableTracker.Tracker != nullptr;
}

bool UAndroidXRTrackablesCoreBlueprintFunctionLibrary::
    EnumerateSupportedTrackableTypes(TArray<EAndroidXRTrackableType> &TrackableTypes)
{
    if (IAndroidXRTrackablesCoreModule::IsAvailable())
    {
        return IAndroidXRTrackablesCoreModule::Get().
            EnumerateSupportedTrackableTypes(TrackableTypes);
    }
    return false;
}

bool UAndroidXRTrackablesCoreBlueprintFunctionLibrary::
    EnumerateSupportedAnchorTrackableTypes(TArray<EAndroidXRTrackableType> &TrackableTypes)
{
    if (IAndroidXRTrackablesCoreModule::IsAvailable())
    {
        return IAndroidXRTrackablesCoreModule::Get().
            EnumerateSupportedAnchorTrackableTypes(TrackableTypes);
    }
    return false;
}

bool UAndroidXRTrackablesCoreBlueprintFunctionLibrary::
    CreateTrackableTracker(EAndroidXRTrackableType TrackableType,
        FAndroidXRTrackableTracker &TrackableTracker)
{
    if (IAndroidXRTrackablesCoreModule::IsAvailable())
    {
        return IAndroidXRTrackablesCoreModule::Get().
            CreateTrackableTracker(TrackableType, TrackableTracker);
    }
    return false;
}

bool UAndroidXRTrackablesCoreBlueprintFunctionLibrary::
    DestroyTrackableTracker(FAndroidXRTrackableTracker &TrackableTracker)
{
    if (IAndroidXRTrackablesCoreModule::IsAvailable())
    {
        return IAndroidXRTrackablesCoreModule::Get().
            DestroyTrackableTracker(TrackableTracker);
    }
    return false;
}

bool UAndroidXRTrackablesCoreBlueprintFunctionLibrary::
    GetAllTrackables(const FAndroidXRTrackableTracker &TrackableTracker,
    TArray<FAndroidXRTrackable> &Trackables)
{
    if (IAndroidXRTrackablesCoreModule::IsAvailable())
    {
        return IAndroidXRTrackablesCoreModule::Get().
            GetAllTrackables(TrackableTracker, Trackables);
    }
    return false;
}

bool UAndroidXRTrackablesCoreBlueprintFunctionLibrary::
    GetTrackablePlane(const FAndroidXRTrackableTracker &TrackableTracker,
        const FAndroidXRTrackable &Trackable,
        FAndroidXRTrackablePlane &TrackablePlane)
{
    TrackablePlane = { };

    if (IAndroidXRTrackablesCoreModule::IsAvailable())
    {
        return IAndroidXRTrackablesCoreModule::Get().
            GetTrackablePlane(TrackableTracker, Trackable, TrackablePlane);
    }
    return false;
}

bool UAndroidXRTrackablesCoreBlueprintFunctionLibrary::GetTrackableProperties(int32 &MaxAnchors)
{
    if (IAndroidXRTrackablesCoreModule::IsAvailable())
    {
        uint32 UnsignedMaxAnchors;
        if (IAndroidXRTrackablesCoreModule::Get().
            GetTrackableProperties(UnsignedMaxAnchors))
        {
            MaxAnchors = UnsignedMaxAnchors;
            return true;
        }
    }
    return false;
}

bool UAndroidXRTrackablesCoreBlueprintFunctionLibrary::CreateAnchorSpace(const FTransform &Transform,
    const FAndroidXRTrackable &Trackable,
    FAndroidXRSpace &AnchorSpace)
{
    if (IAndroidXRTrackablesCoreModule::IsAvailable())
    {
        return IAndroidXRTrackablesCoreModule::Get().
        CreateAnchorSpace(Transform, Trackable, AnchorSpace);
    }
    return false;
}

bool UAndroidXRTrackablesCoreBlueprintFunctionLibrary::
    EnumerateRaycastSupportedTrackableTypes(TArray<EAndroidXRTrackableType> &TrackableTypes)
{
    if (IAndroidXRTrackablesCoreModule::IsAvailable())
    {
        return IAndroidXRTrackablesCoreModule::Get().
            EnumerateRaycastSupportedTrackableTypes(TrackableTypes);
    }
    return false;
}

bool UAndroidXRTrackablesCoreBlueprintFunctionLibrary::
    Raycast(const FVector& Origin,
        const FVector& Direction,
        const TArray<FAndroidXRTrackableTracker>& TrackableTrackers,
        int32 MaxResults,
        TArray<FAndroidXRRaycastHit>& HitResults)
{
    HitResults = { };

    if (IAndroidXRTrackablesCoreModule::IsAvailable())
    {
        return IAndroidXRTrackablesCoreModule::Get().Raycast(Origin,
            Direction, TrackableTrackers, static_cast<uint32>(MaxResults), HitResults);
    }
    return false;
}
