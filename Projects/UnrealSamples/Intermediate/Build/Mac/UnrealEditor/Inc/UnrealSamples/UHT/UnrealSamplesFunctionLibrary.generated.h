// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnrealSamplesFunctionLibrary.h"

#ifdef UNREALSAMPLES_UnrealSamplesFunctionLibrary_generated_h
#error "UnrealSamplesFunctionLibrary.generated.h already included, missing '#pragma once' in UnrealSamplesFunctionLibrary.h"
#endif
#define UNREALSAMPLES_UnrealSamplesFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUnrealSamplesFunctionLibrary ********************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_UnrealSamplesFunctionLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsPlatformAndroid); \
	DECLARE_FUNCTION(execGetAverageFPS); \
	DECLARE_FUNCTION(execGetCurrentMapName); \
	DECLARE_FUNCTION(execGetAllMapNames);


UNREALSAMPLES_API UClass* Z_Construct_UClass_UUnrealSamplesFunctionLibrary_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_UnrealSamplesFunctionLibrary_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnrealSamplesFunctionLibrary(); \
	friend struct Z_Construct_UClass_UUnrealSamplesFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALSAMPLES_API UClass* Z_Construct_UClass_UUnrealSamplesFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UUnrealSamplesFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealSamples"), Z_Construct_UClass_UUnrealSamplesFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UUnrealSamplesFunctionLibrary)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_UnrealSamplesFunctionLibrary_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnrealSamplesFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUnrealSamplesFunctionLibrary(UUnrealSamplesFunctionLibrary&&) = delete; \
	UUnrealSamplesFunctionLibrary(const UUnrealSamplesFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnrealSamplesFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnrealSamplesFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnrealSamplesFunctionLibrary) \
	NO_API virtual ~UUnrealSamplesFunctionLibrary();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_UnrealSamplesFunctionLibrary_h_22_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_UnrealSamplesFunctionLibrary_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_UnrealSamplesFunctionLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_UnrealSamplesFunctionLibrary_h_25_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_UnrealSamplesFunctionLibrary_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUnrealSamplesFunctionLibrary;

// ********** End Class UUnrealSamplesFunctionLibrary **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_UnrealSamplesFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
