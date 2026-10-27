// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRPerformanceMetricsBlueprintFunctionLibrary.h"
#include "AndroidXRTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRPerformanceMetricsBlueprintFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRPerformanceMetricsCounter();
ANDROIDXRPERFORMANCEMETRICS_API UClass* Z_Construct_UClass_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary();
ANDROIDXRPERFORMANCEMETRICS_API UClass* Z_Construct_UClass_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AndroidXRPerformanceMetrics();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAndroidXRPerformanceMetricsBlueprintFunctionLibrary Function EnumeratePerformanceMetricsCounterPaths 
struct Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_EnumeratePerformanceMetricsCounterPaths_Statics
{
	struct AndroidXRPerformanceMetricsBlueprintFunctionLibrary_eventEnumeratePerformanceMetricsCounterPaths_Parms
	{
		TArray<FString> MetricsCounterPaths;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|PerformanceMetricsFunctionLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Enumerates all performance metrics counter paths supported by the runtime.\n     * @param[out] MetricsCounterPaths Array of supported performance metrics\n     * counter paths, as strings.\n     * @return True if the underlying API call was successful.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRPerformanceMetricsBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumerates all performance metrics counter paths supported by the runtime.\n@param[out] MetricsCounterPaths Array of supported performance metrics\ncounter paths, as strings.\n@return True if the underlying API call was successful." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MetricsCounterPaths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MetricsCounterPaths;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_EnumeratePerformanceMetricsCounterPaths_Statics::NewProp_MetricsCounterPaths_Inner = { "MetricsCounterPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_EnumeratePerformanceMetricsCounterPaths_Statics::NewProp_MetricsCounterPaths = { "MetricsCounterPaths", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRPerformanceMetricsBlueprintFunctionLibrary_eventEnumeratePerformanceMetricsCounterPaths_Parms, MetricsCounterPaths), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_EnumeratePerformanceMetricsCounterPaths_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRPerformanceMetricsBlueprintFunctionLibrary_eventEnumeratePerformanceMetricsCounterPaths_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_EnumeratePerformanceMetricsCounterPaths_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRPerformanceMetricsBlueprintFunctionLibrary_eventEnumeratePerformanceMetricsCounterPaths_Parms), &Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_EnumeratePerformanceMetricsCounterPaths_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_EnumeratePerformanceMetricsCounterPaths_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_EnumeratePerformanceMetricsCounterPaths_Statics::NewProp_MetricsCounterPaths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_EnumeratePerformanceMetricsCounterPaths_Statics::NewProp_MetricsCounterPaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_EnumeratePerformanceMetricsCounterPaths_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_EnumeratePerformanceMetricsCounterPaths_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_EnumeratePerformanceMetricsCounterPaths_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary, nullptr, "EnumeratePerformanceMetricsCounterPaths", Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_EnumeratePerformanceMetricsCounterPaths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_EnumeratePerformanceMetricsCounterPaths_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_EnumeratePerformanceMetricsCounterPaths_Statics::AndroidXRPerformanceMetricsBlueprintFunctionLibrary_eventEnumeratePerformanceMetricsCounterPaths_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_EnumeratePerformanceMetricsCounterPaths_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_EnumeratePerformanceMetricsCounterPaths_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_EnumeratePerformanceMetricsCounterPaths_Statics::AndroidXRPerformanceMetricsBlueprintFunctionLibrary_eventEnumeratePerformanceMetricsCounterPaths_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_EnumeratePerformanceMetricsCounterPaths()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_EnumeratePerformanceMetricsCounterPaths_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRPerformanceMetricsBlueprintFunctionLibrary::execEnumeratePerformanceMetricsCounterPaths)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_MetricsCounterPaths);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRPerformanceMetricsBlueprintFunctionLibrary::EnumeratePerformanceMetricsCounterPaths(Z_Param_Out_MetricsCounterPaths);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRPerformanceMetricsBlueprintFunctionLibrary Function EnumeratePerformanceMetricsCounterPaths 

