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

#include "AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.h"
#include "IAndroidXRDeviceAnchorPersistenceModule.h"
#include "AndroidXRBlueprintFunctionLibrary.h"

bool UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary::IsValidAnchorPersistence(const FAndroidXRDeviceAnchorPersistence &AnchorPersistence)
{
    return AnchorPersistence.Persistence != XR_NULL_HANDLE;
}

bool UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary::GetAnchorPersistenceSupported()
{
    if (IAndroidXRDeviceAnchorPersistenceModule::IsAvailable())
    {
        return IAndroidXRDeviceAnchorPersistenceModule::Get().GetAnchorPersistenceSupported();
    }
    return false;
}

bool UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary::EnumerateSupportedPersistenceAnchorTypes(TArray<EAndroidXRTrackableType> &SupportedTypes)
{
    if (IAndroidXRDeviceAnchorPersistenceModule::IsAvailable())
    {
        return IAndroidXRDeviceAnchorPersistenceModule::Get().
            EnumerateSupportedPersistenceAnchorTypes(SupportedTypes);
    }
    return false;
}

bool UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary::CreateDeviceAnchorPersistence(FAndroidXRDeviceAnchorPersistence &AnchorPersistence)
{
    if (IAndroidXRDeviceAnchorPersistenceModule::IsAvailable())
    {
        return IAndroidXRDeviceAnchorPersistenceModule::Get().
            CreateDeviceAnchorPersistence(AnchorPersistence);
    }
    return false;
}

bool UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary::DestroyDeviceAnchorPersistence(FAndroidXRDeviceAnchorPersistence &AnchorPersistence)
{
    if (IAndroidXRDeviceAnchorPersistenceModule::IsAvailable())
    {
        return IAndroidXRDeviceAnchorPersistenceModule::Get().
            DestroyDeviceAnchorPersistence(AnchorPersistence);
    }
    return false;
}

bool UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary::GetAnchorPersistState(const FAndroidXRDeviceAnchorPersistence &AnchorPersistence,
    const FGuid &PersistedID,
    EAndroidXRAnchorPersistState &PersistState)
{
    if (IAndroidXRDeviceAnchorPersistenceModule::IsAvailable())
    {
        return IAndroidXRDeviceAnchorPersistenceModule::Get().
            GetAnchorPersistState(AnchorPersistence, PersistedID, PersistState);
    }
    return false;
}

bool UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary::EnumeratePersistedAnchors(const FAndroidXRDeviceAnchorPersistence &AnchorPersistence,
    TArray<FGuid> &PersistedAnchors)
{
    if (IAndroidXRDeviceAnchorPersistenceModule::IsAvailable())
    {
        return IAndroidXRDeviceAnchorPersistenceModule::Get().
            EnumeratePersistedAnchors(AnchorPersistence, PersistedAnchors);
    }
    return false;
}

UPersistAnchor* UPersistAnchor::PersistAnchorAsync(const FAndroidXRDeviceAnchorPersistence& AnchorPersistence, const FAndroidXRSpace& AnchorSpace)
{
    auto PersistAnchor = NewObject<UPersistAnchor>();
    PersistAnchor->AnchorSpace = AnchorSpace;
    PersistAnchor->AnchorPersistence = AnchorPersistence;
    return PersistAnchor;
}

void UPersistAnchor::Activate()
{
    FOnAnchorPersisted OnAnchorPersistedCallback;
    OnAnchorPersistedCallback.BindUObject(this, &UPersistAnchor::PersistAnchorCallback);
    FOnAnchorAsyncActionFailed OnActionFailedCallback;
    GetAsyncActionFailedCallback(OnActionFailedCallback);
    if (IAndroidXRDeviceAnchorPersistenceModule::IsAvailable())
    {
        IAndroidXRDeviceAnchorPersistenceModule::Get().PersistAnchorAsync(AnchorPersistence, AnchorSpace, OnAnchorPersistedCallback, OnActionFailedCallback);
    }
}

