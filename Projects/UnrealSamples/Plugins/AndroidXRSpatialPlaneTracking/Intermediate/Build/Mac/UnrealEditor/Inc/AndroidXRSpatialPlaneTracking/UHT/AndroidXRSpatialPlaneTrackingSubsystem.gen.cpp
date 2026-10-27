// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRSpatialPlaneTrackingSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRSpatialPlaneTrackingSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXRSPATIALENTITIES_API UClass* Z_Construct_UClass_UAndroidXRSpatialEntitiesSubsystem();
ANDROIDXRSPATIALPLANETRACKING_API UClass* Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_NoRegister();
ANDROIDXRSPATIALPLANETRACKING_API UClass* Z_Construct_UClass_UAndroidXRSpatialPlaneTrackingSubsystem();
ANDROIDXRSPATIALPLANETRACKING_API UClass* Z_Construct_UClass_UAndroidXRSpatialPlaneTrackingSubsystem_NoRegister();
ANDROIDXRSPATIALPLANETRACKING_API UFunction* Z_Construct_UDelegateFunction_AndroidXRSpatialPlaneTracking_SpatialPlaneChangedDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_AndroidXRSpatialPlaneTracking();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAndroidXRSpatialPlaneTrackingSubsystem Function GetTrackedPlanes ********
struct Z_Construct_UFunction_UAndroidXRSpatialPlaneTrackingSubsystem_GetTrackedPlanes_Statics
{
	struct AndroidXRSpatialPlaneTrackingSubsystem_eventGetTrackedPlanes_Parms
	{
		TArray<UAndroidXRSpatialPlaneEntity*> TrackedPlanes;
		bool bShouldUpdate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Spatial Plane Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Get the planes being currently tracked\n    * @param[out] The tracked planes\n    * @param[in] Whether to force an update before updating the tracked planes array\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialPlaneTrackingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the planes being currently tracked\n@param[out] The tracked planes\n@param[in] Whether to force an update before updating the tracked planes array" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackedPlanes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackedPlanes;
	static void NewProp_bShouldUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldUpdate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAndroidXRSpatialPlaneTrackingSubsystem_GetTrackedPlanes_Statics::NewProp_TrackedPlanes_Inner = { "TrackedPlanes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAndroidXRSpatialPlaneTrackingSubsystem_GetTrackedPlanes_Statics::NewProp_TrackedPlanes = { "TrackedPlanes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRSpatialPlaneTrackingSubsystem_eventGetTrackedPlanes_Parms, TrackedPlanes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAndroidXRSpatialPlaneTrackingSubsystem_GetTrackedPlanes_Statics::NewProp_bShouldUpdate_SetBit(void* Obj)
{
	((AndroidXRSpatialPlaneTrackingSubsystem_eventGetTrackedPlanes_Parms*)Obj)->bShouldUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRSpatialPlaneTrackingSubsystem_GetTrackedPlanes_Statics::NewProp_bShouldUpdate = { "bShouldUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRSpatialPlaneTrackingSubsystem_eventGetTrackedPlanes_Parms), &Z_Construct_UFunction_UAndroidXRSpatialPlaneTrackingSubsystem_GetTrackedPlanes_Statics::NewProp_bShouldUpdate_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRSpatialPlaneTrackingSubsystem_GetTrackedPlanes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialPlaneTrackingSubsystem_GetTrackedPlanes_Statics::NewProp_TrackedPlanes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialPlaneTrackingSubsystem_GetTrackedPlanes_Statics::NewProp_TrackedPlanes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialPlaneTrackingSubsystem_GetTrackedPlanes_Statics::NewProp_bShouldUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialPlaneTrackingSubsystem_GetTrackedPlanes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSpatialPlaneTrackingSubsystem_GetTrackedPlanes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSpatialPlaneTrackingSubsystem, nullptr, "GetTrackedPlanes", Z_Construct_UFunction_UAndroidXRSpatialPlaneTrackingSubsystem_GetTrackedPlanes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialPlaneTrackingSubsystem_GetTrackedPlanes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRSpatialPlaneTrackingSubsystem_GetTrackedPlanes_Statics::AndroidXRSpatialPlaneTrackingSubsystem_eventGetTrackedPlanes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialPlaneTrackingSubsystem_GetTrackedPlanes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSpatialPlaneTrackingSubsystem_GetTrackedPlanes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRSpatialPlaneTrackingSubsystem_GetTrackedPlanes_Statics::AndroidXRSpatialPlaneTrackingSubsystem_eventGetTrackedPlanes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRSpatialPlaneTrackingSubsystem_GetTrackedPlanes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSpatialPlaneTrackingSubsystem_GetTrackedPlanes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSpatialPlaneTrackingSubsystem::execGetTrackedPlanes)
{
	P_GET_TARRAY_REF(UAndroidXRSpatialPlaneEntity*,Z_Param_Out_TrackedPlanes);
	P_GET_UBOOL(Z_Param_bShouldUpdate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetTrackedPlanes(Z_Param_Out_TrackedPlanes,Z_Param_bShouldUpdate);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSpatialPlaneTrackingSubsystem Function GetTrackedPlanes **********

// ********** Begin Class UAndroidXRSpatialPlaneTrackingSubsystem **********************************
void UAndroidXRSpatialPlaneTrackingSubsystem::StaticRegisterNativesUAndroidXRSpatialPlaneTrackingSubsystem()
{
	UClass* Class = UAndroidXRSpatialPlaneTrackingSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTrackedPlanes", &UAndroidXRSpatialPlaneTrackingSubsystem::execGetTrackedPlanes },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRSpatialPlaneTrackingSubsystem;
UClass* UAndroidXRSpatialPlaneTrackingSubsystem::GetPrivateStaticClass()
{
	using TClass = UAndroidXRSpatialPlaneTrackingSubsystem;
	if (!Z_Registration_Info_UClass_UAndroidXRSpatialPlaneTrackingSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRSpatialPlaneTrackingSubsystem"),
			Z_Registration_Info_UClass_UAndroidXRSpatialPlaneTrackingSubsystem.InnerSingleton,
			StaticRegisterNativesUAndroidXRSpatialPlaneTrackingSubsystem,
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
	return Z_Registration_Info_UClass_UAndroidXRSpatialPlaneTrackingSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRSpatialPlaneTrackingSubsystem_NoRegister()
{
	return UAndroidXRSpatialPlaneTrackingSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRSpatialPlaneTrackingSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The plane tracking subsystem\n */" },
#endif
		{ "IncludePath", "AndroidXRSpatialPlaneTrackingSubsystem.h" },
		{ "ModuleRelativePath", "Public/AndroidXRSpatialPlaneTrackingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The plane tracking subsystem" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSpatialPlaneAdded_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Plane Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The callback for when a spatial plane is added\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialPlaneTrackingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The callback for when a spatial plane is added" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSpatialPlaneRemoved_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Plane Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The callback for when a spatial plane is removed\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialPlaneTrackingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The callback for when a spatial plane is removed" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSpatialPlaneAdded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSpatialPlaneRemoved;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidXRSpatialPlaneTrackingSubsystem_GetTrackedPlanes, "GetTrackedPlanes" }, // 640573140
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRSpatialPlaneTrackingSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAndroidXRSpatialPlaneTrackingSubsystem_Statics::NewProp_OnSpatialPlaneAdded = { "OnSpatialPlaneAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialPlaneTrackingSubsystem, OnSpatialPlaneAdded), Z_Construct_UDelegateFunction_AndroidXRSpatialPlaneTracking_SpatialPlaneChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSpatialPlaneAdded_MetaData), NewProp_OnSpatialPlaneAdded_MetaData) }; // 3953990663
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAndroidXRSpatialPlaneTrackingSubsystem_Statics::NewProp_OnSpatialPlaneRemoved = { "OnSpatialPlaneRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialPlaneTrackingSubsystem, OnSpatialPlaneRemoved), Z_Construct_UDelegateFunction_AndroidXRSpatialPlaneTracking_SpatialPlaneChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSpatialPlaneRemoved_MetaData), NewProp_OnSpatialPlaneRemoved_MetaData) }; // 3953990663
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidXRSpatialPlaneTrackingSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialPlaneTrackingSubsystem_Statics::NewProp_OnSpatialPlaneAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialPlaneTrackingSubsystem_Statics::NewProp_OnSpatialPlaneRemoved,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialPlaneTrackingSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAndroidXRSpatialPlaneTrackingSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAndroidXRSpatialEntitiesSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRSpatialPlaneTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialPlaneTrackingSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRSpatialPlaneTrackingSubsystem_Statics::ClassParams = {
	&UAndroidXRSpatialPlaneTrackingSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAndroidXRSpatialPlaneTrackingSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialPlaneTrackingSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialPlaneTrackingSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRSpatialPlaneTrackingSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRSpatialPlaneTrackingSubsystem()
{
	if (!Z_Registration_Info_UClass_UAndroidXRSpatialPlaneTrackingSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRSpatialPlaneTrackingSubsystem.OuterSingleton, Z_Construct_UClass_UAndroidXRSpatialPlaneTrackingSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRSpatialPlaneTrackingSubsystem.OuterSingleton;
}
UAndroidXRSpatialPlaneTrackingSubsystem::UAndroidXRSpatialPlaneTrackingSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRSpatialPlaneTrackingSubsystem);
UAndroidXRSpatialPlaneTrackingSubsystem::~UAndroidXRSpatialPlaneTrackingSubsystem() {}
// ********** End Class UAndroidXRSpatialPlaneTrackingSubsystem ************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialPlaneTracking_Source_AndroidXRSpatialPlaneTracking_Public_AndroidXRSpatialPlaneTrackingSubsystem_h__Script_AndroidXRSpatialPlaneTracking_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXRSpatialPlaneTrackingSubsystem, UAndroidXRSpatialPlaneTrackingSubsystem::StaticClass, TEXT("UAndroidXRSpatialPlaneTrackingSubsystem"), &Z_Registration_Info_UClass_UAndroidXRSpatialPlaneTrackingSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRSpatialPlaneTrackingSubsystem), 4776839U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialPlaneTracking_Source_AndroidXRSpatialPlaneTracking_Public_AndroidXRSpatialPlaneTrackingSubsystem_h__Script_AndroidXRSpatialPlaneTracking_175145439(TEXT("/Script/AndroidXRSpatialPlaneTracking"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialPlaneTracking_Source_AndroidXRSpatialPlaneTracking_Public_AndroidXRSpatialPlaneTrackingSubsystem_h__Script_AndroidXRSpatialPlaneTracking_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialPlaneTracking_Source_AndroidXRSpatialPlaneTracking_Public_AndroidXRSpatialPlaneTrackingSubsystem_h__Script_AndroidXRSpatialPlaneTracking_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