// ********** Begin Class UAndroidXRPerformanceMetricsBlueprintFunctionLibrary Function GetPerformanceMetricsEnabled 
struct Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_GetPerformanceMetricsEnabled_Statics
{
	struct AndroidXRPerformanceMetricsBlueprintFunctionLibrary_eventGetPerformanceMetricsEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|PerformanceMetricsFunctionLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Returns whether or not the performance metrics system is enabled.\n     * @return True if the system is enabled.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRPerformanceMetricsBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether or not the performance metrics system is enabled.\n@return True if the system is enabled." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_GetPerformanceMetricsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRPerformanceMetricsBlueprintFunctionLibrary_eventGetPerformanceMetricsEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_GetPerformanceMetricsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRPerformanceMetricsBlueprintFunctionLibrary_eventGetPerformanceMetricsEnabled_Parms), &Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_GetPerformanceMetricsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_GetPerformanceMetricsEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_GetPerformanceMetricsEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_GetPerformanceMetricsEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_GetPerformanceMetricsEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary, nullptr, "GetPerformanceMetricsEnabled", Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_GetPerformanceMetricsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_GetPerformanceMetricsEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_GetPerformanceMetricsEnabled_Statics::AndroidXRPerformanceMetricsBlueprintFunctionLibrary_eventGetPerformanceMetricsEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_GetPerformanceMetricsEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_GetPerformanceMetricsEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_GetPerformanceMetricsEnabled_Statics::AndroidXRPerformanceMetricsBlueprintFunctionLibrary_eventGetPerformanceMetricsEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_GetPerformanceMetricsEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_GetPerformanceMetricsEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRPerformanceMetricsBlueprintFunctionLibrary::execGetPerformanceMetricsEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRPerformanceMetricsBlueprintFunctionLibrary::GetPerformanceMetricsEnabled();
	P_NATIVE_END;
}
// ********** End Class UAndroidXRPerformanceMetricsBlueprintFunctionLibrary Function GetPerformanceMetricsEnabled 

// ********** Begin Class UAndroidXRPerformanceMetricsBlueprintFunctionLibrary Function QueryPerformanceMetricsCounter 
struct Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_QueryPerformanceMetricsCounter_Statics
{
	struct AndroidXRPerformanceMetricsBlueprintFunctionLibrary_eventQueryPerformanceMetricsCounter_Parms
	{
		FString CounterPath;
		FAndroidXRPerformanceMetricsCounter PerformanceMetricsCounter;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|PerformanceMetricsFunctionLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Queries a performance metrics counter.\n     * @param[in] CounterPath String representing the metric counter path.\n     * @param[out] PerformanceMetricsCounter The metrics for the specified path.\n     * @return True if the underlying API call was successful.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRPerformanceMetricsBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Queries a performance metrics counter.\n@param[in] CounterPath String representing the metric counter path.\n@param[out] PerformanceMetricsCounter The metrics for the specified path.\n@return True if the underlying API call was successful." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CounterPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerformanceMetricsCounter;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_QueryPerformanceMetricsCounter_Statics::NewProp_CounterPath = { "CounterPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRPerformanceMetricsBlueprintFunctionLibrary_eventQueryPerformanceMetricsCounter_Parms, CounterPath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_QueryPerformanceMetricsCounter_Statics::NewProp_PerformanceMetricsCounter = { "PerformanceMetricsCounter", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRPerformanceMetricsBlueprintFunctionLibrary_eventQueryPerformanceMetricsCounter_Parms, PerformanceMetricsCounter), Z_Construct_UScriptStruct_FAndroidXRPerformanceMetricsCounter, METADATA_PARAMS(0, nullptr) }; // 4233078464
void Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_QueryPerformanceMetricsCounter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRPerformanceMetricsBlueprintFunctionLibrary_eventQueryPerformanceMetricsCounter_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_QueryPerformanceMetricsCounter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRPerformanceMetricsBlueprintFunctionLibrary_eventQueryPerformanceMetricsCounter_Parms), &Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_QueryPerformanceMetricsCounter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_QueryPerformanceMetricsCounter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_QueryPerformanceMetricsCounter_Statics::NewProp_CounterPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_QueryPerformanceMetricsCounter_Statics::NewProp_PerformanceMetricsCounter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_QueryPerformanceMetricsCounter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_QueryPerformanceMetricsCounter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_QueryPerformanceMetricsCounter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary, nullptr, "QueryPerformanceMetricsCounter", Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_QueryPerformanceMetricsCounter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_QueryPerformanceMetricsCounter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_QueryPerformanceMetricsCounter_Statics::AndroidXRPerformanceMetricsBlueprintFunctionLibrary_eventQueryPerformanceMetricsCounter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_QueryPerformanceMetricsCounter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_QueryPerformanceMetricsCounter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_QueryPerformanceMetricsCounter_Statics::AndroidXRPerformanceMetricsBlueprintFunctionLibrary_eventQueryPerformanceMetricsCounter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_QueryPerformanceMetricsCounter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_QueryPerformanceMetricsCounter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRPerformanceMetricsBlueprintFunctionLibrary::execQueryPerformanceMetricsCounter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CounterPath);
	P_GET_STRUCT_REF(FAndroidXRPerformanceMetricsCounter,Z_Param_Out_PerformanceMetricsCounter);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRPerformanceMetricsBlueprintFunctionLibrary::QueryPerformanceMetricsCounter(Z_Param_CounterPath,Z_Param_Out_PerformanceMetricsCounter);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRPerformanceMetricsBlueprintFunctionLibrary Function QueryPerformanceMetricsCounter 

