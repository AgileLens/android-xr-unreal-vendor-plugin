// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRLightEstimationBlueprintFunctionLibrary.h"
#include "AndroidXRLightEstimationTypes.h"
#include "Engine/TextureCube.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRLightEstimationBlueprintFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXRLIGHTESTIMATION_API UClass* Z_Construct_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary();
ANDROIDXRLIGHTESTIMATION_API UClass* Z_Construct_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary_NoRegister();
ANDROIDXRLIGHTESTIMATION_API UEnum* Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRCubemapColorFormat();
ANDROIDXRLIGHTESTIMATION_API UEnum* Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRSphericalHarmonicsKind();
ANDROIDXRLIGHTESTIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRAmbientLightData();
ANDROIDXRLIGHTESTIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRCubemapConfiguration();
ANDROIDXRLIGHTESTIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRCubemapEstimator();
ANDROIDXRLIGHTESTIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRCubemapLightData();
ANDROIDXRLIGHTESTIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRDirectionalLightData();
ANDROIDXRLIGHTESTIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRLightEstimator();
ANDROIDXRLIGHTESTIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonicsData();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
UPackage* Z_Construct_UPackage__Script_AndroidXRLightEstimation();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAndroidXRLightEstimationBlueprintFunctionLibrary Function ApplyLightEstimationCubemap 
struct Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_ApplyLightEstimationCubemap_Statics
{
	struct AndroidXRLightEstimationBlueprintFunctionLibrary_eventApplyLightEstimationCubemap_Parms
	{
		FAndroidXRCubemapLightData CubemapData;
		UTextureCube* TextureCube;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Light Estimation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Applies a cubemap data to a texture cube.\n    * @param[in] The cubemap data to apply.\n    * @param[in] The texture to update with the cubemap data.\n    * @return True if the underlying API call was successful.\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies a cubemap data to a texture cube.\n@param[in] The cubemap data to apply.\n@param[in] The texture to update with the cubemap data.\n@return True if the underlying API call was successful." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CubemapData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CubemapData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureCube;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_ApplyLightEstimationCubemap_Statics::NewProp_CubemapData = { "CubemapData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRLightEstimationBlueprintFunctionLibrary_eventApplyLightEstimationCubemap_Parms, CubemapData), Z_Construct_UScriptStruct_FAndroidXRCubemapLightData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CubemapData_MetaData), NewProp_CubemapData_MetaData) }; // 3965879968
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_ApplyLightEstimationCubemap_Statics::NewProp_TextureCube = { "TextureCube", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRLightEstimationBlueprintFunctionLibrary_eventApplyLightEstimationCubemap_Parms, TextureCube), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_ApplyLightEstimationCubemap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRLightEstimationBlueprintFunctionLibrary_eventApplyLightEstimationCubemap_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_ApplyLightEstimationCubemap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRLightEstimationBlueprintFunctionLibrary_eventApplyLightEstimationCubemap_Parms), &Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_ApplyLightEstimationCubemap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_ApplyLightEstimationCubemap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_ApplyLightEstimationCubemap_Statics::NewProp_CubemapData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_ApplyLightEstimationCubemap_Statics::NewProp_TextureCube,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_ApplyLightEstimationCubemap_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_ApplyLightEstimationCubemap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_ApplyLightEstimationCubemap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary, nullptr, "ApplyLightEstimationCubemap", Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_ApplyLightEstimationCubemap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_ApplyLightEstimationCubemap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_ApplyLightEstimationCubemap_Statics::AndroidXRLightEstimationBlueprintFunctionLibrary_eventApplyLightEstimationCubemap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_ApplyLightEstimationCubemap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_ApplyLightEstimationCubemap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_ApplyLightEstimationCubemap_Statics::AndroidXRLightEstimationBlueprintFunctionLibrary_eventApplyLightEstimationCubemap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_ApplyLightEstimationCubemap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_ApplyLightEstimationCubemap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRLightEstimationBlueprintFunctionLibrary::execApplyLightEstimationCubemap)
{
	P_GET_STRUCT_REF(FAndroidXRCubemapLightData,Z_Param_Out_CubemapData);
	P_GET_OBJECT(UTextureCube,Z_Param_TextureCube);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRLightEstimationBlueprintFunctionLibrary::ApplyLightEstimationCubemap(Z_Param_Out_CubemapData,Z_Param_TextureCube);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRLightEstimationBlueprintFunctionLibrary Function ApplyLightEstimationCubemap 

// ********** Begin Class UAndroidXRLightEstimationBlueprintFunctionLibrary Function CreateCubemapLightEstimator 
struct Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapLightEstimator_Statics
{
	struct AndroidXRLightEstimationBlueprintFunctionLibrary_eventCreateCubemapLightEstimator_Parms
	{
		FAndroidXRCubemapConfiguration Config;
		FAndroidXRCubemapEstimator CubemapEstimator;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Light Estimation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Creates a cubemap light estimator.\n    * @param[in] The configuration for creating the cubemap estimator.\n    * @param[out] The created cubemap light estimator.\n    * @return True if the underlying API call was successful.\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a cubemap light estimator.\n@param[in] The configuration for creating the cubemap estimator.\n@param[out] The created cubemap light estimator.\n@return True if the underlying API call was successful." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CubemapEstimator;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapLightEstimator_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRLightEstimationBlueprintFunctionLibrary_eventCreateCubemapLightEstimator_Parms, Config), Z_Construct_UScriptStruct_FAndroidXRCubemapConfiguration, METADATA_PARAMS(0, nullptr) }; // 141033606
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapLightEstimator_Statics::NewProp_CubemapEstimator = { "CubemapEstimator", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRLightEstimationBlueprintFunctionLibrary_eventCreateCubemapLightEstimator_Parms, CubemapEstimator), Z_Construct_UScriptStruct_FAndroidXRCubemapEstimator, METADATA_PARAMS(0, nullptr) }; // 2373206697
void Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapLightEstimator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRLightEstimationBlueprintFunctionLibrary_eventCreateCubemapLightEstimator_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapLightEstimator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRLightEstimationBlueprintFunctionLibrary_eventCreateCubemapLightEstimator_Parms), &Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapLightEstimator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapLightEstimator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapLightEstimator_Statics::NewProp_Config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapLightEstimator_Statics::NewProp_CubemapEstimator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapLightEstimator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapLightEstimator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapLightEstimator_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary, nullptr, "CreateCubemapLightEstimator", Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapLightEstimator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapLightEstimator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapLightEstimator_Statics::AndroidXRLightEstimationBlueprintFunctionLibrary_eventCreateCubemapLightEstimator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapLightEstimator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapLightEstimator_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapLightEstimator_Statics::AndroidXRLightEstimationBlueprintFunctionLibrary_eventCreateCubemapLightEstimator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapLightEstimator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapLightEstimator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRLightEstimationBlueprintFunctionLibrary::execCreateCubemapLightEstimator)
{
	P_GET_STRUCT_REF(FAndroidXRCubemapConfiguration,Z_Param_Out_Config);
	P_GET_STRUCT_REF(FAndroidXRCubemapEstimator,Z_Param_Out_CubemapEstimator);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRLightEstimationBlueprintFunctionLibrary::CreateCubemapLightEstimator(Z_Param_Out_Config,Z_Param_Out_CubemapEstimator);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRLightEstimationBlueprintFunctionLibrary Function CreateCubemapLightEstimator 

// ********** Begin Class UAndroidXRLightEstimationBlueprintFunctionLibrary Function CreateCubemapTextureForLightEstimation 
struct Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapTextureForLightEstimation_Statics
{
	struct AndroidXRLightEstimationBlueprintFunctionLibrary_eventCreateCubemapTextureForLightEstimation_Parms
	{
		FAndroidXRCubemapEstimator CubemapEstimator;
		UTextureCube* TextureCube;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Light Estimation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Creates a cubemap texture for a cubemap light estimator.\n    * @param[in] The cubemap estimator for which to create the cubemap texture.\n    * @param[in] The texture cube for which to create the cubemap textures.\n    * @return True if the underlying API call was successful.\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a cubemap texture for a cubemap light estimator.\n@param[in] The cubemap estimator for which to create the cubemap texture.\n@param[in] The texture cube for which to create the cubemap textures.\n@return True if the underlying API call was successful." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CubemapEstimator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CubemapEstimator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureCube;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapTextureForLightEstimation_Statics::NewProp_CubemapEstimator = { "CubemapEstimator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRLightEstimationBlueprintFunctionLibrary_eventCreateCubemapTextureForLightEstimation_Parms, CubemapEstimator), Z_Construct_UScriptStruct_FAndroidXRCubemapEstimator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CubemapEstimator_MetaData), NewProp_CubemapEstimator_MetaData) }; // 2373206697
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapTextureForLightEstimation_Statics::NewProp_TextureCube = { "TextureCube", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRLightEstimationBlueprintFunctionLibrary_eventCreateCubemapTextureForLightEstimation_Parms, TextureCube), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapTextureForLightEstimation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRLightEstimationBlueprintFunctionLibrary_eventCreateCubemapTextureForLightEstimation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapTextureForLightEstimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRLightEstimationBlueprintFunctionLibrary_eventCreateCubemapTextureForLightEstimation_Parms), &Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapTextureForLightEstimation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapTextureForLightEstimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapTextureForLightEstimation_Statics::NewProp_CubemapEstimator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapTextureForLightEstimation_Statics::NewProp_TextureCube,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapTextureForLightEstimation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapTextureForLightEstimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapTextureForLightEstimation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary, nullptr, "CreateCubemapTextureForLightEstimation", Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapTextureForLightEstimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapTextureForLightEstimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapTextureForLightEstimation_Statics::AndroidXRLightEstimationBlueprintFunctionLibrary_eventCreateCubemapTextureForLightEstimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapTextureForLightEstimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapTextureForLightEstimation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapTextureForLightEstimation_Statics::AndroidXRLightEstimationBlueprintFunctionLibrary_eventCreateCubemapTextureForLightEstimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapTextureForLightEstimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapTextureForLightEstimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRLightEstimationBlueprintFunctionLibrary::execCreateCubemapTextureForLightEstimation)
{
	P_GET_STRUCT_REF(FAndroidXRCubemapEstimator,Z_Param_Out_CubemapEstimator);
	P_GET_OBJECT_REF(UTextureCube,Z_Param_Out_TextureCube);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRLightEstimationBlueprintFunctionLibrary::CreateCubemapTextureForLightEstimation(Z_Param_Out_CubemapEstimator,P_ARG_GC_BARRIER(Z_Param_Out_TextureCube));
	P_NATIVE_END;
}
// ********** End Class UAndroidXRLightEstimationBlueprintFunctionLibrary Function CreateCubemapTextureForLightEstimation 

