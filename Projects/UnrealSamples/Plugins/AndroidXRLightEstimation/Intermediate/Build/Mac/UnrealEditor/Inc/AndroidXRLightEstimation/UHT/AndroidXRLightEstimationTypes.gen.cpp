// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRLightEstimationTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRLightEstimationTypes() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXRLIGHTESTIMATION_API UEnum* Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRCubemapColorFormat();
ANDROIDXRLIGHTESTIMATION_API UEnum* Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRLightEstimationState();
ANDROIDXRLIGHTESTIMATION_API UEnum* Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRSphericalHarmonicsKind();
ANDROIDXRLIGHTESTIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRAmbientLightData();
ANDROIDXRLIGHTESTIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRCubemapConfiguration();
ANDROIDXRLIGHTESTIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRCubemapEstimator();
ANDROIDXRLIGHTESTIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRCubemapLightData();
ANDROIDXRLIGHTESTIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRDirectionalLightData();
ANDROIDXRLIGHTESTIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRLightEstimator();
ANDROIDXRLIGHTESTIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonics();
ANDROIDXRLIGHTESTIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonicsData();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_AndroidXRLightEstimation();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EAndroidXRLightEstimationState ********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAndroidXRLightEstimationState;
static UEnum* EAndroidXRLightEstimationState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRLightEstimationState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAndroidXRLightEstimationState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRLightEstimationState, (UObject*)Z_Construct_UPackage__Script_AndroidXRLightEstimation(), TEXT("EAndroidXRLightEstimationState"));
	}
	return Z_Registration_Info_UEnum_EAndroidXRLightEstimationState.OuterSingleton;
}
template<> ANDROIDXRLIGHTESTIMATION_API UEnum* StaticEnum<EAndroidXRLightEstimationState>()
{
	return EAndroidXRLightEstimationState_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRLightEstimationState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The state of a light estimate data\n */" },
#endif
		{ "Invalid.Comment", "//The light estimate data is invalid\n" },
		{ "Invalid.Name", "EAndroidXRLightEstimationState::Invalid" },
		{ "Invalid.ToolTip", "The light estimate data is invalid" },
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The state of a light estimate data" },
#endif
		{ "Valid.Comment", "//The light estimate data is valid\n" },
		{ "Valid.Name", "EAndroidXRLightEstimationState::Valid" },
		{ "Valid.ToolTip", "The light estimate data is valid" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAndroidXRLightEstimationState::Valid", (int64)EAndroidXRLightEstimationState::Valid },
		{ "EAndroidXRLightEstimationState::Invalid", (int64)EAndroidXRLightEstimationState::Invalid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRLightEstimationState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXRLightEstimation,
	nullptr,
	"EAndroidXRLightEstimationState",
	"EAndroidXRLightEstimationState",
	Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRLightEstimationState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRLightEstimationState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRLightEstimationState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRLightEstimationState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRLightEstimationState()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRLightEstimationState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAndroidXRLightEstimationState.InnerSingleton, Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRLightEstimationState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAndroidXRLightEstimationState.InnerSingleton;
}
// ********** End Enum EAndroidXRLightEstimationState **********************************************

// ********** Begin Enum EAndroidXRSphericalHarmonicsKind ******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAndroidXRSphericalHarmonicsKind;
static UEnum* EAndroidXRSphericalHarmonicsKind_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRSphericalHarmonicsKind.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAndroidXRSphericalHarmonicsKind.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRSphericalHarmonicsKind, (UObject*)Z_Construct_UPackage__Script_AndroidXRLightEstimation(), TEXT("EAndroidXRSphericalHarmonicsKind"));
	}
	return Z_Registration_Info_UEnum_EAndroidXRSphericalHarmonicsKind.OuterSingleton;
}
template<> ANDROIDXRLIGHTESTIMATION_API UEnum* StaticEnum<EAndroidXRSphericalHarmonicsKind>()
{
	return EAndroidXRSphericalHarmonicsKind_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRSphericalHarmonicsKind_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Ambient.Comment", "//The spherical harmonic coefficients represent the environment light radiance function, excluding the contribution from the main light.\n" },
		{ "Ambient.Name", "EAndroidXRSphericalHarmonicsKind::Ambient" },
		{ "Ambient.ToolTip", "The spherical harmonic coefficients represent the environment light radiance function, excluding the contribution from the main light." },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* The kind of spherical harmonics\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The kind of spherical harmonics" },
#endif
		{ "Total.Comment", "//The spherical harmonic coefficients represent the environment light radiance function, including the contribution from the main light.\n" },
		{ "Total.Name", "EAndroidXRSphericalHarmonicsKind::Total" },
		{ "Total.ToolTip", "The spherical harmonic coefficients represent the environment light radiance function, including the contribution from the main light." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAndroidXRSphericalHarmonicsKind::Total", (int64)EAndroidXRSphericalHarmonicsKind::Total },
		{ "EAndroidXRSphericalHarmonicsKind::Ambient", (int64)EAndroidXRSphericalHarmonicsKind::Ambient },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRSphericalHarmonicsKind_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXRLightEstimation,
	nullptr,
	"EAndroidXRSphericalHarmonicsKind",
	"EAndroidXRSphericalHarmonicsKind",
	Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRSphericalHarmonicsKind_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRSphericalHarmonicsKind_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRSphericalHarmonicsKind_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRSphericalHarmonicsKind_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRSphericalHarmonicsKind()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRSphericalHarmonicsKind.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAndroidXRSphericalHarmonicsKind.InnerSingleton, Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRSphericalHarmonicsKind_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAndroidXRSphericalHarmonicsKind.InnerSingleton;
}
// ********** End Enum EAndroidXRSphericalHarmonicsKind ********************************************

// ********** Begin Enum EAndroidXRCubemapColorFormat **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAndroidXRCubemapColorFormat;
static UEnum* EAndroidXRCubemapColorFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRCubemapColorFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAndroidXRCubemapColorFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRCubemapColorFormat, (UObject*)Z_Construct_UPackage__Script_AndroidXRLightEstimation(), TEXT("EAndroidXRCubemapColorFormat"));
	}
	return Z_Registration_Info_UEnum_EAndroidXRCubemapColorFormat.OuterSingleton;
}
template<> ANDROIDXRLIGHTESTIMATION_API UEnum* StaticEnum<EAndroidXRCubemapColorFormat>()
{
	return EAndroidXRCubemapColorFormat_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRCubemapColorFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* The color format of the cubemap light estimate data\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
		{ "R16G16B16A16.Comment", "//Four usigned 16 bit ints for R,G,B, and A channels.\n" },
		{ "R16G16B16A16.Name", "EAndroidXRCubemapColorFormat::R16G16B16A16" },
		{ "R16G16B16A16.ToolTip", "Four usigned 16 bit ints for R,G,B, and A channels." },
		{ "R32G32B32.Comment", "//Three 32 bit floats for each channel of R,G, and B.\n" },
		{ "R32G32B32.Name", "EAndroidXRCubemapColorFormat::R32G32B32" },
		{ "R32G32B32.ToolTip", "Three 32 bit floats for each channel of R,G, and B." },
		{ "R32G32B32A32.Comment", "//Four 32 bit floats for R,G,B, and A channels.\n" },
		{ "R32G32B32A32.Name", "EAndroidXRCubemapColorFormat::R32G32B32A32" },
		{ "R32G32B32A32.ToolTip", "Four 32 bit floats for R,G,B, and A channels." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The color format of the cubemap light estimate data" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAndroidXRCubemapColorFormat::R32G32B32", (int64)EAndroidXRCubemapColorFormat::R32G32B32 },
		{ "EAndroidXRCubemapColorFormat::R32G32B32A32", (int64)EAndroidXRCubemapColorFormat::R32G32B32A32 },
		{ "EAndroidXRCubemapColorFormat::R16G16B16A16", (int64)EAndroidXRCubemapColorFormat::R16G16B16A16 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRCubemapColorFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXRLightEstimation,
	nullptr,
	"EAndroidXRCubemapColorFormat",
	"EAndroidXRCubemapColorFormat",
	Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRCubemapColorFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRCubemapColorFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRCubemapColorFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRCubemapColorFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRCubemapColorFormat()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRCubemapColorFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAndroidXRCubemapColorFormat.InnerSingleton, Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRCubemapColorFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAndroidXRCubemapColorFormat.InnerSingleton;
}
// ********** End Enum EAndroidXRCubemapColorFormat ************************************************

// ********** Begin ScriptStruct FAndroidXRLightEstimator ******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAndroidXRLightEstimator;
class UScriptStruct* FAndroidXRLightEstimator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRLightEstimator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAndroidXRLightEstimator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidXRLightEstimator, (UObject*)Z_Construct_UPackage__Script_AndroidXRLightEstimation(), TEXT("AndroidXRLightEstimator"));
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRLightEstimator.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAndroidXRLightEstimator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* An AndroidXR light estimator\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An AndroidXR light estimator" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidXRLightEstimator>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidXRLightEstimator_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRLightEstimation,
	nullptr,
	&NewStructOps,
	"AndroidXRLightEstimator",
	nullptr,
	0,
	sizeof(FAndroidXRLightEstimator),
	alignof(FAndroidXRLightEstimator),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRLightEstimator_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAndroidXRLightEstimator_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRLightEstimator()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRLightEstimator.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAndroidXRLightEstimator.InnerSingleton, Z_Construct_UScriptStruct_FAndroidXRLightEstimator_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRLightEstimator.InnerSingleton;
}
// ********** End ScriptStruct FAndroidXRLightEstimator ********************************************

