// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRSpatialComponentBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRSpatialComponentBase() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXRSPATIALENTITIES_API UClass* Z_Construct_UClass_UAndroidXRSpatialComponentBase();
ANDROIDXRSPATIALENTITIES_API UClass* Z_Construct_UClass_UAndroidXRSpatialComponentBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_AndroidXRSpatialEntities();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAndroidXRSpatialComponentBase Function IsReady **************************
struct Z_Construct_UFunction_UAndroidXRSpatialComponentBase_IsReady_Statics
{
	struct AndroidXRSpatialComponentBase_eventIsReady_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Spatial Entities" },
		{ "ModuleRelativePath", "Public/AndroidXRSpatialComponentBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAndroidXRSpatialComponentBase_IsReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRSpatialComponentBase_eventIsReady_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRSpatialComponentBase_IsReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRSpatialComponentBase_eventIsReady_Parms), &Z_Construct_UFunction_UAndroidXRSpatialComponentBase_IsReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRSpatialComponentBase_IsReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialComponentBase_IsReady_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialComponentBase_IsReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSpatialComponentBase_IsReady_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSpatialComponentBase, nullptr, "IsReady", Z_Construct_UFunction_UAndroidXRSpatialComponentBase_IsReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialComponentBase_IsReady_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRSpatialComponentBase_IsReady_Statics::AndroidXRSpatialComponentBase_eventIsReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialComponentBase_IsReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSpatialComponentBase_IsReady_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRSpatialComponentBase_IsReady_Statics::AndroidXRSpatialComponentBase_eventIsReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRSpatialComponentBase_IsReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSpatialComponentBase_IsReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSpatialComponentBase::execIsReady)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsReady();
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSpatialComponentBase Function IsReady ****************************

// ********** Begin Class UAndroidXRSpatialComponentBase *******************************************
void UAndroidXRSpatialComponentBase::StaticRegisterNativesUAndroidXRSpatialComponentBase()
{
	UClass* Class = UAndroidXRSpatialComponentBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsReady", &UAndroidXRSpatialComponentBase::execIsReady },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRSpatialComponentBase;
UClass* UAndroidXRSpatialComponentBase::GetPrivateStaticClass()
{
	using TClass = UAndroidXRSpatialComponentBase;
	if (!Z_Registration_Info_UClass_UAndroidXRSpatialComponentBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRSpatialComponentBase"),
			Z_Registration_Info_UClass_UAndroidXRSpatialComponentBase.InnerSingleton,
			StaticRegisterNativesUAndroidXRSpatialComponentBase,
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
	return Z_Registration_Info_UClass_UAndroidXRSpatialComponentBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRSpatialComponentBase_NoRegister()
{
	return UAndroidXRSpatialComponentBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRSpatialComponentBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "AndroidXRSpatialComponentBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AndroidXRSpatialComponentBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidXRSpatialComponentBase_IsReady, "IsReady" }, // 260984064
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRSpatialComponentBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAndroidXRSpatialComponentBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRSpatialEntities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialComponentBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRSpatialComponentBase_Statics::ClassParams = {
	&UAndroidXRSpatialComponentBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialComponentBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRSpatialComponentBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRSpatialComponentBase()
{
	if (!Z_Registration_Info_UClass_UAndroidXRSpatialComponentBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRSpatialComponentBase.OuterSingleton, Z_Construct_UClass_UAndroidXRSpatialComponentBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRSpatialComponentBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRSpatialComponentBase);
UAndroidXRSpatialComponentBase::~UAndroidXRSpatialComponentBase() {}
// ********** End Class UAndroidXRSpatialComponentBase *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialEntities_Source_AndroidXRSpatialEntities_Public_AndroidXRSpatialComponentBase_h__Script_AndroidXRSpatialEntities_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXRSpatialComponentBase, UAndroidXRSpatialComponentBase::StaticClass, TEXT("UAndroidXRSpatialComponentBase"), &Z_Registration_Info_UClass_UAndroidXRSpatialComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRSpatialComponentBase), 759163440U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialEntities_Source_AndroidXRSpatialEntities_Public_AndroidXRSpatialComponentBase_h__Script_AndroidXRSpatialEntities_3447505544(TEXT("/Script/AndroidXRSpatialEntities"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialEntities_Source_AndroidXRSpatialEntities_Public_AndroidXRSpatialComponentBase_h__Script_AndroidXRSpatialEntities_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialEntities_Source_AndroidXRSpatialEntities_Public_AndroidXRSpatialComponentBase_h__Script_AndroidXRSpatialEntities_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
