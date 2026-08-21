// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidXRSpatialMarkerTrackingTypes.h"

#ifdef ANDROIDXRSPATIALMARKERTRACKING_AndroidXRSpatialMarkerTrackingTypes_generated_h
#error "AndroidXRSpatialMarkerTrackingTypes.generated.h already included, missing '#pragma once' in AndroidXRSpatialMarkerTrackingTypes.h"
#endif
#define ANDROIDXRSPATIALMARKERTRACKING_AndroidXRSpatialMarkerTrackingTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAndroidXRSpatialMarkerEntity;

// ********** Begin ScriptStruct FSpatialMarkerTrackingFeature *************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialMarkerTracking_Source_AndroidXRSpatialMarkerTracking_Public_AndroidXRSpatialMarkerTrackingTypes_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature_Statics; \
	ANDROIDXRSPATIALMARKERTRACKING_API static class UScriptStruct* StaticStruct();


struct FSpatialMarkerTrackingFeature;
// ********** End ScriptStruct FSpatialMarkerTrackingFeature ***************************************

// ********** Begin ScriptStruct FSpatialMarkerTrackingConfig **************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialMarkerTracking_Source_AndroidXRSpatialMarkerTracking_Public_AndroidXRSpatialMarkerTrackingTypes_h_108_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpatialMarkerTrackingConfig_Statics; \
	ANDROIDXRSPATIALMARKERTRACKING_API static class UScriptStruct* StaticStruct();


struct FSpatialMarkerTrackingConfig;
// ********** End ScriptStruct FSpatialMarkerTrackingConfig ****************************************

// ********** Begin Delegate FSpatialMarkerChangedDelegate *****************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialMarkerTracking_Source_AndroidXRSpatialMarkerTracking_Public_AndroidXRSpatialMarkerTrackingTypes_h_135_DELEGATE \
ANDROIDXRSPATIALMARKERTRACKING_API void FSpatialMarkerChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpatialMarkerChangedDelegate, UAndroidXRSpatialMarkerEntity* Marker);


// ********** End Delegate FSpatialMarkerChangedDelegate *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialMarkerTracking_Source_AndroidXRSpatialMarkerTracking_Public_AndroidXRSpatialMarkerTrackingTypes_h

// ********** Begin Enum ESpatialMarkerAprilTagDict ************************************************
#define FOREACH_ENUM_ESPATIALMARKERAPRILTAGDICT(op) \
	op(ESpatialMarkerAprilTagDict::DICT_16H5_EXT) \
	op(ESpatialMarkerAprilTagDict::DICT_25H9_EXT) \
	op(ESpatialMarkerAprilTagDict::DICT_36H10_EXT) \
	op(ESpatialMarkerAprilTagDict::DICT_36H11_EXT) 

enum class ESpatialMarkerAprilTagDict : uint8;
template<> struct TIsUEnumClass<ESpatialMarkerAprilTagDict> { enum { Value = true }; };
template<> ANDROIDXRSPATIALMARKERTRACKING_API UEnum* StaticEnum<ESpatialMarkerAprilTagDict>();
// ********** End Enum ESpatialMarkerAprilTagDict **************************************************

// ********** Begin Enum ESpatialMarkerArucoDict ***************************************************
#define FOREACH_ENUM_ESPATIALMARKERARUCODICT(op) \
	op(ESpatialMarkerArucoDict::DICT_4X4_50_EXT) \
	op(ESpatialMarkerArucoDict::DICT_4X4_100_EXT) \
	op(ESpatialMarkerArucoDict::DICT_4X4_250_EXT) \
	op(ESpatialMarkerArucoDict::DICT_4X4_1000_EXT) \
	op(ESpatialMarkerArucoDict::DICT_5X5_50_EXT) \
	op(ESpatialMarkerArucoDict::DICT_5X5_100_EXT) \
	op(ESpatialMarkerArucoDict::DICT_5X5_250_EXT) \
	op(ESpatialMarkerArucoDict::DICT_5X5_1000_EXT) \
	op(ESpatialMarkerArucoDict::DICT_6X6_50_EXT) \
	op(ESpatialMarkerArucoDict::DICT_6X6_100_EXT) \
	op(ESpatialMarkerArucoDict::DICT_6X6_250_EXT) \
	op(ESpatialMarkerArucoDict::DICT_6X6_1000_EXT) \
	op(ESpatialMarkerArucoDict::DICT_7X7_50_EXT) \
	op(ESpatialMarkerArucoDict::DICT_7X7_100_EXT) \
	op(ESpatialMarkerArucoDict::DICT_7X7_250_EXT) \
	op(ESpatialMarkerArucoDict::DICT_7X7_1000_EXT) 

enum class ESpatialMarkerArucoDict : uint8;
template<> struct TIsUEnumClass<ESpatialMarkerArucoDict> { enum { Value = true }; };
template<> ANDROIDXRSPATIALMARKERTRACKING_API UEnum* StaticEnum<ESpatialMarkerArucoDict>();
// ********** End Enum ESpatialMarkerArucoDict *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