// ********** Begin ScriptStruct FAndroidXRCubemapEstimator ****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAndroidXRCubemapEstimator;
class UScriptStruct* FAndroidXRCubemapEstimator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRCubemapEstimator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAndroidXRCubemapEstimator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidXRCubemapEstimator, (UObject*)Z_Construct_UPackage__Script_AndroidXRLightEstimation(), TEXT("AndroidXRCubemapEstimator"));
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRCubemapEstimator.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAndroidXRCubemapEstimator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* An AndroidXR cubemap light estimator\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An AndroidXR cubemap light estimator" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightEstimator_MetaData[] = {
		{ "Category", "AndroidXRCubemapEstimator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The light estimator that this cubemap estimator is associated with.\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The light estimator that this cubemap estimator is associated with." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CubemapResolution_MetaData[] = {
		{ "Category", "AndroidXRCubemapEstimator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The resolution of the cubemap for this estimator.\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The resolution of the cubemap for this estimator." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorFormat_MetaData[] = {
		{ "Category", "AndroidXRCubemapEstimator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The color format of the cubemap for this estimator.\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The color format of the cubemap for this estimator." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightEstimator;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CubemapResolution;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorFormat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidXRCubemapEstimator>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRCubemapEstimator_Statics::NewProp_LightEstimator = { "LightEstimator", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRCubemapEstimator, LightEstimator), Z_Construct_UScriptStruct_FAndroidXRLightEstimator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightEstimator_MetaData), NewProp_LightEstimator_MetaData) }; // 1363992603
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAndroidXRCubemapEstimator_Statics::NewProp_CubemapResolution = { "CubemapResolution", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRCubemapEstimator, CubemapResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CubemapResolution_MetaData), NewProp_CubemapResolution_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAndroidXRCubemapEstimator_Statics::NewProp_ColorFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAndroidXRCubemapEstimator_Statics::NewProp_ColorFormat = { "ColorFormat", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRCubemapEstimator, ColorFormat), Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRCubemapColorFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorFormat_MetaData), NewProp_ColorFormat_MetaData) }; // 3843244669
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAndroidXRCubemapEstimator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRCubemapEstimator_Statics::NewProp_LightEstimator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRCubemapEstimator_Statics::NewProp_CubemapResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRCubemapEstimator_Statics::NewProp_ColorFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRCubemapEstimator_Statics::NewProp_ColorFormat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRCubemapEstimator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidXRCubemapEstimator_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRLightEstimation,
	nullptr,
	&NewStructOps,
	"AndroidXRCubemapEstimator",
	Z_Construct_UScriptStruct_FAndroidXRCubemapEstimator_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRCubemapEstimator_Statics::PropPointers),
	sizeof(FAndroidXRCubemapEstimator),
	alignof(FAndroidXRCubemapEstimator),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRCubemapEstimator_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAndroidXRCubemapEstimator_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRCubemapEstimator()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRCubemapEstimator.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAndroidXRCubemapEstimator.InnerSingleton, Z_Construct_UScriptStruct_FAndroidXRCubemapEstimator_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRCubemapEstimator.InnerSingleton;
}
// ********** End ScriptStruct FAndroidXRCubemapEstimator ******************************************

