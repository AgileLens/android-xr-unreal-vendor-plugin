// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRSpatialPlaneTrackingTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRSpatialPlaneTrackingTypes() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXRSPATIALPLANETRACKING_API UEnum* Z_Construct_UEnum_AndroidXRSpatialPlaneTracking_ESpatialPlaneAlignment();
ANDROIDXRSPATIALPLANETRACKING_API UEnum* Z_Construct_UEnum_AndroidXRSpatialPlaneTracking_ESpatialPlaneSemanticLabel();
UPackage* Z_Construct_UPackage__Script_AndroidXRSpatialPlaneTracking();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESpatialPlaneAlignment ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpatialPlaneAlignment;
static UEnum* ESpatialPlaneAlignment_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESpatialPlaneAlignment.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESpatialPlaneAlignment.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXRSpatialPlaneTracking_ESpatialPlaneAlignment, (UObject*)Z_Construct_UPackage__Script_AndroidXRSpatialPlaneTracking(), TEXT("ESpatialPlaneAlignment"));
	}
	return Z_Registration_Info_UEnum_ESpatialPlaneAlignment.OuterSingleton;
}
template<> ANDROIDXRSPATIALPLANETRACKING_API UEnum* StaticEnum<ESpatialPlaneAlignment>()
{
	return ESpatialPlaneAlignment_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXRSpatialPlaneTracking_ESpatialPlaneAlignment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Arbitrary.Name", "ESpatialPlaneAlignment::Arbitrary" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* The alignment of a spatial plane\n*/" },
#endif
		{ "HorizontalDownward.Name", "ESpatialPlaneAlignment::HorizontalDownward" },
		{ "HorizontalUpward.Name", "ESpatialPlaneAlignment::HorizontalUpward" },
		{ "ModuleRelativePath", "Public/AndroidXRSpatialPlaneTrackingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The alignment of a spatial plane" },
