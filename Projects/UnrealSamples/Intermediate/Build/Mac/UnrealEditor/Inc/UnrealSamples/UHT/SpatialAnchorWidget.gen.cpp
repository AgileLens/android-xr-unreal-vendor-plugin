// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealSamples/SpatialAnchorWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSpatialAnchorWidget() {}

// ********** Begin Cross Module References ********************************************************
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UComboBoxString_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UNREALSAMPLES_API UClass* Z_Construct_UClass_USpatialAnchorWidget();
UNREALSAMPLES_API UClass* Z_Construct_UClass_USpatialAnchorWidget_NoRegister();
UNREALSAMPLES_API UEnum* Z_Construct_UEnum_UnrealSamples_ESpatialAnchorOperationMode();
UNREALSAMPLES_API UFunction* Z_Construct_UDelegateFunction_UnrealSamples_SpatialAnchorOperationModeChagned__DelegateSignature();
UNREALSAMPLES_API UFunction* Z_Construct_UDelegateFunction_UnrealSamples_SpatialWidgetButtonClicked__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_UnrealSamples();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESpatialAnchorOperationMode ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpatialAnchorOperationMode;
static UEnum* ESpatialAnchorOperationMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESpatialAnchorOperationMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESpatialAnchorOperationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealSamples_ESpatialAnchorOperationMode, (UObject*)Z_Construct_UPackage__Script_UnrealSamples(), TEXT("ESpatialAnchorOperationMode"));
	}
	return Z_Registration_Info_UEnum_ESpatialAnchorOperationMode.OuterSingleton;
}
template<> UNREALSAMPLES_API UEnum* StaticEnum<ESpatialAnchorOperationMode>()
{
	return ESpatialAnchorOperationMode_StaticEnum();
}
struct Z_Construct_UEnum_UnrealSamples_ESpatialAnchorOperationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Create.Name", "ESpatialAnchorOperationMode::Create" },
		{ "Delete.Name", "ESpatialAnchorOperationMode::Delete" },
		{ "ModuleRelativePath", "SpatialAnchorWidget.h" },
		{ "Persist.Name", "ESpatialAnchorOperationMode::Persist" },
		{ "Unpersist.Name", "ESpatialAnchorOperationMode::Unpersist" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESpatialAnchorOperationMode::Create", (int64)ESpatialAnchorOperationMode::Create },
		{ "ESpatialAnchorOperationMode::Delete", (int64)ESpatialAnchorOperationMode::Delete },
		{ "ESpatialAnchorOperationMode::Persist", (int64)ESpatialAnchorOperationMode::Persist },
		{ "ESpatialAnchorOperationMode::Unpersist", (int64)ESpatialAnchorOperationMode::Unpersist },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealSamples_ESpatialAnchorOperationMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UnrealSamples,
	nullptr,
	"ESpatialAnchorOperationMode",
	"ESpatialAnchorOperationMode",
	Z_Construct_UEnum_UnrealSamples_ESpatialAnchorOperationMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealSamples_ESpatialAnchorOperationMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealSamples_ESpatialAnchorOperationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UnrealSamples_ESpatialAnchorOperationMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UnrealSamples_ESpatialAnchorOperationMode()
{
	if (!Z_Registration_Info_UEnum_ESpatialAnchorOperationMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpatialAnchorOperationMode.InnerSingleton, Z_Construct_UEnum_UnrealSamples_ESpatialAnchorOperationMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESpatialAnchorOperationMode.InnerSingleton;
}
// ********** End Enum ESpatialAnchorOperationMode *************************************************

// ********** Begin Delegate FSpatialAnchorOperationModeChagned ************************************
struct Z_Construct_UDelegateFunction_UnrealSamples_SpatialAnchorOperationModeChagned__DelegateSignature_Statics
{
	struct _Script_UnrealSamples_eventSpatialAnchorOperationModeChagned_Parms
	{
		ESpatialAnchorOperationMode Operation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpatialAnchorWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UnrealSamples_SpatialAnchorOperationModeChagned__DelegateSignature_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UnrealSamples_SpatialAnchorOperationModeChagned__DelegateSignature_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UnrealSamples_eventSpatialAnchorOperationModeChagned_Parms, Operation), Z_Construct_UEnum_UnrealSamples_ESpatialAnchorOperationMode, METADATA_PARAMS(0, nullptr) }; // 3001137866
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UnrealSamples_SpatialAnchorOperationModeChagned__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnrealSamples_SpatialAnchorOperationModeChagned__DelegateSignature_Statics::NewProp_Operation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnrealSamples_SpatialAnchorOperationModeChagned__DelegateSignature_Statics::NewProp_Operation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealSamples_SpatialAnchorOperationModeChagned__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UnrealSamples_SpatialAnchorOperationModeChagned__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UnrealSamples, nullptr, "SpatialAnchorOperationModeChagned__DelegateSignature", Z_Construct_UDelegateFunction_UnrealSamples_SpatialAnchorOperationModeChagned__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealSamples_SpatialAnchorOperationModeChagned__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UnrealSamples_SpatialAnchorOperationModeChagned__DelegateSignature_Statics::_Script_UnrealSamples_eventSpatialAnchorOperationModeChagned_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealSamples_SpatialAnchorOperationModeChagned__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UnrealSamples_SpatialAnchorOperationModeChagned__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UnrealSamples_SpatialAnchorOperationModeChagned__DelegateSignature_Statics::_Script_UnrealSamples_eventSpatialAnchorOperationModeChagned_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UnrealSamples_SpatialAnchorOperationModeChagned__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UnrealSamples_SpatialAnchorOperationModeChagned__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSpatialAnchorOperationModeChagned_DelegateWrapper(const FMulticastScriptDelegate& SpatialAnchorOperationModeChagned, ESpatialAnchorOperationMode Operation)
{
	struct _Script_UnrealSamples_eventSpatialAnchorOperationModeChagned_Parms
	{
		ESpatialAnchorOperationMode Operation;
	};
	_Script_UnrealSamples_eventSpatialAnchorOperationModeChagned_Parms Parms;
	Parms.Operation=Operation;
	SpatialAnchorOperationModeChagned.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSpatialAnchorOperationModeChagned **************************************

// ********** Begin Delegate FSpatialWidgetButtonClicked *******************************************
struct Z_Construct_UDelegateFunction_UnrealSamples_SpatialWidgetButtonClicked__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpatialAnchorWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UnrealSamples_SpatialWidgetButtonClicked__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UnrealSamples, nullptr, "SpatialWidgetButtonClicked__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealSamples_SpatialWidgetButtonClicked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UnrealSamples_SpatialWidgetButtonClicked__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_UnrealSamples_SpatialWidgetButtonClicked__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UnrealSamples_SpatialWidgetButtonClicked__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSpatialWidgetButtonClicked_DelegateWrapper(const FMulticastScriptDelegate& SpatialWidgetButtonClicked)
{
	SpatialWidgetButtonClicked.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FSpatialWidgetButtonClicked *********************************************

// ********** Begin Class USpatialAnchorWidget Function ExecuteClickedHandler **********************
struct Z_Construct_UFunction_USpatialAnchorWidget_ExecuteClickedHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpatialAnchorWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialAnchorWidget_ExecuteClickedHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpatialAnchorWidget, nullptr, "ExecuteClickedHandler", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialAnchorWidget_ExecuteClickedHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpatialAnchorWidget_ExecuteClickedHandler_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USpatialAnchorWidget_ExecuteClickedHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpatialAnchorWidget_ExecuteClickedHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpatialAnchorWidget::execExecuteClickedHandler)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExecuteClickedHandler();
	P_NATIVE_END;
}
// ********** End Class USpatialAnchorWidget Function ExecuteClickedHandler ************************

// ********** Begin Class USpatialAnchorWidget Function LoadPersistedClickedHandler ****************
struct Z_Construct_UFunction_USpatialAnchorWidget_LoadPersistedClickedHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpatialAnchorWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialAnchorWidget_LoadPersistedClickedHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpatialAnchorWidget, nullptr, "LoadPersistedClickedHandler", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialAnchorWidget_LoadPersistedClickedHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpatialAnchorWidget_LoadPersistedClickedHandler_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USpatialAnchorWidget_LoadPersistedClickedHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpatialAnchorWidget_LoadPersistedClickedHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpatialAnchorWidget::execLoadPersistedClickedHandler)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadPersistedClickedHandler();
	P_NATIVE_END;
}
// ********** End Class USpatialAnchorWidget Function LoadPersistedClickedHandler ******************

