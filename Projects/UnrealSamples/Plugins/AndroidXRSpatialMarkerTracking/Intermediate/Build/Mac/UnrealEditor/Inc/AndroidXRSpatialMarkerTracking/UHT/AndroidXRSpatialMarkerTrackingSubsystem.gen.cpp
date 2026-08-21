// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRSpatialMarkerTrackingSubsystem.h"
#include "AndroidXRSpatialMarkerTrackingTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRSpatialMarkerTrackingSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXRSPATIALENTITIES_API UClass* Z_Construct_UClass_UAndroidXRSpatialEntitiesSubsystem();
ANDROIDXRSPATIALMARKERTRACKING_API UClass* Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_NoRegister();
ANDROIDXRSPATIALMARKERTRACKING_API UClass* Z_Construct_UClass_UAndroidXRSpatialMarkerTrackingSubsystem();
ANDROIDXRSPATIALMARKERTRACKING_API UClass* Z_Construct_UClass_UAndroidXRSpatialMarkerTrackingSubsystem_NoRegister();
ANDROIDXRSPATIALMARKERTRACKING_API UFunction* Z_Construct_UDelegateFunction_AndroidXRSpatialMarkerTracking_OnSpatialMarkerChangedDelegate__DelegateSignature();
ANDROIDXRSPATIALMARKERTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FSpatialMarkerTrackingConfig();
UPackage* Z_Construct_UPackage__Script_AndroidXRSpatialMarkerTracking();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAndroidXRSpatialMarkerTrackingSubsystem Function ConfigureMarkerTracking 
struct Z_Construct_UFunction_UAndroidXRSpatialMarkerTrackingSubsystem_ConfigureMarkerTracking_Statics
{
	struct AndroidXRSpatialMarkerTrackingSubsystem_eventConfigureMarkerTracking_Parms
	{
		FSpatialMarkerTrackingConfig MarkerTrackingConfig;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Spatial Marker Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Configures the marker tracking subsystem\n    * @param[in] The marker tracking configuration\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkerTrackingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configures the marker tracking subsystem\n@param[in] The marker tracking configuration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerTrackingConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MarkerTrackingConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRSpatialMarkerTrackingSubsystem_ConfigureMarkerTracking_Statics::NewProp_MarkerTrackingConfig = { "MarkerTrackingConfig", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRSpatialMarkerTrackingSubsystem_eventConfigureMarkerTracking_Parms, MarkerTrackingConfig), Z_Construct_UScriptStruct_FSpatialMarkerTrackingConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerTrackingConfig_MetaData), NewProp_MarkerTrackingConfig_MetaData) }; // 3845565288
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRSpatialMarkerTrackingSubsystem_ConfigureMarkerTracking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialMarkerTrackingSubsystem_ConfigureMarkerTracking_Statics::NewProp_MarkerTrackingConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialMarkerTrackingSubsystem_ConfigureMarkerTracking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSpatialMarkerTrackingSubsystem_ConfigureMarkerTracking_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSpatialMarkerTrackingSubsystem, nullptr, "ConfigureMarkerTracking", Z_Construct_UFunction_UAndroidXRSpatialMarkerTrackingSubsystem_ConfigureMarkerTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialMarkerTrackingSubsystem_ConfigureMarkerTracking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRSpatialMarkerTrackingSubsystem_ConfigureMarkerTracking_Statics::AndroidXRSpatialMarkerTrackingSubsystem_eventConfigureMarkerTracking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialMarkerTrackingSubsystem_ConfigureMarkerTracking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSpatialMarkerTrackingSubsystem_ConfigureMarkerTracking_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRSpatialMarkerTrackingSubsystem_ConfigureMarkerTracking_Statics::AndroidXRSpatialMarkerTrackingSubsystem_eventConfigureMarkerTracking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRSpatialMarkerTrackingSubsystem_ConfigureMarkerTracking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSpatialMarkerTrackingSubsystem_ConfigureMarkerTracking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSpatialMarkerTrackingSubsystem::execConfigureMarkerTracking)
{
	P_GET_STRUCT_REF(FSpatialMarkerTrackingConfig,Z_Param_Out_MarkerTrackingConfig);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConfigureMarkerTracking(Z_Param_Out_MarkerTrackingConfig);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSpatialMarkerTrackingSubsystem Function ConfigureMarkerTracking **

// ********** Begin Class UAndroidXRSpatialMarkerTrackingSubsystem Function GetTrackedMarkers ******
struct Z_Construct_UFunction_UAndroidXRSpatialMarkerTrackingSubsystem_GetTrackedMarkers_Statics
{
	struct AndroidXRSpatialMarkerTrackingSubsystem_eventGetTrackedMarkers_Parms
	{
		TArray<UAndroidXRSpatialMarkerEntity*> TrackedMarkers;
		bool bShouldUpdate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Spatial Marker Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Gets the currently tracked markerszs\n    * @param[out] Array of tracked markers\n    * @param[in] Whether to force an update before populating the tracked markers array\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkerTrackingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the currently tracked markerszs\n@param[out] Array of tracked markers\n@param[in] Whether to force an update before populating the tracked markers array" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackedMarkers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackedMarkers;
	static void NewProp_bShouldUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldUpdate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAndroidXRSpatialMarkerTrackingSubsystem_GetTrackedMarkers_Statics::NewProp_TrackedMarkers_Inner = { "TrackedMarkers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAndroidXRSpatialMarkerTrackingSubsystem_GetTrackedMarkers_Statics::NewProp_TrackedMarkers = { "TrackedMarkers", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRSpatialMarkerTrackingSubsystem_eventGetTrackedMarkers_Parms, TrackedMarkers), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAndroidXRSpatialMarkerTrackingSubsystem_GetTrackedMarkers_Statics::NewProp_bShouldUpdate_SetBit(void* Obj)
{
	((AndroidXRSpatialMarkerTrackingSubsystem_eventGetTrackedMarkers_Parms*)Obj)->bShouldUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRSpatialMarkerTrackingSubsystem_GetTrackedMarkers_Statics::NewProp_bShouldUpdate = { "bShouldUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRSpatialMarkerTrackingSubsystem_eventGetTrackedMarkers_Parms), &Z_Construct_UFunction_UAndroidXRSpatialMarkerTrackingSubsystem_GetTrackedMarkers_Statics::NewProp_bShouldUpdate_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRSpatialMarkerTrackingSubsystem_GetTrackedMarkers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialMarkerTrackingSubsystem_GetTrackedMarkers_Statics::NewProp_TrackedMarkers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialMarkerTrackingSubsystem_GetTrackedMarkers_Statics::NewProp_TrackedMarkers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialMarkerTrackingSubsystem_GetTrackedMarkers_Statics::NewProp_bShouldUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialMarkerTrackingSubsystem_GetTrackedMarkers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSpatialMarkerTrackingSubsystem_GetTrackedMarkers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSpatialMarkerTrackingSubsystem, nullptr, "GetTrackedMarkers", Z_Construct_UFunction_UAndroidXRSpatialMarkerTrackingSubsystem_GetTrackedMarkers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialMarkerTrackingSubsystem_GetTrackedMarkers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRSpatialMarkerTrackingSubsystem_GetTrackedMarkers_Statics::AndroidXRSpatialMarkerTrackingSubsystem_eventGetTrackedMarkers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialMarkerTrackingSubsystem_GetTrackedMarkers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSpatialMarkerTrackingSubsystem_GetTrackedMarkers_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRSpatialMarkerTrackingSubsystem_GetTrackedMarkers_Statics::AndroidXRSpatialMarkerTrackingSubsystem_eventGetTrackedMarkers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRSpatialMarkerTrackingSubsystem_GetTrackedMarkers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSpatialMarkerTrackingSubsystem_GetTrackedMarkers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSpatialMarkerTrackingSubsystem::execGetTrackedMarkers)
{
	P_GET_TARRAY_REF(UAndroidXRSpatialMarkerEntity*,Z_Param_Out_TrackedMarkers);
	P_GET_UBOOL(Z_Param_bShouldUpdate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetTrackedMarkers(Z_Param_Out_TrackedMarkers,Z_Param_bShouldUpdate);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSpatialMarkerTrackingSubsystem Function GetTrackedMarkers ********

// ********** Begin Class UAndroidXRSpatialMarkerTrackingSubsystem *********************************
void UAndroidXRSpatialMarkerTrackingSubsystem::StaticRegisterNativesUAndroidXRSpatialMarkerTrackingSubsystem()
{
	UClass* Class = UAndroidXRSpatialMarkerTrackingSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConfigureMarkerTracking", &UAndroidXRSpatialMarkerTrackingSubsystem::execConfigureMarkerTracking },
		{ "GetTrackedMarkers", &UAndroidXRSpatialMarkerTrackingSubsystem::execGetTrackedMarkers },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRSpatialMarkerTrackingSubsystem;
UClass* UAndroidXRSpatialMarkerTrackingSubsystem::GetPrivateStaticClass()
{
	using TClass = UAndroidXRSpatialMarkerTrackingSubsystem;
	if (!Z_Registration_Info_UClass_UAndroidXRSpatialMarkerTrackingSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRSpatialMarkerTrackingSubsystem"),
			Z_Registration_Info_UClass_UAndroidXRSpatialMarkerTrackingSubsystem.InnerSingleton,
			StaticRegisterNativesUAndroidXRSpatialMarkerTrackingSubsystem,
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
	return Z_Registration_Info_UClass_UAndroidXRSpatialMarkerTrackingSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRSpatialMarkerTrackingSubsystem_NoRegister()
{
	return UAndroidXRSpatialMarkerTrackingSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRSpatialMarkerTrackingSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The marker tracking subsystem\n */" },
#endif
		{ "IncludePath", "AndroidXRSpatialMarkerTrackingSubsystem.h" },
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkerTrackingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The marker tracking subsystem" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSpatialMarkerAdded_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Marker Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The callback for when a marker is added by the runtime\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkerTrackingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The callback for when a marker is added by the runtime" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSpatialMarkerRemoved_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Marker Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The callback for when a marker is removed by the runtime\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkerTrackingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The callback for when a marker is removed by the runtime" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSpatialMarkerAdded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSpatialMarkerRemoved;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidXRSpatialMarkerTrackingSubsystem_ConfigureMarkerTracking, "ConfigureMarkerTracking" }, // 389254928
		{ &Z_Construct_UFunction_UAndroidXRSpatialMarkerTrackingSubsystem_GetTrackedMarkers, "GetTrackedMarkers" }, // 1463858216
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRSpatialMarkerTrackingSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAndroidXRSpatialMarkerTrackingSubsystem_Statics::NewProp_OnSpatialMarkerAdded = { "OnSpatialMarkerAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialMarkerTrackingSubsystem, OnSpatialMarkerAdded), Z_Construct_UDelegateFunction_AndroidXRSpatialMarkerTracking_OnSpatialMarkerChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSpatialMarkerAdded_MetaData), NewProp_OnSpatialMarkerAdded_MetaData) }; // 3454811792
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAndroidXRSpatialMarkerTrackingSubsystem_Statics::NewProp_OnSpatialMarkerRemoved = { "OnSpatialMarkerRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialMarkerTrackingSubsystem, OnSpatialMarkerRemoved), Z_Construct_UDelegateFunction_AndroidXRSpatialMarkerTracking_OnSpatialMarkerChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSpatialMarkerRemoved_MetaData), NewProp_OnSpatialMarkerRemoved_MetaData) }; // 3454811792
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidXRSpatialMarkerTrackingSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialMarkerTrackingSubsystem_Statics::NewProp_OnSpatialMarkerAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialMarkerTrackingSubsystem_Statics::NewProp_OnSpatialMarkerRemoved,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialMarkerTrackingSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAndroidXRSpatialMarkerTrackingSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAndroidXRSpatialEntitiesSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRSpatialMarkerTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialMarkerTrackingSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRSpatialMarkerTrackingSubsystem_Statics::ClassParams = {
	&UAndroidXRSpatialMarkerTrackingSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAndroidXRSpatialMarkerTrackingSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialMarkerTrackingSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialMarkerTrackingSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRSpatialMarkerTrackingSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRSpatialMarkerTrackingSubsystem()
{
	if (!Z_Registration_Info_UClass_UAndroidXRSpatialMarkerTrackingSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRSpatialMarkerTrackingSubsystem.OuterSingleton, Z_Construct_UClass_UAndroidXRSpatialMarkerTrackingSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRSpatialMarkerTrackingSubsystem.OuterSingleton;
}
UAndroidXRSpatialMarkerTrackingSubsystem::UAndroidXRSpatialMarkerTrackingSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRSpatialMarkerTrackingSubsystem);
UAndroidXRSpatialMarkerTrackingSubsystem::~UAndroidXRSpatialMarkerTrackingSubsystem() {}
// ********** End Class UAndroidXRSpatialMarkerTrackingSubsystem ***********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialMarkerTracking_Source_AndroidXRSpatialMarkerTracking_Public_AndroidXRSpatialMarkerTrackingSubsystem_h__Script_AndroidXRSpatialMarkerTracking_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXRSpatialMarkerTrackingSubsystem, UAndroidXRSpatialMarkerTrackingSubsystem::StaticClass, TEXT("UAndroidXRSpatialMarkerTrackingSubsystem"), &Z_Registration_Info_UClass_UAndroidXRSpatialMarkerTrackingSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRSpatialMarkerTrackingSubsystem), 3824281460U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialMarkerTracking_Source_AndroidXRSpatialMarkerTracking_Public_AndroidXRSpatialMarkerTrackingSubsystem_h__Script_AndroidXRSpatialMarkerTracking_3295794932(TEXT("/Script/AndroidXRSpatialMarkerTracking"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialMarkerTracking_Source_AndroidXRSpatialMarkerTracking_Public_AndroidXRSpatialMarkerTrackingSubsystem_h__Script_AndroidXRSpatialMarkerTracking_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialMarkerTracking_Source_AndroidXRSpatialMarkerTracking_Public_AndroidXRSpatialMarkerTrackingSubsystem_h__Script_AndroidXRSpatialMarkerTracking_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
