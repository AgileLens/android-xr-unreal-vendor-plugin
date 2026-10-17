// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRBlueprintFunctionLibrary.h"
#include "AndroidXRTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRBlueprintFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXR_API UClass* Z_Construct_UClass_UAndroidXRBlueprintFunctionLibrary();
ANDROIDXR_API UClass* Z_Construct_UClass_UAndroidXRBlueprintFunctionLibrary_NoRegister();
ANDROIDXR_API UClass* Z_Construct_UClass_UAndroidXREventProxy_NoRegister();
ANDROIDXR_API UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRPassthroughCameraState();
ANDROIDXR_API UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsDomain();
ANDROIDXR_API UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsLevel();
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRSpace();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AndroidXR();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAndroidXRBlueprintFunctionLibrary Function DestroySpace *****************
struct Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_DestroySpace_Statics
{
	struct AndroidXRBlueprintFunctionLibrary_eventDestroySpace_Parms
	{
		FAndroidXRSpace Space;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Destroys the underlying XrSpace.\n     * @param[in] Space Space to be destroyed.\n     * @return True if the underlying API call was successful.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Destroys the underlying XrSpace.\n@param[in] Space Space to be destroyed.\n@return True if the underlying API call was successful." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Space;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_DestroySpace_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRBlueprintFunctionLibrary_eventDestroySpace_Parms, Space), Z_Construct_UScriptStruct_FAndroidXRSpace, METADATA_PARAMS(0, nullptr) }; // 1341678083
void Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_DestroySpace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRBlueprintFunctionLibrary_eventDestroySpace_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_DestroySpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRBlueprintFunctionLibrary_eventDestroySpace_Parms), &Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_DestroySpace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_DestroySpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_DestroySpace_Statics::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_DestroySpace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_DestroySpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_DestroySpace_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRBlueprintFunctionLibrary, nullptr, "DestroySpace", Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_DestroySpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_DestroySpace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_DestroySpace_Statics::AndroidXRBlueprintFunctionLibrary_eventDestroySpace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_DestroySpace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_DestroySpace_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_DestroySpace_Statics::AndroidXRBlueprintFunctionLibrary_eventDestroySpace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_DestroySpace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_DestroySpace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRBlueprintFunctionLibrary::execDestroySpace)
{
	P_GET_STRUCT_REF(FAndroidXRSpace,Z_Param_Out_Space);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRBlueprintFunctionLibrary::DestroySpace(Z_Param_Out_Space);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRBlueprintFunctionLibrary Function DestroySpace *******************

// ********** Begin Class UAndroidXRBlueprintFunctionLibrary Function EnumerateDisplayRefreshRates *
struct Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_EnumerateDisplayRefreshRates_Statics
{
	struct AndroidXRBlueprintFunctionLibrary_eventEnumerateDisplayRefreshRates_Parms
	{
		TArray<float> DisplayRefreshRates;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Function Library|Display Refresh Rate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Enumerates the available display refresh rates.\n     * @param[out] DisplayRefreshRates Array to be populated with refresh rates.\n     * @return True if the underlying API call was successful.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumerates the available display refresh rates.\n@param[out] DisplayRefreshRates Array to be populated with refresh rates.\n@return True if the underlying API call was successful." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplayRefreshRates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DisplayRefreshRates;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_EnumerateDisplayRefreshRates_Statics::NewProp_DisplayRefreshRates_Inner = { "DisplayRefreshRates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_EnumerateDisplayRefreshRates_Statics::NewProp_DisplayRefreshRates = { "DisplayRefreshRates", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRBlueprintFunctionLibrary_eventEnumerateDisplayRefreshRates_Parms, DisplayRefreshRates), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_EnumerateDisplayRefreshRates_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRBlueprintFunctionLibrary_eventEnumerateDisplayRefreshRates_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_EnumerateDisplayRefreshRates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRBlueprintFunctionLibrary_eventEnumerateDisplayRefreshRates_Parms), &Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_EnumerateDisplayRefreshRates_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_EnumerateDisplayRefreshRates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_EnumerateDisplayRefreshRates_Statics::NewProp_DisplayRefreshRates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_EnumerateDisplayRefreshRates_Statics::NewProp_DisplayRefreshRates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_EnumerateDisplayRefreshRates_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_EnumerateDisplayRefreshRates_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_EnumerateDisplayRefreshRates_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRBlueprintFunctionLibrary, nullptr, "EnumerateDisplayRefreshRates", Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_EnumerateDisplayRefreshRates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_EnumerateDisplayRefreshRates_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_EnumerateDisplayRefreshRates_Statics::AndroidXRBlueprintFunctionLibrary_eventEnumerateDisplayRefreshRates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_EnumerateDisplayRefreshRates_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_EnumerateDisplayRefreshRates_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_EnumerateDisplayRefreshRates_Statics::AndroidXRBlueprintFunctionLibrary_eventEnumerateDisplayRefreshRates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_EnumerateDisplayRefreshRates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_EnumerateDisplayRefreshRates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRBlueprintFunctionLibrary::execEnumerateDisplayRefreshRates)
{
	P_GET_TARRAY_REF(float,Z_Param_Out_DisplayRefreshRates);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRBlueprintFunctionLibrary::EnumerateDisplayRefreshRates(Z_Param_Out_DisplayRefreshRates);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRBlueprintFunctionLibrary Function EnumerateDisplayRefreshRates ***

// ********** Begin Class UAndroidXRBlueprintFunctionLibrary Function GetCameraPassthroughSupported 
struct Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetCameraPassthroughSupported_Statics
{
	struct AndroidXRBlueprintFunctionLibrary_eventGetCameraPassthroughSupported_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Function Library|Passthrough" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Returns whether or not camera passthrough is supported\n     * @return True if camera passthrough is supported.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether or not camera passthrough is supported\n@return True if camera passthrough is supported." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetCameraPassthroughSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRBlueprintFunctionLibrary_eventGetCameraPassthroughSupported_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetCameraPassthroughSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRBlueprintFunctionLibrary_eventGetCameraPassthroughSupported_Parms), &Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetCameraPassthroughSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetCameraPassthroughSupported_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetCameraPassthroughSupported_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetCameraPassthroughSupported_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetCameraPassthroughSupported_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRBlueprintFunctionLibrary, nullptr, "GetCameraPassthroughSupported", Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetCameraPassthroughSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetCameraPassthroughSupported_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetCameraPassthroughSupported_Statics::AndroidXRBlueprintFunctionLibrary_eventGetCameraPassthroughSupported_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetCameraPassthroughSupported_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetCameraPassthroughSupported_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetCameraPassthroughSupported_Statics::AndroidXRBlueprintFunctionLibrary_eventGetCameraPassthroughSupported_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetCameraPassthroughSupported()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetCameraPassthroughSupported_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRBlueprintFunctionLibrary::execGetCameraPassthroughSupported)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRBlueprintFunctionLibrary::GetCameraPassthroughSupported();
	P_NATIVE_END;
}
// ********** End Class UAndroidXRBlueprintFunctionLibrary Function GetCameraPassthroughSupported **

