// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidXRLightEstimationTypes.h"

#ifdef ANDROIDXRLIGHTESTIMATION_AndroidXRLightEstimationTypes_generated_h
#error "AndroidXRLightEstimationTypes.generated.h already included, missing '#pragma once' in AndroidXRLightEstimationTypes.h"
#endif
#define ANDROIDXRLIGHTESTIMATION_AndroidXRLightEstimationTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAndroidXRLightEstimator ******************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRLightEstimation_Source_AndroidXRLightEstimation_Public_AndroidXRLightEstimationTypes_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAndroidXRLightEstimator_Statics; \
	ANDROIDXRLIGHTESTIMATION_API static class UScriptStruct* StaticStruct();


struct FAndroidXRLightEstimator;
// ********** End ScriptStruct FAndroidXRLightEstimator ********************************************

// ********** Begin ScriptStruct FAndroidXRCubemapEstimator ****************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRLightEstimation_Source_AndroidXRLightEstimation_Public_AndroidXRLightEstimationTypes_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAndroidXRCubemapEstimator_Statics; \
	ANDROIDXRLIGHTESTIMATION_API static class UScriptStruct* StaticStruct();


struct FAndroidXRCubemapEstimator;
// ********** End ScriptStruct FAndroidXRCubemapEstimator ******************************************

// ********** Begin ScriptStruct FAndroidXRDirectionalLightData ************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRLightEstimation_Source_AndroidXRLightEstimation_Public_AndroidXRLightEstimationTypes_h_98_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAndroidXRDirectionalLightData_Statics; \
	ANDROIDXRLIGHTESTIMATION_API static class UScriptStruct* StaticStruct();


struct FAndroidXRDirectionalLightData;
// ********** End ScriptStruct FAndroidXRDirectionalLightData **************************************

// ********** Begin ScriptStruct FAndroidXRAmbientLightData ****************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRLightEstimation_Source_AndroidXRLightEstimation_Public_AndroidXRLightEstimationTypes_h_119_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAndroidXRAmbientLightData_Statics; \
	ANDROIDXRLIGHTESTIMATION_API static class UScriptStruct* StaticStruct();


struct FAndroidXRAmbientLightData;
// ********** End ScriptStruct FAndroidXRAmbientLightData ******************************************

// ********** Begin ScriptStruct FAndroidXRSphericalHarmonics **************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRLightEstimation_Source_AndroidXRLightEstimation_Public_AndroidXRLightEstimationTypes_h_140_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonics_Statics; \
	ANDROIDXRLIGHTESTIMATION_API static class UScriptStruct* StaticStruct();


struct FAndroidXRSphericalHarmonics;
// ********** End ScriptStruct FAndroidXRSphericalHarmonics ****************************************

// ********** Begin ScriptStruct FAndroidXRSphericalHarmonicsData **********************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRLightEstimation_Source_AndroidXRLightEstimation_Public_AndroidXRLightEstimationTypes_h_158_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonicsData_Statics; \
	ANDROIDXRLIGHTESTIMATION_API static class UScriptStruct* StaticStruct();


struct FAndroidXRSphericalHarmonicsData;
// ********** End ScriptStruct FAndroidXRSphericalHarmonicsData ************************************

// ********** Begin ScriptStruct FAndroidXRCubemapConfiguration ************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRLightEstimation_Source_AndroidXRLightEstimation_Public_AndroidXRLightEstimationTypes_h_179_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAndroidXRCubemapConfiguration_Statics; \
	ANDROIDXRLIGHTESTIMATION_API static class UScriptStruct* StaticStruct();


struct FAndroidXRCubemapConfiguration;
// ********** End ScriptStruct FAndroidXRCubemapConfiguration **************************************

// ********** Begin ScriptStruct FAndroidXRCubemapLightData ****************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRLightEstimation_Source_AndroidXRLightEstimation_Public_AndroidXRLightEstimationTypes_h_200_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics; \
	ANDROIDXRLIGHTESTIMATION_API static class UScriptStruct* StaticStruct();


struct FAndroidXRCubemapLightData;
// ********** End ScriptStruct FAndroidXRCubemapLightData ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRLightEstimation_Source_AndroidXRLightEstimation_Public_AndroidXRLightEstimationTypes_h

// ********** Begin Enum EAndroidXRLightEstimationState ********************************************
#define FOREACH_ENUM_EANDROIDXRLIGHTESTIMATIONSTATE(op) \
	op(EAndroidXRLightEstimationState::Valid) \
	op(EAndroidXRLightEstimationState::Invalid) 

enum class EAndroidXRLightEstimationState : uint8;
template<> struct TIsUEnumClass<EAndroidXRLightEstimationState> { enum { Value = true }; };
template<> ANDROIDXRLIGHTESTIMATION_API UEnum* StaticEnum<EAndroidXRLightEstimationState>();
// ********** End Enum EAndroidXRLightEstimationState **********************************************

// ********** Begin Enum EAndroidXRSphericalHarmonicsKind ******************************************
#define FOREACH_ENUM_EANDROIDXRSPHERICALHARMONICSKIND(op) \
	op(EAndroidXRSphericalHarmonicsKind::Total) \
	op(EAndroidXRSphericalHarmonicsKind::Ambient) 

enum class EAndroidXRSphericalHarmonicsKind : uint8;
template<> struct TIsUEnumClass<EAndroidXRSphericalHarmonicsKind> { enum { Value = true }; };
template<> ANDROIDXRLIGHTESTIMATION_API UEnum* StaticEnum<EAndroidXRSphericalHarmonicsKind>();
// ********** End Enum EAndroidXRSphericalHarmonicsKind ********************************************

// ********** Begin Enum EAndroidXRCubemapColorFormat **********************************************
#define FOREACH_ENUM_EANDROIDXRCUBEMAPCOLORFORMAT(op) \
	op(EAndroidXRCubemapColorFormat::R32G32B32) \
	op(EAndroidXRCubemapColorFormat::R32G32B32A32) \
	op(EAndroidXRCubemapColorFormat::R16G16B16A16) 

enum class EAndroidXRCubemapColorFormat : uint8;
template<> struct TIsUEnumClass<EAndroidXRCubemapColorFormat> { enum { Value = true }; };
template<> ANDROIDXRLIGHTESTIMATION_API UEnum* StaticEnum<EAndroidXRCubemapColorFormat>();
// ********** End Enum EAndroidXRCubemapColorFormat ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