// ********** Begin ScriptStruct FAndroidXRDirectionalLightData ************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAndroidXRDirectionalLightData;
class UScriptStruct* FAndroidXRDirectionalLightData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRDirectionalLightData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAndroidXRDirectionalLightData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidXRDirectionalLightData, (UObject*)Z_Construct_UPackage__Script_AndroidXRLightEstimation(), TEXT("AndroidXRDirectionalLightData"));
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRDirectionalLightData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAndroidXRDirectionalLightData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* The directional light estimate data\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The directional light estimate data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "Category", "AndroidXRDirectionalLightData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The state of the directional light data\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The state of the directional light data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "AndroidXRDirectionalLightData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The directional light color\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The directional light color" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "AndroidXRDirectionalLightData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The direction of the light\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The direction of the light" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidXRDirectionalLightData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAndroidXRDirectionalLightData_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAndroidXRDirectionalLightData_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRDirectionalLightData, State), Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRLightEstimationState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 2389254531
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRDirectionalLightData_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRDirectionalLightData, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRDirectionalLightData_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRDirectionalLightData, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAndroidXRDirectionalLightData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRDirectionalLightData_Statics::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRDirectionalLightData_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRDirectionalLightData_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRDirectionalLightData_Statics::NewProp_Direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRDirectionalLightData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidXRDirectionalLightData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRLightEstimation,
	nullptr,
	&NewStructOps,
	"AndroidXRDirectionalLightData",
	Z_Construct_UScriptStruct_FAndroidXRDirectionalLightData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRDirectionalLightData_Statics::PropPointers),
	sizeof(FAndroidXRDirectionalLightData),
	alignof(FAndroidXRDirectionalLightData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRDirectionalLightData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAndroidXRDirectionalLightData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRDirectionalLightData()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRDirectionalLightData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAndroidXRDirectionalLightData.InnerSingleton, Z_Construct_UScriptStruct_FAndroidXRDirectionalLightData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRDirectionalLightData.InnerSingleton;
}
// ********** End ScriptStruct FAndroidXRDirectionalLightData **************************************

