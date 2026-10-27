// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRSpatialAnchorEntity.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRSpatialAnchorEntity() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXRSPATIALANCHORS_API UClass* Z_Construct_UClass_UAndroidXRSpatialAnchorEntity();
ANDROIDXRSPATIALANCHORS_API UClass* Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_NoRegister();
ANDROIDXRSPATIALANCHORS_API UEnum* Z_Construct_UEnum_AndroidXRSpatialAnchors_ESpatialAnchorPeristenceResult();
ANDROIDXRSPATIALANCHORS_API UEnum* Z_Construct_UEnum_AndroidXRSpatialAnchors_ESpatialAnchorPersistState();
ANDROIDXRSPATIALANCHORS_API UFunction* Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationDelegate__DelegateSignature();
ANDROIDXRSPATIALANCHORS_API UFunction* Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationFailedDelegate__DelegateSignature();
ANDROIDXRSPATIALENTITIES_API UClass* Z_Construct_UClass_UAndroidXRSpatialEntity();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
UPackage* Z_Construct_UPackage__Script_AndroidXRSpatialAnchors();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAndroidXRSpatialAnchorEntity ********************************************
void UAndroidXRSpatialAnchorEntity::StaticRegisterNativesUAndroidXRSpatialAnchorEntity()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRSpatialAnchorEntity;
UClass* UAndroidXRSpatialAnchorEntity::GetPrivateStaticClass()
{
	using TClass = UAndroidXRSpatialAnchorEntity;
	if (!Z_Registration_Info_UClass_UAndroidXRSpatialAnchorEntity.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRSpatialAnchorEntity"),
			Z_Registration_Info_UClass_UAndroidXRSpatialAnchorEntity.InnerSingleton,
			StaticRegisterNativesUAndroidXRSpatialAnchorEntity,
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
	return Z_Registration_Info_UClass_UAndroidXRSpatialAnchorEntity.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_NoRegister()
{
	return UAndroidXRSpatialAnchorEntity::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* A tracked Anchor entity\n*/" },
#endif
		{ "IncludePath", "AndroidXRSpatialAnchorEntity.h" },
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A tracked Anchor entity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorTransform_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Anchors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The anchor's transform\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The anchor's transform" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorId_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Anchors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The Id of the anchor\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Id of the anchor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPersisted_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Anchors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Whether the anchor is persisted or not\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the anchor is persisted or not" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersistedId_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Anchors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * If persisted, the persisted anchor Id\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If persisted, the persisted anchor Id" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersistState_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Anchors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The persisted state of the anchor entity\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The persisted state of the anchor entity" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnchorTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnchorId;
	static void NewProp_bIsPersisted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPersisted;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PersistedId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PersistState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PersistState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRSpatialAnchorEntity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_Statics::NewProp_AnchorTransform = { "AnchorTransform", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialAnchorEntity, AnchorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorTransform_MetaData), NewProp_AnchorTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_Statics::NewProp_AnchorId = { "AnchorId", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialAnchorEntity, AnchorId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorId_MetaData), NewProp_AnchorId_MetaData) };
void Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_Statics::NewProp_bIsPersisted_SetBit(void* Obj)
{
	((UAndroidXRSpatialAnchorEntity*)Obj)->bIsPersisted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_Statics::NewProp_bIsPersisted = { "bIsPersisted", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAndroidXRSpatialAnchorEntity), &Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_Statics::NewProp_bIsPersisted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPersisted_MetaData), NewProp_bIsPersisted_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_Statics::NewProp_PersistedId = { "PersistedId", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialAnchorEntity, PersistedId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersistedId_MetaData), NewProp_PersistedId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_Statics::NewProp_PersistState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_Statics::NewProp_PersistState = { "PersistState", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialAnchorEntity, PersistState), Z_Construct_UEnum_AndroidXRSpatialAnchors_ESpatialAnchorPersistState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersistState_MetaData), NewProp_PersistState_MetaData) }; // 3704104938
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_Statics::NewProp_AnchorTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_Statics::NewProp_AnchorId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_Statics::NewProp_bIsPersisted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_Statics::NewProp_PersistedId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_Statics::NewProp_PersistState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_Statics::NewProp_PersistState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAndroidXRSpatialEntity,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRSpatialAnchors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_Statics::ClassParams = {
	&UAndroidXRSpatialAnchorEntity::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRSpatialAnchorEntity()
{
	if (!Z_Registration_Info_UClass_UAndroidXRSpatialAnchorEntity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRSpatialAnchorEntity.OuterSingleton, Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRSpatialAnchorEntity.OuterSingleton;
}
UAndroidXRSpatialAnchorEntity::UAndroidXRSpatialAnchorEntity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRSpatialAnchorEntity);
UAndroidXRSpatialAnchorEntity::~UAndroidXRSpatialAnchorEntity() {}
// ********** End Class UAndroidXRSpatialAnchorEntity **********************************************

// ********** Begin Delegate FAnchorPersistOperationDelegate ***************************************
struct Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationDelegate__DelegateSignature_Statics
{
	struct _Script_AndroidXRSpatialAnchors_eventAnchorPersistOperationDelegate_Parms
	{
		UAndroidXRSpatialAnchorEntity* Anchor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorEntity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Anchor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationDelegate__DelegateSignature_Statics::NewProp_Anchor = { "Anchor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AndroidXRSpatialAnchors_eventAnchorPersistOperationDelegate_Parms, Anchor), Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationDelegate__DelegateSignature_Statics::NewProp_Anchor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AndroidXRSpatialAnchors, nullptr, "AnchorPersistOperationDelegate__DelegateSignature", Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationDelegate__DelegateSignature_Statics::_Script_AndroidXRSpatialAnchors_eventAnchorPersistOperationDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationDelegate__DelegateSignature_Statics::_Script_AndroidXRSpatialAnchors_eventAnchorPersistOperationDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAnchorPersistOperationDelegate_DelegateWrapper(const FMulticastScriptDelegate& AnchorPersistOperationDelegate, UAndroidXRSpatialAnchorEntity* Anchor)
{
	struct _Script_AndroidXRSpatialAnchors_eventAnchorPersistOperationDelegate_Parms
	{
		UAndroidXRSpatialAnchorEntity* Anchor;
	};
	_Script_AndroidXRSpatialAnchors_eventAnchorPersistOperationDelegate_Parms Parms;
	Parms.Anchor=Anchor;
	AnchorPersistOperationDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FAnchorPersistOperationDelegate *****************************************

// ********** Begin Delegate FAnchorPersistOperationFailedDelegate *********************************
struct Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationFailedDelegate__DelegateSignature_Statics
{
	struct _Script_AndroidXRSpatialAnchors_eventAnchorPersistOperationFailedDelegate_Parms
	{
		ESpatialAnchorPeristenceResult FailureReason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorEntity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FailureReason_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FailureReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationFailedDelegate__DelegateSignature_Statics::NewProp_FailureReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationFailedDelegate__DelegateSignature_Statics::NewProp_FailureReason = { "FailureReason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AndroidXRSpatialAnchors_eventAnchorPersistOperationFailedDelegate_Parms, FailureReason), Z_Construct_UEnum_AndroidXRSpatialAnchors_ESpatialAnchorPeristenceResult, METADATA_PARAMS(0, nullptr) }; // 2812280769
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationFailedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationFailedDelegate__DelegateSignature_Statics::NewProp_FailureReason_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationFailedDelegate__DelegateSignature_Statics::NewProp_FailureReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationFailedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationFailedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AndroidXRSpatialAnchors, nullptr, "AnchorPersistOperationFailedDelegate__DelegateSignature", Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationFailedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationFailedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationFailedDelegate__DelegateSignature_Statics::_Script_AndroidXRSpatialAnchors_eventAnchorPersistOperationFailedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationFailedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationFailedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationFailedDelegate__DelegateSignature_Statics::_Script_AndroidXRSpatialAnchors_eventAnchorPersistOperationFailedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationFailedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationFailedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAnchorPersistOperationFailedDelegate_DelegateWrapper(const FMulticastScriptDelegate& AnchorPersistOperationFailedDelegate, ESpatialAnchorPeristenceResult FailureReason)
{
	struct _Script_AndroidXRSpatialAnchors_eventAnchorPersistOperationFailedDelegate_Parms
	{
		ESpatialAnchorPeristenceResult FailureReason;
	};
	_Script_AndroidXRSpatialAnchors_eventAnchorPersistOperationFailedDelegate_Parms Parms;
	Parms.FailureReason=FailureReason;
	AnchorPersistOperationFailedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FAnchorPersistOperationFailedDelegate ***********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorEntity_h__Script_AndroidXRSpatialAnchors_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXRSpatialAnchorEntity, UAndroidXRSpatialAnchorEntity::StaticClass, TEXT("UAndroidXRSpatialAnchorEntity"), &Z_Registration_Info_UClass_UAndroidXRSpatialAnchorEntity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRSpatialAnchorEntity), 2994569620U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorEntity_h__Script_AndroidXRSpatialAnchors_432989233(TEXT("/Script/AndroidXRSpatialAnchors"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorEntity_h__Script_AndroidXRSpatialAnchors_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorEntity_h__Script_AndroidXRSpatialAnchors_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
