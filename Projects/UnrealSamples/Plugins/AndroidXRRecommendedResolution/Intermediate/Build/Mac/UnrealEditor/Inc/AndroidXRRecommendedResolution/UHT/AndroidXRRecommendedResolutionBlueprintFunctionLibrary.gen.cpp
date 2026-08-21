// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRRecommendedResolutionBlueprintFunctionLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRRecommendedResolutionBlueprintFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXRRECOMMENDEDRESOLUTION_API UClass* Z_Construct_UClass_UAndroidXRRecommendedResolutionBlueprintFunctionLibrary();
ANDROIDXRRECOMMENDEDRESOLUTION_API UClass* Z_Construct_UClass_UAndroidXRRecommendedResolutionBlueprintFunctionLibrary_NoRegister();
ANDROIDXRRECOMMENDEDRESOLUTION_API UClass* Z_Construct_UClass_UAndroidXRRecommendedResolutionEventProxy_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AndroidXRRecommendedResolution();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAndroidXRRecommendedResolutionBlueprintFunctionLibrary Function GetEventProxy 
struct Z_Construct_UFunction_UAndroidXRRecommendedResolutionBlueprintFunctionLibrary_GetEventProxy_Statics
{
	struct AndroidXRRecommendedResolutionBlueprintFunctionLibrary_eventGetEventProxy_Parms
	{
		UAndroidXRRecommendedResolutionEventProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Recommended Resolution|Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Gets the AndroidXRRecommendedResolution event proxy, which allows users to bind to\n     * delegates which fired in response to XrEvents.\n     * @return AndroidXRRecommendedResolution event proxy static instance.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRRecommendedResolutionBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the AndroidXRRecommendedResolution event proxy, which allows users to bind to\ndelegates which fired in response to XrEvents.\n@return AndroidXRRecommendedResolution event proxy static instance." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAndroidXRRecommendedResolutionBlueprintFunctionLibrary_GetEventProxy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRRecommendedResolutionBlueprintFunctionLibrary_eventGetEventProxy_Parms, ReturnValue), Z_Construct_UClass_UAndroidXRRecommendedResolutionEventProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRRecommendedResolutionBlueprintFunctionLibrary_GetEventProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRRecommendedResolutionBlueprintFunctionLibrary_GetEventProxy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRRecommendedResolutionBlueprintFunctionLibrary_GetEventProxy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRRecommendedResolutionBlueprintFunctionLibrary_GetEventProxy_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRRecommendedResolutionBlueprintFunctionLibrary, nullptr, "GetEventProxy", Z_Construct_UFunction_UAndroidXRRecommendedResolutionBlueprintFunctionLibrary_GetEventProxy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRRecommendedResolutionBlueprintFunctionLibrary_GetEventProxy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRRecommendedResolutionBlueprintFunctionLibrary_GetEventProxy_Statics::AndroidXRRecommendedResolutionBlueprintFunctionLibrary_eventGetEventProxy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRRecommendedResolutionBlueprintFunctionLibrary_GetEventProxy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRRecommendedResolutionBlueprintFunctionLibrary_GetEventProxy_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRRecommendedResolutionBlueprintFunctionLibrary_GetEventProxy_Statics::AndroidXRRecommendedResolutionBlueprintFunctionLibrary_eventGetEventProxy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRRecommendedResolutionBlueprintFunctionLibrary_GetEventProxy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRRecommendedResolutionBlueprintFunctionLibrary_GetEventProxy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRRecommendedResolutionBlueprintFunctionLibrary::execGetEventProxy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAndroidXRRecommendedResolutionEventProxy**)Z_Param__Result=UAndroidXRRecommendedResolutionBlueprintFunctionLibrary::GetEventProxy();
	P_NATIVE_END;
}
// ********** End Class UAndroidXRRecommendedResolutionBlueprintFunctionLibrary Function GetEventProxy 

// ********** Begin Class UAndroidXRRecommendedResolutionBlueprintFunctionLibrary ******************
void UAndroidXRRecommendedResolutionBlueprintFunctionLibrary::StaticRegisterNativesUAndroidXRRecommendedResolutionBlueprintFunctionLibrary()
{
	UClass* Class = UAndroidXRRecommendedResolutionBlueprintFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEventProxy", &UAndroidXRRecommendedResolutionBlueprintFunctionLibrary::execGetEventProxy },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRRecommendedResolutionBlueprintFunctionLibrary;
UClass* UAndroidXRRecommendedResolutionBlueprintFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UAndroidXRRecommendedResolutionBlueprintFunctionLibrary;
	if (!Z_Registration_Info_UClass_UAndroidXRRecommendedResolutionBlueprintFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRRecommendedResolutionBlueprintFunctionLibrary"),
			Z_Registration_Info_UClass_UAndroidXRRecommendedResolutionBlueprintFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUAndroidXRRecommendedResolutionBlueprintFunctionLibrary,
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
	return Z_Registration_Info_UClass_UAndroidXRRecommendedResolutionBlueprintFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRRecommendedResolutionBlueprintFunctionLibrary_NoRegister()
{
	return UAndroidXRRecommendedResolutionBlueprintFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRRecommendedResolutionBlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AndroidXRRecommendedResolution" },
		{ "IncludePath", "AndroidXRRecommendedResolutionBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/AndroidXRRecommendedResolutionBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidXRRecommendedResolutionBlueprintFunctionLibrary_GetEventProxy, "GetEventProxy" }, // 3131265079
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRRecommendedResolutionBlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAndroidXRRecommendedResolutionBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRRecommendedResolution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRRecommendedResolutionBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRRecommendedResolutionBlueprintFunctionLibrary_Statics::ClassParams = {
	&UAndroidXRRecommendedResolutionBlueprintFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRRecommendedResolutionBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRRecommendedResolutionBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRRecommendedResolutionBlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UAndroidXRRecommendedResolutionBlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRRecommendedResolutionBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UAndroidXRRecommendedResolutionBlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRRecommendedResolutionBlueprintFunctionLibrary.OuterSingleton;
}
UAndroidXRRecommendedResolutionBlueprintFunctionLibrary::UAndroidXRRecommendedResolutionBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRRecommendedResolutionBlueprintFunctionLibrary);
UAndroidXRRecommendedResolutionBlueprintFunctionLibrary::~UAndroidXRRecommendedResolutionBlueprintFunctionLibrary() {}
// ********** End Class UAndroidXRRecommendedResolutionBlueprintFunctionLibrary ********************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRRecommendedResolution_Source_AndroidXRRecommendedResolution_Public_AndroidXRRecommendedResolutionBlueprintFunctionLibrary_h__Script_AndroidXRRecommendedResolution_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXRRecommendedResolutionBlueprintFunctionLibrary, UAndroidXRRecommendedResolutionBlueprintFunctionLibrary::StaticClass, TEXT("UAndroidXRRecommendedResolutionBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UAndroidXRRecommendedResolutionBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRRecommendedResolutionBlueprintFunctionLibrary), 4099902041U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRRecommendedResolution_Source_AndroidXRRecommendedResolution_Public_AndroidXRRecommendedResolutionBlueprintFunctionLibrary_h__Script_AndroidXRRecommendedResolution_840665416(TEXT("/Script/AndroidXRRecommendedResolution"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRRecommendedResolution_Source_AndroidXRRecommendedResolution_Public_AndroidXRRecommendedResolutionBlueprintFunctionLibrary_h__Script_AndroidXRRecommendedResolution_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRRecommendedResolution_Source_AndroidXRRecommendedResolution_Public_AndroidXRRecommendedResolutionBlueprintFunctionLibrary_h__Script_AndroidXRRecommendedResolution_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
