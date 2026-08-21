// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRRecommendedResolutionEventProxy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRRecommendedResolutionEventProxy() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXRRECOMMENDEDRESOLUTION_API UClass* Z_Construct_UClass_UAndroidXRRecommendedResolutionEventProxy();
ANDROIDXRRECOMMENDEDRESOLUTION_API UClass* Z_Construct_UClass_UAndroidXRRecommendedResolutionEventProxy_NoRegister();
ANDROIDXRRECOMMENDEDRESOLUTION_API UFunction* Z_Construct_UDelegateFunction_AndroidXRRecommendedResolution_AndroidXRRecommendedResolutionChangedDynamicDelegate__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AndroidXRRecommendedResolution();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAndroidXRRecommendedResolutionEventProxy ********************************
void UAndroidXRRecommendedResolutionEventProxy::StaticRegisterNativesUAndroidXRRecommendedResolutionEventProxy()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRRecommendedResolutionEventProxy;
UClass* UAndroidXRRecommendedResolutionEventProxy::GetPrivateStaticClass()
{
	using TClass = UAndroidXRRecommendedResolutionEventProxy;
	if (!Z_Registration_Info_UClass_UAndroidXRRecommendedResolutionEventProxy.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRRecommendedResolutionEventProxy"),
			Z_Registration_Info_UClass_UAndroidXRRecommendedResolutionEventProxy.InnerSingleton,
			StaticRegisterNativesUAndroidXRRecommendedResolutionEventProxy,
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
	return Z_Registration_Info_UClass_UAndroidXRRecommendedResolutionEventProxy.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRRecommendedResolutionEventProxy_NoRegister()
{
	return UAndroidXRRecommendedResolutionEventProxy::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRRecommendedResolutionEventProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AndroidXRRecommendedResolutionEventProxy.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/AndroidXRRecommendedResolutionEventProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRecommendedResolutionChanged_MetaData[] = {
		{ "Category", "AndroidXR|Recommended Resolution Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Triggered when a new recommended resolution is provided by the runtime.\n     * @param[out] RecommendedResolution The current recommended resolution.\n     * @param[out] MaxResolution The maximum supported resolution.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRRecommendedResolutionEventProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Triggered when a new recommended resolution is provided by the runtime.\n@param[out] RecommendedResolution The current recommended resolution.\n@param[out] MaxResolution The maximum supported resolution." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRecommendedResolutionChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRRecommendedResolutionEventProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAndroidXRRecommendedResolutionEventProxy_Statics::NewProp_OnRecommendedResolutionChanged = { "OnRecommendedResolutionChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRRecommendedResolutionEventProxy, OnRecommendedResolutionChanged), Z_Construct_UDelegateFunction_AndroidXRRecommendedResolution_AndroidXRRecommendedResolutionChangedDynamicDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRecommendedResolutionChanged_MetaData), NewProp_OnRecommendedResolutionChanged_MetaData) }; // 1116213488
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidXRRecommendedResolutionEventProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRRecommendedResolutionEventProxy_Statics::NewProp_OnRecommendedResolutionChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRRecommendedResolutionEventProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAndroidXRRecommendedResolutionEventProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRRecommendedResolution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRRecommendedResolutionEventProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRRecommendedResolutionEventProxy_Statics::ClassParams = {
	&UAndroidXRRecommendedResolutionEventProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAndroidXRRecommendedResolutionEventProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRRecommendedResolutionEventProxy_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRRecommendedResolutionEventProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRRecommendedResolutionEventProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRRecommendedResolutionEventProxy()
{
	if (!Z_Registration_Info_UClass_UAndroidXRRecommendedResolutionEventProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRRecommendedResolutionEventProxy.OuterSingleton, Z_Construct_UClass_UAndroidXRRecommendedResolutionEventProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRRecommendedResolutionEventProxy.OuterSingleton;
}
UAndroidXRRecommendedResolutionEventProxy::UAndroidXRRecommendedResolutionEventProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRRecommendedResolutionEventProxy);
UAndroidXRRecommendedResolutionEventProxy::~UAndroidXRRecommendedResolutionEventProxy() {}
// ********** End Class UAndroidXRRecommendedResolutionEventProxy **********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRRecommendedResolution_Source_AndroidXRRecommendedResolution_Public_AndroidXRRecommendedResolutionEventProxy_h__Script_AndroidXRRecommendedResolution_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXRRecommendedResolutionEventProxy, UAndroidXRRecommendedResolutionEventProxy::StaticClass, TEXT("UAndroidXRRecommendedResolutionEventProxy"), &Z_Registration_Info_UClass_UAndroidXRRecommendedResolutionEventProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRRecommendedResolutionEventProxy), 1521017055U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRRecommendedResolution_Source_AndroidXRRecommendedResolution_Public_AndroidXRRecommendedResolutionEventProxy_h__Script_AndroidXRRecommendedResolution_1324223943(TEXT("/Script/AndroidXRRecommendedResolution"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRRecommendedResolution_Source_AndroidXRRecommendedResolution_Public_AndroidXRRecommendedResolutionEventProxy_h__Script_AndroidXRRecommendedResolution_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRRecommendedResolution_Source_AndroidXRRecommendedResolution_Public_AndroidXRRecommendedResolutionEventProxy_h__Script_AndroidXRRecommendedResolution_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
