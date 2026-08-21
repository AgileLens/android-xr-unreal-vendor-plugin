// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealSamples/ApplicationThreadWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeApplicationThreadWidget() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXR_API UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRAndroidThreadType();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UNREALSAMPLES_API UClass* Z_Construct_UClass_UApplicationThreadWidget();
UNREALSAMPLES_API UClass* Z_Construct_UClass_UApplicationThreadWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealSamples();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UApplicationThreadWidget Function CustomInitialize ***********************
struct Z_Construct_UFunction_UApplicationThreadWidget_CustomInitialize_Statics
{
	struct ApplicationThreadWidget_eventCustomInitialize_Parms
	{
		FString Result;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ApplicationThreadWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Result;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApplicationThreadWidget_CustomInitialize_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ApplicationThreadWidget_eventCustomInitialize_Parms, Result), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UApplicationThreadWidget_CustomInitialize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ApplicationThreadWidget_eventCustomInitialize_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApplicationThreadWidget_CustomInitialize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ApplicationThreadWidget_eventCustomInitialize_Parms), &Z_Construct_UFunction_UApplicationThreadWidget_CustomInitialize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApplicationThreadWidget_CustomInitialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApplicationThreadWidget_CustomInitialize_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApplicationThreadWidget_CustomInitialize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UApplicationThreadWidget_CustomInitialize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApplicationThreadWidget_CustomInitialize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UApplicationThreadWidget, nullptr, "CustomInitialize", Z_Construct_UFunction_UApplicationThreadWidget_CustomInitialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApplicationThreadWidget_CustomInitialize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UApplicationThreadWidget_CustomInitialize_Statics::ApplicationThreadWidget_eventCustomInitialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UApplicationThreadWidget_CustomInitialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UApplicationThreadWidget_CustomInitialize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UApplicationThreadWidget_CustomInitialize_Statics::ApplicationThreadWidget_eventCustomInitialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UApplicationThreadWidget_CustomInitialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApplicationThreadWidget_CustomInitialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UApplicationThreadWidget::execCustomInitialize)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CustomInitialize(Z_Param_Out_Result);
	P_NATIVE_END;
}
// ********** End Class UApplicationThreadWidget Function CustomInitialize *************************

// ********** Begin Class UApplicationThreadWidget Function SetAndroidApplicationThread ************
struct Z_Construct_UFunction_UApplicationThreadWidget_SetAndroidApplicationThread_Statics
{
	struct ApplicationThreadWidget_eventSetAndroidApplicationThread_Parms
	{
		EAndroidXRAndroidThreadType ThreadType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ApplicationThreadWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ThreadType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ThreadType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UApplicationThreadWidget_SetAndroidApplicationThread_Statics::NewProp_ThreadType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UApplicationThreadWidget_SetAndroidApplicationThread_Statics::NewProp_ThreadType = { "ThreadType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ApplicationThreadWidget_eventSetAndroidApplicationThread_Parms, ThreadType), Z_Construct_UEnum_AndroidXR_EAndroidXRAndroidThreadType, METADATA_PARAMS(0, nullptr) }; // 2076852619
void Z_Construct_UFunction_UApplicationThreadWidget_SetAndroidApplicationThread_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ApplicationThreadWidget_eventSetAndroidApplicationThread_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApplicationThreadWidget_SetAndroidApplicationThread_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ApplicationThreadWidget_eventSetAndroidApplicationThread_Parms), &Z_Construct_UFunction_UApplicationThreadWidget_SetAndroidApplicationThread_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApplicationThreadWidget_SetAndroidApplicationThread_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApplicationThreadWidget_SetAndroidApplicationThread_Statics::NewProp_ThreadType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApplicationThreadWidget_SetAndroidApplicationThread_Statics::NewProp_ThreadType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApplicationThreadWidget_SetAndroidApplicationThread_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UApplicationThreadWidget_SetAndroidApplicationThread_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApplicationThreadWidget_SetAndroidApplicationThread_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UApplicationThreadWidget, nullptr, "SetAndroidApplicationThread", Z_Construct_UFunction_UApplicationThreadWidget_SetAndroidApplicationThread_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApplicationThreadWidget_SetAndroidApplicationThread_Statics::PropPointers), sizeof(Z_Construct_UFunction_UApplicationThreadWidget_SetAndroidApplicationThread_Statics::ApplicationThreadWidget_eventSetAndroidApplicationThread_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UApplicationThreadWidget_SetAndroidApplicationThread_Statics::Function_MetaDataParams), Z_Construct_UFunction_UApplicationThreadWidget_SetAndroidApplicationThread_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UApplicationThreadWidget_SetAndroidApplicationThread_Statics::ApplicationThreadWidget_eventSetAndroidApplicationThread_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UApplicationThreadWidget_SetAndroidApplicationThread()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApplicationThreadWidget_SetAndroidApplicationThread_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UApplicationThreadWidget::execSetAndroidApplicationThread)
{
	P_GET_ENUM(EAndroidXRAndroidThreadType,Z_Param_ThreadType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetAndroidApplicationThread(EAndroidXRAndroidThreadType(Z_Param_ThreadType));
	P_NATIVE_END;
}
// ********** End Class UApplicationThreadWidget Function SetAndroidApplicationThread **************

// ********** Begin Class UApplicationThreadWidget Function UpdateDisplay **************************
struct Z_Construct_UFunction_UApplicationThreadWidget_UpdateDisplay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ApplicationThreadWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApplicationThreadWidget_UpdateDisplay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UApplicationThreadWidget, nullptr, "UpdateDisplay", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UApplicationThreadWidget_UpdateDisplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UApplicationThreadWidget_UpdateDisplay_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UApplicationThreadWidget_UpdateDisplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApplicationThreadWidget_UpdateDisplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UApplicationThreadWidget::execUpdateDisplay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateDisplay();
	P_NATIVE_END;
}
// ********** End Class UApplicationThreadWidget Function UpdateDisplay ****************************

