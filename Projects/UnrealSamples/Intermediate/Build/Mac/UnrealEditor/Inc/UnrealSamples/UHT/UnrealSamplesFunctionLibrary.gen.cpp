// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealSamples/UnrealSamplesFunctionLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUnrealSamplesFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UNREALSAMPLES_API UClass* Z_Construct_UClass_UUnrealSamplesFunctionLibrary();
UNREALSAMPLES_API UClass* Z_Construct_UClass_UUnrealSamplesFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealSamples();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUnrealSamplesFunctionLibrary Function GetAllMapNames ********************
struct Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetAllMapNames_Statics
{
	struct UnrealSamplesFunctionLibrary_eventGetAllMapNames_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UnrealSamplesFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetAllMapNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetAllMapNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnrealSamplesFunctionLibrary_eventGetAllMapNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetAllMapNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetAllMapNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetAllMapNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetAllMapNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetAllMapNames_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnrealSamplesFunctionLibrary, nullptr, "GetAllMapNames", Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetAllMapNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetAllMapNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetAllMapNames_Statics::UnrealSamplesFunctionLibrary_eventGetAllMapNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetAllMapNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetAllMapNames_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetAllMapNames_Statics::UnrealSamplesFunctionLibrary_eventGetAllMapNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetAllMapNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetAllMapNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnrealSamplesFunctionLibrary::execGetAllMapNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=UUnrealSamplesFunctionLibrary::GetAllMapNames();
	P_NATIVE_END;
}
// ********** End Class UUnrealSamplesFunctionLibrary Function GetAllMapNames **********************

// ********** Begin Class UUnrealSamplesFunctionLibrary Function GetAverageFPS *********************
struct Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetAverageFPS_Statics
{
	struct UnrealSamplesFunctionLibrary_eventGetAverageFPS_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UnrealSamplesFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetAverageFPS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnrealSamplesFunctionLibrary_eventGetAverageFPS_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetAverageFPS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetAverageFPS_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetAverageFPS_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetAverageFPS_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnrealSamplesFunctionLibrary, nullptr, "GetAverageFPS", Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetAverageFPS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetAverageFPS_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetAverageFPS_Statics::UnrealSamplesFunctionLibrary_eventGetAverageFPS_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetAverageFPS_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetAverageFPS_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetAverageFPS_Statics::UnrealSamplesFunctionLibrary_eventGetAverageFPS_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetAverageFPS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetAverageFPS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnrealSamplesFunctionLibrary::execGetAverageFPS)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UUnrealSamplesFunctionLibrary::GetAverageFPS();
	P_NATIVE_END;
}
// ********** End Class UUnrealSamplesFunctionLibrary Function GetAverageFPS ***********************

// ********** Begin Class UUnrealSamplesFunctionLibrary Function GetCurrentMapName *****************
struct Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetCurrentMapName_Statics
{
	struct UnrealSamplesFunctionLibrary_eventGetCurrentMapName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UnrealSamplesFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetCurrentMapName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnrealSamplesFunctionLibrary_eventGetCurrentMapName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetCurrentMapName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetCurrentMapName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetCurrentMapName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetCurrentMapName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnrealSamplesFunctionLibrary, nullptr, "GetCurrentMapName", Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetCurrentMapName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetCurrentMapName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetCurrentMapName_Statics::UnrealSamplesFunctionLibrary_eventGetCurrentMapName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetCurrentMapName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetCurrentMapName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetCurrentMapName_Statics::UnrealSamplesFunctionLibrary_eventGetCurrentMapName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetCurrentMapName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetCurrentMapName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnrealSamplesFunctionLibrary::execGetCurrentMapName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UUnrealSamplesFunctionLibrary::GetCurrentMapName();
	P_NATIVE_END;
}
// ********** End Class UUnrealSamplesFunctionLibrary Function GetCurrentMapName *******************

