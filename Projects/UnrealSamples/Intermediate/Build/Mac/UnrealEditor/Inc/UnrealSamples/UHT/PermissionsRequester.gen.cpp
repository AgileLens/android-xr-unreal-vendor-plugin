// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealSamples/PermissionsRequester.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePermissionsRequester() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UNREALSAMPLES_API UClass* Z_Construct_UClass_UPermissionsRequester();
UNREALSAMPLES_API UClass* Z_Construct_UClass_UPermissionsRequester_NoRegister();
UNREALSAMPLES_API UFunction* Z_Construct_UDelegateFunction_UnrealSamples_OnPermissionsGranted__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_UnrealSamples();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnPermissionsGranted *************************************************
struct Z_Construct_UDelegateFunction_UnrealSamples_OnPermissionsGranted__DelegateSignature_Statics
{
	struct _Script_UnrealSamples_eventOnPermissionsGranted_Parms
	{
		const UPermissionsRequester* PermissionRequester;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PermissionsRequester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PermissionRequester_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PermissionRequester;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UnrealSamples_OnPermissionsGranted__DelegateSignature_Statics::NewProp_PermissionRequester = { "PermissionRequester", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UnrealSamples_eventOnPermissionsGranted_Parms, PermissionRequester), Z_Construct_UClass_UPermissionsRequester_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PermissionRequester_MetaData), NewProp_PermissionRequester_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UnrealSamples_OnPermissionsGranted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnrealSamples_OnPermissionsGranted__DelegateSignature_Statics::NewProp_PermissionRequester,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealSamples_OnPermissionsGranted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UnrealSamples_OnPermissionsGranted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UnrealSamples, nullptr, "OnPermissionsGranted__DelegateSignature", Z_Construct_UDelegateFunction_UnrealSamples_OnPermissionsGranted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealSamples_OnPermissionsGranted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UnrealSamples_OnPermissionsGranted__DelegateSignature_Statics::_Script_UnrealSamples_eventOnPermissionsGranted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealSamples_OnPermissionsGranted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UnrealSamples_OnPermissionsGranted__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UnrealSamples_OnPermissionsGranted__DelegateSignature_Statics::_Script_UnrealSamples_eventOnPermissionsGranted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UnrealSamples_OnPermissionsGranted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UnrealSamples_OnPermissionsGranted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPermissionsGranted_DelegateWrapper(const FMulticastScriptDelegate& OnPermissionsGranted, const UPermissionsRequester* PermissionRequester)
{
	struct _Script_UnrealSamples_eventOnPermissionsGranted_Parms
	{
		const UPermissionsRequester* PermissionRequester;
	};
	_Script_UnrealSamples_eventOnPermissionsGranted_Parms Parms;
	Parms.PermissionRequester=PermissionRequester;
	OnPermissionsGranted.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPermissionsGranted ***************************************************

// ********** Begin Class UPermissionsRequester Function AreAllPermissionsGranted ******************
struct Z_Construct_UFunction_UPermissionsRequester_AreAllPermissionsGranted_Statics
{
	struct PermissionsRequester_eventAreAllPermissionsGranted_Parms
	{
		TArray<FString> Permissions;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PermissionsRequester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Permissions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Permissions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Permissions;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPermissionsRequester_AreAllPermissionsGranted_Statics::NewProp_Permissions_Inner = { "Permissions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPermissionsRequester_AreAllPermissionsGranted_Statics::NewProp_Permissions = { "Permissions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PermissionsRequester_eventAreAllPermissionsGranted_Parms, Permissions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Permissions_MetaData), NewProp_Permissions_MetaData) };
void Z_Construct_UFunction_UPermissionsRequester_AreAllPermissionsGranted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PermissionsRequester_eventAreAllPermissionsGranted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPermissionsRequester_AreAllPermissionsGranted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PermissionsRequester_eventAreAllPermissionsGranted_Parms), &Z_Construct_UFunction_UPermissionsRequester_AreAllPermissionsGranted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPermissionsRequester_AreAllPermissionsGranted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPermissionsRequester_AreAllPermissionsGranted_Statics::NewProp_Permissions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPermissionsRequester_AreAllPermissionsGranted_Statics::NewProp_Permissions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPermissionsRequester_AreAllPermissionsGranted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPermissionsRequester_AreAllPermissionsGranted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPermissionsRequester_AreAllPermissionsGranted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPermissionsRequester, nullptr, "AreAllPermissionsGranted", Z_Construct_UFunction_UPermissionsRequester_AreAllPermissionsGranted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPermissionsRequester_AreAllPermissionsGranted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPermissionsRequester_AreAllPermissionsGranted_Statics::PermissionsRequester_eventAreAllPermissionsGranted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPermissionsRequester_AreAllPermissionsGranted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPermissionsRequester_AreAllPermissionsGranted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPermissionsRequester_AreAllPermissionsGranted_Statics::PermissionsRequester_eventAreAllPermissionsGranted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPermissionsRequester_AreAllPermissionsGranted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPermissionsRequester_AreAllPermissionsGranted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPermissionsRequester::execAreAllPermissionsGranted)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_Permissions);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AreAllPermissionsGranted(Z_Param_Out_Permissions);
	P_NATIVE_END;
}
// ********** End Class UPermissionsRequester Function AreAllPermissionsGranted ********************