// ********** Begin Class USpatialAnchorWidget Function StartClickedHandler ************************
struct Z_Construct_UFunction_USpatialAnchorWidget_StartClickedHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpatialAnchorWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialAnchorWidget_StartClickedHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpatialAnchorWidget, nullptr, "StartClickedHandler", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialAnchorWidget_StartClickedHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpatialAnchorWidget_StartClickedHandler_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USpatialAnchorWidget_StartClickedHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpatialAnchorWidget_StartClickedHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpatialAnchorWidget::execStartClickedHandler)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartClickedHandler();
	P_NATIVE_END;
}
// ********** End Class USpatialAnchorWidget Function StartClickedHandler **************************

// ********** Begin Class USpatialAnchorWidget Function StopClickedHandler *************************
struct Z_Construct_UFunction_USpatialAnchorWidget_StopClickedHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpatialAnchorWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialAnchorWidget_StopClickedHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpatialAnchorWidget, nullptr, "StopClickedHandler", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialAnchorWidget_StopClickedHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpatialAnchorWidget_StopClickedHandler_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USpatialAnchorWidget_StopClickedHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpatialAnchorWidget_StopClickedHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpatialAnchorWidget::execStopClickedHandler)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopClickedHandler();
	P_NATIVE_END;
}
// ********** End Class USpatialAnchorWidget Function StopClickedHandler ***************************

