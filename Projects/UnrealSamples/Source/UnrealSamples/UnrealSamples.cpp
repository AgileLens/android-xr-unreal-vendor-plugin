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

#include "UnrealSamples.h"
#include "Modules/ModuleManager.h"

#define LOCTEXT_NAMESPACE "SimpleController"

static const FKey SimpleController_Left_Select_Click("SimpleController_Left_Select_Click");
static const FKey SimpleController_Right_Select_Click("SimpleController_Right_Select_Click");

DEFINE_LOG_CATEGORY(LogUnrealSamples);

class FUnrealSamplesGameModuleImpl : public FDefaultGameModuleImpl
{
public:
    void StartupModule() override
    {
        FDefaultGameModuleImpl::StartupModule();

        // If the HandInteraction plugin is enabled these will not trigger
        EKeys::AddMenuCategoryDisplayInfo("SimpleController",
            LOCTEXT("SimpleControllerSubCategory", "SimpleController"), TEXT("GraphEditor.PadEvent_16x"));
        EKeys::AddKey(FKeyDetails(SimpleController_Left_Select_Click,
            LOCTEXT("SimpleController_Left_Select_Click", "Simple Controller (L) Select"),
            FKeyDetails::GamepadKey, "SimpleController"));
        EKeys::AddKey(FKeyDetails(SimpleController_Right_Select_Click,
            LOCTEXT("SimpleController_Right_Select_Click", "Simple Controller (R) Select"),
            FKeyDetails::GamepadKey, "SimpleController"));
    }
};

#undef LOCTEXT_NAMESPACE

IMPLEMENT_PRIMARY_GAME_MODULE(FUnrealSamplesGameModuleImpl, UnrealSamples, "UnrealSamples");
