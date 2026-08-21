// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealSamples/UnrealSamplesFaceTrackingFunctionLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUnrealSamplesFaceTrackingFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
UNREALSAMPLES_API UClass* Z_Construct_UClass_UUnrealSamplesFaceTrackingFunctionLibrary();
UNREALSAMPLES_API UClass* Z_Construct_UClass_UUnrealSamplesFaceTrackingFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealSamples();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUnrealSamplesFaceTrackingFunctionLibrary Function SetFaceTrackingMorphParameters 
struct Z_Construct_UFunction_UUnrealSamplesFaceTrackingFunctionLibrary_SetFaceTrackingMorphParameters_Statics
{
	struct UnrealSamplesFaceTrackingFunctionLibrary_eventSetFaceTrackingMorphParameters_Parms
	{
		USkeletalMeshComponent* SkeletalMesh;
		TArray<float> Parameters;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UnrealSamplesFaceTrackingFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Parameters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealSamplesFaceTrackingFunctionLibrary_SetFaceTrackingMorphParameters_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnrealSamplesFaceTrackingFunctionLibrary_eventSetFaceTrackingMorphParameters_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUnrealSamplesFaceTrackingFunctionLibrary_SetFaceTrackingMorphParameters_Statics::NewProp_Parameters_Inner = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUnrealSamplesFaceTrackingFunctionLibrary_SetFaceTrackingMorphParameters_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnrealSamplesFaceTrackingFunctionLibrary_eventSetFaceTrackingMorphParameters_Parms, Parameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealSamplesFaceTrackingFunctionLibrary_SetFaceTrackingMorphParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealSamplesFaceTrackingFunctionLibrary_SetFaceTrackingMorphParameters_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealSamplesFaceTrackingFunctionLibrary_SetFaceTrackingMorphParameters_Statics::NewProp_Parameters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealSamplesFaceTrackingFunctionLibrary_SetFaceTrackingMorphParameters_Statics::NewProp_Parameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealSamplesFaceTrackingFunctionLibrary_SetFaceTrackingMorphParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealSamplesFaceTrackingFunctionLibrary_SetFaceTrackingMorphParameters_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUnrealSamplesFaceTrackingFunctionLibrary, nullptr, "SetFaceTrackingMorphParameters", Z_Construct_UFunction_UUnrealSamplesFaceTrackingFunctionLibrary_SetFaceTrackingMorphParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealSamplesFaceTrackingFunctionLibrary_SetFaceTrackingMorphParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUnrealSamplesFaceTrackingFunctionLibrary_SetFaceTrackingMorphParameters_Statics::UnrealSamplesFaceTrackingFunctionLibrary_eventSetFaceTrackingMorphParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealSamplesFaceTrackingFunctionLibrary_SetFaceTrackingMorphParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUnrealSamplesFaceTrackingFunctionLibrary_SetFaceTrackingMorphParameters_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUnrealSamplesFaceTrackingFunctionLibrary_SetFaceTrackingMorphParameters_Statics::UnrealSamplesFaceTrackingFunctionLibrary_eventSetFaceTrackingMorphParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUnrealSamplesFaceTrackingFunctionLibrary_SetFaceTrackingMorphParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnrealSamplesFaceTrackingFunctionLibrary_SetFaceTrackingMorphParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUnrealSamplesFaceTrackingFunctionLibrary::execSetFaceTrackingMorphParameters)
{
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMesh);
	P_GET_TARRAY_REF(float,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUnrealSamplesFaceTrackingFunctionLibrary::SetFaceTrackingMorphParameters(Z_Param_SkeletalMesh,Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// ********** End Class UUnrealSamplesFaceTrackingFunctionLibrary Function SetFaceTrackingMorphParameters 

// ********** Begin Class UUnrealSamplesFaceTrackingFunctionLibrary ********************************
void UUnrealSamplesFaceTrackingFunctionLibrary::StaticRegisterNativesUUnrealSamplesFaceTrackingFunctionLibrary()
{
	UClass* Class = UUnrealSamplesFaceTrackingFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetFaceTrackingMorphParameters", &UUnrealSamplesFaceTrackingFunctionLibrary::execSetFaceTrackingMorphParameters },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUnrealSamplesFaceTrackingFunctionLibrary;
UClass* UUnrealSamplesFaceTrackingFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UUnrealSamplesFaceTrackingFunctionLibrary;
	if (!Z_Registration_Info_UClass_UUnrealSamplesFaceTrackingFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UnrealSamplesFaceTrackingFunctionLibrary"),
			Z_Registration_Info_UClass_UUnrealSamplesFaceTrackingFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUUnrealSamplesFaceTrackingFunctionLibrary,
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
	return Z_Registration_Info_UClass_UUnrealSamplesFaceTrackingFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UUnrealSamplesFaceTrackingFunctionLibrary_NoRegister()
{
	return UUnrealSamplesFaceTrackingFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUnrealSamplesFaceTrackingFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UnrealSamplesFaceTrackingFunctionLibrary.h" },
		{ "ModuleRelativePath", "UnrealSamplesFaceTrackingFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUnrealSamplesFaceTrackingFunctionLibrary_SetFaceTrackingMorphParameters, "SetFaceTrackingMorphParameters" }, // 4097657802
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnrealSamplesFaceTrackingFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUnrealSamplesFaceTrackingFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealSamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealSamplesFaceTrackingFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnrealSamplesFaceTrackingFunctionLibrary_Statics::ClassParams = {
	&UUnrealSamplesFaceTrackingFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealSamplesFaceTrackingFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UUnrealSamplesFaceTrackingFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUnrealSamplesFaceTrackingFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UUnrealSamplesFaceTrackingFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnrealSamplesFaceTrackingFunctionLibrary.OuterSingleton, Z_Construct_UClass_UUnrealSamplesFaceTrackingFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUnrealSamplesFaceTrackingFunctionLibrary.OuterSingleton;
}
UUnrealSamplesFaceTrackingFunctionLibrary::UUnrealSamplesFaceTrackingFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUnrealSamplesFaceTrackingFunctionLibrary);
UUnrealSamplesFaceTrackingFunctionLibrary::~UUnrealSamplesFaceTrackingFunctionLibrary() {}
// ********** End Class UUnrealSamplesFaceTrackingFunctionLibrary **********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_UnrealSamplesFaceTrackingFunctionLibrary_h__Script_UnrealSamples_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUnrealSamplesFaceTrackingFunctionLibrary, UUnrealSamplesFaceTrackingFunctionLibrary::StaticClass, TEXT("UUnrealSamplesFaceTrackingFunctionLibrary"), &Z_Registration_Info_UClass_UUnrealSamplesFaceTrackingFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnrealSamplesFaceTrackingFunctionLibrary), 3426174994U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_UnrealSamplesFaceTrackingFunctionLibrary_h__Script_UnrealSamples_3877312210(TEXT("/Script/UnrealSamples"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_UnrealSamplesFaceTrackingFunctionLibrary_h__Script_UnrealSamples_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_UnrealSamplesFaceTrackingFunctionLibrary_h__Script_UnrealSamples_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