// ********** Begin Class UAndroidXRLightEstimationBlueprintFunctionLibrary Function CreateLightEstimator 
struct Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateLightEstimator_Statics
{
	struct AndroidXRLightEstimationBlueprintFunctionLibrary_eventCreateLightEstimator_Parms
	{
		FAndroidXRLightEstimator LightEstimator;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Light Estimation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Creates a light estimator.\n    * @param[out] The created light estimator.\n    * @return True if the underlying API call was successful.\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a light estimator.\n@param[out] The created light estimator.\n@return True if the underlying API call was successful." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightEstimator;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateLightEstimator_Statics::NewProp_LightEstimator = { "LightEstimator", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRLightEstimationBlueprintFunctionLibrary_eventCreateLightEstimator_Parms, LightEstimator), Z_Construct_UScriptStruct_FAndroidXRLightEstimator, METADATA_PARAMS(0, nullptr) }; // 1363992603
void Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateLightEstimator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRLightEstimationBlueprintFunctionLibrary_eventCreateLightEstimator_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateLightEstimator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRLightEstimationBlueprintFunctionLibrary_eventCreateLightEstimator_Parms), &Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateLightEstimator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateLightEstimator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateLightEstimator_Statics::NewProp_LightEstimator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateLightEstimator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateLightEstimator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateLightEstimator_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary, nullptr, "CreateLightEstimator", Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateLightEstimator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateLightEstimator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateLightEstimator_Statics::AndroidXRLightEstimationBlueprintFunctionLibrary_eventCreateLightEstimator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateLightEstimator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateLightEstimator_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateLightEstimator_Statics::AndroidXRLightEstimationBlueprintFunctionLibrary_eventCreateLightEstimator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateLightEstimator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateLightEstimator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRLightEstimationBlueprintFunctionLibrary::execCreateLightEstimator)
{
	P_GET_STRUCT_REF(FAndroidXRLightEstimator,Z_Param_Out_LightEstimator);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRLightEstimationBlueprintFunctionLibrary::CreateLightEstimator(Z_Param_Out_LightEstimator);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRLightEstimationBlueprintFunctionLibrary Function CreateLightEstimator 

// ********** Begin Class UAndroidXRLightEstimationBlueprintFunctionLibrary Function DestroyCubemapEstimator 
struct Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyCubemapEstimator_Statics
{
	struct AndroidXRLightEstimationBlueprintFunctionLibrary_eventDestroyCubemapEstimator_Parms
	{
		FAndroidXRCubemapEstimator CubemapEstimator;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Light Estimation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Destroys a cubemap estimator\n    * @param[in/out] The cubemap estimator to destroy.\n    * @return True if the underlying API call was successful.\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Destroys a cubemap estimator\n@param[in/out] The cubemap estimator to destroy.\n@return True if the underlying API call was successful." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CubemapEstimator;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyCubemapEstimator_Statics::NewProp_CubemapEstimator = { "CubemapEstimator", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRLightEstimationBlueprintFunctionLibrary_eventDestroyCubemapEstimator_Parms, CubemapEstimator), Z_Construct_UScriptStruct_FAndroidXRCubemapEstimator, METADATA_PARAMS(0, nullptr) }; // 2373206697
void Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyCubemapEstimator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRLightEstimationBlueprintFunctionLibrary_eventDestroyCubemapEstimator_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyCubemapEstimator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRLightEstimationBlueprintFunctionLibrary_eventDestroyCubemapEstimator_Parms), &Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyCubemapEstimator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyCubemapEstimator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyCubemapEstimator_Statics::NewProp_CubemapEstimator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyCubemapEstimator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyCubemapEstimator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyCubemapEstimator_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary, nullptr, "DestroyCubemapEstimator", Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyCubemapEstimator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyCubemapEstimator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyCubemapEstimator_Statics::AndroidXRLightEstimationBlueprintFunctionLibrary_eventDestroyCubemapEstimator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyCubemapEstimator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyCubemapEstimator_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyCubemapEstimator_Statics::AndroidXRLightEstimationBlueprintFunctionLibrary_eventDestroyCubemapEstimator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyCubemapEstimator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyCubemapEstimator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRLightEstimationBlueprintFunctionLibrary::execDestroyCubemapEstimator)
{
	P_GET_STRUCT_REF(FAndroidXRCubemapEstimator,Z_Param_Out_CubemapEstimator);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRLightEstimationBlueprintFunctionLibrary::DestroyCubemapEstimator(Z_Param_Out_CubemapEstimator);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRLightEstimationBlueprintFunctionLibrary Function DestroyCubemapEstimator 

// ********** Begin Class UAndroidXRLightEstimationBlueprintFunctionLibrary Function DestroyLightEstimator 
struct Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyLightEstimator_Statics
{
	struct AndroidXRLightEstimationBlueprintFunctionLibrary_eventDestroyLightEstimator_Parms
	{
		FAndroidXRLightEstimator LightEstimator;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Light Estimation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Destroys a light estimator.\n    * @param[in/out] The light estimator to destroy.\n    * @return True if the underlying API call was successful.\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Destroys a light estimator.\n@param[in/out] The light estimator to destroy.\n@return True if the underlying API call was successful." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightEstimator;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyLightEstimator_Statics::NewProp_LightEstimator = { "LightEstimator", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRLightEstimationBlueprintFunctionLibrary_eventDestroyLightEstimator_Parms, LightEstimator), Z_Construct_UScriptStruct_FAndroidXRLightEstimator, METADATA_PARAMS(0, nullptr) }; // 1363992603
void Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyLightEstimator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRLightEstimationBlueprintFunctionLibrary_eventDestroyLightEstimator_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyLightEstimator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRLightEstimationBlueprintFunctionLibrary_eventDestroyLightEstimator_Parms), &Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyLightEstimator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyLightEstimator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyLightEstimator_Statics::NewProp_LightEstimator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyLightEstimator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyLightEstimator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyLightEstimator_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary, nullptr, "DestroyLightEstimator", Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyLightEstimator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyLightEstimator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyLightEstimator_Statics::AndroidXRLightEstimationBlueprintFunctionLibrary_eventDestroyLightEstimator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyLightEstimator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyLightEstimator_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyLightEstimator_Statics::AndroidXRLightEstimationBlueprintFunctionLibrary_eventDestroyLightEstimator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyLightEstimator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyLightEstimator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRLightEstimationBlueprintFunctionLibrary::execDestroyLightEstimator)
{
	P_GET_STRUCT_REF(FAndroidXRLightEstimator,Z_Param_Out_LightEstimator);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRLightEstimationBlueprintFunctionLibrary::DestroyLightEstimator(Z_Param_Out_LightEstimator);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRLightEstimationBlueprintFunctionLibrary Function DestroyLightEstimator 

// ********** Begin Class UAndroidXRLightEstimationBlueprintFunctionLibrary Function EnumerateSupportedCubemapFormats 
struct Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapFormats_Statics
{
	struct AndroidXRLightEstimationBlueprintFunctionLibrary_eventEnumerateSupportedCubemapFormats_Parms
	{
		TArray<EAndroidXRCubemapColorFormat> Formats;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Light Estimation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Gets the supported cubemap formats.\n    * @param[out] The supported cubemap formats.\n    * @return True if the underlying API call was successful.\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the supported cubemap formats.\n@param[out] The supported cubemap formats.\n@return True if the underlying API call was successful." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Formats_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Formats_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Formats;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapFormats_Statics::NewProp_Formats_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapFormats_Statics::NewProp_Formats_Inner = { "Formats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRCubemapColorFormat, METADATA_PARAMS(0, nullptr) }; // 3843244669
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapFormats_Statics::NewProp_Formats = { "Formats", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRLightEstimationBlueprintFunctionLibrary_eventEnumerateSupportedCubemapFormats_Parms, Formats), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3843244669
void Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapFormats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRLightEstimationBlueprintFunctionLibrary_eventEnumerateSupportedCubemapFormats_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapFormats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRLightEstimationBlueprintFunctionLibrary_eventEnumerateSupportedCubemapFormats_Parms), &Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapFormats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapFormats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapFormats_Statics::NewProp_Formats_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapFormats_Statics::NewProp_Formats_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapFormats_Statics::NewProp_Formats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapFormats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapFormats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapFormats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary, nullptr, "EnumerateSupportedCubemapFormats", Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapFormats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapFormats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapFormats_Statics::AndroidXRLightEstimationBlueprintFunctionLibrary_eventEnumerateSupportedCubemapFormats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapFormats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapFormats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapFormats_Statics::AndroidXRLightEstimationBlueprintFunctionLibrary_eventEnumerateSupportedCubemapFormats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapFormats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapFormats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRLightEstimationBlueprintFunctionLibrary::execEnumerateSupportedCubemapFormats)
{
	P_GET_TARRAY_REF(EAndroidXRCubemapColorFormat,Z_Param_Out_Formats);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRLightEstimationBlueprintFunctionLibrary::EnumerateSupportedCubemapFormats(Z_Param_Out_Formats);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRLightEstimationBlueprintFunctionLibrary Function EnumerateSupportedCubemapFormats 

// ********** Begin Class UAndroidXRLightEstimationBlueprintFunctionLibrary Function EnumerateSupportedCubemapResolutions 
struct Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapResolutions_Statics
{
	struct AndroidXRLightEstimationBlueprintFunctionLibrary_eventEnumerateSupportedCubemapResolutions_Parms
	{
		TArray<int32> Resolutions;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Light Estimation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Gets the supported cubemap resolutions.\n    * @param[out] The supported cubemap resolutions.\n    * @return True if the underlying API call was successful.\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the supported cubemap resolutions.\n@param[out] The supported cubemap resolutions.\n@return True if the underlying API call was successful." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Resolutions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Resolutions;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapResolutions_Statics::NewProp_Resolutions_Inner = { "Resolutions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapResolutions_Statics::NewProp_Resolutions = { "Resolutions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRLightEstimationBlueprintFunctionLibrary_eventEnumerateSupportedCubemapResolutions_Parms, Resolutions), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapResolutions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRLightEstimationBlueprintFunctionLibrary_eventEnumerateSupportedCubemapResolutions_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapResolutions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRLightEstimationBlueprintFunctionLibrary_eventEnumerateSupportedCubemapResolutions_Parms), &Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapResolutions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapResolutions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapResolutions_Statics::NewProp_Resolutions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapResolutions_Statics::NewProp_Resolutions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapResolutions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapResolutions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapResolutions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary, nullptr, "EnumerateSupportedCubemapResolutions", Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapResolutions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapResolutions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapResolutions_Statics::AndroidXRLightEstimationBlueprintFunctionLibrary_eventEnumerateSupportedCubemapResolutions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapResolutions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapResolutions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapResolutions_Statics::AndroidXRLightEstimationBlueprintFunctionLibrary_eventEnumerateSupportedCubemapResolutions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapResolutions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapResolutions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRLightEstimationBlueprintFunctionLibrary::execEnumerateSupportedCubemapResolutions)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_Resolutions);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRLightEstimationBlueprintFunctionLibrary::EnumerateSupportedCubemapResolutions(Z_Param_Out_Resolutions);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRLightEstimationBlueprintFunctionLibrary Function EnumerateSupportedCubemapResolutions 

// ********** Begin Class UAndroidXRLightEstimationBlueprintFunctionLibrary Function GetAmbientLightData 
struct Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetAmbientLightData_Statics
{
	struct AndroidXRLightEstimationBlueprintFunctionLibrary_eventGetAmbientLightData_Parms
	{
		FAndroidXRLightEstimator LightEstimator;
		FAndroidXRAmbientLightData AmbientLightData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Light Estimation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Gets the ambient light data.\n    * @param[in] The light estimator to get the ambient light data.\n    * @param[out] The ambient light data.\n    * @return True if the underlying API call was successful.\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the ambient light data.\n@param[in] The light estimator to get the ambient light data.\n@param[out] The ambient light data.\n@return True if the underlying API call was successful." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightEstimator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightEstimator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AmbientLightData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetAmbientLightData_Statics::NewProp_LightEstimator = { "LightEstimator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRLightEstimationBlueprintFunctionLibrary_eventGetAmbientLightData_Parms, LightEstimator), Z_Construct_UScriptStruct_FAndroidXRLightEstimator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightEstimator_MetaData), NewProp_LightEstimator_MetaData) }; // 1363992603
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetAmbientLightData_Statics::NewProp_AmbientLightData = { "AmbientLightData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRLightEstimationBlueprintFunctionLibrary_eventGetAmbientLightData_Parms, AmbientLightData), Z_Construct_UScriptStruct_FAndroidXRAmbientLightData, METADATA_PARAMS(0, nullptr) }; // 3987791818
void Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetAmbientLightData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRLightEstimationBlueprintFunctionLibrary_eventGetAmbientLightData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetAmbientLightData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRLightEstimationBlueprintFunctionLibrary_eventGetAmbientLightData_Parms), &Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetAmbientLightData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetAmbientLightData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetAmbientLightData_Statics::NewProp_LightEstimator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetAmbientLightData_Statics::NewProp_AmbientLightData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetAmbientLightData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetAmbientLightData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetAmbientLightData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary, nullptr, "GetAmbientLightData", Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetAmbientLightData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetAmbientLightData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetAmbientLightData_Statics::AndroidXRLightEstimationBlueprintFunctionLibrary_eventGetAmbientLightData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetAmbientLightData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetAmbientLightData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetAmbientLightData_Statics::AndroidXRLightEstimationBlueprintFunctionLibrary_eventGetAmbientLightData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetAmbientLightData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetAmbientLightData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRLightEstimationBlueprintFunctionLibrary::execGetAmbientLightData)
{
	P_GET_STRUCT_REF(FAndroidXRLightEstimator,Z_Param_Out_LightEstimator);
	P_GET_STRUCT_REF(FAndroidXRAmbientLightData,Z_Param_Out_AmbientLightData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRLightEstimationBlueprintFunctionLibrary::GetAmbientLightData(Z_Param_Out_LightEstimator,Z_Param_Out_AmbientLightData);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRLightEstimationBlueprintFunctionLibrary Function GetAmbientLightData 

// ********** Begin Class UAndroidXRLightEstimationBlueprintFunctionLibrary Function GetCubemapData 
struct Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetCubemapData_Statics
{
	struct AndroidXRLightEstimationBlueprintFunctionLibrary_eventGetCubemapData_Parms
	{
		FAndroidXRCubemapEstimator CubemapEstimator;
		FAndroidXRCubemapLightData CubemapData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Light Estimation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Gets the cubemap data.\n    * @param[in] The cubemap estimator.\n    * @param[out] The cubemap light data.\n    * @return True if the underlying API call was successful.\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the cubemap data.\n@param[in] The cubemap estimator.\n@param[out] The cubemap light data.\n@return True if the underlying API call was successful." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CubemapEstimator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CubemapEstimator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CubemapData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetCubemapData_Statics::NewProp_CubemapEstimator = { "CubemapEstimator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRLightEstimationBlueprintFunctionLibrary_eventGetCubemapData_Parms, CubemapEstimator), Z_Construct_UScriptStruct_FAndroidXRCubemapEstimator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CubemapEstimator_MetaData), NewProp_CubemapEstimator_MetaData) }; // 2373206697
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetCubemapData_Statics::NewProp_CubemapData = { "CubemapData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRLightEstimationBlueprintFunctionLibrary_eventGetCubemapData_Parms, CubemapData), Z_Construct_UScriptStruct_FAndroidXRCubemapLightData, METADATA_PARAMS(0, nullptr) }; // 3965879968
void Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetCubemapData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRLightEstimationBlueprintFunctionLibrary_eventGetCubemapData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetCubemapData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRLightEstimationBlueprintFunctionLibrary_eventGetCubemapData_Parms), &Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetCubemapData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetCubemapData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetCubemapData_Statics::NewProp_CubemapEstimator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetCubemapData_Statics::NewProp_CubemapData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetCubemapData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetCubemapData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetCubemapData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary, nullptr, "GetCubemapData", Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetCubemapData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetCubemapData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetCubemapData_Statics::AndroidXRLightEstimationBlueprintFunctionLibrary_eventGetCubemapData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetCubemapData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetCubemapData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetCubemapData_Statics::AndroidXRLightEstimationBlueprintFunctionLibrary_eventGetCubemapData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetCubemapData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetCubemapData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRLightEstimationBlueprintFunctionLibrary::execGetCubemapData)
{
	P_GET_STRUCT_REF(FAndroidXRCubemapEstimator,Z_Param_Out_CubemapEstimator);
	P_GET_STRUCT_REF(FAndroidXRCubemapLightData,Z_Param_Out_CubemapData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRLightEstimationBlueprintFunctionLibrary::GetCubemapData(Z_Param_Out_CubemapEstimator,Z_Param_Out_CubemapData);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRLightEstimationBlueprintFunctionLibrary Function GetCubemapData **

// ********** Begin Class UAndroidXRLightEstimationBlueprintFunctionLibrary Function GetDirectionalLightData 
struct Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetDirectionalLightData_Statics
{
	struct AndroidXRLightEstimationBlueprintFunctionLibrary_eventGetDirectionalLightData_Parms
	{
		FAndroidXRLightEstimator LightEstimator;
		FAndroidXRDirectionalLightData DirectionalLightData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Light Estimation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Gets the directional light data.\n    * @param[in] The light estimator to get the directional light data.\n    * @param[out] The directional light data.\n    * @return True if the underlying API call was successful.\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the directional light data.\n@param[in] The light estimator to get the directional light data.\n@param[out] The directional light data.\n@return True if the underlying API call was successful." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightEstimator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightEstimator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionalLightData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetDirectionalLightData_Statics::NewProp_LightEstimator = { "LightEstimator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRLightEstimationBlueprintFunctionLibrary_eventGetDirectionalLightData_Parms, LightEstimator), Z_Construct_UScriptStruct_FAndroidXRLightEstimator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightEstimator_MetaData), NewProp_LightEstimator_MetaData) }; // 1363992603
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetDirectionalLightData_Statics::NewProp_DirectionalLightData = { "DirectionalLightData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRLightEstimationBlueprintFunctionLibrary_eventGetDirectionalLightData_Parms, DirectionalLightData), Z_Construct_UScriptStruct_FAndroidXRDirectionalLightData, METADATA_PARAMS(0, nullptr) }; // 3104148600
void Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetDirectionalLightData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRLightEstimationBlueprintFunctionLibrary_eventGetDirectionalLightData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetDirectionalLightData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRLightEstimationBlueprintFunctionLibrary_eventGetDirectionalLightData_Parms), &Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetDirectionalLightData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetDirectionalLightData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetDirectionalLightData_Statics::NewProp_LightEstimator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetDirectionalLightData_Statics::NewProp_DirectionalLightData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetDirectionalLightData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetDirectionalLightData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetDirectionalLightData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary, nullptr, "GetDirectionalLightData", Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetDirectionalLightData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetDirectionalLightData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetDirectionalLightData_Statics::AndroidXRLightEstimationBlueprintFunctionLibrary_eventGetDirectionalLightData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetDirectionalLightData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetDirectionalLightData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetDirectionalLightData_Statics::AndroidXRLightEstimationBlueprintFunctionLibrary_eventGetDirectionalLightData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetDirectionalLightData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetDirectionalLightData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRLightEstimationBlueprintFunctionLibrary::execGetDirectionalLightData)
{
	P_GET_STRUCT_REF(FAndroidXRLightEstimator,Z_Param_Out_LightEstimator);
	P_GET_STRUCT_REF(FAndroidXRDirectionalLightData,Z_Param_Out_DirectionalLightData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRLightEstimationBlueprintFunctionLibrary::GetDirectionalLightData(Z_Param_Out_LightEstimator,Z_Param_Out_DirectionalLightData);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRLightEstimationBlueprintFunctionLibrary Function GetDirectionalLightData 

// ********** Begin Class UAndroidXRLightEstimationBlueprintFunctionLibrary Function GetSphericalHarmonicsData 
struct Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetSphericalHarmonicsData_Statics
{
	struct AndroidXRLightEstimationBlueprintFunctionLibrary_eventGetSphericalHarmonicsData_Parms
	{
		FAndroidXRLightEstimator LightEstimator;
		EAndroidXRSphericalHarmonicsKind HarmonicsKind;
		FAndroidXRSphericalHarmonicsData SphericalHarmonicsData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Light Estimation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Gets the spherical harmonics data.\n    * @param[in] The light estimator to get the spherical harmonics data.\n    * @param[out] The spherical harmonics data.\n    * @return True if the underlying API call was successful.\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the spherical harmonics data.\n@param[in] The light estimator to get the spherical harmonics data.\n@param[out] The spherical harmonics data.\n@return True if the underlying API call was successful." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightEstimator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightEstimator;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HarmonicsKind_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HarmonicsKind;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SphericalHarmonicsData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetSphericalHarmonicsData_Statics::NewProp_LightEstimator = { "LightEstimator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRLightEstimationBlueprintFunctionLibrary_eventGetSphericalHarmonicsData_Parms, LightEstimator), Z_Construct_UScriptStruct_FAndroidXRLightEstimator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightEstimator_MetaData), NewProp_LightEstimator_MetaData) }; // 1363992603
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetSphericalHarmonicsData_Statics::NewProp_HarmonicsKind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetSphericalHarmonicsData_Statics::NewProp_HarmonicsKind = { "HarmonicsKind", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRLightEstimationBlueprintFunctionLibrary_eventGetSphericalHarmonicsData_Parms, HarmonicsKind), Z_Construct_UEnum_AndroidXRLightEstimation_EAndroidXRSphericalHarmonicsKind, METADATA_PARAMS(0, nullptr) }; // 1716993722
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetSphericalHarmonicsData_Statics::NewProp_SphericalHarmonicsData = { "SphericalHarmonicsData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRLightEstimationBlueprintFunctionLibrary_eventGetSphericalHarmonicsData_Parms, SphericalHarmonicsData), Z_Construct_UScriptStruct_FAndroidXRSphericalHarmonicsData, METADATA_PARAMS(0, nullptr) }; // 2306582982
void Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetSphericalHarmonicsData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRLightEstimationBlueprintFunctionLibrary_eventGetSphericalHarmonicsData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetSphericalHarmonicsData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRLightEstimationBlueprintFunctionLibrary_eventGetSphericalHarmonicsData_Parms), &Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetSphericalHarmonicsData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetSphericalHarmonicsData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetSphericalHarmonicsData_Statics::NewProp_LightEstimator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetSphericalHarmonicsData_Statics::NewProp_HarmonicsKind_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetSphericalHarmonicsData_Statics::NewProp_HarmonicsKind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetSphericalHarmonicsData_Statics::NewProp_SphericalHarmonicsData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetSphericalHarmonicsData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetSphericalHarmonicsData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetSphericalHarmonicsData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary, nullptr, "GetSphericalHarmonicsData", Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetSphericalHarmonicsData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetSphericalHarmonicsData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetSphericalHarmonicsData_Statics::AndroidXRLightEstimationBlueprintFunctionLibrary_eventGetSphericalHarmonicsData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetSphericalHarmonicsData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetSphericalHarmonicsData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetSphericalHarmonicsData_Statics::AndroidXRLightEstimationBlueprintFunctionLibrary_eventGetSphericalHarmonicsData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetSphericalHarmonicsData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetSphericalHarmonicsData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRLightEstimationBlueprintFunctionLibrary::execGetSphericalHarmonicsData)
{
	P_GET_STRUCT_REF(FAndroidXRLightEstimator,Z_Param_Out_LightEstimator);
	P_GET_ENUM(EAndroidXRSphericalHarmonicsKind,Z_Param_HarmonicsKind);
	P_GET_STRUCT_REF(FAndroidXRSphericalHarmonicsData,Z_Param_Out_SphericalHarmonicsData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRLightEstimationBlueprintFunctionLibrary::GetSphericalHarmonicsData(Z_Param_Out_LightEstimator,EAndroidXRSphericalHarmonicsKind(Z_Param_HarmonicsKind),Z_Param_Out_SphericalHarmonicsData);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRLightEstimationBlueprintFunctionLibrary Function GetSphericalHarmonicsData 

// ********** Begin Class UAndroidXRLightEstimationBlueprintFunctionLibrary Function IsCubemapLightEstimationSupported 
struct Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_IsCubemapLightEstimationSupported_Statics
{
	struct AndroidXRLightEstimationBlueprintFunctionLibrary_eventIsCubemapLightEstimationSupported_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Light Estimation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Returns whether light estimation cubemap is supported for the device.\n    * @return True if device supports light estimation cubemap.\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether light estimation cubemap is supported for the device.\n@return True if device supports light estimation cubemap." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_IsCubemapLightEstimationSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRLightEstimationBlueprintFunctionLibrary_eventIsCubemapLightEstimationSupported_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_IsCubemapLightEstimationSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRLightEstimationBlueprintFunctionLibrary_eventIsCubemapLightEstimationSupported_Parms), &Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_IsCubemapLightEstimationSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_IsCubemapLightEstimationSupported_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_IsCubemapLightEstimationSupported_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_IsCubemapLightEstimationSupported_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_IsCubemapLightEstimationSupported_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary, nullptr, "IsCubemapLightEstimationSupported", Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_IsCubemapLightEstimationSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_IsCubemapLightEstimationSupported_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_IsCubemapLightEstimationSupported_Statics::AndroidXRLightEstimationBlueprintFunctionLibrary_eventIsCubemapLightEstimationSupported_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_IsCubemapLightEstimationSupported_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_IsCubemapLightEstimationSupported_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_IsCubemapLightEstimationSupported_Statics::AndroidXRLightEstimationBlueprintFunctionLibrary_eventIsCubemapLightEstimationSupported_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_IsCubemapLightEstimationSupported()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_IsCubemapLightEstimationSupported_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRLightEstimationBlueprintFunctionLibrary::execIsCubemapLightEstimationSupported)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRLightEstimationBlueprintFunctionLibrary::IsCubemapLightEstimationSupported();
	P_NATIVE_END;
}
// ********** End Class UAndroidXRLightEstimationBlueprintFunctionLibrary Function IsCubemapLightEstimationSupported 

// ********** Begin Class UAndroidXRLightEstimationBlueprintFunctionLibrary Function IsLightEstimationSupported 
struct Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_IsLightEstimationSupported_Statics
{
	struct AndroidXRLightEstimationBlueprintFunctionLibrary_eventIsLightEstimationSupported_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Light Estimation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Returns whether or not light estimation is supported on the device.\n    * @return True if light estimation is supported.\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether or not light estimation is supported on the device.\n@return True if light estimation is supported." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_IsLightEstimationSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRLightEstimationBlueprintFunctionLibrary_eventIsLightEstimationSupported_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_IsLightEstimationSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRLightEstimationBlueprintFunctionLibrary_eventIsLightEstimationSupported_Parms), &Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_IsLightEstimationSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_IsLightEstimationSupported_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_IsLightEstimationSupported_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_IsLightEstimationSupported_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_IsLightEstimationSupported_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary, nullptr, "IsLightEstimationSupported", Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_IsLightEstimationSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_IsLightEstimationSupported_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_IsLightEstimationSupported_Statics::AndroidXRLightEstimationBlueprintFunctionLibrary_eventIsLightEstimationSupported_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_IsLightEstimationSupported_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_IsLightEstimationSupported_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_IsLightEstimationSupported_Statics::AndroidXRLightEstimationBlueprintFunctionLibrary_eventIsLightEstimationSupported_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_IsLightEstimationSupported()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_IsLightEstimationSupported_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRLightEstimationBlueprintFunctionLibrary::execIsLightEstimationSupported)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRLightEstimationBlueprintFunctionLibrary::IsLightEstimationSupported();
	P_NATIVE_END;
}
// ********** End Class UAndroidXRLightEstimationBlueprintFunctionLibrary Function IsLightEstimationSupported 

// ********** Begin Class UAndroidXRLightEstimationBlueprintFunctionLibrary ************************
void UAndroidXRLightEstimationBlueprintFunctionLibrary::StaticRegisterNativesUAndroidXRLightEstimationBlueprintFunctionLibrary()
{
	UClass* Class = UAndroidXRLightEstimationBlueprintFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyLightEstimationCubemap", &UAndroidXRLightEstimationBlueprintFunctionLibrary::execApplyLightEstimationCubemap },
		{ "CreateCubemapLightEstimator", &UAndroidXRLightEstimationBlueprintFunctionLibrary::execCreateCubemapLightEstimator },
		{ "CreateCubemapTextureForLightEstimation", &UAndroidXRLightEstimationBlueprintFunctionLibrary::execCreateCubemapTextureForLightEstimation },
		{ "CreateLightEstimator", &UAndroidXRLightEstimationBlueprintFunctionLibrary::execCreateLightEstimator },
		{ "DestroyCubemapEstimator", &UAndroidXRLightEstimationBlueprintFunctionLibrary::execDestroyCubemapEstimator },
		{ "DestroyLightEstimator", &UAndroidXRLightEstimationBlueprintFunctionLibrary::execDestroyLightEstimator },
		{ "EnumerateSupportedCubemapFormats", &UAndroidXRLightEstimationBlueprintFunctionLibrary::execEnumerateSupportedCubemapFormats },
		{ "EnumerateSupportedCubemapResolutions", &UAndroidXRLightEstimationBlueprintFunctionLibrary::execEnumerateSupportedCubemapResolutions },
		{ "GetAmbientLightData", &UAndroidXRLightEstimationBlueprintFunctionLibrary::execGetAmbientLightData },
		{ "GetCubemapData", &UAndroidXRLightEstimationBlueprintFunctionLibrary::execGetCubemapData },
		{ "GetDirectionalLightData", &UAndroidXRLightEstimationBlueprintFunctionLibrary::execGetDirectionalLightData },
		{ "GetSphericalHarmonicsData", &UAndroidXRLightEstimationBlueprintFunctionLibrary::execGetSphericalHarmonicsData },
		{ "IsCubemapLightEstimationSupported", &UAndroidXRLightEstimationBlueprintFunctionLibrary::execIsCubemapLightEstimationSupported },
		{ "IsLightEstimationSupported", &UAndroidXRLightEstimationBlueprintFunctionLibrary::execIsLightEstimationSupported },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary;
UClass* UAndroidXRLightEstimationBlueprintFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UAndroidXRLightEstimationBlueprintFunctionLibrary;
	if (!Z_Registration_Info_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRLightEstimationBlueprintFunctionLibrary"),
			Z_Registration_Info_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUAndroidXRLightEstimationBlueprintFunctionLibrary,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary_NoRegister()
{
	return UAndroidXRLightEstimationBlueprintFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AndroidXRLightEstimation" },
		{ "IncludePath", "AndroidXRLightEstimationBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/AndroidXRLightEstimationBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_ApplyLightEstimationCubemap, "ApplyLightEstimationCubemap" }, // 312648455
		{ &Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapLightEstimator, "CreateCubemapLightEstimator" }, // 4088911895
		{ &Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateCubemapTextureForLightEstimation, "CreateCubemapTextureForLightEstimation" }, // 4082487220
		{ &Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_CreateLightEstimator, "CreateLightEstimator" }, // 2590008878
		{ &Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyCubemapEstimator, "DestroyCubemapEstimator" }, // 2293047489
		{ &Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_DestroyLightEstimator, "DestroyLightEstimator" }, // 317607623
		{ &Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapFormats, "EnumerateSupportedCubemapFormats" }, // 4265540381
		{ &Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_EnumerateSupportedCubemapResolutions, "EnumerateSupportedCubemapResolutions" }, // 2532904127
		{ &Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetAmbientLightData, "GetAmbientLightData" }, // 1106322786
		{ &Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetCubemapData, "GetCubemapData" }, // 3108360752
		{ &Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetDirectionalLightData, "GetDirectionalLightData" }, // 1863373823
		{ &Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_GetSphericalHarmonicsData, "GetSphericalHarmonicsData" }, // 3022745704
		{ &Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_IsCubemapLightEstimationSupported, "IsCubemapLightEstimationSupported" }, // 4087805567
		{ &Z_Construct_UFunction_UAndroidXRLightEstimationBlueprintFunctionLibrary_IsLightEstimationSupported, "IsLightEstimationSupported" }, // 1030460210
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRLightEstimationBlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRLightEstimation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary_Statics::ClassParams = {
	&UAndroidXRLightEstimationBlueprintFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary.OuterSingleton;
}
UAndroidXRLightEstimationBlueprintFunctionLibrary::UAndroidXRLightEstimationBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRLightEstimationBlueprintFunctionLibrary);
UAndroidXRLightEstimationBlueprintFunctionLibrary::~UAndroidXRLightEstimationBlueprintFunctionLibrary() {}
// ********** End Class UAndroidXRLightEstimationBlueprintFunctionLibrary **************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRLightEstimation_Source_AndroidXRLightEstimation_Public_AndroidXRLightEstimationBlueprintFunctionLibrary_h__Script_AndroidXRLightEstimation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary, UAndroidXRLightEstimationBlueprintFunctionLibrary::StaticClass, TEXT("UAndroidXRLightEstimationBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UAndroidXRLightEstimationBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRLightEstimationBlueprintFunctionLibrary), 4272186240U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRLightEstimation_Source_AndroidXRLightEstimation_Public_AndroidXRLightEstimationBlueprintFunctionLibrary_h__Script_AndroidXRLightEstimation_4051510322(TEXT("/Script/AndroidXRLightEstimation"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRLightEstimation_Source_AndroidXRLightEstimation_Public_AndroidXRLightEstimationBlueprintFunctionLibrary_h__Script_AndroidXRLightEstimation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRLightEstimation_Source_AndroidXRLightEstimation_Public_AndroidXRLightEstimationBlueprintFunctionLibrary_h__Script_AndroidXRLightEstimation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
