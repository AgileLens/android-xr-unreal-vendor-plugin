// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRSettings() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXR_API UClass* Z_Construct_UClass_UAndroidXRSettings();
ANDROIDXR_API UClass* Z_Construct_UClass_UAndroidXRSettings_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AndroidXR();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAndroidXRSettings *******************************************************
void UAndroidXRSettings::StaticRegisterNativesUAndroidXRSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRSettings;
UClass* UAndroidXRSettings::GetPrivateStaticClass()
{
	using TClass = UAndroidXRSettings;
	if (!Z_Registration_Info_UClass_UAndroidXRSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRSettings"),
			Z_Registration_Info_UClass_UAndroidXRSettings.InnerSingleton,
			StaticRegisterNativesUAndroidXRSettings,
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
	return Z_Registration_Info_UClass_UAndroidXRSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRSettings_NoRegister()
{
	return UAndroidXRSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AndroidXRSettings.h" },
		{ "ModuleRelativePath", "Public/AndroidXRSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableExperimentalFeatures_MetaData[] = {
		{ "Category", "AndroidXRSettings" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/AndroidXRSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableExperimentalFeatures_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableExperimentalFeatures;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAndroidXRSettings_Statics::NewProp_bEnableExperimentalFeatures_SetBit(void* Obj)
{
	((UAndroidXRSettings*)Obj)->bEnableExperimentalFeatures = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidXRSettings_Statics::NewProp_bEnableExperimentalFeatures = { "bEnableExperimentalFeatures", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAndroidXRSettings), &Z_Construct_UClass_UAndroidXRSettings_Statics::NewProp_bEnableExperimentalFeatures_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableExperimentalFeatures_MetaData), NewProp_bEnableExperimentalFeatures_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidXRSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSettings_Statics::NewProp_bEnableExperimentalFeatures,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAndroidXRSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRSettings_Statics::ClassParams = {
	&UAndroidXRSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAndroidXRSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRSettings()
{
	if (!Z_Registration_Info_UClass_UAndroidXRSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRSettings.OuterSingleton, Z_Construct_UClass_UAndroidXRSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRSettings.OuterSingleton;
}
UAndroidXRSettings::UAndroidXRSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRSettings);
UAndroidXRSettings::~UAndroidXRSettings() {}
// ********** End Class UAndroidXRSettings *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXR_Public_AndroidXRSettings_h__Script_AndroidXR_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXRSettings, UAndroidXRSettings::StaticClass, TEXT("UAndroidXRSettings"), &Z_Registration_Info_UClass_UAndroidXRSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRSettings), 2555417501U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXR_Public_AndroidXRSettings_h__Script_AndroidXR_441165447(TEXT("/Script/AndroidXR"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXR_Public_AndroidXRSettings_h__Script_AndroidXR_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXR_Public_AndroidXRSettings_h__Script_AndroidXR_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