void UPersistAnchor::PersistAnchorCallback(const FAndroidXRSpace& PersistedAnchorSpace, const FGuid& PersistedAnchorId)
{
    OnAnchorPersisted.Broadcast(PersistedAnchorSpace, PersistedAnchorId);
}

UUnpersistAnchor* UUnpersistAnchor::UnpersistAnchorAsync(const FAndroidXRDeviceAnchorPersistence& AnchorPersistence, const FGuid& PersistedId)
{
    auto UnpersistAnchor = NewObject<UUnpersistAnchor>();
    UnpersistAnchor->AnchorPersistence = AnchorPersistence;
    UnpersistAnchor->PersistedId = PersistedId;
    return UnpersistAnchor;
}

void UUnpersistAnchor::Activate()
{
    FOnAnchorUnPersisted OnAnchorUnpersistedCallback;
    OnAnchorUnpersistedCallback.BindUObject(this, &UUnpersistAnchor::UnpersistAnchorCallback);

    FOnAnchorAsyncActionFailed OnAnchorUnPersistFailedCallback;
    GetAsyncActionFailedCallback(OnAnchorUnPersistFailedCallback);
    if (IAndroidXRDeviceAnchorPersistenceModule::IsAvailable())
    {
        IAndroidXRDeviceAnchorPersistenceModule::Get().UnpersistAnchorAsync(AnchorPersistence, PersistedId, OnAnchorUnpersistedCallback, OnAnchorUnPersistFailedCallback);
    }
}

void UUnpersistAnchor::UnpersistAnchorCallback()
{
    OnAnchorUnpersisted.Broadcast();
}



UCreatePersistedAnchorSpace* UCreatePersistedAnchorSpace::CreatePersistedAnchorSpaceAsync(const FAndroidXRDeviceAnchorPersistence& AnchorPersistence, const FGuid& PersistedId, const FAndroidXRSpace& AnchorSpace)
{
    auto CreatePersistedAnchorSpace = NewObject<UCreatePersistedAnchorSpace>();
    CreatePersistedAnchorSpace->AnchorPersistence = AnchorPersistence;
    CreatePersistedAnchorSpace->AnchorSpace = AnchorSpace;
    CreatePersistedAnchorSpace->PersistedId = PersistedId;
    return CreatePersistedAnchorSpace;
}

void UCreatePersistedAnchorSpace::Activate()
{
    FOnPersistedAnchorSpaceCreated OnPersistedAnchorSpaceCreatedCallback;
    OnPersistedAnchorSpaceCreatedCallback.BindUObject(this, &UCreatePersistedAnchorSpace::PersistedAnchorCreatedCallback);

    FOnAnchorAsyncActionFailed OnPersistedAnchorCreateFailedCallback;
    GetAsyncActionFailedCallback(OnPersistedAnchorCreateFailedCallback);
    if (IAndroidXRDeviceAnchorPersistenceModule::IsAvailable())
    {
        IAndroidXRDeviceAnchorPersistenceModule::Get().CreatePersistedAnchorSpaceAsync(AnchorPersistence, PersistedId, AnchorSpace, OnPersistedAnchorSpaceCreatedCallback, OnPersistedAnchorCreateFailedCallback);
    }
}

void UCreatePersistedAnchorSpace::PersistedAnchorCreatedCallback(const FAndroidXRSpace& CreatedAnchorSpace, const FGuid& PersistedAnchorId)
{
    OnPersistedAnchorSpaceCreated.Broadcast(CreatedAnchorSpace, PersistedAnchorId);
}

void UAndroidXRDeviceAnchorPersistenceAsyncAction::GetAsyncActionFailedCallback(FOnAnchorAsyncActionFailed& ActionFailedCallback)
{
    ActionFailedCallback.BindUObject(this, &UAndroidXRDeviceAnchorPersistenceAsyncAction::OnActionFailedCallback);
}

void UAndroidXRDeviceAnchorPersistenceAsyncAction::OnActionFailedCallback()
{
    OnAsyncActionFailed.Broadcast();
}
