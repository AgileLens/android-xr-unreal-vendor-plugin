// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealSamples/UnrealSamplesPassthroughMeshFunctionLibrary.h"
#include "AndroidXRPassthroughMeshTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUnrealSamplesPassthroughMeshFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXRPASSTHROUGHMESH_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRPassthroughLayer();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UMG_API UClass* Z_Construct_UClass_USlider_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UNREALSAMPLES_API UClass* Z_Construct_UClass_UUnrealSamplesPassthroughMeshFunctionLibrary();
UNREALSAMPLES_API UClass* Z_Construct_UClass_UUnrealSamplesPassthroughMeshFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealSamples();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUnrealSamplesPassthroughMeshFunctionLibrary Function ArePassthroughLayersEqual 
struct Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_ArePassthroughLayersEqual_Statics
{
	struct UnrealSamplesPassthroughMeshFunctionLibrary_eventArePassthroughLayersEqual_Parms
	{
		FAndroidXRPassthroughLayer LayerA;
		FAndroidXRPassthroughLayer LayerB;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UnrealSamplesPassthroughMeshFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerA_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayerA;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayerB;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_ArePassthroughLayersEqual_Statics::NewProp_LayerA = { "LayerA", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnrealSamplesPassthroughMeshFunctionLibrary_eventArePassthroughLayersEqual_Parms, LayerA), Z_Construct_UScriptStruct_FAndroidXRPassthroughLayer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerA_MetaData), NewProp_LayerA_MetaData) }; // 1310625649
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_ArePassthroughLayersEqual_Statics::NewProp_LayerB = { "LayerB", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnrealSamplesPassthroughMeshFunctionLibrary_eventArePassthroughLayersEqual_Parms, LayerB), Z_Construct_UScriptStruct_FAndroidXRPassthroughLayer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerB_MetaData), NewProp_LayerB_MetaData) }; // 1310625649
void Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_ArePassthroughLayersEqual_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UnrealSamplesPassthroughMeshFunctionLibrary_eventArePassthroughLayersEqual_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_ArePassthroughLayersEqual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UnrealSamplesPassthroughMeshFunctionLibrary_eventArePassthroughLayersEqual_Parms), &Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_ArePassthroughLayersEqual_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_ArePassthroughLayersEqual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_ArePassthroughLayersEqual_Statics::NewProp_LayerA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_ArePassthroughLayersEqual_Statics::NewProp_LayerB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_ArePassthroughLayersEqual_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_ArePassthroughLayersEqual_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_ArePassthroughLayersEqual_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnrealSamplesPassthroughMeshFunctionLibrary, nullptr, "ArePassthroughLayersEqual", Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_ArePassthroughLayersEqual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_ArePassthroughLayersEqual_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_ArePassthroughLayersEqual_Statics::UnrealSamplesPassthroughMeshFunctionLibrary_eventArePassthroughLayersEqual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_ArePassthroughLayersEqual_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_ArePassthroughLayersEqual_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_ArePassthroughLayersEqual_Statics::UnrealSamplesPassthroughMeshFunctionLibrary_eventArePassthroughLayersEqual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_ArePassthroughLayersEqual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_ArePassthroughLayersEqual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnrealSamplesPassthroughMeshFunctionLibrary::execArePassthroughLayersEqual)
{
	P_GET_STRUCT_REF(FAndroidXRPassthroughLayer,Z_Param_Out_LayerA);
	P_GET_STRUCT_REF(FAndroidXRPassthroughLayer,Z_Param_Out_LayerB);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UUnrealSamplesPassthroughMeshFunctionLibrary::ArePassthroughLayersEqual(Z_Param_Out_LayerA,Z_Param_Out_LayerB);
	P_NATIVE_END;
}
// ********** End Class UUnrealSamplesPassthroughMeshFunctionLibrary Function ArePassthroughLayersEqual 