// ********** Begin Class UPermissionsRequester Function IsPermissionGranted ***********************
struct Z_Construct_UFunction_UPermissionsRequester_IsPermissionGranted_Statics
{
	struct PermissionsRequester_eventIsPermissionGranted_Parms
	{
		FString Permission;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PermissionsRequester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Permission_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Permission;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPermissionsRequester_IsPermissionGranted_Statics::NewProp_Permission = { "Permission", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PermissionsRequester_eventIsPermissionGranted_Parms, Permission), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Permission_MetaData), NewProp_Permission_MetaData) };
void Z_Construct_UFunction_UPermissionsRequester_IsPermissionGranted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PermissionsRequester_eventIsPermissionGranted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPermissionsRequester_IsPermissionGranted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PermissionsRequester_eventIsPermissionGranted_Parms), &Z_Construct_UFunction_UPermissionsRequester_IsPermissionGranted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPermissionsRequester_IsPermissionGranted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPermissionsRequester_IsPermissionGranted_Statics::NewProp_Permission,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPermissionsRequester_IsPermissionGranted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPermissionsRequester_IsPermissionGranted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPermissionsRequester_IsPermissionGranted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPermissionsRequester, nullptr, "IsPermissionGranted", Z_Construct_UFunction_UPermissionsRequester_IsPermissionGranted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPermissionsRequester_IsPermissionGranted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPermissionsRequester_IsPermissionGranted_Statics::PermissionsRequester_eventIsPermissionGranted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPermissionsRequester_IsPermissionGranted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPermissionsRequester_IsPermissionGranted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPermissionsRequester_IsPermissionGranted_Statics::PermissionsRequester_eventIsPermissionGranted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPermissionsRequester_IsPermissionGranted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPermissionsRequester_IsPermissionGranted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPermissionsRequester::execIsPermissionGranted)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Permission);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPermissionGranted(Z_Param_Permission);
	P_NATIVE_END;
}
// ********** End Class UPermissionsRequester Function IsPermissionGranted *************************

