// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRTrackablesObjectTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRTrackablesObjectTypes() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXR_API UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRTrackingState();
ANDROIDXRTRACKABLESOBJECT_API UEnum* Z_Construct_UEnum_AndroidXRTrackablesObject_EAndroidXRTrackablesObjectLabel();
ANDROIDXRTRACKABLESOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRTrackableObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_AndroidXRTrackablesObject();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EAndroidXRTrackablesObjectLabel *******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAndroidXRTrackablesObjectLabel;
static UEnum* EAndroidXRTrackablesObjectLabel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRTrackablesObjectLabel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAndroidXRTrackablesObjectLabel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXRTrackablesObject_EAndroidXRTrackablesObjectLabel, (UObject*)Z_Construct_UPackage__Script_AndroidXRTrackablesObject(), TEXT("EAndroidXRTrackablesObjectLabel"));
	}
	return Z_Registration_Info_UEnum_EAndroidXRTrackablesObjectLabel.OuterSingleton;
}
template<> ANDROIDXRTRACKABLESOBJECT_API UEnum* StaticEnum<EAndroidXRTrackablesObjectLabel>()
{
	return EAndroidXRTrackablesObjectLabel_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXRTrackablesObject_EAndroidXRTrackablesObjectLabel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The object Label for the trackables object.\n */" },
#endif
		{ "Keyboard.Comment", "// The object Label for the trackables object is keyboard.\n" },
		{ "Keyboard.Name", "EAndroidXRTrackablesObjectLabel::Keyboard" },
		{ "Keyboard.ToolTip", "The object Label for the trackables object is keyboard." },
		{ "Laptop.Comment", "// The object Label for the trackables object is laptop.\n" },
		{ "Laptop.Name", "EAndroidXRTrackablesObjectLabel::Laptop" },
		{ "Laptop.ToolTip", "The object Label for the trackables object is laptop." },
		{ "ModuleRelativePath", "Public/AndroidXRTrackablesObjectTypes.h" },
		{ "Mouse.Comment", "// The object Label for the trackables object is mouse.\n" },
		{ "Mouse.Name", "EAndroidXRTrackablesObjectLabel::Mouse" },
		{ "Mouse.ToolTip", "The object Label for the trackables object is mouse." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The object Label for the trackables object." },
#endif
		{ "Unknown.Comment", "// The object Label for the trackables object is not known.\n" },
		{ "Unknown.Name", "EAndroidXRTrackablesObjectLabel::Unknown" },
		{ "Unknown.ToolTip", "The object Label for the trackables object is not known." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAndroidXRTrackablesObjectLabel::Unknown", (int64)EAndroidXRTrackablesObjectLabel::Unknown },
		{ "EAndroidXRTrackablesObjectLabel::Keyboard", (int64)EAndroidXRTrackablesObjectLabel::Keyboard },
		{ "EAndroidXRTrackablesObjectLabel::Mouse", (int64)EAndroidXRTrackablesObjectLabel::Mouse },
		{ "EAndroidXRTrackablesObjectLabel::Laptop", (int64)EAndroidXRTrackablesObjectLabel::Laptop },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXRTrackablesObject_EAndroidXRTrackablesObjectLabel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXRTrackablesObject,
	nullptr,
	"EAndroidXRTrackablesObjectLabel",
	"EAndroidXRTrackablesObjectLabel",
	Z_Construct_UEnum_AndroidXRTrackablesObject_EAndroidXRTrackablesObjectLabel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXRTrackablesObject_EAndroidXRTrackablesObjectLabel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXRTrackablesObject_EAndroidXRTrackablesObjectLabel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXRTrackablesObject_EAndroidXRTrackablesObjectLabel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXRTrackablesObject_EAndroidXRTrackablesObjectLabel()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRTrackablesObjectLabel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAndroidXRTrackablesObjectLabel.InnerSingleton, Z_Construct_UEnum_AndroidXRTrackablesObject_EAndroidXRTrackablesObjectLabel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAndroidXRTrackablesObjectLabel.InnerSingleton;
}
// ********** End Enum EAndroidXRTrackablesObjectLabel *********************************************

// ********** Begin ScriptStruct FAndroidXRTrackableObject *****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAndroidXRTrackableObject;
class UScriptStruct* FAndroidXRTrackableObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRTrackableObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAndroidXRTrackableObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidXRTrackableObject, (UObject*)Z_Construct_UPackage__Script_AndroidXRTrackablesObject(), TEXT("AndroidXRTrackableObject"));
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRTrackableObject.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAndroidXRTrackableObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The trackables object\n */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTrackablesObjectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The trackables object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackingState_MetaData[] = {
		{ "Category", "AndroidXR| Trackables Object" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tracking state\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTrackablesObjectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tracking state" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterPose_MetaData[] = {
		{ "Category", "AndroidXR| Trackables Object" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Center pose\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTrackablesObjectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Center pose" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extents_MetaData[] = {
		{ "Category", "AndroidXR| Trackables Object" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Extents (half width/height)\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTrackablesObjectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extents (half width/height)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectLabel_MetaData[] = {
		{ "Category", "AndroidXR| Trackables Object" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Object label\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTrackablesObjectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Object label" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastUpdatedTime_MetaData[] = {
		{ "Category", "AndroidXR| Trackables Object" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Last updated time\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTrackablesObjectTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Last updated time" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackingState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackingState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CenterPose;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Extents;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectLabel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ObjectLabel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastUpdatedTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidXRTrackableObject>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAndroidXRTrackableObject_Statics::NewProp_TrackingState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAndroidXRTrackableObject_Statics::NewProp_TrackingState = { "TrackingState", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRTrackableObject, TrackingState), Z_Construct_UEnum_AndroidXR_EAndroidXRTrackingState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackingState_MetaData), NewProp_TrackingState_MetaData) }; // 2331092526
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRTrackableObject_Statics::NewProp_CenterPose = { "CenterPose", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRTrackableObject, CenterPose), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterPose_MetaData), NewProp_CenterPose_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRTrackableObject_Statics::NewProp_Extents = { "Extents", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRTrackableObject, Extents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extents_MetaData), NewProp_Extents_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAndroidXRTrackableObject_Statics::NewProp_ObjectLabel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAndroidXRTrackableObject_Statics::NewProp_ObjectLabel = { "ObjectLabel", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRTrackableObject, ObjectLabel), Z_Construct_UEnum_AndroidXRTrackablesObject_EAndroidXRTrackablesObjectLabel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectLabel_MetaData), NewProp_ObjectLabel_MetaData) }; // 3767851020
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRTrackableObject_Statics::NewProp_LastUpdatedTime = { "LastUpdatedTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRTrackableObject, LastUpdatedTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastUpdatedTime_MetaData), NewProp_LastUpdatedTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAndroidXRTrackableObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRTrackableObject_Statics::NewProp_TrackingState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRTrackableObject_Statics::NewProp_TrackingState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRTrackableObject_Statics::NewProp_CenterPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRTrackableObject_Statics::NewProp_Extents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRTrackableObject_Statics::NewProp_ObjectLabel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRTrackableObject_Statics::NewProp_ObjectLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRTrackableObject_Statics::NewProp_LastUpdatedTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRTrackableObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidXRTrackableObject_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRTrackablesObject,
	nullptr,
	&NewStructOps,
	"AndroidXRTrackableObject",
	Z_Construct_UScriptStruct_FAndroidXRTrackableObject_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRTrackableObject_Statics::PropPointers),
	sizeof(FAndroidXRTrackableObject),
	alignof(FAndroidXRTrackableObject),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRTrackableObject_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAndroidXRTrackableObject_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRTrackableObject()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRTrackableObject.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAndroidXRTrackableObject.InnerSingleton, Z_Construct_UScriptStruct_FAndroidXRTrackableObject_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRTrackableObject.InnerSingleton;
}
// ********** End ScriptStruct FAndroidXRTrackableObject *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRTrackablesObject_Source_AndroidXRTrackablesObject_Public_AndroidXRTrackablesObjectTypes_h__Script_AndroidXRTrackablesObject_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAndroidXRTrackablesObjectLabel_StaticEnum, TEXT("EAndroidXRTrackablesObjectLabel"), &Z_Registration_Info_UEnum_EAndroidXRTrackablesObjectLabel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3767851020U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAndroidXRTrackableObject::StaticStruct, Z_Construct_UScriptStruct_FAndroidXRTrackableObject_Statics::NewStructOps, TEXT("AndroidXRTrackableObject"), &Z_Registration_Info_UScriptStruct_FAndroidXRTrackableObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAndroidXRTrackableObject), 1730924616U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRTrackablesObject_Source_AndroidXRTrackablesObject_Public_AndroidXRTrackablesObjectTypes_h__Script_AndroidXRTrackablesObject_798068713(TEXT("/Script/AndroidXRTrackablesObject"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRTrackablesObject_Source_AndroidXRTrackablesObject_Public_AndroidXRTrackablesObjectTypes_h__Script_AndroidXRTrackablesObject_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRTrackablesObject_Source_AndroidXRTrackablesObject_Public_AndroidXRTrackablesObjectTypes_h__Script_AndroidXRTrackablesObject_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRTrackablesObject_Source_AndroidXRTrackablesObject_Public_AndroidXRTrackablesObjectTypes_h__Script_AndroidXRTrackablesObject_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRTrackablesObject_Source_AndroidXRTrackablesObject_Public_AndroidXRTrackablesObjectTypes_h__Script_AndroidXRTrackablesObject_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