// ********** Begin Class UUnrealSamplesPassthroughMeshFunctionLibrary Function UpdateTextWithSlider 
struct Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_UpdateTextWithSlider_Statics
{
	struct UnrealSamplesPassthroughMeshFunctionLibrary_eventUpdateTextWithSlider_Parms
	{
		USlider* Slider;
		UTextBlock* MinText;
		UTextBlock* MaxText;
		UTextBlock* CurrentText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UnrealSamplesPassthroughMeshFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slider_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinText_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxText_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentText_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Slider;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MinText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaxText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_UpdateTextWithSlider_Statics::NewProp_Slider = { "Slider", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnrealSamplesPassthroughMeshFunctionLibrary_eventUpdateTextWithSlider_Parms, Slider), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slider_MetaData), NewProp_Slider_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_UpdateTextWithSlider_Statics::NewProp_MinText = { "MinText", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnrealSamplesPassthroughMeshFunctionLibrary_eventUpdateTextWithSlider_Parms, MinText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinText_MetaData), NewProp_MinText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_UpdateTextWithSlider_Statics::NewProp_MaxText = { "MaxText", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnrealSamplesPassthroughMeshFunctionLibrary_eventUpdateTextWithSlider_Parms, MaxText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxText_MetaData), NewProp_MaxText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_UpdateTextWithSlider_Statics::NewProp_CurrentText = { "CurrentText", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnrealSamplesPassthroughMeshFunctionLibrary_eventUpdateTextWithSlider_Parms, CurrentText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentText_MetaData), NewProp_CurrentText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_UpdateTextWithSlider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_UpdateTextWithSlider_Statics::NewProp_Slider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_UpdateTextWithSlider_Statics::NewProp_MinText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_UpdateTextWithSlider_Statics::NewProp_MaxText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_UpdateTextWithSlider_Statics::NewProp_CurrentText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_UpdateTextWithSlider_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_UpdateTextWithSlider_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnrealSamplesPassthroughMeshFunctionLibrary, nullptr, "UpdateTextWithSlider", Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_UpdateTextWithSlider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_UpdateTextWithSlider_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_UpdateTextWithSlider_Statics::UnrealSamplesPassthroughMeshFunctionLibrary_eventUpdateTextWithSlider_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_UpdateTextWithSlider_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_UpdateTextWithSlider_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_UpdateTextWithSlider_Statics::UnrealSamplesPassthroughMeshFunctionLibrary_eventUpdateTextWithSlider_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_UpdateTextWithSlider()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_UpdateTextWithSlider_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnrealSamplesPassthroughMeshFunctionLibrary::execUpdateTextWithSlider)
{
	P_GET_OBJECT(USlider,Z_Param_Slider);
	P_GET_OBJECT(UTextBlock,Z_Param_MinText);
	P_GET_OBJECT(UTextBlock,Z_Param_MaxText);
	P_GET_OBJECT(UTextBlock,Z_Param_CurrentText);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUnrealSamplesPassthroughMeshFunctionLibrary::UpdateTextWithSlider(Z_Param_Slider,Z_Param_MinText,Z_Param_MaxText,Z_Param_CurrentText);
	P_NATIVE_END;
}
// ********** End Class UUnrealSamplesPassthroughMeshFunctionLibrary Function UpdateTextWithSlider *

// ********** Begin Class UUnrealSamplesPassthroughMeshFunctionLibrary *****************************
void UUnrealSamplesPassthroughMeshFunctionLibrary::StaticRegisterNativesUUnrealSamplesPassthroughMeshFunctionLibrary()
{
	UClass* Class = UUnrealSamplesPassthroughMeshFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ArePassthroughLayersEqual", &UUnrealSamplesPassthroughMeshFunctionLibrary::execArePassthroughLayersEqual },
		{ "UpdateTextWithSlider", &UUnrealSamplesPassthroughMeshFunctionLibrary::execUpdateTextWithSlider },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUnrealSamplesPassthroughMeshFunctionLibrary;
UClass* UUnrealSamplesPassthroughMeshFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UUnrealSamplesPassthroughMeshFunctionLibrary;
	if (!Z_Registration_Info_UClass_UUnrealSamplesPassthroughMeshFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UnrealSamplesPassthroughMeshFunctionLibrary"),
			Z_Registration_Info_UClass_UUnrealSamplesPassthroughMeshFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUUnrealSamplesPassthroughMeshFunctionLibrary,
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
	return Z_Registration_Info_UClass_UUnrealSamplesPassthroughMeshFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UUnrealSamplesPassthroughMeshFunctionLibrary_NoRegister()
{
	return UUnrealSamplesPassthroughMeshFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUnrealSamplesPassthroughMeshFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UnrealSamplesPassthroughMeshFunctionLibrary.h" },
		{ "ModuleRelativePath", "UnrealSamplesPassthroughMeshFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_ArePassthroughLayersEqual, "ArePassthroughLayersEqual" }, // 970880634
		{ &Z_Construct_UFunction_UUnrealSamplesPassthroughMeshFunctionLibrary_UpdateTextWithSlider, "UpdateTextWithSlider" }, // 1286481168
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnrealSamplesPassthroughMeshFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUnrealSamplesPassthroughMeshFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealSamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealSamplesPassthroughMeshFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnrealSamplesPassthroughMeshFunctionLibrary_Statics::ClassParams = {
	&UUnrealSamplesPassthroughMeshFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealSamplesPassthroughMeshFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UUnrealSamplesPassthroughMeshFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUnrealSamplesPassthroughMeshFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UUnrealSamplesPassthroughMeshFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnrealSamplesPassthroughMeshFunctionLibrary.OuterSingleton, Z_Construct_UClass_UUnrealSamplesPassthroughMeshFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUnrealSamplesPassthroughMeshFunctionLibrary.OuterSingleton;
}
UUnrealSamplesPassthroughMeshFunctionLibrary::UUnrealSamplesPassthroughMeshFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUnrealSamplesPassthroughMeshFunctionLibrary);
UUnrealSamplesPassthroughMeshFunctionLibrary::~UUnrealSamplesPassthroughMeshFunctionLibrary() {}
// ********** End Class UUnrealSamplesPassthroughMeshFunctionLibrary *******************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_UnrealSamplesPassthroughMeshFunctionLibrary_h__Script_UnrealSamples_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUnrealSamplesPassthroughMeshFunctionLibrary, UUnrealSamplesPassthroughMeshFunctionLibrary::StaticClass, TEXT("UUnrealSamplesPassthroughMeshFunctionLibrary"), &Z_Registration_Info_UClass_UUnrealSamplesPassthroughMeshFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnrealSamplesPassthroughMeshFunctionLibrary), 2257766620U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_UnrealSamplesPassthroughMeshFunctionLibrary_h__Script_UnrealSamples_2605558041(TEXT("/Script/UnrealSamples"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_UnrealSamplesPassthroughMeshFunctionLibrary_h__Script_UnrealSamples_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_UnrealSamplesPassthroughMeshFunctionLibrary_h__Script_UnrealSamples_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