// ********** Begin Class UAndroidXRBlueprintFunctionLibrary Function GetDisplayRefreshRate ********
struct Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetDisplayRefreshRate_Statics
{
	struct AndroidXRBlueprintFunctionLibrary_eventGetDisplayRefreshRate_Parms
	{
		float DisplayRefreshRate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Function Library|Display Refresh Rate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Gets the current display refresh rate.\n     * @param[out] DisplayRefreshRate The current display refresh rate.\n     * @return True if the underlying API call was successful.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current display refresh rate.\n@param[out] DisplayRefreshRate The current display refresh rate.\n@return True if the underlying API call was successful." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplayRefreshRate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetDisplayRefreshRate_Statics::NewProp_DisplayRefreshRate = { "DisplayRefreshRate", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRBlueprintFunctionLibrary_eventGetDisplayRefreshRate_Parms, DisplayRefreshRate), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetDisplayRefreshRate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRBlueprintFunctionLibrary_eventGetDisplayRefreshRate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetDisplayRefreshRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRBlueprintFunctionLibrary_eventGetDisplayRefreshRate_Parms), &Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetDisplayRefreshRate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetDisplayRefreshRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetDisplayRefreshRate_Statics::NewProp_DisplayRefreshRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetDisplayRefreshRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetDisplayRefreshRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetDisplayRefreshRate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRBlueprintFunctionLibrary, nullptr, "GetDisplayRefreshRate", Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetDisplayRefreshRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetDisplayRefreshRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetDisplayRefreshRate_Statics::AndroidXRBlueprintFunctionLibrary_eventGetDisplayRefreshRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetDisplayRefreshRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetDisplayRefreshRate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetDisplayRefreshRate_Statics::AndroidXRBlueprintFunctionLibrary_eventGetDisplayRefreshRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetDisplayRefreshRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetDisplayRefreshRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRBlueprintFunctionLibrary::execGetDisplayRefreshRate)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_DisplayRefreshRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRBlueprintFunctionLibrary::GetDisplayRefreshRate(Z_Param_Out_DisplayRefreshRate);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRBlueprintFunctionLibrary Function GetDisplayRefreshRate **********

// ********** Begin Class UAndroidXRBlueprintFunctionLibrary Function GetEventProxy ****************
struct Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetEventProxy_Statics
{
	struct AndroidXRBlueprintFunctionLibrary_eventGetEventProxy_Parms
	{
		UAndroidXREventProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Gets the AndroidXR event proxy, which allows users to bind to\n     * delegates which fired in response to XrEvents.\n     * @return AndroidXR event proxy static instance.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the AndroidXR event proxy, which allows users to bind to\ndelegates which fired in response to XrEvents.\n@return AndroidXR event proxy static instance." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetEventProxy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRBlueprintFunctionLibrary_eventGetEventProxy_Parms, ReturnValue), Z_Construct_UClass_UAndroidXREventProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetEventProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetEventProxy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetEventProxy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetEventProxy_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRBlueprintFunctionLibrary, nullptr, "GetEventProxy", Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetEventProxy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetEventProxy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetEventProxy_Statics::AndroidXRBlueprintFunctionLibrary_eventGetEventProxy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetEventProxy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetEventProxy_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetEventProxy_Statics::AndroidXRBlueprintFunctionLibrary_eventGetEventProxy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetEventProxy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetEventProxy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRBlueprintFunctionLibrary::execGetEventProxy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAndroidXREventProxy**)Z_Param__Result=UAndroidXRBlueprintFunctionLibrary::GetEventProxy();
	P_NATIVE_END;
}
// ********** End Class UAndroidXRBlueprintFunctionLibrary Function GetEventProxy ******************

// ********** Begin Class UAndroidXRBlueprintFunctionLibrary Function GetPassthroughCameraState ****
struct Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetPassthroughCameraState_Statics
{
	struct AndroidXRBlueprintFunctionLibrary_eventGetPassthroughCameraState_Parms
	{
		EAndroidXRPassthroughCameraState CameraState;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Function Library|Passthrough" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Gets the passthrough camera state\n     * @param[out] CameraState The current passthrough camera state.\n     * @return True if the underlying API call was successful.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the passthrough camera state\n@param[out] CameraState The current passthrough camera state.\n@return True if the underlying API call was successful." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CameraState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CameraState;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetPassthroughCameraState_Statics::NewProp_CameraState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetPassthroughCameraState_Statics::NewProp_CameraState = { "CameraState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRBlueprintFunctionLibrary_eventGetPassthroughCameraState_Parms, CameraState), Z_Construct_UEnum_AndroidXR_EAndroidXRPassthroughCameraState, METADATA_PARAMS(0, nullptr) }; // 559067176
void Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetPassthroughCameraState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRBlueprintFunctionLibrary_eventGetPassthroughCameraState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetPassthroughCameraState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRBlueprintFunctionLibrary_eventGetPassthroughCameraState_Parms), &Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetPassthroughCameraState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetPassthroughCameraState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetPassthroughCameraState_Statics::NewProp_CameraState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetPassthroughCameraState_Statics::NewProp_CameraState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetPassthroughCameraState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetPassthroughCameraState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetPassthroughCameraState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRBlueprintFunctionLibrary, nullptr, "GetPassthroughCameraState", Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetPassthroughCameraState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetPassthroughCameraState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetPassthroughCameraState_Statics::AndroidXRBlueprintFunctionLibrary_eventGetPassthroughCameraState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetPassthroughCameraState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetPassthroughCameraState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetPassthroughCameraState_Statics::AndroidXRBlueprintFunctionLibrary_eventGetPassthroughCameraState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetPassthroughCameraState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetPassthroughCameraState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRBlueprintFunctionLibrary::execGetPassthroughCameraState)
{
	P_GET_ENUM_REF(EAndroidXRPassthroughCameraState,Z_Param_Out_CameraState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRBlueprintFunctionLibrary::GetPassthroughCameraState((EAndroidXRPassthroughCameraState&)(Z_Param_Out_CameraState));
	P_NATIVE_END;
}
// ********** End Class UAndroidXRBlueprintFunctionLibrary Function GetPassthroughCameraState ******

// ********** Begin Class UAndroidXRBlueprintFunctionLibrary Function IsValidSpace *****************
struct Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_IsValidSpace_Statics
{
	struct AndroidXRBlueprintFunctionLibrary_eventIsValidSpace_Parms
	{
		FAndroidXRSpace Space;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Determines whether or not an FAndroidXRSpace is valid.\n     * @param[in] Space Space to be verified.\n     * @return True if the space is valid.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines whether or not an FAndroidXRSpace is valid.\n@param[in] Space Space to be verified.\n@return True if the space is valid." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Space;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_IsValidSpace_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRBlueprintFunctionLibrary_eventIsValidSpace_Parms, Space), Z_Construct_UScriptStruct_FAndroidXRSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Space_MetaData), NewProp_Space_MetaData) }; // 1341678083
void Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_IsValidSpace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRBlueprintFunctionLibrary_eventIsValidSpace_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_IsValidSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRBlueprintFunctionLibrary_eventIsValidSpace_Parms), &Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_IsValidSpace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_IsValidSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_IsValidSpace_Statics::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_IsValidSpace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_IsValidSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_IsValidSpace_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRBlueprintFunctionLibrary, nullptr, "IsValidSpace", Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_IsValidSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_IsValidSpace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_IsValidSpace_Statics::AndroidXRBlueprintFunctionLibrary_eventIsValidSpace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_IsValidSpace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_IsValidSpace_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_IsValidSpace_Statics::AndroidXRBlueprintFunctionLibrary_eventIsValidSpace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_IsValidSpace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_IsValidSpace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRBlueprintFunctionLibrary::execIsValidSpace)
{
	P_GET_STRUCT_REF(FAndroidXRSpace,Z_Param_Out_Space);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRBlueprintFunctionLibrary::IsValidSpace(Z_Param_Out_Space);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRBlueprintFunctionLibrary Function IsValidSpace *******************

// ********** Begin Class UAndroidXRBlueprintFunctionLibrary Function LocateSpace ******************
struct Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_LocateSpace_Statics
{
	struct AndroidXRBlueprintFunctionLibrary_eventLocateSpace_Parms
	{
		FAndroidXRSpace Space;
		FTransform Transform;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Locates the underlying XrSpace and provides its current transform\n     * (base space is the HMD's).\n     * @param[in] Space Space to be located.\n     * @param[out] Current transform.\n     * @return True if the underlying API call was successful.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Locates the underlying XrSpace and provides its current transform\n(base space is the HMD's).\n@param[in] Space Space to be located.\n@param[out] Current transform.\n@return True if the underlying API call was successful." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Space;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_LocateSpace_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRBlueprintFunctionLibrary_eventLocateSpace_Parms, Space), Z_Construct_UScriptStruct_FAndroidXRSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Space_MetaData), NewProp_Space_MetaData) }; // 1341678083
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_LocateSpace_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRBlueprintFunctionLibrary_eventLocateSpace_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_LocateSpace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRBlueprintFunctionLibrary_eventLocateSpace_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_LocateSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRBlueprintFunctionLibrary_eventLocateSpace_Parms), &Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_LocateSpace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_LocateSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_LocateSpace_Statics::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_LocateSpace_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_LocateSpace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_LocateSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_LocateSpace_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRBlueprintFunctionLibrary, nullptr, "LocateSpace", Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_LocateSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_LocateSpace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_LocateSpace_Statics::AndroidXRBlueprintFunctionLibrary_eventLocateSpace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_LocateSpace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_LocateSpace_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_LocateSpace_Statics::AndroidXRBlueprintFunctionLibrary_eventLocateSpace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_LocateSpace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_LocateSpace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRBlueprintFunctionLibrary::execLocateSpace)
{
	P_GET_STRUCT_REF(FAndroidXRSpace,Z_Param_Out_Space);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRBlueprintFunctionLibrary::LocateSpace(Z_Param_Out_Space,Z_Param_Out_Transform);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRBlueprintFunctionLibrary Function LocateSpace ********************

// ********** Begin Class UAndroidXRBlueprintFunctionLibrary Function PerfSettingsSetPerformanceLevel 
struct Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_PerfSettingsSetPerformanceLevel_Statics
{
	struct AndroidXRBlueprintFunctionLibrary_eventPerfSettingsSetPerformanceLevel_Parms
	{
		EAndroidXRPerfSettingsDomain SettingsDomain;
		EAndroidXRPerfSettingsLevel SettingsLevel;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Function Library|Performance Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Set the performance level for a settings domain.\n     * @param[in] SettingsDomain Settings domain to set.\n     * @param[in] SettingsLevel Level to set.\n     * @return True if the underlying API call was successful.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the performance level for a settings domain.\n@param[in] SettingsDomain Settings domain to set.\n@param[in] SettingsLevel Level to set.\n@return True if the underlying API call was successful." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SettingsDomain_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SettingsDomain;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SettingsLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SettingsLevel;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_PerfSettingsSetPerformanceLevel_Statics::NewProp_SettingsDomain_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_PerfSettingsSetPerformanceLevel_Statics::NewProp_SettingsDomain = { "SettingsDomain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRBlueprintFunctionLibrary_eventPerfSettingsSetPerformanceLevel_Parms, SettingsDomain), Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsDomain, METADATA_PARAMS(0, nullptr) }; // 3600440092
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_PerfSettingsSetPerformanceLevel_Statics::NewProp_SettingsLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_PerfSettingsSetPerformanceLevel_Statics::NewProp_SettingsLevel = { "SettingsLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRBlueprintFunctionLibrary_eventPerfSettingsSetPerformanceLevel_Parms, SettingsLevel), Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsLevel, METADATA_PARAMS(0, nullptr) }; // 3593975389
void Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_PerfSettingsSetPerformanceLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRBlueprintFunctionLibrary_eventPerfSettingsSetPerformanceLevel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_PerfSettingsSetPerformanceLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRBlueprintFunctionLibrary_eventPerfSettingsSetPerformanceLevel_Parms), &Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_PerfSettingsSetPerformanceLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_PerfSettingsSetPerformanceLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_PerfSettingsSetPerformanceLevel_Statics::NewProp_SettingsDomain_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_PerfSettingsSetPerformanceLevel_Statics::NewProp_SettingsDomain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_PerfSettingsSetPerformanceLevel_Statics::NewProp_SettingsLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_PerfSettingsSetPerformanceLevel_Statics::NewProp_SettingsLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_PerfSettingsSetPerformanceLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_PerfSettingsSetPerformanceLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_PerfSettingsSetPerformanceLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRBlueprintFunctionLibrary, nullptr, "PerfSettingsSetPerformanceLevel", Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_PerfSettingsSetPerformanceLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_PerfSettingsSetPerformanceLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_PerfSettingsSetPerformanceLevel_Statics::AndroidXRBlueprintFunctionLibrary_eventPerfSettingsSetPerformanceLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_PerfSettingsSetPerformanceLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_PerfSettingsSetPerformanceLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_PerfSettingsSetPerformanceLevel_Statics::AndroidXRBlueprintFunctionLibrary_eventPerfSettingsSetPerformanceLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_PerfSettingsSetPerformanceLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_PerfSettingsSetPerformanceLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRBlueprintFunctionLibrary::execPerfSettingsSetPerformanceLevel)
{
	P_GET_ENUM(EAndroidXRPerfSettingsDomain,Z_Param_SettingsDomain);
	P_GET_ENUM(EAndroidXRPerfSettingsLevel,Z_Param_SettingsLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRBlueprintFunctionLibrary::PerfSettingsSetPerformanceLevel(EAndroidXRPerfSettingsDomain(Z_Param_SettingsDomain),EAndroidXRPerfSettingsLevel(Z_Param_SettingsLevel));
	P_NATIVE_END;
}
// ********** End Class UAndroidXRBlueprintFunctionLibrary Function PerfSettingsSetPerformanceLevel 

// ********** Begin Class UAndroidXRBlueprintFunctionLibrary Function RequestDisplayRefreshRate ****
struct Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_RequestDisplayRefreshRate_Statics
{
	struct AndroidXRBlueprintFunctionLibrary_eventRequestDisplayRefreshRate_Parms
	{
		float DisplayRefreshRate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Function Library|Display Refresh Rate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Requests a display refresh rate.\n     * @param[in] DisplayRefreshRate Requested display refresh rate.\n     * @return True if the underlying API call was successful.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requests a display refresh rate.\n@param[in] DisplayRefreshRate Requested display refresh rate.\n@return True if the underlying API call was successful." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplayRefreshRate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_RequestDisplayRefreshRate_Statics::NewProp_DisplayRefreshRate = { "DisplayRefreshRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRBlueprintFunctionLibrary_eventRequestDisplayRefreshRate_Parms, DisplayRefreshRate), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_RequestDisplayRefreshRate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRBlueprintFunctionLibrary_eventRequestDisplayRefreshRate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_RequestDisplayRefreshRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRBlueprintFunctionLibrary_eventRequestDisplayRefreshRate_Parms), &Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_RequestDisplayRefreshRate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_RequestDisplayRefreshRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_RequestDisplayRefreshRate_Statics::NewProp_DisplayRefreshRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_RequestDisplayRefreshRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_RequestDisplayRefreshRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_RequestDisplayRefreshRate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRBlueprintFunctionLibrary, nullptr, "RequestDisplayRefreshRate", Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_RequestDisplayRefreshRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_RequestDisplayRefreshRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_RequestDisplayRefreshRate_Statics::AndroidXRBlueprintFunctionLibrary_eventRequestDisplayRefreshRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_RequestDisplayRefreshRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_RequestDisplayRefreshRate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_RequestDisplayRefreshRate_Statics::AndroidXRBlueprintFunctionLibrary_eventRequestDisplayRefreshRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_RequestDisplayRefreshRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_RequestDisplayRefreshRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRBlueprintFunctionLibrary::execRequestDisplayRefreshRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DisplayRefreshRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRBlueprintFunctionLibrary::RequestDisplayRefreshRate(Z_Param_DisplayRefreshRate);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRBlueprintFunctionLibrary Function RequestDisplayRefreshRate ******

// ********** Begin Class UAndroidXRBlueprintFunctionLibrary ***************************************
void UAndroidXRBlueprintFunctionLibrary::StaticRegisterNativesUAndroidXRBlueprintFunctionLibrary()
{
	UClass* Class = UAndroidXRBlueprintFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DestroySpace", &UAndroidXRBlueprintFunctionLibrary::execDestroySpace },
		{ "EnumerateDisplayRefreshRates", &UAndroidXRBlueprintFunctionLibrary::execEnumerateDisplayRefreshRates },
		{ "GetCameraPassthroughSupported", &UAndroidXRBlueprintFunctionLibrary::execGetCameraPassthroughSupported },
		{ "GetDisplayRefreshRate", &UAndroidXRBlueprintFunctionLibrary::execGetDisplayRefreshRate },
		{ "GetEventProxy", &UAndroidXRBlueprintFunctionLibrary::execGetEventProxy },
		{ "GetPassthroughCameraState", &UAndroidXRBlueprintFunctionLibrary::execGetPassthroughCameraState },
		{ "IsValidSpace", &UAndroidXRBlueprintFunctionLibrary::execIsValidSpace },
		{ "LocateSpace", &UAndroidXRBlueprintFunctionLibrary::execLocateSpace },
		{ "PerfSettingsSetPerformanceLevel", &UAndroidXRBlueprintFunctionLibrary::execPerfSettingsSetPerformanceLevel },
		{ "RequestDisplayRefreshRate", &UAndroidXRBlueprintFunctionLibrary::execRequestDisplayRefreshRate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRBlueprintFunctionLibrary;
UClass* UAndroidXRBlueprintFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UAndroidXRBlueprintFunctionLibrary;
	if (!Z_Registration_Info_UClass_UAndroidXRBlueprintFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRBlueprintFunctionLibrary"),
			Z_Registration_Info_UClass_UAndroidXRBlueprintFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUAndroidXRBlueprintFunctionLibrary,
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
	return Z_Registration_Info_UClass_UAndroidXRBlueprintFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRBlueprintFunctionLibrary_NoRegister()
{
	return UAndroidXRBlueprintFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRBlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AndroidXR" },
		{ "IncludePath", "AndroidXRBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/AndroidXRBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_DestroySpace, "DestroySpace" }, // 2167450262
		{ &Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_EnumerateDisplayRefreshRates, "EnumerateDisplayRefreshRates" }, // 2974104745
		{ &Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetCameraPassthroughSupported, "GetCameraPassthroughSupported" }, // 237114966
		{ &Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetDisplayRefreshRate, "GetDisplayRefreshRate" }, // 1615686307
		{ &Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetEventProxy, "GetEventProxy" }, // 210255749
		{ &Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_GetPassthroughCameraState, "GetPassthroughCameraState" }, // 3299048282
		{ &Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_IsValidSpace, "IsValidSpace" }, // 2708679729
		{ &Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_LocateSpace, "LocateSpace" }, // 3297470457
		{ &Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_PerfSettingsSetPerformanceLevel, "PerfSettingsSetPerformanceLevel" }, // 759384935
		{ &Z_Construct_UFunction_UAndroidXRBlueprintFunctionLibrary_RequestDisplayRefreshRate, "RequestDisplayRefreshRate" }, // 4147309674
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRBlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAndroidXRBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRBlueprintFunctionLibrary_Statics::ClassParams = {
	&UAndroidXRBlueprintFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRBlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UAndroidXRBlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UAndroidXRBlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRBlueprintFunctionLibrary.OuterSingleton;
}
UAndroidXRBlueprintFunctionLibrary::UAndroidXRBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRBlueprintFunctionLibrary);
UAndroidXRBlueprintFunctionLibrary::~UAndroidXRBlueprintFunctionLibrary() {}
// ********** End Class UAndroidXRBlueprintFunctionLibrary *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXR_Public_AndroidXRBlueprintFunctionLibrary_h__Script_AndroidXR_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXRBlueprintFunctionLibrary, UAndroidXRBlueprintFunctionLibrary::StaticClass, TEXT("UAndroidXRBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UAndroidXRBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRBlueprintFunctionLibrary), 2838805340U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXR_Public_AndroidXRBlueprintFunctionLibrary_h__Script_AndroidXR_1707692540(TEXT("/Script/AndroidXR"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXR_Public_AndroidXRBlueprintFunctionLibrary_h__Script_AndroidXR_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXR_Public_AndroidXRBlueprintFunctionLibrary_h__Script_AndroidXR_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
