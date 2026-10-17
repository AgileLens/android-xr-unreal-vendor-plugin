// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/AndroidXRPassthroughMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRPassthroughMeshComponent() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXRPASSTHROUGHMESH_API UClass* Z_Construct_UClass_UAndroidXRPassthroughMeshComponent();
ANDROIDXRPASSTHROUGHMESH_API UClass* Z_Construct_UClass_UAndroidXRPassthroughMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
UPackage* Z_Construct_UPackage__Script_AndroidXRPassthroughMesh();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAndroidXRPassthroughMeshComponent Function CreatePassthroughLayer *******
struct Z_Construct_UFunction_UAndroidXRPassthroughMeshComponent_CreatePassthroughLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AndroidXRPassthroughMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRPassthroughMeshComponent_CreatePassthroughLayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRPassthroughMeshComponent, nullptr, "CreatePassthroughLayer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPassthroughMeshComponent_CreatePassthroughLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRPassthroughMeshComponent_CreatePassthroughLayer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAndroidXRPassthroughMeshComponent_CreatePassthroughLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRPassthroughMeshComponent_CreatePassthroughLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRPassthroughMeshComponent::execCreatePassthroughLayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreatePassthroughLayer();
	P_NATIVE_END;
}
// ********** End Class UAndroidXRPassthroughMeshComponent Function CreatePassthroughLayer *********

// ********** Begin Class UAndroidXRPassthroughMeshComponent Function DestroyPassthroughLayer ******
struct Z_Construct_UFunction_UAndroidXRPassthroughMeshComponent_DestroyPassthroughLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AndroidXRPassthroughMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRPassthroughMeshComponent_DestroyPassthroughLayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRPassthroughMeshComponent, nullptr, "DestroyPassthroughLayer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPassthroughMeshComponent_DestroyPassthroughLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRPassthroughMeshComponent_DestroyPassthroughLayer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAndroidXRPassthroughMeshComponent_DestroyPassthroughLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRPassthroughMeshComponent_DestroyPassthroughLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRPassthroughMeshComponent::execDestroyPassthroughLayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyPassthroughLayer();
	P_NATIVE_END;
}
// ********** End Class UAndroidXRPassthroughMeshComponent Function DestroyPassthroughLayer ********

