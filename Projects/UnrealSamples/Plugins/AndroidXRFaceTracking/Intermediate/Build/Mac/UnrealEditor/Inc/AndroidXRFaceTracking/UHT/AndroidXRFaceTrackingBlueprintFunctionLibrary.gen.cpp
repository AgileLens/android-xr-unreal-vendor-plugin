// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRFaceTrackingBlueprintFunctionLibrary.h"
#include "AndroidXRTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRFaceTrackingBlueprintFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRFaceState();
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRFaceTracker();
ANDROIDXRFACETRACKING_API UClass* Z_Construct_UClass_UAndroidXRFaceTrackingBlueprintFunctionLibrary();
ANDROIDXRFACETRACKING_API UClass* Z_Construct_UClass_UAndroidXRFaceTrackingBlueprintFunctionLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AndroidXRFaceTracking();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAndroidXRFaceTrackingBlueprintFunctionLibrary Function CreateFaceTracker 
struct Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_CreateFaceTracker_Statics
{
	struct AndroidXRFaceTrackingBlueprintFunctionLibrary_eventCreateFaceTracker_Parms
	{
		FAndroidXRFaceTracker FaceTracker;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Face Tracking Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Creates a face tracker\n     * @param[out] FaceTracker The created face tracker\n     * @return Whether the face tracker was created successfully\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRFaceTrackingBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a face tracker\n@param[out] FaceTracker The created face tracker\n@return Whether the face tracker was created successfully" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FaceTracker;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_CreateFaceTracker_Statics::NewProp_FaceTracker = { "FaceTracker", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRFaceTrackingBlueprintFunctionLibrary_eventCreateFaceTracker_Parms, FaceTracker), Z_Construct_UScriptStruct_FAndroidXRFaceTracker, METADATA_PARAMS(0, nullptr) }; // 773837539
void Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_CreateFaceTracker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRFaceTrackingBlueprintFunctionLibrary_eventCreateFaceTracker_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_CreateFaceTracker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRFaceTrackingBlueprintFunctionLibrary_eventCreateFaceTracker_Parms), &Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_CreateFaceTracker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_CreateFaceTracker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_CreateFaceTracker_Statics::NewProp_FaceTracker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_CreateFaceTracker_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_CreateFaceTracker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_CreateFaceTracker_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRFaceTrackingBlueprintFunctionLibrary, nullptr, "CreateFaceTracker", Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_CreateFaceTracker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_CreateFaceTracker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_CreateFaceTracker_Statics::AndroidXRFaceTrackingBlueprintFunctionLibrary_eventCreateFaceTracker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_CreateFaceTracker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_CreateFaceTracker_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_CreateFaceTracker_Statics::AndroidXRFaceTrackingBlueprintFunctionLibrary_eventCreateFaceTracker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_CreateFaceTracker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_CreateFaceTracker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRFaceTrackingBlueprintFunctionLibrary::execCreateFaceTracker)
{
	P_GET_STRUCT_REF(FAndroidXRFaceTracker,Z_Param_Out_FaceTracker);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRFaceTrackingBlueprintFunctionLibrary::CreateFaceTracker(Z_Param_Out_FaceTracker);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRFaceTrackingBlueprintFunctionLibrary Function CreateFaceTracker **

// ********** Begin Class UAndroidXRFaceTrackingBlueprintFunctionLibrary Function DestroyFaceTracker 
struct Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_DestroyFaceTracker_Statics
{
	struct AndroidXRFaceTrackingBlueprintFunctionLibrary_eventDestroyFaceTracker_Parms
	{
		FAndroidXRFaceTracker FaceTracker;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Face Tracking Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Destroys a face tracker\n     * @param[in] FaceTracker The face tracker to destroy\n     * @return Whether the face tracker was destroyed successfully\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRFaceTrackingBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Destroys a face tracker\n@param[in] FaceTracker The face tracker to destroy\n@return Whether the face tracker was destroyed successfully" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FaceTracker;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_DestroyFaceTracker_Statics::NewProp_FaceTracker = { "FaceTracker", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRFaceTrackingBlueprintFunctionLibrary_eventDestroyFaceTracker_Parms, FaceTracker), Z_Construct_UScriptStruct_FAndroidXRFaceTracker, METADATA_PARAMS(0, nullptr) }; // 773837539
void Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_DestroyFaceTracker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRFaceTrackingBlueprintFunctionLibrary_eventDestroyFaceTracker_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_DestroyFaceTracker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRFaceTrackingBlueprintFunctionLibrary_eventDestroyFaceTracker_Parms), &Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_DestroyFaceTracker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_DestroyFaceTracker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_DestroyFaceTracker_Statics::NewProp_FaceTracker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_DestroyFaceTracker_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_DestroyFaceTracker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_DestroyFaceTracker_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRFaceTrackingBlueprintFunctionLibrary, nullptr, "DestroyFaceTracker", Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_DestroyFaceTracker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_DestroyFaceTracker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_DestroyFaceTracker_Statics::AndroidXRFaceTrackingBlueprintFunctionLibrary_eventDestroyFaceTracker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_DestroyFaceTracker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_DestroyFaceTracker_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_DestroyFaceTracker_Statics::AndroidXRFaceTrackingBlueprintFunctionLibrary_eventDestroyFaceTracker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_DestroyFaceTracker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_DestroyFaceTracker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRFaceTrackingBlueprintFunctionLibrary::execDestroyFaceTracker)
{
	P_GET_STRUCT_REF(FAndroidXRFaceTracker,Z_Param_Out_FaceTracker);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRFaceTrackingBlueprintFunctionLibrary::DestroyFaceTracker(Z_Param_Out_FaceTracker);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRFaceTrackingBlueprintFunctionLibrary Function DestroyFaceTracker *

// ********** Begin Class UAndroidXRFaceTrackingBlueprintFunctionLibrary Function GetFaceCalibrationState 
struct Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceCalibrationState_Statics
{
	struct AndroidXRFaceTrackingBlueprintFunctionLibrary_eventGetFaceCalibrationState_Parms
	{
		FAndroidXRFaceTracker FaceTracker;
		bool IsCalibrated;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Face Tracking Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Gets the calibration state of the face tracker\n     * @param[in] FaceTracker The face tracker to check the calibration status for\n     * @param[out] IsCalibrated The calibration status\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRFaceTrackingBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the calibration state of the face tracker\n@param[in] FaceTracker The face tracker to check the calibration status for\n@param[out] IsCalibrated The calibration status" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceTracker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FaceTracker;
	static void NewProp_IsCalibrated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsCalibrated;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceCalibrationState_Statics::NewProp_FaceTracker = { "FaceTracker", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRFaceTrackingBlueprintFunctionLibrary_eventGetFaceCalibrationState_Parms, FaceTracker), Z_Construct_UScriptStruct_FAndroidXRFaceTracker, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceTracker_MetaData), NewProp_FaceTracker_MetaData) }; // 773837539
void Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceCalibrationState_Statics::NewProp_IsCalibrated_SetBit(void* Obj)
{
	((AndroidXRFaceTrackingBlueprintFunctionLibrary_eventGetFaceCalibrationState_Parms*)Obj)->IsCalibrated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceCalibrationState_Statics::NewProp_IsCalibrated = { "IsCalibrated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRFaceTrackingBlueprintFunctionLibrary_eventGetFaceCalibrationState_Parms), &Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceCalibrationState_Statics::NewProp_IsCalibrated_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceCalibrationState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRFaceTrackingBlueprintFunctionLibrary_eventGetFaceCalibrationState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceCalibrationState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRFaceTrackingBlueprintFunctionLibrary_eventGetFaceCalibrationState_Parms), &Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceCalibrationState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceCalibrationState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceCalibrationState_Statics::NewProp_FaceTracker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceCalibrationState_Statics::NewProp_IsCalibrated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceCalibrationState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceCalibrationState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceCalibrationState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRFaceTrackingBlueprintFunctionLibrary, nullptr, "GetFaceCalibrationState", Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceCalibrationState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceCalibrationState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceCalibrationState_Statics::AndroidXRFaceTrackingBlueprintFunctionLibrary_eventGetFaceCalibrationState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceCalibrationState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceCalibrationState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceCalibrationState_Statics::AndroidXRFaceTrackingBlueprintFunctionLibrary_eventGetFaceCalibrationState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceCalibrationState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceCalibrationState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRFaceTrackingBlueprintFunctionLibrary::execGetFaceCalibrationState)
{
	P_GET_STRUCT_REF(FAndroidXRFaceTracker,Z_Param_Out_FaceTracker);
	P_GET_UBOOL_REF(Z_Param_Out_IsCalibrated);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRFaceTrackingBlueprintFunctionLibrary::GetFaceCalibrationState(Z_Param_Out_FaceTracker,Z_Param_Out_IsCalibrated);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRFaceTrackingBlueprintFunctionLibrary Function GetFaceCalibrationState 

// ********** Begin Class UAndroidXRFaceTrackingBlueprintFunctionLibrary Function GetFaceState *****
struct Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceState_Statics
{
	struct AndroidXRFaceTrackingBlueprintFunctionLibrary_eventGetFaceState_Parms
	{
		FAndroidXRFaceTracker FaceTracker;
		FAndroidXRFaceState FaceState;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Face Tracking Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Gets the blend shapes of a facial expression\n     * @param[in] FaceTracker The tracker to get the state through\n     * @param[out] FaceState The face tracking state and facial expressions\n     * @return Whether the state was able to be obtained successfully\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRFaceTrackingBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the blend shapes of a facial expression\n@param[in] FaceTracker The tracker to get the state through\n@param[out] FaceState The face tracking state and facial expressions\n@return Whether the state was able to be obtained successfully" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceTracker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FaceTracker;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FaceState;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceState_Statics::NewProp_FaceTracker = { "FaceTracker", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRFaceTrackingBlueprintFunctionLibrary_eventGetFaceState_Parms, FaceTracker), Z_Construct_UScriptStruct_FAndroidXRFaceTracker, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceTracker_MetaData), NewProp_FaceTracker_MetaData) }; // 773837539
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceState_Statics::NewProp_FaceState = { "FaceState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRFaceTrackingBlueprintFunctionLibrary_eventGetFaceState_Parms, FaceState), Z_Construct_UScriptStruct_FAndroidXRFaceState, METADATA_PARAMS(0, nullptr) }; // 2513444597
void Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRFaceTrackingBlueprintFunctionLibrary_eventGetFaceState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRFaceTrackingBlueprintFunctionLibrary_eventGetFaceState_Parms), &Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceState_Statics::NewProp_FaceTracker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceState_Statics::NewProp_FaceState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRFaceTrackingBlueprintFunctionLibrary, nullptr, "GetFaceState", Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceState_Statics::AndroidXRFaceTrackingBlueprintFunctionLibrary_eventGetFaceState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceState_Statics::AndroidXRFaceTrackingBlueprintFunctionLibrary_eventGetFaceState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRFaceTrackingBlueprintFunctionLibrary::execGetFaceState)
{
	P_GET_STRUCT_REF(FAndroidXRFaceTracker,Z_Param_Out_FaceTracker);
	P_GET_STRUCT_REF(FAndroidXRFaceState,Z_Param_Out_FaceState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRFaceTrackingBlueprintFunctionLibrary::GetFaceState(Z_Param_Out_FaceTracker,Z_Param_Out_FaceState);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRFaceTrackingBlueprintFunctionLibrary Function GetFaceState *******

// ********** Begin Class UAndroidXRFaceTrackingBlueprintFunctionLibrary Function IsValidFaceTracker 
struct Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_IsValidFaceTracker_Statics
{
	struct AndroidXRFaceTrackingBlueprintFunctionLibrary_eventIsValidFaceTracker_Parms
	{
		FAndroidXRFaceTracker FaceTracker;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Face Tracking Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Determines whether or not an FAndroidXRFaceTracker is valid.\n     * @param[in] FaceTracker Face tracker to be verified.\n     * @return True if the face tracker is valid.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRFaceTrackingBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines whether or not an FAndroidXRFaceTracker is valid.\n@param[in] FaceTracker Face tracker to be verified.\n@return True if the face tracker is valid." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceTracker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FaceTracker;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_IsValidFaceTracker_Statics::NewProp_FaceTracker = { "FaceTracker", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRFaceTrackingBlueprintFunctionLibrary_eventIsValidFaceTracker_Parms, FaceTracker), Z_Construct_UScriptStruct_FAndroidXRFaceTracker, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceTracker_MetaData), NewProp_FaceTracker_MetaData) }; // 773837539
void Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_IsValidFaceTracker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRFaceTrackingBlueprintFunctionLibrary_eventIsValidFaceTracker_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_IsValidFaceTracker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRFaceTrackingBlueprintFunctionLibrary_eventIsValidFaceTracker_Parms), &Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_IsValidFaceTracker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_IsValidFaceTracker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_IsValidFaceTracker_Statics::NewProp_FaceTracker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_IsValidFaceTracker_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_IsValidFaceTracker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_IsValidFaceTracker_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRFaceTrackingBlueprintFunctionLibrary, nullptr, "IsValidFaceTracker", Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_IsValidFaceTracker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_IsValidFaceTracker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_IsValidFaceTracker_Statics::AndroidXRFaceTrackingBlueprintFunctionLibrary_eventIsValidFaceTracker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_IsValidFaceTracker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_IsValidFaceTracker_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_IsValidFaceTracker_Statics::AndroidXRFaceTrackingBlueprintFunctionLibrary_eventIsValidFaceTracker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_IsValidFaceTracker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_IsValidFaceTracker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRFaceTrackingBlueprintFunctionLibrary::execIsValidFaceTracker)
{
	P_GET_STRUCT_REF(FAndroidXRFaceTracker,Z_Param_Out_FaceTracker);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRFaceTrackingBlueprintFunctionLibrary::IsValidFaceTracker(Z_Param_Out_FaceTracker);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRFaceTrackingBlueprintFunctionLibrary Function IsValidFaceTracker *

// ********** Begin Class UAndroidXRFaceTrackingBlueprintFunctionLibrary ***************************
void UAndroidXRFaceTrackingBlueprintFunctionLibrary::StaticRegisterNativesUAndroidXRFaceTrackingBlueprintFunctionLibrary()
{
	UClass* Class = UAndroidXRFaceTrackingBlueprintFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateFaceTracker", &UAndroidXRFaceTrackingBlueprintFunctionLibrary::execCreateFaceTracker },
		{ "DestroyFaceTracker", &UAndroidXRFaceTrackingBlueprintFunctionLibrary::execDestroyFaceTracker },
		{ "GetFaceCalibrationState", &UAndroidXRFaceTrackingBlueprintFunctionLibrary::execGetFaceCalibrationState },
		{ "GetFaceState", &UAndroidXRFaceTrackingBlueprintFunctionLibrary::execGetFaceState },
		{ "IsValidFaceTracker", &UAndroidXRFaceTrackingBlueprintFunctionLibrary::execIsValidFaceTracker },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRFaceTrackingBlueprintFunctionLibrary;
UClass* UAndroidXRFaceTrackingBlueprintFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UAndroidXRFaceTrackingBlueprintFunctionLibrary;
	if (!Z_Registration_Info_UClass_UAndroidXRFaceTrackingBlueprintFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRFaceTrackingBlueprintFunctionLibrary"),
			Z_Registration_Info_UClass_UAndroidXRFaceTrackingBlueprintFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUAndroidXRFaceTrackingBlueprintFunctionLibrary,
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
	return Z_Registration_Info_UClass_UAndroidXRFaceTrackingBlueprintFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRFaceTrackingBlueprintFunctionLibrary_NoRegister()
{
	return UAndroidXRFaceTrackingBlueprintFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRFaceTrackingBlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AndroidXRFaceTracking" },
		{ "IncludePath", "AndroidXRFaceTrackingBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/AndroidXRFaceTrackingBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_CreateFaceTracker, "CreateFaceTracker" }, // 2506283311
		{ &Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_DestroyFaceTracker, "DestroyFaceTracker" }, // 3148443753
		{ &Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceCalibrationState, "GetFaceCalibrationState" }, // 2075848960
		{ &Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_GetFaceState, "GetFaceState" }, // 747527237
		{ &Z_Construct_UFunction_UAndroidXRFaceTrackingBlueprintFunctionLibrary_IsValidFaceTracker, "IsValidFaceTracker" }, // 1441838936
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRFaceTrackingBlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAndroidXRFaceTrackingBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRFaceTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRFaceTrackingBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRFaceTrackingBlueprintFunctionLibrary_Statics::ClassParams = {
	&UAndroidXRFaceTrackingBlueprintFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRFaceTrackingBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRFaceTrackingBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRFaceTrackingBlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UAndroidXRFaceTrackingBlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRFaceTrackingBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UAndroidXRFaceTrackingBlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRFaceTrackingBlueprintFunctionLibrary.OuterSingleton;
}
UAndroidXRFaceTrackingBlueprintFunctionLibrary::UAndroidXRFaceTrackingBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRFaceTrackingBlueprintFunctionLibrary);
UAndroidXRFaceTrackingBlueprintFunctionLibrary::~UAndroidXRFaceTrackingBlueprintFunctionLibrary() {}
// ********** End Class UAndroidXRFaceTrackingBlueprintFunctionLibrary *****************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRFaceTracking_Source_AndroidXRFaceTracking_Public_AndroidXRFaceTrackingBlueprintFunctionLibrary_h__Script_AndroidXRFaceTracking_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXRFaceTrackingBlueprintFunctionLibrary, UAndroidXRFaceTrackingBlueprintFunctionLibrary::StaticClass, TEXT("UAndroidXRFaceTrackingBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UAndroidXRFaceTrackingBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRFaceTrackingBlueprintFunctionLibrary), 3131850552U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRFaceTracking_Source_AndroidXRFaceTracking_Public_AndroidXRFaceTrackingBlueprintFunctionLibrary_h__Script_AndroidXRFaceTracking_1567326359(TEXT("/Script/AndroidXRFaceTracking"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRFaceTracking_Source_AndroidXRFaceTracking_Public_AndroidXRFaceTrackingBlueprintFunctionLibrary_h__Script_AndroidXRFaceTracking_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRFaceTracking_Source_AndroidXRFaceTracking_Public_AndroidXRFaceTrackingBlueprintFunctionLibrary_h__Script_AndroidXRFaceTracking_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
