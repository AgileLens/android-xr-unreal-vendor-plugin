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

#include <OpenXRCore.h>
#include "InputAction.h"

namespace HandInteraction
{
class FActionState
{
protected:
    FActionState() = default;
public:
    XrAction Action{ };

    virtual ~FActionState()
    {
        if (Action != XR_NULL_HANDLE)
        {
            xrDestroyAction(Action);
            Action = { };
        }
    }
};

class FActionStateFloat : public FActionState
{
public:
    XrActionStateFloat State{ .type = XR_TYPE_ACTION_STATE_FLOAT };

    FActionStateFloat() = default;
    ~FActionStateFloat() = default;
    FActionStateFloat(XrAction InAction)
    {
        Action = InAction;
    }
    FActionStateFloat(FActionStateFloat&& Other)
    {
        Action = Other.Action;
        State = Other.State;
        new (&Other) FActionStateFloat;
    }
};

class FActionStateBoolean : public FActionState
{
public:
    XrActionStateBoolean State{ .type = XR_TYPE_ACTION_STATE_BOOLEAN };

    FActionStateBoolean() = default;
    FActionStateBoolean(XrAction InAction)
    {
        Action = InAction;
    }
    FActionStateBoolean(FActionStateBoolean&& Other)
    {
        Action = Other.Action;
        State = Other.State;

        new (&Other) FActionStateBoolean;
    }
};

class FActionStatePose : public FActionState
{
public:
    XrActionStatePose State{ .type = XR_TYPE_ACTION_STATE_POSE };
    XrSpace Space{ };
    XrSpaceLocation Location{ .type = XR_TYPE_SPACE_LOCATION };

    FActionStatePose() = default;
    FActionStatePose(XrAction InAction, XrSpace InSpace)
    {
        Action = InAction;
        Space = InSpace;
    }
    FActionStatePose(FActionStatePose&& Other)
    {
        Action = Other.Action;
        State = Other.State;
        Space = Other.Space;
        Location = Other.Location;

        new (&Other) FActionStatePose;
    }
    ~FActionStatePose()
    {
        if (Space != XR_NULL_HANDLE)
        {
            xrDestroySpace(Space);
            Space = { };
        }
    }
};
} // namespace HandInteraction
