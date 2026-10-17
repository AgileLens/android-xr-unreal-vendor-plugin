// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRSystemExtensionPropertiesEventProxy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRSystemExtensionPropertiesEventProxy() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXRSYSTEMEXTENSIONPROPERTIES_API UClass* Z_Construct_UClass_UAndroidXRSystemExtensionPropertiesEventProxy();
ANDROIDXRSYSTEMEXTENSIONPROPERTIES_API UClass* Z_Construct_UClass_UAndroidXRSystemExtensionPropertiesEventProxy_NoRegister();
ANDROIDXRSYSTEMEXTENSIONPROPERTIES_API UFunction* Z_Construct_UDelegateFunction_AndroidXRSystemExtensionProperties_AndroidXRSystemPropertiesChangedDynamicDelegate__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AndroidXRSystemExtensionProperties();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAndroidXRSystemExtensionPropertiesEventProxy ****************************
void UAndroidXRSystemExtensionPropertiesEventProxy::StaticRegisterNativesUAndroidXRSystemExtensionPropertiesEventProxy()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRSystemExtensionPropertiesEventProxy;
UClass* UAndroidXRSystemExtensionPropertiesEventProxy::GetPrivateStaticClass()
{
	using TClass = UAndroidXRSystemExtensionPropertiesEventProxy;
	if (!Z_Registration_Info_UClass_UAndroidXRSystemExtensionPropertiesEventProxy.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRSystemExtensionPropertiesEventProxy"),
			Z_Registration_Info_UClass_UAndroidXRSystemExtensionPropertiesEventProxy.InnerSingleton,
			StaticRegisterNativesUAndroidXRSystemExtensionPropertiesEventProxy,
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
	return Z_Registration_Info_UClass_UAndroidXRSystemExtensionPropertiesEventProxy.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRSystemExtensionPropertiesEventProxy_NoRegister()
{
	return UAndroidXRSystemExtensionPropertiesEventProxy::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRSystemExtensionPropertiesEventProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AndroidXRSystemExtensionPropertiesEventProxy.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/AndroidXRSystemExtensionPropertiesEventProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSystemExtensionPropertiesChanged_MetaData[] = {
		{ "Category", "AndroidXR|System Extension Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Triggered when a change is registered in the system extension properties.\n     * @param[out] ExtensionCount The current count of extensions detected by the system.\n     * @param[out] ExtensionProperties An array of properties information for each extension.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSystemExtensionPropertiesEventProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Triggered when a change is registered in the system extension properties.\n@param[out] ExtensionCount The current count of extensions detected by the system.\n@param[out] ExtensionProperties An array of properties information for each extension." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSystemExtensionPropertiesChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRSystemExtensionPropertiesEventProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAndroidXRSystemExtensionPropertiesEventProxy_Statics::NewProp_OnSystemExtensionPropertiesChanged = { "OnSystemExtensionPropertiesChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSystemExtensionPropertiesEventProxy, OnSystemExtensionPropertiesChanged), Z_Construct_UDelegateFunction_AndroidXRSystemExtensionProperties_AndroidXRSystemPropertiesChangedDynamicDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSystemExtensionPropertiesChanged_MetaData), NewProp_OnSystemExtensionPropertiesChanged_MetaData) }; // 3655637147
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidXRSystemExtensionPropertiesEventProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSystemExtensionPropertiesEventProxy_Statics::NewProp_OnSystemExtensionPropertiesChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSystemExtensionPropertiesEventProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAndroidXRSystemExtensionPropertiesEventProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRSystemExtensionProperties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSystemExtensionPropertiesEventProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRSystemExtensionPropertiesEventProxy_Statics::ClassParams = {
	&UAndroidXRSystemExtensionPropertiesEventProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAndroidXRSystemExtensionPropertiesEventProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSystemExtensionPropertiesEventProxy_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSystemExtensionPropertiesEventProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRSystemExtensionPropertiesEventProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRSystemExtensionPropertiesEventProxy()
{
	if (!Z_Registration_Info_UClass_UAndroidXRSystemExtensionPropertiesEventProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRSystemExtensionPropertiesEventProxy.OuterSingleton, Z_Construct_UClass_UAndroidXRSystemExtensionPropertiesEventProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRSystemExtensionPropertiesEventProxy.OuterSingleton;
}
UAndroidXRSystemExtensionPropertiesEventProxy::UAndroidXRSystemExtensionPropertiesEventProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRSystemExtensionPropertiesEventProxy);
UAndroidXRSystemExtensionPropertiesEventProxy::~UAndroidXRSystemExtensionPropertiesEventProxy() {}
// ********** End Class UAndroidXRSystemExtensionPropertiesEventProxy ******************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSystemExtensionProperties_Source_AndroidXRSystemExtensionProperties_Public_AndroidXRSystemExtensionPropertiesEventProxy_h__Script_AndroidXRSystemExtensionProperties_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXRSystemExtensionPropertiesEventProxy, UAndroidXRSystemExtensionPropertiesEventProxy::StaticClass, TEXT("UAndroidXRSystemExtensionPropertiesEventProxy"), &Z_Registration_Info_UClass_UAndroidXRSystemExtensionPropertiesEventProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRSystemExtensionPropertiesEventProxy), 1915715911U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSystemExtensionProperties_Source_AndroidXRSystemExtensionProperties_Public_AndroidXRSystemExtensionPropertiesEventProxy_h__Script_AndroidXRSystemExtensionProperties_2817989634(TEXT("/Script/AndroidXRSystemExtensionProperties"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSystemExtensionProperties_Source_AndroidXRSystemExtensionProperties_Public_AndroidXRSystemExtensionPropertiesEventProxy_h__Script_AndroidXRSystemExtensionProperties_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSystemExtensionProperties_Source_AndroidXRSystemExtensionProperties_Public_AndroidXRSystemExtensionPropertiesEventProxy_h__Script_AndroidXRSystemExtensionProperties_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
