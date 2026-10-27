// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidXRBlueprintFunctionLibrary.h"

#ifdef ANDROIDXR_AndroidXRBlueprintFunctionLibrary_generated_h
#error "AndroidXRBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in AndroidXRBlueprintFunctionLibrary.h"
#endif
#define ANDROIDXR_AndroidXRBlueprintFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAndroidXREventProxy;
enum class EAndroidXRPassthroughCameraState : uint8;
enum class EAndroidXRPerfSettingsDomain : uint8;
enum class EAndroidXRPerfSettingsLevel : uint8;
struct FAndroidXRSpace;

// ********** Begin Class UAndroidXRBlueprintFunctionLibrary ***************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXR_Public_AndroidXRBlueprintFunctionLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestDisplayRefreshRate); \
	DECLARE_FUNCTION(execGetDisplayRefreshRate); \
	DECLARE_FUNCTION(execEnumerateDisplayRefreshRates); \
	DECLARE_FUNCTION(execPerfSettingsSetPerformanceLevel); \
	DECLARE_FUNCTION(execGetPassthroughCameraState); \
	DECLARE_FUNCTION(execGetCameraPassthroughSupported); \
	DECLARE_FUNCTION(execGetEventProxy); \
	DECLARE_FUNCTION(execDestroySpace); \
	DECLARE_FUNCTION(execLocateSpace); \
	DECLARE_FUNCTION(execIsValidSpace);


ANDROIDXR_API UClass* Z_Construct_UClass_UAndroidXRBlueprintFunctionLibrary_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXR_Public_AndroidXRBlueprintFunctionLibrary_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAndroidXRBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UAndroidXRBlueprintFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANDROIDXR_API UClass* Z_Construct_UClass_UAndroidXRBlueprintFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAndroidXRBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AndroidXR"), Z_Construct_UClass_UAndroidXRBlueprintFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAndroidXRBlueprintFunctionLibrary)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXR_Public_AndroidXRBlueprintFunctionLibrary_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidXRBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAndroidXRBlueprintFunctionLibrary(UAndroidXRBlueprintFunctionLibrary&&) = delete; \
	UAndroidXRBlueprintFunctionLibrary(const UAndroidXRBlueprintFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidXRBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidXRBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidXRBlueprintFunctionLibrary) \
	NO_API virtual ~UAndroidXRBlueprintFunctionLibrary();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXR_Public_AndroidXRBlueprintFunctionLibrary_h_23_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXR_Public_AndroidXRBlueprintFunctionLibrary_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXR_Public_AndroidXRBlueprintFunctionLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXR_Public_AndroidXRBlueprintFunctionLibrary_h_26_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXR_Public_AndroidXRBlueprintFunctionLibrary_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAndroidXRBlueprintFunctionLibrary;

// ********** End Class UAndroidXRBlueprintFunctionLibrary *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXR_Public_AndroidXRBlueprintFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
