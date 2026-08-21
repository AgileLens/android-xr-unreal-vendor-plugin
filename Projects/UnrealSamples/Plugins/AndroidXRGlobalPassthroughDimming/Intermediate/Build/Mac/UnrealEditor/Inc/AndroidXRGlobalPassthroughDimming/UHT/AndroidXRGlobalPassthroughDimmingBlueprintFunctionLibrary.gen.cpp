// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXRGLOBALPASSTHROUGHDIMMING_API UClass* Z_Construct_UClass_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary();
ANDROIDXRGLOBALPASSTHROUGHDIMMING_API UClass* Z_Construct_UClass_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_NoRegister();
ANDROIDXRGLOBALPASSTHROUGHDIMMING_API UClass* Z_Construct_UClass_UAndroidXRGlobalPassthroughDimmingEventProxy_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AndroidXRGlobalPassthroughDimming();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary Function EnumerateSupportedGlobalDimmingLevels 
struct Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_EnumerateSupportedGlobalDimmingLevels_Statics
{
	struct AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_eventEnumerateSupportedGlobalDimmingLevels_Parms
	{
		bool AllLevelsSupported;
		TArray<float> SupportedGlobalDimmingLevels;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Global Passthrough Dimming Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n        * Enumerates the global dimming levels supported by the system.\n        * If returns true but SupportedGlobalDimmingLevels is empty\n        * all levels are supported.\n        *\n        * @param[out] True if all levels between 0 and 1 are supported.\n        * SupportedGlobalDimmingLevels will be empty if this is true.\n        * @param[out] An array of supported levels, but can be empty if all\n        * levels between 0 and 1 are supported.\n        * @return True if the underlying API call was successful.\n        */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumerates the global dimming levels supported by the system.\nIf returns true but SupportedGlobalDimmingLevels is empty\nall levels are supported.\n\n@param[out] True if all levels between 0 and 1 are supported.\nSupportedGlobalDimmingLevels will be empty if this is true.\n@param[out] An array of supported levels, but can be empty if all\nlevels between 0 and 1 are supported.\n@return True if the underlying API call was successful." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_AllLevelsSupported_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AllLevelsSupported;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SupportedGlobalDimmingLevels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SupportedGlobalDimmingLevels;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_EnumerateSupportedGlobalDimmingLevels_Statics::NewProp_AllLevelsSupported_SetBit(void* Obj)
{
	((AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_eventEnumerateSupportedGlobalDimmingLevels_Parms*)Obj)->AllLevelsSupported = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_EnumerateSupportedGlobalDimmingLevels_Statics::NewProp_AllLevelsSupported = { "AllLevelsSupported", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_eventEnumerateSupportedGlobalDimmingLevels_Parms), &Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_EnumerateSupportedGlobalDimmingLevels_Statics::NewProp_AllLevelsSupported_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_EnumerateSupportedGlobalDimmingLevels_Statics::NewProp_SupportedGlobalDimmingLevels_Inner = { "SupportedGlobalDimmingLevels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_EnumerateSupportedGlobalDimmingLevels_Statics::NewProp_SupportedGlobalDimmingLevels = { "SupportedGlobalDimmingLevels", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_eventEnumerateSupportedGlobalDimmingLevels_Parms, SupportedGlobalDimmingLevels), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_EnumerateSupportedGlobalDimmingLevels_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_eventEnumerateSupportedGlobalDimmingLevels_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_EnumerateSupportedGlobalDimmingLevels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_eventEnumerateSupportedGlobalDimmingLevels_Parms), &Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_EnumerateSupportedGlobalDimmingLevels_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_EnumerateSupportedGlobalDimmingLevels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_EnumerateSupportedGlobalDimmingLevels_Statics::NewProp_AllLevelsSupported,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_EnumerateSupportedGlobalDimmingLevels_Statics::NewProp_SupportedGlobalDimmingLevels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_EnumerateSupportedGlobalDimmingLevels_Statics::NewProp_SupportedGlobalDimmingLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_EnumerateSupportedGlobalDimmingLevels_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_EnumerateSupportedGlobalDimmingLevels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_EnumerateSupportedGlobalDimmingLevels_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary, nullptr, "EnumerateSupportedGlobalDimmingLevels", Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_EnumerateSupportedGlobalDimmingLevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_EnumerateSupportedGlobalDimmingLevels_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_EnumerateSupportedGlobalDimmingLevels_Statics::AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_eventEnumerateSupportedGlobalDimmingLevels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_EnumerateSupportedGlobalDimmingLevels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_EnumerateSupportedGlobalDimmingLevels_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_EnumerateSupportedGlobalDimmingLevels_Statics::AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_eventEnumerateSupportedGlobalDimmingLevels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_EnumerateSupportedGlobalDimmingLevels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_EnumerateSupportedGlobalDimmingLevels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary::execEnumerateSupportedGlobalDimmingLevels)
{
	P_GET_UBOOL_REF(Z_Param_Out_AllLevelsSupported);
	P_GET_TARRAY_REF(float,Z_Param_Out_SupportedGlobalDimmingLevels);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary::EnumerateSupportedGlobalDimmingLevels(Z_Param_Out_AllLevelsSupported,Z_Param_Out_SupportedGlobalDimmingLevels);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary Function EnumerateSupportedGlobalDimmingLevels 

// ********** Begin Class UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary Function GetEventProxy 
struct Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetEventProxy_Statics
{
	struct AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_eventGetEventProxy_Parms
	{
		UAndroidXRGlobalPassthroughDimmingEventProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Global Passthrough Dimming Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n        * Gets the AndroidXRGlobalPassthroughDimming event proxy, which allows users to bind to\n        * delegates which fired in response to XrEvents.\n        * @return AndroidXRGlobalPassthroughDimming event proxy static instance.\n        */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the AndroidXRGlobalPassthroughDimming event proxy, which allows users to bind to\ndelegates which fired in response to XrEvents.\n@return AndroidXRGlobalPassthroughDimming event proxy static instance." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetEventProxy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_eventGetEventProxy_Parms, ReturnValue), Z_Construct_UClass_UAndroidXRGlobalPassthroughDimmingEventProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetEventProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetEventProxy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetEventProxy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetEventProxy_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary, nullptr, "GetEventProxy", Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetEventProxy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetEventProxy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetEventProxy_Statics::AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_eventGetEventProxy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetEventProxy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetEventProxy_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetEventProxy_Statics::AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_eventGetEventProxy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetEventProxy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetEventProxy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary::execGetEventProxy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAndroidXRGlobalPassthroughDimmingEventProxy**)Z_Param__Result=UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary::GetEventProxy();
	P_NATIVE_END;
}
// ********** End Class UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary Function GetEventProxy 

// ********** Begin Class UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary Function GetGlobalDimmingLevel 
struct Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetGlobalDimmingLevel_Statics
{
	struct AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_eventGetGlobalDimmingLevel_Parms
	{
		float CurrentDimmingLevel;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Global Passthrough Dimming Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n        * Gets the current global dimming level.\n        *\n        * @param[out] The current global dimming level.\n        * @return True if the underlying API call was successful.\n        */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current global dimming level.\n\n@param[out] The current global dimming level.\n@return True if the underlying API call was successful." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentDimmingLevel;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetGlobalDimmingLevel_Statics::NewProp_CurrentDimmingLevel = { "CurrentDimmingLevel", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_eventGetGlobalDimmingLevel_Parms, CurrentDimmingLevel), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetGlobalDimmingLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_eventGetGlobalDimmingLevel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetGlobalDimmingLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_eventGetGlobalDimmingLevel_Parms), &Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetGlobalDimmingLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetGlobalDimmingLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetGlobalDimmingLevel_Statics::NewProp_CurrentDimmingLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetGlobalDimmingLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetGlobalDimmingLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetGlobalDimmingLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary, nullptr, "GetGlobalDimmingLevel", Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetGlobalDimmingLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetGlobalDimmingLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetGlobalDimmingLevel_Statics::AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_eventGetGlobalDimmingLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetGlobalDimmingLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetGlobalDimmingLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetGlobalDimmingLevel_Statics::AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_eventGetGlobalDimmingLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetGlobalDimmingLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetGlobalDimmingLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary::execGetGlobalDimmingLevel)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_CurrentDimmingLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary::GetGlobalDimmingLevel(Z_Param_Out_CurrentDimmingLevel);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary Function GetGlobalDimmingLevel 

// ********** Begin Class UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary Function GetGlobalDimmingSupported 
struct Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetGlobalDimmingSupported_Statics
{
	struct AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_eventGetGlobalDimmingSupported_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Global Passthrough Dimming Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n        * Checks if global dimming is supported by the system.\n        * @return True if the system supports global dimming.\n        */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if global dimming is supported by the system.\n@return True if the system supports global dimming." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetGlobalDimmingSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_eventGetGlobalDimmingSupported_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetGlobalDimmingSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_eventGetGlobalDimmingSupported_Parms), &Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetGlobalDimmingSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetGlobalDimmingSupported_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetGlobalDimmingSupported_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetGlobalDimmingSupported_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetGlobalDimmingSupported_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary, nullptr, "GetGlobalDimmingSupported", Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetGlobalDimmingSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetGlobalDimmingSupported_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetGlobalDimmingSupported_Statics::AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_eventGetGlobalDimmingSupported_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetGlobalDimmingSupported_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetGlobalDimmingSupported_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetGlobalDimmingSupported_Statics::AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_eventGetGlobalDimmingSupported_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetGlobalDimmingSupported()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetGlobalDimmingSupported_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary::execGetGlobalDimmingSupported)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary::GetGlobalDimmingSupported();
	P_NATIVE_END;
}
// ********** End Class UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary Function GetGlobalDimmingSupported 

// ********** Begin Class UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary Function SetGlobalDimmingLevel 
struct Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_SetGlobalDimmingLevel_Statics
{
	struct AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_eventSetGlobalDimmingLevel_Parms
	{
		float PreferredDimmingLevel;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Global Passthrough Dimming Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n        * Sets the preferred global dimming level. EnumerateSupportedGlobalDimmingLevels will\n        * provide the supported levels.\n        *\n        * @param[in] The preferred global dimming level. Must be between\n        * 0 and 1. Values will be clamped. Call EnumerateSupportedGlobalDimmingLevels\n        * to return the supported dimming levels.\n        * @return True if the underlying API call was successful.\n        */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the preferred global dimming level. EnumerateSupportedGlobalDimmingLevels will\nprovide the supported levels.\n\n@param[in] The preferred global dimming level. Must be between\n0 and 1. Values will be clamped. Call EnumerateSupportedGlobalDimmingLevels\nto return the supported dimming levels.\n@return True if the underlying API call was successful." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreferredDimmingLevel;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_SetGlobalDimmingLevel_Statics::NewProp_PreferredDimmingLevel = { "PreferredDimmingLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_eventSetGlobalDimmingLevel_Parms, PreferredDimmingLevel), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_SetGlobalDimmingLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_eventSetGlobalDimmingLevel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_SetGlobalDimmingLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_eventSetGlobalDimmingLevel_Parms), &Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_SetGlobalDimmingLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_SetGlobalDimmingLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_SetGlobalDimmingLevel_Statics::NewProp_PreferredDimmingLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_SetGlobalDimmingLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_SetGlobalDimmingLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_SetGlobalDimmingLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary, nullptr, "SetGlobalDimmingLevel", Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_SetGlobalDimmingLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_SetGlobalDimmingLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_SetGlobalDimmingLevel_Statics::AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_eventSetGlobalDimmingLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_SetGlobalDimmingLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_SetGlobalDimmingLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_SetGlobalDimmingLevel_Statics::AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_eventSetGlobalDimmingLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_SetGlobalDimmingLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_SetGlobalDimmingLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary::execSetGlobalDimmingLevel)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_PreferredDimmingLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary::SetGlobalDimmingLevel(Z_Param_PreferredDimmingLevel);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary Function SetGlobalDimmingLevel 

// ********** Begin Class UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary ***************
void UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary::StaticRegisterNativesUAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary()
{
	UClass* Class = UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnumerateSupportedGlobalDimmingLevels", &UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary::execEnumerateSupportedGlobalDimmingLevels },
		{ "GetEventProxy", &UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary::execGetEventProxy },
		{ "GetGlobalDimmingLevel", &UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary::execGetGlobalDimmingLevel },
		{ "GetGlobalDimmingSupported", &UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary::execGetGlobalDimmingSupported },
		{ "SetGlobalDimmingLevel", &UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary::execSetGlobalDimmingLevel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary;
UClass* UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary;
	if (!Z_Registration_Info_UClass_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary"),
			Z_Registration_Info_UClass_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary,
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
	return Z_Registration_Info_UClass_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_NoRegister()
{
	return UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AndroidXRGlobalPassthroughDimming" },
		{ "IncludePath", "AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_EnumerateSupportedGlobalDimmingLevels, "EnumerateSupportedGlobalDimmingLevels" }, // 4068947303
		{ &Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetEventProxy, "GetEventProxy" }, // 1431832135
		{ &Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetGlobalDimmingLevel, "GetGlobalDimmingLevel" }, // 1255881438
		{ &Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_GetGlobalDimmingSupported, "GetGlobalDimmingSupported" }, // 1520896040
		{ &Z_Construct_UFunction_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_SetGlobalDimmingLevel, "SetGlobalDimmingLevel" }, // 3684855772
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRGlobalPassthroughDimming,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_Statics::ClassParams = {
	&UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary.OuterSingleton;
}
UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary::UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary);
UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary::~UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary() {}
// ********** End Class UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary *****************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRGlobalPassthroughDimming_Source_AndroidXRGlobalPassthroughDimming_Public_AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_h__Script_AndroidXRGlobalPassthroughDimming_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary, UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary::StaticClass, TEXT("UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary), 3607535419U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRGlobalPassthroughDimming_Source_AndroidXRGlobalPassthroughDimming_Public_AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_h__Script_AndroidXRGlobalPassthroughDimming_2863504973(TEXT("/Script/AndroidXRGlobalPassthroughDimming"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRGlobalPassthroughDimming_Source_AndroidXRGlobalPassthroughDimming_Public_AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_h__Script_AndroidXRGlobalPassthroughDimming_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRGlobalPassthroughDimming_Source_AndroidXRGlobalPassthroughDimming_Public_AndroidXRGlobalPassthroughDimmingBlueprintFunctionLibrary_h__Script_AndroidXRGlobalPassthroughDimming_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
