// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealSamples/UnrealSamplesGameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUnrealSamplesGameInstance() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
UNREALSAMPLES_API UClass* Z_Construct_UClass_UUnrealSamplesGameInstance();
UNREALSAMPLES_API UClass* Z_Construct_UClass_UUnrealSamplesGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealSamples();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUnrealSamplesGameInstance ***********************************************
void UUnrealSamplesGameInstance::StaticRegisterNativesUUnrealSamplesGameInstance()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUnrealSamplesGameInstance;
UClass* UUnrealSamplesGameInstance::GetPrivateStaticClass()
{
	using TClass = UUnrealSamplesGameInstance;
	if (!Z_Registration_Info_UClass_UUnrealSamplesGameInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UnrealSamplesGameInstance"),
			Z_Registration_Info_UClass_UUnrealSamplesGameInstance.InnerSingleton,
			StaticRegisterNativesUUnrealSamplesGameInstance,
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
	return Z_Registration_Info_UClass_UUnrealSamplesGameInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UUnrealSamplesGameInstance_NoRegister()
{
	return UUnrealSamplesGameInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUnrealSamplesGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "UnrealSamplesGameInstance.h" },
		{ "ModuleRelativePath", "UnrealSamplesGameInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnrealSamplesGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUnrealSamplesGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealSamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealSamplesGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnrealSamplesGameInstance_Statics::ClassParams = {
	&UUnrealSamplesGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealSamplesGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UUnrealSamplesGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUnrealSamplesGameInstance()
{
	if (!Z_Registration_Info_UClass_UUnrealSamplesGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnrealSamplesGameInstance.OuterSingleton, Z_Construct_UClass_UUnrealSamplesGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUnrealSamplesGameInstance.OuterSingleton;
}
UUnrealSamplesGameInstance::UUnrealSamplesGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUnrealSamplesGameInstance);
UUnrealSamplesGameInstance::~UUnrealSamplesGameInstance() {}
// ********** End Class UUnrealSamplesGameInstance *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_UnrealSamplesGameInstance_h__Script_UnrealSamples_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUnrealSamplesGameInstance, UUnrealSamplesGameInstance::StaticClass, TEXT("UUnrealSamplesGameInstance"), &Z_Registration_Info_UClass_UUnrealSamplesGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnrealSamplesGameInstance), 835353471U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_UnrealSamplesGameInstance_h__Script_UnrealSamples_3067039144(TEXT("/Script/UnrealSamples"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_UnrealSamplesGameInstance_h__Script_UnrealSamples_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_UnrealSamplesGameInstance_h__Script_UnrealSamples_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
