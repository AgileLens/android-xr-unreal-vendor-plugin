// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealSamples/UnrealSamplesGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUnrealSamplesGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UNREALSAMPLES_API UClass* Z_Construct_UClass_AUnrealSamplesGameMode();
UNREALSAMPLES_API UClass* Z_Construct_UClass_AUnrealSamplesGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealSamples();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AUnrealSamplesGameMode ***************************************************
void AUnrealSamplesGameMode::StaticRegisterNativesAUnrealSamplesGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AUnrealSamplesGameMode;
UClass* AUnrealSamplesGameMode::GetPrivateStaticClass()
{
	using TClass = AUnrealSamplesGameMode;
	if (!Z_Registration_Info_UClass_AUnrealSamplesGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UnrealSamplesGameMode"),
			Z_Registration_Info_UClass_AUnrealSamplesGameMode.InnerSingleton,
			StaticRegisterNativesAUnrealSamplesGameMode,
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
	return Z_Registration_Info_UClass_AUnrealSamplesGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AUnrealSamplesGameMode_NoRegister()
{
	return AUnrealSamplesGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AUnrealSamplesGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UnrealSamplesGameMode.h" },
		{ "ModuleRelativePath", "UnrealSamplesGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealSamplesGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUnrealSamplesGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealSamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealSamplesGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnrealSamplesGameMode_Statics::ClassParams = {
	&AUnrealSamplesGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealSamplesGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUnrealSamplesGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUnrealSamplesGameMode()
{
	if (!Z_Registration_Info_UClass_AUnrealSamplesGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnrealSamplesGameMode.OuterSingleton, Z_Construct_UClass_AUnrealSamplesGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUnrealSamplesGameMode.OuterSingleton;
}
AUnrealSamplesGameMode::AUnrealSamplesGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealSamplesGameMode);
AUnrealSamplesGameMode::~AUnrealSamplesGameMode() {}
// ********** End Class AUnrealSamplesGameMode *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_UnrealSamplesGameMode_h__Script_UnrealSamples_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUnrealSamplesGameMode, AUnrealSamplesGameMode::StaticClass, TEXT("AUnrealSamplesGameMode"), &Z_Registration_Info_UClass_AUnrealSamplesGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnrealSamplesGameMode), 3736925856U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_UnrealSamplesGameMode_h__Script_UnrealSamples_3753085733(TEXT("/Script/UnrealSamples"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_UnrealSamplesGameMode_h__Script_UnrealSamples_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_UnrealSamplesGameMode_h__Script_UnrealSamples_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
