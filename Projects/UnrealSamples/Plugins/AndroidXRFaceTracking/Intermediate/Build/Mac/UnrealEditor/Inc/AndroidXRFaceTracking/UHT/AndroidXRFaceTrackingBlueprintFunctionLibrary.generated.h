// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidXRFaceTrackingBlueprintFunctionLibrary.h"

#ifdef ANDROIDXRFACETRACKING_AndroidXRFaceTrackingBlueprintFunctionLibrary_generated_h
#error "AndroidXRFaceTrackingBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in AndroidXRFaceTrackingBlueprintFunctionLibrary.h"
#endif
#define ANDROIDXRFACETRACKING_AndroidXRFaceTrackingBlueprintFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FAndroidXRFaceState;
struct FAndroidXRFaceTracker;

// ********** Begin Class UAndroidXRFaceTrackingBlueprintFunctionLibrary ***************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRFaceTracking_Source_AndroidXRFaceTracking_Public_AndroidXRFaceTrackingBlueprintFunctionLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFaceState); \
	DECLARE_FUNCTION(execGetFaceCalibrationState); \
	DECLARE_FUNCTION(execDestroyFaceTracker); \
	DECLARE_FUNCTION(execCreateFaceTracker); \
	DECLARE_FUNCTION(execIsValidFaceTracker);


ANDROIDXRFACETRACKING_API UClass* Z_Construct_UClass_UAndroidXRFaceTrackingBlueprintFunctionLibrary_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRFaceTracking_Source_AndroidXRFaceTracking_Public_AndroidXRFaceTrackingBlueprintFunctionLibrary_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAndroidXRFaceTrackingBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UAndroidXRFaceTrackingBlueprintFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANDROIDXRFACETRACKING_API UClass* Z_Construct_UClass_UAndroidXRFaceTrackingBlueprintFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAndroidXRFaceTrackingBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AndroidXRFaceTracking"), Z_Construct_UClass_UAndroidXRFaceTrackingBlueprintFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAndroidXRFaceTrackingBlueprintFunctionLibrary)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRFaceTracking_Source_AndroidXRFaceTracking_Public_AndroidXRFaceTrackingBlueprintFunctionLibrary_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidXRFaceTrackingBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAndroidXRFaceTrackingBlueprintFunctionLibrary(UAndroidXRFaceTrackingBlueprintFunctionLibrary&&) = delete; \
	UAndroidXRFaceTrackingBlueprintFunctionLibrary(const UAndroidXRFaceTrackingBlueprintFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidXRFaceTrackingBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidXRFaceTrackingBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidXRFaceTrackingBlueprintFunctionLibrary) \
	NO_API virtual ~UAndroidXRFaceTrackingBlueprintFunctionLibrary();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRFaceTracking_Source_AndroidXRFaceTracking_Public_AndroidXRFaceTrackingBlueprintFunctionLibrary_h_21_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRFaceTracking_Source_AndroidXRFaceTracking_Public_AndroidXRFaceTrackingBlueprintFunctionLibrary_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRFaceTracking_Source_AndroidXRFaceTracking_Public_AndroidXRFaceTrackingBlueprintFunctionLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRFaceTracking_Source_AndroidXRFaceTracking_Public_AndroidXRFaceTrackingBlueprintFunctionLibrary_h_24_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRFaceTracking_Source_AndroidXRFaceTracking_Public_AndroidXRFaceTrackingBlueprintFunctionLibrary_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAndroidXRFaceTrackingBlueprintFunctionLibrary;

// ********** End Class UAndroidXRFaceTrackingBlueprintFunctionLibrary *****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRFaceTracking_Source_AndroidXRFaceTracking_Public_AndroidXRFaceTrackingBlueprintFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
