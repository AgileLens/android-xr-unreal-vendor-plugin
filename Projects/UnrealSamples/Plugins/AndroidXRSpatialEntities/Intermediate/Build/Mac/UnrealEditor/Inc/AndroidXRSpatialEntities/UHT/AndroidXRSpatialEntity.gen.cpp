// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRSpatialEntity.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRSpatialEntity() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXRSPATIALENTITIES_API UClass* Z_Construct_UClass_UAndroidXRSpatialEntity();
ANDROIDXRSPATIALENTITIES_API UClass* Z_Construct_UClass_UAndroidXRSpatialEntity_NoRegister();
ANDROIDXRSPATIALENTITIES_API UEnum* Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialEntityTrackingState();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
UPackage* Z_Construct_UPackage__Script_AndroidXRSpatialEntities();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAndroidXRSpatialEntity **************************************************
void UAndroidXRSpatialEntity::StaticRegisterNativesUAndroidXRSpatialEntity()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRSpatialEntity;
UClass* UAndroidXRSpatialEntity::GetPrivateStaticClass()
{
	using TClass = UAndroidXRSpatialEntity;
	if (!Z_Registration_Info_UClass_UAndroidXRSpatialEntity.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRSpatialEntity"),
			Z_Registration_Info_UClass_UAndroidXRSpatialEntity.InnerSingleton,
			StaticRegisterNativesUAndroidXRSpatialEntity,
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
	return Z_Registration_Info_UClass_UAndroidXRSpatialEntity.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRSpatialEntity_NoRegister()
{
	return UAndroidXRSpatialEntity::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRSpatialEntity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* The base class for all spatial tracked entities\n*/" },
#endif
		{ "IncludePath", "AndroidXRSpatialEntity.h" },
		{ "ModuleRelativePath", "Public/AndroidXRSpatialEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The base class for all spatial tracked entities" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackingState_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Entity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The tracking state of this entity\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The tracking state of this entity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityId_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Entity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The Id of the entity\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Id of the entity" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackingState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackingState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntityId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRSpatialEntity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidXRSpatialEntity_Statics::NewProp_TrackingState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAndroidXRSpatialEntity_Statics::NewProp_TrackingState = { "TrackingState", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialEntity, TrackingState), Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialEntityTrackingState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackingState_MetaData), NewProp_TrackingState_MetaData) }; // 1393767310
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidXRSpatialEntity_Statics::NewProp_EntityId = { "EntityId", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialEntity, EntityId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityId_MetaData), NewProp_EntityId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidXRSpatialEntity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialEntity_Statics::NewProp_TrackingState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialEntity_Statics::NewProp_TrackingState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialEntity_Statics::NewProp_EntityId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialEntity_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAndroidXRSpatialEntity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRSpatialEntities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialEntity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRSpatialEntity_Statics::ClassParams = {
	&UAndroidXRSpatialEntity::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAndroidXRSpatialEntity_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialEntity_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialEntity_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRSpatialEntity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRSpatialEntity()
{
	if (!Z_Registration_Info_UClass_UAndroidXRSpatialEntity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRSpatialEntity.OuterSingleton, Z_Construct_UClass_UAndroidXRSpatialEntity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRSpatialEntity.OuterSingleton;
}
UAndroidXRSpatialEntity::UAndroidXRSpatialEntity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRSpatialEntity);
UAndroidXRSpatialEntity::~UAndroidXRSpatialEntity() {}
// ********** End Class UAndroidXRSpatialEntity ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialEntities_Source_AndroidXRSpatialEntities_Public_AndroidXRSpatialEntity_h__Script_AndroidXRSpatialEntities_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXRSpatialEntity, UAndroidXRSpatialEntity::StaticClass, TEXT("UAndroidXRSpatialEntity"), &Z_Registration_Info_UClass_UAndroidXRSpatialEntity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRSpatialEntity), 1647510174U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialEntities_Source_AndroidXRSpatialEntities_Public_AndroidXRSpatialEntity_h__Script_AndroidXRSpatialEntities_2861438473(TEXT("/Script/AndroidXRSpatialEntities"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialEntities_Source_AndroidXRSpatialEntities_Public_AndroidXRSpatialEntity_h__Script_AndroidXRSpatialEntities_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialEntities_Source_AndroidXRSpatialEntities_Public_AndroidXRSpatialEntity_h__Script_AndroidXRSpatialEntities_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