#endif
		{ "Vertical.Name", "ESpatialPlaneAlignment::Vertical" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESpatialPlaneAlignment::HorizontalUpward", (int64)ESpatialPlaneAlignment::HorizontalUpward },
		{ "ESpatialPlaneAlignment::HorizontalDownward", (int64)ESpatialPlaneAlignment::HorizontalDownward },
		{ "ESpatialPlaneAlignment::Vertical", (int64)ESpatialPlaneAlignment::Vertical },
		{ "ESpatialPlaneAlignment::Arbitrary", (int64)ESpatialPlaneAlignment::Arbitrary },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXRSpatialPlaneTracking_ESpatialPlaneAlignment_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXRSpatialPlaneTracking,
	nullptr,
	"ESpatialPlaneAlignment",
	"ESpatialPlaneAlignment",
	Z_Construct_UEnum_AndroidXRSpatialPlaneTracking_ESpatialPlaneAlignment_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXRSpatialPlaneTracking_ESpatialPlaneAlignment_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXRSpatialPlaneTracking_ESpatialPlaneAlignment_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXRSpatialPlaneTracking_ESpatialPlaneAlignment_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXRSpatialPlaneTracking_ESpatialPlaneAlignment()
{
	if (!Z_Registration_Info_UEnum_ESpatialPlaneAlignment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpatialPlaneAlignment.InnerSingleton, Z_Construct_UEnum_AndroidXRSpatialPlaneTracking_ESpatialPlaneAlignment_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESpatialPlaneAlignment.InnerSingleton;
}
// ********** End Enum ESpatialPlaneAlignment ******************************************************

// ********** Begin Enum ESpatialPlaneSemanticLabel ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpatialPlaneSemanticLabel;
static UEnum* ESpatialPlaneSemanticLabel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESpatialPlaneSemanticLabel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESpatialPlaneSemanticLabel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXRSpatialPlaneTracking_ESpatialPlaneSemanticLabel, (UObject*)Z_Construct_UPackage__Script_AndroidXRSpatialPlaneTracking(), TEXT("ESpatialPlaneSemanticLabel"));
	}
	return Z_Registration_Info_UEnum_ESpatialPlaneSemanticLabel.OuterSingleton;
}
template<> ANDROIDXRSPATIALPLANETRACKING_API UEnum* StaticEnum<ESpatialPlaneSemanticLabel>()
{
	return ESpatialPlaneSemanticLabel_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXRSpatialPlaneTracking_ESpatialPlaneSemanticLabel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Ceiling.Name", "ESpatialPlaneSemanticLabel::Ceiling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* The semantic label of a spatial plane\n*/" },
#endif
		{ "Floor.Name", "ESpatialPlaneSemanticLabel::Floor" },
		{ "ModuleRelativePath", "Public/AndroidXRSpatialPlaneTrackingTypes.h" },
		{ "Table.Name", "ESpatialPlaneSemanticLabel::Table" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The semantic label of a spatial plane" },
#endif
		{ "Uncategorized.Name", "ESpatialPlaneSemanticLabel::Uncategorized" },
		{ "Wall.Name", "ESpatialPlaneSemanticLabel::Wall" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESpatialPlaneSemanticLabel::Uncategorized", (int64)ESpatialPlaneSemanticLabel::Uncategorized },
		{ "ESpatialPlaneSemanticLabel::Floor", (int64)ESpatialPlaneSemanticLabel::Floor },
		{ "ESpatialPlaneSemanticLabel::Wall", (int64)ESpatialPlaneSemanticLabel::Wall },
		{ "ESpatialPlaneSemanticLabel::Ceiling", (int64)ESpatialPlaneSemanticLabel::Ceiling },
		{ "ESpatialPlaneSemanticLabel::Table", (int64)ESpatialPlaneSemanticLabel::Table },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXRSpatialPlaneTracking_ESpatialPlaneSemanticLabel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXRSpatialPlaneTracking,
	nullptr,
	"ESpatialPlaneSemanticLabel",
	"ESpatialPlaneSemanticLabel",
	Z_Construct_UEnum_AndroidXRSpatialPlaneTracking_ESpatialPlaneSemanticLabel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXRSpatialPlaneTracking_ESpatialPlaneSemanticLabel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXRSpatialPlaneTracking_ESpatialPlaneSemanticLabel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXRSpatialPlaneTracking_ESpatialPlaneSemanticLabel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXRSpatialPlaneTracking_ESpatialPlaneSemanticLabel()
{
	if (!Z_Registration_Info_UEnum_ESpatialPlaneSemanticLabel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpatialPlaneSemanticLabel.InnerSingleton, Z_Construct_UEnum_AndroidXRSpatialPlaneTracking_ESpatialPlaneSemanticLabel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESpatialPlaneSemanticLabel.InnerSingleton;
}
// ********** End Enum ESpatialPlaneSemanticLabel **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialPlaneTracking_Source_AndroidXRSpatialPlaneTracking_Public_AndroidXRSpatialPlaneTrackingTypes_h__Script_AndroidXRSpatialPlaneTracking_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESpatialPlaneAlignment_StaticEnum, TEXT("ESpatialPlaneAlignment"), &Z_Registration_Info_UEnum_ESpatialPlaneAlignment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1416143316U) },
		{ ESpatialPlaneSemanticLabel_StaticEnum, TEXT("ESpatialPlaneSemanticLabel"), &Z_Registration_Info_UEnum_ESpatialPlaneSemanticLabel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1914260473U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialPlaneTracking_Source_AndroidXRSpatialPlaneTracking_Public_AndroidXRSpatialPlaneTrackingTypes_h__Script_AndroidXRSpatialPlaneTracking_2417971306(TEXT("/Script/AndroidXRSpatialPlaneTracking"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialPlaneTracking_Source_AndroidXRSpatialPlaneTracking_Public_AndroidXRSpatialPlaneTrackingTypes_h__Script_AndroidXRSpatialPlaneTracking_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialPlaneTracking_Source_AndroidXRSpatialPlaneTracking_Public_AndroidXRSpatialPlaneTrackingTypes_h__Script_AndroidXRSpatialPlaneTracking_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
