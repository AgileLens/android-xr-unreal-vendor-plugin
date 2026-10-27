// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRSceneMeshingBlueprintFunctionLibrary.h"
#include "AndroidXRTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRSceneMeshingBlueprintFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRSceneMeshingTracker();
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRSceneMeshSnapshot();
ANDROIDXRSCENEMESHING_API UClass* Z_Construct_UClass_UAndroidXRSceneMeshingBlueprintFunctionLibrary();
ANDROIDXRSCENEMESHING_API UClass* Z_Construct_UClass_UAndroidXRSceneMeshingBlueprintFunctionLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AndroidXRSceneMeshing();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAndroidXRSceneMeshingBlueprintFunctionLibrary Function IsValidSceneMeshingTracker 
struct Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshingTracker_Statics
{
	struct AndroidXRSceneMeshingBlueprintFunctionLibrary_eventIsValidSceneMeshingTracker_Parms
	{
		FAndroidXRSceneMeshingTracker MeshingTracker;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXRSceneMeshing|Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Determines whether or not an FAndroidXRSceneMeshingTracker is valid.\n     * @param[in] MeshingTracker MeshingTracker to be verified.\n     * @return True if the meshing tracker is valid.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSceneMeshingBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines whether or not an FAndroidXRSceneMeshingTracker is valid.\n@param[in] MeshingTracker MeshingTracker to be verified.\n@return True if the meshing tracker is valid." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshingTracker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshingTracker;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshingTracker_Statics::NewProp_MeshingTracker = { "MeshingTracker", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRSceneMeshingBlueprintFunctionLibrary_eventIsValidSceneMeshingTracker_Parms, MeshingTracker), Z_Construct_UScriptStruct_FAndroidXRSceneMeshingTracker, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshingTracker_MetaData), NewProp_MeshingTracker_MetaData) }; // 1987802369
void Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshingTracker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRSceneMeshingBlueprintFunctionLibrary_eventIsValidSceneMeshingTracker_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshingTracker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRSceneMeshingBlueprintFunctionLibrary_eventIsValidSceneMeshingTracker_Parms), &Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshingTracker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshingTracker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshingTracker_Statics::NewProp_MeshingTracker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshingTracker_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshingTracker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshingTracker_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSceneMeshingBlueprintFunctionLibrary, nullptr, "IsValidSceneMeshingTracker", Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshingTracker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshingTracker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshingTracker_Statics::AndroidXRSceneMeshingBlueprintFunctionLibrary_eventIsValidSceneMeshingTracker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshingTracker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshingTracker_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshingTracker_Statics::AndroidXRSceneMeshingBlueprintFunctionLibrary_eventIsValidSceneMeshingTracker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshingTracker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshingTracker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSceneMeshingBlueprintFunctionLibrary::execIsValidSceneMeshingTracker)
{
	P_GET_STRUCT_REF(FAndroidXRSceneMeshingTracker,Z_Param_Out_MeshingTracker);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRSceneMeshingBlueprintFunctionLibrary::IsValidSceneMeshingTracker(Z_Param_Out_MeshingTracker);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSceneMeshingBlueprintFunctionLibrary Function IsValidSceneMeshingTracker 

// ********** Begin Class UAndroidXRSceneMeshingBlueprintFunctionLibrary Function IsValidSceneMeshSnapshot 
struct Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshSnapshot_Statics
{
	struct AndroidXRSceneMeshingBlueprintFunctionLibrary_eventIsValidSceneMeshSnapshot_Parms
	{
		FAndroidXRSceneMeshSnapshot MeshSnapshot;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXRSceneMeshing|Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Determines whether or not an FAndroidXRSceneMeshSnapshot is valid.\n     * @param[in] MeshSnapshot MeshSnapshot to be verified.\n     * @return True if the mesh snapshot is valid.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSceneMeshingBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines whether or not an FAndroidXRSceneMeshSnapshot is valid.\n@param[in] MeshSnapshot MeshSnapshot to be verified.\n@return True if the mesh snapshot is valid." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshSnapshot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshSnapshot;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshSnapshot_Statics::NewProp_MeshSnapshot = { "MeshSnapshot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRSceneMeshingBlueprintFunctionLibrary_eventIsValidSceneMeshSnapshot_Parms, MeshSnapshot), Z_Construct_UScriptStruct_FAndroidXRSceneMeshSnapshot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshSnapshot_MetaData), NewProp_MeshSnapshot_MetaData) }; // 1006925503
void Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshSnapshot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRSceneMeshingBlueprintFunctionLibrary_eventIsValidSceneMeshSnapshot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshSnapshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRSceneMeshingBlueprintFunctionLibrary_eventIsValidSceneMeshSnapshot_Parms), &Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshSnapshot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshSnapshot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshSnapshot_Statics::NewProp_MeshSnapshot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshSnapshot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshSnapshot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshSnapshot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSceneMeshingBlueprintFunctionLibrary, nullptr, "IsValidSceneMeshSnapshot", Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshSnapshot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshSnapshot_Statics::AndroidXRSceneMeshingBlueprintFunctionLibrary_eventIsValidSceneMeshSnapshot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshSnapshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshSnapshot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshSnapshot_Statics::AndroidXRSceneMeshingBlueprintFunctionLibrary_eventIsValidSceneMeshSnapshot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshSnapshot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshSnapshot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSceneMeshingBlueprintFunctionLibrary::execIsValidSceneMeshSnapshot)
{
	P_GET_STRUCT_REF(FAndroidXRSceneMeshSnapshot,Z_Param_Out_MeshSnapshot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRSceneMeshingBlueprintFunctionLibrary::IsValidSceneMeshSnapshot(Z_Param_Out_MeshSnapshot);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSceneMeshingBlueprintFunctionLibrary Function IsValidSceneMeshSnapshot 

// ********** Begin Class UAndroidXRSceneMeshingBlueprintFunctionLibrary ***************************
void UAndroidXRSceneMeshingBlueprintFunctionLibrary::StaticRegisterNativesUAndroidXRSceneMeshingBlueprintFunctionLibrary()
{
	UClass* Class = UAndroidXRSceneMeshingBlueprintFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsValidSceneMeshingTracker", &UAndroidXRSceneMeshingBlueprintFunctionLibrary::execIsValidSceneMeshingTracker },
		{ "IsValidSceneMeshSnapshot", &UAndroidXRSceneMeshingBlueprintFunctionLibrary::execIsValidSceneMeshSnapshot },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRSceneMeshingBlueprintFunctionLibrary;
UClass* UAndroidXRSceneMeshingBlueprintFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UAndroidXRSceneMeshingBlueprintFunctionLibrary;
	if (!Z_Registration_Info_UClass_UAndroidXRSceneMeshingBlueprintFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRSceneMeshingBlueprintFunctionLibrary"),
			Z_Registration_Info_UClass_UAndroidXRSceneMeshingBlueprintFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUAndroidXRSceneMeshingBlueprintFunctionLibrary,
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
	return Z_Registration_Info_UClass_UAndroidXRSceneMeshingBlueprintFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRSceneMeshingBlueprintFunctionLibrary_NoRegister()
{
	return UAndroidXRSceneMeshingBlueprintFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRSceneMeshingBlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AndroidXRSceneMeshing" },
		{ "IncludePath", "AndroidXRSceneMeshingBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/AndroidXRSceneMeshingBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshingTracker, "IsValidSceneMeshingTracker" }, // 3042332415
		{ &Z_Construct_UFunction_UAndroidXRSceneMeshingBlueprintFunctionLibrary_IsValidSceneMeshSnapshot, "IsValidSceneMeshSnapshot" }, // 3790910278
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRSceneMeshingBlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAndroidXRSceneMeshingBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRSceneMeshing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSceneMeshingBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRSceneMeshingBlueprintFunctionLibrary_Statics::ClassParams = {
	&UAndroidXRSceneMeshingBlueprintFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSceneMeshingBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRSceneMeshingBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRSceneMeshingBlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UAndroidXRSceneMeshingBlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRSceneMeshingBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UAndroidXRSceneMeshingBlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRSceneMeshingBlueprintFunctionLibrary.OuterSingleton;
}
UAndroidXRSceneMeshingBlueprintFunctionLibrary::UAndroidXRSceneMeshingBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRSceneMeshingBlueprintFunctionLibrary);
UAndroidXRSceneMeshingBlueprintFunctionLibrary::~UAndroidXRSceneMeshingBlueprintFunctionLibrary() {}
// ********** End Class UAndroidXRSceneMeshingBlueprintFunctionLibrary *****************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSceneMeshing_Source_AndroidXRSceneMeshing_Public_AndroidXRSceneMeshingBlueprintFunctionLibrary_h__Script_AndroidXRSceneMeshing_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXRSceneMeshingBlueprintFunctionLibrary, UAndroidXRSceneMeshingBlueprintFunctionLibrary::StaticClass, TEXT("UAndroidXRSceneMeshingBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UAndroidXRSceneMeshingBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRSceneMeshingBlueprintFunctionLibrary), 192852176U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSceneMeshing_Source_AndroidXRSceneMeshing_Public_AndroidXRSceneMeshingBlueprintFunctionLibrary_h__Script_AndroidXRSceneMeshing_921610260(TEXT("/Script/AndroidXRSceneMeshing"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSceneMeshing_Source_AndroidXRSceneMeshing_Public_AndroidXRSceneMeshingBlueprintFunctionLibrary_h__Script_AndroidXRSceneMeshing_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSceneMeshing_Source_AndroidXRSceneMeshing_Public_AndroidXRSceneMeshingBlueprintFunctionLibrary_h__Script_AndroidXRSceneMeshing_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
