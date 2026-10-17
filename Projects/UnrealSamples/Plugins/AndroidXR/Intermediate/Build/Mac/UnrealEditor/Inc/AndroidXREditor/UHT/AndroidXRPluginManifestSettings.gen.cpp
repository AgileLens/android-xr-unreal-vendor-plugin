// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRPluginManifestSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRPluginManifestSettings() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXREDITOR_API UClass* Z_Construct_UClass_UAndroidXRPluginManifestSettings();
ANDROIDXREDITOR_API UClass* Z_Construct_UClass_UAndroidXRPluginManifestSettings_NoRegister();
ANDROIDXREDITOR_API UClass* Z_Construct_UClass_UAndroidXRRuntimeManifestSettings();
ANDROIDXREDITOR_API UClass* Z_Construct_UClass_UAndroidXRRuntimeManifestSettings_NoRegister();
ANDROIDXREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRPluginManifest();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AndroidXREditor();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FAndroidXRPluginManifest ******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAndroidXRPluginManifest;
class UScriptStruct* FAndroidXRPluginManifest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRPluginManifest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAndroidXRPluginManifest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidXRPluginManifest, (UObject*)Z_Construct_UPackage__Script_AndroidXREditor(), TEXT("AndroidXRPluginManifest"));
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRPluginManifest.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAndroidXRPluginManifest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AndroidXRPluginManifestSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PluginName_MetaData[] = {
		{ "ModuleRelativePath", "Public/AndroidXRPluginManifestSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HardwareFeatures_MetaData[] = {
		{ "ModuleRelativePath", "Public/AndroidXRPluginManifestSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpatialSDKLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/AndroidXRPluginManifestSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PluginName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HardwareFeatures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HardwareFeatures;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpatialSDKLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidXRPluginManifest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAndroidXRPluginManifest_Statics::NewProp_PluginName = { "PluginName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRPluginManifest, PluginName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PluginName_MetaData), NewProp_PluginName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAndroidXRPluginManifest_Statics::NewProp_HardwareFeatures_Inner = { "HardwareFeatures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAndroidXRPluginManifest_Statics::NewProp_HardwareFeatures = { "HardwareFeatures", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRPluginManifest, HardwareFeatures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HardwareFeatures_MetaData), NewProp_HardwareFeatures_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAndroidXRPluginManifest_Statics::NewProp_SpatialSDKLevel = { "SpatialSDKLevel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRPluginManifest, SpatialSDKLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpatialSDKLevel_MetaData), NewProp_SpatialSDKLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAndroidXRPluginManifest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRPluginManifest_Statics::NewProp_PluginName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRPluginManifest_Statics::NewProp_HardwareFeatures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRPluginManifest_Statics::NewProp_HardwareFeatures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRPluginManifest_Statics::NewProp_SpatialSDKLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRPluginManifest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidXRPluginManifest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXREditor,
	nullptr,
	&NewStructOps,
	"AndroidXRPluginManifest",
	Z_Construct_UScriptStruct_FAndroidXRPluginManifest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRPluginManifest_Statics::PropPointers),
	sizeof(FAndroidXRPluginManifest),
	alignof(FAndroidXRPluginManifest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRPluginManifest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAndroidXRPluginManifest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRPluginManifest()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRPluginManifest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAndroidXRPluginManifest.InnerSingleton, Z_Construct_UScriptStruct_FAndroidXRPluginManifest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRPluginManifest.InnerSingleton;
}
// ********** End ScriptStruct FAndroidXRPluginManifest ********************************************

// ********** Begin Class UAndroidXRPluginManifestSettings *****************************************
void UAndroidXRPluginManifestSettings::StaticRegisterNativesUAndroidXRPluginManifestSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRPluginManifestSettings;
UClass* UAndroidXRPluginManifestSettings::GetPrivateStaticClass()
{
	using TClass = UAndroidXRPluginManifestSettings;
	if (!Z_Registration_Info_UClass_UAndroidXRPluginManifestSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRPluginManifestSettings"),
			Z_Registration_Info_UClass_UAndroidXRPluginManifestSettings.InnerSingleton,
			StaticRegisterNativesUAndroidXRPluginManifestSettings,
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
	return Z_Registration_Info_UClass_UAndroidXRPluginManifestSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRPluginManifestSettings_NoRegister()
{
	return UAndroidXRPluginManifestSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRPluginManifestSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AndroidXRPluginManifestSettings.h" },
		{ "ModuleRelativePath", "Public/AndroidXRPluginManifestSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PluginFeatures_MetaData[] = {
		{ "ModuleRelativePath", "Public/AndroidXRPluginManifestSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PluginFeatures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PluginFeatures;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRPluginManifestSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidXRPluginManifestSettings_Statics::NewProp_PluginFeatures_Inner = { "PluginFeatures", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAndroidXRPluginManifest, METADATA_PARAMS(0, nullptr) }; // 441293631
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAndroidXRPluginManifestSettings_Statics::NewProp_PluginFeatures = { "PluginFeatures", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRPluginManifestSettings, PluginFeatures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PluginFeatures_MetaData), NewProp_PluginFeatures_MetaData) }; // 441293631
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidXRPluginManifestSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRPluginManifestSettings_Statics::NewProp_PluginFeatures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRPluginManifestSettings_Statics::NewProp_PluginFeatures,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRPluginManifestSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAndroidXRPluginManifestSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXREditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRPluginManifestSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRPluginManifestSettings_Statics::ClassParams = {
	&UAndroidXRPluginManifestSettings::StaticClass,
	"AndroidXR",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAndroidXRPluginManifestSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRPluginManifestSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRPluginManifestSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRPluginManifestSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRPluginManifestSettings()
{
	if (!Z_Registration_Info_UClass_UAndroidXRPluginManifestSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRPluginManifestSettings.OuterSingleton, Z_Construct_UClass_UAndroidXRPluginManifestSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRPluginManifestSettings.OuterSingleton;
}
UAndroidXRPluginManifestSettings::UAndroidXRPluginManifestSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRPluginManifestSettings);
UAndroidXRPluginManifestSettings::~UAndroidXRPluginManifestSettings() {}
// ********** End Class UAndroidXRPluginManifestSettings *******************************************

// ********** Begin Class UAndroidXRRuntimeManifestSettings Function GetRegisteredHardwareFeatures *
struct Z_Construct_UFunction_UAndroidXRRuntimeManifestSettings_GetRegisteredHardwareFeatures_Statics
{
	struct AndroidXRRuntimeManifestSettings_eventGetRegisteredHardwareFeatures_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AndroidXRPluginManifestSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAndroidXRRuntimeManifestSettings_GetRegisteredHardwareFeatures_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAndroidXRRuntimeManifestSettings_GetRegisteredHardwareFeatures_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRRuntimeManifestSettings_eventGetRegisteredHardwareFeatures_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRRuntimeManifestSettings_GetRegisteredHardwareFeatures_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRRuntimeManifestSettings_GetRegisteredHardwareFeatures_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRRuntimeManifestSettings_GetRegisteredHardwareFeatures_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRRuntimeManifestSettings_GetRegisteredHardwareFeatures_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRRuntimeManifestSettings_GetRegisteredHardwareFeatures_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRRuntimeManifestSettings, nullptr, "GetRegisteredHardwareFeatures", Z_Construct_UFunction_UAndroidXRRuntimeManifestSettings_GetRegisteredHardwareFeatures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRRuntimeManifestSettings_GetRegisteredHardwareFeatures_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRRuntimeManifestSettings_GetRegisteredHardwareFeatures_Statics::AndroidXRRuntimeManifestSettings_eventGetRegisteredHardwareFeatures_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRRuntimeManifestSettings_GetRegisteredHardwareFeatures_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRRuntimeManifestSettings_GetRegisteredHardwareFeatures_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRRuntimeManifestSettings_GetRegisteredHardwareFeatures_Statics::AndroidXRRuntimeManifestSettings_eventGetRegisteredHardwareFeatures_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRRuntimeManifestSettings_GetRegisteredHardwareFeatures()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRRuntimeManifestSettings_GetRegisteredHardwareFeatures_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRRuntimeManifestSettings::execGetRegisteredHardwareFeatures)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetRegisteredHardwareFeatures();
	P_NATIVE_END;
}
// ********** End Class UAndroidXRRuntimeManifestSettings Function GetRegisteredHardwareFeatures ***

// ********** Begin Class UAndroidXRRuntimeManifestSettings ****************************************
void UAndroidXRRuntimeManifestSettings::StaticRegisterNativesUAndroidXRRuntimeManifestSettings()
{
	UClass* Class = UAndroidXRRuntimeManifestSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetRegisteredHardwareFeatures", &UAndroidXRRuntimeManifestSettings::execGetRegisteredHardwareFeatures },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRRuntimeManifestSettings;
UClass* UAndroidXRRuntimeManifestSettings::GetPrivateStaticClass()
{
	using TClass = UAndroidXRRuntimeManifestSettings;
	if (!Z_Registration_Info_UClass_UAndroidXRRuntimeManifestSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRRuntimeManifestSettings"),
			Z_Registration_Info_UClass_UAndroidXRRuntimeManifestSettings.InnerSingleton,
			StaticRegisterNativesUAndroidXRRuntimeManifestSettings,
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
	return Z_Registration_Info_UClass_UAndroidXRRuntimeManifestSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRRuntimeManifestSettings_NoRegister()
{
	return UAndroidXRRuntimeManifestSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRRuntimeManifestSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AndroidXRPluginManifestSettings.h" },
		{ "ModuleRelativePath", "Public/AndroidXRPluginManifestSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePermissions_MetaData[] = {
		{ "Category", "AndroidXRRuntimeManifestSettings" },
		{ "ModuleRelativePath", "Public/AndroidXRPluginManifestSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredHardwareFeatures_MetaData[] = {
		{ "Category", "AndroidXRRuntimeManifestSettings" },
		{ "GetOptions", "GetRegisteredHardwareFeatures" },
		{ "ModuleRelativePath", "Public/AndroidXRPluginManifestSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequireSpatialSDK_MetaData[] = {
		{ "Category", "AndroidXRRuntimeManifestSettings" },
		{ "ModuleRelativePath", "Public/AndroidXRPluginManifestSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnablePermissions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePermissions;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RequiredHardwareFeatures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RequiredHardwareFeatures;
	static void NewProp_bRequireSpatialSDK_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireSpatialSDK;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidXRRuntimeManifestSettings_GetRegisteredHardwareFeatures, "GetRegisteredHardwareFeatures" }, // 1918463376
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRRuntimeManifestSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAndroidXRRuntimeManifestSettings_Statics::NewProp_bEnablePermissions_SetBit(void* Obj)
{
	((UAndroidXRRuntimeManifestSettings*)Obj)->bEnablePermissions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidXRRuntimeManifestSettings_Statics::NewProp_bEnablePermissions = { "bEnablePermissions", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAndroidXRRuntimeManifestSettings), &Z_Construct_UClass_UAndroidXRRuntimeManifestSettings_Statics::NewProp_bEnablePermissions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnablePermissions_MetaData), NewProp_bEnablePermissions_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAndroidXRRuntimeManifestSettings_Statics::NewProp_RequiredHardwareFeatures_Inner = { "RequiredHardwareFeatures", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAndroidXRRuntimeManifestSettings_Statics::NewProp_RequiredHardwareFeatures = { "RequiredHardwareFeatures", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRRuntimeManifestSettings, RequiredHardwareFeatures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredHardwareFeatures_MetaData), NewProp_RequiredHardwareFeatures_MetaData) };
void Z_Construct_UClass_UAndroidXRRuntimeManifestSettings_Statics::NewProp_bRequireSpatialSDK_SetBit(void* Obj)
{
	((UAndroidXRRuntimeManifestSettings*)Obj)->bRequireSpatialSDK = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidXRRuntimeManifestSettings_Statics::NewProp_bRequireSpatialSDK = { "bRequireSpatialSDK", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAndroidXRRuntimeManifestSettings), &Z_Construct_UClass_UAndroidXRRuntimeManifestSettings_Statics::NewProp_bRequireSpatialSDK_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequireSpatialSDK_MetaData), NewProp_bRequireSpatialSDK_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidXRRuntimeManifestSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRRuntimeManifestSettings_Statics::NewProp_bEnablePermissions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRRuntimeManifestSettings_Statics::NewProp_RequiredHardwareFeatures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRRuntimeManifestSettings_Statics::NewProp_RequiredHardwareFeatures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRRuntimeManifestSettings_Statics::NewProp_bRequireSpatialSDK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRRuntimeManifestSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAndroidXRRuntimeManifestSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXREditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRRuntimeManifestSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRRuntimeManifestSettings_Statics::ClassParams = {
	&UAndroidXRRuntimeManifestSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAndroidXRRuntimeManifestSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRRuntimeManifestSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRRuntimeManifestSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRRuntimeManifestSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRRuntimeManifestSettings()
{
	if (!Z_Registration_Info_UClass_UAndroidXRRuntimeManifestSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRRuntimeManifestSettings.OuterSingleton, Z_Construct_UClass_UAndroidXRRuntimeManifestSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRRuntimeManifestSettings.OuterSingleton;
}
UAndroidXRRuntimeManifestSettings::UAndroidXRRuntimeManifestSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRRuntimeManifestSettings);
UAndroidXRRuntimeManifestSettings::~UAndroidXRRuntimeManifestSettings() {}
// ********** End Class UAndroidXRRuntimeManifestSettings ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXREditor_Public_AndroidXRPluginManifestSettings_h__Script_AndroidXREditor_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAndroidXRPluginManifest::StaticStruct, Z_Construct_UScriptStruct_FAndroidXRPluginManifest_Statics::NewStructOps, TEXT("AndroidXRPluginManifest"), &Z_Registration_Info_UScriptStruct_FAndroidXRPluginManifest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAndroidXRPluginManifest), 441293631U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXRPluginManifestSettings, UAndroidXRPluginManifestSettings::StaticClass, TEXT("UAndroidXRPluginManifestSettings"), &Z_Registration_Info_UClass_UAndroidXRPluginManifestSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRPluginManifestSettings), 3184123741U) },
		{ Z_Construct_UClass_UAndroidXRRuntimeManifestSettings, UAndroidXRRuntimeManifestSettings::StaticClass, TEXT("UAndroidXRRuntimeManifestSettings"), &Z_Registration_Info_UClass_UAndroidXRRuntimeManifestSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRRuntimeManifestSettings), 2290679825U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXREditor_Public_AndroidXRPluginManifestSettings_h__Script_AndroidXREditor_2227189190(TEXT("/Script/AndroidXREditor"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXREditor_Public_AndroidXRPluginManifestSettings_h__Script_AndroidXREditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXREditor_Public_AndroidXRPluginManifestSettings_h__Script_AndroidXREditor_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXREditor_Public_AndroidXRPluginManifestSettings_h__Script_AndroidXREditor_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXREditor_Public_AndroidXRPluginManifestSettings_h__Script_AndroidXREditor_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
