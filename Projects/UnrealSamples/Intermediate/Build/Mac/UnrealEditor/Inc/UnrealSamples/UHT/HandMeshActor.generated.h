// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HandMeshActor.h"

#ifdef UNREALSAMPLES_HandMeshActor_generated_h
#error "HandMeshActor.generated.h already included, missing '#pragma once' in HandMeshActor.h"
#endif
#define UNREALSAMPLES_HandMeshActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AHandMeshActor ***********************************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_HandMeshActor_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetHandMeshScale); \
	DECLARE_FUNCTION(execCreateHandMesh);


UNREALSAMPLES_API UClass* Z_Construct_UClass_AHandMeshActor_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_HandMeshActor_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHandMeshActor(); \
	friend struct Z_Construct_UClass_AHandMeshActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALSAMPLES_API UClass* Z_Construct_UClass_AHandMeshActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AHandMeshActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealSamples"), Z_Construct_UClass_AHandMeshActor_NoRegister) \
	DECLARE_SERIALIZER(AHandMeshActor)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_HandMeshActor_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHandMeshActor(AHandMeshActor&&) = delete; \
	AHandMeshActor(const AHandMeshActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHandMeshActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHandMeshActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHandMeshActor) \
	NO_API virtual ~AHandMeshActor();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_HandMeshActor_h_25_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_HandMeshActor_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_HandMeshActor_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_HandMeshActor_h_28_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_HandMeshActor_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHandMeshActor;

// ********** End Class AHandMeshActor *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_HandMeshActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
