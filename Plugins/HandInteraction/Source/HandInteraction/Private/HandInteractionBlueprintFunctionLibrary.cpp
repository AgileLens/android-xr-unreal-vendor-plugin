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

#include "HandInteractionBlueprintFunctionLibrary.h"
#include "IHandInteractionModule.h"

bool UHandInteractionBlueprintFunctionLibrary::GetInteractionPose(EControllerHand Hand,
    EOpenXRHandInteractionType InteractionType,
    FTransform& InteractionPose)
{
    if (IHandInteractionModule::IsAvailable())
    {
        return IHandInteractionModule::Get().GetInteractionPose(Hand, InteractionType, InteractionPose);
    }
    return false;
}

bool UHandInteractionBlueprintFunctionLibrary::GetInteractionValue(EControllerHand Hand,
    EOpenXRHandInteractionType InteractionType,
    float& InteractionValue)
{
    if (IHandInteractionModule::IsAvailable())
    {
        return IHandInteractionModule::Get().GetInteractionValue(Hand, InteractionType, InteractionValue);
    }
    return false;
}

bool UHandInteractionBlueprintFunctionLibrary::GetInteractionReady(EControllerHand Hand,
    EOpenXRHandInteractionType InteractionType)
{
    if (IHandInteractionModule::IsAvailable())
    {
        return IHandInteractionModule::Get().GetInteractionReady(Hand, InteractionType);
    }
    return false;
}
