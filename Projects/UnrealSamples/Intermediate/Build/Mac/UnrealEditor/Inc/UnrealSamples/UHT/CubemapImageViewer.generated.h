// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CubemapImageViewer.h"

#ifdef UNREALSAMPLES_CubemapImageViewer_generated_h
#error "CubemapImageViewer.generated.h already included, missing '#pragma once' in CubemapImageViewer.h"
#endif
#define UNREALSAMPLES_CubemapImageViewer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UTextureCube;
struct FAndroidXRCubemapEstimator;

// ********** Begin Class UCubemapImageViewer ******************************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_CubemapImageViewer_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateCubemap); \
	DECLARE_FUNCTION(execResetCubemap); \
	DECLARE_FUNCTION(execInitializeCubemap); \
	DECLARE_FUNCTION(execOnSelectedFaceChanged);


UNREALSAMPLES_API UClass* Z_Construct_UClass_UCubemapImageViewer_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_CubemapImageViewer_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCubemapImageViewer(); \
	friend struct Z_Construct_UClass_UCubemapImageViewer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALSAMPLES_API UClass* Z_Construct_UClass_UCubemapImageViewer_NoRegister(); \
public: \
	DECLARE_CLASS2(UCubemapImageViewer, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealSamples"), Z_Construct_UClass_UCubemapImageViewer_NoRegister) \
	DECLARE_SERIALIZER(UCubemapImageViewer)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_CubemapImageViewer_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCubemapImageViewer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCubemapImageViewer(UCubemapImageViewer&&) = delete; \
	UCubemapImageViewer(const UCubemapImageViewer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCubemapImageViewer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCubemapImageViewer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCubemapImageViewer) \
	NO_API virtual ~UCubemapImageViewer();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_CubemapImageViewer_h_39_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_CubemapImageViewer_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_CubemapImageViewer_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_CubemapImageViewer_h_42_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_CubemapImageViewer_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCubemapImageViewer;

// ********** End Class UCubemapImageViewer ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_CubemapImageViewer_h

// ********** Begin Enum ECubemapFace **************************************************************
#define FOREACH_ENUM_ECUBEMAPFACE(op) \
	op(Front) \
	op(Back) \
	op(Right) \
	op(Left) \
	op(Up) \
	op(Down) 

enum ECubemapFace : uint8;
template<> UNREALSAMPLES_API UEnum* StaticEnum<ECubemapFace>();
// ********** End Enum ECubemapFace ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