// ********** Begin Class USpatialAnchorWidget *****************************************************
void USpatialAnchorWidget::StaticRegisterNativesUSpatialAnchorWidget()
{
	UClass* Class = USpatialAnchorWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ExecuteClickedHandler", &USpatialAnchorWidget::execExecuteClickedHandler },
		{ "LoadPersistedClickedHandler", &USpatialAnchorWidget::execLoadPersistedClickedHandler },
		{ "StartClickedHandler", &USpatialAnchorWidget::execStartClickedHandler },
		{ "StopClickedHandler", &USpatialAnchorWidget::execStopClickedHandler },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USpatialAnchorWidget;
UClass* USpatialAnchorWidget::GetPrivateStaticClass()
{
	using TClass = USpatialAnchorWidget;
	if (!Z_Registration_Info_UClass_USpatialAnchorWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SpatialAnchorWidget"),
			Z_Registration_Info_UClass_USpatialAnchorWidget.InnerSingleton,
			StaticRegisterNativesUSpatialAnchorWidget,
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
	return Z_Registration_Info_UClass_USpatialAnchorWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_USpatialAnchorWidget_NoRegister()
{
	return USpatialAnchorWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USpatialAnchorWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SpatialAnchorWidget.h" },
		{ "ModuleRelativePath", "SpatialAnchorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperationModeComboBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SpatialAnchorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpatialAnchorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadPersistedButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SpatialAnchorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpatialAnchorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTrackingButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SpatialAnchorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpatialAnchorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopTrackingButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SpatialAnchorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpatialAnchorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SpatialAnchorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpatialAnchorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSpatialOperationChanged_MetaData[] = {
		{ "ModuleRelativePath", "SpatialAnchorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStartClicked_MetaData[] = {
		{ "ModuleRelativePath", "SpatialAnchorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStopClicked_MetaData[] = {
		{ "ModuleRelativePath", "SpatialAnchorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLoadPersistedAnchorsClicked_MetaData[] = {
		{ "ModuleRelativePath", "SpatialAnchorWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OperationModeComboBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadPersistedButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartTrackingButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StopTrackingButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExecuteButton;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSpatialOperationChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartClicked;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStopClicked;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoadPersistedAnchorsClicked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USpatialAnchorWidget_ExecuteClickedHandler, "ExecuteClickedHandler" }, // 3621098417
		{ &Z_Construct_UFunction_USpatialAnchorWidget_LoadPersistedClickedHandler, "LoadPersistedClickedHandler" }, // 3947939846
		{ &Z_Construct_UFunction_USpatialAnchorWidget_StartClickedHandler, "StartClickedHandler" }, // 2426161189
		{ &Z_Construct_UFunction_USpatialAnchorWidget_StopClickedHandler, "StopClickedHandler" }, // 2033180778
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpatialAnchorWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialAnchorWidget_Statics::NewProp_OperationModeComboBox = { "OperationModeComboBox", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpatialAnchorWidget, OperationModeComboBox), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperationModeComboBox_MetaData), NewProp_OperationModeComboBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialAnchorWidget_Statics::NewProp_LoadPersistedButton = { "LoadPersistedButton", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpatialAnchorWidget, LoadPersistedButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadPersistedButton_MetaData), NewProp_LoadPersistedButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialAnchorWidget_Statics::NewProp_StartTrackingButton = { "StartTrackingButton", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpatialAnchorWidget, StartTrackingButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTrackingButton_MetaData), NewProp_StartTrackingButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialAnchorWidget_Statics::NewProp_StopTrackingButton = { "StopTrackingButton", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpatialAnchorWidget, StopTrackingButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopTrackingButton_MetaData), NewProp_StopTrackingButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialAnchorWidget_Statics::NewProp_ExecuteButton = { "ExecuteButton", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpatialAnchorWidget, ExecuteButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecuteButton_MetaData), NewProp_ExecuteButton_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpatialAnchorWidget_Statics::NewProp_OnSpatialOperationChanged = { "OnSpatialOperationChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpatialAnchorWidget, OnSpatialOperationChanged), Z_Construct_UDelegateFunction_UnrealSamples_SpatialAnchorOperationModeChagned__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSpatialOperationChanged_MetaData), NewProp_OnSpatialOperationChanged_MetaData) }; // 557216776
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpatialAnchorWidget_Statics::NewProp_OnStartClicked = { "OnStartClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpatialAnchorWidget, OnStartClicked), Z_Construct_UDelegateFunction_UnrealSamples_SpatialWidgetButtonClicked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStartClicked_MetaData), NewProp_OnStartClicked_MetaData) }; // 3213374924
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpatialAnchorWidget_Statics::NewProp_OnStopClicked = { "OnStopClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpatialAnchorWidget, OnStopClicked), Z_Construct_UDelegateFunction_UnrealSamples_SpatialWidgetButtonClicked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStopClicked_MetaData), NewProp_OnStopClicked_MetaData) }; // 3213374924
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpatialAnchorWidget_Statics::NewProp_OnLoadPersistedAnchorsClicked = { "OnLoadPersistedAnchorsClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpatialAnchorWidget, OnLoadPersistedAnchorsClicked), Z_Construct_UDelegateFunction_UnrealSamples_SpatialWidgetButtonClicked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLoadPersistedAnchorsClicked_MetaData), NewProp_OnLoadPersistedAnchorsClicked_MetaData) }; // 3213374924
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpatialAnchorWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialAnchorWidget_Statics::NewProp_OperationModeComboBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialAnchorWidget_Statics::NewProp_LoadPersistedButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialAnchorWidget_Statics::NewProp_StartTrackingButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialAnchorWidget_Statics::NewProp_StopTrackingButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialAnchorWidget_Statics::NewProp_ExecuteButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialAnchorWidget_Statics::NewProp_OnSpatialOperationChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialAnchorWidget_Statics::NewProp_OnStartClicked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialAnchorWidget_Statics::NewProp_OnStopClicked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialAnchorWidget_Statics::NewProp_OnLoadPersistedAnchorsClicked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpatialAnchorWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USpatialAnchorWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealSamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpatialAnchorWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpatialAnchorWidget_Statics::ClassParams = {
	&USpatialAnchorWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USpatialAnchorWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USpatialAnchorWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpatialAnchorWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_USpatialAnchorWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpatialAnchorWidget()
{
	if (!Z_Registration_Info_UClass_USpatialAnchorWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpatialAnchorWidget.OuterSingleton, Z_Construct_UClass_USpatialAnchorWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpatialAnchorWidget.OuterSingleton;
}
USpatialAnchorWidget::USpatialAnchorWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpatialAnchorWidget);
USpatialAnchorWidget::~USpatialAnchorWidget() {}
// ********** End Class USpatialAnchorWidget *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialAnchorWidget_h__Script_UnrealSamples_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESpatialAnchorOperationMode_StaticEnum, TEXT("ESpatialAnchorOperationMode"), &Z_Registration_Info_UEnum_ESpatialAnchorOperationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3001137866U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpatialAnchorWidget, USpatialAnchorWidget::StaticClass, TEXT("USpatialAnchorWidget"), &Z_Registration_Info_UClass_USpatialAnchorWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpatialAnchorWidget), 2421910837U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialAnchorWidget_h__Script_UnrealSamples_1800547932(TEXT("/Script/UnrealSamples"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialAnchorWidget_h__Script_UnrealSamples_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialAnchorWidget_h__Script_UnrealSamples_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialAnchorWidget_h__Script_UnrealSamples_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialAnchorWidget_h__Script_UnrealSamples_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