// ********** Begin Class UPermissionsRequester Function OnPermissionGrantedHandler ****************
struct Z_Construct_UFunction_UPermissionsRequester_OnPermissionGrantedHandler_Statics
{
	struct PermissionsRequester_eventOnPermissionGrantedHandler_Parms
	{
		TArray<FString> Permissions;
		TArray<bool> Status;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PermissionsRequester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Permissions_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Permissions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Permissions;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Status_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Status;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPermissionsRequester_OnPermissionGrantedHandler_Statics::NewProp_Permissions_Inner = { "Permissions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPermissionsRequester_OnPermissionGrantedHandler_Statics::NewProp_Permissions = { "Permissions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PermissionsRequester_eventOnPermissionGrantedHandler_Parms, Permissions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Permissions_MetaData), NewProp_Permissions_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPermissionsRequester_OnPermissionGrantedHandler_Statics::NewProp_Status_Inner = { "Status", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPermissionsRequester_OnPermissionGrantedHandler_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PermissionsRequester_eventOnPermissionGrantedHandler_Parms, Status), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Status_MetaData), NewProp_Status_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPermissionsRequester_OnPermissionGrantedHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPermissionsRequester_OnPermissionGrantedHandler_Statics::NewProp_Permissions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPermissionsRequester_OnPermissionGrantedHandler_Statics::NewProp_Permissions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPermissionsRequester_OnPermissionGrantedHandler_Statics::NewProp_Status_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPermissionsRequester_OnPermissionGrantedHandler_Statics::NewProp_Status,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPermissionsRequester_OnPermissionGrantedHandler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPermissionsRequester_OnPermissionGrantedHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPermissionsRequester, nullptr, "OnPermissionGrantedHandler", Z_Construct_UFunction_UPermissionsRequester_OnPermissionGrantedHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPermissionsRequester_OnPermissionGrantedHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPermissionsRequester_OnPermissionGrantedHandler_Statics::PermissionsRequester_eventOnPermissionGrantedHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPermissionsRequester_OnPermissionGrantedHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPermissionsRequester_OnPermissionGrantedHandler_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPermissionsRequester_OnPermissionGrantedHandler_Statics::PermissionsRequester_eventOnPermissionGrantedHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPermissionsRequester_OnPermissionGrantedHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPermissionsRequester_OnPermissionGrantedHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPermissionsRequester::execOnPermissionGrantedHandler)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_Permissions);
	P_GET_TARRAY_REF(bool,Z_Param_Out_Status);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPermissionGrantedHandler(Z_Param_Out_Permissions,Z_Param_Out_Status);
	P_NATIVE_END;
}
// ********** End Class UPermissionsRequester Function OnPermissionGrantedHandler ******************

// ********** Begin Class UPermissionsRequester Function RequestPermissions ************************
struct Z_Construct_UFunction_UPermissionsRequester_RequestPermissions_Statics
{
	struct PermissionsRequester_eventRequestPermissions_Parms
	{
		TArray<FString> Permissions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PermissionsRequester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Permissions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Permissions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Permissions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPermissionsRequester_RequestPermissions_Statics::NewProp_Permissions_Inner = { "Permissions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPermissionsRequester_RequestPermissions_Statics::NewProp_Permissions = { "Permissions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PermissionsRequester_eventRequestPermissions_Parms, Permissions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Permissions_MetaData), NewProp_Permissions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPermissionsRequester_RequestPermissions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPermissionsRequester_RequestPermissions_Statics::NewProp_Permissions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPermissionsRequester_RequestPermissions_Statics::NewProp_Permissions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPermissionsRequester_RequestPermissions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPermissionsRequester_RequestPermissions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPermissionsRequester, nullptr, "RequestPermissions", Z_Construct_UFunction_UPermissionsRequester_RequestPermissions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPermissionsRequester_RequestPermissions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPermissionsRequester_RequestPermissions_Statics::PermissionsRequester_eventRequestPermissions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPermissionsRequester_RequestPermissions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPermissionsRequester_RequestPermissions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPermissionsRequester_RequestPermissions_Statics::PermissionsRequester_eventRequestPermissions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPermissionsRequester_RequestPermissions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPermissionsRequester_RequestPermissions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPermissionsRequester::execRequestPermissions)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_Permissions);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestPermissions(Z_Param_Out_Permissions);
	P_NATIVE_END;
}
// ********** End Class UPermissionsRequester Function RequestPermissions **************************

