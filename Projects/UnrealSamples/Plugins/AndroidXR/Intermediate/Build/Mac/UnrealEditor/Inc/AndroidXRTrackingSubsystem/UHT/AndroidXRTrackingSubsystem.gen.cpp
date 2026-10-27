// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRTrackingSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRTrackingSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXRTRACKINGSUBSYSTEM_API UClass* Z_Construct_UClass_UAndroidXRTrackingSubsystem();
ANDROIDXRTRACKINGSUBSYSTEM_API UClass* Z_Construct_UClass_UAndroidXRTrackingSubsystem_NoRegister();
ANDROIDXRTRACKINGSUBSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AndroidXRTrackingSubsystem_OnTrackerCreated__DelegateSignature();
ANDROIDXRTRACKINGSUBSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AndroidXRTrackingSubsystem_OnTrackerDestroyed__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
UPackage* Z_Construct_UPackage__Script_AndroidXRTrackingSubsystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnTrackerCreated *****************************************************
struct Z_Construct_UDelegateFunction_AndroidXRTrackingSubsystem_OnTrackerCreated__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AndroidXRTrackingSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AndroidXRTrackingSubsystem_OnTrackerCreated__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AndroidXRTrackingSubsystem, nullptr, "OnTrackerCreated__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRTrackingSubsystem_OnTrackerCreated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AndroidXRTrackingSubsystem_OnTrackerCreated__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_AndroidXRTrackingSubsystem_OnTrackerCreated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AndroidXRTrackingSubsystem_OnTrackerCreated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTrackerCreated_DelegateWrapper(const FMulticastScriptDelegate& OnTrackerCreated)
{
	OnTrackerCreated.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnTrackerCreated *******************************************************

// ********** Begin Delegate FOnTrackerDestroyed ***************************************************
struct Z_Construct_UDelegateFunction_AndroidXRTrackingSubsystem_OnTrackerDestroyed__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AndroidXRTrackingSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AndroidXRTrackingSubsystem_OnTrackerDestroyed__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AndroidXRTrackingSubsystem, nullptr, "OnTrackerDestroyed__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRTrackingSubsystem_OnTrackerDestroyed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AndroidXRTrackingSubsystem_OnTrackerDestroyed__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_AndroidXRTrackingSubsystem_OnTrackerDestroyed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AndroidXRTrackingSubsystem_OnTrackerDestroyed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTrackerDestroyed_DelegateWrapper(const FMulticastScriptDelegate& OnTrackerDestroyed)
{
	OnTrackerDestroyed.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnTrackerDestroyed *****************************************************

// ********** Begin Class UAndroidXRTrackingSubsystem Function IsTracking **************************
struct Z_Construct_UFunction_UAndroidXRTrackingSubsystem_IsTracking_Statics
{
	struct AndroidXRTrackingSubsystem_eventIsTracking_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Tracking Subsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Stop tracking the associated feature\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTrackingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop tracking the associated feature" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAndroidXRTrackingSubsystem_IsTracking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRTrackingSubsystem_eventIsTracking_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRTrackingSubsystem_IsTracking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRTrackingSubsystem_eventIsTracking_Parms), &Z_Construct_UFunction_UAndroidXRTrackingSubsystem_IsTracking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRTrackingSubsystem_IsTracking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRTrackingSubsystem_IsTracking_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackingSubsystem_IsTracking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRTrackingSubsystem_IsTracking_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRTrackingSubsystem, nullptr, "IsTracking", Z_Construct_UFunction_UAndroidXRTrackingSubsystem_IsTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackingSubsystem_IsTracking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRTrackingSubsystem_IsTracking_Statics::AndroidXRTrackingSubsystem_eventIsTracking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackingSubsystem_IsTracking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRTrackingSubsystem_IsTracking_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRTrackingSubsystem_IsTracking_Statics::AndroidXRTrackingSubsystem_eventIsTracking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRTrackingSubsystem_IsTracking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRTrackingSubsystem_IsTracking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRTrackingSubsystem::execIsTracking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsTracking();
	P_NATIVE_END;
}
// ********** End Class UAndroidXRTrackingSubsystem Function IsTracking ****************************

// ********** Begin Class UAndroidXRTrackingSubsystem Function StartTracking ***********************
struct Z_Construct_UFunction_UAndroidXRTrackingSubsystem_StartTracking_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Tracking Subsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Start tracking the associated feature\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTrackingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start tracking the associated feature" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRTrackingSubsystem_StartTracking_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRTrackingSubsystem, nullptr, "StartTracking", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackingSubsystem_StartTracking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRTrackingSubsystem_StartTracking_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAndroidXRTrackingSubsystem_StartTracking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRTrackingSubsystem_StartTracking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRTrackingSubsystem::execStartTracking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartTracking();
	P_NATIVE_END;
}
// ********** End Class UAndroidXRTrackingSubsystem Function StartTracking *************************

// ********** Begin Class UAndroidXRTrackingSubsystem Function StopTracking ************************
struct Z_Construct_UFunction_UAndroidXRTrackingSubsystem_StopTracking_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Tracking Subsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Stop tracking the associated feature\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTrackingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop tracking the associated feature" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRTrackingSubsystem_StopTracking_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRTrackingSubsystem, nullptr, "StopTracking", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRTrackingSubsystem_StopTracking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRTrackingSubsystem_StopTracking_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAndroidXRTrackingSubsystem_StopTracking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRTrackingSubsystem_StopTracking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRTrackingSubsystem::execStopTracking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopTracking();
	P_NATIVE_END;
}
// ********** End Class UAndroidXRTrackingSubsystem Function StopTracking **************************

