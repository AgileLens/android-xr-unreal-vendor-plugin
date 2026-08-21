// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRSystemExtensionPropertiesTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRSystemExtensionPropertiesTypes() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXRSYSTEMEXTENSIONPROPERTIES_API UFunction* Z_Construct_UDelegateFunction_AndroidXRSystemExtensionProperties_AndroidXRSystemPropertiesChangedDynamicDelegate__DelegateSignature();
ANDROIDXRSYSTEMEXTENSIONPROPERTIES_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRSystemExtensionInformation();
UPackage* Z_Construct_UPackage__Script_AndroidXRSystemExtensionProperties();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FAndroidXRSystemExtensionInformation ******************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAndroidXRSystemExtensionInformation;
class UScriptStruct* FAndroidXRSystemExtensionInformation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRSystemExtensionInformation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAndroidXRSystemExtensionInformation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidXRSystemExtensionInformation, (UObject*)Z_Construct_UPackage__Script_AndroidXRSystemExtensionProperties(), TEXT("AndroidXRSystemExtensionInformation"));
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRSystemExtensionInformation.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAndroidXRSystemExtensionInformation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * System Extension Properties.\n */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSystemExtensionPropertiesTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "System Extension Properties." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtensionName_MetaData[] = {
		{ "Category", "AndroidXR|System Extension Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Extension name.\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSystemExtensionPropertiesTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extension name." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtensionVersion_MetaData[] = {
		{ "Category", "AndroidXR|System Extension Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Extension version.\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSystemExtensionPropertiesTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extension version." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSupported_MetaData[] = {
		{ "Category", "AndroidXR|System Extension Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates whether the extension is currently supported by the system.\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSystemExtensionPropertiesTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether the extension is currently supported by the system." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExtensionName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExtensionVersion;
	static void NewProp_bIsSupported_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSupported;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidXRSystemExtensionInformation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAndroidXRSystemExtensionInformation_Statics::NewProp_ExtensionName = { "ExtensionName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRSystemExtensionInformation, ExtensionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtensionName_MetaData), NewProp_ExtensionName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAndroidXRSystemExtensionInformation_Statics::NewProp_ExtensionVersion = { "ExtensionVersion", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRSystemExtensionInformation, ExtensionVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtensionVersion_MetaData), NewProp_ExtensionVersion_MetaData) };
void Z_Construct_UScriptStruct_FAndroidXRSystemExtensionInformation_Statics::NewProp_bIsSupported_SetBit(void* Obj)
{
	((FAndroidXRSystemExtensionInformation*)Obj)->bIsSupported = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAndroidXRSystemExtensionInformation_Statics::NewProp_bIsSupported = { "bIsSupported", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAndroidXRSystemExtensionInformation), &Z_Construct_UScriptStruct_FAndroidXRSystemExtensionInformation_Statics::NewProp_bIsSupported_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSupported_MetaData), NewProp_bIsSupported_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAndroidXRSystemExtensionInformation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRSystemExtensionInformation_Statics::NewProp_ExtensionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRSystemExtensionInformation_Statics::NewProp_ExtensionVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRSystemExtensionInformation_Statics::NewProp_bIsSupported,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRSystemExtensionInformation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidXRSystemExtensionInformation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRSystemExtensionProperties,
	nullptr,
	&NewStructOps,
	"AndroidXRSystemExtensionInformation",
	Z_Construct_UScriptStruct_FAndroidXRSystemExtensionInformation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRSystemExtensionInformation_Statics::PropPointers),
	sizeof(FAndroidXRSystemExtensionInformation),
	alignof(FAndroidXRSystemExtensionInformation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRSystemExtensionInformation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAndroidXRSystemExtensionInformation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRSystemExtensionInformation()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRSystemExtensionInformation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAndroidXRSystemExtensionInformation.InnerSingleton, Z_Construct_UScriptStruct_FAndroidXRSystemExtensionInformation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRSystemExtensionInformation.InnerSingleton;
}
// ********** End ScriptStruct FAndroidXRSystemExtensionInformation ********************************

// ********** Begin Delegate FAndroidXRSystemPropertiesChangedDynamicDelegate **********************
struct Z_Construct_UDelegateFunction_AndroidXRSystemExtensionProperties_AndroidXRSystemPropertiesChangedDynamicDelegate__DelegateSignature_Statics
{
	struct _Script_AndroidXRSystemExtensionProperties_eventAndroidXRSystemPropertiesChangedDynamicDelegate_Parms
	{
		TArray<FAndroidXRSystemExtensionInformation> ExtensionProperties;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Broadcast via the AndroidXRSystemExtensionProperties in the event of\n// XR_TYPE_EVENT_DATA_SYSTEM_PROPERTIES_CHANGED_ANDROID\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSystemExtensionPropertiesTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Broadcast via the AndroidXRSystemExtensionProperties in the event of\nXR_TYPE_EVENT_DATA_SYSTEM_PROPERTIES_CHANGED_ANDROID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtensionProperties_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExtensionProperties_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExtensionProperties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AndroidXRSystemExtensionProperties_AndroidXRSystemPropertiesChangedDynamicDelegate__DelegateSignature_Statics::NewProp_ExtensionProperties_Inner = { "ExtensionProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAndroidXRSystemExtensionInformation, METADATA_PARAMS(0, nullptr) }; // 2830993253
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AndroidXRSystemExtensionProperties_AndroidXRSystemPropertiesChangedDynamicDelegate__DelegateSignature_Statics::NewProp_ExtensionProperties = { "ExtensionProperties", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AndroidXRSystemExtensionProperties_eventAndroidXRSystemPropertiesChangedDynamicDelegate_Parms, ExtensionProperties), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtensionProperties_MetaData), NewProp_ExtensionProperties_MetaData) }; // 2830993253
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AndroidXRSystemExtensionProperties_AndroidXRSystemPropertiesChangedDynamicDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AndroidXRSystemExtensionProperties_AndroidXRSystemPropertiesChangedDynamicDelegate__DelegateSignature_Statics::NewProp_ExtensionProperties_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AndroidXRSystemExtensionProperties_AndroidXRSystemPropertiesChangedDynamicDelegate__DelegateSignature_Statics::NewProp_ExtensionProperties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRSystemExtensionProperties_AndroidXRSystemPropertiesChangedDynamicDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AndroidXRSystemExtensionProperties_AndroidXRSystemPropertiesChangedDynamicDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AndroidXRSystemExtensionProperties, nullptr, "AndroidXRSystemPropertiesChangedDynamicDelegate__DelegateSignature", Z_Construct_UDelegateFunction_AndroidXRSystemExtensionProperties_AndroidXRSystemPropertiesChangedDynamicDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRSystemExtensionProperties_AndroidXRSystemPropertiesChangedDynamicDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AndroidXRSystemExtensionProperties_AndroidXRSystemPropertiesChangedDynamicDelegate__DelegateSignature_Statics::_Script_AndroidXRSystemExtensionProperties_eventAndroidXRSystemPropertiesChangedDynamicDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRSystemExtensionProperties_AndroidXRSystemPropertiesChangedDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AndroidXRSystemExtensionProperties_AndroidXRSystemPropertiesChangedDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AndroidXRSystemExtensionProperties_AndroidXRSystemPropertiesChangedDynamicDelegate__DelegateSignature_Statics::_Script_AndroidXRSystemExtensionProperties_eventAndroidXRSystemPropertiesChangedDynamicDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AndroidXRSystemExtensionProperties_AndroidXRSystemPropertiesChangedDynamicDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AndroidXRSystemExtensionProperties_AndroidXRSystemPropertiesChangedDynamicDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAndroidXRSystemPropertiesChangedDynamicDelegate_DelegateWrapper(const FMulticastScriptDelegate& AndroidXRSystemPropertiesChangedDynamicDelegate, TArray<FAndroidXRSystemExtensionInformation> const& ExtensionProperties)
{
	struct _Script_AndroidXRSystemExtensionProperties_eventAndroidXRSystemPropertiesChangedDynamicDelegate_Parms
	{
		TArray<FAndroidXRSystemExtensionInformation> ExtensionProperties;
	};
	_Script_AndroidXRSystemExtensionProperties_eventAndroidXRSystemPropertiesChangedDynamicDelegate_Parms Parms;
	Parms.ExtensionProperties=ExtensionProperties;
	AndroidXRSystemPropertiesChangedDynamicDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FAndroidXRSystemPropertiesChangedDynamicDelegate ************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSystemExtensionProperties_Source_AndroidXRSystemExtensionProperties_Public_AndroidXRSystemExtensionPropertiesTypes_h__Script_AndroidXRSystemExtensionProperties_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAndroidXRSystemExtensionInformation::StaticStruct, Z_Construct_UScriptStruct_FAndroidXRSystemExtensionInformation_Statics::NewStructOps, TEXT("AndroidXRSystemExtensionInformation"), &Z_Registration_Info_UScriptStruct_FAndroidXRSystemExtensionInformation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAndroidXRSystemExtensionInformation), 2830993253U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSystemExtensionProperties_Source_AndroidXRSystemExtensionProperties_Public_AndroidXRSystemExtensionPropertiesTypes_h__Script_AndroidXRSystemExtensionProperties_856046627(TEXT("/Script/AndroidXRSystemExtensionProperties"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSystemExtensionProperties_Source_AndroidXRSystemExtensionProperties_Public_AndroidXRSystemExtensionPropertiesTypes_h__Script_AndroidXRSystemExtensionProperties_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSystemExtensionProperties_Source_AndroidXRSystemExtensionProperties_Public_AndroidXRSystemExtensionPropertiesTypes_h__Script_AndroidXRSystemExtensionProperties_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
