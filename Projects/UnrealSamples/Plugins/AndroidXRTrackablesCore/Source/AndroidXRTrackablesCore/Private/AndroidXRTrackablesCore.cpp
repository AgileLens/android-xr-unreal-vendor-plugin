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

#include "AndroidXRTrackablesCore.h"
#include <AndroidXRTypeConversions.h>
#include <IOpenXRHMDModule.h>
#include <IXRTrackingSystem.h>
#include <IHeadMountedDisplay.h>
#include "IOpenXRHMD.h"

DEFINE_LOG_CATEGORY(LogAndroidXRTrackablesCore);

FAndroidXRTrackablesCore::FAndroidXRTrackablesCore()
{
}

void FAndroidXRTrackablesCore::StartupModule()
{
    IAndroidXRTrackablesCoreModule::StartupModule();
    RegisterOpenXRExtensionModularFeature();
}

void FAndroidXRTrackablesCore::ShutdownModule()
{
    UnregisterOpenXRExtensionModularFeature();
    IAndroidXRTrackablesCoreModule::ShutdownModule();
}

bool FAndroidXRTrackablesCore::GetRequiredExtensions(TArray<const ANSICHAR*>& OutExtensions)
{
    OutExtensions.Add(XR_ANDROID_TRACKABLES_EXTENSION_NAME);
    OutExtensions.Add(XR_ANDROID_RAYCAST_EXTENSION_NAME);
    return true;
}

void FAndroidXRTrackablesCore::PostCreateInstance(XrInstance InInstance)
{
    Instance = InInstance;

    ResolveOpenXRFunctions(Instance,
        {
            TRACKABLESCORE_FUNCTIONS(RESOLVE_OPENXR_FUNC)
        },
        [](const char* UnresolvableFunctionName, XrResult Result)
        {
            UE_LOG(LogAndroidXRTrackablesCore, Error,
                TEXT("Unable to resolve function pointer %s (error %s)"),
                UTF8_TO_TCHAR(UnresolvableFunctionName),
                OpenXRResultToString(Result));
        });
}

void FAndroidXRTrackablesCore::PostCreateSession(XrSession InSession)
{
    Session = InSession;
}

bool FAndroidXRTrackablesCore::EnumerateSupportedTrackableTypes(TArray<EAndroidXRTrackableType> &TrackableTypes)
{
    if (xrEnumerateSupportedTrackableTypesANDROID != nullptr)
    {
        auto SystemID = IOpenXRHMDModule::Get().GetSystemId();

        uint32_t NumTrackableTypes;
        auto Result = xrEnumerateSupportedTrackableTypesANDROID(Instance,
            SystemID, 0, &NumTrackableTypes, nullptr);
        if (XR_UNQUALIFIED_SUCCESS(Result))
        {
            if (NumTrackableTypes > 0)
            {
                TArray<XrTrackableTypeANDROID> NativeTrackableTypes;
                NativeTrackableTypes.SetNum(NumTrackableTypes);
                Result = xrEnumerateSupportedTrackableTypesANDROID(Instance,
                    SystemID,
                    NativeTrackableTypes.Num(),
                    &NumTrackableTypes,
                    NativeTrackableTypes.GetData());
                if (XR_UNQUALIFIED_SUCCESS(Result))
                {
                    TrackableTypes.Reserve(NativeTrackableTypes.Num());
                    for (const auto& NativeTrackableType : NativeTrackableTypes)
                    {
                        auto UnrealType = AndroidXR::Convert(NativeTrackableType);
                        if (UnrealType != EAndroidXRTrackableType::NotValid)
                        {
                            TrackableTypes.Add(UnrealType);
                        }
                    }
                    return true;
                }
            }
        }

        UE_LOG(LogAndroidXRTrackablesCore, Error,
            TEXT("EnumerateSupportedTrackableTypes: "
                "xrEnumerateSupportedTrackableTypesANDROID failed with error %s"),
                OpenXRResultToString(Result));
    }
    return false;
}

