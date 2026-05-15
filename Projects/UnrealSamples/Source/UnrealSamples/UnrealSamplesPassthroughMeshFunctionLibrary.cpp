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

#include "UnrealSamplesPassthroughMeshFunctionLibrary.h"
#include "Components/Slider.h"
#include "Components/TextBlock.h"

bool UUnrealSamplesPassthroughMeshFunctionLibrary::ArePassthroughLayersEqual(const FAndroidXRPassthroughLayer &LayerA, const FAndroidXRPassthroughLayer &LayerB)
{
    return LayerA.NativeLayer == LayerB.NativeLayer;
}

void UUnrealSamplesPassthroughMeshFunctionLibrary::UpdateTextWithSlider(USlider *Slider, UTextBlock *MinText, UTextBlock *MaxText, UTextBlock *CurrentText)
{
    if(!Slider)
    {
        return;
    }
    if(MinText)
    {
        MinText->SetText(FText::FromString(FString::SanitizeFloat(Slider->GetMinValue(), 2)));
    }
    if(MaxText)
    {
        MaxText->SetText(FText::FromString(FString::SanitizeFloat(Slider->GetMaxValue(), 2)));
    }
    if(CurrentText)
    {
        CurrentText->SetText(FText::FromString(FString::SanitizeFloat(Slider->GetValue(), 2)));
    }
}
