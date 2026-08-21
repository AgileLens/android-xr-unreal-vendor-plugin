// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRGlobalPassthroughDimmingEventProxy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRGlobalPassthroughDimmingEventProxy() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXRGLOBALPASSTHROUGHDIMMING_API UClass* Z_Construct_UClass_UAndroidXRGlobalPassthroughDimmingEventProxy();
ANDROIDXRGLOBALPASSTHROUGHDIMMING_API UClass* Z_Construct_UClass_UAndroidXRGlobalPassthroughDimmingEventProxy_NoRegister();
ANDROIDXRGLOBALPASSTHROUGHDIMMING_API UFunction* Z_Construct_UDelegateFunction_AndroidXRGlobalPassthroughDimming_AndroidXRGlobalDimmingLevelChangedDynamicDelegate__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AndroidXRGlobalPassthroughDimming();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FAndroidXRGlobalDimmingLevelChangedDynamicDelegate ********************
struct Z_Construct_UDelegateFunction_AndroidXRGlobalPassthroughDimming_AndroidXRGlobalDimmingLevelChangedDynamicDelegate__DelegateSignature_Statics
{
	struct _Script_AndroidXRGlobalPassthroughDimming_eventAndroidXRGlobalDimmingLevelChangedDynamicDelegate_Parms
	{
		float DimmingLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Broadcast via the AndroidXRGlobalPassthroughDimmingEventProxy in the event of\n// XR_TYPE_EVENT_DATA_GLOBAL_DIMMING_LEVEL_CHANGED_ANDROID\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRGlobalPassthroughDimmingEventProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Broadcast via the AndroidXRGlobalPassthroughDimmingEventProxy in the event of\nXR_TYPE_EVENT_DATA_GLOBAL_DIMMING_LEVEL_CHANGED_ANDROID" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DimmingLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AndroidXRGlobalPassthroughDimming_AndroidXRGlobalDimmingLevelChangedDynamicDelegate__DelegateSignature_Statics::NewProp_DimmingLevel = { "DimmingLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AndroidXRGlobalPassthroughDimming_eventAndroidXRGlobalDimmingLevelChangedDynamicDelegate_Parms, DimmingLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AndroidXRGlobalPassthroughDimming_AndroidXRGlobalDimmingLevelChangedDynamicDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AndroidXRGlobalPassthroughDimming_AndroidXRGlobalDimmingLevelChangedDynamicDelegate__DelegateSignature_Statics::NewProp_DimmingLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRGlobalPassthroughDimming_AndroidXRGlobalDimmingLevelChangedDynamicDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AndroidXRGlobalPassthroughDimming_AndroidXRGlobalDimmingLevelChangedDynamicDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AndroidXRGlobalPassthroughDimming, nullptr, "AndroidXRGlobalDimmingLevelChangedDynamicDelegate__DelegateSignature", Z_Construct_UDelegateFunction_AndroidXRGlobalPassthroughDimming_AndroidXRGlobalDimmingLevelChangedDynamicDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRGlobalPassthroughDimming_AndroidXRGlobalDimmingLevelChangedDynamicDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AndroidXRGlobalPassthroughDimming_AndroidXRGlobalDimmingLevelChangedDynamicDelegate__DelegateSignature_Statics::_Script_AndroidXRGlobalPassthroughDimming_eventAndroidXRGlobalDimmingLevelChangedDynamicDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRGlobalPassthroughDimming_AndroidXRGlobalDimmingLevelChangedDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AndroidXRGlobalPassthroughDimming_AndroidXRGlobalDimmingLevelChangedDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AndroidXRGlobalPassthroughDimming_AndroidXRGlobalDimmingLevelChangedDynamicDelegate__DelegateSignature_Statics::_Script_AndroidXRGlobalPassthroughDimming_eventAndroidXRGlobalDimmingLevelChangedDynamicDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AndroidXRGlobalPassthroughDimming_AndroidXRGlobalDimmingLevelChangedDynamicDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AndroidXRGlobalPassthroughDimming_AndroidXRGlobalDimmingLevelChangedDynamicDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAndroidXRGlobalDimmingLevelChangedDynamicDelegate_DelegateWrapper(const FMulticastScriptDelegate& AndroidXRGlobalDimmingLevelChangedDynamicDelegate, float DimmingLevel)
{
	struct _Script_AndroidXRGlobalPassthroughDimming_eventAndroidXRGlobalDimmingLevelChangedDynamicDelegate_Parms
	{
		float DimmingLevel;
	};
	_Script_AndroidXRGlobalPassthroughDimming_eventAndroidXRGlobalDimmingLevelChangedDynamicDelegate_Parms Parms;
	Parms.DimmingLevel=DimmingLevel;
	AndroidXRGlobalDimmingLevelChangedDynamicDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FAndroidXRGlobalDimmingLevelChangedDynamicDelegate **********************

// ********** Begin Class UAndroidXRGlobalPassthroughDimmingEventProxy *****************************
void UAndroidXRGlobalPassthroughDimmingEventProxy::StaticRegisterNativesUAndroidXRGlobalPassthroughDimmingEventProxy()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRGlobalPassthroughDimmingEventProxy;
UClass* UAndroidXRGlobalPassthroughDimmingEventProxy::GetPrivateStaticClass()
{
	using TClass = UAndroidXRGlobalPassthroughDimmingEventProxy;
	if (!Z_Registration_Info_UClass_UAndroidXRGlobalPassthroughDimmingEventProxy.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRGlobalPassthroughDimmingEventProxy"),
			Z_Registration_Info_UClass_UAndroidXRGlobalPassthroughDimmingEventProxy.InnerSingleton,
			StaticRegisterNativesUAndroidXRGlobalPassthroughDimmingEventProxy,
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
	return Z_Registration_Info_UClass_UAndroidXRGlobalPassthroughDimmingEventProxy.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRGlobalPassthroughDimmingEventProxy_NoRegister()
{
	return UAndroidXRGlobalPassthroughDimmingEventProxy::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRGlobalPassthroughDimmingEventProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AndroidXRGlobalPassthroughDimmingEventProxy.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/AndroidXRGlobalPassthroughDimmingEventProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGlobalDimmingLevelChanged_MetaData[] = {
		{ "Category", "AndroidXR| Global Passthrough Dimming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Triggered when the dimming level is changed by either apps or physical buttons on devices.\n     * @param[out] DimmingLevel The current dimming level.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRGlobalPassthroughDimmingEventProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Triggered when the dimming level is changed by either apps or physical buttons on devices.\n@param[out] DimmingLevel The current dimming level." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGlobalDimmingLevelChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRGlobalPassthroughDimmingEventProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAndroidXRGlobalPassthroughDimmingEventProxy_Statics::NewProp_OnGlobalDimmingLevelChanged = { "OnGlobalDimmingLevelChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRGlobalPassthroughDimmingEventProxy, OnGlobalDimmingLevelChanged), Z_Construct_UDelegateFunction_AndroidXRGlobalPassthroughDimming_AndroidXRGlobalDimmingLevelChangedDynamicDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGlobalDimmingLevelChanged_MetaData), NewProp_OnGlobalDimmingLevelChanged_MetaData) }; // 543500090
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidXRGlobalPassthroughDimmingEventProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRGlobalPassthroughDimmingEventProxy_Statics::NewProp_OnGlobalDimmingLevelChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRGlobalPassthroughDimmingEventProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAndroidXRGlobalPassthroughDimmingEventProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRGlobalPassthroughDimming,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRGlobalPassthroughDimmingEventProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRGlobalPassthroughDimmingEventProxy_Statics::ClassParams = {
	&UAndroidXRGlobalPassthroughDimmingEventProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAndroidXRGlobalPassthroughDimmingEventProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRGlobalPassthroughDimmingEventProxy_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRGlobalPassthroughDimmingEventProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRGlobalPassthroughDimmingEventProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRGlobalPassthroughDimmingEventProxy()
{
	if (!Z_Registration_Info_UClass_UAndroidXRGlobalPassthroughDimmingEventProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRGlobalPassthroughDimmingEventProxy.OuterSingleton, Z_Construct_UClass_UAndroidXRGlobalPassthroughDimmingEventProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRGlobalPassthroughDimmingEventProxy.OuterSingleton;
}
UAndroidXRGlobalPassthroughDimmingEventProxy::UAndroidXRGlobalPassthroughDimmingEventProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRGlobalPassthroughDimmingEventProxy);
UAndroidXRGlobalPassthroughDimmingEventProxy::~UAndroidXRGlobalPassthroughDimmingEventProxy() {}
// ********** End Class UAndroidXRGlobalPassthroughDimmingEventProxy *******************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRGlobalPassthroughDimming_Source_AndroidXRGlobalPassthroughDimming_Public_AndroidXRGlobalPassthroughDimmingEventProxy_h__Script_AndroidXRGlobalPassthroughDimming_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXRGlobalPassthroughDimmingEventProxy, UAndroidXRGlobalPassthroughDimmingEventProxy::StaticClass, TEXT("UAndroidXRGlobalPassthroughDimmingEventProxy"), &Z_Registration_Info_UClass_UAndroidXRGlobalPassthroughDimmingEventProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRGlobalPassthroughDimmingEventProxy), 662854932U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRGlobalPassthroughDimming_Source_AndroidXRGlobalPassthroughDimming_Public_AndroidXRGlobalPassthroughDimmingEventProxy_h__Script_AndroidXRGlobalPassthroughDimming_1247586055(TEXT("/Script/AndroidXRGlobalPassthroughDimming"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRGlobalPassthroughDimming_Source_AndroidXRGlobalPassthroughDimming_Public_AndroidXRGlobalPassthroughDimmingEventProxy_h__Script_AndroidXRGlobalPassthroughDimming_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRGlobalPassthroughDimming_Source_AndroidXRGlobalPassthroughDimming_Public_AndroidXRGlobalPassthroughDimmingEventProxy_h__Script_AndroidXRGlobalPassthroughDimming_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
