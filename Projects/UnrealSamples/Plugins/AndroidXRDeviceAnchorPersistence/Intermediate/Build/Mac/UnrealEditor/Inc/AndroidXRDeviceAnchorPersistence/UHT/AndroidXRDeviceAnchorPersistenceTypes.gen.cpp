// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRDeviceAnchorPersistenceTypes.h"
#include "AndroidXRTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRDeviceAnchorPersistenceTypes() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRSpace();
ANDROIDXRDEVICEANCHORPERSISTENCE_API UEnum* Z_Construct_UEnum_AndroidXRDeviceAnchorPersistence_EAndroidXRAnchorPersistState();
ANDROIDXRDEVICEANCHORPERSISTENCE_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRDeviceAnchor();
ANDROIDXRDEVICEANCHORPERSISTENCE_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRDeviceAnchorPersistence();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
UPackage* Z_Construct_UPackage__Script_AndroidXRDeviceAnchorPersistence();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FAndroidXRDeviceAnchor ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAndroidXRDeviceAnchor;
class UScriptStruct* FAndroidXRDeviceAnchor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRDeviceAnchor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAndroidXRDeviceAnchor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidXRDeviceAnchor, (UObject*)Z_Construct_UPackage__Script_AndroidXRDeviceAnchorPersistence(), TEXT("AndroidXRDeviceAnchor"));
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRDeviceAnchor.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAndroidXRDeviceAnchor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Contains FAndroidXRSpace associated with an anchor, along with\n * an FGuid that uniquely identifies the anchor (if persisted).\n */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRDeviceAnchorPersistenceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains FAndroidXRSpace associated with an anchor, along with\nan FGuid that uniquely identifies the anchor (if persisted)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[] = {
		{ "Category", "AndroidXR|DeviceAnchor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The space that represents this anchor\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRDeviceAnchorPersistenceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The space that represents this anchor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersistedID_MetaData[] = {
		{ "Category", "AndroidXR|DeviceAnchor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If the anchor is persisted this will be a valid UUID\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRDeviceAnchorPersistenceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the anchor is persisted this will be a valid UUID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "AndroidXR|DeviceAnchor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Last located transform of the anchor's space\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRDeviceAnchorPersistenceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Last located transform of the anchor's space" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Space;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PersistedID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidXRDeviceAnchor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRDeviceAnchor_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRDeviceAnchor, Space), Z_Construct_UScriptStruct_FAndroidXRSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Space_MetaData), NewProp_Space_MetaData) }; // 1341678083
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRDeviceAnchor_Statics::NewProp_PersistedID = { "PersistedID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRDeviceAnchor, PersistedID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersistedID_MetaData), NewProp_PersistedID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRDeviceAnchor_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRDeviceAnchor, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAndroidXRDeviceAnchor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRDeviceAnchor_Statics::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRDeviceAnchor_Statics::NewProp_PersistedID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRDeviceAnchor_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRDeviceAnchor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidXRDeviceAnchor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRDeviceAnchorPersistence,
	nullptr,
	&NewStructOps,
	"AndroidXRDeviceAnchor",
	Z_Construct_UScriptStruct_FAndroidXRDeviceAnchor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRDeviceAnchor_Statics::PropPointers),
	sizeof(FAndroidXRDeviceAnchor),
	alignof(FAndroidXRDeviceAnchor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRDeviceAnchor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAndroidXRDeviceAnchor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRDeviceAnchor()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRDeviceAnchor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAndroidXRDeviceAnchor.InnerSingleton, Z_Construct_UScriptStruct_FAndroidXRDeviceAnchor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRDeviceAnchor.InnerSingleton;
}
// ********** End ScriptStruct FAndroidXRDeviceAnchor **********************************************

// ********** Begin ScriptStruct FAndroidXRDeviceAnchorPersistence *********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAndroidXRDeviceAnchorPersistence;
class UScriptStruct* FAndroidXRDeviceAnchorPersistence::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRDeviceAnchorPersistence.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAndroidXRDeviceAnchorPersistence.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidXRDeviceAnchorPersistence, (UObject*)Z_Construct_UPackage__Script_AndroidXRDeviceAnchorPersistence(), TEXT("AndroidXRDeviceAnchorPersistence"));
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRDeviceAnchorPersistence.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAndroidXRDeviceAnchorPersistence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Contains opaque pointer to XrDeviceAnchorPersistenceANDROID.\n */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRDeviceAnchorPersistenceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains opaque pointer to XrDeviceAnchorPersistenceANDROID." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidXRDeviceAnchorPersistence>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidXRDeviceAnchorPersistence_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRDeviceAnchorPersistence,
	nullptr,
	&NewStructOps,
	"AndroidXRDeviceAnchorPersistence",
	nullptr,
	0,
	sizeof(FAndroidXRDeviceAnchorPersistence),
	alignof(FAndroidXRDeviceAnchorPersistence),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRDeviceAnchorPersistence_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAndroidXRDeviceAnchorPersistence_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRDeviceAnchorPersistence()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRDeviceAnchorPersistence.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAndroidXRDeviceAnchorPersistence.InnerSingleton, Z_Construct_UScriptStruct_FAndroidXRDeviceAnchorPersistence_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRDeviceAnchorPersistence.InnerSingleton;
}
// ********** End ScriptStruct FAndroidXRDeviceAnchorPersistence ***********************************

// ********** Begin Enum EAndroidXRAnchorPersistState **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAndroidXRAnchorPersistState;
static UEnum* EAndroidXRAnchorPersistState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRAnchorPersistState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAndroidXRAnchorPersistState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXRDeviceAnchorPersistence_EAndroidXRAnchorPersistState, (UObject*)Z_Construct_UPackage__Script_AndroidXRDeviceAnchorPersistence(), TEXT("EAndroidXRAnchorPersistState"));
	}
	return Z_Registration_Info_UEnum_EAndroidXRAnchorPersistState.OuterSingleton;
}
template<> ANDROIDXRDEVICEANCHORPERSISTENCE_API UEnum* StaticEnum<EAndroidXRAnchorPersistState>()
{
	return EAndroidXRAnchorPersistState_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXRDeviceAnchorPersistence_EAndroidXRAnchorPersistState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Anchor persist state\n */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRDeviceAnchorPersistenceTypes.h" },
		{ "Persisted.Comment", "// Anchor has been successfully persisted by the runtime.\n" },
		{ "Persisted.Name", "EAndroidXRAnchorPersistState::Persisted" },
		{ "Persisted.ToolTip", "Anchor has been successfully persisted by the runtime." },
		{ "PersistNotRequested.Comment", "// Anchor has not been requested to be persisted by the app.\n" },
		{ "PersistNotRequested.Name", "EAndroidXRAnchorPersistState::PersistNotRequested" },
		{ "PersistNotRequested.ToolTip", "Anchor has not been requested to be persisted by the app." },
		{ "PersistPending.Comment", "// Anchor has been requested to be persisted but not persisted yet.\n" },
		{ "PersistPending.Name", "EAndroidXRAnchorPersistState::PersistPending" },
		{ "PersistPending.ToolTip", "Anchor has been requested to be persisted but not persisted yet." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Anchor persist state" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAndroidXRAnchorPersistState::PersistNotRequested", (int64)EAndroidXRAnchorPersistState::PersistNotRequested },
		{ "EAndroidXRAnchorPersistState::PersistPending", (int64)EAndroidXRAnchorPersistState::PersistPending },
		{ "EAndroidXRAnchorPersistState::Persisted", (int64)EAndroidXRAnchorPersistState::Persisted },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXRDeviceAnchorPersistence_EAndroidXRAnchorPersistState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXRDeviceAnchorPersistence,
	nullptr,
	"EAndroidXRAnchorPersistState",
	"EAndroidXRAnchorPersistState",
	Z_Construct_UEnum_AndroidXRDeviceAnchorPersistence_EAndroidXRAnchorPersistState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXRDeviceAnchorPersistence_EAndroidXRAnchorPersistState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXRDeviceAnchorPersistence_EAndroidXRAnchorPersistState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXRDeviceAnchorPersistence_EAndroidXRAnchorPersistState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXRDeviceAnchorPersistence_EAndroidXRAnchorPersistState()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRAnchorPersistState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAndroidXRAnchorPersistState.InnerSingleton, Z_Construct_UEnum_AndroidXRDeviceAnchorPersistence_EAndroidXRAnchorPersistState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAndroidXRAnchorPersistState.InnerSingleton;
}
// ********** End Enum EAndroidXRAnchorPersistState ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceTypes_h__Script_AndroidXRDeviceAnchorPersistence_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAndroidXRAnchorPersistState_StaticEnum, TEXT("EAndroidXRAnchorPersistState"), &Z_Registration_Info_UEnum_EAndroidXRAnchorPersistState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2793169704U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAndroidXRDeviceAnchor::StaticStruct, Z_Construct_UScriptStruct_FAndroidXRDeviceAnchor_Statics::NewStructOps, TEXT("AndroidXRDeviceAnchor"), &Z_Registration_Info_UScriptStruct_FAndroidXRDeviceAnchor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAndroidXRDeviceAnchor), 2793907335U) },
		{ FAndroidXRDeviceAnchorPersistence::StaticStruct, Z_Construct_UScriptStruct_FAndroidXRDeviceAnchorPersistence_Statics::NewStructOps, TEXT("AndroidXRDeviceAnchorPersistence"), &Z_Registration_Info_UScriptStruct_FAndroidXRDeviceAnchorPersistence, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAndroidXRDeviceAnchorPersistence), 2491815904U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceTypes_h__Script_AndroidXRDeviceAnchorPersistence_3007146632(TEXT("/Script/AndroidXRDeviceAnchorPersistence"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceTypes_h__Script_AndroidXRDeviceAnchorPersistence_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceTypes_h__Script_AndroidXRDeviceAnchorPersistence_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceTypes_h__Script_AndroidXRDeviceAnchorPersistence_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceTypes_h__Script_AndroidXRDeviceAnchorPersistence_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
