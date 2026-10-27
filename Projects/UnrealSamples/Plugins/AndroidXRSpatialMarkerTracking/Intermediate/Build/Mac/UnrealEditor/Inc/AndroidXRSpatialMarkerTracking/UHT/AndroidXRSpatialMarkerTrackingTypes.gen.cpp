// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRSpatialMarkerTrackingTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRSpatialMarkerTrackingTypes() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXRSPATIALMARKERTRACKING_API UClass* Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_NoRegister();
ANDROIDXRSPATIALMARKERTRACKING_API UEnum* Z_Construct_UEnum_AndroidXRSpatialMarkerTracking_ESpatialMarkerAprilTagDict();
ANDROIDXRSPATIALMARKERTRACKING_API UEnum* Z_Construct_UEnum_AndroidXRSpatialMarkerTracking_ESpatialMarkerArucoDict();
ANDROIDXRSPATIALMARKERTRACKING_API UFunction* Z_Construct_UDelegateFunction_AndroidXRSpatialMarkerTracking_SpatialMarkerChangedDelegate__DelegateSignature();
ANDROIDXRSPATIALMARKERTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FSpatialMarkerTrackingConfig();
ANDROIDXRSPATIALMARKERTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature();
UPackage* Z_Construct_UPackage__Script_AndroidXRSpatialMarkerTracking();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESpatialMarkerAprilTagDict ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpatialMarkerAprilTagDict;
static UEnum* ESpatialMarkerAprilTagDict_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESpatialMarkerAprilTagDict.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESpatialMarkerAprilTagDict.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXRSpatialMarkerTracking_ESpatialMarkerAprilTagDict, (UObject*)Z_Construct_UPackage__Script_AndroidXRSpatialMarkerTracking(), TEXT("ESpatialMarkerAprilTagDict"));
	}
	return Z_Registration_Info_UEnum_ESpatialMarkerAprilTagDict.OuterSingleton;
}
template<> ANDROIDXRSPATIALMARKERTRACKING_API UEnum* StaticEnum<ESpatialMarkerAprilTagDict>()
{
	return ESpatialMarkerAprilTagDict_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXRSpatialMarkerTracking_ESpatialMarkerAprilTagDict_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* The types of April tag dicts\n*/" },
#endif
		{ "DICT_16H5_EXT.Name", "ESpatialMarkerAprilTagDict::DICT_16H5_EXT" },
		{ "DICT_25H9_EXT.Name", "ESpatialMarkerAprilTagDict::DICT_25H9_EXT" },
		{ "DICT_36H10_EXT.Name", "ESpatialMarkerAprilTagDict::DICT_36H10_EXT" },
		{ "DICT_36H11_EXT.Name", "ESpatialMarkerAprilTagDict::DICT_36H11_EXT" },
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkerTrackingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The types of April tag dicts" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESpatialMarkerAprilTagDict::DICT_16H5_EXT", (int64)ESpatialMarkerAprilTagDict::DICT_16H5_EXT },
		{ "ESpatialMarkerAprilTagDict::DICT_25H9_EXT", (int64)ESpatialMarkerAprilTagDict::DICT_25H9_EXT },
		{ "ESpatialMarkerAprilTagDict::DICT_36H10_EXT", (int64)ESpatialMarkerAprilTagDict::DICT_36H10_EXT },
		{ "ESpatialMarkerAprilTagDict::DICT_36H11_EXT", (int64)ESpatialMarkerAprilTagDict::DICT_36H11_EXT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXRSpatialMarkerTracking_ESpatialMarkerAprilTagDict_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXRSpatialMarkerTracking,
	nullptr,
	"ESpatialMarkerAprilTagDict",
	"ESpatialMarkerAprilTagDict",
	Z_Construct_UEnum_AndroidXRSpatialMarkerTracking_ESpatialMarkerAprilTagDict_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXRSpatialMarkerTracking_ESpatialMarkerAprilTagDict_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXRSpatialMarkerTracking_ESpatialMarkerAprilTagDict_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXRSpatialMarkerTracking_ESpatialMarkerAprilTagDict_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXRSpatialMarkerTracking_ESpatialMarkerAprilTagDict()
{
	if (!Z_Registration_Info_UEnum_ESpatialMarkerAprilTagDict.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpatialMarkerAprilTagDict.InnerSingleton, Z_Construct_UEnum_AndroidXRSpatialMarkerTracking_ESpatialMarkerAprilTagDict_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESpatialMarkerAprilTagDict.InnerSingleton;
}
// ********** End Enum ESpatialMarkerAprilTagDict **************************************************

// ********** Begin Enum ESpatialMarkerArucoDict ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpatialMarkerArucoDict;
static UEnum* ESpatialMarkerArucoDict_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESpatialMarkerArucoDict.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESpatialMarkerArucoDict.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXRSpatialMarkerTracking_ESpatialMarkerArucoDict, (UObject*)Z_Construct_UPackage__Script_AndroidXRSpatialMarkerTracking(), TEXT("ESpatialMarkerArucoDict"));
	}
	return Z_Registration_Info_UEnum_ESpatialMarkerArucoDict.OuterSingleton;
}
template<> ANDROIDXRSPATIALMARKERTRACKING_API UEnum* StaticEnum<ESpatialMarkerArucoDict>()
{
	return ESpatialMarkerArucoDict_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXRSpatialMarkerTracking_ESpatialMarkerArucoDict_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* The types of Aruco marker dicts\n*/" },
#endif
		{ "DICT_4X4_1000_EXT.Name", "ESpatialMarkerArucoDict::DICT_4X4_1000_EXT" },
		{ "DICT_4X4_100_EXT.Name", "ESpatialMarkerArucoDict::DICT_4X4_100_EXT" },
		{ "DICT_4X4_250_EXT.Name", "ESpatialMarkerArucoDict::DICT_4X4_250_EXT" },
		{ "DICT_4X4_50_EXT.Name", "ESpatialMarkerArucoDict::DICT_4X4_50_EXT" },
		{ "DICT_5X5_1000_EXT.Name", "ESpatialMarkerArucoDict::DICT_5X5_1000_EXT" },
		{ "DICT_5X5_100_EXT.Name", "ESpatialMarkerArucoDict::DICT_5X5_100_EXT" },
		{ "DICT_5X5_250_EXT.Name", "ESpatialMarkerArucoDict::DICT_5X5_250_EXT" },
		{ "DICT_5X5_50_EXT.Name", "ESpatialMarkerArucoDict::DICT_5X5_50_EXT" },
		{ "DICT_6X6_1000_EXT.Name", "ESpatialMarkerArucoDict::DICT_6X6_1000_EXT" },
		{ "DICT_6X6_100_EXT.Name", "ESpatialMarkerArucoDict::DICT_6X6_100_EXT" },
		{ "DICT_6X6_250_EXT.Name", "ESpatialMarkerArucoDict::DICT_6X6_250_EXT" },
		{ "DICT_6X6_50_EXT.Name", "ESpatialMarkerArucoDict::DICT_6X6_50_EXT" },
		{ "DICT_7X7_1000_EXT.Name", "ESpatialMarkerArucoDict::DICT_7X7_1000_EXT" },
		{ "DICT_7X7_100_EXT.Name", "ESpatialMarkerArucoDict::DICT_7X7_100_EXT" },
		{ "DICT_7X7_250_EXT.Name", "ESpatialMarkerArucoDict::DICT_7X7_250_EXT" },
		{ "DICT_7X7_50_EXT.Name", "ESpatialMarkerArucoDict::DICT_7X7_50_EXT" },
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkerTrackingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The types of Aruco marker dicts" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESpatialMarkerArucoDict::DICT_4X4_50_EXT", (int64)ESpatialMarkerArucoDict::DICT_4X4_50_EXT },
		{ "ESpatialMarkerArucoDict::DICT_4X4_100_EXT", (int64)ESpatialMarkerArucoDict::DICT_4X4_100_EXT },
		{ "ESpatialMarkerArucoDict::DICT_4X4_250_EXT", (int64)ESpatialMarkerArucoDict::DICT_4X4_250_EXT },
		{ "ESpatialMarkerArucoDict::DICT_4X4_1000_EXT", (int64)ESpatialMarkerArucoDict::DICT_4X4_1000_EXT },
		{ "ESpatialMarkerArucoDict::DICT_5X5_50_EXT", (int64)ESpatialMarkerArucoDict::DICT_5X5_50_EXT },
		{ "ESpatialMarkerArucoDict::DICT_5X5_100_EXT", (int64)ESpatialMarkerArucoDict::DICT_5X5_100_EXT },
		{ "ESpatialMarkerArucoDict::DICT_5X5_250_EXT", (int64)ESpatialMarkerArucoDict::DICT_5X5_250_EXT },
		{ "ESpatialMarkerArucoDict::DICT_5X5_1000_EXT", (int64)ESpatialMarkerArucoDict::DICT_5X5_1000_EXT },
		{ "ESpatialMarkerArucoDict::DICT_6X6_50_EXT", (int64)ESpatialMarkerArucoDict::DICT_6X6_50_EXT },
		{ "ESpatialMarkerArucoDict::DICT_6X6_100_EXT", (int64)ESpatialMarkerArucoDict::DICT_6X6_100_EXT },
		{ "ESpatialMarkerArucoDict::DICT_6X6_250_EXT", (int64)ESpatialMarkerArucoDict::DICT_6X6_250_EXT },
		{ "ESpatialMarkerArucoDict::DICT_6X6_1000_EXT", (int64)ESpatialMarkerArucoDict::DICT_6X6_1000_EXT },
		{ "ESpatialMarkerArucoDict::DICT_7X7_50_EXT", (int64)ESpatialMarkerArucoDict::DICT_7X7_50_EXT },
		{ "ESpatialMarkerArucoDict::DICT_7X7_100_EXT", (int64)ESpatialMarkerArucoDict::DICT_7X7_100_EXT },
		{ "ESpatialMarkerArucoDict::DICT_7X7_250_EXT", (int64)ESpatialMarkerArucoDict::DICT_7X7_250_EXT },
		{ "ESpatialMarkerArucoDict::DICT_7X7_1000_EXT", (int64)ESpatialMarkerArucoDict::DICT_7X7_1000_EXT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXRSpatialMarkerTracking_ESpatialMarkerArucoDict_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXRSpatialMarkerTracking,
	nullptr,
	"ESpatialMarkerArucoDict",
	"ESpatialMarkerArucoDict",
	Z_Construct_UEnum_AndroidXRSpatialMarkerTracking_ESpatialMarkerArucoDict_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXRSpatialMarkerTracking_ESpatialMarkerArucoDict_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXRSpatialMarkerTracking_ESpatialMarkerArucoDict_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXRSpatialMarkerTracking_ESpatialMarkerArucoDict_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXRSpatialMarkerTracking_ESpatialMarkerArucoDict()
{
	if (!Z_Registration_Info_UEnum_ESpatialMarkerArucoDict.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpatialMarkerArucoDict.InnerSingleton, Z_Construct_UEnum_AndroidXRSpatialMarkerTracking_ESpatialMarkerArucoDict_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESpatialMarkerArucoDict.InnerSingleton;
}
// ********** End Enum ESpatialMarkerArucoDict *****************************************************

// ********** Begin ScriptStruct FSpatialMarkerTrackingFeature *************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSpatialMarkerTrackingFeature;
class UScriptStruct* FSpatialMarkerTrackingFeature::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSpatialMarkerTrackingFeature.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSpatialMarkerTrackingFeature.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature, (UObject*)Z_Construct_UPackage__Script_AndroidXRSpatialMarkerTracking(), TEXT("SpatialMarkerTrackingFeature"));
	}
	return Z_Registration_Info_UScriptStruct_FSpatialMarkerTrackingFeature.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* The configuration settings for a specific marker type\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkerTrackingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The configuration settings for a specific marker type" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMarkerType_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Marker Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Whether to enable this marker type\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkerTrackingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to enable this marker type" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOptimizeForStaticMarker_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Marker Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Whether to optimize for static markerszs\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkerTrackingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to optimize for static markerszs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOptimizeForMarkerSize_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Marker Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Whether to optimize for a marker size\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkerTrackingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to optimize for a marker size" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerSideLength_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Marker Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The marker length to optimize for\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkerTrackingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The marker length to optimize for" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArucoDict_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Marker Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The Aruco dict to look for\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkerTrackingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Aruco dict to look for" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AprilTagDict_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Marker Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The April tag dict to look for\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkerTrackingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The April tag dict to look for" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnableMarkerType_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMarkerType;
	static void NewProp_bOptimizeForStaticMarker_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptimizeForStaticMarker;
	static void NewProp_bOptimizeForMarkerSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptimizeForMarkerSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MarkerSideLength;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ArucoDict_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ArucoDict;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AprilTagDict_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AprilTagDict;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpatialMarkerTrackingFeature>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature_Statics::NewProp_bEnableMarkerType_SetBit(void* Obj)
{
	((FSpatialMarkerTrackingFeature*)Obj)->bEnableMarkerType = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature_Statics::NewProp_bEnableMarkerType = { "bEnableMarkerType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpatialMarkerTrackingFeature), &Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature_Statics::NewProp_bEnableMarkerType_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableMarkerType_MetaData), NewProp_bEnableMarkerType_MetaData) };
void Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature_Statics::NewProp_bOptimizeForStaticMarker_SetBit(void* Obj)
{
	((FSpatialMarkerTrackingFeature*)Obj)->bOptimizeForStaticMarker = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature_Statics::NewProp_bOptimizeForStaticMarker = { "bOptimizeForStaticMarker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpatialMarkerTrackingFeature), &Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature_Statics::NewProp_bOptimizeForStaticMarker_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOptimizeForStaticMarker_MetaData), NewProp_bOptimizeForStaticMarker_MetaData) };
void Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature_Statics::NewProp_bOptimizeForMarkerSize_SetBit(void* Obj)
{
	((FSpatialMarkerTrackingFeature*)Obj)->bOptimizeForMarkerSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature_Statics::NewProp_bOptimizeForMarkerSize = { "bOptimizeForMarkerSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpatialMarkerTrackingFeature), &Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature_Statics::NewProp_bOptimizeForMarkerSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOptimizeForMarkerSize_MetaData), NewProp_bOptimizeForMarkerSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature_Statics::NewProp_MarkerSideLength = { "MarkerSideLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpatialMarkerTrackingFeature, MarkerSideLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerSideLength_MetaData), NewProp_MarkerSideLength_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature_Statics::NewProp_ArucoDict_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature_Statics::NewProp_ArucoDict = { "ArucoDict", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpatialMarkerTrackingFeature, ArucoDict), Z_Construct_UEnum_AndroidXRSpatialMarkerTracking_ESpatialMarkerArucoDict, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArucoDict_MetaData), NewProp_ArucoDict_MetaData) }; // 679000619
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature_Statics::NewProp_AprilTagDict_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature_Statics::NewProp_AprilTagDict = { "AprilTagDict", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpatialMarkerTrackingFeature, AprilTagDict), Z_Construct_UEnum_AndroidXRSpatialMarkerTracking_ESpatialMarkerAprilTagDict, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AprilTagDict_MetaData), NewProp_AprilTagDict_MetaData) }; // 325716215
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature_Statics::NewProp_bEnableMarkerType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature_Statics::NewProp_bOptimizeForStaticMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature_Statics::NewProp_bOptimizeForMarkerSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature_Statics::NewProp_MarkerSideLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature_Statics::NewProp_ArucoDict_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature_Statics::NewProp_ArucoDict,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature_Statics::NewProp_AprilTagDict_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature_Statics::NewProp_AprilTagDict,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRSpatialMarkerTracking,
	nullptr,
	&NewStructOps,
	"SpatialMarkerTrackingFeature",
	Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature_Statics::PropPointers),
	sizeof(FSpatialMarkerTrackingFeature),
	alignof(FSpatialMarkerTrackingFeature),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature()
{
	if (!Z_Registration_Info_UScriptStruct_FSpatialMarkerTrackingFeature.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSpatialMarkerTrackingFeature.InnerSingleton, Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSpatialMarkerTrackingFeature.InnerSingleton;
}
// ********** End ScriptStruct FSpatialMarkerTrackingFeature ***************************************

// ********** Begin ScriptStruct FSpatialMarkerTrackingConfig **************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSpatialMarkerTrackingConfig;
class UScriptStruct* FSpatialMarkerTrackingConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSpatialMarkerTrackingConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSpatialMarkerTrackingConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpatialMarkerTrackingConfig, (UObject*)Z_Construct_UPackage__Script_AndroidXRSpatialMarkerTracking(), TEXT("SpatialMarkerTrackingConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FSpatialMarkerTrackingConfig.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSpatialMarkerTrackingConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* The marker tracking configuration for all the marker types\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkerTrackingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The marker tracking configuration for all the marker types" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QRCodeSettings_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Marker Tracking|QR Code" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The QR code configuration\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkerTrackingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The QR code configuration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArucoMarkerSettings_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Marker Tracking|Aruco Marker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The Aruco marker configuration\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkerTrackingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Aruco marker configuration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MicroQRCodeSettings_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Marker Tracking|Micro QR Code" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The Micro QR code configuration\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkerTrackingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Micro QR code configuration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AprilTagSettings_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Marker Tracking|April Tag" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The April tag configuration\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkerTrackingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The April tag configuration" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QRCodeSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArucoMarkerSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MicroQRCodeSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AprilTagSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpatialMarkerTrackingConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpatialMarkerTrackingConfig_Statics::NewProp_QRCodeSettings = { "QRCodeSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpatialMarkerTrackingConfig, QRCodeSettings), Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QRCodeSettings_MetaData), NewProp_QRCodeSettings_MetaData) }; // 2399271883
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpatialMarkerTrackingConfig_Statics::NewProp_ArucoMarkerSettings = { "ArucoMarkerSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpatialMarkerTrackingConfig, ArucoMarkerSettings), Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArucoMarkerSettings_MetaData), NewProp_ArucoMarkerSettings_MetaData) }; // 2399271883
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpatialMarkerTrackingConfig_Statics::NewProp_MicroQRCodeSettings = { "MicroQRCodeSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpatialMarkerTrackingConfig, MicroQRCodeSettings), Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MicroQRCodeSettings_MetaData), NewProp_MicroQRCodeSettings_MetaData) }; // 2399271883
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpatialMarkerTrackingConfig_Statics::NewProp_AprilTagSettings = { "AprilTagSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpatialMarkerTrackingConfig, AprilTagSettings), Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AprilTagSettings_MetaData), NewProp_AprilTagSettings_MetaData) }; // 2399271883
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpatialMarkerTrackingConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialMarkerTrackingConfig_Statics::NewProp_QRCodeSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialMarkerTrackingConfig_Statics::NewProp_ArucoMarkerSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialMarkerTrackingConfig_Statics::NewProp_MicroQRCodeSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialMarkerTrackingConfig_Statics::NewProp_AprilTagSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialMarkerTrackingConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpatialMarkerTrackingConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRSpatialMarkerTracking,
	nullptr,
	&NewStructOps,
	"SpatialMarkerTrackingConfig",
	Z_Construct_UScriptStruct_FSpatialMarkerTrackingConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialMarkerTrackingConfig_Statics::PropPointers),
	sizeof(FSpatialMarkerTrackingConfig),
	alignof(FSpatialMarkerTrackingConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialMarkerTrackingConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpatialMarkerTrackingConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSpatialMarkerTrackingConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FSpatialMarkerTrackingConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSpatialMarkerTrackingConfig.InnerSingleton, Z_Construct_UScriptStruct_FSpatialMarkerTrackingConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSpatialMarkerTrackingConfig.InnerSingleton;
}
// ********** End ScriptStruct FSpatialMarkerTrackingConfig ****************************************

// ********** Begin Delegate FSpatialMarkerChangedDelegate *****************************************
struct Z_Construct_UDelegateFunction_AndroidXRSpatialMarkerTracking_SpatialMarkerChangedDelegate__DelegateSignature_Statics
{
	struct _Script_AndroidXRSpatialMarkerTracking_eventSpatialMarkerChangedDelegate_Parms
	{
		UAndroidXRSpatialMarkerEntity* Marker;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkerTrackingTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Marker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AndroidXRSpatialMarkerTracking_SpatialMarkerChangedDelegate__DelegateSignature_Statics::NewProp_Marker = { "Marker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AndroidXRSpatialMarkerTracking_eventSpatialMarkerChangedDelegate_Parms, Marker), Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AndroidXRSpatialMarkerTracking_SpatialMarkerChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AndroidXRSpatialMarkerTracking_SpatialMarkerChangedDelegate__DelegateSignature_Statics::NewProp_Marker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRSpatialMarkerTracking_SpatialMarkerChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AndroidXRSpatialMarkerTracking_SpatialMarkerChangedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AndroidXRSpatialMarkerTracking, nullptr, "SpatialMarkerChangedDelegate__DelegateSignature", Z_Construct_UDelegateFunction_AndroidXRSpatialMarkerTracking_SpatialMarkerChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRSpatialMarkerTracking_SpatialMarkerChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AndroidXRSpatialMarkerTracking_SpatialMarkerChangedDelegate__DelegateSignature_Statics::_Script_AndroidXRSpatialMarkerTracking_eventSpatialMarkerChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRSpatialMarkerTracking_SpatialMarkerChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AndroidXRSpatialMarkerTracking_SpatialMarkerChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AndroidXRSpatialMarkerTracking_SpatialMarkerChangedDelegate__DelegateSignature_Statics::_Script_AndroidXRSpatialMarkerTracking_eventSpatialMarkerChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AndroidXRSpatialMarkerTracking_SpatialMarkerChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AndroidXRSpatialMarkerTracking_SpatialMarkerChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSpatialMarkerChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpatialMarkerChangedDelegate, UAndroidXRSpatialMarkerEntity* Marker)
{
	struct _Script_AndroidXRSpatialMarkerTracking_eventSpatialMarkerChangedDelegate_Parms
	{
		UAndroidXRSpatialMarkerEntity* Marker;
	};
	_Script_AndroidXRSpatialMarkerTracking_eventSpatialMarkerChangedDelegate_Parms Parms;
	Parms.Marker=Marker;
	SpatialMarkerChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSpatialMarkerChangedDelegate *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialMarkerTracking_Source_AndroidXRSpatialMarkerTracking_Public_AndroidXRSpatialMarkerTrackingTypes_h__Script_AndroidXRSpatialMarkerTracking_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESpatialMarkerAprilTagDict_StaticEnum, TEXT("ESpatialMarkerAprilTagDict"), &Z_Registration_Info_UEnum_ESpatialMarkerAprilTagDict, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 325716215U) },
		{ ESpatialMarkerArucoDict_StaticEnum, TEXT("ESpatialMarkerArucoDict"), &Z_Registration_Info_UEnum_ESpatialMarkerArucoDict, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 679000619U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSpatialMarkerTrackingFeature::StaticStruct, Z_Construct_UScriptStruct_FSpatialMarkerTrackingFeature_Statics::NewStructOps, TEXT("SpatialMarkerTrackingFeature"), &Z_Registration_Info_UScriptStruct_FSpatialMarkerTrackingFeature, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpatialMarkerTrackingFeature), 2399271883U) },
		{ FSpatialMarkerTrackingConfig::StaticStruct, Z_Construct_UScriptStruct_FSpatialMarkerTrackingConfig_Statics::NewStructOps, TEXT("SpatialMarkerTrackingConfig"), &Z_Registration_Info_UScriptStruct_FSpatialMarkerTrackingConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpatialMarkerTrackingConfig), 3845565288U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialMarkerTracking_Source_AndroidXRSpatialMarkerTracking_Public_AndroidXRSpatialMarkerTrackingTypes_h__Script_AndroidXRSpatialMarkerTracking_153212373(TEXT("/Script/AndroidXRSpatialMarkerTracking"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialMarkerTracking_Source_AndroidXRSpatialMarkerTracking_Public_AndroidXRSpatialMarkerTrackingTypes_h__Script_AndroidXRSpatialMarkerTracking_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialMarkerTracking_Source_AndroidXRSpatialMarkerTracking_Public_AndroidXRSpatialMarkerTrackingTypes_h__Script_AndroidXRSpatialMarkerTracking_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialMarkerTracking_Source_AndroidXRSpatialMarkerTracking_Public_AndroidXRSpatialMarkerTrackingTypes_h__Script_AndroidXRSpatialMarkerTracking_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialMarkerTracking_Source_AndroidXRSpatialMarkerTracking_Public_AndroidXRSpatialMarkerTrackingTypes_h__Script_AndroidXRSpatialMarkerTracking_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
