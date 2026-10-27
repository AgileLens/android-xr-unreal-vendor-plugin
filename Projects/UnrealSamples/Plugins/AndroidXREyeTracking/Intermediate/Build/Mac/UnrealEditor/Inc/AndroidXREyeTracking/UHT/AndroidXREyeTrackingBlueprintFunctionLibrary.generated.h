// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidXREyeTrackingBlueprintFunctionLibrary.h"

#ifdef ANDROIDXREYETRACKING_AndroidXREyeTrackingBlueprintFunctionLibrary_generated_h
#error "AndroidXREyeTrackingBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in AndroidXREyeTrackingBlueprintFunctionLibrary.h"
#endif
#define ANDROIDXREYETRACKING_AndroidXREyeTrackingBlueprintFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FAndroidXREyes;
struct FAndroidXREyeTracker;

// ********** Begin Class UAndroidXREyeTrackingBlueprintFunctionLibrary ****************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXREyeTracking_Source_AndroidXREyeTracking_Public_AndroidXREyeTrackingBlueprintFunctionLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCoarseEyeTrackingInfo); \
	DECLARE_FUNCTION(execGetFineEyeTrackingInfo); \
	DECLARE_FUNCTION(execDestroyEyeTracker); \
	DECLARE_FUNCTION(execCreateEyeTracker); \
	DECLARE_FUNCTION(execIsTrackerValid); \
	DECLARE_FUNCTION(execSupportsEyeTracking);


ANDROIDXREYETRACKING_API UClass* Z_Construct_UClass_UAndroidXREyeTrackingBlueprintFunctionLibrary_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXREyeTracking_Source_AndroidXREyeTracking_Public_AndroidXREyeTrackingBlueprintFunctionLibrary_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAndroidXREyeTrackingBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UAndroidXREyeTrackingBlueprintFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANDROIDXREYETRACKING_API UClass* Z_Construct_UClass_UAndroidXREyeTrackingBlueprintFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAndroidXREyeTrackingBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AndroidXREyeTracking"), Z_Construct_UClass_UAndroidXREyeTrackingBlueprintFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAndroidXREyeTrackingBlueprintFunctionLibrary)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXREyeTracking_Source_AndroidXREyeTracking_Public_AndroidXREyeTrackingBlueprintFunctionLibrary_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidXREyeTrackingBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAndroidXREyeTrackingBlueprintFunctionLibrary(UAndroidXREyeTrackingBlueprintFunctionLibrary&&) = delete; \
	UAndroidXREyeTrackingBlueprintFunctionLibrary(const UAndroidXREyeTrackingBlueprintFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidXREyeTrackingBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidXREyeTrackingBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidXREyeTrackingBlueprintFunctionLibrary) \
	NO_API virtual ~UAndroidXREyeTrackingBlueprintFunctionLibrary();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXREyeTracking_Source_AndroidXREyeTracking_Public_AndroidXREyeTrackingBlueprintFunctionLibrary_h_21_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXREyeTracking_Source_AndroidXREyeTracking_Public_AndroidXREyeTrackingBlueprintFunctionLibrary_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXREyeTracking_Source_AndroidXREyeTracking_Public_AndroidXREyeTrackingBlueprintFunctionLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXREyeTracking_Source_AndroidXREyeTracking_Public_AndroidXREyeTrackingBlueprintFunctionLibrary_h_24_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXREyeTracking_Source_AndroidXREyeTracking_Public_AndroidXREyeTrackingBlueprintFunctionLibrary_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAndroidXREyeTrackingBlueprintFunctionLibrary;

// ********** End Class UAndroidXREyeTrackingBlueprintFunctionLibrary ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXREyeTracking_Source_AndroidXREyeTracking_Public_AndroidXREyeTrackingBlueprintFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
