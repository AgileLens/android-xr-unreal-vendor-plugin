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
#include "HandInteractionBlueprintFunctionLibrary.generated.h"

UCLASS(ClassGroup=HandInteraction)
class HANDINTERACTION_API UHandInteractionBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()
public:
    /**
     * Gets an interaction's current pose transform.
     * @param[in] Hand  Hand to retrieve. EControllerHand::Right will use
     * the right hand; anything else will use the left hand.
     * @param[in] InteractionType Interaction to query.
     * @param[out] InteractionPose The current pose transform.
     * @return True if the underlying API call was successful.
     */
    UFUNCTION(BlueprintPure, Category="HandInteraction|Function Library")
    static bool GetInteractionPose(EControllerHand Hand,
        EOpenXRHandInteractionType InteractionType,
        FTransform& InteractionPose);

    /**
     * Gets an interaction's current float value.
     * @param[in] Hand  Hand to retrieve. EControllerHand::Right will use
     * the right hand; anything else will use the left hand.
     * @param[in] InteractionType The desired interaction.
     * @param[out] InteractionValue The current value.
     * @return True if the underlying API call was successful.
     */
    UFUNCTION(BlueprintPure, Category="HandInteraction|Function Library")
    static bool GetInteractionValue(EControllerHand Hand,
        EOpenXRHandInteractionType InteractionType,
        float& InteractionValue);

    /**
     * Gets the ready state of an interaction.
     * @param[in] Hand  Hand to retrieve. EControllerHand::Right will use
     * the right hand; anything else will use the left hand.
     * @param[in] InteractionType The desired interaction.
     * @return True if the underlying API call was successful and the interaction is ready.
     */
    UFUNCTION(BlueprintPure, Category="HandInteraction|Function Library")
    static bool GetInteractionReady(EControllerHand Hand,
        EOpenXRHandInteractionType InteractionType);
};