// ********** Begin Class UApplicationThreadWidget *************************************************
void UApplicationThreadWidget::StaticRegisterNativesUApplicationThreadWidget()
{
	UClass* Class = UApplicationThreadWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CustomInitialize", &UApplicationThreadWidget::execCustomInitialize },
		{ "SetAndroidApplicationThread", &UApplicationThreadWidget::execSetAndroidApplicationThread },
		{ "UpdateDisplay", &UApplicationThreadWidget::execUpdateDisplay },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UApplicationThreadWidget;
UClass* UApplicationThreadWidget::GetPrivateStaticClass()
{
	using TClass = UApplicationThreadWidget;
	if (!Z_Registration_Info_UClass_UApplicationThreadWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ApplicationThreadWidget"),
			Z_Registration_Info_UClass_UApplicationThreadWidget.InnerSingleton,
			StaticRegisterNativesUApplicationThreadWidget,
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
	return Z_Registration_Info_UClass_UApplicationThreadWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UApplicationThreadWidget_NoRegister()
{
	return UApplicationThreadWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UApplicationThreadWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ApplicationThreadWidget.h" },
		{ "ModuleRelativePath", "ApplicationThreadWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_RenderSurface_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ApplicationThreadWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ApplicationThreadWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_Stats_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ApplicationThreadWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ApplicationThreadWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "ApplicationThreadWidget" },
		{ "ModuleRelativePath", "ApplicationThreadWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumThreadLoops_MetaData[] = {
		{ "Category", "ApplicationThreadWidget" },
		{ "ModuleRelativePath", "ApplicationThreadWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "ApplicationThreadWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SobelTexture_MetaData[] = {
		{ "ModuleRelativePath", "ApplicationThreadWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_RenderSurface;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_Stats;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumThreadLoops;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SobelTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UApplicationThreadWidget_CustomInitialize, "CustomInitialize" }, // 620597920
		{ &Z_Construct_UFunction_UApplicationThreadWidget_SetAndroidApplicationThread, "SetAndroidApplicationThread" }, // 298866151
		{ &Z_Construct_UFunction_UApplicationThreadWidget_UpdateDisplay, "UpdateDisplay" }, // 3302035296
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApplicationThreadWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UApplicationThreadWidget_Statics::NewProp_Image_RenderSurface = { "Image_RenderSurface", nullptr, (EPropertyFlags)0x012408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UApplicationThreadWidget, Image_RenderSurface), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_RenderSurface_MetaData), NewProp_Image_RenderSurface_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UApplicationThreadWidget_Statics::NewProp_Text_Stats = { "Text_Stats", nullptr, (EPropertyFlags)0x012408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UApplicationThreadWidget, Text_Stats), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_Stats_MetaData), NewProp_Text_Stats_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UApplicationThreadWidget_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UApplicationThreadWidget, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UApplicationThreadWidget_Statics::NewProp_NumThreadLoops = { "NumThreadLoops", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UApplicationThreadWidget, NumThreadLoops), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumThreadLoops_MetaData), NewProp_NumThreadLoops_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UApplicationThreadWidget_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UApplicationThreadWidget, MaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialInstance_MetaData), NewProp_MaterialInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UApplicationThreadWidget_Statics::NewProp_SobelTexture = { "SobelTexture", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UApplicationThreadWidget, SobelTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SobelTexture_MetaData), NewProp_SobelTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApplicationThreadWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationThreadWidget_Statics::NewProp_Image_RenderSurface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationThreadWidget_Statics::NewProp_Text_Stats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationThreadWidget_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationThreadWidget_Statics::NewProp_NumThreadLoops,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationThreadWidget_Statics::NewProp_MaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationThreadWidget_Statics::NewProp_SobelTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UApplicationThreadWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UApplicationThreadWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealSamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UApplicationThreadWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UApplicationThreadWidget_Statics::ClassParams = {
	&UApplicationThreadWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UApplicationThreadWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UApplicationThreadWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UApplicationThreadWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UApplicationThreadWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UApplicationThreadWidget()
{
	if (!Z_Registration_Info_UClass_UApplicationThreadWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApplicationThreadWidget.OuterSingleton, Z_Construct_UClass_UApplicationThreadWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UApplicationThreadWidget.OuterSingleton;
}
UApplicationThreadWidget::UApplicationThreadWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UApplicationThreadWidget);
UApplicationThreadWidget::~UApplicationThreadWidget() {}
// ********** End Class UApplicationThreadWidget ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_ApplicationThreadWidget_h__Script_UnrealSamples_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UApplicationThreadWidget, UApplicationThreadWidget::StaticClass, TEXT("UApplicationThreadWidget"), &Z_Registration_Info_UClass_UApplicationThreadWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApplicationThreadWidget), 1548569870U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_ApplicationThreadWidget_h__Script_UnrealSamples_3497239415(TEXT("/Script/UnrealSamples"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_ApplicationThreadWidget_h__Script_UnrealSamples_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_ApplicationThreadWidget_h__Script_UnrealSamples_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
