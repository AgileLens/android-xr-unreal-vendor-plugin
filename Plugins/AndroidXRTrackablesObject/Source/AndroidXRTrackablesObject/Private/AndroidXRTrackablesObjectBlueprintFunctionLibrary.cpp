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

#include "AndroidXRTrackablesObjectBlueprintFunctionLibrary.h"
#include "IAndroidXRTrackablesObjectModule.h"

#define RETURN_IF_TRACKABLES_OBJECT_MODULE_NOT_FOUND() if (!IAndroidXRTrackablesObjectModule::IsAvailable()){return false;}

bool UAndroidXRTrackablesObjectBlueprintFunctionLibrary::
    CreateObjectTrackableTracker(const TSet<EAndroidXRTrackablesObjectLabel>& ActiveLabels,
        FAndroidXRTrackableTracker& TrackableTracker)
{
    RETURN_IF_TRACKABLES_OBJECT_MODULE_NOT_FOUND()
    return IAndroidXRTrackablesObjectModule::Get().CreateObjectTrackableTracker(ActiveLabels, TrackableTracker);
}

bool UAndroidXRTrackablesObjectBlueprintFunctionLibrary::
    GetTrackableObject(const FAndroidXRTrackableTracker& TrackableTracker,
        const FAndroidXRTrackable& Trackable,
        FAndroidXRTrackableObject& TrackableObject)
{
    RETURN_IF_TRACKABLES_OBJECT_MODULE_NOT_FOUND()
    return IAndroidXRTrackablesObjectModule::Get().GetTrackableObject(TrackableTracker, Trackable, TrackableObject);
}
