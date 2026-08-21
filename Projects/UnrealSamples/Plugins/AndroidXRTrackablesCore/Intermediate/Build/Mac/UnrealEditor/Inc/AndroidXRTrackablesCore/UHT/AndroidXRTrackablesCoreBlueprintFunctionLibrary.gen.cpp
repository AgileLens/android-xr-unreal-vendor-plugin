// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRTrackablesCoreBlueprintFunctionLibrary.h"
#include "AndroidXRTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRTrackablesCoreBlueprintFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXR_API UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRTrackableType();
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRRaycastHit();
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRSpace();
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRTrackable();
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRTrackablePlane();
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRTrackableTracker();
ANDROIDXRTRACKABLESCORE_API UClass* Z_Construct_UClass_UAndroidXRTrackablesCoreBlueprintFunctionLibrary();
ANDROIDXRTRACKABLESCORE_API UClass* Z_Construct_UClass_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AndroidXRTrackablesCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAndroidXRTrackablesCoreBlueprintFunctionLibrary Function CreateAnchorSpace 
struct Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateAnchorSpace_Statics
{
	struct AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventCreateAnchorSpace_Parms
	{
		FTransform Transform;
		FAndroidXRTrackable Trackable;
		FAndroidXRSpace AnchorSpace;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Trackables Core Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Creates an anchor space.\n     * @param[in] Transform Anchor transform.\n     * @param[in] Trackable Optional trackable to attach the anchor to.\n     * @param[out] AnchorSpace Created anchor space.\n     * @return True if the underlying API call was successful.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTrackablesCoreBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates an anchor space.\n@param[in] Transform Anchor transform.\n@param[in] Trackable Optional trackable to attach the anchor to.\n@param[out] AnchorSpace Created anchor space.\n@return True if the underlying API call was successful." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Trackable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Trackable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnchorSpace;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateAnchorSpace_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventCreateAnchorSpace_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateAnchorSpace_Statics::NewProp_Trackable = { "Trackable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventCreateAnchorSpace_Parms, Trackable), Z_Construct_UScriptStruct_FAndroidXRTrackable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Trackable_MetaData), NewProp_Trackable_MetaData) }; // 3607608211
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateAnchorSpace_Statics::NewProp_AnchorSpace = { "AnchorSpace", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventCreateAnchorSpace_Parms, AnchorSpace), Z_Construct_UScriptStruct_FAndroidXRSpace, METADATA_PARAMS(0, nullptr) }; // 1341678083
void Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateAnchorSpace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventCreateAnchorSpace_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateAnchorSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventCreateAnchorSpace_Parms), &Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateAnchorSpace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateAnchorSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateAnchorSpace_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateAnchorSpace_Statics::NewProp_Trackable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateAnchorSpace_Statics::NewProp_AnchorSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateAnchorSpace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateAnchorSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateAnchorSpace_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRTrackablesCoreBlueprintFunctionLibrary, nullptr, "CreateAnchorSpace", Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateAnchorSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateAnchorSpace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateAnchorSpace_Statics::AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventCreateAnchorSpace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateAnchorSpace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateAnchorSpace_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateAnchorSpace_Statics::AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventCreateAnchorSpace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateAnchorSpace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateAnchorSpace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRTrackablesCoreBlueprintFunctionLibrary::execCreateAnchorSpace)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
	P_GET_STRUCT_REF(FAndroidXRTrackable,Z_Param_Out_Trackable);
	P_GET_STRUCT_REF(FAndroidXRSpace,Z_Param_Out_AnchorSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRTrackablesCoreBlueprintFunctionLibrary::CreateAnchorSpace(Z_Param_Out_Transform,Z_Param_Out_Trackable,Z_Param_Out_AnchorSpace);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRTrackablesCoreBlueprintFunctionLibrary Function CreateAnchorSpace 

// ********** Begin Class UAndroidXRTrackablesCoreBlueprintFunctionLibrary Function CreateTrackableTracker 
struct Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateTrackableTracker_Statics
{
	struct AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventCreateTrackableTracker_Parms
	{
		EAndroidXRTrackableType TrackableType;
		FAndroidXRTrackableTracker TrackableTracker;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Trackables Core Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Creates a trackable tracker for the specified trackable type.\n     * @param[in] TrackableType Type of trackable tracker to be created.\n     * @param[out] TrackableTracker Created trackable tracker.\n     * @return True if the underlying API call was successful.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTrackablesCoreBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a trackable tracker for the specified trackable type.\n@param[in] TrackableType Type of trackable tracker to be created.\n@param[out] TrackableTracker Created trackable tracker.\n@return True if the underlying API call was successful." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackableType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackableType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrackableTracker;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateTrackableTracker_Statics::NewProp_TrackableType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateTrackableTracker_Statics::NewProp_TrackableType = { "TrackableType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventCreateTrackableTracker_Parms, TrackableType), Z_Construct_UEnum_AndroidXR_EAndroidXRTrackableType, METADATA_PARAMS(0, nullptr) }; // 160846275
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateTrackableTracker_Statics::NewProp_TrackableTracker = { "TrackableTracker", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventCreateTrackableTracker_Parms, TrackableTracker), Z_Construct_UScriptStruct_FAndroidXRTrackableTracker, METADATA_PARAMS(0, nullptr) }; // 2921418092
void Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateTrackableTracker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventCreateTrackableTracker_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateTrackableTracker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventCreateTrackableTracker_Parms), &Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateTrackableTracker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateTrackableTracker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateTrackableTracker_Statics::NewProp_TrackableType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateTrackableTracker_Statics::NewProp_TrackableType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateTrackableTracker_Statics::NewProp_TrackableTracker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateTrackableTracker_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateTrackableTracker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateTrackableTracker_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRTrackablesCoreBlueprintFunctionLibrary, nullptr, "CreateTrackableTracker", Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateTrackableTracker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateTrackableTracker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateTrackableTracker_Statics::AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventCreateTrackableTracker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateTrackableTracker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateTrackableTracker_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateTrackableTracker_Statics::AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventCreateTrackableTracker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateTrackableTracker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateTrackableTracker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRTrackablesCoreBlueprintFunctionLibrary::execCreateTrackableTracker)
{
	P_GET_ENUM(EAndroidXRTrackableType,Z_Param_TrackableType);
	P_GET_STRUCT_REF(FAndroidXRTrackableTracker,Z_Param_Out_TrackableTracker);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRTrackablesCoreBlueprintFunctionLibrary::CreateTrackableTracker(EAndroidXRTrackableType(Z_Param_TrackableType),Z_Param_Out_TrackableTracker);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRTrackablesCoreBlueprintFunctionLibrary Function CreateTrackableTracker 

// ********** Begin Class UAndroidXRTrackablesCoreBlueprintFunctionLibrary Function DestroyTrackableTracker 
struct Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_DestroyTrackableTracker_Statics
{
	struct AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventDestroyTrackableTracker_Parms
	{
		FAndroidXRTrackableTracker TrackableTracker;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Trackables Core Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Destroys a trackable tracker.\n     * @param[in] TrackableTracker Trackable tracker to be destroyed.\n     * @return True if the underlying API call was successful.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTrackablesCoreBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Destroys a trackable tracker.\n@param[in] TrackableTracker Trackable tracker to be destroyed.\n@return True if the underlying API call was successful." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrackableTracker;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_DestroyTrackableTracker_Statics::NewProp_TrackableTracker = { "TrackableTracker", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventDestroyTrackableTracker_Parms, TrackableTracker), Z_Construct_UScriptStruct_FAndroidXRTrackableTracker, METADATA_PARAMS(0, nullptr) }; // 2921418092
void Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_DestroyTrackableTracker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventDestroyTrackableTracker_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_DestroyTrackableTracker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventDestroyTrackableTracker_Parms), &Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_DestroyTrackableTracker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_DestroyTrackableTracker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_DestroyTrackableTracker_Statics::NewProp_TrackableTracker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_DestroyTrackableTracker_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_DestroyTrackableTracker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_DestroyTrackableTracker_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRTrackablesCoreBlueprintFunctionLibrary, nullptr, "DestroyTrackableTracker", Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_DestroyTrackableTracker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_DestroyTrackableTracker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_DestroyTrackableTracker_Statics::AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventDestroyTrackableTracker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_DestroyTrackableTracker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_DestroyTrackableTracker_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_DestroyTrackableTracker_Statics::AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventDestroyTrackableTracker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_DestroyTrackableTracker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_DestroyTrackableTracker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRTrackablesCoreBlueprintFunctionLibrary::execDestroyTrackableTracker)
{
	P_GET_STRUCT_REF(FAndroidXRTrackableTracker,Z_Param_Out_TrackableTracker);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRTrackablesCoreBlueprintFunctionLibrary::DestroyTrackableTracker(Z_Param_Out_TrackableTracker);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRTrackablesCoreBlueprintFunctionLibrary Function DestroyTrackableTracker 

// ********** Begin Class UAndroidXRTrackablesCoreBlueprintFunctionLibrary Function EnumerateRaycastSupportedTrackableTypes 
struct Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateRaycastSupportedTrackableTypes_Statics
{
	struct AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventEnumerateRaycastSupportedTrackableTypes_Parms
	{
		TArray<EAndroidXRTrackableType> TrackableTypes;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Trackables Core Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Enumerates the trackable types supported by the Raycast API.\n     * @param[out] TrackableTypes Array to be filled with supported trackable types.\n     * @return True if the underlying API call was successful.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTrackablesCoreBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumerates the trackable types supported by the Raycast API.\n@param[out] TrackableTypes Array to be filled with supported trackable types.\n@return True if the underlying API call was successful." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackableTypes_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackableTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackableTypes;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateRaycastSupportedTrackableTypes_Statics::NewProp_TrackableTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateRaycastSupportedTrackableTypes_Statics::NewProp_TrackableTypes_Inner = { "TrackableTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_AndroidXR_EAndroidXRTrackableType, METADATA_PARAMS(0, nullptr) }; // 160846275
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateRaycastSupportedTrackableTypes_Statics::NewProp_TrackableTypes = { "TrackableTypes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventEnumerateRaycastSupportedTrackableTypes_Parms, TrackableTypes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 160846275
void Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateRaycastSupportedTrackableTypes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventEnumerateRaycastSupportedTrackableTypes_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateRaycastSupportedTrackableTypes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventEnumerateRaycastSupportedTrackableTypes_Parms), &Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateRaycastSupportedTrackableTypes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateRaycastSupportedTrackableTypes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateRaycastSupportedTrackableTypes_Statics::NewProp_TrackableTypes_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateRaycastSupportedTrackableTypes_Statics::NewProp_TrackableTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateRaycastSupportedTrackableTypes_Statics::NewProp_TrackableTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateRaycastSupportedTrackableTypes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateRaycastSupportedTrackableTypes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateRaycastSupportedTrackableTypes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRTrackablesCoreBlueprintFunctionLibrary, nullptr, "EnumerateRaycastSupportedTrackableTypes", Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateRaycastSupportedTrackableTypes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateRaycastSupportedTrackableTypes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateRaycastSupportedTrackableTypes_Statics::AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventEnumerateRaycastSupportedTrackableTypes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateRaycastSupportedTrackableTypes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateRaycastSupportedTrackableTypes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateRaycastSupportedTrackableTypes_Statics::AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventEnumerateRaycastSupportedTrackableTypes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateRaycastSupportedTrackableTypes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateRaycastSupportedTrackableTypes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRTrackablesCoreBlueprintFunctionLibrary::execEnumerateRaycastSupportedTrackableTypes)
{
	P_GET_TARRAY_REF(EAndroidXRTrackableType,Z_Param_Out_TrackableTypes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRTrackablesCoreBlueprintFunctionLibrary::EnumerateRaycastSupportedTrackableTypes(Z_Param_Out_TrackableTypes);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRTrackablesCoreBlueprintFunctionLibrary Function EnumerateRaycastSupportedTrackableTypes 

// ********** Begin Class UAndroidXRTrackablesCoreBlueprintFunctionLibrary Function EnumerateSupportedAnchorTrackableTypes 
struct Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedAnchorTrackableTypes_Statics
{
	struct AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventEnumerateSupportedAnchorTrackableTypes_Parms
	{
		TArray<EAndroidXRTrackableType> TrackableTypes;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Trackables Core Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Enumerates the anchor trackable types supported by the Trackables API.\n     * @param[out] TrackableTypes Array to be filled with supported anchor trackable types.\n     * @return True if the underlying API call was successful.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTrackablesCoreBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumerates the anchor trackable types supported by the Trackables API.\n@param[out] TrackableTypes Array to be filled with supported anchor trackable types.\n@return True if the underlying API call was successful." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackableTypes_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackableTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackableTypes;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedAnchorTrackableTypes_Statics::NewProp_TrackableTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedAnchorTrackableTypes_Statics::NewProp_TrackableTypes_Inner = { "TrackableTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_AndroidXR_EAndroidXRTrackableType, METADATA_PARAMS(0, nullptr) }; // 160846275
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedAnchorTrackableTypes_Statics::NewProp_TrackableTypes = { "TrackableTypes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventEnumerateSupportedAnchorTrackableTypes_Parms, TrackableTypes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 160846275
void Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedAnchorTrackableTypes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventEnumerateSupportedAnchorTrackableTypes_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedAnchorTrackableTypes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventEnumerateSupportedAnchorTrackableTypes_Parms), &Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedAnchorTrackableTypes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedAnchorTrackableTypes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedAnchorTrackableTypes_Statics::NewProp_TrackableTypes_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedAnchorTrackableTypes_Statics::NewProp_TrackableTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedAnchorTrackableTypes_Statics::NewProp_TrackableTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedAnchorTrackableTypes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedAnchorTrackableTypes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedAnchorTrackableTypes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRTrackablesCoreBlueprintFunctionLibrary, nullptr, "EnumerateSupportedAnchorTrackableTypes", Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedAnchorTrackableTypes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedAnchorTrackableTypes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedAnchorTrackableTypes_Statics::AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventEnumerateSupportedAnchorTrackableTypes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedAnchorTrackableTypes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedAnchorTrackableTypes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedAnchorTrackableTypes_Statics::AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventEnumerateSupportedAnchorTrackableTypes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedAnchorTrackableTypes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedAnchorTrackableTypes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRTrackablesCoreBlueprintFunctionLibrary::execEnumerateSupportedAnchorTrackableTypes)
{
	P_GET_TARRAY_REF(EAndroidXRTrackableType,Z_Param_Out_TrackableTypes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRTrackablesCoreBlueprintFunctionLibrary::EnumerateSupportedAnchorTrackableTypes(Z_Param_Out_TrackableTypes);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRTrackablesCoreBlueprintFunctionLibrary Function EnumerateSupportedAnchorTrackableTypes 

// ********** Begin Class UAndroidXRTrackablesCoreBlueprintFunctionLibrary Function EnumerateSupportedTrackableTypes 
struct Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedTrackableTypes_Statics
{
	struct AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventEnumerateSupportedTrackableTypes_Parms
	{
		TArray<EAndroidXRTrackableType> TrackableTypes;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Trackables Core Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Enumerates the trackable types supported by the Trackables API.\n     * @param[out] TrackableTypes Array to be filled with supported trackable types.\n     * @return True if the underlying API call was successful.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTrackablesCoreBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumerates the trackable types supported by the Trackables API.\n@param[out] TrackableTypes Array to be filled with supported trackable types.\n@return True if the underlying API call was successful." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackableTypes_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackableTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackableTypes;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedTrackableTypes_Statics::NewProp_TrackableTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedTrackableTypes_Statics::NewProp_TrackableTypes_Inner = { "TrackableTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_AndroidXR_EAndroidXRTrackableType, METADATA_PARAMS(0, nullptr) }; // 160846275
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedTrackableTypes_Statics::NewProp_TrackableTypes = { "TrackableTypes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventEnumerateSupportedTrackableTypes_Parms, TrackableTypes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 160846275
void Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedTrackableTypes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventEnumerateSupportedTrackableTypes_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedTrackableTypes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventEnumerateSupportedTrackableTypes_Parms), &Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedTrackableTypes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedTrackableTypes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedTrackableTypes_Statics::NewProp_TrackableTypes_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedTrackableTypes_Statics::NewProp_TrackableTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedTrackableTypes_Statics::NewProp_TrackableTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedTrackableTypes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedTrackableTypes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedTrackableTypes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRTrackablesCoreBlueprintFunctionLibrary, nullptr, "EnumerateSupportedTrackableTypes", Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedTrackableTypes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedTrackableTypes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedTrackableTypes_Statics::AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventEnumerateSupportedTrackableTypes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedTrackableTypes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedTrackableTypes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedTrackableTypes_Statics::AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventEnumerateSupportedTrackableTypes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedTrackableTypes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedTrackableTypes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRTrackablesCoreBlueprintFunctionLibrary::execEnumerateSupportedTrackableTypes)
{
	P_GET_TARRAY_REF(EAndroidXRTrackableType,Z_Param_Out_TrackableTypes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRTrackablesCoreBlueprintFunctionLibrary::EnumerateSupportedTrackableTypes(Z_Param_Out_TrackableTypes);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRTrackablesCoreBlueprintFunctionLibrary Function EnumerateSupportedTrackableTypes 

// ********** Begin Class UAndroidXRTrackablesCoreBlueprintFunctionLibrary Function GetAllTrackables 
struct Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetAllTrackables_Statics
{
	struct AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventGetAllTrackables_Parms
	{
		FAndroidXRTrackableTracker TrackableTracker;
		TArray<FAndroidXRTrackable> Trackables;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Trackables Core Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Gets all trackables of the specified trackable tracker type.\n     * @param[in] TrackableTracker Previously created tracker specifying what\n     * type of trackables to get.\n     * @param[out] Trackables Array to be filled with trackables.\n     * @return True if the underlying API call was successful.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTrackablesCoreBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets all trackables of the specified trackable tracker type.\n@param[in] TrackableTracker Previously created tracker specifying what\ntype of trackables to get.\n@param[out] Trackables Array to be filled with trackables.\n@return True if the underlying API call was successful." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackableTracker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrackableTracker;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Trackables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Trackables;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetAllTrackables_Statics::NewProp_TrackableTracker = { "TrackableTracker", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventGetAllTrackables_Parms, TrackableTracker), Z_Construct_UScriptStruct_FAndroidXRTrackableTracker, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackableTracker_MetaData), NewProp_TrackableTracker_MetaData) }; // 2921418092
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetAllTrackables_Statics::NewProp_Trackables_Inner = { "Trackables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAndroidXRTrackable, METADATA_PARAMS(0, nullptr) }; // 3607608211
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetAllTrackables_Statics::NewProp_Trackables = { "Trackables", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventGetAllTrackables_Parms, Trackables), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3607608211
void Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetAllTrackables_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventGetAllTrackables_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetAllTrackables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventGetAllTrackables_Parms), &Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetAllTrackables_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetAllTrackables_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetAllTrackables_Statics::NewProp_TrackableTracker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetAllTrackables_Statics::NewProp_Trackables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetAllTrackables_Statics::NewProp_Trackables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetAllTrackables_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetAllTrackables_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetAllTrackables_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRTrackablesCoreBlueprintFunctionLibrary, nullptr, "GetAllTrackables", Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetAllTrackables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetAllTrackables_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetAllTrackables_Statics::AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventGetAllTrackables_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetAllTrackables_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetAllTrackables_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetAllTrackables_Statics::AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventGetAllTrackables_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetAllTrackables()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetAllTrackables_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRTrackablesCoreBlueprintFunctionLibrary::execGetAllTrackables)
{
	P_GET_STRUCT_REF(FAndroidXRTrackableTracker,Z_Param_Out_TrackableTracker);
	P_GET_TARRAY_REF(FAndroidXRTrackable,Z_Param_Out_Trackables);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRTrackablesCoreBlueprintFunctionLibrary::GetAllTrackables(Z_Param_Out_TrackableTracker,Z_Param_Out_Trackables);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRTrackablesCoreBlueprintFunctionLibrary Function GetAllTrackables *

// ********** Begin Class UAndroidXRTrackablesCoreBlueprintFunctionLibrary Function GetTrackablePlane 
struct Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackablePlane_Statics
{
	struct AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventGetTrackablePlane_Parms
	{
		FAndroidXRTrackableTracker TrackableTracker;
		FAndroidXRTrackable Trackable;
		FAndroidXRTrackablePlane TrackablePlane;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Trackables Core Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Gets an FAndroidXRTrackablePlane from an FAndroidXRTrackable.\n     * @param[in] TrackableTracker Previously created plane tracker.\n     * @param[out] Trackable Previously obtained trackable.\n     * @param[out] TrackablePlane Trackable plane.\n     * @return True if the underlying API call was successful.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTrackablesCoreBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets an FAndroidXRTrackablePlane from an FAndroidXRTrackable.\n@param[in] TrackableTracker Previously created plane tracker.\n@param[out] Trackable Previously obtained trackable.\n@param[out] TrackablePlane Trackable plane.\n@return True if the underlying API call was successful." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackableTracker_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Trackable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrackableTracker;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Trackable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrackablePlane;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackablePlane_Statics::NewProp_TrackableTracker = { "TrackableTracker", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventGetTrackablePlane_Parms, TrackableTracker), Z_Construct_UScriptStruct_FAndroidXRTrackableTracker, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackableTracker_MetaData), NewProp_TrackableTracker_MetaData) }; // 2921418092
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackablePlane_Statics::NewProp_Trackable = { "Trackable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventGetTrackablePlane_Parms, Trackable), Z_Construct_UScriptStruct_FAndroidXRTrackable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Trackable_MetaData), NewProp_Trackable_MetaData) }; // 3607608211
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackablePlane_Statics::NewProp_TrackablePlane = { "TrackablePlane", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventGetTrackablePlane_Parms, TrackablePlane), Z_Construct_UScriptStruct_FAndroidXRTrackablePlane, METADATA_PARAMS(0, nullptr) }; // 1988889438
void Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackablePlane_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventGetTrackablePlane_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackablePlane_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventGetTrackablePlane_Parms), &Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackablePlane_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackablePlane_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackablePlane_Statics::NewProp_TrackableTracker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackablePlane_Statics::NewProp_Trackable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackablePlane_Statics::NewProp_TrackablePlane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackablePlane_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackablePlane_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackablePlane_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRTrackablesCoreBlueprintFunctionLibrary, nullptr, "GetTrackablePlane", Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackablePlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackablePlane_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackablePlane_Statics::AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventGetTrackablePlane_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackablePlane_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackablePlane_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackablePlane_Statics::AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventGetTrackablePlane_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackablePlane()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackablePlane_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRTrackablesCoreBlueprintFunctionLibrary::execGetTrackablePlane)
{
	P_GET_STRUCT_REF(FAndroidXRTrackableTracker,Z_Param_Out_TrackableTracker);
	P_GET_STRUCT_REF(FAndroidXRTrackable,Z_Param_Out_Trackable);
	P_GET_STRUCT_REF(FAndroidXRTrackablePlane,Z_Param_Out_TrackablePlane);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRTrackablesCoreBlueprintFunctionLibrary::GetTrackablePlane(Z_Param_Out_TrackableTracker,Z_Param_Out_Trackable,Z_Param_Out_TrackablePlane);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRTrackablesCoreBlueprintFunctionLibrary Function GetTrackablePlane 

// ********** Begin Class UAndroidXRTrackablesCoreBlueprintFunctionLibrary Function GetTrackableProperties 
struct Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackableProperties_Statics
{
	struct AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventGetTrackableProperties_Parms
	{
		int32 MaxAnchors;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Trackables Core Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Returns whether or not anchors are supported and provides the\n     * maximum number of anchors.\n     * @param[out] MaxAnchors The maximum number of anchors supported (if 0,\n     * indicates anchors are not supported).\n     * @return True if the underlying API call was successful.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTrackablesCoreBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether or not anchors are supported and provides the\nmaximum number of anchors.\n@param[out] MaxAnchors The maximum number of anchors supported (if 0,\nindicates anchors are not supported).\n@return True if the underlying API call was successful." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAnchors;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackableProperties_Statics::NewProp_MaxAnchors = { "MaxAnchors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventGetTrackableProperties_Parms, MaxAnchors), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackableProperties_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventGetTrackableProperties_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackableProperties_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventGetTrackableProperties_Parms), &Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackableProperties_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackableProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackableProperties_Statics::NewProp_MaxAnchors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackableProperties_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackableProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackableProperties_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRTrackablesCoreBlueprintFunctionLibrary, nullptr, "GetTrackableProperties", Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackableProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackableProperties_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackableProperties_Statics::AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventGetTrackableProperties_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackableProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackableProperties_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackableProperties_Statics::AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventGetTrackableProperties_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackableProperties()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackableProperties_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRTrackablesCoreBlueprintFunctionLibrary::execGetTrackableProperties)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MaxAnchors);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRTrackablesCoreBlueprintFunctionLibrary::GetTrackableProperties(Z_Param_Out_MaxAnchors);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRTrackablesCoreBlueprintFunctionLibrary Function GetTrackableProperties 

// ********** Begin Class UAndroidXRTrackablesCoreBlueprintFunctionLibrary Function IsValidTrackable 
struct Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackable_Statics
{
	struct AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventIsValidTrackable_Parms
	{
		FAndroidXRTrackable Trackable;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Trackables Core Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Determines whether or not an FAndroidXRTrackable is valid.\n     * @param[in] Trackable Trackable to be verified.\n     * @return True if the trackable is valid.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTrackablesCoreBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines whether or not an FAndroidXRTrackable is valid.\n@param[in] Trackable Trackable to be verified.\n@return True if the trackable is valid." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Trackable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Trackable;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackable_Statics::NewProp_Trackable = { "Trackable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventIsValidTrackable_Parms, Trackable), Z_Construct_UScriptStruct_FAndroidXRTrackable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Trackable_MetaData), NewProp_Trackable_MetaData) }; // 3607608211
void Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventIsValidTrackable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventIsValidTrackable_Parms), &Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackable_Statics::NewProp_Trackable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRTrackablesCoreBlueprintFunctionLibrary, nullptr, "IsValidTrackable", Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackable_Statics::AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventIsValidTrackable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackable_Statics::AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventIsValidTrackable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRTrackablesCoreBlueprintFunctionLibrary::execIsValidTrackable)
{
	P_GET_STRUCT_REF(FAndroidXRTrackable,Z_Param_Out_Trackable);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRTrackablesCoreBlueprintFunctionLibrary::IsValidTrackable(Z_Param_Out_Trackable);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRTrackablesCoreBlueprintFunctionLibrary Function IsValidTrackable *

// ********** Begin Class UAndroidXRTrackablesCoreBlueprintFunctionLibrary Function IsValidTrackableTracker 
struct Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackableTracker_Statics
{
	struct AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventIsValidTrackableTracker_Parms
	{
		FAndroidXRTrackableTracker TrackableTracker;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Trackables Core Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Determines whether or not a FAndroidXRTrackableTracker is valid.\n     * @param[in] TrackableTracker TrackableTracker to be verified.\n     * @return True if the trackable tracker is valid.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTrackablesCoreBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines whether or not a FAndroidXRTrackableTracker is valid.\n@param[in] TrackableTracker TrackableTracker to be verified.\n@return True if the trackable tracker is valid." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackableTracker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrackableTracker;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackableTracker_Statics::NewProp_TrackableTracker = { "TrackableTracker", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventIsValidTrackableTracker_Parms, TrackableTracker), Z_Construct_UScriptStruct_FAndroidXRTrackableTracker, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackableTracker_MetaData), NewProp_TrackableTracker_MetaData) }; // 2921418092
void Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackableTracker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventIsValidTrackableTracker_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackableTracker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventIsValidTrackableTracker_Parms), &Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackableTracker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackableTracker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackableTracker_Statics::NewProp_TrackableTracker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackableTracker_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackableTracker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackableTracker_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRTrackablesCoreBlueprintFunctionLibrary, nullptr, "IsValidTrackableTracker", Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackableTracker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackableTracker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackableTracker_Statics::AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventIsValidTrackableTracker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackableTracker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackableTracker_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackableTracker_Statics::AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventIsValidTrackableTracker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackableTracker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackableTracker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRTrackablesCoreBlueprintFunctionLibrary::execIsValidTrackableTracker)
{
	P_GET_STRUCT_REF(FAndroidXRTrackableTracker,Z_Param_Out_TrackableTracker);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRTrackablesCoreBlueprintFunctionLibrary::IsValidTrackableTracker(Z_Param_Out_TrackableTracker);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRTrackablesCoreBlueprintFunctionLibrary Function IsValidTrackableTracker 

// ********** Begin Class UAndroidXRTrackablesCoreBlueprintFunctionLibrary Function Raycast ********
struct Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Raycast_Statics
{
	struct AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventRaycast_Parms
	{
		FVector Origin;
		FVector Direction;
		TArray<FAndroidXRTrackableTracker> TrackableTrackers;
		int32 MaxResults;
		TArray<FAndroidXRRaycastHit> HitResults;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Trackables Core Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Performs a raycast against the specified trackable trackers.\n     * @param[in] Origin Starting location of the ray.\n     * @param[in] Direction Direction of the ray.\n     * @param[in] TrackableTrackers Array of trackers to be raycast against.\n     * @param[in] MaxResults The maximum number of results.\n     * @param[out] HitResults Array to be filled with hit results.\n     * @return True if the underlying API call was successful.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTrackablesCoreBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Performs a raycast against the specified trackable trackers.\n@param[in] Origin Starting location of the ray.\n@param[in] Direction Direction of the ray.\n@param[in] TrackableTrackers Array of trackers to be raycast against.\n@param[in] MaxResults The maximum number of results.\n@param[out] HitResults Array to be filled with hit results.\n@return True if the underlying API call was successful." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackableTrackers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrackableTrackers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackableTrackers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResults_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HitResults;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Raycast_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventRaycast_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Raycast_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventRaycast_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Raycast_Statics::NewProp_TrackableTrackers_Inner = { "TrackableTrackers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAndroidXRTrackableTracker, METADATA_PARAMS(0, nullptr) }; // 2921418092
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Raycast_Statics::NewProp_TrackableTrackers = { "TrackableTrackers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventRaycast_Parms, TrackableTrackers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackableTrackers_MetaData), NewProp_TrackableTrackers_MetaData) }; // 2921418092
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Raycast_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventRaycast_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Raycast_Statics::NewProp_HitResults_Inner = { "HitResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAndroidXRRaycastHit, METADATA_PARAMS(0, nullptr) }; // 1631806076
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Raycast_Statics::NewProp_HitResults = { "HitResults", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventRaycast_Parms, HitResults), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1631806076
void Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Raycast_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventRaycast_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Raycast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventRaycast_Parms), &Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Raycast_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Raycast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Raycast_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Raycast_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Raycast_Statics::NewProp_TrackableTrackers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Raycast_Statics::NewProp_TrackableTrackers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Raycast_Statics::NewProp_MaxResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Raycast_Statics::NewProp_HitResults_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Raycast_Statics::NewProp_HitResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Raycast_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Raycast_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Raycast_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRTrackablesCoreBlueprintFunctionLibrary, nullptr, "Raycast", Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Raycast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Raycast_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Raycast_Statics::AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventRaycast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Raycast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Raycast_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Raycast_Statics::AndroidXRTrackablesCoreBlueprintFunctionLibrary_eventRaycast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Raycast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Raycast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRTrackablesCoreBlueprintFunctionLibrary::execRaycast)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction);
	P_GET_TARRAY_REF(FAndroidXRTrackableTracker,Z_Param_Out_TrackableTrackers);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_GET_TARRAY_REF(FAndroidXRRaycastHit,Z_Param_Out_HitResults);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRTrackablesCoreBlueprintFunctionLibrary::Raycast(Z_Param_Out_Origin,Z_Param_Out_Direction,Z_Param_Out_TrackableTrackers,Z_Param_MaxResults,Z_Param_Out_HitResults);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRTrackablesCoreBlueprintFunctionLibrary Function Raycast **********

// ********** Begin Class UAndroidXRTrackablesCoreBlueprintFunctionLibrary *************************
void UAndroidXRTrackablesCoreBlueprintFunctionLibrary::StaticRegisterNativesUAndroidXRTrackablesCoreBlueprintFunctionLibrary()
{
	UClass* Class = UAndroidXRTrackablesCoreBlueprintFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateAnchorSpace", &UAndroidXRTrackablesCoreBlueprintFunctionLibrary::execCreateAnchorSpace },
		{ "CreateTrackableTracker", &UAndroidXRTrackablesCoreBlueprintFunctionLibrary::execCreateTrackableTracker },
		{ "DestroyTrackableTracker", &UAndroidXRTrackablesCoreBlueprintFunctionLibrary::execDestroyTrackableTracker },
		{ "EnumerateRaycastSupportedTrackableTypes", &UAndroidXRTrackablesCoreBlueprintFunctionLibrary::execEnumerateRaycastSupportedTrackableTypes },
		{ "EnumerateSupportedAnchorTrackableTypes", &UAndroidXRTrackablesCoreBlueprintFunctionLibrary::execEnumerateSupportedAnchorTrackableTypes },
		{ "EnumerateSupportedTrackableTypes", &UAndroidXRTrackablesCoreBlueprintFunctionLibrary::execEnumerateSupportedTrackableTypes },
		{ "GetAllTrackables", &UAndroidXRTrackablesCoreBlueprintFunctionLibrary::execGetAllTrackables },
		{ "GetTrackablePlane", &UAndroidXRTrackablesCoreBlueprintFunctionLibrary::execGetTrackablePlane },
		{ "GetTrackableProperties", &UAndroidXRTrackablesCoreBlueprintFunctionLibrary::execGetTrackableProperties },
		{ "IsValidTrackable", &UAndroidXRTrackablesCoreBlueprintFunctionLibrary::execIsValidTrackable },
		{ "IsValidTrackableTracker", &UAndroidXRTrackablesCoreBlueprintFunctionLibrary::execIsValidTrackableTracker },
		{ "Raycast", &UAndroidXRTrackablesCoreBlueprintFunctionLibrary::execRaycast },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRTrackablesCoreBlueprintFunctionLibrary;
UClass* UAndroidXRTrackablesCoreBlueprintFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UAndroidXRTrackablesCoreBlueprintFunctionLibrary;
	if (!Z_Registration_Info_UClass_UAndroidXRTrackablesCoreBlueprintFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRTrackablesCoreBlueprintFunctionLibrary"),
			Z_Registration_Info_UClass_UAndroidXRTrackablesCoreBlueprintFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUAndroidXRTrackablesCoreBlueprintFunctionLibrary,
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
	return Z_Registration_Info_UClass_UAndroidXRTrackablesCoreBlueprintFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_NoRegister()
{
	return UAndroidXRTrackablesCoreBlueprintFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AndroidXRTrackablesCore" },
		{ "IncludePath", "AndroidXRTrackablesCoreBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/AndroidXRTrackablesCoreBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateAnchorSpace, "CreateAnchorSpace" }, // 2366805524
		{ &Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_CreateTrackableTracker, "CreateTrackableTracker" }, // 162881774
		{ &Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_DestroyTrackableTracker, "DestroyTrackableTracker" }, // 3649970539
		{ &Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateRaycastSupportedTrackableTypes, "EnumerateRaycastSupportedTrackableTypes" }, // 2084015179
		{ &Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedAnchorTrackableTypes, "EnumerateSupportedAnchorTrackableTypes" }, // 420489026
		{ &Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_EnumerateSupportedTrackableTypes, "EnumerateSupportedTrackableTypes" }, // 3046556717
		{ &Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetAllTrackables, "GetAllTrackables" }, // 177397067
		{ &Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackablePlane, "GetTrackablePlane" }, // 3109593598
		{ &Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_GetTrackableProperties, "GetTrackableProperties" }, // 1109638107
		{ &Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackable, "IsValidTrackable" }, // 2157667880
		{ &Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_IsValidTrackableTracker, "IsValidTrackableTracker" }, // 3334824339
		{ &Z_Construct_UFunction_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Raycast, "Raycast" }, // 3864009949
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRTrackablesCoreBlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRTrackablesCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Statics::ClassParams = {
	&UAndroidXRTrackablesCoreBlueprintFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRTrackablesCoreBlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UAndroidXRTrackablesCoreBlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRTrackablesCoreBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UAndroidXRTrackablesCoreBlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRTrackablesCoreBlueprintFunctionLibrary.OuterSingleton;
}
UAndroidXRTrackablesCoreBlueprintFunctionLibrary::UAndroidXRTrackablesCoreBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRTrackablesCoreBlueprintFunctionLibrary);
UAndroidXRTrackablesCoreBlueprintFunctionLibrary::~UAndroidXRTrackablesCoreBlueprintFunctionLibrary() {}
// ********** End Class UAndroidXRTrackablesCoreBlueprintFunctionLibrary ***************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRTrackablesCore_Source_AndroidXRTrackablesCore_Public_AndroidXRTrackablesCoreBlueprintFunctionLibrary_h__Script_AndroidXRTrackablesCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXRTrackablesCoreBlueprintFunctionLibrary, UAndroidXRTrackablesCoreBlueprintFunctionLibrary::StaticClass, TEXT("UAndroidXRTrackablesCoreBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UAndroidXRTrackablesCoreBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRTrackablesCoreBlueprintFunctionLibrary), 281243437U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRTrackablesCore_Source_AndroidXRTrackablesCore_Public_AndroidXRTrackablesCoreBlueprintFunctionLibrary_h__Script_AndroidXRTrackablesCore_3013509323(TEXT("/Script/AndroidXRTrackablesCore"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRTrackablesCore_Source_AndroidXRTrackablesCore_Public_AndroidXRTrackablesCoreBlueprintFunctionLibrary_h__Script_AndroidXRTrackablesCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRTrackablesCore_Source_AndroidXRTrackablesCore_Public_AndroidXRTrackablesCoreBlueprintFunctionLibrary_h__Script_AndroidXRTrackablesCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
