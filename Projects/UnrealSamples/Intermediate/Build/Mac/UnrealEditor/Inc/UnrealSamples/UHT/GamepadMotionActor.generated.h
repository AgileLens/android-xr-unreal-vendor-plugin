// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GamepadMotionActor.h"

#ifdef UNREALSAMPLES_GamepadMotionActor_generated_h
#error "GamepadMotionActor.generated.h already included, missing '#pragma once' in GamepadMotionActor.h"
#endif
#define UNREALSAMPLES_GamepadMotionActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGamepadMotionActor ******************************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_GamepadMotionActor_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRecenter); \
	DECLARE_FUNCTION(execIsGamepadMotionAvailable); \
	DECLARE_FUNCTION(execGetStatusText);


UNREALSAMPLES_API UClass* Z_Construct_UClass_AGamepadMotionActor_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_GamepadMotionActor_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGamepadMotionActor(); \
	friend struct Z_Construct_UClass_AGamepadMotionActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALSAMPLES_API UClass* Z_Construct_UClass_AGamepadMotionActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AGamepadMotionActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealSamples"), Z_Construct_UClass_AGamepadMotionActor_NoRegister) \
	DECLARE_SERIALIZER(AGamepadMotionActor)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_GamepadMotionActor_h_38_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGamepadMotionActor(AGamepadMotionActor&&) = delete; \
	AGamepadMotionActor(const AGamepadMotionActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGamepadMotionActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGamepadMotionActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGamepadMotionActor) \
	NO_API virtual ~AGamepadMotionActor();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_GamepadMotionActor_h_35_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_GamepadMotionActor_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_GamepadMotionActor_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_GamepadMotionActor_h_38_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_GamepadMotionActor_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGamepadMotionActor;

// ********** End Class AGamepadMotionActor ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_GamepadMotionActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
