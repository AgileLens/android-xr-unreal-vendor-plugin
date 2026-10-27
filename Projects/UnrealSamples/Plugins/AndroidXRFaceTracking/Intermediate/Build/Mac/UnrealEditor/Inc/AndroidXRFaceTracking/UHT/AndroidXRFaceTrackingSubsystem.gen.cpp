// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/AndroidXRFaceTrackingSubsystem.h"
#include "AndroidXRTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRFaceTrackingSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRFaceState();
ANDROIDXRFACETRACKING_API UClass* Z_Construct_UClass_UAndroidXRFaceTrackingSubsystem();
ANDROIDXRFACETRACKING_API UClass* Z_Construct_UClass_UAndroidXRFaceTrackingSubsystem_NoRegister();
ANDROIDXRTRACKINGSUBSYSTEM_API UClass* Z_Construct_UClass_UAndroidXRTrackingSubsystem();
UPackage* Z_Construct_UPackage__Script_AndroidXRFaceTracking();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAndroidXRFaceTrackingSubsystem Function GetTrackedData ******************
struct Z_Construct_UFunction_UAndroidXRFaceTrackingSubsystem_GetTrackedData_Statics
{
	struct AndroidXRFaceTrackingSubsystem_eventGetTrackedData_Parms
	{
		FAndroidXRFaceState TrackedData;
		bool CalibrationStatus;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Face Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Gets the blend shapes of a facial expression\n    * @param[out] The face tracking state and facial expressions\n    * @param[out] The face calibration status\n    * @return Whether the state was able to be obtained successfully\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Components/AndroidXRFaceTrackingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the blend shapes of a facial expression\n@param[out] The face tracking state and facial expressions\n@param[out] The face calibration status\n@return Whether the state was able to be obtained successfully" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrackedData;
	static void NewProp_CalibrationStatus_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CalibrationStatus;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRFaceTrackingSubsystem_GetTrackedData_Statics::NewProp_TrackedData = { "TrackedData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRFaceTrackingSubsystem_eventGetTrackedData_Parms, TrackedData), Z_Construct_UScriptStruct_FAndroidXRFaceState, METADATA_PARAMS(0, nullptr) }; // 2513444597
void Z_Construct_UFunction_UAndroidXRFaceTrackingSubsystem_GetTrackedData_Statics::NewProp_CalibrationStatus_SetBit(void* Obj)
{
	((AndroidXRFaceTrackingSubsystem_eventGetTrackedData_Parms*)Obj)->CalibrationStatus = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRFaceTrackingSubsystem_GetTrackedData_Statics::NewProp_CalibrationStatus = { "CalibrationStatus", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRFaceTrackingSubsystem_eventGetTrackedData_Parms), &Z_Construct_UFunction_UAndroidXRFaceTrackingSubsystem_GetTrackedData_Statics::NewProp_CalibrationStatus_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAndroidXRFaceTrackingSubsystem_GetTrackedData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRFaceTrackingSubsystem_eventGetTrackedData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRFaceTrackingSubsystem_GetTrackedData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRFaceTrackingSubsystem_eventGetTrackedData_Parms), &Z_Construct_UFunction_UAndroidXRFaceTrackingSubsystem_GetTrackedData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRFaceTrackingSubsystem_GetTrackedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRFaceTrackingSubsystem_GetTrackedData_Statics::NewProp_TrackedData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRFaceTrackingSubsystem_GetTrackedData_Statics::NewProp_CalibrationStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRFaceTrackingSubsystem_GetTrackedData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRFaceTrackingSubsystem_GetTrackedData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRFaceTrackingSubsystem_GetTrackedData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRFaceTrackingSubsystem, nullptr, "GetTrackedData", Z_Construct_UFunction_UAndroidXRFaceTrackingSubsystem_GetTrackedData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRFaceTrackingSubsystem_GetTrackedData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRFaceTrackingSubsystem_GetTrackedData_Statics::AndroidXRFaceTrackingSubsystem_eventGetTrackedData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRFaceTrackingSubsystem_GetTrackedData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRFaceTrackingSubsystem_GetTrackedData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRFaceTrackingSubsystem_GetTrackedData_Statics::AndroidXRFaceTrackingSubsystem_eventGetTrackedData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRFaceTrackingSubsystem_GetTrackedData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRFaceTrackingSubsystem_GetTrackedData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRFaceTrackingSubsystem::execGetTrackedData)
{
	P_GET_STRUCT_REF(FAndroidXRFaceState,Z_Param_Out_TrackedData);
	P_GET_UBOOL_REF(Z_Param_Out_CalibrationStatus);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetTrackedData(Z_Param_Out_TrackedData,Z_Param_Out_CalibrationStatus);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRFaceTrackingSubsystem Function GetTrackedData ********************

// ********** Begin Class UAndroidXRFaceTrackingSubsystem ******************************************
void UAndroidXRFaceTrackingSubsystem::StaticRegisterNativesUAndroidXRFaceTrackingSubsystem()
{
	UClass* Class = UAndroidXRFaceTrackingSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTrackedData", &UAndroidXRFaceTrackingSubsystem::execGetTrackedData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRFaceTrackingSubsystem;
UClass* UAndroidXRFaceTrackingSubsystem::GetPrivateStaticClass()
{
	using TClass = UAndroidXRFaceTrackingSubsystem;
	if (!Z_Registration_Info_UClass_UAndroidXRFaceTrackingSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRFaceTrackingSubsystem"),
			Z_Registration_Info_UClass_UAndroidXRFaceTrackingSubsystem.InnerSingleton,
			StaticRegisterNativesUAndroidXRFaceTrackingSubsystem,
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
	return Z_Registration_Info_UClass_UAndroidXRFaceTrackingSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRFaceTrackingSubsystem_NoRegister()
{
	return UAndroidXRFaceTrackingSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRFaceTrackingSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* AndroidXR Face Tracking Subsystem\n*/" },
#endif
		{ "IncludePath", "Components/AndroidXRFaceTrackingSubsystem.h" },
		{ "ModuleRelativePath", "Public/Components/AndroidXRFaceTrackingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AndroidXR Face Tracking Subsystem" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidXRFaceTrackingSubsystem_GetTrackedData, "GetTrackedData" }, // 3114244730
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRFaceTrackingSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAndroidXRFaceTrackingSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAndroidXRTrackingSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRFaceTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRFaceTrackingSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRFaceTrackingSubsystem_Statics::ClassParams = {
	&UAndroidXRFaceTrackingSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRFaceTrackingSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRFaceTrackingSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRFaceTrackingSubsystem()
{
	if (!Z_Registration_Info_UClass_UAndroidXRFaceTrackingSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRFaceTrackingSubsystem.OuterSingleton, Z_Construct_UClass_UAndroidXRFaceTrackingSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRFaceTrackingSubsystem.OuterSingleton;
}
UAndroidXRFaceTrackingSubsystem::UAndroidXRFaceTrackingSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRFaceTrackingSubsystem);
UAndroidXRFaceTrackingSubsystem::~UAndroidXRFaceTrackingSubsystem() {}
// ********** End Class UAndroidXRFaceTrackingSubsystem ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRFaceTracking_Source_AndroidXRFaceTracking_Public_Components_AndroidXRFaceTrackingSubsystem_h__Script_AndroidXRFaceTracking_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXRFaceTrackingSubsystem, UAndroidXRFaceTrackingSubsystem::StaticClass, TEXT("UAndroidXRFaceTrackingSubsystem"), &Z_Registration_Info_UClass_UAndroidXRFaceTrackingSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRFaceTrackingSubsystem), 3647766796U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRFaceTracking_Source_AndroidXRFaceTracking_Public_Components_AndroidXRFaceTrackingSubsystem_h__Script_AndroidXRFaceTracking_701428331(TEXT("/Script/AndroidXRFaceTracking"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRFaceTracking_Source_AndroidXRFaceTracking_Public_Components_AndroidXRFaceTrackingSubsystem_h__Script_AndroidXRFaceTracking_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRFaceTracking_Source_AndroidXRFaceTracking_Public_Components_AndroidXRFaceTrackingSubsystem_h__Script_AndroidXRFaceTracking_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
