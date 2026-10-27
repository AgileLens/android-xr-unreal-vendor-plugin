// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GamepadMotionSensorsSubsystem.h"

#ifdef GAMEPADMOTIONSENSORS_GamepadMotionSensorsSubsystem_generated_h
#error "GamepadMotionSensorsSubsystem.generated.h already included, missing '#pragma once' in GamepadMotionSensorsSubsystem.h"
#endif
#define GAMEPADMOTIONSENSORS_GamepadMotionSensorsSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGamepadMotionSensorsSubsystem *******************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_GamepadMotionSensors_Source_GamepadMotionSensors_Public_GamepadMotionSensorsSubsystem_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRecenter); \
	DECLARE_FUNCTION(execGetBatteryLevel); \
	DECLARE_FUNCTION(execGetSampleRateHz); \
	DECLARE_FUNCTION(execGetAcceleration); \
	DECLARE_FUNCTION(execGetAngularVelocity); \
	DECLARE_FUNCTION(execGetOrientationQuat); \
	DECLARE_FUNCTION(execGetOrientation); \
	DECLARE_FUNCTION(execGetDeviceName); \
	DECLARE_FUNCTION(execIsAvailable); \
	DECLARE_FUNCTION(execStopGamepadMotion); \
	DECLARE_FUNCTION(execStartGamepadMotion);


GAMEPADMOTIONSENSORS_API UClass* Z_Construct_UClass_UGamepadMotionSensorsSubsystem_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_GamepadMotionSensors_Source_GamepadMotionSensors_Public_GamepadMotionSensorsSubsystem_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGamepadMotionSensorsSubsystem(); \
	friend struct Z_Construct_UClass_UGamepadMotionSensorsSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPADMOTIONSENSORS_API UClass* Z_Construct_UClass_UGamepadMotionSensorsSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UGamepadMotionSensorsSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GamepadMotionSensors"), Z_Construct_UClass_UGamepadMotionSensorsSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UGamepadMotionSensorsSubsystem)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_GamepadMotionSensors_Source_GamepadMotionSensors_Public_GamepadMotionSensorsSubsystem_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGamepadMotionSensorsSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGamepadMotionSensorsSubsystem(UGamepadMotionSensorsSubsystem&&) = delete; \
	UGamepadMotionSensorsSubsystem(const UGamepadMotionSensorsSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGamepadMotionSensorsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGamepadMotionSensorsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGamepadMotionSensorsSubsystem) \
	NO_API virtual ~UGamepadMotionSensorsSubsystem();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_GamepadMotionSensors_Source_GamepadMotionSensors_Public_GamepadMotionSensorsSubsystem_h_37_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_GamepadMotionSensors_Source_GamepadMotionSensors_Public_GamepadMotionSensorsSubsystem_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_GamepadMotionSensors_Source_GamepadMotionSensors_Public_GamepadMotionSensorsSubsystem_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_GamepadMotionSensors_Source_GamepadMotionSensors_Public_GamepadMotionSensorsSubsystem_h_40_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_GamepadMotionSensors_Source_GamepadMotionSensors_Public_GamepadMotionSensorsSubsystem_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGamepadMotionSensorsSubsystem;

// ********** End Class UGamepadMotionSensorsSubsystem *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_GamepadMotionSensors_Source_GamepadMotionSensors_Public_GamepadMotionSensorsSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