// ********** Begin ScriptStruct FAndroidXRAmbientLightData ****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAndroidXRAmbientLightData;
class UScriptStruct* FAndroidXRAmbientLightData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRAmbientLightData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAndroidXRAmbientLightData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidXRAmbientLightData, (UObject*)Z_Construct_UPackage__Script_AndroidXRLightEstimation(), TEXT("AndroidXRAmbientLightData"));
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRAmbientLightData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAndroidXRAmbientLightData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* The ambient light estimate data\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ambient light estimate data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "Category", "AndroidXRAmbientLightData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The state of the ambient light estimate\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The state of the ambient light estimate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "AndroidXRAmbientLightData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The color of the ambient light\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The color of the ambient light" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorCorrection_MetaData[] = {
		{ "Category", "AndroidXRAmbientLightData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The color correction for the ambient light\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The color correction for the ambient light" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorCorrection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidXRAmbientLightData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAndroidXRAmbientLightData_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAndroidXRAmbientLightData_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRAmbientLightData, State), Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRLightEstimationState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 2389254531
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRAmbientLightData_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRAmbientLightData, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRAmbientLightData_Statics::NewProp_ColorCorrection = { "ColorCorrection", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRAmbientLightData, ColorCorrection), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorCorrection_MetaData), NewProp_ColorCorrection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAndroidXRAmbientLightData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRAmbientLightData_Statics::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRAmbientLightData_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRAmbientLightData_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRAmbientLightData_Statics::NewProp_ColorCorrection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRAmbientLightData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidXRAmbientLightData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRLightEstimation,
	nullptr,
	&NewStructOps,
	"AndroidXRAmbientLightData",
	Z_Construct_UScriptStruct_FAndroidXRAmbientLightData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRAmbientLightData_Statics::PropPointers),
	sizeof(FAndroidXRAmbientLightData),
	alignof(FAndroidXRAmbientLightData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRAmbientLightData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAndroidXRAmbientLightData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRAmbientLightData()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRAmbientLightData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAndroidXRAmbientLightData.InnerSingleton, Z_Construct_UScriptStruct_FAndroidXRAmbientLightData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRAmbientLightData.InnerSingleton;
}
// ********** End ScriptStruct FAndroidXRAmbientLightData ******************************************