bool FAndroidXRTrackablesCore::EnumerateSupportedAnchorTrackableTypes(TArray<EAndroidXRTrackableType> &TrackableTypes)
{
    if (xrEnumerateSupportedAnchorTrackableTypesANDROID != nullptr)
    {
        auto SystemID = IOpenXRHMDModule::Get().GetSystemId();

        uint32_t NumTrackableTypes;
        auto Result = xrEnumerateSupportedAnchorTrackableTypesANDROID(Instance,
            SystemID, 0, &NumTrackableTypes, nullptr);
        if (XR_UNQUALIFIED_SUCCESS(Result))
        {
            if (NumTrackableTypes > 0)
            {
                TArray<XrTrackableTypeANDROID> NativeTrackableTypes;
                NativeTrackableTypes.SetNum(NumTrackableTypes);
                Result = xrEnumerateSupportedAnchorTrackableTypesANDROID(Instance,
                    SystemID,
                    NativeTrackableTypes.Num(),
                    &NumTrackableTypes,
                    NativeTrackableTypes.GetData());
                if (XR_UNQUALIFIED_SUCCESS(Result))
                {
                    TrackableTypes.Reserve(NativeTrackableTypes.Num());
                    for (const auto& NativeTrackableType : NativeTrackableTypes)
                    {
                        auto UnrealType = AndroidXR::Convert(NativeTrackableType);
                        if (UnrealType != EAndroidXRTrackableType::NotValid)
                        {
                            TrackableTypes.Add(UnrealType);
                        }
                    }
                    return true;
                }
            }
        }

        UE_LOG(LogAndroidXRTrackablesCore, Error,
            TEXT("EnumerateSupportedAnchorTrackableTypes: "
                "xrEnumerateSupportedAnchorTrackableTypesANDROID failed with error %s"),
                OpenXRResultToString(Result));
    }
    return false;
}

bool FAndroidXRTrackablesCore::CreateTrackableTracker(EAndroidXRTrackableType TrackableType,
    FAndroidXRTrackableTracker& TrackableTracker)
{
    if (xrCreateTrackableTrackerANDROID != nullptr)
    {
        XrTrackableTrackerCreateInfoANDROID TrackerCreateInfo
            { .type = XR_TYPE_TRACKABLE_TRACKER_CREATE_INFO_ANDROID };
        TrackerCreateInfo.trackableType = AndroidXR::Convert(TrackableType);

        XrTrackableTrackerANDROID NativeTracker;
        auto Result = xrCreateTrackableTrackerANDROID(Session, &TrackerCreateInfo, &NativeTracker);
        if (XR_UNQUALIFIED_SUCCESS(Result))
        {
            TrackableTracker.Tracker = NativeTracker;
            return true;
        }

        UE_LOG(LogAndroidXRTrackablesCore, Error,
            TEXT("CreateTrackableTracker: "
                "xrCreateTrackableTrackerANDROID failed with error %s"),
                OpenXRResultToString(Result));
    }
    return false;
}

bool FAndroidXRTrackablesCore::DestroyTrackableTracker(FAndroidXRTrackableTracker &TrackableTracker)
{
    if (xrDestroyTrackableTrackerANDROID != nullptr)
    {
        auto Result = xrDestroyTrackableTrackerANDROID(TrackableTracker.Tracker);
        if (XR_UNQUALIFIED_SUCCESS(Result))
        {
            TrackableTracker.Tracker = XR_NULL_HANDLE;
            return true;
        }

        UE_LOG(LogAndroidXRTrackablesCore, Error,
            TEXT("DestroyTrackableTracker: "
                "xrDestroyTrackableTrackerANDROID failed with error %s"),
                OpenXRResultToString(Result));
    }
    return false;
}

