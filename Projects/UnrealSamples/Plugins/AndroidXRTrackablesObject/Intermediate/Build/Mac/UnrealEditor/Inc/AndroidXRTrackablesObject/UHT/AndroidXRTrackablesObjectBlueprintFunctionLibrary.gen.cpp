// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRTrackablesObjectBlueprintFunctionLibrary.h"
#include "AndroidXRTrackablesObjectTypes.h"
#include "AndroidXRTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRTrackablesObjectBlueprintFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRTrackable();
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRTrackableTracker();
ANDROIDXRTRACKABLESOBJECT_API UClass* Z_Construct_UClass_UAndroidXRTrackablesObjectBlueprintFunctionLibrary();
ANDROIDXRTRACKABLESOBJECT_API UClass* Z_Construct_UClass_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_NoRegister();
ANDROIDXRTRACKABLESOBJECT_API UEnum* Z_Construct_UEnum_AndroidXRTrackablesObject_EAndroidXRTrackablesObjectLabel();
ANDROIDXRTRACKABLESOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRTrackableObject();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AndroidXRTrackablesObject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAndroidXRTrackablesObjectBlueprintFunctionLibrary Function CreateObjectTrackableTracker 
struct Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_CreateObjectTrackableTracker_Statics
{
	struct AndroidXRTrackablesObjectBlueprintFunctionLibrary_eventCreateObjectTrackableTracker_Parms
	{
		TSet<EAndroidXRTrackablesObjectLabel> ActiveLabels;
		FAndroidXRTrackableTracker TrackableTracker;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Trackables Object Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    \x09* Creates a trackable tracker for the specified trackable object labels. All labels if none are provided.\n    \x09* @param[in] ActiveLabels The list of object labels to track.\n     \x09* @param[out] TrackableTracker Created trackable tracker.\n    \x09* @return True if the underlying API call was successful.\n     \x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTrackablesObjectBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a trackable tracker for the specified trackable object labels. All labels if none are provided.\n@param[in] ActiveLabels The list of object labels to track.\n@param[out] TrackableTracker Created trackable tracker.\n@return True if the underlying API call was successful." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveLabels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActiveLabels_ElementProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActiveLabels_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ActiveLabels;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrackableTracker;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_CreateObjectTrackableTracker_Statics::NewProp_ActiveLabels_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_CreateObjectTrackableTracker_Statics::NewProp_ActiveLabels_ElementProp = { "ActiveLabels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_AndroidXRTrackablesObject_EAndroidXRTrackablesObjectLabel, METADATA_PARAMS(0, nullptr) }; // 3767851020
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_CreateObjectTrackableTracker_Statics::NewProp_ActiveLabels = { "ActiveLabels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRTrackablesObjectBlueprintFunctionLibrary_eventCreateObjectTrackableTracker_Parms, ActiveLabels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveLabels_MetaData), NewProp_ActiveLabels_MetaData) }; // 3767851020
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_CreateObjectTrackableTracker_Statics::NewProp_TrackableTracker = { "TrackableTracker", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRTrackablesObjectBlueprintFunctionLibrary_eventCreateObjectTrackableTracker_Parms, TrackableTracker), Z_Construct_UScriptStruct_FAndroidXRTrackableTracker, METADATA_PARAMS(0, nullptr) }; // 2921418092
void Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_CreateObjectTrackableTracker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRTrackablesObjectBlueprintFunctionLibrary_eventCreateObjectTrackableTracker_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_CreateObjectTrackableTracker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRTrackablesObjectBlueprintFunctionLibrary_eventCreateObjectTrackableTracker_Parms), &Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_CreateObjectTrackableTracker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_CreateObjectTrackableTracker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_CreateObjectTrackableTracker_Statics::NewProp_ActiveLabels_ElementProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_CreateObjectTrackableTracker_Statics::NewProp_ActiveLabels_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_CreateObjectTrackableTracker_Statics::NewProp_ActiveLabels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_CreateObjectTrackableTracker_Statics::NewProp_TrackableTracker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_CreateObjectTrackableTracker_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_CreateObjectTrackableTracker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_CreateObjectTrackableTracker_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRTrackablesObjectBlueprintFunctionLibrary, nullptr, "CreateObjectTrackableTracker", Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_CreateObjectTrackableTracker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_CreateObjectTrackableTracker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_CreateObjectTrackableTracker_Statics::AndroidXRTrackablesObjectBlueprintFunctionLibrary_eventCreateObjectTrackableTracker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_CreateObjectTrackableTracker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_CreateObjectTrackableTracker_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_CreateObjectTrackableTracker_Statics::AndroidXRTrackablesObjectBlueprintFunctionLibrary_eventCreateObjectTrackableTracker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_CreateObjectTrackableTracker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_CreateObjectTrackableTracker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRTrackablesObjectBlueprintFunctionLibrary::execCreateObjectTrackableTracker)
{
	P_GET_TSET_REF(EAndroidXRTrackablesObjectLabel,Z_Param_Out_ActiveLabels);
	P_GET_STRUCT_REF(FAndroidXRTrackableTracker,Z_Param_Out_TrackableTracker);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRTrackablesObjectBlueprintFunctionLibrary::CreateObjectTrackableTracker(Z_Param_Out_ActiveLabels,Z_Param_Out_TrackableTracker);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRTrackablesObjectBlueprintFunctionLibrary Function CreateObjectTrackableTracker 

// ********** Begin Class UAndroidXRTrackablesObjectBlueprintFunctionLibrary Function GetTrackableObject 
struct Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_GetTrackableObject_Statics
{
	struct AndroidXRTrackablesObjectBlueprintFunctionLibrary_eventGetTrackableObject_Parms
	{
		FAndroidXRTrackableTracker TrackableTracker;
		FAndroidXRTrackable Trackable;
		FAndroidXRTrackableObject TrackableObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Trackables Core Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     \x09* Gets an FAndroidXRTrackableObject from an FAndroidXRTrackable.\n     \x09* @param[in] TrackableTracker Previously created plane tracker.\n     \x09* @param[out] Trackable Previously obtained trackable.\n     \x09* @param[out] TrackableObject Trackable object.\n     \x09* @return True if the underlying API call was successful.\n     \x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTrackablesObjectBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets an FAndroidXRTrackableObject from an FAndroidXRTrackable.\n@param[in] TrackableTracker Previously created plane tracker.\n@param[out] Trackable Previously obtained trackable.\n@param[out] TrackableObject Trackable object.\n@return True if the underlying API call was successful." },
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
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrackableObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_GetTrackableObject_Statics::NewProp_TrackableTracker = { "TrackableTracker", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRTrackablesObjectBlueprintFunctionLibrary_eventGetTrackableObject_Parms, TrackableTracker), Z_Construct_UScriptStruct_FAndroidXRTrackableTracker, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackableTracker_MetaData), NewProp_TrackableTracker_MetaData) }; // 2921418092
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_GetTrackableObject_Statics::NewProp_Trackable = { "Trackable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRTrackablesObjectBlueprintFunctionLibrary_eventGetTrackableObject_Parms, Trackable), Z_Construct_UScriptStruct_FAndroidXRTrackable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Trackable_MetaData), NewProp_Trackable_MetaData) }; // 3607608211
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_GetTrackableObject_Statics::NewProp_TrackableObject = { "TrackableObject", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRTrackablesObjectBlueprintFunctionLibrary_eventGetTrackableObject_Parms, TrackableObject), Z_Construct_UScriptStruct_FAndroidXRTrackableObject, METADATA_PARAMS(0, nullptr) }; // 1730924616
void Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_GetTrackableObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRTrackablesObjectBlueprintFunctionLibrary_eventGetTrackableObject_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_GetTrackableObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRTrackablesObjectBlueprintFunctionLibrary_eventGetTrackableObject_Parms), &Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_GetTrackableObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_GetTrackableObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_GetTrackableObject_Statics::NewProp_TrackableTracker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_GetTrackableObject_Statics::NewProp_Trackable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_GetTrackableObject_Statics::NewProp_TrackableObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_GetTrackableObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_GetTrackableObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_GetTrackableObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRTrackablesObjectBlueprintFunctionLibrary, nullptr, "GetTrackableObject", Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_GetTrackableObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_GetTrackableObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_GetTrackableObject_Statics::AndroidXRTrackablesObjectBlueprintFunctionLibrary_eventGetTrackableObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_GetTrackableObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_GetTrackableObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_GetTrackableObject_Statics::AndroidXRTrackablesObjectBlueprintFunctionLibrary_eventGetTrackableObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_GetTrackableObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_GetTrackableObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRTrackablesObjectBlueprintFunctionLibrary::execGetTrackableObject)
{
	P_GET_STRUCT_REF(FAndroidXRTrackableTracker,Z_Param_Out_TrackableTracker);
	P_GET_STRUCT_REF(FAndroidXRTrackable,Z_Param_Out_Trackable);
	P_GET_STRUCT_REF(FAndroidXRTrackableObject,Z_Param_Out_TrackableObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRTrackablesObjectBlueprintFunctionLibrary::GetTrackableObject(Z_Param_Out_TrackableTracker,Z_Param_Out_Trackable,Z_Param_Out_TrackableObject);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRTrackablesObjectBlueprintFunctionLibrary Function GetTrackableObject 

// ********** Begin Class UAndroidXRTrackablesObjectBlueprintFunctionLibrary ***********************
void UAndroidXRTrackablesObjectBlueprintFunctionLibrary::StaticRegisterNativesUAndroidXRTrackablesObjectBlueprintFunctionLibrary()
{
	UClass* Class = UAndroidXRTrackablesObjectBlueprintFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateObjectTrackableTracker", &UAndroidXRTrackablesObjectBlueprintFunctionLibrary::execCreateObjectTrackableTracker },
		{ "GetTrackableObject", &UAndroidXRTrackablesObjectBlueprintFunctionLibrary::execGetTrackableObject },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRTrackablesObjectBlueprintFunctionLibrary;
UClass* UAndroidXRTrackablesObjectBlueprintFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UAndroidXRTrackablesObjectBlueprintFunctionLibrary;
	if (!Z_Registration_Info_UClass_UAndroidXRTrackablesObjectBlueprintFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRTrackablesObjectBlueprintFunctionLibrary"),
			Z_Registration_Info_UClass_UAndroidXRTrackablesObjectBlueprintFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUAndroidXRTrackablesObjectBlueprintFunctionLibrary,
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
	return Z_Registration_Info_UClass_UAndroidXRTrackablesObjectBlueprintFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_NoRegister()
{
	return UAndroidXRTrackablesObjectBlueprintFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AndroidXRTrackablesObject" },
		{ "IncludePath", "AndroidXRTrackablesObjectBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/AndroidXRTrackablesObjectBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_CreateObjectTrackableTracker, "CreateObjectTrackableTracker" }, // 1845908051
		{ &Z_Construct_UFunction_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_GetTrackableObject, "GetTrackableObject" }, // 1152501307
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRTrackablesObjectBlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRTrackablesObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_Statics::ClassParams = {
	&UAndroidXRTrackablesObjectBlueprintFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRTrackablesObjectBlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UAndroidXRTrackablesObjectBlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRTrackablesObjectBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UAndroidXRTrackablesObjectBlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRTrackablesObjectBlueprintFunctionLibrary.OuterSingleton;
}
UAndroidXRTrackablesObjectBlueprintFunctionLibrary::UAndroidXRTrackablesObjectBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRTrackablesObjectBlueprintFunctionLibrary);
UAndroidXRTrackablesObjectBlueprintFunctionLibrary::~UAndroidXRTrackablesObjectBlueprintFunctionLibrary() {}
// ********** End Class UAndroidXRTrackablesObjectBlueprintFunctionLibrary *************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRTrackablesObject_Source_AndroidXRTrackablesObject_Public_AndroidXRTrackablesObjectBlueprintFunctionLibrary_h__Script_AndroidXRTrackablesObject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXRTrackablesObjectBlueprintFunctionLibrary, UAndroidXRTrackablesObjectBlueprintFunctionLibrary::StaticClass, TEXT("UAndroidXRTrackablesObjectBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UAndroidXRTrackablesObjectBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRTrackablesObjectBlueprintFunctionLibrary), 1383007346U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRTrackablesObject_Source_AndroidXRTrackablesObject_Public_AndroidXRTrackablesObjectBlueprintFunctionLibrary_h__Script_AndroidXRTrackablesObject_3159194763(TEXT("/Script/AndroidXRTrackablesObject"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRTrackablesObject_Source_AndroidXRTrackablesObject_Public_AndroidXRTrackablesObjectBlueprintFunctionLibrary_h__Script_AndroidXRTrackablesObject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRTrackablesObject_Source_AndroidXRTrackablesObject_Public_AndroidXRTrackablesObjectBlueprintFunctionLibrary_h__Script_AndroidXRTrackablesObject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
