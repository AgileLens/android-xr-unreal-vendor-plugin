// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRDepthTextureBlueprintFunctionLibrary.h"
#include "AndroidXRTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRDepthTextureBlueprintFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXR_API UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRDepthCameraResolution();
ANDROIDXR_API UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRDepthSwapchainCreateFlag();
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRDepthAcquireResult();
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRDepthSwapchain();
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRDepthSwapchainImage();
ANDROIDXRDEPTHTEXTURE_API UClass* Z_Construct_UClass_UAndroidXRDepthTextureBlueprintFunctionLibrary();
ANDROIDXRDEPTHTEXTURE_API UClass* Z_Construct_UClass_UAndroidXRDepthTextureBlueprintFunctionLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_AndroidXRDepthTexture();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAndroidXRDepthTextureBlueprintFunctionLibrary Function AcquireDepthSwapchainImages 
struct Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_AcquireDepthSwapchainImages_Statics
{
	struct AndroidXRDepthTextureBlueprintFunctionLibrary_eventAcquireDepthSwapchainImages_Parms
	{
		FAndroidXRDepthSwapchain Swapchain;
		FAndroidXRDepthAcquireResult AcquireResult;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Depth Texture Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Acquires a swapchain image. Should be called exactly once (per swapchain)\n     * between xrBeginFrame and xrEndFrame.\n     * @param[in] Swapchain The swapchain to be considered.\n     * @param[out] AcquireResult The result of the acquisition.\n     * @return True if the underlying API call was successful.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRDepthTextureBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Acquires a swapchain image. Should be called exactly once (per swapchain)\nbetween xrBeginFrame and xrEndFrame.\n@param[in] Swapchain The swapchain to be considered.\n@param[out] AcquireResult The result of the acquisition.\n@return True if the underlying API call was successful." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Swapchain_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Swapchain;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AcquireResult;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_AcquireDepthSwapchainImages_Statics::NewProp_Swapchain = { "Swapchain", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRDepthTextureBlueprintFunctionLibrary_eventAcquireDepthSwapchainImages_Parms, Swapchain), Z_Construct_UScriptStruct_FAndroidXRDepthSwapchain, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Swapchain_MetaData), NewProp_Swapchain_MetaData) }; // 1959412716
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_AcquireDepthSwapchainImages_Statics::NewProp_AcquireResult = { "AcquireResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRDepthTextureBlueprintFunctionLibrary_eventAcquireDepthSwapchainImages_Parms, AcquireResult), Z_Construct_UScriptStruct_FAndroidXRDepthAcquireResult, METADATA_PARAMS(0, nullptr) }; // 3215623939
void Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_AcquireDepthSwapchainImages_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRDepthTextureBlueprintFunctionLibrary_eventAcquireDepthSwapchainImages_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_AcquireDepthSwapchainImages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRDepthTextureBlueprintFunctionLibrary_eventAcquireDepthSwapchainImages_Parms), &Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_AcquireDepthSwapchainImages_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_AcquireDepthSwapchainImages_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_AcquireDepthSwapchainImages_Statics::NewProp_Swapchain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_AcquireDepthSwapchainImages_Statics::NewProp_AcquireResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_AcquireDepthSwapchainImages_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_AcquireDepthSwapchainImages_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_AcquireDepthSwapchainImages_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRDepthTextureBlueprintFunctionLibrary, nullptr, "AcquireDepthSwapchainImages", Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_AcquireDepthSwapchainImages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_AcquireDepthSwapchainImages_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_AcquireDepthSwapchainImages_Statics::AndroidXRDepthTextureBlueprintFunctionLibrary_eventAcquireDepthSwapchainImages_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_AcquireDepthSwapchainImages_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_AcquireDepthSwapchainImages_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_AcquireDepthSwapchainImages_Statics::AndroidXRDepthTextureBlueprintFunctionLibrary_eventAcquireDepthSwapchainImages_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_AcquireDepthSwapchainImages()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_AcquireDepthSwapchainImages_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRDepthTextureBlueprintFunctionLibrary::execAcquireDepthSwapchainImages)
{
	P_GET_STRUCT_REF(FAndroidXRDepthSwapchain,Z_Param_Out_Swapchain);
	P_GET_STRUCT_REF(FAndroidXRDepthAcquireResult,Z_Param_Out_AcquireResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRDepthTextureBlueprintFunctionLibrary::AcquireDepthSwapchainImages(Z_Param_Out_Swapchain,Z_Param_Out_AcquireResult);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRDepthTextureBlueprintFunctionLibrary Function AcquireDepthSwapchainImages 

// ********** Begin Class UAndroidXRDepthTextureBlueprintFunctionLibrary Function CreateDepthSwapchain 
struct Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchain_Statics
{
	struct AndroidXRDepthTextureBlueprintFunctionLibrary_eventCreateDepthSwapchain_Parms
	{
		EAndroidXRDepthCameraResolution Resolution;
		int32 CreateFlags;
		FAndroidXRDepthSwapchain Swapchain;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Depth Texture Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Creates a depth swapchain.\n     * @param[in] Resolution The desired resolution.\n     * @param[in] CreateFlags The desired flags.\n     * @param[out] Swapchain The created depth swapchain.\n     * @return True if the underlying API call was successful.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRDepthTextureBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a depth swapchain.\n@param[in] Resolution The desired resolution.\n@param[in] CreateFlags The desired flags.\n@param[out] Swapchain The created depth swapchain.\n@return True if the underlying API call was successful." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreateFlags_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/AndroidXR.EAndroidXRDepthSwapchainCreateFlag" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Resolution_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Resolution;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CreateFlags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Swapchain;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchain_Statics::NewProp_Resolution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchain_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRDepthTextureBlueprintFunctionLibrary_eventCreateDepthSwapchain_Parms, Resolution), Z_Construct_UEnum_AndroidXR_EAndroidXRDepthCameraResolution, METADATA_PARAMS(0, nullptr) }; // 2846417938
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchain_Statics::NewProp_CreateFlags = { "CreateFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRDepthTextureBlueprintFunctionLibrary_eventCreateDepthSwapchain_Parms, CreateFlags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreateFlags_MetaData), NewProp_CreateFlags_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchain_Statics::NewProp_Swapchain = { "Swapchain", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRDepthTextureBlueprintFunctionLibrary_eventCreateDepthSwapchain_Parms, Swapchain), Z_Construct_UScriptStruct_FAndroidXRDepthSwapchain, METADATA_PARAMS(0, nullptr) }; // 1959412716
void Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchain_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRDepthTextureBlueprintFunctionLibrary_eventCreateDepthSwapchain_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRDepthTextureBlueprintFunctionLibrary_eventCreateDepthSwapchain_Parms), &Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchain_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchain_Statics::NewProp_Resolution_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchain_Statics::NewProp_Resolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchain_Statics::NewProp_CreateFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchain_Statics::NewProp_Swapchain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchain_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchain_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRDepthTextureBlueprintFunctionLibrary, nullptr, "CreateDepthSwapchain", Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchain_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchain_Statics::AndroidXRDepthTextureBlueprintFunctionLibrary_eventCreateDepthSwapchain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchain_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchain_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchain_Statics::AndroidXRDepthTextureBlueprintFunctionLibrary_eventCreateDepthSwapchain_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRDepthTextureBlueprintFunctionLibrary::execCreateDepthSwapchain)
{
	P_GET_ENUM(EAndroidXRDepthCameraResolution,Z_Param_Resolution);
	P_GET_PROPERTY(FIntProperty,Z_Param_CreateFlags);
	P_GET_STRUCT_REF(FAndroidXRDepthSwapchain,Z_Param_Out_Swapchain);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRDepthTextureBlueprintFunctionLibrary::CreateDepthSwapchain(EAndroidXRDepthCameraResolution(Z_Param_Resolution),Z_Param_CreateFlags,Z_Param_Out_Swapchain);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRDepthTextureBlueprintFunctionLibrary Function CreateDepthSwapchain 

// ********** Begin Class UAndroidXRDepthTextureBlueprintFunctionLibrary Function CreateDepthSwapchainTexture 
struct Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchainTexture_Statics
{
	struct AndroidXRDepthTextureBlueprintFunctionLibrary_eventCreateDepthSwapchainTexture_Parms
	{
		EAndroidXRDepthCameraResolution Resolution;
		EAndroidXRDepthSwapchainCreateFlag ImageSource;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Depth Texture Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Creates a texture to contain a swapchain image. The texture will be Resolution x\n     * Resolution*2, with the two views arranged in order in memory (they will appear\n     * vertically if rendered).\n     * @param[in] Resolution The swapchain resolution.\n     * @param[in] ImageSource Flag defining desired image type (depth or confidence).\n     * @return A valid UTexture2D if successful.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRDepthTextureBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a texture to contain a swapchain image. The texture will be Resolution x\nResolution*2, with the two views arranged in order in memory (they will appear\nvertically if rendered).\n@param[in] Resolution The swapchain resolution.\n@param[in] ImageSource Flag defining desired image type (depth or confidence).\n@return A valid UTexture2D if successful." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Resolution_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Resolution;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ImageSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ImageSource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchainTexture_Statics::NewProp_Resolution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchainTexture_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRDepthTextureBlueprintFunctionLibrary_eventCreateDepthSwapchainTexture_Parms, Resolution), Z_Construct_UEnum_AndroidXR_EAndroidXRDepthCameraResolution, METADATA_PARAMS(0, nullptr) }; // 2846417938
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchainTexture_Statics::NewProp_ImageSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchainTexture_Statics::NewProp_ImageSource = { "ImageSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRDepthTextureBlueprintFunctionLibrary_eventCreateDepthSwapchainTexture_Parms, ImageSource), Z_Construct_UEnum_AndroidXR_EAndroidXRDepthSwapchainCreateFlag, METADATA_PARAMS(0, nullptr) }; // 2603938546
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchainTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRDepthTextureBlueprintFunctionLibrary_eventCreateDepthSwapchainTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchainTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchainTexture_Statics::NewProp_Resolution_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchainTexture_Statics::NewProp_Resolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchainTexture_Statics::NewProp_ImageSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchainTexture_Statics::NewProp_ImageSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchainTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchainTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchainTexture_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRDepthTextureBlueprintFunctionLibrary, nullptr, "CreateDepthSwapchainTexture", Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchainTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchainTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchainTexture_Statics::AndroidXRDepthTextureBlueprintFunctionLibrary_eventCreateDepthSwapchainTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchainTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchainTexture_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchainTexture_Statics::AndroidXRDepthTextureBlueprintFunctionLibrary_eventCreateDepthSwapchainTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchainTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchainTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRDepthTextureBlueprintFunctionLibrary::execCreateDepthSwapchainTexture)
{
	P_GET_ENUM(EAndroidXRDepthCameraResolution,Z_Param_Resolution);
	P_GET_ENUM(EAndroidXRDepthSwapchainCreateFlag,Z_Param_ImageSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=UAndroidXRDepthTextureBlueprintFunctionLibrary::CreateDepthSwapchainTexture(EAndroidXRDepthCameraResolution(Z_Param_Resolution),EAndroidXRDepthSwapchainCreateFlag(Z_Param_ImageSource));
	P_NATIVE_END;
}
// ********** End Class UAndroidXRDepthTextureBlueprintFunctionLibrary Function CreateDepthSwapchainTexture 

// ********** Begin Class UAndroidXRDepthTextureBlueprintFunctionLibrary Function DestroyDepthSwapchain 
struct Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_DestroyDepthSwapchain_Statics
{
	struct AndroidXRDepthTextureBlueprintFunctionLibrary_eventDestroyDepthSwapchain_Parms
	{
		FAndroidXRDepthSwapchain Swapchain;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Depth Texture Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Destroys a depth swapchain.\n     * @param[in, out] Swapchain The swapchain to be destroyed.\n     * @return True if the underlying API call was successful.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRDepthTextureBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Destroys a depth swapchain.\n@param[in, out] Swapchain The swapchain to be destroyed.\n@return True if the underlying API call was successful." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Swapchain;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_DestroyDepthSwapchain_Statics::NewProp_Swapchain = { "Swapchain", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRDepthTextureBlueprintFunctionLibrary_eventDestroyDepthSwapchain_Parms, Swapchain), Z_Construct_UScriptStruct_FAndroidXRDepthSwapchain, METADATA_PARAMS(0, nullptr) }; // 1959412716
void Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_DestroyDepthSwapchain_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRDepthTextureBlueprintFunctionLibrary_eventDestroyDepthSwapchain_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_DestroyDepthSwapchain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRDepthTextureBlueprintFunctionLibrary_eventDestroyDepthSwapchain_Parms), &Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_DestroyDepthSwapchain_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_DestroyDepthSwapchain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_DestroyDepthSwapchain_Statics::NewProp_Swapchain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_DestroyDepthSwapchain_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_DestroyDepthSwapchain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_DestroyDepthSwapchain_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRDepthTextureBlueprintFunctionLibrary, nullptr, "DestroyDepthSwapchain", Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_DestroyDepthSwapchain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_DestroyDepthSwapchain_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_DestroyDepthSwapchain_Statics::AndroidXRDepthTextureBlueprintFunctionLibrary_eventDestroyDepthSwapchain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_DestroyDepthSwapchain_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_DestroyDepthSwapchain_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_DestroyDepthSwapchain_Statics::AndroidXRDepthTextureBlueprintFunctionLibrary_eventDestroyDepthSwapchain_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_DestroyDepthSwapchain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_DestroyDepthSwapchain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRDepthTextureBlueprintFunctionLibrary::execDestroyDepthSwapchain)
{
	P_GET_STRUCT_REF(FAndroidXRDepthSwapchain,Z_Param_Out_Swapchain);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRDepthTextureBlueprintFunctionLibrary::DestroyDepthSwapchain(Z_Param_Out_Swapchain);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRDepthTextureBlueprintFunctionLibrary Function DestroyDepthSwapchain 

// ********** Begin Class UAndroidXRDepthTextureBlueprintFunctionLibrary Function EnumerateDepthResolutions 
struct Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthResolutions_Statics
{
	struct AndroidXRDepthTextureBlueprintFunctionLibrary_eventEnumerateDepthResolutions_Parms
	{
		TArray<EAndroidXRDepthCameraResolution> SupportedResolutions;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Depth Texture Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Enumerates the supported depth swapchain resolutions.\n     * @param[out] SupportedResolutions The supported depth swapchain resolutions.\n     * @return True if the underlying API call was successful.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRDepthTextureBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumerates the supported depth swapchain resolutions.\n@param[out] SupportedResolutions The supported depth swapchain resolutions.\n@return True if the underlying API call was successful." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SupportedResolutions_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SupportedResolutions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SupportedResolutions;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthResolutions_Statics::NewProp_SupportedResolutions_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthResolutions_Statics::NewProp_SupportedResolutions_Inner = { "SupportedResolutions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_AndroidXR_EAndroidXRDepthCameraResolution, METADATA_PARAMS(0, nullptr) }; // 2846417938
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthResolutions_Statics::NewProp_SupportedResolutions = { "SupportedResolutions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRDepthTextureBlueprintFunctionLibrary_eventEnumerateDepthResolutions_Parms, SupportedResolutions), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2846417938
void Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthResolutions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRDepthTextureBlueprintFunctionLibrary_eventEnumerateDepthResolutions_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthResolutions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRDepthTextureBlueprintFunctionLibrary_eventEnumerateDepthResolutions_Parms), &Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthResolutions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthResolutions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthResolutions_Statics::NewProp_SupportedResolutions_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthResolutions_Statics::NewProp_SupportedResolutions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthResolutions_Statics::NewProp_SupportedResolutions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthResolutions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthResolutions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthResolutions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRDepthTextureBlueprintFunctionLibrary, nullptr, "EnumerateDepthResolutions", Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthResolutions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthResolutions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthResolutions_Statics::AndroidXRDepthTextureBlueprintFunctionLibrary_eventEnumerateDepthResolutions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthResolutions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthResolutions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthResolutions_Statics::AndroidXRDepthTextureBlueprintFunctionLibrary_eventEnumerateDepthResolutions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthResolutions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthResolutions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRDepthTextureBlueprintFunctionLibrary::execEnumerateDepthResolutions)
{
	P_GET_TARRAY_REF(EAndroidXRDepthCameraResolution,Z_Param_Out_SupportedResolutions);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRDepthTextureBlueprintFunctionLibrary::EnumerateDepthResolutions(Z_Param_Out_SupportedResolutions);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRDepthTextureBlueprintFunctionLibrary Function EnumerateDepthResolutions 

// ********** Begin Class UAndroidXRDepthTextureBlueprintFunctionLibrary Function EnumerateDepthSwapchainImages 
struct Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthSwapchainImages_Statics
{
	struct AndroidXRDepthTextureBlueprintFunctionLibrary_eventEnumerateDepthSwapchainImages_Parms
	{
		FAndroidXRDepthSwapchain Swapchain;
		TArray<FAndroidXRDepthSwapchainImage> SwapchainImages;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Depth Texture Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Enumerates the images contained by the swapchain.\n     * @param[in] Swapchain The swapchain to be considered.\n     * @param[out] SwapchainImages Array of images in the swapchain.\n     * @return True if the underlying API call was successful.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRDepthTextureBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumerates the images contained by the swapchain.\n@param[in] Swapchain The swapchain to be considered.\n@param[out] SwapchainImages Array of images in the swapchain.\n@return True if the underlying API call was successful." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Swapchain_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Swapchain;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SwapchainImages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SwapchainImages;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthSwapchainImages_Statics::NewProp_Swapchain = { "Swapchain", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRDepthTextureBlueprintFunctionLibrary_eventEnumerateDepthSwapchainImages_Parms, Swapchain), Z_Construct_UScriptStruct_FAndroidXRDepthSwapchain, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Swapchain_MetaData), NewProp_Swapchain_MetaData) }; // 1959412716
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthSwapchainImages_Statics::NewProp_SwapchainImages_Inner = { "SwapchainImages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAndroidXRDepthSwapchainImage, METADATA_PARAMS(0, nullptr) }; // 765442177
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthSwapchainImages_Statics::NewProp_SwapchainImages = { "SwapchainImages", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRDepthTextureBlueprintFunctionLibrary_eventEnumerateDepthSwapchainImages_Parms, SwapchainImages), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 765442177
void Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthSwapchainImages_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRDepthTextureBlueprintFunctionLibrary_eventEnumerateDepthSwapchainImages_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthSwapchainImages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRDepthTextureBlueprintFunctionLibrary_eventEnumerateDepthSwapchainImages_Parms), &Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthSwapchainImages_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthSwapchainImages_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthSwapchainImages_Statics::NewProp_Swapchain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthSwapchainImages_Statics::NewProp_SwapchainImages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthSwapchainImages_Statics::NewProp_SwapchainImages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthSwapchainImages_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthSwapchainImages_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthSwapchainImages_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRDepthTextureBlueprintFunctionLibrary, nullptr, "EnumerateDepthSwapchainImages", Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthSwapchainImages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthSwapchainImages_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthSwapchainImages_Statics::AndroidXRDepthTextureBlueprintFunctionLibrary_eventEnumerateDepthSwapchainImages_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthSwapchainImages_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthSwapchainImages_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthSwapchainImages_Statics::AndroidXRDepthTextureBlueprintFunctionLibrary_eventEnumerateDepthSwapchainImages_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthSwapchainImages()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthSwapchainImages_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRDepthTextureBlueprintFunctionLibrary::execEnumerateDepthSwapchainImages)
{
	P_GET_STRUCT_REF(FAndroidXRDepthSwapchain,Z_Param_Out_Swapchain);
	P_GET_TARRAY_REF(FAndroidXRDepthSwapchainImage,Z_Param_Out_SwapchainImages);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRDepthTextureBlueprintFunctionLibrary::EnumerateDepthSwapchainImages(Z_Param_Out_Swapchain,Z_Param_Out_SwapchainImages);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRDepthTextureBlueprintFunctionLibrary Function EnumerateDepthSwapchainImages 

// ********** Begin Class UAndroidXRDepthTextureBlueprintFunctionLibrary Function GetDepthSwapchainSupported 
struct Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_GetDepthSwapchainSupported_Statics
{
	struct AndroidXRDepthTextureBlueprintFunctionLibrary_eventGetDepthSwapchainSupported_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Depth Texture Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Determines whether or not depth swapchain is supported.\n     * @return True if depth swapchain is supported.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRDepthTextureBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines whether or not depth swapchain is supported.\n@return True if depth swapchain is supported." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_GetDepthSwapchainSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRDepthTextureBlueprintFunctionLibrary_eventGetDepthSwapchainSupported_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_GetDepthSwapchainSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRDepthTextureBlueprintFunctionLibrary_eventGetDepthSwapchainSupported_Parms), &Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_GetDepthSwapchainSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_GetDepthSwapchainSupported_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_GetDepthSwapchainSupported_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_GetDepthSwapchainSupported_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_GetDepthSwapchainSupported_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRDepthTextureBlueprintFunctionLibrary, nullptr, "GetDepthSwapchainSupported", Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_GetDepthSwapchainSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_GetDepthSwapchainSupported_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_GetDepthSwapchainSupported_Statics::AndroidXRDepthTextureBlueprintFunctionLibrary_eventGetDepthSwapchainSupported_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_GetDepthSwapchainSupported_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_GetDepthSwapchainSupported_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_GetDepthSwapchainSupported_Statics::AndroidXRDepthTextureBlueprintFunctionLibrary_eventGetDepthSwapchainSupported_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_GetDepthSwapchainSupported()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_GetDepthSwapchainSupported_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRDepthTextureBlueprintFunctionLibrary::execGetDepthSwapchainSupported)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRDepthTextureBlueprintFunctionLibrary::GetDepthSwapchainSupported();
	P_NATIVE_END;
}
// ********** End Class UAndroidXRDepthTextureBlueprintFunctionLibrary Function GetDepthSwapchainSupported 

// ********** Begin Class UAndroidXRDepthTextureBlueprintFunctionLibrary Function IsValidDepthSwapchain 
struct Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_IsValidDepthSwapchain_Statics
{
	struct AndroidXRDepthTextureBlueprintFunctionLibrary_eventIsValidDepthSwapchain_Parms
	{
		FAndroidXRDepthSwapchain Swapchain;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Depth Texture Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Determines whether or not an FAndroidXRDepthSwapchain is valid.\n     * @param[in] Swapchain Swapchain to be verified.\n     * @return True if the swapchain is valid.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRDepthTextureBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines whether or not an FAndroidXRDepthSwapchain is valid.\n@param[in] Swapchain Swapchain to be verified.\n@return True if the swapchain is valid." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Swapchain_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Swapchain;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_IsValidDepthSwapchain_Statics::NewProp_Swapchain = { "Swapchain", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRDepthTextureBlueprintFunctionLibrary_eventIsValidDepthSwapchain_Parms, Swapchain), Z_Construct_UScriptStruct_FAndroidXRDepthSwapchain, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Swapchain_MetaData), NewProp_Swapchain_MetaData) }; // 1959412716
void Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_IsValidDepthSwapchain_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRDepthTextureBlueprintFunctionLibrary_eventIsValidDepthSwapchain_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_IsValidDepthSwapchain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRDepthTextureBlueprintFunctionLibrary_eventIsValidDepthSwapchain_Parms), &Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_IsValidDepthSwapchain_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_IsValidDepthSwapchain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_IsValidDepthSwapchain_Statics::NewProp_Swapchain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_IsValidDepthSwapchain_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_IsValidDepthSwapchain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_IsValidDepthSwapchain_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRDepthTextureBlueprintFunctionLibrary, nullptr, "IsValidDepthSwapchain", Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_IsValidDepthSwapchain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_IsValidDepthSwapchain_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_IsValidDepthSwapchain_Statics::AndroidXRDepthTextureBlueprintFunctionLibrary_eventIsValidDepthSwapchain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_IsValidDepthSwapchain_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_IsValidDepthSwapchain_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_IsValidDepthSwapchain_Statics::AndroidXRDepthTextureBlueprintFunctionLibrary_eventIsValidDepthSwapchain_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_IsValidDepthSwapchain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_IsValidDepthSwapchain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRDepthTextureBlueprintFunctionLibrary::execIsValidDepthSwapchain)
{
	P_GET_STRUCT_REF(FAndroidXRDepthSwapchain,Z_Param_Out_Swapchain);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRDepthTextureBlueprintFunctionLibrary::IsValidDepthSwapchain(Z_Param_Out_Swapchain);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRDepthTextureBlueprintFunctionLibrary Function IsValidDepthSwapchain 

// ********** Begin Class UAndroidXRDepthTextureBlueprintFunctionLibrary Function UpdateTextureFromDepthSwapchainImage 
struct Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_UpdateTextureFromDepthSwapchainImage_Statics
{
	struct AndroidXRDepthTextureBlueprintFunctionLibrary_eventUpdateTextureFromDepthSwapchainImage_Parms
	{
		FAndroidXRDepthSwapchainImage SwapchainImage;
		EAndroidXRDepthSwapchainCreateFlag ImageSource;
		UTexture2D* Texture;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Depth Texture Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Updates a texture from a swapchain image.\n     * @param[in] SwapchainImage The swapchain image to use as the source.\n     * @param[in] ImageSource Flag defining desired image type.\n     * @param[in] Texture The texture to be updated.\n     * @return True if successful.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRDepthTextureBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates a texture from a swapchain image.\n@param[in] SwapchainImage The swapchain image to use as the source.\n@param[in] ImageSource Flag defining desired image type.\n@param[in] Texture The texture to be updated.\n@return True if successful." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwapchainImage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SwapchainImage;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ImageSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ImageSource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_UpdateTextureFromDepthSwapchainImage_Statics::NewProp_SwapchainImage = { "SwapchainImage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRDepthTextureBlueprintFunctionLibrary_eventUpdateTextureFromDepthSwapchainImage_Parms, SwapchainImage), Z_Construct_UScriptStruct_FAndroidXRDepthSwapchainImage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwapchainImage_MetaData), NewProp_SwapchainImage_MetaData) }; // 765442177
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_UpdateTextureFromDepthSwapchainImage_Statics::NewProp_ImageSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_UpdateTextureFromDepthSwapchainImage_Statics::NewProp_ImageSource = { "ImageSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRDepthTextureBlueprintFunctionLibrary_eventUpdateTextureFromDepthSwapchainImage_Parms, ImageSource), Z_Construct_UEnum_AndroidXR_EAndroidXRDepthSwapchainCreateFlag, METADATA_PARAMS(0, nullptr) }; // 2603938546
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_UpdateTextureFromDepthSwapchainImage_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRDepthTextureBlueprintFunctionLibrary_eventUpdateTextureFromDepthSwapchainImage_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_UpdateTextureFromDepthSwapchainImage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRDepthTextureBlueprintFunctionLibrary_eventUpdateTextureFromDepthSwapchainImage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_UpdateTextureFromDepthSwapchainImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRDepthTextureBlueprintFunctionLibrary_eventUpdateTextureFromDepthSwapchainImage_Parms), &Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_UpdateTextureFromDepthSwapchainImage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_UpdateTextureFromDepthSwapchainImage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_UpdateTextureFromDepthSwapchainImage_Statics::NewProp_SwapchainImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_UpdateTextureFromDepthSwapchainImage_Statics::NewProp_ImageSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_UpdateTextureFromDepthSwapchainImage_Statics::NewProp_ImageSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_UpdateTextureFromDepthSwapchainImage_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_UpdateTextureFromDepthSwapchainImage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_UpdateTextureFromDepthSwapchainImage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_UpdateTextureFromDepthSwapchainImage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRDepthTextureBlueprintFunctionLibrary, nullptr, "UpdateTextureFromDepthSwapchainImage", Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_UpdateTextureFromDepthSwapchainImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_UpdateTextureFromDepthSwapchainImage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_UpdateTextureFromDepthSwapchainImage_Statics::AndroidXRDepthTextureBlueprintFunctionLibrary_eventUpdateTextureFromDepthSwapchainImage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_UpdateTextureFromDepthSwapchainImage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_UpdateTextureFromDepthSwapchainImage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_UpdateTextureFromDepthSwapchainImage_Statics::AndroidXRDepthTextureBlueprintFunctionLibrary_eventUpdateTextureFromDepthSwapchainImage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_UpdateTextureFromDepthSwapchainImage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_UpdateTextureFromDepthSwapchainImage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRDepthTextureBlueprintFunctionLibrary::execUpdateTextureFromDepthSwapchainImage)
{
	P_GET_STRUCT_REF(FAndroidXRDepthSwapchainImage,Z_Param_Out_SwapchainImage);
	P_GET_ENUM(EAndroidXRDepthSwapchainCreateFlag,Z_Param_ImageSource);
	P_GET_OBJECT(UTexture2D,Z_Param_Texture);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRDepthTextureBlueprintFunctionLibrary::UpdateTextureFromDepthSwapchainImage(Z_Param_Out_SwapchainImage,EAndroidXRDepthSwapchainCreateFlag(Z_Param_ImageSource),Z_Param_Texture);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRDepthTextureBlueprintFunctionLibrary Function UpdateTextureFromDepthSwapchainImage 

// ********** Begin Class UAndroidXRDepthTextureBlueprintFunctionLibrary ***************************
void UAndroidXRDepthTextureBlueprintFunctionLibrary::StaticRegisterNativesUAndroidXRDepthTextureBlueprintFunctionLibrary()
{
	UClass* Class = UAndroidXRDepthTextureBlueprintFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AcquireDepthSwapchainImages", &UAndroidXRDepthTextureBlueprintFunctionLibrary::execAcquireDepthSwapchainImages },
		{ "CreateDepthSwapchain", &UAndroidXRDepthTextureBlueprintFunctionLibrary::execCreateDepthSwapchain },
		{ "CreateDepthSwapchainTexture", &UAndroidXRDepthTextureBlueprintFunctionLibrary::execCreateDepthSwapchainTexture },
		{ "DestroyDepthSwapchain", &UAndroidXRDepthTextureBlueprintFunctionLibrary::execDestroyDepthSwapchain },
		{ "EnumerateDepthResolutions", &UAndroidXRDepthTextureBlueprintFunctionLibrary::execEnumerateDepthResolutions },
		{ "EnumerateDepthSwapchainImages", &UAndroidXRDepthTextureBlueprintFunctionLibrary::execEnumerateDepthSwapchainImages },
		{ "GetDepthSwapchainSupported", &UAndroidXRDepthTextureBlueprintFunctionLibrary::execGetDepthSwapchainSupported },
		{ "IsValidDepthSwapchain", &UAndroidXRDepthTextureBlueprintFunctionLibrary::execIsValidDepthSwapchain },
		{ "UpdateTextureFromDepthSwapchainImage", &UAndroidXRDepthTextureBlueprintFunctionLibrary::execUpdateTextureFromDepthSwapchainImage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRDepthTextureBlueprintFunctionLibrary;
UClass* UAndroidXRDepthTextureBlueprintFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UAndroidXRDepthTextureBlueprintFunctionLibrary;
	if (!Z_Registration_Info_UClass_UAndroidXRDepthTextureBlueprintFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRDepthTextureBlueprintFunctionLibrary"),
			Z_Registration_Info_UClass_UAndroidXRDepthTextureBlueprintFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUAndroidXRDepthTextureBlueprintFunctionLibrary,
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
	return Z_Registration_Info_UClass_UAndroidXRDepthTextureBlueprintFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRDepthTextureBlueprintFunctionLibrary_NoRegister()
{
	return UAndroidXRDepthTextureBlueprintFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRDepthTextureBlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AndroidXRDepthTexture" },
		{ "IncludePath", "AndroidXRDepthTextureBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/AndroidXRDepthTextureBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_AcquireDepthSwapchainImages, "AcquireDepthSwapchainImages" }, // 978386571
		{ &Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchain, "CreateDepthSwapchain" }, // 1703369318
		{ &Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_CreateDepthSwapchainTexture, "CreateDepthSwapchainTexture" }, // 2331396133
		{ &Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_DestroyDepthSwapchain, "DestroyDepthSwapchain" }, // 662246216
		{ &Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthResolutions, "EnumerateDepthResolutions" }, // 1339794193
		{ &Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_EnumerateDepthSwapchainImages, "EnumerateDepthSwapchainImages" }, // 4104168695
		{ &Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_GetDepthSwapchainSupported, "GetDepthSwapchainSupported" }, // 3838186583
		{ &Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_IsValidDepthSwapchain, "IsValidDepthSwapchain" }, // 928612388
		{ &Z_Construct_UFunction_UAndroidXRDepthTextureBlueprintFunctionLibrary_UpdateTextureFromDepthSwapchainImage, "UpdateTextureFromDepthSwapchainImage" }, // 3631520022
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRDepthTextureBlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAndroidXRDepthTextureBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRDepthTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRDepthTextureBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRDepthTextureBlueprintFunctionLibrary_Statics::ClassParams = {
	&UAndroidXRDepthTextureBlueprintFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRDepthTextureBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRDepthTextureBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRDepthTextureBlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UAndroidXRDepthTextureBlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRDepthTextureBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UAndroidXRDepthTextureBlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRDepthTextureBlueprintFunctionLibrary.OuterSingleton;
}
UAndroidXRDepthTextureBlueprintFunctionLibrary::UAndroidXRDepthTextureBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRDepthTextureBlueprintFunctionLibrary);
UAndroidXRDepthTextureBlueprintFunctionLibrary::~UAndroidXRDepthTextureBlueprintFunctionLibrary() {}
// ********** End Class UAndroidXRDepthTextureBlueprintFunctionLibrary *****************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDepthTexture_Source_AndroidXRDepthTexture_Public_AndroidXRDepthTextureBlueprintFunctionLibrary_h__Script_AndroidXRDepthTexture_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXRDepthTextureBlueprintFunctionLibrary, UAndroidXRDepthTextureBlueprintFunctionLibrary::StaticClass, TEXT("UAndroidXRDepthTextureBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UAndroidXRDepthTextureBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRDepthTextureBlueprintFunctionLibrary), 2154219095U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDepthTexture_Source_AndroidXRDepthTexture_Public_AndroidXRDepthTextureBlueprintFunctionLibrary_h__Script_AndroidXRDepthTexture_212963401(TEXT("/Script/AndroidXRDepthTexture"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDepthTexture_Source_AndroidXRDepthTexture_Public_AndroidXRDepthTextureBlueprintFunctionLibrary_h__Script_AndroidXRDepthTexture_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDepthTexture_Source_AndroidXRDepthTexture_Public_AndroidXRDepthTextureBlueprintFunctionLibrary_h__Script_AndroidXRDepthTexture_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
