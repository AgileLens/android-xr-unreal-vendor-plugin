// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRSpatialPlanesNotifierComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRSpatialPlanesNotifierComponent() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXRSPATIALENTITIES_API UClass* Z_Construct_UClass_UAndroidXRSpatialComponentBase();
ANDROIDXRSPATIALPLANETRACKING_API UClass* Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_NoRegister();
ANDROIDXRSPATIALPLANETRACKING_API UClass* Z_Construct_UClass_UAndroidXRSpatialPlanesNotifierComponent();
ANDROIDXRSPATIALPLANETRACKING_API UClass* Z_Construct_UClass_UAndroidXRSpatialPlanesNotifierComponent_NoRegister();
ANDROIDXRSPATIALPLANETRACKING_API UFunction* Z_Construct_UDelegateFunction_AndroidXRSpatialPlaneTracking_SpatialPlaneChangedDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_AndroidXRSpatialPlaneTracking();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAndroidXRSpatialPlanesNotifierComponent Function PlaneAddedHandler ******
struct Z_Construct_UFunction_UAndroidXRSpatialPlanesNotifierComponent_PlaneAddedHandler_Statics
{
	struct AndroidXRSpatialPlanesNotifierComponent_eventPlaneAddedHandler_Parms
	{
		UAndroidXRSpatialPlaneEntity* AddedPlane;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AndroidXRSpatialPlanesNotifierComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AddedPlane;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAndroidXRSpatialPlanesNotifierComponent_PlaneAddedHandler_Statics::NewProp_AddedPlane = { "AddedPlane", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRSpatialPlanesNotifierComponent_eventPlaneAddedHandler_Parms, AddedPlane), Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRSpatialPlanesNotifierComponent_PlaneAddedHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialPlanesNotifierComponent_PlaneAddedHandler_Statics::NewProp_AddedPlane,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialPlanesNotifierComponent_PlaneAddedHandler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSpatialPlanesNotifierComponent_PlaneAddedHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSpatialPlanesNotifierComponent, nullptr, "PlaneAddedHandler", Z_Construct_UFunction_UAndroidXRSpatialPlanesNotifierComponent_PlaneAddedHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialPlanesNotifierComponent_PlaneAddedHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRSpatialPlanesNotifierComponent_PlaneAddedHandler_Statics::AndroidXRSpatialPlanesNotifierComponent_eventPlaneAddedHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialPlanesNotifierComponent_PlaneAddedHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSpatialPlanesNotifierComponent_PlaneAddedHandler_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRSpatialPlanesNotifierComponent_PlaneAddedHandler_Statics::AndroidXRSpatialPlanesNotifierComponent_eventPlaneAddedHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRSpatialPlanesNotifierComponent_PlaneAddedHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSpatialPlanesNotifierComponent_PlaneAddedHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSpatialPlanesNotifierComponent::execPlaneAddedHandler)
{
	P_GET_OBJECT(UAndroidXRSpatialPlaneEntity,Z_Param_AddedPlane);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlaneAddedHandler(Z_Param_AddedPlane);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSpatialPlanesNotifierComponent Function PlaneAddedHandler ********

// ********** Begin Class UAndroidXRSpatialPlanesNotifierComponent Function PlaneRemovedHandler ****
struct Z_Construct_UFunction_UAndroidXRSpatialPlanesNotifierComponent_PlaneRemovedHandler_Statics
{
	struct AndroidXRSpatialPlanesNotifierComponent_eventPlaneRemovedHandler_Parms
	{
		UAndroidXRSpatialPlaneEntity* RemovedPlane;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AndroidXRSpatialPlanesNotifierComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RemovedPlane;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAndroidXRSpatialPlanesNotifierComponent_PlaneRemovedHandler_Statics::NewProp_RemovedPlane = { "RemovedPlane", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRSpatialPlanesNotifierComponent_eventPlaneRemovedHandler_Parms, RemovedPlane), Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRSpatialPlanesNotifierComponent_PlaneRemovedHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialPlanesNotifierComponent_PlaneRemovedHandler_Statics::NewProp_RemovedPlane,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialPlanesNotifierComponent_PlaneRemovedHandler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSpatialPlanesNotifierComponent_PlaneRemovedHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSpatialPlanesNotifierComponent, nullptr, "PlaneRemovedHandler", Z_Construct_UFunction_UAndroidXRSpatialPlanesNotifierComponent_PlaneRemovedHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialPlanesNotifierComponent_PlaneRemovedHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRSpatialPlanesNotifierComponent_PlaneRemovedHandler_Statics::AndroidXRSpatialPlanesNotifierComponent_eventPlaneRemovedHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialPlanesNotifierComponent_PlaneRemovedHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSpatialPlanesNotifierComponent_PlaneRemovedHandler_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRSpatialPlanesNotifierComponent_PlaneRemovedHandler_Statics::AndroidXRSpatialPlanesNotifierComponent_eventPlaneRemovedHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRSpatialPlanesNotifierComponent_PlaneRemovedHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSpatialPlanesNotifierComponent_PlaneRemovedHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSpatialPlanesNotifierComponent::execPlaneRemovedHandler)
{
	P_GET_OBJECT(UAndroidXRSpatialPlaneEntity,Z_Param_RemovedPlane);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlaneRemovedHandler(Z_Param_RemovedPlane);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSpatialPlanesNotifierComponent Function PlaneRemovedHandler ******

// ********** Begin Class UAndroidXRSpatialPlanesNotifierComponent *********************************
void UAndroidXRSpatialPlanesNotifierComponent::StaticRegisterNativesUAndroidXRSpatialPlanesNotifierComponent()
{
	UClass* Class = UAndroidXRSpatialPlanesNotifierComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PlaneAddedHandler", &UAndroidXRSpatialPlanesNotifierComponent::execPlaneAddedHandler },
		{ "PlaneRemovedHandler", &UAndroidXRSpatialPlanesNotifierComponent::execPlaneRemovedHandler },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRSpatialPlanesNotifierComponent;
UClass* UAndroidXRSpatialPlanesNotifierComponent::GetPrivateStaticClass()
{
	using TClass = UAndroidXRSpatialPlanesNotifierComponent;
	if (!Z_Registration_Info_UClass_UAndroidXRSpatialPlanesNotifierComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRSpatialPlanesNotifierComponent"),
			Z_Registration_Info_UClass_UAndroidXRSpatialPlanesNotifierComponent.InnerSingleton,
			StaticRegisterNativesUAndroidXRSpatialPlanesNotifierComponent,
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
	return Z_Registration_Info_UClass_UAndroidXRSpatialPlanesNotifierComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRSpatialPlanesNotifierComponent_NoRegister()
{
	return UAndroidXRSpatialPlanesNotifierComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRSpatialPlanesNotifierComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* The plane tracking component that keeps track of spatial planes tracked by the runtime\n*/" },
#endif
		{ "IncludePath", "AndroidXRSpatialPlanesNotifierComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AndroidXRSpatialPlanesNotifierComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The plane tracking component that keeps track of spatial planes tracked by the runtime" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlaneAdded_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Plane Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The callback for when a spatial plane is added\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialPlanesNotifierComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The callback for when a spatial plane is added" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlaneRemoved_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Plane Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The callback for when a spatial plane is removed\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialPlanesNotifierComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The callback for when a spatial plane is removed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackedPlanes_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Plane Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The planes being currently tracked\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialPlanesNotifierComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The planes being currently tracked" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlaneAdded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlaneRemoved;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackedPlanes_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_TrackedPlanes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidXRSpatialPlanesNotifierComponent_PlaneAddedHandler, "PlaneAddedHandler" }, // 540428149
		{ &Z_Construct_UFunction_UAndroidXRSpatialPlanesNotifierComponent_PlaneRemovedHandler, "PlaneRemovedHandler" }, // 3771098046
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRSpatialPlanesNotifierComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAndroidXRSpatialPlanesNotifierComponent_Statics::NewProp_OnPlaneAdded = { "OnPlaneAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialPlanesNotifierComponent, OnPlaneAdded), Z_Construct_UDelegateFunction_AndroidXRSpatialPlaneTracking_SpatialPlaneChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlaneAdded_MetaData), NewProp_OnPlaneAdded_MetaData) }; // 3953990663
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAndroidXRSpatialPlanesNotifierComponent_Statics::NewProp_OnPlaneRemoved = { "OnPlaneRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialPlanesNotifierComponent, OnPlaneRemoved), Z_Construct_UDelegateFunction_AndroidXRSpatialPlaneTracking_SpatialPlaneChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlaneRemoved_MetaData), NewProp_OnPlaneRemoved_MetaData) }; // 3953990663
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAndroidXRSpatialPlanesNotifierComponent_Statics::NewProp_TrackedPlanes_ElementProp = { "TrackedPlanes", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAndroidXRSpatialPlanesNotifierComponent_Statics::NewProp_TrackedPlanes = { "TrackedPlanes", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialPlanesNotifierComponent, TrackedPlanes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackedPlanes_MetaData), NewProp_TrackedPlanes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidXRSpatialPlanesNotifierComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialPlanesNotifierComponent_Statics::NewProp_OnPlaneAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialPlanesNotifierComponent_Statics::NewProp_OnPlaneRemoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialPlanesNotifierComponent_Statics::NewProp_TrackedPlanes_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialPlanesNotifierComponent_Statics::NewProp_TrackedPlanes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialPlanesNotifierComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAndroidXRSpatialPlanesNotifierComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAndroidXRSpatialComponentBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRSpatialPlaneTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialPlanesNotifierComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRSpatialPlanesNotifierComponent_Statics::ClassParams = {
	&UAndroidXRSpatialPlanesNotifierComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAndroidXRSpatialPlanesNotifierComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialPlanesNotifierComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialPlanesNotifierComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRSpatialPlanesNotifierComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRSpatialPlanesNotifierComponent()
{
	if (!Z_Registration_Info_UClass_UAndroidXRSpatialPlanesNotifierComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRSpatialPlanesNotifierComponent.OuterSingleton, Z_Construct_UClass_UAndroidXRSpatialPlanesNotifierComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRSpatialPlanesNotifierComponent.OuterSingleton;
}
UAndroidXRSpatialPlanesNotifierComponent::UAndroidXRSpatialPlanesNotifierComponent() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRSpatialPlanesNotifierComponent);
UAndroidXRSpatialPlanesNotifierComponent::~UAndroidXRSpatialPlanesNotifierComponent() {}
// ********** End Class UAndroidXRSpatialPlanesNotifierComponent ***********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialPlaneTracking_Source_AndroidXRSpatialPlaneTracking_Public_AndroidXRSpatialPlanesNotifierComponent_h__Script_AndroidXRSpatialPlaneTracking_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXRSpatialPlanesNotifierComponent, UAndroidXRSpatialPlanesNotifierComponent::StaticClass, TEXT("UAndroidXRSpatialPlanesNotifierComponent"), &Z_Registration_Info_UClass_UAndroidXRSpatialPlanesNotifierComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRSpatialPlanesNotifierComponent), 122077828U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialPlaneTracking_Source_AndroidXRSpatialPlaneTracking_Public_AndroidXRSpatialPlanesNotifierComponent_h__Script_AndroidXRSpatialPlaneTracking_2529600680(TEXT("/Script/AndroidXRSpatialPlaneTracking"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialPlaneTracking_Source_AndroidXRSpatialPlaneTracking_Public_AndroidXRSpatialPlanesNotifierComponent_h__Script_AndroidXRSpatialPlaneTracking_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialPlaneTracking_Source_AndroidXRSpatialPlaneTracking_Public_AndroidXRSpatialPlanesNotifierComponent_h__Script_AndroidXRSpatialPlaneTracking_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