// ********** Begin Class UAndroidXRTrackingSubsystem **********************************************
void UAndroidXRTrackingSubsystem::StaticRegisterNativesUAndroidXRTrackingSubsystem()
{
	UClass* Class = UAndroidXRTrackingSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsTracking", &UAndroidXRTrackingSubsystem::execIsTracking },
		{ "StartTracking", &UAndroidXRTrackingSubsystem::execStartTracking },
		{ "StopTracking", &UAndroidXRTrackingSubsystem::execStopTracking },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRTrackingSubsystem;
UClass* UAndroidXRTrackingSubsystem::GetPrivateStaticClass()
{
	using TClass = UAndroidXRTrackingSubsystem;
	if (!Z_Registration_Info_UClass_UAndroidXRTrackingSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRTrackingSubsystem"),
			Z_Registration_Info_UClass_UAndroidXRTrackingSubsystem.InnerSingleton,
			StaticRegisterNativesUAndroidXRTrackingSubsystem,
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
	return Z_Registration_Info_UClass_UAndroidXRTrackingSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRTrackingSubsystem_NoRegister()
{
	return UAndroidXRTrackingSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRTrackingSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* The base class for all AndroidXR tracking subsystems.\n*/" },
#endif
		{ "IncludePath", "AndroidXRTrackingSubsystem.h" },
		{ "ModuleRelativePath", "Public/AndroidXRTrackingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The base class for all AndroidXR tracking subsystems." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTrackingStarted_MetaData[] = {
		{ "Category", "AndroidXR|Tracking Subsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The callback for when the system has started tracking\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTrackingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The callback for when the system has started tracking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTrackingStopped_MetaData[] = {
		{ "Category", "AndroidXR|Tracking Subsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The callback for when the underlying tracker is destroyed\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTrackingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The callback for when the underlying tracker is destroyed" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTrackingStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTrackingStopped;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidXRTrackingSubsystem_IsTracking, "IsTracking" }, // 992139602
		{ &Z_Construct_UFunction_UAndroidXRTrackingSubsystem_StartTracking, "StartTracking" }, // 1282445035
		{ &Z_Construct_UFunction_UAndroidXRTrackingSubsystem_StopTracking, "StopTracking" }, // 1862817445
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRTrackingSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAndroidXRTrackingSubsystem_Statics::NewProp_OnTrackingStarted = { "OnTrackingStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRTrackingSubsystem, OnTrackingStarted), Z_Construct_UDelegateFunction_AndroidXRTrackingSubsystem_OnTrackerCreated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTrackingStarted_MetaData), NewProp_OnTrackingStarted_MetaData) }; // 3289286583
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAndroidXRTrackingSubsystem_Statics::NewProp_OnTrackingStopped = { "OnTrackingStopped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRTrackingSubsystem, OnTrackingStopped), Z_Construct_UDelegateFunction_AndroidXRTrackingSubsystem_OnTrackerDestroyed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTrackingStopped_MetaData), NewProp_OnTrackingStopped_MetaData) }; // 2769598039
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidXRTrackingSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRTrackingSubsystem_Statics::NewProp_OnTrackingStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRTrackingSubsystem_Statics::NewProp_OnTrackingStopped,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRTrackingSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAndroidXRTrackingSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRTrackingSubsystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRTrackingSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRTrackingSubsystem_Statics::ClassParams = {
	&UAndroidXRTrackingSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAndroidXRTrackingSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRTrackingSubsystem_Statics::PropPointers),
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRTrackingSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRTrackingSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRTrackingSubsystem()
{
	if (!Z_Registration_Info_UClass_UAndroidXRTrackingSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRTrackingSubsystem.OuterSingleton, Z_Construct_UClass_UAndroidXRTrackingSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRTrackingSubsystem.OuterSingleton;
}
UAndroidXRTrackingSubsystem::UAndroidXRTrackingSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRTrackingSubsystem);
UAndroidXRTrackingSubsystem::~UAndroidXRTrackingSubsystem() {}
// ********** End Class UAndroidXRTrackingSubsystem ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXRTrackingSubsystem_Public_AndroidXRTrackingSubsystem_h__Script_AndroidXRTrackingSubsystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXRTrackingSubsystem, UAndroidXRTrackingSubsystem::StaticClass, TEXT("UAndroidXRTrackingSubsystem"), &Z_Registration_Info_UClass_UAndroidXRTrackingSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRTrackingSubsystem), 1946576663U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXRTrackingSubsystem_Public_AndroidXRTrackingSubsystem_h__Script_AndroidXRTrackingSubsystem_299334031(TEXT("/Script/AndroidXRTrackingSubsystem"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXRTrackingSubsystem_Public_AndroidXRTrackingSubsystem_h__Script_AndroidXRTrackingSubsystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXRTrackingSubsystem_Public_AndroidXRTrackingSubsystem_h__Script_AndroidXRTrackingSubsystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
