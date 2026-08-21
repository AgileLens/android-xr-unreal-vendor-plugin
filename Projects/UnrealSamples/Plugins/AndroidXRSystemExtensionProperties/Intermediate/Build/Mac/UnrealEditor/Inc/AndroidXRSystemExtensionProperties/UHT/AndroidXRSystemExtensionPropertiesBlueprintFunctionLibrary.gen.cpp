// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary.h"
#include "AndroidXRSystemExtensionPropertiesTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXRSYSTEMEXTENSIONPROPERTIES_API UClass* Z_Construct_UClass_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary();
ANDROIDXRSYSTEMEXTENSIONPROPERTIES_API UClass* Z_Construct_UClass_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_NoRegister();
ANDROIDXRSYSTEMEXTENSIONPROPERTIES_API UClass* Z_Construct_UClass_UAndroidXRSystemExtensionPropertiesEventProxy_NoRegister();
ANDROIDXRSYSTEMEXTENSIONPROPERTIES_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRSystemExtensionInformation();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AndroidXRSystemExtensionProperties();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary Function EnumerateSystemExtensionProperties 
struct Z_Construct_UFunction_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_EnumerateSystemExtensionProperties_Statics
{
	struct AndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_eventEnumerateSystemExtensionProperties_Parms
	{
		TArray<FAndroidXRSystemExtensionInformation> ExtensionProperties;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|System Extension Properties Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n        * Get the current properties of extensions on the system.\n        *\n        * @param[out] An array of FAndroidXRSystemExtensionInformation containing\n        * extensions and their properties from the system.\n        * @return True if the underlying API call was successful.\n        */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the current properties of extensions on the system.\n\n@param[out] An array of FAndroidXRSystemExtensionInformation containing\nextensions and their properties from the system.\n@return True if the underlying API call was successful." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExtensionProperties_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExtensionProperties;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_EnumerateSystemExtensionProperties_Statics::NewProp_ExtensionProperties_Inner = { "ExtensionProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAndroidXRSystemExtensionInformation, METADATA_PARAMS(0, nullptr) }; // 2830993253
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_EnumerateSystemExtensionProperties_Statics::NewProp_ExtensionProperties = { "ExtensionProperties", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_eventEnumerateSystemExtensionProperties_Parms, ExtensionProperties), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2830993253
void Z_Construct_UFunction_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_EnumerateSystemExtensionProperties_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_eventEnumerateSystemExtensionProperties_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_EnumerateSystemExtensionProperties_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_eventEnumerateSystemExtensionProperties_Parms), &Z_Construct_UFunction_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_EnumerateSystemExtensionProperties_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_EnumerateSystemExtensionProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_EnumerateSystemExtensionProperties_Statics::NewProp_ExtensionProperties_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_EnumerateSystemExtensionProperties_Statics::NewProp_ExtensionProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_EnumerateSystemExtensionProperties_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_EnumerateSystemExtensionProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_EnumerateSystemExtensionProperties_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary, nullptr, "EnumerateSystemExtensionProperties", Z_Construct_UFunction_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_EnumerateSystemExtensionProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_EnumerateSystemExtensionProperties_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_EnumerateSystemExtensionProperties_Statics::AndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_eventEnumerateSystemExtensionProperties_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_EnumerateSystemExtensionProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_EnumerateSystemExtensionProperties_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_EnumerateSystemExtensionProperties_Statics::AndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_eventEnumerateSystemExtensionProperties_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_EnumerateSystemExtensionProperties()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_EnumerateSystemExtensionProperties_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary::execEnumerateSystemExtensionProperties)
{
	P_GET_TARRAY_REF(FAndroidXRSystemExtensionInformation,Z_Param_Out_ExtensionProperties);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary::EnumerateSystemExtensionProperties(Z_Param_Out_ExtensionProperties);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary Function EnumerateSystemExtensionProperties 

// ********** Begin Class UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary Function GetEventProxy 
struct Z_Construct_UFunction_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_GetEventProxy_Statics
{
	struct AndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_eventGetEventProxy_Parms
	{
		UAndroidXRSystemExtensionPropertiesEventProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|System Extension Properties Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n        * Gets the AndroidXRSystemExtensionProperties event proxy, which allows users to bind to\n        * delegates which fired in response to XrEvents.\n        * @return AndroidXRSystemExtensionProperties event proxy static instance.\n        */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the AndroidXRSystemExtensionProperties event proxy, which allows users to bind to\ndelegates which fired in response to XrEvents.\n@return AndroidXRSystemExtensionProperties event proxy static instance." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_GetEventProxy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_eventGetEventProxy_Parms, ReturnValue), Z_Construct_UClass_UAndroidXRSystemExtensionPropertiesEventProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_GetEventProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_GetEventProxy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_GetEventProxy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_GetEventProxy_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary, nullptr, "GetEventProxy", Z_Construct_UFunction_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_GetEventProxy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_GetEventProxy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_GetEventProxy_Statics::AndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_eventGetEventProxy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_GetEventProxy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_GetEventProxy_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_GetEventProxy_Statics::AndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_eventGetEventProxy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_GetEventProxy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_GetEventProxy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary::execGetEventProxy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAndroidXRSystemExtensionPropertiesEventProxy**)Z_Param__Result=UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary::GetEventProxy();
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary Function GetEventProxy 

// ********** Begin Class UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary **************
void UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary::StaticRegisterNativesUAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary()
{
	UClass* Class = UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnumerateSystemExtensionProperties", &UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary::execEnumerateSystemExtensionProperties },
		{ "GetEventProxy", &UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary::execGetEventProxy },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary;
UClass* UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary;
	if (!Z_Registration_Info_UClass_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary"),
			Z_Registration_Info_UClass_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary,
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
	return Z_Registration_Info_UClass_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_NoRegister()
{
	return UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AndroidXRSystemExtensionProperties" },
		{ "IncludePath", "AndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/AndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_EnumerateSystemExtensionProperties, "EnumerateSystemExtensionProperties" }, // 4285330696
		{ &Z_Construct_UFunction_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_GetEventProxy, "GetEventProxy" }, // 228877064
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRSystemExtensionProperties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_Statics::ClassParams = {
	&UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary.OuterSingleton;
}
UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary::UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary);
UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary::~UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary() {}
// ********** End Class UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary ****************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSystemExtensionProperties_Source_AndroidXRSystemExtensionProperties_Public_AndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_h__Script_AndroidXRSystemExtensionProperties_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary, UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary::StaticClass, TEXT("UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary), 3701975601U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSystemExtensionProperties_Source_AndroidXRSystemExtensionProperties_Public_AndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_h__Script_AndroidXRSystemExtensionProperties_2072506721(TEXT("/Script/AndroidXRSystemExtensionProperties"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSystemExtensionProperties_Source_AndroidXRSystemExtensionProperties_Public_AndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_h__Script_AndroidXRSystemExtensionProperties_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSystemExtensionProperties_Source_AndroidXRSystemExtensionProperties_Public_AndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary_h__Script_AndroidXRSystemExtensionProperties_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