bool FAndroidXRTrackablesCore::GetAllTrackables(const FAndroidXRTrackableTracker &TrackableTracker,
    TArray<FAndroidXRTrackable> &Trackables)
{
    if (xrGetAllTrackablesANDROID != nullptr)
    {
        uint32 TrackableCount;
        auto Result = xrGetAllTrackablesANDROID(TrackableTracker.Tracker,
            0, &TrackableCount, nullptr);
        if (XR_UNQUALIFIED_SUCCESS(Result))
        {
            TArray<XrTrackableANDROID> NativeTrackables;
            NativeTrackables.SetNum(TrackableCount);

            Result = xrGetAllTrackablesANDROID(TrackableTracker.Tracker,
                NativeTrackables.Num(), &TrackableCount, NativeTrackables.GetData());
            if (XR_UNQUALIFIED_SUCCESS(Result))
            {
                Trackables.Reserve(NativeTrackables.Num());
                for (const auto& NativeTrackable : NativeTrackables)
                {
                    Trackables.Add({
                        .Trackable = NativeTrackable
                    });
                }

                return true;
            }
        }

        UE_LOG(LogAndroidXRTrackablesCore, Error,
            TEXT("GetAllTrackables: "
                "xrGetAllTrackablesANDROID failed with error %s"),
                OpenXRResultToString(Result));
    }
    return false;
}

bool FAndroidXRTrackablesCore::GetTrackablePlane(const FAndroidXRTrackableTracker &TrackableTracker,
    const FAndroidXRTrackable &Trackable, FAndroidXRTrackablePlane &TrackablePlane)
{
    if (xrGetTrackablePlaneANDROID != nullptr)
    {
        XrTrackableGetInfoANDROID TrackableGetInfo
            { .type = XR_TYPE_TRACKABLE_GET_INFO_ANDROID };
        TrackableGetInfo.trackable = Trackable.Trackable;

        auto HMD = GEngine->XRSystem.Get()->GetIOpenXRHMD();
        TrackableGetInfo.baseSpace = HMD->GetTrackingSpace();
        TrackableGetInfo.time = HMD->GetDisplayTime();

        uint32_t NumVertices{};
        XrTrackablePlaneANDROID NativePlane
        {
            .type = XR_TYPE_TRACKABLE_PLANE_ANDROID,
            .vertexCountOutput = &NumVertices,
        };

        auto Result = xrGetTrackablePlaneANDROID(TrackableTracker.Tracker,
            &TrackableGetInfo, &NativePlane);
        if (XR_UNQUALIFIED_SUCCESS(Result))
        {
            auto WorldToMetersScale = GEngine->XRSystem->GetWorldToMetersScale();

            TrackablePlane.TrackingState =
                AndroidXR::Convert(NativePlane.trackingState);
            TrackablePlane.Transform = ToFTransform(NativePlane.
                centerPose, WorldToMetersScale);

            // Unreal custom for extents is half extent; also need
            // to correctly map width/height to axes
            TrackablePlane.Extents.X = NativePlane.extents.
                height * WorldToMetersScale * 0.5f;
            TrackablePlane.Extents.Y = NativePlane.extents.
                width * WorldToMetersScale * 0.5f;
            TrackablePlane.PlaneType =
                AndroidXR::Convert(NativePlane.planeType);
            TrackablePlane.PlaneLabel =
                AndroidXR::Convert(NativePlane.planeLabel);
            TrackablePlane.SubsumedByPlane = { NativePlane.subsumedByPlane };
            TrackablePlane.LastUpdatedTime = ToFTimespan(NativePlane.lastUpdatedTime);

            if (NumVertices != 0)
            {
                TArray<XrVector2f> NativeVertices;
                NativeVertices.SetNum(NumVertices);
                NativePlane.vertexCapacityInput = NativeVertices.Num();
                NativePlane.vertices = NativeVertices.GetData();
                Result = xrGetTrackablePlaneANDROID(TrackableTracker.Tracker,
                    &TrackableGetInfo, &NativePlane);
                if (XR_UNQUALIFIED_SUCCESS(Result))
                {
                    TrackablePlane.Vertices.Reserve(NativeVertices.Num());
                    for (const auto& NativeVertex : NativeVertices)
                    {
                        // A bit confusing because XrVector2f only has .x and .y
                        // members, but since the plane normal is the OpenXR RUB y
                        // axis, the vertices are actually on the OpenXR xz plane.
                        // It appears the OpenXR vertex is stored in XrVector2f as
                        // x=x and y=z, so we swizzle them into Unreal FRU space
                        // here, hence x=-y(z) and y=x
                        TrackablePlane.Vertices.Add(FVector2D(NativeVertex.y *
                            -WorldToMetersScale, NativeVertex.x * WorldToMetersScale));
                    }
                    return true;
                }
            }
            else
            {
                return true;
            }
        }

        UE_LOG(LogAndroidXRTrackablesCore, Error,
            TEXT("GetTrackablePlane: "
                "xrGetTrackablePlaneANDROID failed with error %s"),
                OpenXRResultToString(Result));
    }
    return false;
}

