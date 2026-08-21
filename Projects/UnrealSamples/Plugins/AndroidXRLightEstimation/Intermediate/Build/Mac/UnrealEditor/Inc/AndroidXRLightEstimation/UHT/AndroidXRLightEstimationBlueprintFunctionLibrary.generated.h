// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidXRLightEstimationBlueprintFunctionLibrary.h"

#ifdef ANDROIDXRLIGHTESTIMATION_AndroidXRLightEstimationBlueprintFunctionLibrary_generated_h
#error "AndroidXRLightEstimationBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in AndroidXRLightEstimationBlueprintFunctionLibrary.h"
#endif
#define ANDROIDXRLIGHTESTIMATION_AndroidXRLightEstimationBlueprintFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UTextureCube;
enum class EAndroidXRCubemapColorFormat : uint8;
enum class EAndroidXRSphericalHarmonicsKind : uint8;
struct FAndroidXRAmbientLightData;
struct FAndroidXRCubemapConfiguration;
struct FAndroidXRCubemapEstimator;
struct FAndroidXRCubemapLightData;
struct FAndroidXRDirectionalLightData;
struct FAndroidXRLightEstimator;
struct FAndroidXRSphericalHarmonicsData;

// ********** Begin Class UAndroidXRLightEstimationBlueprintFunctionLibrary ************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRLightEstimation_Source_AndroidXRLightEstimation_Public_AndroidXRLightEstimationBlueprintFunctionLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyLightEstimationCubemap); \
	DECLARE_FUNCTION(execCreateCubemapTextureForLightEstimation); \
	DECLARE_FUNCTION(execDestroyCubemapEstimator); \
	DECLARE_FUNCTION(execGetCubemapData); \
	DECLARE_FUNCTION(execCreateCubemapLightEstimator); \
	DECLARE_FUNCTION(execEnumerateSupportedCubemapResolutions); \
	DECLARE_FUNCTION(execEnumerateSupportedCubemapFormats); \
	DECLARE_FUNCTION(execIsCubemapLightEstimationSupported); \
	DECLARE_FUNCTION(execGetSphericalHarmonicsData); \
	DECLARE_FUNCTION(execGetAmbientLightData); \
	DECLARE_FUNCTION(execGetDirectionalLightData); \
	DECLARE_FUNCTION(execDestroyLightEstimator); \
	DECLARE_FUNCTION(execCreateLightEstimator); \
	DECLARE_FUNCTION(execIsLightEstimationSupported);


ANDROIDXRLIGHTESTIMATION_API UClass* Z_Construct_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRLightEstimation_Source_AndroidXRLightEstimation_Public_AndroidXRLightEstimationBlueprintFunctionLibrary_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAndroidXRLightEstimationBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANDROIDXRLIGHTESTIMATION_API UClass* Z_Construct_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAndroidXRLightEstimationBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AndroidXRLightEstimation"), Z_Construct_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAndroidXRLightEstimationBlueprintFunctionLibrary)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRLightEstimation_Source_AndroidXRLightEstimation_Public_AndroidXRLightEstimationBlueprintFunctionLibrary_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidXRLightEstimationBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAndroidXRLightEstimationBlueprintFunctionLibrary(UAndroidXRLightEstimationBlueprintFunctionLibrary&&) = delete; \
	UAndroidXRLightEstimationBlueprintFunctionLibrary(const UAndroidXRLightEstimationBlueprintFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidXRLightEstimationBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidXRLightEstimationBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidXRLightEstimationBlueprintFunctionLibrary) \
	NO_API virtual ~UAndroidXRLightEstimationBlueprintFunctionLibrary();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRLightEstimation_Source_AndroidXRLightEstimation_Public_AndroidXRLightEstimationBlueprintFunctionLibrary_h_21_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRLightEstimation_Source_AndroidXRLightEstimation_Public_AndroidXRLightEstimationBlueprintFunctionLibrary_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRLightEstimation_Source_AndroidXRLightEstimation_Public_AndroidXRLightEstimationBlueprintFunctionLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRLightEstimation_Source_AndroidXRLightEstimation_Public_AndroidXRLightEstimationBlueprintFunctionLibrary_h_24_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRLightEstimation_Source_AndroidXRLightEstimation_Public_AndroidXRLightEstimationBlueprintFunctionLibrary_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAndroidXRLightEstimationBlueprintFunctionLibrary;

// ********** End Class UAndroidXRLightEstimationBlueprintFunctionLibrary **************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRLightEstimation_Source_AndroidXRLightEstimation_Public_AndroidXRLightEstimationBlueprintFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
