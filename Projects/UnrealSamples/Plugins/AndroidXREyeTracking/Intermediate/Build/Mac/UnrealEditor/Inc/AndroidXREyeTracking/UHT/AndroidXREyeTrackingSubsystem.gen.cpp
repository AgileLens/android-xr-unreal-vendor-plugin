// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/AndroidXREyeTrackingSubsystem.h"
#include "AndroidXREyeTrackingTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXREyeTrackingSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXREYETRACKING_API UClass* Z_Construct_UClass_UAndroidXREyeTrackingSubsystem();
ANDROIDXREYETRACKING_API UClass* Z_Construct_UClass_UAndroidXREyeTrackingSubsystem_NoRegister();
ANDROIDXREYETRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXREyes();
ANDROIDXRTRACKINGSUBSYSTEM_API UClass* Z_Construct_UClass_UAndroidXRTrackingSubsystem();
UPackage* Z_Construct_UPackage__Script_AndroidXREyeTracking();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAndroidXREyeTrackingSubsystem Function GetTrackedData *******************
struct Z_Construct_UFunction_UAndroidXREyeTrackingSubsystem_GetTrackedData_Statics
{
	struct AndroidXREyeTrackingSubsystem_eventGetTrackedData_Parms
	{
		FAndroidXREyes FineEyeData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Eye Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Get the tracked eye data\n    * @params[out] The eye data obtained from the eye tracking subsystem\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Components/AndroidXREyeTrackingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the tracked eye data\n@params[out] The eye data obtained from the eye tracking subsystem" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FineEyeData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXREyeTrackingSubsystem_GetTrackedData_Statics::NewProp_FineEyeData = { "FineEyeData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXREyeTrackingSubsystem_eventGetTrackedData_Parms, FineEyeData), Z_Construct_UScriptStruct_FAndroidXREyes, METADATA_PARAMS(0, nullptr) }; // 1457270145
