// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealSamples/SpatialMarkerTrackingWidget.h"
#include "AndroidXRSpatialEntitiesTypes.h"
#include "AndroidXRSpatialMarkerTrackingTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSpatialMarkerTrackingWidget() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXRSPATIALENTITIES_API UEnum* Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialCapability();
ANDROIDXRSPATIALENTITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRSpatialCapabilityInfo();
ANDROIDXRSPATIALMARKERTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FSpatialMarkerTrackingConfig();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UCheckBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UComboBoxString_NoRegister();
UMG_API UClass* Z_Construct_UClass_USlider_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UNREALSAMPLES_API UClass* Z_Construct_UClass_USpatialMarkerConfigWidget();
UNREALSAMPLES_API UClass* Z_Construct_UClass_USpatialMarkerConfigWidget_NoRegister();
UNREALSAMPLES_API UClass* Z_Construct_UClass_USpatialMarkerConfigWidgetWithComboBox();
UNREALSAMPLES_API UClass* Z_Construct_UClass_USpatialMarkerConfigWidgetWithComboBox_NoRegister();
UNREALSAMPLES_API UClass* Z_Construct_UClass_USpatialMarkerTrackingWidget();
UNREALSAMPLES_API UClass* Z_Construct_UClass_USpatialMarkerTrackingWidget_NoRegister();
UNREALSAMPLES_API UFunction* Z_Construct_UDelegateFunction_UnrealSamples_SpatialMarkerTrackingStartClicked__DelegateSignature();
UNREALSAMPLES_API UFunction* Z_Construct_UDelegateFunction_UnrealSamples_SpatialMarkerTrackingStopClicked__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_UnrealSamples();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FSpatialMarkerTrackingStartClicked ************************************
struct Z_Construct_UDelegateFunction_UnrealSamples_SpatialMarkerTrackingStartClicked__DelegateSignature_Statics
{
	struct _Script_UnrealSamples_eventSpatialMarkerTrackingStartClicked_Parms
	{
		FSpatialMarkerTrackingConfig Config;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpatialMarkerTrackingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UnrealSamples_SpatialMarkerTrackingStartClicked__DelegateSignature_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UnrealSamples_eventSpatialMarkerTrackingStartClicked_Parms, Config), Z_Construct_UScriptStruct_FSpatialMarkerTrackingConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 3845565288
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UnrealSamples_SpatialMarkerTrackingStartClicked__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnrealSamples_SpatialMarkerTrackingStartClicked__DelegateSignature_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealSamples_SpatialMarkerTrackingStartClicked__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UnrealSamples_SpatialMarkerTrackingStartClicked__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UnrealSamples, nullptr, "SpatialMarkerTrackingStartClicked__DelegateSignature", Z_Construct_UDelegateFunction_UnrealSamples_SpatialMarkerTrackingStartClicked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealSamples_SpatialMarkerTrackingStartClicked__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UnrealSamples_SpatialMarkerTrackingStartClicked__DelegateSignature_Statics::_Script_UnrealSamples_eventSpatialMarkerTrackingStartClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealSamples_SpatialMarkerTrackingStartClicked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UnrealSamples_SpatialMarkerTrackingStartClicked__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UnrealSamples_SpatialMarkerTrackingStartClicked__DelegateSignature_Statics::_Script_UnrealSamples_eventSpatialMarkerTrackingStartClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UnrealSamples_SpatialMarkerTrackingStartClicked__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UnrealSamples_SpatialMarkerTrackingStartClicked__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSpatialMarkerTrackingStartClicked_DelegateWrapper(const FMulticastScriptDelegate& SpatialMarkerTrackingStartClicked, FSpatialMarkerTrackingConfig const& Config)
{
	struct _Script_UnrealSamples_eventSpatialMarkerTrackingStartClicked_Parms
	{
		FSpatialMarkerTrackingConfig Config;
	};
	_Script_UnrealSamples_eventSpatialMarkerTrackingStartClicked_Parms Parms;
	Parms.Config=Config;
	SpatialMarkerTrackingStartClicked.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSpatialMarkerTrackingStartClicked **************************************

// ********** Begin Delegate FSpatialMarkerTrackingStopClicked *************************************
struct Z_Construct_UDelegateFunction_UnrealSamples_SpatialMarkerTrackingStopClicked__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpatialMarkerTrackingWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UnrealSamples_SpatialMarkerTrackingStopClicked__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UnrealSamples, nullptr, "SpatialMarkerTrackingStopClicked__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealSamples_SpatialMarkerTrackingStopClicked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UnrealSamples_SpatialMarkerTrackingStopClicked__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_UnrealSamples_SpatialMarkerTrackingStopClicked__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UnrealSamples_SpatialMarkerTrackingStopClicked__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSpatialMarkerTrackingStopClicked_DelegateWrapper(const FMulticastScriptDelegate& SpatialMarkerTrackingStopClicked)
{
	SpatialMarkerTrackingStopClicked.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FSpatialMarkerTrackingStopClicked ***************************************

// ********** Begin Class USpatialMarkerConfigWidget ***********************************************
void USpatialMarkerConfigWidget::StaticRegisterNativesUSpatialMarkerConfigWidget()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USpatialMarkerConfigWidget;
UClass* USpatialMarkerConfigWidget::GetPrivateStaticClass()
{
	using TClass = USpatialMarkerConfigWidget;
	if (!Z_Registration_Info_UClass_USpatialMarkerConfigWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SpatialMarkerConfigWidget"),
			Z_Registration_Info_UClass_USpatialMarkerConfigWidget.InnerSingleton,
			StaticRegisterNativesUSpatialMarkerConfigWidget,
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
	return Z_Registration_Info_UClass_USpatialMarkerConfigWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_USpatialMarkerConfigWidget_NoRegister()
{
	return USpatialMarkerConfigWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USpatialMarkerConfigWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SpatialMarkerTrackingWidget.h" },
		{ "ModuleRelativePath", "SpatialMarkerTrackingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerTypeLabel_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SpatialMarkerConfigWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpatialMarkerTrackingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableMarkerType_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SpatialMarkerConfigWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpatialMarkerTrackingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptimizeForStaticMarker_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SpatialMarkerConfigWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpatialMarkerTrackingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptimizeForFixedLengthMarker_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SpatialMarkerConfigWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpatialMarkerTrackingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerLengthSlider_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SpatialMarkerConfigWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpatialMarkerTrackingWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MarkerTypeLabel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnableMarkerType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptimizeForStaticMarker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptimizeForFixedLengthMarker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MarkerLengthSlider;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpatialMarkerConfigWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialMarkerConfigWidget_Statics::NewProp_MarkerTypeLabel = { "MarkerTypeLabel", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpatialMarkerConfigWidget, MarkerTypeLabel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerTypeLabel_MetaData), NewProp_MarkerTypeLabel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialMarkerConfigWidget_Statics::NewProp_EnableMarkerType = { "EnableMarkerType", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpatialMarkerConfigWidget, EnableMarkerType), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableMarkerType_MetaData), NewProp_EnableMarkerType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialMarkerConfigWidget_Statics::NewProp_OptimizeForStaticMarker = { "OptimizeForStaticMarker", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpatialMarkerConfigWidget, OptimizeForStaticMarker), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptimizeForStaticMarker_MetaData), NewProp_OptimizeForStaticMarker_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialMarkerConfigWidget_Statics::NewProp_OptimizeForFixedLengthMarker = { "OptimizeForFixedLengthMarker", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpatialMarkerConfigWidget, OptimizeForFixedLengthMarker), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptimizeForFixedLengthMarker_MetaData), NewProp_OptimizeForFixedLengthMarker_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialMarkerConfigWidget_Statics::NewProp_MarkerLengthSlider = { "MarkerLengthSlider", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpatialMarkerConfigWidget, MarkerLengthSlider), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerLengthSlider_MetaData), NewProp_MarkerLengthSlider_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpatialMarkerConfigWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialMarkerConfigWidget_Statics::NewProp_MarkerTypeLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialMarkerConfigWidget_Statics::NewProp_EnableMarkerType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialMarkerConfigWidget_Statics::NewProp_OptimizeForStaticMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialMarkerConfigWidget_Statics::NewProp_OptimizeForFixedLengthMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialMarkerConfigWidget_Statics::NewProp_MarkerLengthSlider,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpatialMarkerConfigWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USpatialMarkerConfigWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealSamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpatialMarkerConfigWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpatialMarkerConfigWidget_Statics::ClassParams = {
	&USpatialMarkerConfigWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USpatialMarkerConfigWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USpatialMarkerConfigWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpatialMarkerConfigWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_USpatialMarkerConfigWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpatialMarkerConfigWidget()
{
	if (!Z_Registration_Info_UClass_USpatialMarkerConfigWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpatialMarkerConfigWidget.OuterSingleton, Z_Construct_UClass_USpatialMarkerConfigWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpatialMarkerConfigWidget.OuterSingleton;
}
USpatialMarkerConfigWidget::USpatialMarkerConfigWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpatialMarkerConfigWidget);
USpatialMarkerConfigWidget::~USpatialMarkerConfigWidget() {}
// ********** End Class USpatialMarkerConfigWidget *************************************************

// ********** Begin Class USpatialMarkerConfigWidgetWithComboBox ***********************************
void USpatialMarkerConfigWidgetWithComboBox::StaticRegisterNativesUSpatialMarkerConfigWidgetWithComboBox()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USpatialMarkerConfigWidgetWithComboBox;
UClass* USpatialMarkerConfigWidgetWithComboBox::GetPrivateStaticClass()
{
	using TClass = USpatialMarkerConfigWidgetWithComboBox;
	if (!Z_Registration_Info_UClass_USpatialMarkerConfigWidgetWithComboBox.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SpatialMarkerConfigWidgetWithComboBox"),
			Z_Registration_Info_UClass_USpatialMarkerConfigWidgetWithComboBox.InnerSingleton,
			StaticRegisterNativesUSpatialMarkerConfigWidgetWithComboBox,
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
	return Z_Registration_Info_UClass_USpatialMarkerConfigWidgetWithComboBox.InnerSingleton;
}
UClass* Z_Construct_UClass_USpatialMarkerConfigWidgetWithComboBox_NoRegister()
{
	return USpatialMarkerConfigWidgetWithComboBox::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USpatialMarkerConfigWidgetWithComboBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SpatialMarkerTrackingWidget.h" },
		{ "ModuleRelativePath", "SpatialMarkerTrackingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerConfig_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SpatialMarkerConfigWidgetWithComboBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpatialMarkerTrackingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SpatialMarkerConfigWidgetWithComboBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpatialMarkerTrackingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SpatialMarkerConfigWidgetWithComboBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpatialMarkerTrackingWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MarkerConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LabelText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpatialMarkerConfigWidgetWithComboBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialMarkerConfigWidgetWithComboBox_Statics::NewProp_MarkerConfig = { "MarkerConfig", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpatialMarkerConfigWidgetWithComboBox, MarkerConfig), Z_Construct_UClass_USpatialMarkerConfigWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerConfig_MetaData), NewProp_MarkerConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialMarkerConfigWidgetWithComboBox_Statics::NewProp_LabelText = { "LabelText", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpatialMarkerConfigWidgetWithComboBox, LabelText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelText_MetaData), NewProp_LabelText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialMarkerConfigWidgetWithComboBox_Statics::NewProp_ComboBox = { "ComboBox", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpatialMarkerConfigWidgetWithComboBox, ComboBox), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboBox_MetaData), NewProp_ComboBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpatialMarkerConfigWidgetWithComboBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialMarkerConfigWidgetWithComboBox_Statics::NewProp_MarkerConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialMarkerConfigWidgetWithComboBox_Statics::NewProp_LabelText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialMarkerConfigWidgetWithComboBox_Statics::NewProp_ComboBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpatialMarkerConfigWidgetWithComboBox_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USpatialMarkerConfigWidgetWithComboBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealSamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpatialMarkerConfigWidgetWithComboBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpatialMarkerConfigWidgetWithComboBox_Statics::ClassParams = {
	&USpatialMarkerConfigWidgetWithComboBox::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USpatialMarkerConfigWidgetWithComboBox_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USpatialMarkerConfigWidgetWithComboBox_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpatialMarkerConfigWidgetWithComboBox_Statics::Class_MetaDataParams), Z_Construct_UClass_USpatialMarkerConfigWidgetWithComboBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpatialMarkerConfigWidgetWithComboBox()
{
	if (!Z_Registration_Info_UClass_USpatialMarkerConfigWidgetWithComboBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpatialMarkerConfigWidgetWithComboBox.OuterSingleton, Z_Construct_UClass_USpatialMarkerConfigWidgetWithComboBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpatialMarkerConfigWidgetWithComboBox.OuterSingleton;
}
USpatialMarkerConfigWidgetWithComboBox::USpatialMarkerConfigWidgetWithComboBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpatialMarkerConfigWidgetWithComboBox);
USpatialMarkerConfigWidgetWithComboBox::~USpatialMarkerConfigWidgetWithComboBox() {}
// ********** End Class USpatialMarkerConfigWidgetWithComboBox *************************************

// ********** Begin Class USpatialMarkerTrackingWidget Function ForceUpdateClickedHandler **********
struct Z_Construct_UFunction_USpatialMarkerTrackingWidget_ForceUpdateClickedHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpatialMarkerTrackingWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialMarkerTrackingWidget_ForceUpdateClickedHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpatialMarkerTrackingWidget, nullptr, "ForceUpdateClickedHandler", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialMarkerTrackingWidget_ForceUpdateClickedHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpatialMarkerTrackingWidget_ForceUpdateClickedHandler_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USpatialMarkerTrackingWidget_ForceUpdateClickedHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpatialMarkerTrackingWidget_ForceUpdateClickedHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpatialMarkerTrackingWidget::execForceUpdateClickedHandler)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceUpdateClickedHandler();
	P_NATIVE_END;
}
// ********** End Class USpatialMarkerTrackingWidget Function ForceUpdateClickedHandler ************

// ********** Begin Class USpatialMarkerTrackingWidget Function InitializeMarkerConfig *************
struct Z_Construct_UFunction_USpatialMarkerTrackingWidget_InitializeMarkerConfig_Statics
{
	struct SpatialMarkerTrackingWidget_eventInitializeMarkerConfig_Parms
	{
		TMap<ESpatialCapability,FAndroidXRSpatialCapabilityInfo> CapabilityInfoTable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpatialMarkerTrackingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapabilityInfoTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CapabilityInfoTable_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CapabilityInfoTable_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CapabilityInfoTable_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CapabilityInfoTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpatialMarkerTrackingWidget_InitializeMarkerConfig_Statics::NewProp_CapabilityInfoTable_ValueProp = { "CapabilityInfoTable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAndroidXRSpatialCapabilityInfo, METADATA_PARAMS(0, nullptr) }; // 3438250740
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USpatialMarkerTrackingWidget_InitializeMarkerConfig_Statics::NewProp_CapabilityInfoTable_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USpatialMarkerTrackingWidget_InitializeMarkerConfig_Statics::NewProp_CapabilityInfoTable_Key_KeyProp = { "CapabilityInfoTable_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialCapability, METADATA_PARAMS(0, nullptr) }; // 4174530781
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USpatialMarkerTrackingWidget_InitializeMarkerConfig_Statics::NewProp_CapabilityInfoTable = { "CapabilityInfoTable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpatialMarkerTrackingWidget_eventInitializeMarkerConfig_Parms, CapabilityInfoTable), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapabilityInfoTable_MetaData), NewProp_CapabilityInfoTable_MetaData) }; // 4174530781 3438250740
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialMarkerTrackingWidget_InitializeMarkerConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialMarkerTrackingWidget_InitializeMarkerConfig_Statics::NewProp_CapabilityInfoTable_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialMarkerTrackingWidget_InitializeMarkerConfig_Statics::NewProp_CapabilityInfoTable_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialMarkerTrackingWidget_InitializeMarkerConfig_Statics::NewProp_CapabilityInfoTable_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialMarkerTrackingWidget_InitializeMarkerConfig_Statics::NewProp_CapabilityInfoTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialMarkerTrackingWidget_InitializeMarkerConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialMarkerTrackingWidget_InitializeMarkerConfig_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpatialMarkerTrackingWidget, nullptr, "InitializeMarkerConfig", Z_Construct_UFunction_USpatialMarkerTrackingWidget_InitializeMarkerConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialMarkerTrackingWidget_InitializeMarkerConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpatialMarkerTrackingWidget_InitializeMarkerConfig_Statics::SpatialMarkerTrackingWidget_eventInitializeMarkerConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialMarkerTrackingWidget_InitializeMarkerConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpatialMarkerTrackingWidget_InitializeMarkerConfig_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USpatialMarkerTrackingWidget_InitializeMarkerConfig_Statics::SpatialMarkerTrackingWidget_eventInitializeMarkerConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpatialMarkerTrackingWidget_InitializeMarkerConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpatialMarkerTrackingWidget_InitializeMarkerConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpatialMarkerTrackingWidget::execInitializeMarkerConfig)
{
	P_GET_TMAP_REF(ESpatialCapability,FAndroidXRSpatialCapabilityInfo,Z_Param_Out_CapabilityInfoTable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeMarkerConfig(Z_Param_Out_CapabilityInfoTable);
	P_NATIVE_END;
}
// ********** End Class USpatialMarkerTrackingWidget Function InitializeMarkerConfig ***************

// ********** Begin Class USpatialMarkerTrackingWidget Function StartClickedHandler ****************
struct Z_Construct_UFunction_USpatialMarkerTrackingWidget_StartClickedHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpatialMarkerTrackingWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialMarkerTrackingWidget_StartClickedHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpatialMarkerTrackingWidget, nullptr, "StartClickedHandler", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialMarkerTrackingWidget_StartClickedHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpatialMarkerTrackingWidget_StartClickedHandler_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USpatialMarkerTrackingWidget_StartClickedHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpatialMarkerTrackingWidget_StartClickedHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpatialMarkerTrackingWidget::execStartClickedHandler)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartClickedHandler();
	P_NATIVE_END;
}
// ********** End Class USpatialMarkerTrackingWidget Function StartClickedHandler ******************

// ********** Begin Class USpatialMarkerTrackingWidget Function StopClickedHandler *****************
struct Z_Construct_UFunction_USpatialMarkerTrackingWidget_StopClickedHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpatialMarkerTrackingWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialMarkerTrackingWidget_StopClickedHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpatialMarkerTrackingWidget, nullptr, "StopClickedHandler", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialMarkerTrackingWidget_StopClickedHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpatialMarkerTrackingWidget_StopClickedHandler_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USpatialMarkerTrackingWidget_StopClickedHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpatialMarkerTrackingWidget_StopClickedHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpatialMarkerTrackingWidget::execStopClickedHandler)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopClickedHandler();
	P_NATIVE_END;
}
// ********** End Class USpatialMarkerTrackingWidget Function StopClickedHandler *******************

// ********** Begin Class USpatialMarkerTrackingWidget *********************************************
void USpatialMarkerTrackingWidget::StaticRegisterNativesUSpatialMarkerTrackingWidget()
{
	UClass* Class = USpatialMarkerTrackingWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ForceUpdateClickedHandler", &USpatialMarkerTrackingWidget::execForceUpdateClickedHandler },
		{ "InitializeMarkerConfig", &USpatialMarkerTrackingWidget::execInitializeMarkerConfig },
		{ "StartClickedHandler", &USpatialMarkerTrackingWidget::execStartClickedHandler },
		{ "StopClickedHandler", &USpatialMarkerTrackingWidget::execStopClickedHandler },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USpatialMarkerTrackingWidget;
UClass* USpatialMarkerTrackingWidget::GetPrivateStaticClass()
{
	using TClass = USpatialMarkerTrackingWidget;
	if (!Z_Registration_Info_UClass_USpatialMarkerTrackingWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SpatialMarkerTrackingWidget"),
			Z_Registration_Info_UClass_USpatialMarkerTrackingWidget.InnerSingleton,
			StaticRegisterNativesUSpatialMarkerTrackingWidget,
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
	return Z_Registration_Info_UClass_USpatialMarkerTrackingWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_USpatialMarkerTrackingWidget_NoRegister()
{
	return USpatialMarkerTrackingWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USpatialMarkerTrackingWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SpatialMarkerTrackingWidget.h" },
		{ "ModuleRelativePath", "SpatialMarkerTrackingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QRCodeConfig_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SpatialMarkerTrackingWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpatialMarkerTrackingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MicroQRCodeConfig_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SpatialMarkerTrackingWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpatialMarkerTrackingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArucoCodeConfig_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SpatialMarkerTrackingWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpatialMarkerTrackingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AprilTagConfig_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SpatialMarkerTrackingWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpatialMarkerTrackingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTrackingButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SpatialMarkerTrackingWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpatialMarkerTrackingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopTrackingButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SpatialMarkerTrackingWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpatialMarkerTrackingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceUpdateButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SpatialMarkerTrackingWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpatialMarkerTrackingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStartTrackingClicked_MetaData[] = {
		{ "ModuleRelativePath", "SpatialMarkerTrackingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStopTrackingClicked_MetaData[] = {
		{ "ModuleRelativePath", "SpatialMarkerTrackingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnForceUpdateClicked_MetaData[] = {
		{ "ModuleRelativePath", "SpatialMarkerTrackingWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QRCodeConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MicroQRCodeConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArucoCodeConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AprilTagConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartTrackingButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StopTrackingButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ForceUpdateButton;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartTrackingClicked;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStopTrackingClicked;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnForceUpdateClicked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USpatialMarkerTrackingWidget_ForceUpdateClickedHandler, "ForceUpdateClickedHandler" }, // 3313252466
		{ &Z_Construct_UFunction_USpatialMarkerTrackingWidget_InitializeMarkerConfig, "InitializeMarkerConfig" }, // 1241334037
		{ &Z_Construct_UFunction_USpatialMarkerTrackingWidget_StartClickedHandler, "StartClickedHandler" }, // 3608720209
		{ &Z_Construct_UFunction_USpatialMarkerTrackingWidget_StopClickedHandler, "StopClickedHandler" }, // 869810585
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpatialMarkerTrackingWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialMarkerTrackingWidget_Statics::NewProp_QRCodeConfig = { "QRCodeConfig", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpatialMarkerTrackingWidget, QRCodeConfig), Z_Construct_UClass_USpatialMarkerConfigWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QRCodeConfig_MetaData), NewProp_QRCodeConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialMarkerTrackingWidget_Statics::NewProp_MicroQRCodeConfig = { "MicroQRCodeConfig", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpatialMarkerTrackingWidget, MicroQRCodeConfig), Z_Construct_UClass_USpatialMarkerConfigWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MicroQRCodeConfig_MetaData), NewProp_MicroQRCodeConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialMarkerTrackingWidget_Statics::NewProp_ArucoCodeConfig = { "ArucoCodeConfig", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpatialMarkerTrackingWidget, ArucoCodeConfig), Z_Construct_UClass_USpatialMarkerConfigWidgetWithComboBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArucoCodeConfig_MetaData), NewProp_ArucoCodeConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialMarkerTrackingWidget_Statics::NewProp_AprilTagConfig = { "AprilTagConfig", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpatialMarkerTrackingWidget, AprilTagConfig), Z_Construct_UClass_USpatialMarkerConfigWidgetWithComboBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AprilTagConfig_MetaData), NewProp_AprilTagConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialMarkerTrackingWidget_Statics::NewProp_StartTrackingButton = { "StartTrackingButton", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpatialMarkerTrackingWidget, StartTrackingButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTrackingButton_MetaData), NewProp_StartTrackingButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialMarkerTrackingWidget_Statics::NewProp_StopTrackingButton = { "StopTrackingButton", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpatialMarkerTrackingWidget, StopTrackingButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopTrackingButton_MetaData), NewProp_StopTrackingButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialMarkerTrackingWidget_Statics::NewProp_ForceUpdateButton = { "ForceUpdateButton", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpatialMarkerTrackingWidget, ForceUpdateButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceUpdateButton_MetaData), NewProp_ForceUpdateButton_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpatialMarkerTrackingWidget_Statics::NewProp_OnStartTrackingClicked = { "OnStartTrackingClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpatialMarkerTrackingWidget, OnStartTrackingClicked), Z_Construct_UDelegateFunction_UnrealSamples_SpatialMarkerTrackingStartClicked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStartTrackingClicked_MetaData), NewProp_OnStartTrackingClicked_MetaData) }; // 528266744
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpatialMarkerTrackingWidget_Statics::NewProp_OnStopTrackingClicked = { "OnStopTrackingClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpatialMarkerTrackingWidget, OnStopTrackingClicked), Z_Construct_UDelegateFunction_UnrealSamples_SpatialMarkerTrackingStopClicked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStopTrackingClicked_MetaData), NewProp_OnStopTrackingClicked_MetaData) }; // 1085730490
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpatialMarkerTrackingWidget_Statics::NewProp_OnForceUpdateClicked = { "OnForceUpdateClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpatialMarkerTrackingWidget, OnForceUpdateClicked), Z_Construct_UDelegateFunction_UnrealSamples_SpatialMarkerTrackingStopClicked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnForceUpdateClicked_MetaData), NewProp_OnForceUpdateClicked_MetaData) }; // 1085730490
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpatialMarkerTrackingWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialMarkerTrackingWidget_Statics::NewProp_QRCodeConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialMarkerTrackingWidget_Statics::NewProp_MicroQRCodeConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialMarkerTrackingWidget_Statics::NewProp_ArucoCodeConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialMarkerTrackingWidget_Statics::NewProp_AprilTagConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialMarkerTrackingWidget_Statics::NewProp_StartTrackingButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialMarkerTrackingWidget_Statics::NewProp_StopTrackingButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialMarkerTrackingWidget_Statics::NewProp_ForceUpdateButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialMarkerTrackingWidget_Statics::NewProp_OnStartTrackingClicked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialMarkerTrackingWidget_Statics::NewProp_OnStopTrackingClicked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialMarkerTrackingWidget_Statics::NewProp_OnForceUpdateClicked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpatialMarkerTrackingWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USpatialMarkerTrackingWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealSamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpatialMarkerTrackingWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpatialMarkerTrackingWidget_Statics::ClassParams = {
	&USpatialMarkerTrackingWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USpatialMarkerTrackingWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USpatialMarkerTrackingWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpatialMarkerTrackingWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_USpatialMarkerTrackingWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpatialMarkerTrackingWidget()
{
	if (!Z_Registration_Info_UClass_USpatialMarkerTrackingWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpatialMarkerTrackingWidget.OuterSingleton, Z_Construct_UClass_USpatialMarkerTrackingWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpatialMarkerTrackingWidget.OuterSingleton;
}
USpatialMarkerTrackingWidget::USpatialMarkerTrackingWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpatialMarkerTrackingWidget);
USpatialMarkerTrackingWidget::~USpatialMarkerTrackingWidget() {}
// ********** End Class USpatialMarkerTrackingWidget ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialMarkerTrackingWidget_h__Script_UnrealSamples_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpatialMarkerConfigWidget, USpatialMarkerConfigWidget::StaticClass, TEXT("USpatialMarkerConfigWidget"), &Z_Registration_Info_UClass_USpatialMarkerConfigWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpatialMarkerConfigWidget), 1356550736U) },
		{ Z_Construct_UClass_USpatialMarkerConfigWidgetWithComboBox, USpatialMarkerConfigWidgetWithComboBox::StaticClass, TEXT("USpatialMarkerConfigWidgetWithComboBox"), &Z_Registration_Info_UClass_USpatialMarkerConfigWidgetWithComboBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpatialMarkerConfigWidgetWithComboBox), 1667331556U) },
		{ Z_Construct_UClass_USpatialMarkerTrackingWidget, USpatialMarkerTrackingWidget::StaticClass, TEXT("USpatialMarkerTrackingWidget"), &Z_Registration_Info_UClass_USpatialMarkerTrackingWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpatialMarkerTrackingWidget), 304105233U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialMarkerTrackingWidget_h__Script_UnrealSamples_1570763479(TEXT("/Script/UnrealSamples"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialMarkerTrackingWidget_h__Script_UnrealSamples_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialMarkerTrackingWidget_h__Script_UnrealSamples_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