// ********** Begin Class UAndroidXRPerformanceMetricsBlueprintFunctionLibrary Function SetPerformanceMetricsEnabled 
struct Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_SetPerformanceMetricsEnabled_Statics
{
	struct AndroidXRPerformanceMetricsBlueprintFunctionLibrary_eventSetPerformanceMetricsEnabled_Parms
	{
		bool bEnabled;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|PerformanceMetricsFunctionLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Enables or disables the performance metrics system.\n     * @param[in] bEnabled Whether or not the system should be enabled.\n     * @return True if the underlying API call was successful.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRPerformanceMetricsBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables or disables the performance metrics system.\n@param[in] bEnabled Whether or not the system should be enabled.\n@return True if the underlying API call was successful." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_SetPerformanceMetricsEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((AndroidXRPerformanceMetricsBlueprintFunctionLibrary_eventSetPerformanceMetricsEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_SetPerformanceMetricsEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRPerformanceMetricsBlueprintFunctionLibrary_eventSetPerformanceMetricsEnabled_Parms), &Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_SetPerformanceMetricsEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_SetPerformanceMetricsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRPerformanceMetricsBlueprintFunctionLibrary_eventSetPerformanceMetricsEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_SetPerformanceMetricsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRPerformanceMetricsBlueprintFunctionLibrary_eventSetPerformanceMetricsEnabled_Parms), &Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_SetPerformanceMetricsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_SetPerformanceMetricsEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_SetPerformanceMetricsEnabled_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_SetPerformanceMetricsEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_SetPerformanceMetricsEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_SetPerformanceMetricsEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary, nullptr, "SetPerformanceMetricsEnabled", Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_SetPerformanceMetricsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_SetPerformanceMetricsEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_SetPerformanceMetricsEnabled_Statics::AndroidXRPerformanceMetricsBlueprintFunctionLibrary_eventSetPerformanceMetricsEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_SetPerformanceMetricsEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_SetPerformanceMetricsEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_SetPerformanceMetricsEnabled_Statics::AndroidXRPerformanceMetricsBlueprintFunctionLibrary_eventSetPerformanceMetricsEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_SetPerformanceMetricsEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_SetPerformanceMetricsEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRPerformanceMetricsBlueprintFunctionLibrary::execSetPerformanceMetricsEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRPerformanceMetricsBlueprintFunctionLibrary::SetPerformanceMetricsEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRPerformanceMetricsBlueprintFunctionLibrary Function SetPerformanceMetricsEnabled 

// ********** Begin Class UAndroidXRPerformanceMetricsBlueprintFunctionLibrary *********************
void UAndroidXRPerformanceMetricsBlueprintFunctionLibrary::StaticRegisterNativesUAndroidXRPerformanceMetricsBlueprintFunctionLibrary()
{
	UClass* Class = UAndroidXRPerformanceMetricsBlueprintFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnumeratePerformanceMetricsCounterPaths", &UAndroidXRPerformanceMetricsBlueprintFunctionLibrary::execEnumeratePerformanceMetricsCounterPaths },
		{ "GetPerformanceMetricsEnabled", &UAndroidXRPerformanceMetricsBlueprintFunctionLibrary::execGetPerformanceMetricsEnabled },
		{ "QueryPerformanceMetricsCounter", &UAndroidXRPerformanceMetricsBlueprintFunctionLibrary::execQueryPerformanceMetricsCounter },
		{ "SetPerformanceMetricsEnabled", &UAndroidXRPerformanceMetricsBlueprintFunctionLibrary::execSetPerformanceMetricsEnabled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary;
UClass* UAndroidXRPerformanceMetricsBlueprintFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UAndroidXRPerformanceMetricsBlueprintFunctionLibrary;
	if (!Z_Registration_Info_UClass_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRPerformanceMetricsBlueprintFunctionLibrary"),
			Z_Registration_Info_UClass_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUAndroidXRPerformanceMetricsBlueprintFunctionLibrary,
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
	return Z_Registration_Info_UClass_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_NoRegister()
{
	return UAndroidXRPerformanceMetricsBlueprintFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AndroidXRPerformanceMetrics" },
		{ "IncludePath", "AndroidXRPerformanceMetricsBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/AndroidXRPerformanceMetricsBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_EnumeratePerformanceMetricsCounterPaths, "EnumeratePerformanceMetricsCounterPaths" }, // 1160208506
		{ &Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_GetPerformanceMetricsEnabled, "GetPerformanceMetricsEnabled" }, // 2768827904
		{ &Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_QueryPerformanceMetricsCounter, "QueryPerformanceMetricsCounter" }, // 397151903
		{ &Z_Construct_UFunction_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_SetPerformanceMetricsEnabled, "SetPerformanceMetricsEnabled" }, // 1992774343
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRPerformanceMetricsBlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRPerformanceMetrics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_Statics::ClassParams = {
	&UAndroidXRPerformanceMetricsBlueprintFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary.OuterSingleton;
}
UAndroidXRPerformanceMetricsBlueprintFunctionLibrary::UAndroidXRPerformanceMetricsBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRPerformanceMetricsBlueprintFunctionLibrary);
UAndroidXRPerformanceMetricsBlueprintFunctionLibrary::~UAndroidXRPerformanceMetricsBlueprintFunctionLibrary() {}
// ********** End Class UAndroidXRPerformanceMetricsBlueprintFunctionLibrary ***********************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRPerformanceMetrics_Source_AndroidXRPerformanceMetrics_Public_AndroidXRPerformanceMetricsBlueprintFunctionLibrary_h__Script_AndroidXRPerformanceMetrics_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary, UAndroidXRPerformanceMetricsBlueprintFunctionLibrary::StaticClass, TEXT("UAndroidXRPerformanceMetricsBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UAndroidXRPerformanceMetricsBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRPerformanceMetricsBlueprintFunctionLibrary), 1933788090U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRPerformanceMetrics_Source_AndroidXRPerformanceMetrics_Public_AndroidXRPerformanceMetricsBlueprintFunctionLibrary_h__Script_AndroidXRPerformanceMetrics_3446090780(TEXT("/Script/AndroidXRPerformanceMetrics"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRPerformanceMetrics_Source_AndroidXRPerformanceMetrics_Public_AndroidXRPerformanceMetricsBlueprintFunctionLibrary_h__Script_AndroidXRPerformanceMetrics_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRPerformanceMetrics_Source_AndroidXRPerformanceMetrics_Public_AndroidXRPerformanceMetricsBlueprintFunctionLibrary_h__Script_AndroidXRPerformanceMetrics_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