bool FAndroidXRTrackablesCore::GetTrackableProperties(uint32 &MaxAnchors)
{
    if (xrGetSystemProperties != nullptr)
    {
        XrSystemTrackablesPropertiesANDROID TrackablesProperties
            { .type = XR_TYPE_SYSTEM_TRACKABLES_PROPERTIES_ANDROID };
        XrSystemProperties SystemProperties{
            .type = XR_TYPE_SYSTEM_PROPERTIES,
            .next = &TrackablesProperties };

        auto Result = xrGetSystemProperties(Instance,
            IOpenXRHMDModule::Get().GetSystemId(), &SystemProperties);
        if (XR_UNQUALIFIED_SUCCESS(Result))
        {
            MaxAnchors = TrackablesProperties.maxAnchors;
            return true;
        }

        UE_LOG(LogAndroidXRTrackablesCore, Error,
            TEXT("GetTrackableProperties: "
                "xrGetSystemProperties failed with error %s"),
                OpenXRResultToString(Result));
    }
    return false;
}

bool FAndroidXRTrackablesCore::CreateAnchorSpace(const FTransform& Transform,
    const FAndroidXRTrackable& Trackable,
    FAndroidXRSpace &AnchorSpace)
{
    if (xrCreateAnchorSpaceANDROID != nullptr)
    {
        XrAnchorSpaceCreateInfoANDROID SpaceCreateInfo{
            .type = XR_TYPE_ANCHOR_SPACE_CREATE_INFO_ANDROID
        };

        auto HMD = GEngine->XRSystem.Get()->GetIOpenXRHMD();
        SpaceCreateInfo.space = HMD->GetTrackingSpace();
        SpaceCreateInfo.time = HMD->GetDisplayTime();
        SpaceCreateInfo.pose = ToXrPose(Transform,
            GEngine->XRSystem->GetWorldToMetersScale());
        SpaceCreateInfo.trackable = Trackable.Trackable;

        XrSpace NativeSpace;
        auto Result = xrCreateAnchorSpaceANDROID(Session,
            &SpaceCreateInfo, &NativeSpace);
        if (XR_UNQUALIFIED_SUCCESS(Result))
        {
            AnchorSpace.Space = NativeSpace;
            return true;
        }

        UE_LOG(LogAndroidXRTrackablesCore, Error,
            TEXT("CreateAnchorSpace: "
                "xrCreateAnchorSpaceANDROID failed with error %s"),
                OpenXRResultToString(Result));
    }
    return false;
}

bool FAndroidXRTrackablesCore::EnumerateRaycastSupportedTrackableTypes(TArray<EAndroidXRTrackableType> &TrackableTypes)
{
    if (xrEnumerateRaycastSupportedTrackableTypesANDROID != nullptr)
    {
        auto SystemID = IOpenXRHMDModule::Get().GetSystemId();

        uint32_t NumTrackableTypes{ };
        auto Result = xrEnumerateRaycastSupportedTrackableTypesANDROID(Instance,
            SystemID, 0, &NumTrackableTypes, nullptr);
        if (XR_UNQUALIFIED_SUCCESS(Result))
        {
            if (NumTrackableTypes > 0)
            {
                TArray<XrTrackableTypeANDROID> NativeTrackableTypes;
                NativeTrackableTypes.SetNum(NumTrackableTypes);
                Result = xrEnumerateRaycastSupportedTrackableTypesANDROID(Instance,
                    SystemID,
                    NativeTrackableTypes.Num(),
                    &NumTrackableTypes,
                    NativeTrackableTypes.GetData());
                if (XR_UNQUALIFIED_SUCCESS(Result))
                {
                    TrackableTypes.Reserve(NativeTrackableTypes.Num());
                    for (const auto& NativeTrackableType : NativeTrackableTypes)
                    {
                        // Filters out any types for which Unreal code has not been written
                        auto UnrealType = AndroidXR::Convert(NativeTrackableType);
                        if (UnrealType != EAndroidXRTrackableType::NotValid)
                        {
                            TrackableTypes.Add(UnrealType);
                        }
                    }
                    return true;
                }
            }
        }

        UE_LOG(LogAndroidXRTrackablesCore, Error,
            TEXT("EnumerateRaycastSupportedTrackableTypes: "
                "xrEnumerateRaycastSupportedTrackableTypesANDROID failed with error %s"),
                OpenXRResultToString(Result));
    }
    return false;
}