// ********** Begin ScriptStruct FAndroidXRSphericalHarmonics **************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAndroidXRSphericalHarmonics;
class UScriptStruct* FAndroidXRSphericalHarmonics::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRSphericalHarmonics.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAndroidXRSphericalHarmonics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonics, (UObject*)Z_Construct_UPackage__Script_AndroidXRLightEstimation(), TEXT("AndroidXRSphericalHarmonics"));
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRSphericalHarmonics.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* The spherical harmonics container for each channel\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The spherical harmonics container for each channel" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_R_MetaData[] = {
		{ "Category", "AndroidXRSphericalHarmonics" },
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_G_MetaData[] = {
		{ "Category", "AndroidXRSphericalHarmonics" },
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Category", "AndroidXRSphericalHarmonics" },
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_R_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_R;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_G_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_G;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_B_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidXRSphericalHarmonics>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonics_Statics::NewProp_R_Inner = { "R", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonics_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRSphericalHarmonics, R), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_R_MetaData), NewProp_R_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonics_Statics::NewProp_G_Inner = { "G", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonics_Statics::NewProp_G = { "G", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRSphericalHarmonics, G), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_G_MetaData), NewProp_G_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonics_Statics::NewProp_B_Inner = { "B", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonics_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRSphericalHarmonics, B), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonics_Statics::NewProp_R_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonics_Statics::NewProp_R,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonics_Statics::NewProp_G_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonics_Statics::NewProp_G,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonics_Statics::NewProp_B_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonics_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonics_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRLightEstimation,
	nullptr,
	&NewStructOps,
	"AndroidXRSphericalHarmonics",
	Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonics_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonics_Statics::PropPointers),
	sizeof(FAndroidXRSphericalHarmonics),
	alignof(FAndroidXRSphericalHarmonics),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonics_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonics_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonics()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRSphericalHarmonics.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAndroidXRSphericalHarmonics.InnerSingleton, Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonics_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRSphericalHarmonics.InnerSingleton;
}
// ********** End ScriptStruct FAndroidXRSphericalHarmonics ****************************************

// ********** Begin ScriptStruct FAndroidXRSphericalHarmonicsData **********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAndroidXRSphericalHarmonicsData;
class UScriptStruct* FAndroidXRSphericalHarmonicsData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRSphericalHarmonicsData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAndroidXRSphericalHarmonicsData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonicsData, (UObject*)Z_Construct_UPackage__Script_AndroidXRLightEstimation(), TEXT("AndroidXRSphericalHarmonicsData"));
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRSphericalHarmonicsData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonicsData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* The spherical harmonics light estimate data\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The spherical harmonics light estimate data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "Category", "AndroidXRSphericalHarmonicsData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The state of the spherical harmonics light estimate data\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The state of the spherical harmonics light estimate data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HarmonicsKind_MetaData[] = {
		{ "Category", "AndroidXRSphericalHarmonicsData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The kind of spherical harmonic\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The kind of spherical harmonic" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Harmonics_MetaData[] = {
		{ "Category", "AndroidXRSphericalHarmonicsData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The spherical harmonics data\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The spherical harmonics data" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HarmonicsKind_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HarmonicsKind;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Harmonics;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidXRSphericalHarmonicsData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonicsData_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonicsData_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRSphericalHarmonicsData, State), Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRLightEstimationState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 2389254531
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonicsData_Statics::NewProp_HarmonicsKind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonicsData_Statics::NewProp_HarmonicsKind = { "HarmonicsKind", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRSphericalHarmonicsData, HarmonicsKind), Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRSphericalHarmonicsKind, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HarmonicsKind_MetaData), NewProp_HarmonicsKind_MetaData) }; // 1716993722
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonicsData_Statics::NewProp_Harmonics = { "Harmonics", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRSphericalHarmonicsData, Harmonics), Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonics, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Harmonics_MetaData), NewProp_Harmonics_MetaData) }; // 2152231243
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonicsData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonicsData_Statics::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonicsData_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonicsData_Statics::NewProp_HarmonicsKind_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonicsData_Statics::NewProp_HarmonicsKind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonicsData_Statics::NewProp_Harmonics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonicsData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonicsData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRLightEstimation,
	nullptr,
	&NewStructOps,
	"AndroidXRSphericalHarmonicsData",
	Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonicsData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonicsData_Statics::PropPointers),
	sizeof(FAndroidXRSphericalHarmonicsData),
	alignof(FAndroidXRSphericalHarmonicsData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonicsData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonicsData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonicsData()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRSphericalHarmonicsData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAndroidXRSphericalHarmonicsData.InnerSingleton, Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonicsData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRSphericalHarmonicsData.InnerSingleton;
}
// ********** End ScriptStruct FAndroidXRSphericalHarmonicsData ************************************

