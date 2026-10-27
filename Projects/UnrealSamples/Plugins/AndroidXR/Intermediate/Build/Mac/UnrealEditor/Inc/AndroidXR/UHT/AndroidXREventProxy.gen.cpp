// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXREventProxy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXREventProxy() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXR_API UClass* Z_Construct_UClass_UAndroidXREventProxy();
ANDROIDXR_API UClass* Z_Construct_UClass_UAndroidXREventProxy_NoRegister();
ANDROIDXR_API UFunction* Z_Construct_UDelegateFunction_AndroidXR_AndroidXRDisplayRefreshRateChangedDynamicDelegate__DelegateSignature();
ANDROIDXR_API UFunction* Z_Construct_UDelegateFunction_AndroidXR_AndroidXRPerfSettingsDynamicDelegate__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AndroidXR();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAndroidXREventProxy *****************************************************
void UAndroidXREventProxy::StaticRegisterNativesUAndroidXREventProxy()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXREventProxy;
UClass* UAndroidXREventProxy::GetPrivateStaticClass()
{
	using TClass = UAndroidXREventProxy;
	if (!Z_Registration_Info_UClass_UAndroidXREventProxy.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXREventProxy"),
			Z_Registration_Info_UClass_UAndroidXREventProxy.InnerSingleton,
			StaticRegisterNativesUAndroidXREventProxy,
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
	return Z_Registration_Info_UClass_UAndroidXREventProxy.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXREventProxy_NoRegister()
{
	return UAndroidXREventProxy::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXREventProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AndroidXREventProxy.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/AndroidXREventProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPerfSettingsDelegate_MetaData[] = {
		{ "Category", "AndroidXR Event" },
		{ "ModuleRelativePath", "Public/AndroidXREventProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRefreshRateChangedDelegate_MetaData[] = {
		{ "Category", "AndroidXR Event" },
		{ "ModuleRelativePath", "Public/AndroidXREventProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPerfSettingsDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRefreshRateChangedDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXREventProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAndroidXREventProxy_Statics::NewProp_OnPerfSettingsDelegate = { "OnPerfSettingsDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXREventProxy, OnPerfSettingsDelegate), Z_Construct_UDelegateFunction_AndroidXR_AndroidXRPerfSettingsDynamicDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPerfSettingsDelegate_MetaData), NewProp_OnPerfSettingsDelegate_MetaData) }; // 3960932086
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAndroidXREventProxy_Statics::NewProp_OnRefreshRateChangedDelegate = { "OnRefreshRateChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXREventProxy, OnRefreshRateChangedDelegate), Z_Construct_UDelegateFunction_AndroidXR_AndroidXRDisplayRefreshRateChangedDynamicDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRefreshRateChangedDelegate_MetaData), NewProp_OnRefreshRateChangedDelegate_MetaData) }; // 2560832024
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidXREventProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXREventProxy_Statics::NewProp_OnPerfSettingsDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXREventProxy_Statics::NewProp_OnRefreshRateChangedDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXREventProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAndroidXREventProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXREventProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXREventProxy_Statics::ClassParams = {
	&UAndroidXREventProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAndroidXREventProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXREventProxy_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXREventProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXREventProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXREventProxy()
{
	if (!Z_Registration_Info_UClass_UAndroidXREventProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXREventProxy.OuterSingleton, Z_Construct_UClass_UAndroidXREventProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXREventProxy.OuterSingleton;
}
UAndroidXREventProxy::UAndroidXREventProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXREventProxy);
UAndroidXREventProxy::~UAndroidXREventProxy() {}
// ********** End Class UAndroidXREventProxy *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXR_Public_AndroidXREventProxy_h__Script_AndroidXR_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXREventProxy, UAndroidXREventProxy::StaticClass, TEXT("UAndroidXREventProxy"), &Z_Registration_Info_UClass_UAndroidXREventProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXREventProxy), 4007184382U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXR_Public_AndroidXREventProxy_h__Script_AndroidXR_3167141433(TEXT("/Script/AndroidXR"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXR_Public_AndroidXREventProxy_h__Script_AndroidXR_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXR_Public_AndroidXREventProxy_h__Script_AndroidXR_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
