// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpatialPlaneActor.h"

#ifdef UNREALSAMPLES_SpatialPlaneActor_generated_h
#error "SpatialPlaneActor.generated.h already included, missing '#pragma once' in SpatialPlaneActor.h"
#endif
#define UNREALSAMPLES_SpatialPlaneActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAndroidXRSpatialPlaneEntity;
struct FSpatialPlaneRenderFilter;

// ********** Begin ScriptStruct FSpatialPlaneRenderFilter *****************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialPlaneActor_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics; \
	UNREALSAMPLES_API static class UScriptStruct* StaticStruct();


struct FSpatialPlaneRenderFilter;
// ********** End ScriptStruct FSpatialPlaneRenderFilter *******************************************

// ********** Begin Class ASpatialPlaneActor *******************************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialPlaneActor_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearVisuals); \
	DECLARE_FUNCTION(execUpdateRenderFilter); \
	DECLARE_FUNCTION(execDrawPlanes);


UNREALSAMPLES_API UClass* Z_Construct_UClass_ASpatialPlaneActor_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialPlaneActor_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpatialPlaneActor(); \
	friend struct Z_Construct_UClass_ASpatialPlaneActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALSAMPLES_API UClass* Z_Construct_UClass_ASpatialPlaneActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ASpatialPlaneActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealSamples"), Z_Construct_UClass_ASpatialPlaneActor_NoRegister) \
	DECLARE_SERIALIZER(ASpatialPlaneActor)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialPlaneActor_h_62_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASpatialPlaneActor(ASpatialPlaneActor&&) = delete; \
	ASpatialPlaneActor(const ASpatialPlaneActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpatialPlaneActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpatialPlaneActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpatialPlaneActor) \
	NO_API virtual ~ASpatialPlaneActor();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialPlaneActor_h_59_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialPlaneActor_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialPlaneActor_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialPlaneActor_h_62_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialPlaneActor_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASpatialPlaneActor;

// ********** End Class ASpatialPlaneActor *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialPlaneActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