// ********** Begin ScriptStruct FAndroidXRCubemapConfiguration ************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAndroidXRCubemapConfiguration;
class UScriptStruct* FAndroidXRCubemapConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRCubemapConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAndroidXRCubemapConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidXRCubemapConfiguration, (UObject*)Z_Construct_UPackage__Script_AndroidXRLightEstimation(), TEXT("AndroidXRCubemapConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRCubemapConfiguration.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAndroidXRCubemapConfiguration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* The cubemap configuration to create an estimator\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The cubemap configuration to create an estimator" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[] = {
		{ "Category", "AndroidXRCubemapConfiguration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The resolution of the cubemap to create\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The resolution of the cubemap to create" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorFormat_MetaData[] = {
		{ "Category", "AndroidXRCubemapConfiguration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The format for the cubemap to create\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The format for the cubemap to create" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldReproject_MetaData[] = {
		{ "Category", "AndroidXRCubemapConfiguration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Whether to reproject the cubemap data\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to reproject the cubemap data" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Resolution;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorFormat;
	static void NewProp_bShouldReproject_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldReproject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidXRCubemapConfiguration>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAndroidXRCubemapConfiguration_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRCubemapConfiguration, Resolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resolution_MetaData), NewProp_Resolution_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAndroidXRCubemapConfiguration_Statics::NewProp_ColorFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAndroidXRCubemapConfiguration_Statics::NewProp_ColorFormat = { "ColorFormat", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRCubemapConfiguration, ColorFormat), Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRCubemapColorFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorFormat_MetaData), NewProp_ColorFormat_MetaData) }; // 3843244669
void Z_Construct_UScriptStruct_FAndroidXRCubemapConfiguration_Statics::NewProp_bShouldReproject_SetBit(void* Obj)
{
	((FAndroidXRCubemapConfiguration*)Obj)->bShouldReproject = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAndroidXRCubemapConfiguration_Statics::NewProp_bShouldReproject = { "bShouldReproject", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAndroidXRCubemapConfiguration), &Z_Construct_UScriptStruct_FAndroidXRCubemapConfiguration_Statics::NewProp_bShouldReproject_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldReproject_MetaData), NewProp_bShouldReproject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAndroidXRCubemapConfiguration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRCubemapConfiguration_Statics::NewProp_Resolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRCubemapConfiguration_Statics::NewProp_ColorFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRCubemapConfiguration_Statics::NewProp_ColorFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRCubemapConfiguration_Statics::NewProp_bShouldReproject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRCubemapConfiguration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidXRCubemapConfiguration_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRLightEstimation,
	nullptr,
	&NewStructOps,
	"AndroidXRCubemapConfiguration",
	Z_Construct_UScriptStruct_FAndroidXRCubemapConfiguration_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRCubemapConfiguration_Statics::PropPointers),
	sizeof(FAndroidXRCubemapConfiguration),
	alignof(FAndroidXRCubemapConfiguration),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRCubemapConfiguration_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAndroidXRCubemapConfiguration_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRCubemapConfiguration()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRCubemapConfiguration.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAndroidXRCubemapConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FAndroidXRCubemapConfiguration_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRCubemapConfiguration.InnerSingleton;
}
// ********** End ScriptStruct FAndroidXRCubemapConfiguration **************************************

// ********** Begin ScriptStruct FAndroidXRCubemapLightData ****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAndroidXRCubemapLightData;
class UScriptStruct* FAndroidXRCubemapLightData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRCubemapLightData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAndroidXRCubemapLightData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidXRCubemapLightData, (UObject*)Z_Construct_UPackage__Script_AndroidXRLightEstimation(), TEXT("AndroidXRCubemapLightData"));
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRCubemapLightData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* The cubemap light estimate data\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The cubemap light estimate data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CubemapFormat_MetaData[] = {
		{ "Category", "AndroidXRCubemapLightData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The format of the cubemap light estimate data\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The format of the cubemap light estimate data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CubemapResolution_MetaData[] = {
		{ "Category", "AndroidXRCubemapLightData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The resolution of the cubemap light estimate data\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The resolution of the cubemap light estimate data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "Category", "AndroidXRCubemapLightData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The state of the cubemap light estimate data\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The state of the cubemap light estimate data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageRight_MetaData[] = {
		{ "Category", "AndroidXRCubemapLightData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The right face image data\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The right face image data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageLeft_MetaData[] = {
		{ "Category", "AndroidXRCubemapLightData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The left face image data\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The left face image data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageTop_MetaData[] = {
		{ "Category", "AndroidXRCubemapLightData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The top face image data\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The top face image data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageBottom_MetaData[] = {
		{ "Category", "AndroidXRCubemapLightData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The bottom face image data\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The bottom face image data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageFront_MetaData[] = {
		{ "Category", "AndroidXRCubemapLightData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The front face image data\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The front face image data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageBack_MetaData[] = {
		{ "Category", "AndroidXRCubemapLightData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The back face image data\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The back face image data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "AndroidXRCubemapLightData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The rotation of the cubemap\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The rotation of the cubemap" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterExposureTime_MetaData[] = {
		{ "Category", "AndroidXRCubemapLightData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The exposure time of the cubemap\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The exposure time of the cubemap" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CubemapFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CubemapFormat;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CubemapResolution;
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImageRight_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ImageRight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImageLeft_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ImageLeft;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImageTop_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ImageTop;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImageBottom_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ImageBottom;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImageFront_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ImageFront;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImageBack_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ImageBack;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CenterExposureTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidXRCubemapLightData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_CubemapFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_CubemapFormat = { "CubemapFormat", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRCubemapLightData, CubemapFormat), Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRCubemapColorFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CubemapFormat_MetaData), NewProp_CubemapFormat_MetaData) }; // 3843244669
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_CubemapResolution = { "CubemapResolution", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRCubemapLightData, CubemapResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CubemapResolution_MetaData), NewProp_CubemapResolution_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRCubemapLightData, State), Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRLightEstimationState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 2389254531
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_ImageRight_Inner = { "ImageRight", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_ImageRight = { "ImageRight", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRCubemapLightData, ImageRight), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageRight_MetaData), NewProp_ImageRight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_ImageLeft_Inner = { "ImageLeft", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_ImageLeft = { "ImageLeft", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRCubemapLightData, ImageLeft), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageLeft_MetaData), NewProp_ImageLeft_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_ImageTop_Inner = { "ImageTop", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_ImageTop = { "ImageTop", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRCubemapLightData, ImageTop), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageTop_MetaData), NewProp_ImageTop_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_ImageBottom_Inner = { "ImageBottom", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_ImageBottom = { "ImageBottom", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRCubemapLightData, ImageBottom), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageBottom_MetaData), NewProp_ImageBottom_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_ImageFront_Inner = { "ImageFront", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_ImageFront = { "ImageFront", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRCubemapLightData, ImageFront), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageFront_MetaData), NewProp_ImageFront_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_ImageBack_Inner = { "ImageBack", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_ImageBack = { "ImageBack", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRCubemapLightData, ImageBack), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageBack_MetaData), NewProp_ImageBack_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRCubemapLightData, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_CenterExposureTime = { "CenterExposureTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRCubemapLightData, CenterExposureTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterExposureTime_MetaData), NewProp_CenterExposureTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_CubemapFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_CubemapFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_CubemapResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_ImageRight_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_ImageRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_ImageLeft_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_ImageLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_ImageTop_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_ImageTop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_ImageBottom_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_ImageBottom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_ImageFront_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_ImageFront,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_ImageBack_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_ImageBack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewProp_CenterExposureTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRLightEstimation,
	nullptr,
	&NewStructOps,
	"AndroidXRCubemapLightData",
	Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::PropPointers),
	sizeof(FAndroidXRCubemapLightData),
	alignof(FAndroidXRCubemapLightData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRCubemapLightData()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRCubemapLightData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAndroidXRCubemapLightData.InnerSingleton, Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRCubemapLightData.InnerSingleton;
}
// ********** End ScriptStruct FAndroidXRCubemapLightData ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRLightEstimation_Source_AndroidXRLightEstimation_Public_AndroidXRLightEstimationTypes_h__Script_AndroidXRLightEstimation_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAndroidXRLightEstimationState_StaticEnum, TEXT("EAndroidXRLightEstimationState"), &Z_Registration_Info_UEnum_EAndroidXRLightEstimationState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2389254531U) },
		{ EAndroidXRSphericalHarmonicsKind_StaticEnum, TEXT("EAndroidXRSphericalHarmonicsKind"), &Z_Registration_Info_UEnum_EAndroidXRSphericalHarmonicsKind, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1716993722U) },
		{ EAndroidXRCubemapColorFormat_StaticEnum, TEXT("EAndroidXRCubemapColorFormat"), &Z_Registration_Info_UEnum_EAndroidXRCubemapColorFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3843244669U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAndroidXRLightEstimator::StaticStruct, Z_Construct_UScriptStruct_FAndroidXRLightEstimator_Statics::NewStructOps, TEXT("AndroidXRLightEstimator"), &Z_Registration_Info_UScriptStruct_FAndroidXRLightEstimator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAndroidXRLightEstimator), 1363992603U) },
		{ FAndroidXRCubemapEstimator::StaticStruct, Z_Construct_UScriptStruct_FAndroidXRCubemapEstimator_Statics::NewStructOps, TEXT("AndroidXRCubemapEstimator"), &Z_Registration_Info_UScriptStruct_FAndroidXRCubemapEstimator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAndroidXRCubemapEstimator), 2373206697U) },
		{ FAndroidXRDirectionalLightData::StaticStruct, Z_Construct_UScriptStruct_FAndroidXRDirectionalLightData_Statics::NewStructOps, TEXT("AndroidXRDirectionalLightData"), &Z_Registration_Info_UScriptStruct_FAndroidXRDirectionalLightData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAndroidXRDirectionalLightData), 3104148600U) },
		{ FAndroidXRAmbientLightData::StaticStruct, Z_Construct_UScriptStruct_FAndroidXRAmbientLightData_Statics::NewStructOps, TEXT("AndroidXRAmbientLightData"), &Z_Registration_Info_UScriptStruct_FAndroidXRAmbientLightData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAndroidXRAmbientLightData), 3987791818U) },
		{ FAndroidXRSphericalHarmonics::StaticStruct, Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonics_Statics::NewStructOps, TEXT("AndroidXRSphericalHarmonics"), &Z_Registration_Info_UScriptStruct_FAndroidXRSphericalHarmonics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAndroidXRSphericalHarmonics), 2152231243U) },
		{ FAndroidXRSphericalHarmonicsData::StaticStruct, Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonicsData_Statics::NewStructOps, TEXT("AndroidXRSphericalHarmonicsData"), &Z_Registration_Info_UScriptStruct_FAndroidXRSphericalHarmonicsData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAndroidXRSphericalHarmonicsData), 2306582982U) },
		{ FAndroidXRCubemapConfiguration::StaticStruct, Z_Construct_UScriptStruct_FAndroidXRCubemapConfiguration_Statics::NewStructOps, TEXT("AndroidXRCubemapConfiguration"), &Z_Registration_Info_UScriptStruct_FAndroidXRCubemapConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAndroidXRCubemapConfiguration), 141033606U) },
		{ FAndroidXRCubemapLightData::StaticStruct, Z_Construct_UScriptStruct_FAndroidXRCubemapLightData_Statics::NewStructOps, TEXT("AndroidXRCubemapLightData"), &Z_Registration_Info_UScriptStruct_FAndroidXRCubemapLightData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAndroidXRCubemapLightData), 3965879968U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRLightEstimation_Source_AndroidXRLightEstimation_Public_AndroidXRLightEstimationTypes_h__Script_AndroidXRLightEstimation_4292294283(TEXT("/Script/AndroidXRLightEstimation"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRLightEstimation_Source_AndroidXRLightEstimation_Public_AndroidXRLightEstimationTypes_h__Script_AndroidXRLightEstimation_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRLightEstimation_Source_AndroidXRLightEstimation_Public_AndroidXRLightEstimationTypes_h__Script_AndroidXRLightEstimation_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRLightEstimation_Source_AndroidXRLightEstimation_Public_AndroidXRLightEstimationTypes_h__Script_AndroidXRLightEstimation_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRLightEstimation_Source_AndroidXRLightEstimation_Public_AndroidXRLightEstimationTypes_h__Script_AndroidXRLightEstimation_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