void Z_Construct_UFunction_UAndroidXREyeTrackingSubsystem_GetTrackedData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXREyeTrackingSubsystem_eventGetTrackedData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXREyeTrackingSubsystem_GetTrackedData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXREyeTrackingSubsystem_eventGetTrackedData_Parms), &Z_Construct_UFunction_UAndroidXREyeTrackingSubsystem_GetTrackedData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXREyeTrackingSubsystem_GetTrackedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXREyeTrackingSubsystem_GetTrackedData_Statics::NewProp_FineEyeData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXREyeTrackingSubsystem_GetTrackedData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXREyeTrackingSubsystem_GetTrackedData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXREyeTrackingSubsystem_GetTrackedData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXREyeTrackingSubsystem, nullptr, "GetTrackedData", Z_Construct_UFunction_UAndroidXREyeTrackingSubsystem_GetTrackedData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXREyeTrackingSubsystem_GetTrackedData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXREyeTrackingSubsystem_GetTrackedData_Statics::AndroidXREyeTrackingSubsystem_eventGetTrackedData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXREyeTrackingSubsystem_GetTrackedData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXREyeTrackingSubsystem_GetTrackedData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXREyeTrackingSubsystem_GetTrackedData_Statics::AndroidXREyeTrackingSubsystem_eventGetTrackedData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXREyeTrackingSubsystem_GetTrackedData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXREyeTrackingSubsystem_GetTrackedData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXREyeTrackingSubsystem::execGetTrackedData)
{
	P_GET_STRUCT_REF(FAndroidXREyes,Z_Param_Out_FineEyeData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetTrackedData(Z_Param_Out_FineEyeData);
	P_NATIVE_END;
}
// ********** End Class UAndroidXREyeTrackingSubsystem Function GetTrackedData *********************

// ********** Begin Class UAndroidXREyeTrackingSubsystem Function SetEyeTrackingMode ***************
struct Z_Construct_UFunction_UAndroidXREyeTrackingSubsystem_SetEyeTrackingMode_Statics
{
	struct AndroidXREyeTrackingSubsystem_eventSetEyeTrackingMode_Parms
	{
		bool InIsFineMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Eye Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Set the eye tracking mode\n    * @params[in] Whether to use fine mode for fetching the eye data\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Components/AndroidXREyeTrackingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the eye tracking mode\n@params[in] Whether to use fine mode for fetching the eye data" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_InIsFineMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InIsFineMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAndroidXREyeTrackingSubsystem_SetEyeTrackingMode_Statics::NewProp_InIsFineMode_SetBit(void* Obj)
{
	((AndroidXREyeTrackingSubsystem_eventSetEyeTrackingMode_Parms*)Obj)->InIsFineMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXREyeTrackingSubsystem_SetEyeTrackingMode_Statics::NewProp_InIsFineMode = { "InIsFineMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXREyeTrackingSubsystem_eventSetEyeTrackingMode_Parms), &Z_Construct_UFunction_UAndroidXREyeTrackingSubsystem_SetEyeTrackingMode_Statics::NewProp_InIsFineMode_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXREyeTrackingSubsystem_SetEyeTrackingMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXREyeTrackingSubsystem_SetEyeTrackingMode_Statics::NewProp_InIsFineMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXREyeTrackingSubsystem_SetEyeTrackingMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXREyeTrackingSubsystem_SetEyeTrackingMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXREyeTrackingSubsystem, nullptr, "SetEyeTrackingMode", Z_Construct_UFunction_UAndroidXREyeTrackingSubsystem_SetEyeTrackingMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXREyeTrackingSubsystem_SetEyeTrackingMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXREyeTrackingSubsystem_SetEyeTrackingMode_Statics::AndroidXREyeTrackingSubsystem_eventSetEyeTrackingMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXREyeTrackingSubsystem_SetEyeTrackingMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXREyeTrackingSubsystem_SetEyeTrackingMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXREyeTrackingSubsystem_SetEyeTrackingMode_Statics::AndroidXREyeTrackingSubsystem_eventSetEyeTrackingMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXREyeTrackingSubsystem_SetEyeTrackingMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXREyeTrackingSubsystem_SetEyeTrackingMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXREyeTrackingSubsystem::execSetEyeTrackingMode)
{
	P_GET_UBOOL(Z_Param_InIsFineMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEyeTrackingMode(Z_Param_InIsFineMode);
	P_NATIVE_END;
}
// ********** End Class UAndroidXREyeTrackingSubsystem Function SetEyeTrackingMode *****************

// ********** Begin Class UAndroidXREyeTrackingSubsystem *******************************************
void UAndroidXREyeTrackingSubsystem::StaticRegisterNativesUAndroidXREyeTrackingSubsystem()
{
	UClass* Class = UAndroidXREyeTrackingSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTrackedData", &UAndroidXREyeTrackingSubsystem::execGetTrackedData },
		{ "SetEyeTrackingMode", &UAndroidXREyeTrackingSubsystem::execSetEyeTrackingMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXREyeTrackingSubsystem;
UClass* UAndroidXREyeTrackingSubsystem::GetPrivateStaticClass()
{
	using TClass = UAndroidXREyeTrackingSubsystem;
	if (!Z_Registration_Info_UClass_UAndroidXREyeTrackingSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXREyeTrackingSubsystem"),
			Z_Registration_Info_UClass_UAndroidXREyeTrackingSubsystem.InnerSingleton,
			StaticRegisterNativesUAndroidXREyeTrackingSubsystem,
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
	return Z_Registration_Info_UClass_UAndroidXREyeTrackingSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXREyeTrackingSubsystem_NoRegister()
{
	return UAndroidXREyeTrackingSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXREyeTrackingSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* AndroidXR Eye Tracking Subsystem\n*/" },
#endif
		{ "IncludePath", "Components/AndroidXREyeTrackingSubsystem.h" },
		{ "ModuleRelativePath", "Public/Components/AndroidXREyeTrackingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AndroidXR Eye Tracking Subsystem" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidXREyeTrackingSubsystem_GetTrackedData, "GetTrackedData" }, // 3412200726
		{ &Z_Construct_UFunction_UAndroidXREyeTrackingSubsystem_SetEyeTrackingMode, "SetEyeTrackingMode" }, // 3658012049
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXREyeTrackingSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAndroidXREyeTrackingSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAndroidXRTrackingSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXREyeTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXREyeTrackingSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXREyeTrackingSubsystem_Statics::ClassParams = {
	&UAndroidXREyeTrackingSubsystem::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXREyeTrackingSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXREyeTrackingSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXREyeTrackingSubsystem()
{
	if (!Z_Registration_Info_UClass_UAndroidXREyeTrackingSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXREyeTrackingSubsystem.OuterSingleton, Z_Construct_UClass_UAndroidXREyeTrackingSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXREyeTrackingSubsystem.OuterSingleton;
}
UAndroidXREyeTrackingSubsystem::UAndroidXREyeTrackingSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXREyeTrackingSubsystem);
UAndroidXREyeTrackingSubsystem::~UAndroidXREyeTrackingSubsystem() {}
// ********** End Class UAndroidXREyeTrackingSubsystem *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXREyeTracking_Source_AndroidXREyeTracking_Public_Components_AndroidXREyeTrackingSubsystem_h__Script_AndroidXREyeTracking_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXREyeTrackingSubsystem, UAndroidXREyeTrackingSubsystem::StaticClass, TEXT("UAndroidXREyeTrackingSubsystem"), &Z_Registration_Info_UClass_UAndroidXREyeTrackingSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXREyeTrackingSubsystem), 2738727182U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXREyeTracking_Source_AndroidXREyeTracking_Public_Components_AndroidXREyeTrackingSubsystem_h__Script_AndroidXREyeTracking_448790007(TEXT("/Script/AndroidXREyeTracking"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXREyeTracking_Source_AndroidXREyeTracking_Public_Components_AndroidXREyeTrackingSubsystem_h__Script_AndroidXREyeTracking_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXREyeTracking_Source_AndroidXREyeTracking_Public_Components_AndroidXREyeTrackingSubsystem_h__Script_AndroidXREyeTracking_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
