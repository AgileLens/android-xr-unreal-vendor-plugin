// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRSpatialMarkersNotifierComponent.h"
#include "AndroidXRSpatialMarkerTrackingTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRSpatialMarkersNotifierComponent() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXRSPATIALENTITIES_API UClass* Z_Construct_UClass_UAndroidXRSpatialComponentBase();
ANDROIDXRSPATIALMARKERTRACKING_API UClass* Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_NoRegister();
ANDROIDXRSPATIALMARKERTRACKING_API UClass* Z_Construct_UClass_UAndroidXRSpatialMarkersNotifierComponent();
ANDROIDXRSPATIALMARKERTRACKING_API UClass* Z_Construct_UClass_UAndroidXRSpatialMarkersNotifierComponent_NoRegister();
ANDROIDXRSPATIALMARKERTRACKING_API UFunction* Z_Construct_UDelegateFunction_AndroidXRSpatialMarkerTracking_SpatialMarkerChangedDelegate__DelegateSignature();
ANDROIDXRSPATIALMARKERTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FSpatialMarkerTrackingConfig();
UPackage* Z_Construct_UPackage__Script_AndroidXRSpatialMarkerTracking();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAndroidXRSpatialMarkersNotifierComponent Function MarkerAddedHandler ****
struct Z_Construct_UFunction_UAndroidXRSpatialMarkersNotifierComponent_MarkerAddedHandler_Statics
{
	struct AndroidXRSpatialMarkersNotifierComponent_eventMarkerAddedHandler_Parms
	{
		UAndroidXRSpatialMarkerEntity* Marker;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkersNotifierComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Marker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAndroidXRSpatialMarkersNotifierComponent_MarkerAddedHandler_Statics::NewProp_Marker = { "Marker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRSpatialMarkersNotifierComponent_eventMarkerAddedHandler_Parms, Marker), Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRSpatialMarkersNotifierComponent_MarkerAddedHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialMarkersNotifierComponent_MarkerAddedHandler_Statics::NewProp_Marker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialMarkersNotifierComponent_MarkerAddedHandler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSpatialMarkersNotifierComponent_MarkerAddedHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSpatialMarkersNotifierComponent, nullptr, "MarkerAddedHandler", Z_Construct_UFunction_UAndroidXRSpatialMarkersNotifierComponent_MarkerAddedHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialMarkersNotifierComponent_MarkerAddedHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRSpatialMarkersNotifierComponent_MarkerAddedHandler_Statics::AndroidXRSpatialMarkersNotifierComponent_eventMarkerAddedHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialMarkersNotifierComponent_MarkerAddedHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSpatialMarkersNotifierComponent_MarkerAddedHandler_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRSpatialMarkersNotifierComponent_MarkerAddedHandler_Statics::AndroidXRSpatialMarkersNotifierComponent_eventMarkerAddedHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRSpatialMarkersNotifierComponent_MarkerAddedHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSpatialMarkersNotifierComponent_MarkerAddedHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSpatialMarkersNotifierComponent::execMarkerAddedHandler)
{
	P_GET_OBJECT(UAndroidXRSpatialMarkerEntity,Z_Param_Marker);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MarkerAddedHandler(Z_Param_Marker);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSpatialMarkersNotifierComponent Function MarkerAddedHandler ******

// ********** Begin Class UAndroidXRSpatialMarkersNotifierComponent Function MarkerRemovedHandler **
struct Z_Construct_UFunction_UAndroidXRSpatialMarkersNotifierComponent_MarkerRemovedHandler_Statics
{
	struct AndroidXRSpatialMarkersNotifierComponent_eventMarkerRemovedHandler_Parms
	{
		UAndroidXRSpatialMarkerEntity* Marker;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkersNotifierComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Marker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAndroidXRSpatialMarkersNotifierComponent_MarkerRemovedHandler_Statics::NewProp_Marker = { "Marker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRSpatialMarkersNotifierComponent_eventMarkerRemovedHandler_Parms, Marker), Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRSpatialMarkersNotifierComponent_MarkerRemovedHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialMarkersNotifierComponent_MarkerRemovedHandler_Statics::NewProp_Marker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialMarkersNotifierComponent_MarkerRemovedHandler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSpatialMarkersNotifierComponent_MarkerRemovedHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSpatialMarkersNotifierComponent, nullptr, "MarkerRemovedHandler", Z_Construct_UFunction_UAndroidXRSpatialMarkersNotifierComponent_MarkerRemovedHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialMarkersNotifierComponent_MarkerRemovedHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRSpatialMarkersNotifierComponent_MarkerRemovedHandler_Statics::AndroidXRSpatialMarkersNotifierComponent_eventMarkerRemovedHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialMarkersNotifierComponent_MarkerRemovedHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSpatialMarkersNotifierComponent_MarkerRemovedHandler_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRSpatialMarkersNotifierComponent_MarkerRemovedHandler_Statics::AndroidXRSpatialMarkersNotifierComponent_eventMarkerRemovedHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRSpatialMarkersNotifierComponent_MarkerRemovedHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSpatialMarkersNotifierComponent_MarkerRemovedHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSpatialMarkersNotifierComponent::execMarkerRemovedHandler)
{
	P_GET_OBJECT(UAndroidXRSpatialMarkerEntity,Z_Param_Marker);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MarkerRemovedHandler(Z_Param_Marker);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSpatialMarkersNotifierComponent Function MarkerRemovedHandler ****

// ********** Begin Class UAndroidXRSpatialMarkersNotifierComponent ********************************
void UAndroidXRSpatialMarkersNotifierComponent::StaticRegisterNativesUAndroidXRSpatialMarkersNotifierComponent()
{
	UClass* Class = UAndroidXRSpatialMarkersNotifierComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MarkerAddedHandler", &UAndroidXRSpatialMarkersNotifierComponent::execMarkerAddedHandler },
		{ "MarkerRemovedHandler", &UAndroidXRSpatialMarkersNotifierComponent::execMarkerRemovedHandler },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRSpatialMarkersNotifierComponent;
UClass* UAndroidXRSpatialMarkersNotifierComponent::GetPrivateStaticClass()
{
	using TClass = UAndroidXRSpatialMarkersNotifierComponent;
	if (!Z_Registration_Info_UClass_UAndroidXRSpatialMarkersNotifierComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRSpatialMarkersNotifierComponent"),
			Z_Registration_Info_UClass_UAndroidXRSpatialMarkersNotifierComponent.InnerSingleton,
			StaticRegisterNativesUAndroidXRSpatialMarkersNotifierComponent,
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
	return Z_Registration_Info_UClass_UAndroidXRSpatialMarkersNotifierComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRSpatialMarkersNotifierComponent_NoRegister()
{
	return UAndroidXRSpatialMarkersNotifierComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRSpatialMarkersNotifierComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* The component that keeps track of tracked marker entities\n*/" },
#endif
		{ "IncludePath", "AndroidXRSpatialMarkersNotifierComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkersNotifierComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The component that keeps track of tracked marker entities" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerTrackingConfig_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Marker Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The configuration to start marker tracking with\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkersNotifierComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The configuration to start marker tracking with" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMarkerAdded_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Marker Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The callback for when a marker is added by the runtime\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkersNotifierComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The callback for when a marker is added by the runtime" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMarkerRemoved_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Marker Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The callback for when the runtime removes a marker\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkersNotifierComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The callback for when the runtime removes a marker" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackedMarkers_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Marker Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The markers being tracked\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkersNotifierComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The markers being tracked" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MarkerTrackingConfig;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMarkerAdded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMarkerRemoved;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackedMarkers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackedMarkers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidXRSpatialMarkersNotifierComponent_MarkerAddedHandler, "MarkerAddedHandler" }, // 3523081142
		{ &Z_Construct_UFunction_UAndroidXRSpatialMarkersNotifierComponent_MarkerRemovedHandler, "MarkerRemovedHandler" }, // 3148218864
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRSpatialMarkersNotifierComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidXRSpatialMarkersNotifierComponent_Statics::NewProp_MarkerTrackingConfig = { "MarkerTrackingConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialMarkersNotifierComponent, MarkerTrackingConfig), Z_Construct_UScriptStruct_FSpatialMarkerTrackingConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerTrackingConfig_MetaData), NewProp_MarkerTrackingConfig_MetaData) }; // 3845565288
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAndroidXRSpatialMarkersNotifierComponent_Statics::NewProp_OnMarkerAdded = { "OnMarkerAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialMarkersNotifierComponent, OnMarkerAdded), Z_Construct_UDelegateFunction_AndroidXRSpatialMarkerTracking_SpatialMarkerChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMarkerAdded_MetaData), NewProp_OnMarkerAdded_MetaData) }; // 2235324556
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAndroidXRSpatialMarkersNotifierComponent_Statics::NewProp_OnMarkerRemoved = { "OnMarkerRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialMarkersNotifierComponent, OnMarkerRemoved), Z_Construct_UDelegateFunction_AndroidXRSpatialMarkerTracking_SpatialMarkerChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMarkerRemoved_MetaData), NewProp_OnMarkerRemoved_MetaData) }; // 2235324556
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAndroidXRSpatialMarkersNotifierComponent_Statics::NewProp_TrackedMarkers_Inner = { "TrackedMarkers", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAndroidXRSpatialMarkersNotifierComponent_Statics::NewProp_TrackedMarkers = { "TrackedMarkers", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialMarkersNotifierComponent, TrackedMarkers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackedMarkers_MetaData), NewProp_TrackedMarkers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidXRSpatialMarkersNotifierComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialMarkersNotifierComponent_Statics::NewProp_MarkerTrackingConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialMarkersNotifierComponent_Statics::NewProp_OnMarkerAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialMarkersNotifierComponent_Statics::NewProp_OnMarkerRemoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialMarkersNotifierComponent_Statics::NewProp_TrackedMarkers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialMarkersNotifierComponent_Statics::NewProp_TrackedMarkers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialMarkersNotifierComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAndroidXRSpatialMarkersNotifierComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAndroidXRSpatialComponentBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRSpatialMarkerTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialMarkersNotifierComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRSpatialMarkersNotifierComponent_Statics::ClassParams = {
	&UAndroidXRSpatialMarkersNotifierComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAndroidXRSpatialMarkersNotifierComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialMarkersNotifierComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialMarkersNotifierComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRSpatialMarkersNotifierComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRSpatialMarkersNotifierComponent()
{
	if (!Z_Registration_Info_UClass_UAndroidXRSpatialMarkersNotifierComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRSpatialMarkersNotifierComponent.OuterSingleton, Z_Construct_UClass_UAndroidXRSpatialMarkersNotifierComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRSpatialMarkersNotifierComponent.OuterSingleton;
}
UAndroidXRSpatialMarkersNotifierComponent::UAndroidXRSpatialMarkersNotifierComponent() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRSpatialMarkersNotifierComponent);
UAndroidXRSpatialMarkersNotifierComponent::~UAndroidXRSpatialMarkersNotifierComponent() {}
// ********** End Class UAndroidXRSpatialMarkersNotifierComponent **********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialMarkerTracking_Source_AndroidXRSpatialMarkerTracking_Public_AndroidXRSpatialMarkersNotifierComponent_h__Script_AndroidXRSpatialMarkerTracking_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXRSpatialMarkersNotifierComponent, UAndroidXRSpatialMarkersNotifierComponent::StaticClass, TEXT("UAndroidXRSpatialMarkersNotifierComponent"), &Z_Registration_Info_UClass_UAndroidXRSpatialMarkersNotifierComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRSpatialMarkersNotifierComponent), 1622249397U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialMarkerTracking_Source_AndroidXRSpatialMarkerTracking_Public_AndroidXRSpatialMarkersNotifierComponent_h__Script_AndroidXRSpatialMarkerTracking_3867274621(TEXT("/Script/AndroidXRSpatialMarkerTracking"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialMarkerTracking_Source_AndroidXRSpatialMarkerTracking_Public_AndroidXRSpatialMarkersNotifierComponent_h__Script_AndroidXRSpatialMarkerTracking_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialMarkerTracking_Source_AndroidXRSpatialMarkerTracking_Public_AndroidXRSpatialMarkersNotifierComponent_h__Script_AndroidXRSpatialMarkerTracking_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
