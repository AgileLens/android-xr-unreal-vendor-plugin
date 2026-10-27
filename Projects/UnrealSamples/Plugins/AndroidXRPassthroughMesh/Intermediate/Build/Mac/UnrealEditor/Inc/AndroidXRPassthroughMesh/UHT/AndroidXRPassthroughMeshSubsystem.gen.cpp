// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/AndroidXRPassthroughMeshSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRPassthroughMeshSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXRPASSTHROUGHMESH_API UClass* Z_Construct_UClass_UAndroidXRPassthroughMeshSubsystem();
ANDROIDXRPASSTHROUGHMESH_API UClass* Z_Construct_UClass_UAndroidXRPassthroughMeshSubsystem_NoRegister();
ANDROIDXRTRACKINGSUBSYSTEM_API UClass* Z_Construct_UClass_UAndroidXRTrackingSubsystem();
UPackage* Z_Construct_UPackage__Script_AndroidXRPassthroughMesh();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAndroidXRPassthroughMeshSubsystem ***************************************
void UAndroidXRPassthroughMeshSubsystem::StaticRegisterNativesUAndroidXRPassthroughMeshSubsystem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRPassthroughMeshSubsystem;
UClass* UAndroidXRPassthroughMeshSubsystem::GetPrivateStaticClass()
{
	using TClass = UAndroidXRPassthroughMeshSubsystem;
	if (!Z_Registration_Info_UClass_UAndroidXRPassthroughMeshSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRPassthroughMeshSubsystem"),
			Z_Registration_Info_UClass_UAndroidXRPassthroughMeshSubsystem.InnerSingleton,
			StaticRegisterNativesUAndroidXRPassthroughMeshSubsystem,
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
	return Z_Registration_Info_UClass_UAndroidXRPassthroughMeshSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRPassthroughMeshSubsystem_NoRegister()
{
	return UAndroidXRPassthroughMeshSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRPassthroughMeshSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* AndroidXR Passthrough Mesh subsystem\n*/" },
#endif
		{ "IncludePath", "Components/AndroidXRPassthroughMeshSubsystem.h" },
		{ "ModuleRelativePath", "Public/Components/AndroidXRPassthroughMeshSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AndroidXR Passthrough Mesh subsystem" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRPassthroughMeshSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAndroidXRPassthroughMeshSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAndroidXRTrackingSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRPassthroughMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRPassthroughMeshSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRPassthroughMeshSubsystem_Statics::ClassParams = {
	&UAndroidXRPassthroughMeshSubsystem::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRPassthroughMeshSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRPassthroughMeshSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRPassthroughMeshSubsystem()
{
	if (!Z_Registration_Info_UClass_UAndroidXRPassthroughMeshSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRPassthroughMeshSubsystem.OuterSingleton, Z_Construct_UClass_UAndroidXRPassthroughMeshSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRPassthroughMeshSubsystem.OuterSingleton;
}
UAndroidXRPassthroughMeshSubsystem::UAndroidXRPassthroughMeshSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRPassthroughMeshSubsystem);
UAndroidXRPassthroughMeshSubsystem::~UAndroidXRPassthroughMeshSubsystem() {}
// ********** End Class UAndroidXRPassthroughMeshSubsystem *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRPassthroughMesh_Source_AndroidXRPassthroughMesh_Public_Components_AndroidXRPassthroughMeshSubsystem_h__Script_AndroidXRPassthroughMesh_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXRPassthroughMeshSubsystem, UAndroidXRPassthroughMeshSubsystem::StaticClass, TEXT("UAndroidXRPassthroughMeshSubsystem"), &Z_Registration_Info_UClass_UAndroidXRPassthroughMeshSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRPassthroughMeshSubsystem), 2778307164U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRPassthroughMesh_Source_AndroidXRPassthroughMesh_Public_Components_AndroidXRPassthroughMeshSubsystem_h__Script_AndroidXRPassthroughMesh_1273513668(TEXT("/Script/AndroidXRPassthroughMesh"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRPassthroughMesh_Source_AndroidXRPassthroughMesh_Public_Components_AndroidXRPassthroughMeshSubsystem_h__Script_AndroidXRPassthroughMesh_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRPassthroughMesh_Source_AndroidXRPassthroughMesh_Public_Components_AndroidXRPassthroughMeshSubsystem_h__Script_AndroidXRPassthroughMesh_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
