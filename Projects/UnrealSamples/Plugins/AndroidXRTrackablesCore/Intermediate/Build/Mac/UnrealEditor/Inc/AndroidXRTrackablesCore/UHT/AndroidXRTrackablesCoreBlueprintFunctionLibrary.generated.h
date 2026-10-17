// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidXRTrackablesCoreBlueprintFunctionLibrary.h"

#ifdef ANDROIDXRTRACKABLESCORE_AndroidXRTrackablesCoreBlueprintFunctionLibrary_generated_h
#error "AndroidXRTrackablesCoreBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in AndroidXRTrackablesCoreBlueprintFunctionLibrary.h"
#endif
#define ANDROIDXRTRACKABLESCORE_AndroidXRTrackablesCoreBlueprintFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EAndroidXRTrackableType : uint8;
struct FAndroidXRRaycastHit;
struct FAndroidXRSpace;
struct FAndroidXRTrackable;
struct FAndroidXRTrackablePlane;
struct FAndroidXRTrackableTracker;

// ********** Begin Class UAndroidXRTrackablesCoreBlueprintFunctionLibrary *************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRTrackablesCore_Source_AndroidXRTrackablesCore_Public_AndroidXRTrackablesCoreBlueprintFunctionLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRaycast); \
	DECLARE_FUNCTION(execEnumerateRaycastSupportedTrackableTypes); \
	DECLARE_FUNCTION(execCreateAnchorSpace); \
	DECLARE_FUNCTION(execGetTrackableProperties); \
	DECLARE_FUNCTION(execGetTrackablePlane); \
	DECLARE_FUNCTION(execGetAllTrackables); \
	DECLARE_FUNCTION(execDestroyTrackableTracker); \
	DECLARE_FUNCTION(execCreateTrackableTracker); \
	DECLARE_FUNCTION(execEnumerateSupportedAnchorTrackableTypes); \
	DECLARE_FUNCTION(execEnumerateSupportedTrackableTypes); \
	DECLARE_FUNCTION(execIsValidTrackableTracker); \
	DECLARE_FUNCTION(execIsValidTrackable);


ANDROIDXRTRACKABLESCORE_API UClass* Z_Construct_UClass_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRTrackablesCore_Source_AndroidXRTrackablesCore_Public_AndroidXRTrackablesCoreBlueprintFunctionLibrary_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAndroidXRTrackablesCoreBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANDROIDXRTRACKABLESCORE_API UClass* Z_Construct_UClass_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAndroidXRTrackablesCoreBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AndroidXRTrackablesCore"), Z_Construct_UClass_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAndroidXRTrackablesCoreBlueprintFunctionLibrary)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRTrackablesCore_Source_AndroidXRTrackablesCore_Public_AndroidXRTrackablesCoreBlueprintFunctionLibrary_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidXRTrackablesCoreBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAndroidXRTrackablesCoreBlueprintFunctionLibrary(UAndroidXRTrackablesCoreBlueprintFunctionLibrary&&) = delete; \
	UAndroidXRTrackablesCoreBlueprintFunctionLibrary(const UAndroidXRTrackablesCoreBlueprintFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidXRTrackablesCoreBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidXRTrackablesCoreBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidXRTrackablesCoreBlueprintFunctionLibrary) \
	NO_API virtual ~UAndroidXRTrackablesCoreBlueprintFunctionLibrary();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRTrackablesCore_Source_AndroidXRTrackablesCore_Public_AndroidXRTrackablesCoreBlueprintFunctionLibrary_h_21_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRTrackablesCore_Source_AndroidXRTrackablesCore_Public_AndroidXRTrackablesCoreBlueprintFunctionLibrary_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRTrackablesCore_Source_AndroidXRTrackablesCore_Public_AndroidXRTrackablesCoreBlueprintFunctionLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRTrackablesCore_Source_AndroidXRTrackablesCore_Public_AndroidXRTrackablesCoreBlueprintFunctionLibrary_h_24_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRTrackablesCore_Source_AndroidXRTrackablesCore_Public_AndroidXRTrackablesCoreBlueprintFunctionLibrary_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAndroidXRTrackablesCoreBlueprintFunctionLibrary;

// ********** End Class UAndroidXRTrackablesCoreBlueprintFunctionLibrary ***************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRTrackablesCore_Source_AndroidXRTrackablesCore_Public_AndroidXRTrackablesCoreBlueprintFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
