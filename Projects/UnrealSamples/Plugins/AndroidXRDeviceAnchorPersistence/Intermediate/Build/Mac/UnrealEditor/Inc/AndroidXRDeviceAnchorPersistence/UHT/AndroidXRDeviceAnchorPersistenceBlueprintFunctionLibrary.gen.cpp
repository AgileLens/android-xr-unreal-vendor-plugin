// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.h"
#include "AndroidXRDeviceAnchorPersistenceTypes.h"
#include "AndroidXRTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXR_API UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRTrackableType();
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRSpace();
ANDROIDXRDEVICEANCHORPERSISTENCE_API UClass* Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceAsyncAction();
ANDROIDXRDEVICEANCHORPERSISTENCE_API UClass* Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceAsyncAction_NoRegister();
ANDROIDXRDEVICEANCHORPERSISTENCE_API UClass* Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary();
ANDROIDXRDEVICEANCHORPERSISTENCE_API UClass* Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_NoRegister();
ANDROIDXRDEVICEANCHORPERSISTENCE_API UClass* Z_Construct_UClass_UCreatePersistedAnchorSpace();
ANDROIDXRDEVICEANCHORPERSISTENCE_API UClass* Z_Construct_UClass_UCreatePersistedAnchorSpace_NoRegister();
ANDROIDXRDEVICEANCHORPERSISTENCE_API UClass* Z_Construct_UClass_UPersistAnchor();
ANDROIDXRDEVICEANCHORPERSISTENCE_API UClass* Z_Construct_UClass_UPersistAnchor_NoRegister();
ANDROIDXRDEVICEANCHORPERSISTENCE_API UClass* Z_Construct_UClass_UUnpersistAnchor();
ANDROIDXRDEVICEANCHORPERSISTENCE_API UClass* Z_Construct_UClass_UUnpersistAnchor_NoRegister();
ANDROIDXRDEVICEANCHORPERSISTENCE_API UEnum* Z_Construct_UEnum_AndroidXRDeviceAnchorPersistence_EAndroidXRAnchorPersistState();
ANDROIDXRDEVICEANCHORPERSISTENCE_API UFunction* Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnAnchorPersistedDynamic__DelegateSignature();
ANDROIDXRDEVICEANCHORPERSISTENCE_API UFunction* Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnAnchorUnpersistedDynamic__DelegateSignature();
ANDROIDXRDEVICEANCHORPERSISTENCE_API UFunction* Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnAsyncActionFailedDynamic__DelegateSignature();
ANDROIDXRDEVICEANCHORPERSISTENCE_API UFunction* Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnPersistedAnchorSpaceCreatedDynamic__DelegateSignature();
ANDROIDXRDEVICEANCHORPERSISTENCE_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRDeviceAnchorPersistence();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AndroidXRDeviceAnchorPersistence();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnAnchorPersistedDynamic *********************************************
struct Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnAnchorPersistedDynamic__DelegateSignature_Statics
{
	struct _Script_AndroidXRDeviceAnchorPersistence_eventOnAnchorPersistedDynamic_Parms
	{
		FAndroidXRSpace AnchorSpace;
		FGuid PersistedId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorSpace_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersistedId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnchorSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PersistedId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnAnchorPersistedDynamic__DelegateSignature_Statics::NewProp_AnchorSpace = { "AnchorSpace", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AndroidXRDeviceAnchorPersistence_eventOnAnchorPersistedDynamic_Parms, AnchorSpace), Z_Construct_UScriptStruct_FAndroidXRSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorSpace_MetaData), NewProp_AnchorSpace_MetaData) }; // 1341678083
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnAnchorPersistedDynamic__DelegateSignature_Statics::NewProp_PersistedId = { "PersistedId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AndroidXRDeviceAnchorPersistence_eventOnAnchorPersistedDynamic_Parms, PersistedId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersistedId_MetaData), NewProp_PersistedId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnAnchorPersistedDynamic__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnAnchorPersistedDynamic__DelegateSignature_Statics::NewProp_AnchorSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnAnchorPersistedDynamic__DelegateSignature_Statics::NewProp_PersistedId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnAnchorPersistedDynamic__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnAnchorPersistedDynamic__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AndroidXRDeviceAnchorPersistence, nullptr, "OnAnchorPersistedDynamic__DelegateSignature", Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnAnchorPersistedDynamic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnAnchorPersistedDynamic__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnAnchorPersistedDynamic__DelegateSignature_Statics::_Script_AndroidXRDeviceAnchorPersistence_eventOnAnchorPersistedDynamic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnAnchorPersistedDynamic__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnAnchorPersistedDynamic__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnAnchorPersistedDynamic__DelegateSignature_Statics::_Script_AndroidXRDeviceAnchorPersistence_eventOnAnchorPersistedDynamic_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnAnchorPersistedDynamic__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnAnchorPersistedDynamic__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAnchorPersistedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnAnchorPersistedDynamic, FAndroidXRSpace const& AnchorSpace, FGuid const& PersistedId)
{
	struct _Script_AndroidXRDeviceAnchorPersistence_eventOnAnchorPersistedDynamic_Parms
	{
		FAndroidXRSpace AnchorSpace;
		FGuid PersistedId;
	};
	_Script_AndroidXRDeviceAnchorPersistence_eventOnAnchorPersistedDynamic_Parms Parms;
	Parms.AnchorSpace=AnchorSpace;
	Parms.PersistedId=PersistedId;
	OnAnchorPersistedDynamic.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAnchorPersistedDynamic ***********************************************

// ********** Begin Delegate FOnAnchorUnpersistedDynamic *******************************************
struct Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnAnchorUnpersistedDynamic__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnAnchorUnpersistedDynamic__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AndroidXRDeviceAnchorPersistence, nullptr, "OnAnchorUnpersistedDynamic__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnAnchorUnpersistedDynamic__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnAnchorUnpersistedDynamic__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnAnchorUnpersistedDynamic__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnAnchorUnpersistedDynamic__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAnchorUnpersistedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnAnchorUnpersistedDynamic)
{
	OnAnchorUnpersistedDynamic.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnAnchorUnpersistedDynamic *********************************************

// ********** Begin Delegate FOnPersistedAnchorSpaceCreatedDynamic *********************************
struct Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnPersistedAnchorSpaceCreatedDynamic__DelegateSignature_Statics
{
	struct _Script_AndroidXRDeviceAnchorPersistence_eventOnPersistedAnchorSpaceCreatedDynamic_Parms
	{
		FAndroidXRSpace AnchorSpace;
		FGuid PersistedId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorSpace_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersistedId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnchorSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PersistedId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnPersistedAnchorSpaceCreatedDynamic__DelegateSignature_Statics::NewProp_AnchorSpace = { "AnchorSpace", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AndroidXRDeviceAnchorPersistence_eventOnPersistedAnchorSpaceCreatedDynamic_Parms, AnchorSpace), Z_Construct_UScriptStruct_FAndroidXRSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorSpace_MetaData), NewProp_AnchorSpace_MetaData) }; // 1341678083
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnPersistedAnchorSpaceCreatedDynamic__DelegateSignature_Statics::NewProp_PersistedId = { "PersistedId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AndroidXRDeviceAnchorPersistence_eventOnPersistedAnchorSpaceCreatedDynamic_Parms, PersistedId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersistedId_MetaData), NewProp_PersistedId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnPersistedAnchorSpaceCreatedDynamic__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnPersistedAnchorSpaceCreatedDynamic__DelegateSignature_Statics::NewProp_AnchorSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnPersistedAnchorSpaceCreatedDynamic__DelegateSignature_Statics::NewProp_PersistedId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnPersistedAnchorSpaceCreatedDynamic__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnPersistedAnchorSpaceCreatedDynamic__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AndroidXRDeviceAnchorPersistence, nullptr, "OnPersistedAnchorSpaceCreatedDynamic__DelegateSignature", Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnPersistedAnchorSpaceCreatedDynamic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnPersistedAnchorSpaceCreatedDynamic__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnPersistedAnchorSpaceCreatedDynamic__DelegateSignature_Statics::_Script_AndroidXRDeviceAnchorPersistence_eventOnPersistedAnchorSpaceCreatedDynamic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnPersistedAnchorSpaceCreatedDynamic__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnPersistedAnchorSpaceCreatedDynamic__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnPersistedAnchorSpaceCreatedDynamic__DelegateSignature_Statics::_Script_AndroidXRDeviceAnchorPersistence_eventOnPersistedAnchorSpaceCreatedDynamic_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnPersistedAnchorSpaceCreatedDynamic__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnPersistedAnchorSpaceCreatedDynamic__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPersistedAnchorSpaceCreatedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnPersistedAnchorSpaceCreatedDynamic, FAndroidXRSpace const& AnchorSpace, FGuid const& PersistedId)
{
	struct _Script_AndroidXRDeviceAnchorPersistence_eventOnPersistedAnchorSpaceCreatedDynamic_Parms
	{
		FAndroidXRSpace AnchorSpace;
		FGuid PersistedId;
	};
	_Script_AndroidXRDeviceAnchorPersistence_eventOnPersistedAnchorSpaceCreatedDynamic_Parms Parms;
	Parms.AnchorSpace=AnchorSpace;
	Parms.PersistedId=PersistedId;
	OnPersistedAnchorSpaceCreatedDynamic.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPersistedAnchorSpaceCreatedDynamic ***********************************

// ********** Begin Delegate FOnAsyncActionFailedDynamic *******************************************
struct Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnAsyncActionFailedDynamic__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnAsyncActionFailedDynamic__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AndroidXRDeviceAnchorPersistence, nullptr, "OnAsyncActionFailedDynamic__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnAsyncActionFailedDynamic__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnAsyncActionFailedDynamic__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnAsyncActionFailedDynamic__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnAsyncActionFailedDynamic__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAsyncActionFailedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnAsyncActionFailedDynamic)
{
	OnAsyncActionFailedDynamic.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnAsyncActionFailedDynamic *********************************************

// ********** Begin Class UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary Function CreateDeviceAnchorPersistence 
struct Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_CreateDeviceAnchorPersistence_Statics
{
	struct AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventCreateDeviceAnchorPersistence_Parms
	{
		FAndroidXRDeviceAnchorPersistence AnchorPersistence;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Device Anchor Persistence Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Creates an anchor persistence.\n     * @param[out] AnchorPersistence The anchor persistence that was created.\n     * @return True if the underlying API call was successful.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates an anchor persistence.\n@param[out] AnchorPersistence The anchor persistence that was created.\n@return True if the underlying API call was successful." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnchorPersistence;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_CreateDeviceAnchorPersistence_Statics::NewProp_AnchorPersistence = { "AnchorPersistence", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventCreateDeviceAnchorPersistence_Parms, AnchorPersistence), Z_Construct_UScriptStruct_FAndroidXRDeviceAnchorPersistence, METADATA_PARAMS(0, nullptr) }; // 2491815904
void Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_CreateDeviceAnchorPersistence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventCreateDeviceAnchorPersistence_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_CreateDeviceAnchorPersistence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventCreateDeviceAnchorPersistence_Parms), &Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_CreateDeviceAnchorPersistence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_CreateDeviceAnchorPersistence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_CreateDeviceAnchorPersistence_Statics::NewProp_AnchorPersistence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_CreateDeviceAnchorPersistence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_CreateDeviceAnchorPersistence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_CreateDeviceAnchorPersistence_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary, nullptr, "CreateDeviceAnchorPersistence", Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_CreateDeviceAnchorPersistence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_CreateDeviceAnchorPersistence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_CreateDeviceAnchorPersistence_Statics::AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventCreateDeviceAnchorPersistence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_CreateDeviceAnchorPersistence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_CreateDeviceAnchorPersistence_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_CreateDeviceAnchorPersistence_Statics::AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventCreateDeviceAnchorPersistence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_CreateDeviceAnchorPersistence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_CreateDeviceAnchorPersistence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary::execCreateDeviceAnchorPersistence)
{
	P_GET_STRUCT_REF(FAndroidXRDeviceAnchorPersistence,Z_Param_Out_AnchorPersistence);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary::CreateDeviceAnchorPersistence(Z_Param_Out_AnchorPersistence);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary Function CreateDeviceAnchorPersistence 

// ********** Begin Class UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary Function DestroyDeviceAnchorPersistence 
struct Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_DestroyDeviceAnchorPersistence_Statics
{
	struct AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventDestroyDeviceAnchorPersistence_Parms
	{
		FAndroidXRDeviceAnchorPersistence AnchorPersistence;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Device Anchor Persistence Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Destroys an anchor persistence.\n     * @param[in, out] AnchorPersistence The anchor persistence to be destroyed.\n     * @return True if the underlying API call was successful.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Destroys an anchor persistence.\n@param[in, out] AnchorPersistence The anchor persistence to be destroyed.\n@return True if the underlying API call was successful." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnchorPersistence;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_DestroyDeviceAnchorPersistence_Statics::NewProp_AnchorPersistence = { "AnchorPersistence", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventDestroyDeviceAnchorPersistence_Parms, AnchorPersistence), Z_Construct_UScriptStruct_FAndroidXRDeviceAnchorPersistence, METADATA_PARAMS(0, nullptr) }; // 2491815904
void Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_DestroyDeviceAnchorPersistence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventDestroyDeviceAnchorPersistence_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_DestroyDeviceAnchorPersistence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventDestroyDeviceAnchorPersistence_Parms), &Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_DestroyDeviceAnchorPersistence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_DestroyDeviceAnchorPersistence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_DestroyDeviceAnchorPersistence_Statics::NewProp_AnchorPersistence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_DestroyDeviceAnchorPersistence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_DestroyDeviceAnchorPersistence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_DestroyDeviceAnchorPersistence_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary, nullptr, "DestroyDeviceAnchorPersistence", Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_DestroyDeviceAnchorPersistence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_DestroyDeviceAnchorPersistence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_DestroyDeviceAnchorPersistence_Statics::AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventDestroyDeviceAnchorPersistence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_DestroyDeviceAnchorPersistence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_DestroyDeviceAnchorPersistence_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_DestroyDeviceAnchorPersistence_Statics::AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventDestroyDeviceAnchorPersistence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_DestroyDeviceAnchorPersistence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_DestroyDeviceAnchorPersistence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary::execDestroyDeviceAnchorPersistence)
{
	P_GET_STRUCT_REF(FAndroidXRDeviceAnchorPersistence,Z_Param_Out_AnchorPersistence);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary::DestroyDeviceAnchorPersistence(Z_Param_Out_AnchorPersistence);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary Function DestroyDeviceAnchorPersistence 

// ********** Begin Class UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary Function EnumeratePersistedAnchors 
struct Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumeratePersistedAnchors_Statics
{
	struct AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventEnumeratePersistedAnchors_Parms
	{
		FAndroidXRDeviceAnchorPersistence AnchorPersistence;
		TArray<FGuid> PersistedAnchors;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Device Anchor Persistence Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Enumerates the persisted anchors associated with an anchor persistence.\n     * @param[in] AnchorPersistence The anchor persistence to be queried.\n     * @param[out] PersistedAnchors The persisted anchors associated with the provided\n     * anchor persistence.\n     * @return True if the underlying API call was successful.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumerates the persisted anchors associated with an anchor persistence.\n@param[in] AnchorPersistence The anchor persistence to be queried.\n@param[out] PersistedAnchors The persisted anchors associated with the provided\nanchor persistence.\n@return True if the underlying API call was successful." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorPersistence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnchorPersistence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PersistedAnchors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PersistedAnchors;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumeratePersistedAnchors_Statics::NewProp_AnchorPersistence = { "AnchorPersistence", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventEnumeratePersistedAnchors_Parms, AnchorPersistence), Z_Construct_UScriptStruct_FAndroidXRDeviceAnchorPersistence, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorPersistence_MetaData), NewProp_AnchorPersistence_MetaData) }; // 2491815904
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumeratePersistedAnchors_Statics::NewProp_PersistedAnchors_Inner = { "PersistedAnchors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumeratePersistedAnchors_Statics::NewProp_PersistedAnchors = { "PersistedAnchors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventEnumeratePersistedAnchors_Parms, PersistedAnchors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumeratePersistedAnchors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventEnumeratePersistedAnchors_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumeratePersistedAnchors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventEnumeratePersistedAnchors_Parms), &Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumeratePersistedAnchors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumeratePersistedAnchors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumeratePersistedAnchors_Statics::NewProp_AnchorPersistence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumeratePersistedAnchors_Statics::NewProp_PersistedAnchors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumeratePersistedAnchors_Statics::NewProp_PersistedAnchors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumeratePersistedAnchors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumeratePersistedAnchors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumeratePersistedAnchors_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary, nullptr, "EnumeratePersistedAnchors", Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumeratePersistedAnchors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumeratePersistedAnchors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumeratePersistedAnchors_Statics::AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventEnumeratePersistedAnchors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumeratePersistedAnchors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumeratePersistedAnchors_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumeratePersistedAnchors_Statics::AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventEnumeratePersistedAnchors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumeratePersistedAnchors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumeratePersistedAnchors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary::execEnumeratePersistedAnchors)
{
	P_GET_STRUCT_REF(FAndroidXRDeviceAnchorPersistence,Z_Param_Out_AnchorPersistence);
	P_GET_TARRAY_REF(FGuid,Z_Param_Out_PersistedAnchors);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary::EnumeratePersistedAnchors(Z_Param_Out_AnchorPersistence,Z_Param_Out_PersistedAnchors);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary Function EnumeratePersistedAnchors 

// ********** Begin Class UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary Function EnumerateSupportedPersistenceAnchorTypes 
struct Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumerateSupportedPersistenceAnchorTypes_Statics
{
	struct AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventEnumerateSupportedPersistenceAnchorTypes_Parms
	{
		TArray<EAndroidXRTrackableType> SupportedTypes;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Device Anchor Persistence Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Enumerates the types of trackables which support persistent anchors.\n     * @param[out] SupportedTypes The trackable types which support persistent anchors.\n     * @return True if the underlying API call was successful.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumerates the types of trackables which support persistent anchors.\n@param[out] SupportedTypes The trackable types which support persistent anchors.\n@return True if the underlying API call was successful." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SupportedTypes_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SupportedTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SupportedTypes;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumerateSupportedPersistenceAnchorTypes_Statics::NewProp_SupportedTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumerateSupportedPersistenceAnchorTypes_Statics::NewProp_SupportedTypes_Inner = { "SupportedTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_AndroidXR_EAndroidXRTrackableType, METADATA_PARAMS(0, nullptr) }; // 160846275
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumerateSupportedPersistenceAnchorTypes_Statics::NewProp_SupportedTypes = { "SupportedTypes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventEnumerateSupportedPersistenceAnchorTypes_Parms, SupportedTypes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 160846275
void Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumerateSupportedPersistenceAnchorTypes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventEnumerateSupportedPersistenceAnchorTypes_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumerateSupportedPersistenceAnchorTypes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventEnumerateSupportedPersistenceAnchorTypes_Parms), &Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumerateSupportedPersistenceAnchorTypes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumerateSupportedPersistenceAnchorTypes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumerateSupportedPersistenceAnchorTypes_Statics::NewProp_SupportedTypes_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumerateSupportedPersistenceAnchorTypes_Statics::NewProp_SupportedTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumerateSupportedPersistenceAnchorTypes_Statics::NewProp_SupportedTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumerateSupportedPersistenceAnchorTypes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumerateSupportedPersistenceAnchorTypes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumerateSupportedPersistenceAnchorTypes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary, nullptr, "EnumerateSupportedPersistenceAnchorTypes", Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumerateSupportedPersistenceAnchorTypes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumerateSupportedPersistenceAnchorTypes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumerateSupportedPersistenceAnchorTypes_Statics::AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventEnumerateSupportedPersistenceAnchorTypes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumerateSupportedPersistenceAnchorTypes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumerateSupportedPersistenceAnchorTypes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumerateSupportedPersistenceAnchorTypes_Statics::AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventEnumerateSupportedPersistenceAnchorTypes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumerateSupportedPersistenceAnchorTypes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumerateSupportedPersistenceAnchorTypes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary::execEnumerateSupportedPersistenceAnchorTypes)
{
	P_GET_TARRAY_REF(EAndroidXRTrackableType,Z_Param_Out_SupportedTypes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary::EnumerateSupportedPersistenceAnchorTypes(Z_Param_Out_SupportedTypes);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary Function EnumerateSupportedPersistenceAnchorTypes 

// ********** Begin Class UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary Function GetAnchorPersistenceSupported 
struct Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistenceSupported_Statics
{
	struct AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventGetAnchorPersistenceSupported_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Device Anchor Persistence Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Determines whether or not anchor persistence is supported.\n     * @return True if anchor persistence is supported.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines whether or not anchor persistence is supported.\n@return True if anchor persistence is supported." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistenceSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventGetAnchorPersistenceSupported_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistenceSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventGetAnchorPersistenceSupported_Parms), &Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistenceSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistenceSupported_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistenceSupported_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistenceSupported_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistenceSupported_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary, nullptr, "GetAnchorPersistenceSupported", Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistenceSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistenceSupported_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistenceSupported_Statics::AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventGetAnchorPersistenceSupported_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistenceSupported_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistenceSupported_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistenceSupported_Statics::AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventGetAnchorPersistenceSupported_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistenceSupported()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistenceSupported_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary::execGetAnchorPersistenceSupported)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary::GetAnchorPersistenceSupported();
	P_NATIVE_END;
}
// ********** End Class UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary Function GetAnchorPersistenceSupported 

// ********** Begin Class UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary Function GetAnchorPersistState 
struct Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistState_Statics
{
	struct AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventGetAnchorPersistState_Parms
	{
		FAndroidXRDeviceAnchorPersistence AnchorPersistence;
		FGuid PersistedID;
		EAndroidXRAnchorPersistState PersistState;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Device Anchor Persistence Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Gets the persist state of an anchor.\n     * @param[in] AnchorPersistence The anchor persistence with which the anchor is associated.\n     * @param[in] PersistedID The persisted ID of the anchor.\n     * @param[out] PersistState The persist state of the anchor.\n     * @return True if the underlying API call was successful.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the persist state of an anchor.\n@param[in] AnchorPersistence The anchor persistence with which the anchor is associated.\n@param[in] PersistedID The persisted ID of the anchor.\n@param[out] PersistState The persist state of the anchor.\n@return True if the underlying API call was successful." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorPersistence_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersistedID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnchorPersistence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PersistedID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PersistState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PersistState;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistState_Statics::NewProp_AnchorPersistence = { "AnchorPersistence", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventGetAnchorPersistState_Parms, AnchorPersistence), Z_Construct_UScriptStruct_FAndroidXRDeviceAnchorPersistence, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorPersistence_MetaData), NewProp_AnchorPersistence_MetaData) }; // 2491815904
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistState_Statics::NewProp_PersistedID = { "PersistedID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventGetAnchorPersistState_Parms, PersistedID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersistedID_MetaData), NewProp_PersistedID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistState_Statics::NewProp_PersistState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistState_Statics::NewProp_PersistState = { "PersistState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventGetAnchorPersistState_Parms, PersistState), Z_Construct_UEnum_AndroidXRDeviceAnchorPersistence_EAndroidXRAnchorPersistState, METADATA_PARAMS(0, nullptr) }; // 2793169704
void Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventGetAnchorPersistState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventGetAnchorPersistState_Parms), &Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistState_Statics::NewProp_AnchorPersistence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistState_Statics::NewProp_PersistedID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistState_Statics::NewProp_PersistState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistState_Statics::NewProp_PersistState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary, nullptr, "GetAnchorPersistState", Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistState_Statics::AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventGetAnchorPersistState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistState_Statics::AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventGetAnchorPersistState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary::execGetAnchorPersistState)
{
	P_GET_STRUCT_REF(FAndroidXRDeviceAnchorPersistence,Z_Param_Out_AnchorPersistence);
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_PersistedID);
	P_GET_ENUM_REF(EAndroidXRAnchorPersistState,Z_Param_Out_PersistState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary::GetAnchorPersistState(Z_Param_Out_AnchorPersistence,Z_Param_Out_PersistedID,(EAndroidXRAnchorPersistState&)(Z_Param_Out_PersistState));
	P_NATIVE_END;
}
// ********** End Class UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary Function GetAnchorPersistState 

// ********** Begin Class UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary Function IsValidAnchorPersistence 
struct Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_IsValidAnchorPersistence_Statics
{
	struct AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventIsValidAnchorPersistence_Parms
	{
		FAndroidXRDeviceAnchorPersistence AnchorPersistence;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Device Anchor Persistence Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Determines whether or not an FAndroidXRAnchorPersistence is valid.\n     * @param[in] AnchorPersistence AnchorPersistence to be verified.\n     * @return True if the anchor persistence is valid.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines whether or not an FAndroidXRAnchorPersistence is valid.\n@param[in] AnchorPersistence AnchorPersistence to be verified.\n@return True if the anchor persistence is valid." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorPersistence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnchorPersistence;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_IsValidAnchorPersistence_Statics::NewProp_AnchorPersistence = { "AnchorPersistence", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventIsValidAnchorPersistence_Parms, AnchorPersistence), Z_Construct_UScriptStruct_FAndroidXRDeviceAnchorPersistence, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorPersistence_MetaData), NewProp_AnchorPersistence_MetaData) }; // 2491815904
void Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_IsValidAnchorPersistence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventIsValidAnchorPersistence_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_IsValidAnchorPersistence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventIsValidAnchorPersistence_Parms), &Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_IsValidAnchorPersistence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_IsValidAnchorPersistence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_IsValidAnchorPersistence_Statics::NewProp_AnchorPersistence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_IsValidAnchorPersistence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_IsValidAnchorPersistence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_IsValidAnchorPersistence_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary, nullptr, "IsValidAnchorPersistence", Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_IsValidAnchorPersistence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_IsValidAnchorPersistence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_IsValidAnchorPersistence_Statics::AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventIsValidAnchorPersistence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_IsValidAnchorPersistence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_IsValidAnchorPersistence_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_IsValidAnchorPersistence_Statics::AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_eventIsValidAnchorPersistence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_IsValidAnchorPersistence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_IsValidAnchorPersistence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary::execIsValidAnchorPersistence)
{
	P_GET_STRUCT_REF(FAndroidXRDeviceAnchorPersistence,Z_Param_Out_AnchorPersistence);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary::IsValidAnchorPersistence(Z_Param_Out_AnchorPersistence);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary Function IsValidAnchorPersistence 

// ********** Begin Class UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary ****************
void UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary::StaticRegisterNativesUAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary()
{
	UClass* Class = UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateDeviceAnchorPersistence", &UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary::execCreateDeviceAnchorPersistence },
		{ "DestroyDeviceAnchorPersistence", &UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary::execDestroyDeviceAnchorPersistence },
		{ "EnumeratePersistedAnchors", &UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary::execEnumeratePersistedAnchors },
		{ "EnumerateSupportedPersistenceAnchorTypes", &UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary::execEnumerateSupportedPersistenceAnchorTypes },
		{ "GetAnchorPersistenceSupported", &UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary::execGetAnchorPersistenceSupported },
		{ "GetAnchorPersistState", &UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary::execGetAnchorPersistState },
		{ "IsValidAnchorPersistence", &UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary::execIsValidAnchorPersistence },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary;
UClass* UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary;
	if (!Z_Registration_Info_UClass_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary"),
			Z_Registration_Info_UClass_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary,
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
	return Z_Registration_Info_UClass_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_NoRegister()
{
	return UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AndroidXRDeviceAnchorPersistence" },
		{ "IncludePath", "AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_CreateDeviceAnchorPersistence, "CreateDeviceAnchorPersistence" }, // 4156175165
		{ &Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_DestroyDeviceAnchorPersistence, "DestroyDeviceAnchorPersistence" }, // 3344022636
		{ &Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumeratePersistedAnchors, "EnumeratePersistedAnchors" }, // 1200221744
		{ &Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_EnumerateSupportedPersistenceAnchorTypes, "EnumerateSupportedPersistenceAnchorTypes" }, // 1736958439
		{ &Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistenceSupported, "GetAnchorPersistenceSupported" }, // 1706812268
		{ &Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_GetAnchorPersistState, "GetAnchorPersistState" }, // 800429374
		{ &Z_Construct_UFunction_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_IsValidAnchorPersistence, "IsValidAnchorPersistence" }, // 2721397580
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRDeviceAnchorPersistence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_Statics::ClassParams = {
	&UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.OuterSingleton;
}
UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary::UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary);
UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary::~UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary() {}
// ********** End Class UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary ******************

// ********** Begin Class UAndroidXRDeviceAnchorPersistenceAsyncAction *****************************
void UAndroidXRDeviceAnchorPersistenceAsyncAction::StaticRegisterNativesUAndroidXRDeviceAnchorPersistenceAsyncAction()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRDeviceAnchorPersistenceAsyncAction;
UClass* UAndroidXRDeviceAnchorPersistenceAsyncAction::GetPrivateStaticClass()
{
	using TClass = UAndroidXRDeviceAnchorPersistenceAsyncAction;
	if (!Z_Registration_Info_UClass_UAndroidXRDeviceAnchorPersistenceAsyncAction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRDeviceAnchorPersistenceAsyncAction"),
			Z_Registration_Info_UClass_UAndroidXRDeviceAnchorPersistenceAsyncAction.InnerSingleton,
			StaticRegisterNativesUAndroidXRDeviceAnchorPersistenceAsyncAction,
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
	return Z_Registration_Info_UClass_UAndroidXRDeviceAnchorPersistenceAsyncAction.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceAsyncAction_NoRegister()
{
	return UAndroidXRDeviceAnchorPersistenceAsyncAction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceAsyncAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AndroidXRDeviceAnchorPersistence" },
		{ "IncludePath", "AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAsyncActionFailed_MetaData[] = {
		{ "DisplayPriority", "200" },
		{ "ModuleRelativePath", "Public/AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAsyncActionFailed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRDeviceAnchorPersistenceAsyncAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceAsyncAction_Statics::NewProp_OnAsyncActionFailed = { "OnAsyncActionFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRDeviceAnchorPersistenceAsyncAction, OnAsyncActionFailed), Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnAsyncActionFailedDynamic__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAsyncActionFailed_MetaData), NewProp_OnAsyncActionFailed_MetaData) }; // 1418538153
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceAsyncAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceAsyncAction_Statics::NewProp_OnAsyncActionFailed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceAsyncAction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceAsyncAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRDeviceAnchorPersistence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceAsyncAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceAsyncAction_Statics::ClassParams = {
	&UAndroidXRDeviceAnchorPersistenceAsyncAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceAsyncAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceAsyncAction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceAsyncAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceAsyncAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceAsyncAction()
{
	if (!Z_Registration_Info_UClass_UAndroidXRDeviceAnchorPersistenceAsyncAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRDeviceAnchorPersistenceAsyncAction.OuterSingleton, Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceAsyncAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRDeviceAnchorPersistenceAsyncAction.OuterSingleton;
}
UAndroidXRDeviceAnchorPersistenceAsyncAction::UAndroidXRDeviceAnchorPersistenceAsyncAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRDeviceAnchorPersistenceAsyncAction);
UAndroidXRDeviceAnchorPersistenceAsyncAction::~UAndroidXRDeviceAnchorPersistenceAsyncAction() {}
// ********** End Class UAndroidXRDeviceAnchorPersistenceAsyncAction *******************************

// ********** Begin Class UPersistAnchor Function PersistAnchorAsync *******************************
struct Z_Construct_UFunction_UPersistAnchor_PersistAnchorAsync_Statics
{
	struct PersistAnchor_eventPersistAnchorAsync_Parms
	{
		FAndroidXRDeviceAnchorPersistence AnchorPersistence;
		FAndroidXRSpace AnchorSpace;
		UPersistAnchor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AndroidXR|Device Anchor Persistence Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Persists an anchor asynchronously.\n    * @param[in] AnchorPersistence The anchor persistence with which the anchor should\n    * be associated.\n    * @param[in] AnchorSpace The anchor space.\n    * @param[out] PersistedID The persisted ID of the anchor.\n    * @return A blueprint latent node that fires off the OnAnchorPersisted event when the operation has finished successfully.\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Persists an anchor asynchronously.\n@param[in] AnchorPersistence The anchor persistence with which the anchor should\nbe associated.\n@param[in] AnchorSpace The anchor space.\n@param[out] PersistedID The persisted ID of the anchor.\n@return A blueprint latent node that fires off the OnAnchorPersisted event when the operation has finished successfully." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorPersistence_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorSpace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnchorPersistence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnchorSpace;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPersistAnchor_PersistAnchorAsync_Statics::NewProp_AnchorPersistence = { "AnchorPersistence", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PersistAnchor_eventPersistAnchorAsync_Parms, AnchorPersistence), Z_Construct_UScriptStruct_FAndroidXRDeviceAnchorPersistence, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorPersistence_MetaData), NewProp_AnchorPersistence_MetaData) }; // 2491815904
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPersistAnchor_PersistAnchorAsync_Statics::NewProp_AnchorSpace = { "AnchorSpace", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PersistAnchor_eventPersistAnchorAsync_Parms, AnchorSpace), Z_Construct_UScriptStruct_FAndroidXRSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorSpace_MetaData), NewProp_AnchorSpace_MetaData) }; // 1341678083
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPersistAnchor_PersistAnchorAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PersistAnchor_eventPersistAnchorAsync_Parms, ReturnValue), Z_Construct_UClass_UPersistAnchor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPersistAnchor_PersistAnchorAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPersistAnchor_PersistAnchorAsync_Statics::NewProp_AnchorPersistence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPersistAnchor_PersistAnchorAsync_Statics::NewProp_AnchorSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPersistAnchor_PersistAnchorAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistAnchor_PersistAnchorAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPersistAnchor_PersistAnchorAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPersistAnchor, nullptr, "PersistAnchorAsync", Z_Construct_UFunction_UPersistAnchor_PersistAnchorAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistAnchor_PersistAnchorAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPersistAnchor_PersistAnchorAsync_Statics::PersistAnchor_eventPersistAnchorAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistAnchor_PersistAnchorAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPersistAnchor_PersistAnchorAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPersistAnchor_PersistAnchorAsync_Statics::PersistAnchor_eventPersistAnchorAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPersistAnchor_PersistAnchorAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPersistAnchor_PersistAnchorAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPersistAnchor::execPersistAnchorAsync)
{
	P_GET_STRUCT_REF(FAndroidXRDeviceAnchorPersistence,Z_Param_Out_AnchorPersistence);
	P_GET_STRUCT_REF(FAndroidXRSpace,Z_Param_Out_AnchorSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPersistAnchor**)Z_Param__Result=UPersistAnchor::PersistAnchorAsync(Z_Param_Out_AnchorPersistence,Z_Param_Out_AnchorSpace);
	P_NATIVE_END;
}
// ********** End Class UPersistAnchor Function PersistAnchorAsync *********************************

// ********** Begin Class UPersistAnchor Function PersistAnchorCallback ****************************
struct Z_Construct_UFunction_UPersistAnchor_PersistAnchorCallback_Statics
{
	struct PersistAnchor_eventPersistAnchorCallback_Parms
	{
		FAndroidXRSpace PersistedAnchorSpace;
		FGuid PersistedAnchorId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersistedAnchorSpace_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersistedAnchorId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PersistedAnchorSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PersistedAnchorId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPersistAnchor_PersistAnchorCallback_Statics::NewProp_PersistedAnchorSpace = { "PersistedAnchorSpace", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PersistAnchor_eventPersistAnchorCallback_Parms, PersistedAnchorSpace), Z_Construct_UScriptStruct_FAndroidXRSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersistedAnchorSpace_MetaData), NewProp_PersistedAnchorSpace_MetaData) }; // 1341678083
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPersistAnchor_PersistAnchorCallback_Statics::NewProp_PersistedAnchorId = { "PersistedAnchorId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PersistAnchor_eventPersistAnchorCallback_Parms, PersistedAnchorId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersistedAnchorId_MetaData), NewProp_PersistedAnchorId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPersistAnchor_PersistAnchorCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPersistAnchor_PersistAnchorCallback_Statics::NewProp_PersistedAnchorSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPersistAnchor_PersistAnchorCallback_Statics::NewProp_PersistedAnchorId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistAnchor_PersistAnchorCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPersistAnchor_PersistAnchorCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPersistAnchor, nullptr, "PersistAnchorCallback", Z_Construct_UFunction_UPersistAnchor_PersistAnchorCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistAnchor_PersistAnchorCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPersistAnchor_PersistAnchorCallback_Statics::PersistAnchor_eventPersistAnchorCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPersistAnchor_PersistAnchorCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPersistAnchor_PersistAnchorCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPersistAnchor_PersistAnchorCallback_Statics::PersistAnchor_eventPersistAnchorCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPersistAnchor_PersistAnchorCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPersistAnchor_PersistAnchorCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPersistAnchor::execPersistAnchorCallback)
{
	P_GET_STRUCT_REF(FAndroidXRSpace,Z_Param_Out_PersistedAnchorSpace);
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_PersistedAnchorId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PersistAnchorCallback(Z_Param_Out_PersistedAnchorSpace,Z_Param_Out_PersistedAnchorId);
	P_NATIVE_END;
}
// ********** End Class UPersistAnchor Function PersistAnchorCallback ******************************

// ********** Begin Class UPersistAnchor ***********************************************************
void UPersistAnchor::StaticRegisterNativesUPersistAnchor()
{
	UClass* Class = UPersistAnchor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PersistAnchorAsync", &UPersistAnchor::execPersistAnchorAsync },
		{ "PersistAnchorCallback", &UPersistAnchor::execPersistAnchorCallback },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPersistAnchor;
UClass* UPersistAnchor::GetPrivateStaticClass()
{
	using TClass = UPersistAnchor;
	if (!Z_Registration_Info_UClass_UPersistAnchor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PersistAnchor"),
			Z_Registration_Info_UClass_UPersistAnchor.InnerSingleton,
			StaticRegisterNativesUPersistAnchor,
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
	return Z_Registration_Info_UClass_UPersistAnchor.InnerSingleton;
}
UClass* Z_Construct_UClass_UPersistAnchor_NoRegister()
{
	return UPersistAnchor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPersistAnchor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AndroidXRDeviceAnchorPersistence" },
		{ "IncludePath", "AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnchorPersisted_MetaData[] = {
		{ "ModuleRelativePath", "Public/AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnchorPersisted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPersistAnchor_PersistAnchorAsync, "PersistAnchorAsync" }, // 2294109756
		{ &Z_Construct_UFunction_UPersistAnchor_PersistAnchorCallback, "PersistAnchorCallback" }, // 3483035340
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPersistAnchor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPersistAnchor_Statics::NewProp_OnAnchorPersisted = { "OnAnchorPersisted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPersistAnchor, OnAnchorPersisted), Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnAnchorPersistedDynamic__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnchorPersisted_MetaData), NewProp_OnAnchorPersisted_MetaData) }; // 1074155038
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPersistAnchor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersistAnchor_Statics::NewProp_OnAnchorPersisted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPersistAnchor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPersistAnchor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRDeviceAnchorPersistence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPersistAnchor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPersistAnchor_Statics::ClassParams = {
	&UPersistAnchor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPersistAnchor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPersistAnchor_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPersistAnchor_Statics::Class_MetaDataParams), Z_Construct_UClass_UPersistAnchor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPersistAnchor()
{
	if (!Z_Registration_Info_UClass_UPersistAnchor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPersistAnchor.OuterSingleton, Z_Construct_UClass_UPersistAnchor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPersistAnchor.OuterSingleton;
}
UPersistAnchor::UPersistAnchor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPersistAnchor);
UPersistAnchor::~UPersistAnchor() {}
// ********** End Class UPersistAnchor *************************************************************

// ********** Begin Class UUnpersistAnchor Function UnpersistAnchorAsync ***************************
struct Z_Construct_UFunction_UUnpersistAnchor_UnpersistAnchorAsync_Statics
{
	struct UnpersistAnchor_eventUnpersistAnchorAsync_Parms
	{
		FAndroidXRDeviceAnchorPersistence AnchorPersistence;
		FGuid PersistedId;
		UUnpersistAnchor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Device Anchor Persistence Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Unpersists a persisted anchor asynchronously.\n    * @param[in] AnchorPersistence The anchor persistence from which the specified anchor\n    * is to be unpersisted.\n    * @param[in] PersistedID The persisted ID of the anchor to be unpersisted.\n    * @return A blueprint latent node that fires off the OnAnchorUnpersisted event when the operation has finished successfully.\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unpersists a persisted anchor asynchronously.\n@param[in] AnchorPersistence The anchor persistence from which the specified anchor\nis to be unpersisted.\n@param[in] PersistedID The persisted ID of the anchor to be unpersisted.\n@return A blueprint latent node that fires off the OnAnchorUnpersisted event when the operation has finished successfully." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorPersistence_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersistedId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnchorPersistence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PersistedId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUnpersistAnchor_UnpersistAnchorAsync_Statics::NewProp_AnchorPersistence = { "AnchorPersistence", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnpersistAnchor_eventUnpersistAnchorAsync_Parms, AnchorPersistence), Z_Construct_UScriptStruct_FAndroidXRDeviceAnchorPersistence, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorPersistence_MetaData), NewProp_AnchorPersistence_MetaData) }; // 2491815904
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUnpersistAnchor_UnpersistAnchorAsync_Statics::NewProp_PersistedId = { "PersistedId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnpersistAnchor_eventUnpersistAnchorAsync_Parms, PersistedId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersistedId_MetaData), NewProp_PersistedId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnpersistAnchor_UnpersistAnchorAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnpersistAnchor_eventUnpersistAnchorAsync_Parms, ReturnValue), Z_Construct_UClass_UUnpersistAnchor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnpersistAnchor_UnpersistAnchorAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnpersistAnchor_UnpersistAnchorAsync_Statics::NewProp_AnchorPersistence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnpersistAnchor_UnpersistAnchorAsync_Statics::NewProp_PersistedId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnpersistAnchor_UnpersistAnchorAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnpersistAnchor_UnpersistAnchorAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnpersistAnchor_UnpersistAnchorAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnpersistAnchor, nullptr, "UnpersistAnchorAsync", Z_Construct_UFunction_UUnpersistAnchor_UnpersistAnchorAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnpersistAnchor_UnpersistAnchorAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnpersistAnchor_UnpersistAnchorAsync_Statics::UnpersistAnchor_eventUnpersistAnchorAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnpersistAnchor_UnpersistAnchorAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnpersistAnchor_UnpersistAnchorAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUnpersistAnchor_UnpersistAnchorAsync_Statics::UnpersistAnchor_eventUnpersistAnchorAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnpersistAnchor_UnpersistAnchorAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnpersistAnchor_UnpersistAnchorAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnpersistAnchor::execUnpersistAnchorAsync)
{
	P_GET_STRUCT_REF(FAndroidXRDeviceAnchorPersistence,Z_Param_Out_AnchorPersistence);
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_PersistedId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUnpersistAnchor**)Z_Param__Result=UUnpersistAnchor::UnpersistAnchorAsync(Z_Param_Out_AnchorPersistence,Z_Param_Out_PersistedId);
	P_NATIVE_END;
}
// ********** End Class UUnpersistAnchor Function UnpersistAnchorAsync *****************************

// ********** Begin Class UUnpersistAnchor Function UnpersistAnchorCallback ************************
struct Z_Construct_UFunction_UUnpersistAnchor_UnpersistAnchorCallback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnpersistAnchor_UnpersistAnchorCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnpersistAnchor, nullptr, "UnpersistAnchorCallback", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnpersistAnchor_UnpersistAnchorCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnpersistAnchor_UnpersistAnchorCallback_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUnpersistAnchor_UnpersistAnchorCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnpersistAnchor_UnpersistAnchorCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnpersistAnchor::execUnpersistAnchorCallback)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnpersistAnchorCallback();
	P_NATIVE_END;
}
// ********** End Class UUnpersistAnchor Function UnpersistAnchorCallback **************************

// ********** Begin Class UUnpersistAnchor *********************************************************
void UUnpersistAnchor::StaticRegisterNativesUUnpersistAnchor()
{
	UClass* Class = UUnpersistAnchor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UnpersistAnchorAsync", &UUnpersistAnchor::execUnpersistAnchorAsync },
		{ "UnpersistAnchorCallback", &UUnpersistAnchor::execUnpersistAnchorCallback },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUnpersistAnchor;
UClass* UUnpersistAnchor::GetPrivateStaticClass()
{
	using TClass = UUnpersistAnchor;
	if (!Z_Registration_Info_UClass_UUnpersistAnchor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UnpersistAnchor"),
			Z_Registration_Info_UClass_UUnpersistAnchor.InnerSingleton,
			StaticRegisterNativesUUnpersistAnchor,
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
	return Z_Registration_Info_UClass_UUnpersistAnchor.InnerSingleton;
}
UClass* Z_Construct_UClass_UUnpersistAnchor_NoRegister()
{
	return UUnpersistAnchor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUnpersistAnchor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AndroidXRDeviceAnchorPersistence" },
		{ "IncludePath", "AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnchorUnpersisted_MetaData[] = {
		{ "ModuleRelativePath", "Public/AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnchorUnpersisted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUnpersistAnchor_UnpersistAnchorAsync, "UnpersistAnchorAsync" }, // 3853763162
		{ &Z_Construct_UFunction_UUnpersistAnchor_UnpersistAnchorCallback, "UnpersistAnchorCallback" }, // 1299131729
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnpersistAnchor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUnpersistAnchor_Statics::NewProp_OnAnchorUnpersisted = { "OnAnchorUnpersisted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnpersistAnchor, OnAnchorUnpersisted), Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnAnchorUnpersistedDynamic__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnchorUnpersisted_MetaData), NewProp_OnAnchorUnpersisted_MetaData) }; // 566492400
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUnpersistAnchor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnpersistAnchor_Statics::NewProp_OnAnchorUnpersisted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnpersistAnchor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUnpersistAnchor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRDeviceAnchorPersistence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnpersistAnchor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnpersistAnchor_Statics::ClassParams = {
	&UUnpersistAnchor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUnpersistAnchor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUnpersistAnchor_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUnpersistAnchor_Statics::Class_MetaDataParams), Z_Construct_UClass_UUnpersistAnchor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUnpersistAnchor()
{
	if (!Z_Registration_Info_UClass_UUnpersistAnchor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnpersistAnchor.OuterSingleton, Z_Construct_UClass_UUnpersistAnchor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUnpersistAnchor.OuterSingleton;
}
UUnpersistAnchor::UUnpersistAnchor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUnpersistAnchor);
UUnpersistAnchor::~UUnpersistAnchor() {}
// ********** End Class UUnpersistAnchor ***********************************************************

// ********** Begin Class UCreatePersistedAnchorSpace Function CreatePersistedAnchorSpaceAsync *****
struct Z_Construct_UFunction_UCreatePersistedAnchorSpace_CreatePersistedAnchorSpaceAsync_Statics
{
	struct CreatePersistedAnchorSpace_eventCreatePersistedAnchorSpaceAsync_Parms
	{
		FAndroidXRDeviceAnchorPersistence AnchorPersistence;
		FGuid PersistedId;
		FAndroidXRSpace AnchorSpace;
		UCreatePersistedAnchorSpace* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Device Anchor Persistence Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Creates a space for a persisted anchor asynchronously.\n    * @param[in] AnchorPersistence The anchor persistence with which the anchor is associated.\n    * @param[in] PersistedID The persisted ID of the anchor.\n    * @param[out] AnchorSpace The space created for the anchor.\n    * @return A blueprint latent node that fires off the OnPersistedAnchorSpaceCreated event when the operation has finished successfully.\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a space for a persisted anchor asynchronously.\n@param[in] AnchorPersistence The anchor persistence with which the anchor is associated.\n@param[in] PersistedID The persisted ID of the anchor.\n@param[out] AnchorSpace The space created for the anchor.\n@return A blueprint latent node that fires off the OnPersistedAnchorSpaceCreated event when the operation has finished successfully." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorPersistence_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersistedId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorSpace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnchorPersistence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PersistedId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnchorSpace;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCreatePersistedAnchorSpace_CreatePersistedAnchorSpaceAsync_Statics::NewProp_AnchorPersistence = { "AnchorPersistence", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CreatePersistedAnchorSpace_eventCreatePersistedAnchorSpaceAsync_Parms, AnchorPersistence), Z_Construct_UScriptStruct_FAndroidXRDeviceAnchorPersistence, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorPersistence_MetaData), NewProp_AnchorPersistence_MetaData) }; // 2491815904
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCreatePersistedAnchorSpace_CreatePersistedAnchorSpaceAsync_Statics::NewProp_PersistedId = { "PersistedId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CreatePersistedAnchorSpace_eventCreatePersistedAnchorSpaceAsync_Parms, PersistedId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersistedId_MetaData), NewProp_PersistedId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCreatePersistedAnchorSpace_CreatePersistedAnchorSpaceAsync_Statics::NewProp_AnchorSpace = { "AnchorSpace", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CreatePersistedAnchorSpace_eventCreatePersistedAnchorSpaceAsync_Parms, AnchorSpace), Z_Construct_UScriptStruct_FAndroidXRSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorSpace_MetaData), NewProp_AnchorSpace_MetaData) }; // 1341678083
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCreatePersistedAnchorSpace_CreatePersistedAnchorSpaceAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CreatePersistedAnchorSpace_eventCreatePersistedAnchorSpaceAsync_Parms, ReturnValue), Z_Construct_UClass_UCreatePersistedAnchorSpace_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCreatePersistedAnchorSpace_CreatePersistedAnchorSpaceAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreatePersistedAnchorSpace_CreatePersistedAnchorSpaceAsync_Statics::NewProp_AnchorPersistence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreatePersistedAnchorSpace_CreatePersistedAnchorSpaceAsync_Statics::NewProp_PersistedId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreatePersistedAnchorSpace_CreatePersistedAnchorSpaceAsync_Statics::NewProp_AnchorSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreatePersistedAnchorSpace_CreatePersistedAnchorSpaceAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCreatePersistedAnchorSpace_CreatePersistedAnchorSpaceAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreatePersistedAnchorSpace_CreatePersistedAnchorSpaceAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCreatePersistedAnchorSpace, nullptr, "CreatePersistedAnchorSpaceAsync", Z_Construct_UFunction_UCreatePersistedAnchorSpace_CreatePersistedAnchorSpaceAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreatePersistedAnchorSpace_CreatePersistedAnchorSpaceAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCreatePersistedAnchorSpace_CreatePersistedAnchorSpaceAsync_Statics::CreatePersistedAnchorSpace_eventCreatePersistedAnchorSpaceAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCreatePersistedAnchorSpace_CreatePersistedAnchorSpaceAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCreatePersistedAnchorSpace_CreatePersistedAnchorSpaceAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCreatePersistedAnchorSpace_CreatePersistedAnchorSpaceAsync_Statics::CreatePersistedAnchorSpace_eventCreatePersistedAnchorSpaceAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCreatePersistedAnchorSpace_CreatePersistedAnchorSpaceAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCreatePersistedAnchorSpace_CreatePersistedAnchorSpaceAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCreatePersistedAnchorSpace::execCreatePersistedAnchorSpaceAsync)
{
	P_GET_STRUCT_REF(FAndroidXRDeviceAnchorPersistence,Z_Param_Out_AnchorPersistence);
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_PersistedId);
	P_GET_STRUCT_REF(FAndroidXRSpace,Z_Param_Out_AnchorSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCreatePersistedAnchorSpace**)Z_Param__Result=UCreatePersistedAnchorSpace::CreatePersistedAnchorSpaceAsync(Z_Param_Out_AnchorPersistence,Z_Param_Out_PersistedId,Z_Param_Out_AnchorSpace);
	P_NATIVE_END;
}
// ********** End Class UCreatePersistedAnchorSpace Function CreatePersistedAnchorSpaceAsync *******

// ********** Begin Class UCreatePersistedAnchorSpace Function PersistedAnchorCreatedCallback ******
struct Z_Construct_UFunction_UCreatePersistedAnchorSpace_PersistedAnchorCreatedCallback_Statics
{
	struct CreatePersistedAnchorSpace_eventPersistedAnchorCreatedCallback_Parms
	{
		FAndroidXRSpace CreatedAnchorSpace;
		FGuid PersistedAnchorId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatedAnchorSpace_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersistedAnchorId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CreatedAnchorSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PersistedAnchorId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCreatePersistedAnchorSpace_PersistedAnchorCreatedCallback_Statics::NewProp_CreatedAnchorSpace = { "CreatedAnchorSpace", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CreatePersistedAnchorSpace_eventPersistedAnchorCreatedCallback_Parms, CreatedAnchorSpace), Z_Construct_UScriptStruct_FAndroidXRSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatedAnchorSpace_MetaData), NewProp_CreatedAnchorSpace_MetaData) }; // 1341678083
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCreatePersistedAnchorSpace_PersistedAnchorCreatedCallback_Statics::NewProp_PersistedAnchorId = { "PersistedAnchorId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CreatePersistedAnchorSpace_eventPersistedAnchorCreatedCallback_Parms, PersistedAnchorId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersistedAnchorId_MetaData), NewProp_PersistedAnchorId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCreatePersistedAnchorSpace_PersistedAnchorCreatedCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreatePersistedAnchorSpace_PersistedAnchorCreatedCallback_Statics::NewProp_CreatedAnchorSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreatePersistedAnchorSpace_PersistedAnchorCreatedCallback_Statics::NewProp_PersistedAnchorId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCreatePersistedAnchorSpace_PersistedAnchorCreatedCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreatePersistedAnchorSpace_PersistedAnchorCreatedCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCreatePersistedAnchorSpace, nullptr, "PersistedAnchorCreatedCallback", Z_Construct_UFunction_UCreatePersistedAnchorSpace_PersistedAnchorCreatedCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreatePersistedAnchorSpace_PersistedAnchorCreatedCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCreatePersistedAnchorSpace_PersistedAnchorCreatedCallback_Statics::CreatePersistedAnchorSpace_eventPersistedAnchorCreatedCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCreatePersistedAnchorSpace_PersistedAnchorCreatedCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCreatePersistedAnchorSpace_PersistedAnchorCreatedCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCreatePersistedAnchorSpace_PersistedAnchorCreatedCallback_Statics::CreatePersistedAnchorSpace_eventPersistedAnchorCreatedCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCreatePersistedAnchorSpace_PersistedAnchorCreatedCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCreatePersistedAnchorSpace_PersistedAnchorCreatedCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCreatePersistedAnchorSpace::execPersistedAnchorCreatedCallback)
{
	P_GET_STRUCT_REF(FAndroidXRSpace,Z_Param_Out_CreatedAnchorSpace);
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_PersistedAnchorId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PersistedAnchorCreatedCallback(Z_Param_Out_CreatedAnchorSpace,Z_Param_Out_PersistedAnchorId);
	P_NATIVE_END;
}
// ********** End Class UCreatePersistedAnchorSpace Function PersistedAnchorCreatedCallback ********

// ********** Begin Class UCreatePersistedAnchorSpace **********************************************
void UCreatePersistedAnchorSpace::StaticRegisterNativesUCreatePersistedAnchorSpace()
{
	UClass* Class = UCreatePersistedAnchorSpace::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreatePersistedAnchorSpaceAsync", &UCreatePersistedAnchorSpace::execCreatePersistedAnchorSpaceAsync },
		{ "PersistedAnchorCreatedCallback", &UCreatePersistedAnchorSpace::execPersistedAnchorCreatedCallback },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCreatePersistedAnchorSpace;
UClass* UCreatePersistedAnchorSpace::GetPrivateStaticClass()
{
	using TClass = UCreatePersistedAnchorSpace;
	if (!Z_Registration_Info_UClass_UCreatePersistedAnchorSpace.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CreatePersistedAnchorSpace"),
			Z_Registration_Info_UClass_UCreatePersistedAnchorSpace.InnerSingleton,
			StaticRegisterNativesUCreatePersistedAnchorSpace,
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
	return Z_Registration_Info_UClass_UCreatePersistedAnchorSpace.InnerSingleton;
}
UClass* Z_Construct_UClass_UCreatePersistedAnchorSpace_NoRegister()
{
	return UCreatePersistedAnchorSpace::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCreatePersistedAnchorSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AndroidXRDeviceAnchorPersistence" },
		{ "IncludePath", "AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPersistedAnchorSpaceCreated_MetaData[] = {
		{ "ModuleRelativePath", "Public/AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPersistedAnchorSpaceCreated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCreatePersistedAnchorSpace_CreatePersistedAnchorSpaceAsync, "CreatePersistedAnchorSpaceAsync" }, // 3143367032
		{ &Z_Construct_UFunction_UCreatePersistedAnchorSpace_PersistedAnchorCreatedCallback, "PersistedAnchorCreatedCallback" }, // 2050068703
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCreatePersistedAnchorSpace>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCreatePersistedAnchorSpace_Statics::NewProp_OnPersistedAnchorSpaceCreated = { "OnPersistedAnchorSpaceCreated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCreatePersistedAnchorSpace, OnPersistedAnchorSpaceCreated), Z_Construct_UDelegateFunction_AndroidXRDeviceAnchorPersistence_OnPersistedAnchorSpaceCreatedDynamic__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPersistedAnchorSpaceCreated_MetaData), NewProp_OnPersistedAnchorSpaceCreated_MetaData) }; // 3659402484
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCreatePersistedAnchorSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreatePersistedAnchorSpace_Statics::NewProp_OnPersistedAnchorSpaceCreated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCreatePersistedAnchorSpace_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCreatePersistedAnchorSpace_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRDeviceAnchorPersistence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCreatePersistedAnchorSpace_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCreatePersistedAnchorSpace_Statics::ClassParams = {
	&UCreatePersistedAnchorSpace::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCreatePersistedAnchorSpace_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCreatePersistedAnchorSpace_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCreatePersistedAnchorSpace_Statics::Class_MetaDataParams), Z_Construct_UClass_UCreatePersistedAnchorSpace_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCreatePersistedAnchorSpace()
{
	if (!Z_Registration_Info_UClass_UCreatePersistedAnchorSpace.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCreatePersistedAnchorSpace.OuterSingleton, Z_Construct_UClass_UCreatePersistedAnchorSpace_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCreatePersistedAnchorSpace.OuterSingleton;
}
UCreatePersistedAnchorSpace::UCreatePersistedAnchorSpace(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCreatePersistedAnchorSpace);
UCreatePersistedAnchorSpace::~UCreatePersistedAnchorSpace() {}
// ********** End Class UCreatePersistedAnchorSpace ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h__Script_AndroidXRDeviceAnchorPersistence_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary, UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary::StaticClass, TEXT("UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary), 3468503540U) },
		{ Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceAsyncAction, UAndroidXRDeviceAnchorPersistenceAsyncAction::StaticClass, TEXT("UAndroidXRDeviceAnchorPersistenceAsyncAction"), &Z_Registration_Info_UClass_UAndroidXRDeviceAnchorPersistenceAsyncAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRDeviceAnchorPersistenceAsyncAction), 2916526386U) },
		{ Z_Construct_UClass_UPersistAnchor, UPersistAnchor::StaticClass, TEXT("UPersistAnchor"), &Z_Registration_Info_UClass_UPersistAnchor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPersistAnchor), 2961474570U) },
		{ Z_Construct_UClass_UUnpersistAnchor, UUnpersistAnchor::StaticClass, TEXT("UUnpersistAnchor"), &Z_Registration_Info_UClass_UUnpersistAnchor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnpersistAnchor), 415153447U) },
		{ Z_Construct_UClass_UCreatePersistedAnchorSpace, UCreatePersistedAnchorSpace::StaticClass, TEXT("UCreatePersistedAnchorSpace"), &Z_Registration_Info_UClass_UCreatePersistedAnchorSpace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCreatePersistedAnchorSpace), 4164821574U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h__Script_AndroidXRDeviceAnchorPersistence_2408072461(TEXT("/Script/AndroidXRDeviceAnchorPersistence"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h__Script_AndroidXRDeviceAnchorPersistence_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h__Script_AndroidXRDeviceAnchorPersistence_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
