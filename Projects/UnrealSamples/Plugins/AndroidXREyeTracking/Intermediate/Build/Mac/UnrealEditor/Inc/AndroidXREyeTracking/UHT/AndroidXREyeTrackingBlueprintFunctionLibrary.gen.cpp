// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXREyeTrackingBlueprintFunctionLibrary.h"
#include "AndroidXREyeTrackingTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXREyeTrackingBlueprintFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXREYETRACKING_API UClass* Z_Construct_UClass_UAndroidXREyeTrackingBlueprintFunctionLibrary();
ANDROIDXREYETRACKING_API UClass* Z_Construct_UClass_UAndroidXREyeTrackingBlueprintFunctionLibrary_NoRegister();
ANDROIDXREYETRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXREyes();
ANDROIDXREYETRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXREyeTracker();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AndroidXREyeTracking();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAndroidXREyeTrackingBlueprintFunctionLibrary Function CreateEyeTracker **
struct Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_CreateEyeTracker_Statics
{
	struct AndroidXREyeTrackingBlueprintFunctionLibrary_eventCreateEyeTracker_Parms
	{
		FAndroidXREyeTracker EyeTracker;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Eye Tracking Function Library" },
		{ "ModuleRelativePath", "Public/AndroidXREyeTrackingBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EyeTracker;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_CreateEyeTracker_Statics::NewProp_EyeTracker = { "EyeTracker", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXREyeTrackingBlueprintFunctionLibrary_eventCreateEyeTracker_Parms, EyeTracker), Z_Construct_UScriptStruct_FAndroidXREyeTracker, METADATA_PARAMS(0, nullptr) }; // 2116009469
void Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_CreateEyeTracker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXREyeTrackingBlueprintFunctionLibrary_eventCreateEyeTracker_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_CreateEyeTracker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXREyeTrackingBlueprintFunctionLibrary_eventCreateEyeTracker_Parms), &Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_CreateEyeTracker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_CreateEyeTracker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_CreateEyeTracker_Statics::NewProp_EyeTracker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_CreateEyeTracker_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_CreateEyeTracker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_CreateEyeTracker_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXREyeTrackingBlueprintFunctionLibrary, nullptr, "CreateEyeTracker", Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_CreateEyeTracker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_CreateEyeTracker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_CreateEyeTracker_Statics::AndroidXREyeTrackingBlueprintFunctionLibrary_eventCreateEyeTracker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_CreateEyeTracker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_CreateEyeTracker_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_CreateEyeTracker_Statics::AndroidXREyeTrackingBlueprintFunctionLibrary_eventCreateEyeTracker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_CreateEyeTracker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_CreateEyeTracker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXREyeTrackingBlueprintFunctionLibrary::execCreateEyeTracker)
{
	P_GET_STRUCT_REF(FAndroidXREyeTracker,Z_Param_Out_EyeTracker);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXREyeTrackingBlueprintFunctionLibrary::CreateEyeTracker(Z_Param_Out_EyeTracker);
	P_NATIVE_END;
}
// ********** End Class UAndroidXREyeTrackingBlueprintFunctionLibrary Function CreateEyeTracker ****

// ********** Begin Class UAndroidXREyeTrackingBlueprintFunctionLibrary Function DestroyEyeTracker *
struct Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_DestroyEyeTracker_Statics
{
	struct AndroidXREyeTrackingBlueprintFunctionLibrary_eventDestroyEyeTracker_Parms
	{
		FAndroidXREyeTracker EyeTracker;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Eye Tracking Function Library" },
		{ "ModuleRelativePath", "Public/AndroidXREyeTrackingBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EyeTracker;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_DestroyEyeTracker_Statics::NewProp_EyeTracker = { "EyeTracker", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXREyeTrackingBlueprintFunctionLibrary_eventDestroyEyeTracker_Parms, EyeTracker), Z_Construct_UScriptStruct_FAndroidXREyeTracker, METADATA_PARAMS(0, nullptr) }; // 2116009469
void Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_DestroyEyeTracker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXREyeTrackingBlueprintFunctionLibrary_eventDestroyEyeTracker_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_DestroyEyeTracker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXREyeTrackingBlueprintFunctionLibrary_eventDestroyEyeTracker_Parms), &Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_DestroyEyeTracker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_DestroyEyeTracker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_DestroyEyeTracker_Statics::NewProp_EyeTracker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_DestroyEyeTracker_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_DestroyEyeTracker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_DestroyEyeTracker_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXREyeTrackingBlueprintFunctionLibrary, nullptr, "DestroyEyeTracker", Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_DestroyEyeTracker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_DestroyEyeTracker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_DestroyEyeTracker_Statics::AndroidXREyeTrackingBlueprintFunctionLibrary_eventDestroyEyeTracker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_DestroyEyeTracker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_DestroyEyeTracker_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_DestroyEyeTracker_Statics::AndroidXREyeTrackingBlueprintFunctionLibrary_eventDestroyEyeTracker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_DestroyEyeTracker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_DestroyEyeTracker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXREyeTrackingBlueprintFunctionLibrary::execDestroyEyeTracker)
{
	P_GET_STRUCT_REF(FAndroidXREyeTracker,Z_Param_Out_EyeTracker);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXREyeTrackingBlueprintFunctionLibrary::DestroyEyeTracker(Z_Param_Out_EyeTracker);
	P_NATIVE_END;
}
// ********** End Class UAndroidXREyeTrackingBlueprintFunctionLibrary Function DestroyEyeTracker ***

// ********** Begin Class UAndroidXREyeTrackingBlueprintFunctionLibrary Function GetCoarseEyeTrackingInfo 
struct Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetCoarseEyeTrackingInfo_Statics
{
	struct AndroidXREyeTrackingBlueprintFunctionLibrary_eventGetCoarseEyeTrackingInfo_Parms
	{
		FAndroidXREyeTracker EyeTracker;
		FAndroidXREyes Eyes;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Eye Tracking Function Library" },
		{ "ModuleRelativePath", "Public/AndroidXREyeTrackingBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EyeTracker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EyeTracker;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Eyes;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetCoarseEyeTrackingInfo_Statics::NewProp_EyeTracker = { "EyeTracker", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXREyeTrackingBlueprintFunctionLibrary_eventGetCoarseEyeTrackingInfo_Parms, EyeTracker), Z_Construct_UScriptStruct_FAndroidXREyeTracker, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EyeTracker_MetaData), NewProp_EyeTracker_MetaData) }; // 2116009469
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetCoarseEyeTrackingInfo_Statics::NewProp_Eyes = { "Eyes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXREyeTrackingBlueprintFunctionLibrary_eventGetCoarseEyeTrackingInfo_Parms, Eyes), Z_Construct_UScriptStruct_FAndroidXREyes, METADATA_PARAMS(0, nullptr) }; // 1457270145
void Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetCoarseEyeTrackingInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXREyeTrackingBlueprintFunctionLibrary_eventGetCoarseEyeTrackingInfo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetCoarseEyeTrackingInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXREyeTrackingBlueprintFunctionLibrary_eventGetCoarseEyeTrackingInfo_Parms), &Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetCoarseEyeTrackingInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetCoarseEyeTrackingInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetCoarseEyeTrackingInfo_Statics::NewProp_EyeTracker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetCoarseEyeTrackingInfo_Statics::NewProp_Eyes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetCoarseEyeTrackingInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetCoarseEyeTrackingInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetCoarseEyeTrackingInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXREyeTrackingBlueprintFunctionLibrary, nullptr, "GetCoarseEyeTrackingInfo", Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetCoarseEyeTrackingInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetCoarseEyeTrackingInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetCoarseEyeTrackingInfo_Statics::AndroidXREyeTrackingBlueprintFunctionLibrary_eventGetCoarseEyeTrackingInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetCoarseEyeTrackingInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetCoarseEyeTrackingInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetCoarseEyeTrackingInfo_Statics::AndroidXREyeTrackingBlueprintFunctionLibrary_eventGetCoarseEyeTrackingInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetCoarseEyeTrackingInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetCoarseEyeTrackingInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXREyeTrackingBlueprintFunctionLibrary::execGetCoarseEyeTrackingInfo)
{
	P_GET_STRUCT_REF(FAndroidXREyeTracker,Z_Param_Out_EyeTracker);
	P_GET_STRUCT_REF(FAndroidXREyes,Z_Param_Out_Eyes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXREyeTrackingBlueprintFunctionLibrary::GetCoarseEyeTrackingInfo(Z_Param_Out_EyeTracker,Z_Param_Out_Eyes);
	P_NATIVE_END;
}
// ********** End Class UAndroidXREyeTrackingBlueprintFunctionLibrary Function GetCoarseEyeTrackingInfo 

// ********** Begin Class UAndroidXREyeTrackingBlueprintFunctionLibrary Function GetFineEyeTrackingInfo 
struct Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetFineEyeTrackingInfo_Statics
{
	struct AndroidXREyeTrackingBlueprintFunctionLibrary_eventGetFineEyeTrackingInfo_Parms
	{
		FAndroidXREyeTracker EyeTracker;
		FAndroidXREyes Eyes;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Eye Tracking Function Library" },
		{ "ModuleRelativePath", "Public/AndroidXREyeTrackingBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EyeTracker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EyeTracker;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Eyes;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetFineEyeTrackingInfo_Statics::NewProp_EyeTracker = { "EyeTracker", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXREyeTrackingBlueprintFunctionLibrary_eventGetFineEyeTrackingInfo_Parms, EyeTracker), Z_Construct_UScriptStruct_FAndroidXREyeTracker, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EyeTracker_MetaData), NewProp_EyeTracker_MetaData) }; // 2116009469
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetFineEyeTrackingInfo_Statics::NewProp_Eyes = { "Eyes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXREyeTrackingBlueprintFunctionLibrary_eventGetFineEyeTrackingInfo_Parms, Eyes), Z_Construct_UScriptStruct_FAndroidXREyes, METADATA_PARAMS(0, nullptr) }; // 1457270145
void Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetFineEyeTrackingInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXREyeTrackingBlueprintFunctionLibrary_eventGetFineEyeTrackingInfo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetFineEyeTrackingInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXREyeTrackingBlueprintFunctionLibrary_eventGetFineEyeTrackingInfo_Parms), &Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetFineEyeTrackingInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetFineEyeTrackingInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetFineEyeTrackingInfo_Statics::NewProp_EyeTracker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetFineEyeTrackingInfo_Statics::NewProp_Eyes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetFineEyeTrackingInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetFineEyeTrackingInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetFineEyeTrackingInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXREyeTrackingBlueprintFunctionLibrary, nullptr, "GetFineEyeTrackingInfo", Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetFineEyeTrackingInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetFineEyeTrackingInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetFineEyeTrackingInfo_Statics::AndroidXREyeTrackingBlueprintFunctionLibrary_eventGetFineEyeTrackingInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetFineEyeTrackingInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetFineEyeTrackingInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetFineEyeTrackingInfo_Statics::AndroidXREyeTrackingBlueprintFunctionLibrary_eventGetFineEyeTrackingInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetFineEyeTrackingInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetFineEyeTrackingInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXREyeTrackingBlueprintFunctionLibrary::execGetFineEyeTrackingInfo)
{
	P_GET_STRUCT_REF(FAndroidXREyeTracker,Z_Param_Out_EyeTracker);
	P_GET_STRUCT_REF(FAndroidXREyes,Z_Param_Out_Eyes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXREyeTrackingBlueprintFunctionLibrary::GetFineEyeTrackingInfo(Z_Param_Out_EyeTracker,Z_Param_Out_Eyes);
	P_NATIVE_END;
}
// ********** End Class UAndroidXREyeTrackingBlueprintFunctionLibrary Function GetFineEyeTrackingInfo 

// ********** Begin Class UAndroidXREyeTrackingBlueprintFunctionLibrary Function IsTrackerValid ****
struct Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_IsTrackerValid_Statics
{
	struct AndroidXREyeTrackingBlueprintFunctionLibrary_eventIsTrackerValid_Parms
	{
		FAndroidXREyeTracker EyeTracker;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Eye Tracking Function Library" },
		{ "ModuleRelativePath", "Public/AndroidXREyeTrackingBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EyeTracker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EyeTracker;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_IsTrackerValid_Statics::NewProp_EyeTracker = { "EyeTracker", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXREyeTrackingBlueprintFunctionLibrary_eventIsTrackerValid_Parms, EyeTracker), Z_Construct_UScriptStruct_FAndroidXREyeTracker, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EyeTracker_MetaData), NewProp_EyeTracker_MetaData) }; // 2116009469
void Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_IsTrackerValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXREyeTrackingBlueprintFunctionLibrary_eventIsTrackerValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_IsTrackerValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXREyeTrackingBlueprintFunctionLibrary_eventIsTrackerValid_Parms), &Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_IsTrackerValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_IsTrackerValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_IsTrackerValid_Statics::NewProp_EyeTracker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_IsTrackerValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_IsTrackerValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_IsTrackerValid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXREyeTrackingBlueprintFunctionLibrary, nullptr, "IsTrackerValid", Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_IsTrackerValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_IsTrackerValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_IsTrackerValid_Statics::AndroidXREyeTrackingBlueprintFunctionLibrary_eventIsTrackerValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_IsTrackerValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_IsTrackerValid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_IsTrackerValid_Statics::AndroidXREyeTrackingBlueprintFunctionLibrary_eventIsTrackerValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_IsTrackerValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_IsTrackerValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXREyeTrackingBlueprintFunctionLibrary::execIsTrackerValid)
{
	P_GET_STRUCT_REF(FAndroidXREyeTracker,Z_Param_Out_EyeTracker);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXREyeTrackingBlueprintFunctionLibrary::IsTrackerValid(Z_Param_Out_EyeTracker);
	P_NATIVE_END;
}
// ********** End Class UAndroidXREyeTrackingBlueprintFunctionLibrary Function IsTrackerValid ******

// ********** Begin Class UAndroidXREyeTrackingBlueprintFunctionLibrary Function SupportsEyeTracking 
struct Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_SupportsEyeTracking_Statics
{
	struct AndroidXREyeTrackingBlueprintFunctionLibrary_eventSupportsEyeTracking_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Eye Tracking Function Library" },
		{ "ModuleRelativePath", "Public/AndroidXREyeTrackingBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_SupportsEyeTracking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXREyeTrackingBlueprintFunctionLibrary_eventSupportsEyeTracking_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_SupportsEyeTracking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXREyeTrackingBlueprintFunctionLibrary_eventSupportsEyeTracking_Parms), &Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_SupportsEyeTracking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_SupportsEyeTracking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_SupportsEyeTracking_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_SupportsEyeTracking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_SupportsEyeTracking_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXREyeTrackingBlueprintFunctionLibrary, nullptr, "SupportsEyeTracking", Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_SupportsEyeTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_SupportsEyeTracking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_SupportsEyeTracking_Statics::AndroidXREyeTrackingBlueprintFunctionLibrary_eventSupportsEyeTracking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_SupportsEyeTracking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_SupportsEyeTracking_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_SupportsEyeTracking_Statics::AndroidXREyeTrackingBlueprintFunctionLibrary_eventSupportsEyeTracking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_SupportsEyeTracking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_SupportsEyeTracking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXREyeTrackingBlueprintFunctionLibrary::execSupportsEyeTracking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXREyeTrackingBlueprintFunctionLibrary::SupportsEyeTracking();
	P_NATIVE_END;
}
// ********** End Class UAndroidXREyeTrackingBlueprintFunctionLibrary Function SupportsEyeTracking *

// ********** Begin Class UAndroidXREyeTrackingBlueprintFunctionLibrary ****************************
void UAndroidXREyeTrackingBlueprintFunctionLibrary::StaticRegisterNativesUAndroidXREyeTrackingBlueprintFunctionLibrary()
{
	UClass* Class = UAndroidXREyeTrackingBlueprintFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateEyeTracker", &UAndroidXREyeTrackingBlueprintFunctionLibrary::execCreateEyeTracker },
		{ "DestroyEyeTracker", &UAndroidXREyeTrackingBlueprintFunctionLibrary::execDestroyEyeTracker },
		{ "GetCoarseEyeTrackingInfo", &UAndroidXREyeTrackingBlueprintFunctionLibrary::execGetCoarseEyeTrackingInfo },
		{ "GetFineEyeTrackingInfo", &UAndroidXREyeTrackingBlueprintFunctionLibrary::execGetFineEyeTrackingInfo },
		{ "IsTrackerValid", &UAndroidXREyeTrackingBlueprintFunctionLibrary::execIsTrackerValid },
		{ "SupportsEyeTracking", &UAndroidXREyeTrackingBlueprintFunctionLibrary::execSupportsEyeTracking },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXREyeTrackingBlueprintFunctionLibrary;
UClass* UAndroidXREyeTrackingBlueprintFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UAndroidXREyeTrackingBlueprintFunctionLibrary;
	if (!Z_Registration_Info_UClass_UAndroidXREyeTrackingBlueprintFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXREyeTrackingBlueprintFunctionLibrary"),
			Z_Registration_Info_UClass_UAndroidXREyeTrackingBlueprintFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUAndroidXREyeTrackingBlueprintFunctionLibrary,
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
	return Z_Registration_Info_UClass_UAndroidXREyeTrackingBlueprintFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXREyeTrackingBlueprintFunctionLibrary_NoRegister()
{
	return UAndroidXREyeTrackingBlueprintFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXREyeTrackingBlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AndroidXREyeTracking" },
		{ "IncludePath", "AndroidXREyeTrackingBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/AndroidXREyeTrackingBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_CreateEyeTracker, "CreateEyeTracker" }, // 2352166998
		{ &Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_DestroyEyeTracker, "DestroyEyeTracker" }, // 1141344552
		{ &Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetCoarseEyeTrackingInfo, "GetCoarseEyeTrackingInfo" }, // 3471625432
		{ &Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_GetFineEyeTrackingInfo, "GetFineEyeTrackingInfo" }, // 2494779164
		{ &Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_IsTrackerValid, "IsTrackerValid" }, // 1838561510
		{ &Z_Construct_UFunction_UAndroidXREyeTrackingBlueprintFunctionLibrary_SupportsEyeTracking, "SupportsEyeTracking" }, // 2628301563
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXREyeTrackingBlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAndroidXREyeTrackingBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXREyeTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXREyeTrackingBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXREyeTrackingBlueprintFunctionLibrary_Statics::ClassParams = {
	&UAndroidXREyeTrackingBlueprintFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXREyeTrackingBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXREyeTrackingBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXREyeTrackingBlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UAndroidXREyeTrackingBlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXREyeTrackingBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UAndroidXREyeTrackingBlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXREyeTrackingBlueprintFunctionLibrary.OuterSingleton;
}
UAndroidXREyeTrackingBlueprintFunctionLibrary::UAndroidXREyeTrackingBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXREyeTrackingBlueprintFunctionLibrary);
UAndroidXREyeTrackingBlueprintFunctionLibrary::~UAndroidXREyeTrackingBlueprintFunctionLibrary() {}
// ********** End Class UAndroidXREyeTrackingBlueprintFunctionLibrary ******************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXREyeTracking_Source_AndroidXREyeTracking_Public_AndroidXREyeTrackingBlueprintFunctionLibrary_h__Script_AndroidXREyeTracking_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXREyeTrackingBlueprintFunctionLibrary, UAndroidXREyeTrackingBlueprintFunctionLibrary::StaticClass, TEXT("UAndroidXREyeTrackingBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UAndroidXREyeTrackingBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXREyeTrackingBlueprintFunctionLibrary), 602374787U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXREyeTracking_Source_AndroidXREyeTracking_Public_AndroidXREyeTrackingBlueprintFunctionLibrary_h__Script_AndroidXREyeTracking_3461074693(TEXT("/Script/AndroidXREyeTracking"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXREyeTracking_Source_AndroidXREyeTracking_Public_AndroidXREyeTrackingBlueprintFunctionLibrary_h__Script_AndroidXREyeTracking_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXREyeTracking_Source_AndroidXREyeTracking_Public_AndroidXREyeTrackingBlueprintFunctionLibrary_h__Script_AndroidXREyeTracking_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