// ********** Begin Class UAndroidXRPassthroughMeshComponent Function SetPassthroughOpacity ********
struct Z_Construct_UFunction_UAndroidXRPassthroughMeshComponent_SetPassthroughOpacity_Statics
{
	struct AndroidXRPassthroughMeshComponent_eventSetPassthroughOpacity_Parms
	{
		float InOpacity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Passthrough Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Updates the opacity of the passthrough mesh\n    * @param[in] The new opacity of the passthrough mesh\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Components/AndroidXRPassthroughMeshComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates the opacity of the passthrough mesh\n@param[in] The new opacity of the passthrough mesh" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InOpacity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAndroidXRPassthroughMeshComponent_SetPassthroughOpacity_Statics::NewProp_InOpacity = { "InOpacity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRPassthroughMeshComponent_eventSetPassthroughOpacity_Parms, InOpacity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRPassthroughMeshComponent_SetPassthroughOpacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRPassthroughMeshComponent_SetPassthroughOpacity_Statics::NewProp_InOpacity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPassthroughMeshComponent_SetPassthroughOpacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRPassthroughMeshComponent_SetPassthroughOpacity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRPassthroughMeshComponent, nullptr, "SetPassthroughOpacity", Z_Construct_UFunction_UAndroidXRPassthroughMeshComponent_SetPassthroughOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPassthroughMeshComponent_SetPassthroughOpacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRPassthroughMeshComponent_SetPassthroughOpacity_Statics::AndroidXRPassthroughMeshComponent_eventSetPassthroughOpacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPassthroughMeshComponent_SetPassthroughOpacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRPassthroughMeshComponent_SetPassthroughOpacity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRPassthroughMeshComponent_SetPassthroughOpacity_Statics::AndroidXRPassthroughMeshComponent_eventSetPassthroughOpacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRPassthroughMeshComponent_SetPassthroughOpacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRPassthroughMeshComponent_SetPassthroughOpacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRPassthroughMeshComponent::execSetPassthroughOpacity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InOpacity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPassthroughOpacity(Z_Param_InOpacity);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRPassthroughMeshComponent Function SetPassthroughOpacity **********

// ********** Begin Class UAndroidXRPassthroughMeshComponent Function UpdatePassthroughMesh ********
struct Z_Construct_UFunction_UAndroidXRPassthroughMeshComponent_UpdatePassthroughMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Passthrough Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Updates the passthrough static mesh\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Components/AndroidXRPassthroughMeshComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates the passthrough static mesh" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRPassthroughMeshComponent_UpdatePassthroughMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRPassthroughMeshComponent, nullptr, "UpdatePassthroughMesh", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPassthroughMeshComponent_UpdatePassthroughMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRPassthroughMeshComponent_UpdatePassthroughMesh_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAndroidXRPassthroughMeshComponent_UpdatePassthroughMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRPassthroughMeshComponent_UpdatePassthroughMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRPassthroughMeshComponent::execUpdatePassthroughMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdatePassthroughMesh();
	P_NATIVE_END;
}
// ********** End Class UAndroidXRPassthroughMeshComponent Function UpdatePassthroughMesh **********

// ********** Begin Class UAndroidXRPassthroughMeshComponent ***************************************
void UAndroidXRPassthroughMeshComponent::StaticRegisterNativesUAndroidXRPassthroughMeshComponent()
{
	UClass* Class = UAndroidXRPassthroughMeshComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreatePassthroughLayer", &UAndroidXRPassthroughMeshComponent::execCreatePassthroughLayer },
		{ "DestroyPassthroughLayer", &UAndroidXRPassthroughMeshComponent::execDestroyPassthroughLayer },
		{ "SetPassthroughOpacity", &UAndroidXRPassthroughMeshComponent::execSetPassthroughOpacity },
		{ "UpdatePassthroughMesh", &UAndroidXRPassthroughMeshComponent::execUpdatePassthroughMesh },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRPassthroughMeshComponent;
UClass* UAndroidXRPassthroughMeshComponent::GetPrivateStaticClass()
{
	using TClass = UAndroidXRPassthroughMeshComponent;
	if (!Z_Registration_Info_UClass_UAndroidXRPassthroughMeshComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRPassthroughMeshComponent"),
			Z_Registration_Info_UClass_UAndroidXRPassthroughMeshComponent.InnerSingleton,
			StaticRegisterNativesUAndroidXRPassthroughMeshComponent,
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
	return Z_Registration_Info_UClass_UAndroidXRPassthroughMeshComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRPassthroughMeshComponent_NoRegister()
{
	return UAndroidXRPassthroughMeshComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRPassthroughMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* AndroidXRPassthrough static mesh component\n*/" },
#endif
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Components/AndroidXRPassthroughMeshComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/AndroidXRPassthroughMeshComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AndroidXRPassthrough static mesh component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Opacity_MetaData[] = {
		{ "Category", "AndroidXR|Passthrough Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The opacity of the passthrough mesh\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Components/AndroidXRPassthroughMeshComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The opacity of the passthrough mesh" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Opacity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidXRPassthroughMeshComponent_CreatePassthroughLayer, "CreatePassthroughLayer" }, // 4260828868
		{ &Z_Construct_UFunction_UAndroidXRPassthroughMeshComponent_DestroyPassthroughLayer, "DestroyPassthroughLayer" }, // 3252304688
		{ &Z_Construct_UFunction_UAndroidXRPassthroughMeshComponent_SetPassthroughOpacity, "SetPassthroughOpacity" }, // 867751921
		{ &Z_Construct_UFunction_UAndroidXRPassthroughMeshComponent_UpdatePassthroughMesh, "UpdatePassthroughMesh" }, // 2674325551
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRPassthroughMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAndroidXRPassthroughMeshComponent_Statics::NewProp_Opacity = { "Opacity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRPassthroughMeshComponent, Opacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Opacity_MetaData), NewProp_Opacity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidXRPassthroughMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRPassthroughMeshComponent_Statics::NewProp_Opacity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRPassthroughMeshComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAndroidXRPassthroughMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRPassthroughMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRPassthroughMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRPassthroughMeshComponent_Statics::ClassParams = {
	&UAndroidXRPassthroughMeshComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAndroidXRPassthroughMeshComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRPassthroughMeshComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRPassthroughMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRPassthroughMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRPassthroughMeshComponent()
{
	if (!Z_Registration_Info_UClass_UAndroidXRPassthroughMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRPassthroughMeshComponent.OuterSingleton, Z_Construct_UClass_UAndroidXRPassthroughMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRPassthroughMeshComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRPassthroughMeshComponent);
UAndroidXRPassthroughMeshComponent::~UAndroidXRPassthroughMeshComponent() {}
// ********** End Class UAndroidXRPassthroughMeshComponent *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRPassthroughMesh_Source_AndroidXRPassthroughMesh_Public_Components_AndroidXRPassthroughMeshComponent_h__Script_AndroidXRPassthroughMesh_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXRPassthroughMeshComponent, UAndroidXRPassthroughMeshComponent::StaticClass, TEXT("UAndroidXRPassthroughMeshComponent"), &Z_Registration_Info_UClass_UAndroidXRPassthroughMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRPassthroughMeshComponent), 2279078984U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRPassthroughMesh_Source_AndroidXRPassthroughMesh_Public_Components_AndroidXRPassthroughMeshComponent_h__Script_AndroidXRPassthroughMesh_70307716(TEXT("/Script/AndroidXRPassthroughMesh"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRPassthroughMesh_Source_AndroidXRPassthroughMesh_Public_Components_AndroidXRPassthroughMeshComponent_h__Script_AndroidXRPassthroughMesh_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRPassthroughMesh_Source_AndroidXRPassthroughMesh_Public_Components_AndroidXRPassthroughMeshComponent_h__Script_AndroidXRPassthroughMesh_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
