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

#include "AndroidXRTypes.h"
#include "AndroidXRTrackablesObjectTypes.h"
#include "AndroidXRTrackablesObjectBlueprintFunctionLibrary.generated.h"


UCLASS(ClassGroup=AndroidXRTrackablesObject)
class ANDROIDXRTRACKABLESOBJECT_API UAndroidXRTrackablesObjectBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		/**
    	* Creates a trackable tracker for the specified trackable object labels. All labels if none are provided.
    	* @param[in] ActiveLabels The list of object labels to track.
     	* @param[out] TrackableTracker Created trackable tracker.
    	* @return True if the underlying API call was successful.
     	*/
    	UFUNCTION(BlueprintCallable, Category="AndroidXR|Trackables Object Function Library")
    	static bool CreateObjectTrackableTracker(const TSet<EAndroidXRTrackablesObjectLabel>& ActiveLabels,
        	FAndroidXRTrackableTracker& TrackableTracker);

		/**
     	* Gets an FAndroidXRTrackableObject from an FAndroidXRTrackable.
     	* @param[in] TrackableTracker Previously created plane tracker.
     	* @param[out] Trackable Previously obtained trackable.
     	* @param[out] TrackableObject Trackable object.
     	* @return True if the underlying API call was successful.
     	*/
    	UFUNCTION(BlueprintCallable, Category="AndroidXR|Trackables Core Function Library")
    	static bool GetTrackableObject(const FAndroidXRTrackableTracker& TrackableTracker,
        	const FAndroidXRTrackable& Trackable,
        	FAndroidXRTrackableObject& TrackableObject);

};
