// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlaneActor.h"

#ifdef UNREALSAMPLES_PlaneActor_generated_h
#error "PlaneActor.generated.h already included, missing '#pragma once' in PlaneActor.h"
#endif
#define UNREALSAMPLES_PlaneActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FAndroidXRTrackablePlane;

// ********** Begin Class APlaneActor **************************************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_PlaneActor_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateVisuals); \
	DECLARE_FUNCTION(execAddTrackablePlane); \
	DECLARE_FUNCTION(execClearTrackablePlanes);


UNREALSAMPLES_API UClass* Z_Construct_UClass_APlaneActor_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_PlaneActor_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlaneActor(); \
	friend struct Z_Construct_UClass_APlaneActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALSAMPLES_API UClass* Z_Construct_UClass_APlaneActor_NoRegister(); \
public: \
	DECLARE_CLASS2(APlaneActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealSamples"), Z_Construct_UClass_APlaneActor_NoRegister) \
	DECLARE_SERIALIZER(APlaneActor)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_PlaneActor_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APlaneActor(APlaneActor&&) = delete; \
	APlaneActor(const APlaneActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlaneActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlaneActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlaneActor) \
	NO_API virtual ~APlaneActor();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_PlaneActor_h_24_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_PlaneActor_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_PlaneActor_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_PlaneActor_h_27_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_PlaneActor_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APlaneActor;

// ********** End Class APlaneActor ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_PlaneActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
