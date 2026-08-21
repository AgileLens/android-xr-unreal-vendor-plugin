// Copyright 2026 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "GamepadMotionSensorsSubsystem.h"

#include "HAL/CriticalSection.h"

#if PLATFORM_ANDROID
#include "Android/AndroidApplication.h"
#include "Android/AndroidJava.h"
#include "Android/AndroidJNI.h"
#endif

DEFINE_LOG_CATEGORY_STATIC(LogGamepadMotionSensors, Log, All);

namespace
{
    /**
     * Sensor samples arrive on Android's sensor thread, not the game thread, so
     * the latest values are published under a lock and read on demand. At the
     * observed rates (~90 Hz) this is far cheaper than marshalling each sample
     * onto the game thread.
     */
    struct FGamepadMotionState
    {
        mutable FCriticalSection Mutex;
        FQuat Orientation = FQuat::Identity;
        FVector Gyro = FVector::ZeroVector;
        FVector Accel = FVector::ZeroVector;
        float Hz = 0.0f;
        bool bAvailable = false;
        FString DeviceName;
    };

    FGamepadMotionState& State()
    {
        static FGamepadMotionState Singleton;
        return Singleton;
    }
}

void UGamepadMotionSensorsSubsystem::HandleMotionUpdate(const FQuat& InOrientation,
    const FVector& InGyro, const FVector& InAccel, float InHz)
{
    FGamepadMotionState& S = State();
    FScopeLock Lock(&S.Mutex);
    S.Orientation = InOrientation;
    S.Gyro = InGyro;
    S.Accel = InAccel;
    S.Hz = InHz;
}

void UGamepadMotionSensorsSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
    StartGamepadMotion();
}

void UGamepadMotionSensorsSubsystem::Deinitialize()
{
    StopGamepadMotion();
    Super::Deinitialize();
}

bool UGamepadMotionSensorsSubsystem::StartGamepadMotion()
{
#if PLATFORM_ANDROID
    if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
    {
        static jmethodID StartMethod = FJavaWrapper::FindMethod(Env,
            FJavaWrapper::GameActivityClassID,
            "AndroidThunkJava_StartGamepadMotion", "()Z", false);
        if (StartMethod == nullptr)
        {
            UE_LOG(LogGamepadMotionSensors, Warning,
                TEXT("AndroidThunkJava_StartGamepadMotion not found; is the APL applied?"));
            return false;
        }

        const bool bStarted = FJavaWrapper::CallBooleanMethod(Env,
            FJavaWrapper::GameActivityThis, StartMethod);

        FGamepadMotionState& S = State();
        {
            FScopeLock Lock(&S.Mutex);
            S.bAvailable = bStarted;
        }

        if (bStarted)
        {
            static jmethodID NameMethod = FJavaWrapper::FindMethod(Env,
                FJavaWrapper::GameActivityClassID,
                "AndroidThunkJava_GetGamepadMotionDeviceName", "()Ljava/lang/String;", false);
            if (NameMethod != nullptr)
            {
                jstring JName = static_cast<jstring>(Env->CallObjectMethod(
                    FJavaWrapper::GameActivityThis, NameMethod));
                if (JName != nullptr)
                {
                    const char* Chars = Env->GetStringUTFChars(JName, nullptr);
                    FScopeLock Lock(&S.Mutex);
                    S.DeviceName = FString(UTF8_TO_TCHAR(Chars));
                    Env->ReleaseStringUTFChars(JName, Chars);
                    Env->DeleteLocalRef(JName);
                }
            }
            UE_LOG(LogGamepadMotionSensors, Log,
                TEXT("Attached to gamepad motion sensors: %s"), *GetDeviceName());
        }
        else
        {
            UE_LOG(LogGamepadMotionSensors, Log,
                TEXT("No connected input device exposes a gyroscope."));
        }
        return bStarted;
    }
#endif
    return false;
}

void UGamepadMotionSensorsSubsystem::StopGamepadMotion()
{
#if PLATFORM_ANDROID
    if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
    {
        static jmethodID StopMethod = FJavaWrapper::FindMethod(Env,
            FJavaWrapper::GameActivityClassID,
            "AndroidThunkJava_StopGamepadMotion", "()V", false);
        if (StopMethod != nullptr)
        {
            FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, StopMethod);
        }
    }
#endif
    FGamepadMotionState& S = State();
    FScopeLock Lock(&S.Mutex);
    S.bAvailable = false;
    S.DeviceName.Empty();
}