// ********** Begin Class UUnrealSamplesFunctionLibrary Function IsPlatformAndroid *****************
struct Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_IsPlatformAndroid_Statics
{
	struct UnrealSamplesFunctionLibrary_eventIsPlatformAndroid_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UnrealSamplesFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_IsPlatformAndroid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UnrealSamplesFunctionLibrary_eventIsPlatformAndroid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_IsPlatformAndroid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UnrealSamplesFunctionLibrary_eventIsPlatformAndroid_Parms), &Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_IsPlatformAndroid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_IsPlatformAndroid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_IsPlatformAndroid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_IsPlatformAndroid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_IsPlatformAndroid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnrealSamplesFunctionLibrary, nullptr, "IsPlatformAndroid", Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_IsPlatformAndroid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_IsPlatformAndroid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_IsPlatformAndroid_Statics::UnrealSamplesFunctionLibrary_eventIsPlatformAndroid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_IsPlatformAndroid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_IsPlatformAndroid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_IsPlatformAndroid_Statics::UnrealSamplesFunctionLibrary_eventIsPlatformAndroid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_IsPlatformAndroid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_IsPlatformAndroid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnrealSamplesFunctionLibrary::execIsPlatformAndroid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UUnrealSamplesFunctionLibrary::IsPlatformAndroid();
	P_NATIVE_END;
}
// ********** End Class UUnrealSamplesFunctionLibrary Function IsPlatformAndroid *******************

// ********** Begin Class UUnrealSamplesFunctionLibrary ********************************************
void UUnrealSamplesFunctionLibrary::StaticRegisterNativesUUnrealSamplesFunctionLibrary()
{
	UClass* Class = UUnrealSamplesFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAllMapNames", &UUnrealSamplesFunctionLibrary::execGetAllMapNames },
		{ "GetAverageFPS", &UUnrealSamplesFunctionLibrary::execGetAverageFPS },
		{ "GetCurrentMapName", &UUnrealSamplesFunctionLibrary::execGetCurrentMapName },
		{ "IsPlatformAndroid", &UUnrealSamplesFunctionLibrary::execIsPlatformAndroid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUnrealSamplesFunctionLibrary;
UClass* UUnrealSamplesFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UUnrealSamplesFunctionLibrary;
	if (!Z_Registration_Info_UClass_UUnrealSamplesFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UnrealSamplesFunctionLibrary"),
			Z_Registration_Info_UClass_UUnrealSamplesFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUUnrealSamplesFunctionLibrary,
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
	return Z_Registration_Info_UClass_UUnrealSamplesFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UUnrealSamplesFunctionLibrary_NoRegister()
{
	return UUnrealSamplesFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUnrealSamplesFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UnrealSamplesFunctionLibrary.h" },
		{ "ModuleRelativePath", "UnrealSamplesFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetAllMapNames, "GetAllMapNames" }, // 3141532890
		{ &Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetAverageFPS, "GetAverageFPS" }, // 1301617147
		{ &Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_GetCurrentMapName, "GetCurrentMapName" }, // 774605735
		{ &Z_Construct_UFunction_UUnrealSamplesFunctionLibrary_IsPlatformAndroid, "IsPlatformAndroid" }, // 978556565
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnrealSamplesFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUnrealSamplesFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealSamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealSamplesFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnrealSamplesFunctionLibrary_Statics::ClassParams = {
	&UUnrealSamplesFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealSamplesFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UUnrealSamplesFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUnrealSamplesFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UUnrealSamplesFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnrealSamplesFunctionLibrary.OuterSingleton, Z_Construct_UClass_UUnrealSamplesFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUnrealSamplesFunctionLibrary.OuterSingleton;
}
UUnrealSamplesFunctionLibrary::UUnrealSamplesFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUnrealSamplesFunctionLibrary);
UUnrealSamplesFunctionLibrary::~UUnrealSamplesFunctionLibrary() {}
// ********** End Class UUnrealSamplesFunctionLibrary **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_UnrealSamplesFunctionLibrary_h__Script_UnrealSamples_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUnrealSamplesFunctionLibrary, UUnrealSamplesFunctionLibrary::StaticClass, TEXT("UUnrealSamplesFunctionLibrary"), &Z_Registration_Info_UClass_UUnrealSamplesFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnrealSamplesFunctionLibrary), 3099337910U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_UnrealSamplesFunctionLibrary_h__Script_UnrealSamples_1768326231(TEXT("/Script/UnrealSamples"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_UnrealSamplesFunctionLibrary_h__Script_UnrealSamples_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_UnrealSamplesFunctionLibrary_h__Script_UnrealSamples_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
