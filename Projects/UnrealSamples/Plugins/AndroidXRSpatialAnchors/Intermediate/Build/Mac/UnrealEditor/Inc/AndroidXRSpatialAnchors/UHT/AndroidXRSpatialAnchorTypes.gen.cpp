// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRSpatialAnchorTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRSpatialAnchorTypes() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXRSPATIALANCHORS_API UEnum* Z_Construct_UEnum_AndroidXRSpatialAnchors_ESpatialAnchorPeristenceResult();
ANDROIDXRSPATIALANCHORS_API UEnum* Z_Construct_UEnum_AndroidXRSpatialAnchors_ESpatialAnchorPersistState();
UPackage* Z_Construct_UPackage__Script_AndroidXRSpatialAnchors();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESpatialAnchorPersistState ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpatialAnchorPersistState;
static UEnum* ESpatialAnchorPersistState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESpatialAnchorPersistState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESpatialAnchorPersistState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXRSpatialAnchors_ESpatialAnchorPersistState, (UObject*)Z_Construct_UPackage__Script_AndroidXRSpatialAnchors(), TEXT("ESpatialAnchorPersistState"));
	}
	return Z_Registration_Info_UEnum_ESpatialAnchorPersistState.OuterSingleton;
}
template<> ANDROIDXRSPATIALANCHORS_API UEnum* StaticEnum<ESpatialAnchorPersistState>()
{
	return ESpatialAnchorPersistState_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXRSpatialAnchors_ESpatialAnchorPersistState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* The persistence state of an anchor\n*/" },
#endif
		{ "Loaded.Comment", "//The anchor was loaded successfully\n" },
		{ "Loaded.Name", "ESpatialAnchorPersistState::Loaded" },
		{ "Loaded.ToolTip", "The anchor was loaded successfully" },
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorTypes.h" },
		{ "NotFound.Comment", "//The anchor could not be found\n" },
		{ "NotFound.Name", "ESpatialAnchorPersistState::NotFound" },
		{ "NotFound.ToolTip", "The anchor could not be found" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The persistence state of an anchor" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESpatialAnchorPersistState::Loaded", (int64)ESpatialAnchorPersistState::Loaded },
		{ "ESpatialAnchorPersistState::NotFound", (int64)ESpatialAnchorPersistState::NotFound },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXRSpatialAnchors_ESpatialAnchorPersistState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXRSpatialAnchors,
	nullptr,
	"ESpatialAnchorPersistState",
	"ESpatialAnchorPersistState",
	Z_Construct_UEnum_AndroidXRSpatialAnchors_ESpatialAnchorPersistState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXRSpatialAnchors_ESpatialAnchorPersistState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXRSpatialAnchors_ESpatialAnchorPersistState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXRSpatialAnchors_ESpatialAnchorPersistState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXRSpatialAnchors_ESpatialAnchorPersistState()
{
	if (!Z_Registration_Info_UEnum_ESpatialAnchorPersistState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpatialAnchorPersistState.InnerSingleton, Z_Construct_UEnum_AndroidXRSpatialAnchors_ESpatialAnchorPersistState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESpatialAnchorPersistState.InnerSingleton;
}
// ********** End Enum ESpatialAnchorPersistState **************************************************

// ********** Begin Enum ESpatialAnchorPeristenceResult ********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpatialAnchorPeristenceResult;
static UEnum* ESpatialAnchorPeristenceResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESpatialAnchorPeristenceResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESpatialAnchorPeristenceResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXRSpatialAnchors_ESpatialAnchorPeristenceResult, (UObject*)Z_Construct_UPackage__Script_AndroidXRSpatialAnchors(), TEXT("ESpatialAnchorPeristenceResult"));
	}
	return Z_Registration_Info_UEnum_ESpatialAnchorPeristenceResult.OuterSingleton;
}
template<> ANDROIDXRSPATIALANCHORS_API UEnum* StaticEnum<ESpatialAnchorPeristenceResult>()
{
	return ESpatialAnchorPeristenceResult_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXRSpatialAnchors_ESpatialAnchorPeristenceResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* The spatial anchor persistence operation result\n*/" },
#endif
		{ "EntityNotTracking.Comment", "//The underlying entity was not being tracked\n" },
		{ "EntityNotTracking.Name", "ESpatialAnchorPeristenceResult::EntityNotTracking" },
		{ "EntityNotTracking.ToolTip", "The underlying entity was not being tracked" },
		{ "InvalidEntity.Comment", "//The entity cannot execute the persistence operation\n" },
		{ "InvalidEntity.Name", "ESpatialAnchorPeristenceResult::InvalidEntity" },
		{ "InvalidEntity.ToolTip", "The entity cannot execute the persistence operation" },
		{ "InvalidPersistenceContext.Comment", "//The persistence context is invalid\n" },
		{ "InvalidPersistenceContext.Name", "ESpatialAnchorPeristenceResult::InvalidPersistenceContext" },
		{ "InvalidPersistenceContext.ToolTip", "The persistence context is invalid" },
		{ "InvalidSpatialContext.Comment", "//The spatial context is invalid\n" },
		{ "InvalidSpatialContext.Name", "ESpatialAnchorPeristenceResult::InvalidSpatialContext" },
		{ "InvalidSpatialContext.ToolTip", "The spatial context is invalid" },
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorTypes.h" },
		{ "PersistedIdNotFound.Comment", "//The persisted id was not found\n" },
		{ "PersistedIdNotFound.Name", "ESpatialAnchorPeristenceResult::PersistedIdNotFound" },
		{ "PersistedIdNotFound.ToolTip", "The persisted id was not found" },
		{ "PersistenceUnsupported.Comment", "//Persistence operations are not supported\n" },
		{ "PersistenceUnsupported.Name", "ESpatialAnchorPeristenceResult::PersistenceUnsupported" },
		{ "PersistenceUnsupported.ToolTip", "Persistence operations are not supported" },
		{ "Success.Comment", "//The operation was successful\n" },
		{ "Success.Name", "ESpatialAnchorPeristenceResult::Success" },
		{ "Success.ToolTip", "The operation was successful" },
		{ "TimedOut.Comment", "//The persist/unpersist request timed out\n" },
		{ "TimedOut.Name", "ESpatialAnchorPeristenceResult::TimedOut" },
		{ "TimedOut.ToolTip", "The persist/unpersist request timed out" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The spatial anchor persistence operation result" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESpatialAnchorPeristenceResult::Success", (int64)ESpatialAnchorPeristenceResult::Success },
		{ "ESpatialAnchorPeristenceResult::PersistedIdNotFound", (int64)ESpatialAnchorPeristenceResult::PersistedIdNotFound },
		{ "ESpatialAnchorPeristenceResult::EntityNotTracking", (int64)ESpatialAnchorPeristenceResult::EntityNotTracking },
		{ "ESpatialAnchorPeristenceResult::TimedOut", (int64)ESpatialAnchorPeristenceResult::TimedOut },
		{ "ESpatialAnchorPeristenceResult::PersistenceUnsupported", (int64)ESpatialAnchorPeristenceResult::PersistenceUnsupported },
		{ "ESpatialAnchorPeristenceResult::InvalidPersistenceContext", (int64)ESpatialAnchorPeristenceResult::InvalidPersistenceContext },
		{ "ESpatialAnchorPeristenceResult::InvalidSpatialContext", (int64)ESpatialAnchorPeristenceResult::InvalidSpatialContext },
		{ "ESpatialAnchorPeristenceResult::InvalidEntity", (int64)ESpatialAnchorPeristenceResult::InvalidEntity },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXRSpatialAnchors_ESpatialAnchorPeristenceResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXRSpatialAnchors,
	nullptr,
	"ESpatialAnchorPeristenceResult",
	"ESpatialAnchorPeristenceResult",
	Z_Construct_UEnum_AndroidXRSpatialAnchors_ESpatialAnchorPeristenceResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXRSpatialAnchors_ESpatialAnchorPeristenceResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXRSpatialAnchors_ESpatialAnchorPeristenceResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXRSpatialAnchors_ESpatialAnchorPeristenceResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXRSpatialAnchors_ESpatialAnchorPeristenceResult()
{
	if (!Z_Registration_Info_UEnum_ESpatialAnchorPeristenceResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpatialAnchorPeristenceResult.InnerSingleton, Z_Construct_UEnum_AndroidXRSpatialAnchors_ESpatialAnchorPeristenceResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESpatialAnchorPeristenceResult.InnerSingleton;
}
// ********** End Enum ESpatialAnchorPeristenceResult **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorTypes_h__Script_AndroidXRSpatialAnchors_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESpatialAnchorPersistState_StaticEnum, TEXT("ESpatialAnchorPersistState"), &Z_Registration_Info_UEnum_ESpatialAnchorPersistState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3704104938U) },
		{ ESpatialAnchorPeristenceResult_StaticEnum, TEXT("ESpatialAnchorPeristenceResult"), &Z_Registration_Info_UEnum_ESpatialAnchorPeristenceResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2812280769U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorTypes_h__Script_AndroidXRSpatialAnchors_2022446094(TEXT("/Script/AndroidXRSpatialAnchors"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorTypes_h__Script_AndroidXRSpatialAnchors_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorTypes_h__Script_AndroidXRSpatialAnchors_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