void UGamepadMotionSensorsSubsystem::Recenter()
{
#if PLATFORM_ANDROID
    if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
    {
        static jmethodID RecenterMethod = FJavaWrapper::FindMethod(Env,
            FJavaWrapper::GameActivityClassID,
            "AndroidThunkJava_RecenterGamepadMotion", "()V", false);
        if (RecenterMethod != nullptr)
        {
            FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, RecenterMethod);
        }
    }
#endif
    FGamepadMotionState& S = State();
    FScopeLock Lock(&S.Mutex);
    S.Orientation = FQuat::Identity;
}

bool UGamepadMotionSensorsSubsystem::IsAvailable() const
{
    FGamepadMotionState& S = State();
    FScopeLock Lock(&S.Mutex);
    return S.bAvailable;
}

FString UGamepadMotionSensorsSubsystem::GetDeviceName() const
{
    FGamepadMotionState& S = State();
    FScopeLock Lock(&S.Mutex);
    return S.DeviceName;
}

FQuat UGamepadMotionSensorsSubsystem::GetOrientationQuat() const
{
    FGamepadMotionState& S = State();
    FScopeLock Lock(&S.Mutex);
    return S.Orientation;
}

FRotator UGamepadMotionSensorsSubsystem::GetOrientation() const
{
    return GetOrientationQuat().Rotator();
}

FVector UGamepadMotionSensorsSubsystem::GetAngularVelocity() const
{
    FGamepadMotionState& S = State();
    FScopeLock Lock(&S.Mutex);
    return S.Gyro;
}

FVector UGamepadMotionSensorsSubsystem::GetAcceleration() const
{
    FGamepadMotionState& S = State();
    FScopeLock Lock(&S.Mutex);
    return S.Accel;
}

float UGamepadMotionSensorsSubsystem::GetBatteryLevel() const
{
#if PLATFORM_ANDROID
    if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
    {
        static jmethodID Method = FJavaWrapper::FindMethod(Env,
            FJavaWrapper::GameActivityClassID,
            "AndroidThunkJava_GetGamepadBatteryLevel", "()F", false);
        if (Method != nullptr)
        {
            return FJavaWrapper::CallFloatMethod(Env, FJavaWrapper::GameActivityThis, Method);
        }
    }
#endif
    return -1.0f;
}

float UGamepadMotionSensorsSubsystem::GetSampleRateHz() const
{
    FGamepadMotionState& S = State();
    FScopeLock Lock(&S.Mutex);
    return S.Hz;
}

#if PLATFORM_ANDROID
/**
 * Android sensor axes are right-handed: X right, Y up, Z out of the screen
 * toward the user. Unreal is left-handed: X forward, Y right, Z up.
 *
 * Axis correspondence for a controller held pointing away from you:
 *     Unreal X (forward) = -Android Z      (Android Z points back at the user)
 *     Unreal Y (right)   = +Android X
 *     Unreal Z (up)      = +Android Y
 *
 * A true vector (acceleration) takes that permutation directly. A rotation
 * additionally reverses direction when the handedness flips, so the quaternion's
 * vector part is permuted and then negated:
 *
 *     q_unreal = ( w, +z, -x, -y )     from q_android = ( w, x, y, z )
 *
 * Angular velocity is a pseudovector and follows the same sign convention as
 * the quaternion so that the reported rates match the visible rotation.
 */
extern "C" JNIEXPORT void JNICALL
Java_com_epicgames_unreal_GameActivity_nativeGamepadMotionUpdate(
    JNIEnv* Env, jobject Thiz,
    jfloat qw, jfloat qx, jfloat qy, jfloat qz,
    jfloat gx, jfloat gy, jfloat gz,
    jfloat ax, jfloat ay, jfloat az,
    jfloat hz)
{
    const FQuat Orientation(
        static_cast<float>(qz),      // X =  +z
        -static_cast<float>(qx),     // Y =  -x
        -static_cast<float>(qy),     // Z =  -y
        static_cast<float>(qw));

    const FVector Gyro(
        static_cast<float>(gz), -static_cast<float>(gx), -static_cast<float>(gy));

    const FVector Accel(
        -static_cast<float>(az), static_cast<float>(ax), static_cast<float>(ay));

    UGamepadMotionSensorsSubsystem::HandleMotionUpdate(
        Orientation.GetNormalized(), Gyro, Accel, static_cast<float>(hz));
}
#endif