bool FAndroidXRTrackablesCore::Raycast(const FVector &Origin,
    const FVector &Direction,
    const TArray<FAndroidXRTrackableTracker> &TrackableTrackers,
    uint32 MaxResults,
    TArray<FAndroidXRRaycastHit>& HitResults)
{
    if (xrRaycastANDROID != nullptr)
    {
        // Create an array of just the native trackable trackers
        TArray<XrTrackableTrackerANDROID> NativeTrackableTrackers;
        NativeTrackableTrackers.Reserve(TrackableTrackers.Num());
        for (const auto& TrackableTracker : TrackableTrackers)
        {
            NativeTrackableTrackers.Add(TrackableTracker.Tracker);
        }

        XrRaycastInfoANDROID RaycastInfo
        {
            .type = XR_TYPE_RAYCAST_INFO_ANDROID,
            .maxResults = MaxResults
        };

        RaycastInfo.trackerCount = NativeTrackableTrackers.Num();
        if (RaycastInfo.trackerCount > 0)
        {
            RaycastInfo.trackers = NativeTrackableTrackers.GetData();
        }
        RaycastInfo.trajectory = ToXrVector(Direction);

        auto WorldToMeters = GEngine->XRSystem->GetWorldToMetersScale();

        RaycastInfo.origin = ToXrVector(Origin, WorldToMeters);

        auto HMD = GEngine->XRSystem.Get()->GetIOpenXRHMD();
        RaycastInfo.space = HMD->GetTrackingSpace();
        RaycastInfo.time = HMD->GetDisplayTime();

        XrRaycastHitResultsANDROID RaycastResults
        {
            .type = XR_TYPE_RAYCAST_HIT_RESULTS_ANDROID
        };

        auto Result = xrRaycastANDROID(HMD->GetSession(),
            &RaycastInfo,
            &RaycastResults);

        if (XR_UNQUALIFIED_SUCCESS(Result))
        {
            if (RaycastResults.resultsCountOutput > 0)
            {
                TArray<XrRaycastHitResultANDROID> NativeHitResults;
                NativeHitResults.SetNum(RaycastResults.resultsCountOutput);
                RaycastResults.resultsCapacityInput = NativeHitResults.Num();
                RaycastResults.results = NativeHitResults.GetData();

                Result = xrRaycastANDROID(HMD->GetSession(),
                    &RaycastInfo,
                    &RaycastResults);

                if (XR_UNQUALIFIED_SUCCESS(Result))
                {
                    HitResults.Reserve(NativeHitResults.Num());

                    // Hit results are returned sorted by distance, near to far
                    for (const auto& NativeHitResult : NativeHitResults)
                    {
                        HitResults.Add({
                            .Trackable = { NativeHitResult.trackable },
                            .Transform = ToFTransform(NativeHitResult.pose, WorldToMeters),
                            .TrackableType = AndroidXR::Convert(NativeHitResult.type)
                        });
                    }
                }
            }
            return true;
        }

        UE_LOG(LogAndroidXRTrackablesCore, Error,
            TEXT("Raycast: xrRaycastANDROID failed with error %s"),
                OpenXRResultToString(Result));
    }
    return false;
}

IMPLEMENT_MODULE(FAndroidXRTrackablesCore, AndroidXRTrackablesCore);