// ********** Begin Class UPermissionsRequester ****************************************************
void UPermissionsRequester::StaticRegisterNativesUPermissionsRequester()
{
	UClass* Class = UPermissionsRequester::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AreAllPermissionsGranted", &UPermissionsRequester::execAreAllPermissionsGranted },
		{ "IsPermissionGranted", &UPermissionsRequester::execIsPermissionGranted },
		{ "OnPermissionGrantedHandler", &UPermissionsRequester::execOnPermissionGrantedHandler },
		{ "RequestPermissions", &UPermissionsRequester::execRequestPermissions },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPermissionsRequester;
UClass* UPermissionsRequester::GetPrivateStaticClass()
{
	using TClass = UPermissionsRequester;
	if (!Z_Registration_Info_UClass_UPermissionsRequester.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PermissionsRequester"),
			Z_Registration_Info_UClass_UPermissionsRequester.InnerSingleton,
			StaticRegisterNativesUPermissionsRequester,
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
	return Z_Registration_Info_UClass_UPermissionsRequester.InnerSingleton;
}
UClass* Z_Construct_UClass_UPermissionsRequester_NoRegister()
{
	return UPermissionsRequester::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPermissionsRequester_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PermissionsRequester.h" },
		{ "ModuleRelativePath", "PermissionsRequester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPermissionsGranted_MetaData[] = {
		{ "ModuleRelativePath", "PermissionsRequester.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PermissionsTable_MetaData[] = {
		{ "ModuleRelativePath", "PermissionsRequester.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPermissionsGranted;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PermissionsTable_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PermissionsTable_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PermissionsTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPermissionsRequester_AreAllPermissionsGranted, "AreAllPermissionsGranted" }, // 3409009899
		{ &Z_Construct_UFunction_UPermissionsRequester_IsPermissionGranted, "IsPermissionGranted" }, // 803513013
		{ &Z_Construct_UFunction_UPermissionsRequester_OnPermissionGrantedHandler, "OnPermissionGrantedHandler" }, // 2309002132
		{ &Z_Construct_UFunction_UPermissionsRequester_RequestPermissions, "RequestPermissions" }, // 663331924
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPermissionsRequester>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPermissionsRequester_Statics::NewProp_OnPermissionsGranted = { "OnPermissionsGranted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPermissionsRequester, OnPermissionsGranted), Z_Construct_UDelegateFunction_UnrealSamples_OnPermissionsGranted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPermissionsGranted_MetaData), NewProp_OnPermissionsGranted_MetaData) }; // 895302460
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPermissionsRequester_Statics::NewProp_PermissionsTable_ValueProp = { "PermissionsTable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPermissionsRequester_Statics::NewProp_PermissionsTable_Key_KeyProp = { "PermissionsTable_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPermissionsRequester_Statics::NewProp_PermissionsTable = { "PermissionsTable", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPermissionsRequester, PermissionsTable), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PermissionsTable_MetaData), NewProp_PermissionsTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPermissionsRequester_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPermissionsRequester_Statics::NewProp_OnPermissionsGranted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPermissionsRequester_Statics::NewProp_PermissionsTable_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPermissionsRequester_Statics::NewProp_PermissionsTable_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPermissionsRequester_Statics::NewProp_PermissionsTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPermissionsRequester_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPermissionsRequester_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealSamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPermissionsRequester_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPermissionsRequester_Statics::ClassParams = {
	&UPermissionsRequester::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPermissionsRequester_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPermissionsRequester_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPermissionsRequester_Statics::Class_MetaDataParams), Z_Construct_UClass_UPermissionsRequester_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPermissionsRequester()
{
	if (!Z_Registration_Info_UClass_UPermissionsRequester.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPermissionsRequester.OuterSingleton, Z_Construct_UClass_UPermissionsRequester_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPermissionsRequester.OuterSingleton;
}
UPermissionsRequester::UPermissionsRequester(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPermissionsRequester);
UPermissionsRequester::~UPermissionsRequester() {}
// ********** End Class UPermissionsRequester ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_PermissionsRequester_h__Script_UnrealSamples_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPermissionsRequester, UPermissionsRequester::StaticClass, TEXT("UPermissionsRequester"), &Z_Registration_Info_UClass_UPermissionsRequester, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPermissionsRequester), 2022389287U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_PermissionsRequester_h__Script_UnrealSamples_1989445837(TEXT("/Script/UnrealSamples"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_PermissionsRequester_h__Script_UnrealSamples_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_PermissionsRequester_h__Script_UnrealSamples_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
