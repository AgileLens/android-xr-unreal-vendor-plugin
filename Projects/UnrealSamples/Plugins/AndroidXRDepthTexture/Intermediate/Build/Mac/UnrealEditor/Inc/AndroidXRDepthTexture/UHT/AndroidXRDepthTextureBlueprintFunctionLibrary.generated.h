// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidXRDepthTextureBlueprintFunctionLibrary.h"

#ifdef ANDROIDXRDEPTHTEXTURE_AndroidXRDepthTextureBlueprintFunctionLibrary_generated_h
#error "AndroidXRDepthTextureBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in AndroidXRDepthTextureBlueprintFunctionLibrary.h"
#endif
#define ANDROIDXRDEPTHTEXTURE_AndroidXRDepthTextureBlueprintFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UTexture2D;
enum class EAndroidXRDepthCameraResolution : uint8;
enum class EAndroidXRDepthSwapchainCreateFlag : uint8;
struct FAndroidXRDepthAcquireResult;
struct FAndroidXRDepthSwapchain;
struct FAndroidXRDepthSwapchainImage;

// ********** Begin Class UAndroidXRDepthTextureBlueprintFunctionLibrary ***************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDepthTexture_Source_AndroidXRDepthTexture_Public_AndroidXRDepthTextureBlueprintFunctionLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateTextureFromDepthSwapchainImage); \
	DECLARE_FUNCTION(execCreateDepthSwapchainTexture); \
	DECLARE_FUNCTION(execAcquireDepthSwapchainImages); \
	DECLARE_FUNCTION(execEnumerateDepthSwapchainImages); \
	DECLARE_FUNCTION(execDestroyDepthSwapchain); \
	DECLARE_FUNCTION(execCreateDepthSwapchain); \
	DECLARE_FUNCTION(execEnumerateDepthResolutions); \
	DECLARE_FUNCTION(execGetDepthSwapchainSupported); \
	DECLARE_FUNCTION(execIsValidDepthSwapchain);


ANDROIDXRDEPTHTEXTURE_API UClass* Z_Construct_UClass_UAndroidXRDepthTextureBlueprintFunctionLibrary_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDepthTexture_Source_AndroidXRDepthTexture_Public_AndroidXRDepthTextureBlueprintFunctionLibrary_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAndroidXRDepthTextureBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UAndroidXRDepthTextureBlueprintFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANDROIDXRDEPTHTEXTURE_API UClass* Z_Construct_UClass_UAndroidXRDepthTextureBlueprintFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAndroidXRDepthTextureBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AndroidXRDepthTexture"), Z_Construct_UClass_UAndroidXRDepthTextureBlueprintFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAndroidXRDepthTextureBlueprintFunctionLibrary)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDepthTexture_Source_AndroidXRDepthTexture_Public_AndroidXRDepthTextureBlueprintFunctionLibrary_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidXRDepthTextureBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAndroidXRDepthTextureBlueprintFunctionLibrary(UAndroidXRDepthTextureBlueprintFunctionLibrary&&) = delete; \
	UAndroidXRDepthTextureBlueprintFunctionLibrary(const UAndroidXRDepthTextureBlueprintFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidXRDepthTextureBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidXRDepthTextureBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidXRDepthTextureBlueprintFunctionLibrary) \
	NO_API virtual ~UAndroidXRDepthTextureBlueprintFunctionLibrary();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDepthTexture_Source_AndroidXRDepthTexture_Public_AndroidXRDepthTextureBlueprintFunctionLibrary_h_21_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDepthTexture_Source_AndroidXRDepthTexture_Public_AndroidXRDepthTextureBlueprintFunctionLibrary_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDepthTexture_Source_AndroidXRDepthTexture_Public_AndroidXRDepthTextureBlueprintFunctionLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDepthTexture_Source_AndroidXRDepthTexture_Public_AndroidXRDepthTextureBlueprintFunctionLibrary_h_24_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDepthTexture_Source_AndroidXRDepthTexture_Public_AndroidXRDepthTextureBlueprintFunctionLibrary_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAndroidXRDepthTextureBlueprintFunctionLibrary;

// ********** End Class UAndroidXRDepthTextureBlueprintFunctionLibrary *****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDepthTexture_Source_AndroidXRDepthTexture_Public_AndroidXRDepthTextureBlueprintFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
