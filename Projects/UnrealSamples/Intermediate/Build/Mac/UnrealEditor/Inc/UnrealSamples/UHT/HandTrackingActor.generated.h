// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HandTrackingActor.h"

#ifdef UNREALSAMPLES_HandTrackingActor_generated_h
#error "HandTrackingActor.generated.h already included, missing '#pragma once' in HandTrackingActor.h"
#endif
#define UNREALSAMPLES_HandTrackingActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EControllerHand : uint8;

// ********** Begin Class AHandTrackingActor *******************************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_HandTrackingActor_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execShouldTrackHand); \
	DECLARE_FUNCTION(execUpdateHandJointScaleFactor); \
	DECLARE_FUNCTION(execShouldShowHandJointLabels); \
	DECLARE_FUNCTION(execInitialize);


UNREALSAMPLES_API UClass* Z_Construct_UClass_AHandTrackingActor_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_HandTrackingActor_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHandTrackingActor(); \
	friend struct Z_Construct_UClass_AHandTrackingActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALSAMPLES_API UClass* Z_Construct_UClass_AHandTrackingActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AHandTrackingActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealSamples"), Z_Construct_UClass_AHandTrackingActor_NoRegister) \
	DECLARE_SERIALIZER(AHandTrackingActor)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_HandTrackingActor_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHandTrackingActor(AHandTrackingActor&&) = delete; \
	AHandTrackingActor(const AHandTrackingActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHandTrackingActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHandTrackingActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHandTrackingActor) \
	NO_API virtual ~AHandTrackingActor();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_HandTrackingActor_h_21_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_HandTrackingActor_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_HandTrackingActor_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_HandTrackingActor_h_24_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_HandTrackingActor_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHandTrackingActor;

// ********** End Class AHandTrackingActor *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_HandTrackingActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
