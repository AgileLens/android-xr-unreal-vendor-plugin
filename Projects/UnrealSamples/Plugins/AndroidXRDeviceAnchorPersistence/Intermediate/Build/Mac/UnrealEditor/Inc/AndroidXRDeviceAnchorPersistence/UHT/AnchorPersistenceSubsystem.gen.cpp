// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnchorPersistenceSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAnchorPersistenceSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXRDEVICEANCHORPERSISTENCE_API UClass* Z_Construct_UClass_UAnchorPersistenceSubsystem();
ANDROIDXRDEVICEANCHORPERSISTENCE_API UClass* Z_Construct_UClass_UAnchorPersistenceSubsystem_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AndroidXRDeviceAnchorPersistence();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAnchorPersistenceSubsystem **********************************************
void UAnchorPersistenceSubsystem::StaticRegisterNativesUAnchorPersistenceSubsystem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAnchorPersistenceSubsystem;
UClass* UAnchorPersistenceSubsystem::GetPrivateStaticClass()
{
	using TClass = UAnchorPersistenceSubsystem;
	if (!Z_Registration_Info_UClass_UAnchorPersistenceSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AnchorPersistenceSubsystem"),
			Z_Registration_Info_UClass_UAnchorPersistenceSubsystem.InnerSingleton,
			StaticRegisterNativesUAnchorPersistenceSubsystem,
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
	return Z_Registration_Info_UClass_UAnchorPersistenceSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UAnchorPersistenceSubsystem_NoRegister()
{
	return UAnchorPersistenceSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAnchorPersistenceSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AnchorPersistenceSubsystem.h" },
		{ "ModuleRelativePath", "Private/AnchorPersistenceSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnchorPersistenceSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnchorPersistenceSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRDeviceAnchorPersistence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnchorPersistenceSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnchorPersistenceSubsystem_Statics::ClassParams = {
	&UAnchorPersistenceSubsystem::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnchorPersistenceSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnchorPersistenceSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnchorPersistenceSubsystem()
{
	if (!Z_Registration_Info_UClass_UAnchorPersistenceSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnchorPersistenceSubsystem.OuterSingleton, Z_Construct_UClass_UAnchorPersistenceSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnchorPersistenceSubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnchorPersistenceSubsystem);
UAnchorPersistenceSubsystem::~UAnchorPersistenceSubsystem() {}
// ********** End Class UAnchorPersistenceSubsystem ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Private_AnchorPersistenceSubsystem_h__Script_AndroidXRDeviceAnchorPersistence_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnchorPersistenceSubsystem, UAnchorPersistenceSubsystem::StaticClass, TEXT("UAnchorPersistenceSubsystem"), &Z_Registration_Info_UClass_UAnchorPersistenceSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnchorPersistenceSubsystem), 352652283U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Private_AnchorPersistenceSubsystem_h__Script_AndroidXRDeviceAnchorPersistence_1419747627(TEXT("/Script/AndroidXRDeviceAnchorPersistence"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Private_AnchorPersistenceSubsystem_h__Script_AndroidXRDeviceAnchorPersistence_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Private_AnchorPersistenceSubsystem_h__Script_AndroidXRDeviceAnchorPersistence_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
