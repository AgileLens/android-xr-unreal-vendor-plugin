// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealSamples/DepthSwapchainImageViewer.h"
#include "AndroidXRTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDepthSwapchainImageViewer() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXR_API UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRDepthCameraResolution();
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRDepthSwapchain();
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRDepthSwapchainImage();
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRDepthView();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESelectInfo();
UMG_API UClass* Z_Construct_UClass_UComboBoxString_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UNREALSAMPLES_API UClass* Z_Construct_UClass_UDepthSwapchainImageViewer();
UNREALSAMPLES_API UClass* Z_Construct_UClass_UDepthSwapchainImageViewer_NoRegister();
UNREALSAMPLES_API UScriptStruct* Z_Construct_UScriptStruct_FSwapchainImageViewData();
UPackage* Z_Construct_UPackage__Script_UnrealSamples();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSwapchainImageViewData *******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSwapchainImageViewData;
class UScriptStruct* FSwapchainImageViewData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSwapchainImageViewData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSwapchainImageViewData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwapchainImageViewData, (UObject*)Z_Construct_UPackage__Script_UnrealSamples(), TEXT("SwapchainImageViewData"));
	}
	return Z_Registration_Info_UScriptStruct_FSwapchainImageViewData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSwapchainImageViewData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "DepthSwapchainImageViewer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "DepthSwapchainImageViewer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
		{ "ModuleRelativePath", "DepthSwapchainImageViewer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwapchainImageViewData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSwapchainImageViewData_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwapchainImageViewData, MaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialInstance_MetaData), NewProp_MaterialInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSwapchainImageViewData_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwapchainImageViewData, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Texture_MetaData), NewProp_Texture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSwapchainImageViewData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwapchainImageViewData_Statics::NewProp_MaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwapchainImageViewData_Statics::NewProp_Texture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwapchainImageViewData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwapchainImageViewData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealSamples,
	nullptr,
	&NewStructOps,
	"SwapchainImageViewData",
	Z_Construct_UScriptStruct_FSwapchainImageViewData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwapchainImageViewData_Statics::PropPointers),
	sizeof(FSwapchainImageViewData),
	alignof(FSwapchainImageViewData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwapchainImageViewData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSwapchainImageViewData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSwapchainImageViewData()
{
	if (!Z_Registration_Info_UScriptStruct_FSwapchainImageViewData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSwapchainImageViewData.InnerSingleton, Z_Construct_UScriptStruct_FSwapchainImageViewData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSwapchainImageViewData.InnerSingleton;
}
// ********** End ScriptStruct FSwapchainImageViewData *********************************************

// ********** Begin Class UDepthSwapchainImageViewer Function OnDepthSwapchainCreated **************
struct Z_Construct_UFunction_UDepthSwapchainImageViewer_OnDepthSwapchainCreated_Statics
{
	struct DepthSwapchainImageViewer_eventOnDepthSwapchainCreated_Parms
	{
		FAndroidXRDepthSwapchain Swapchain;
		EAndroidXRDepthCameraResolution Resolution;
		int32 CreateFlags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DepthSwapchainImageViewer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Swapchain_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Swapchain;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Resolution_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Resolution;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CreateFlags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDepthSwapchainImageViewer_OnDepthSwapchainCreated_Statics::NewProp_Swapchain = { "Swapchain", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DepthSwapchainImageViewer_eventOnDepthSwapchainCreated_Parms, Swapchain), Z_Construct_UScriptStruct_FAndroidXRDepthSwapchain, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Swapchain_MetaData), NewProp_Swapchain_MetaData) }; // 1959412716
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDepthSwapchainImageViewer_OnDepthSwapchainCreated_Statics::NewProp_Resolution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDepthSwapchainImageViewer_OnDepthSwapchainCreated_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DepthSwapchainImageViewer_eventOnDepthSwapchainCreated_Parms, Resolution), Z_Construct_UEnum_AndroidXR_EAndroidXRDepthCameraResolution, METADATA_PARAMS(0, nullptr) }; // 2846417938
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDepthSwapchainImageViewer_OnDepthSwapchainCreated_Statics::NewProp_CreateFlags = { "CreateFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DepthSwapchainImageViewer_eventOnDepthSwapchainCreated_Parms, CreateFlags), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDepthSwapchainImageViewer_OnDepthSwapchainCreated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDepthSwapchainImageViewer_OnDepthSwapchainCreated_Statics::NewProp_Swapchain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDepthSwapchainImageViewer_OnDepthSwapchainCreated_Statics::NewProp_Resolution_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDepthSwapchainImageViewer_OnDepthSwapchainCreated_Statics::NewProp_Resolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDepthSwapchainImageViewer_OnDepthSwapchainCreated_Statics::NewProp_CreateFlags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDepthSwapchainImageViewer_OnDepthSwapchainCreated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDepthSwapchainImageViewer_OnDepthSwapchainCreated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDepthSwapchainImageViewer, nullptr, "OnDepthSwapchainCreated", Z_Construct_UFunction_UDepthSwapchainImageViewer_OnDepthSwapchainCreated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDepthSwapchainImageViewer_OnDepthSwapchainCreated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDepthSwapchainImageViewer_OnDepthSwapchainCreated_Statics::DepthSwapchainImageViewer_eventOnDepthSwapchainCreated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDepthSwapchainImageViewer_OnDepthSwapchainCreated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDepthSwapchainImageViewer_OnDepthSwapchainCreated_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDepthSwapchainImageViewer_OnDepthSwapchainCreated_Statics::DepthSwapchainImageViewer_eventOnDepthSwapchainCreated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDepthSwapchainImageViewer_OnDepthSwapchainCreated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDepthSwapchainImageViewer_OnDepthSwapchainCreated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDepthSwapchainImageViewer::execOnDepthSwapchainCreated)
{
	P_GET_STRUCT_REF(FAndroidXRDepthSwapchain,Z_Param_Out_Swapchain);
	P_GET_ENUM(EAndroidXRDepthCameraResolution,Z_Param_Resolution);
	P_GET_PROPERTY(FIntProperty,Z_Param_CreateFlags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDepthSwapchainCreated(Z_Param_Out_Swapchain,EAndroidXRDepthCameraResolution(Z_Param_Resolution),Z_Param_CreateFlags);
	P_NATIVE_END;
}
// ********** End Class UDepthSwapchainImageViewer Function OnDepthSwapchainCreated ****************

// ********** Begin Class UDepthSwapchainImageViewer Function OnSourceChanged **********************
struct Z_Construct_UFunction_UDepthSwapchainImageViewer_OnSourceChanged_Statics
{
	struct DepthSwapchainImageViewer_eventOnSourceChanged_Parms
	{
		FString SelectedItem;
		TEnumAsByte<ESelectInfo::Type> SelectionType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DepthSwapchainImageViewer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDepthSwapchainImageViewer_OnSourceChanged_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DepthSwapchainImageViewer_eventOnSourceChanged_Parms, SelectedItem), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDepthSwapchainImageViewer_OnSourceChanged_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DepthSwapchainImageViewer_eventOnSourceChanged_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(0, nullptr) }; // 4040429206
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDepthSwapchainImageViewer_OnSourceChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDepthSwapchainImageViewer_OnSourceChanged_Statics::NewProp_SelectedItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDepthSwapchainImageViewer_OnSourceChanged_Statics::NewProp_SelectionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDepthSwapchainImageViewer_OnSourceChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDepthSwapchainImageViewer_OnSourceChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDepthSwapchainImageViewer, nullptr, "OnSourceChanged", Z_Construct_UFunction_UDepthSwapchainImageViewer_OnSourceChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDepthSwapchainImageViewer_OnSourceChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDepthSwapchainImageViewer_OnSourceChanged_Statics::DepthSwapchainImageViewer_eventOnSourceChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDepthSwapchainImageViewer_OnSourceChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDepthSwapchainImageViewer_OnSourceChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDepthSwapchainImageViewer_OnSourceChanged_Statics::DepthSwapchainImageViewer_eventOnSourceChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDepthSwapchainImageViewer_OnSourceChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDepthSwapchainImageViewer_OnSourceChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDepthSwapchainImageViewer::execOnSourceChanged)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SelectedItem);
	P_GET_PROPERTY(FByteProperty,Z_Param_SelectionType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSourceChanged(Z_Param_SelectedItem,ESelectInfo::Type(Z_Param_SelectionType));
	P_NATIVE_END;
}
// ********** End Class UDepthSwapchainImageViewer Function OnSourceChanged ************************

// ********** Begin Class UDepthSwapchainImageViewer Function ResetUI ******************************
struct Z_Construct_UFunction_UDepthSwapchainImageViewer_ResetUI_Statics
{
	struct DepthSwapchainImageViewer_eventResetUI_Parms
	{
		bool bAddEmptySource;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DepthSwapchainImageViewer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bAddEmptySource_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddEmptySource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDepthSwapchainImageViewer_ResetUI_Statics::NewProp_bAddEmptySource_SetBit(void* Obj)
{
	((DepthSwapchainImageViewer_eventResetUI_Parms*)Obj)->bAddEmptySource = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDepthSwapchainImageViewer_ResetUI_Statics::NewProp_bAddEmptySource = { "bAddEmptySource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DepthSwapchainImageViewer_eventResetUI_Parms), &Z_Construct_UFunction_UDepthSwapchainImageViewer_ResetUI_Statics::NewProp_bAddEmptySource_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDepthSwapchainImageViewer_ResetUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDepthSwapchainImageViewer_ResetUI_Statics::NewProp_bAddEmptySource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDepthSwapchainImageViewer_ResetUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDepthSwapchainImageViewer_ResetUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDepthSwapchainImageViewer, nullptr, "ResetUI", Z_Construct_UFunction_UDepthSwapchainImageViewer_ResetUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDepthSwapchainImageViewer_ResetUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDepthSwapchainImageViewer_ResetUI_Statics::DepthSwapchainImageViewer_eventResetUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDepthSwapchainImageViewer_ResetUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDepthSwapchainImageViewer_ResetUI_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDepthSwapchainImageViewer_ResetUI_Statics::DepthSwapchainImageViewer_eventResetUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDepthSwapchainImageViewer_ResetUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDepthSwapchainImageViewer_ResetUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDepthSwapchainImageViewer::execResetUI)
{
	P_GET_UBOOL(Z_Param_bAddEmptySource);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetUI(Z_Param_bAddEmptySource);
	P_NATIVE_END;
}
// ********** End Class UDepthSwapchainImageViewer Function ResetUI ********************************

// ********** Begin Class UDepthSwapchainImageViewer Function UpdateFromAcquiredDepthSwapchainImage 
struct Z_Construct_UFunction_UDepthSwapchainImageViewer_UpdateFromAcquiredDepthSwapchainImage_Statics
{
	struct DepthSwapchainImageViewer_eventUpdateFromAcquiredDepthSwapchainImage_Parms
	{
		TArray<FAndroidXRDepthSwapchainImage> SwapchainImage;
		TArray<FAndroidXRDepthView> DepthViews;
		int32 AcquiredIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DepthSwapchainImageViewer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwapchainImage_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DepthViews_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SwapchainImage_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SwapchainImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DepthViews_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DepthViews;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AcquiredIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDepthSwapchainImageViewer_UpdateFromAcquiredDepthSwapchainImage_Statics::NewProp_SwapchainImage_Inner = { "SwapchainImage", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAndroidXRDepthSwapchainImage, METADATA_PARAMS(0, nullptr) }; // 765442177
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDepthSwapchainImageViewer_UpdateFromAcquiredDepthSwapchainImage_Statics::NewProp_SwapchainImage = { "SwapchainImage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DepthSwapchainImageViewer_eventUpdateFromAcquiredDepthSwapchainImage_Parms, SwapchainImage), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwapchainImage_MetaData), NewProp_SwapchainImage_MetaData) }; // 765442177
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDepthSwapchainImageViewer_UpdateFromAcquiredDepthSwapchainImage_Statics::NewProp_DepthViews_Inner = { "DepthViews", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAndroidXRDepthView, METADATA_PARAMS(0, nullptr) }; // 577800069
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDepthSwapchainImageViewer_UpdateFromAcquiredDepthSwapchainImage_Statics::NewProp_DepthViews = { "DepthViews", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DepthSwapchainImageViewer_eventUpdateFromAcquiredDepthSwapchainImage_Parms, DepthViews), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DepthViews_MetaData), NewProp_DepthViews_MetaData) }; // 577800069
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDepthSwapchainImageViewer_UpdateFromAcquiredDepthSwapchainImage_Statics::NewProp_AcquiredIndex = { "AcquiredIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DepthSwapchainImageViewer_eventUpdateFromAcquiredDepthSwapchainImage_Parms, AcquiredIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDepthSwapchainImageViewer_UpdateFromAcquiredDepthSwapchainImage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDepthSwapchainImageViewer_UpdateFromAcquiredDepthSwapchainImage_Statics::NewProp_SwapchainImage_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDepthSwapchainImageViewer_UpdateFromAcquiredDepthSwapchainImage_Statics::NewProp_SwapchainImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDepthSwapchainImageViewer_UpdateFromAcquiredDepthSwapchainImage_Statics::NewProp_DepthViews_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDepthSwapchainImageViewer_UpdateFromAcquiredDepthSwapchainImage_Statics::NewProp_DepthViews,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDepthSwapchainImageViewer_UpdateFromAcquiredDepthSwapchainImage_Statics::NewProp_AcquiredIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDepthSwapchainImageViewer_UpdateFromAcquiredDepthSwapchainImage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDepthSwapchainImageViewer_UpdateFromAcquiredDepthSwapchainImage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDepthSwapchainImageViewer, nullptr, "UpdateFromAcquiredDepthSwapchainImage", Z_Construct_UFunction_UDepthSwapchainImageViewer_UpdateFromAcquiredDepthSwapchainImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDepthSwapchainImageViewer_UpdateFromAcquiredDepthSwapchainImage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDepthSwapchainImageViewer_UpdateFromAcquiredDepthSwapchainImage_Statics::DepthSwapchainImageViewer_eventUpdateFromAcquiredDepthSwapchainImage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDepthSwapchainImageViewer_UpdateFromAcquiredDepthSwapchainImage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDepthSwapchainImageViewer_UpdateFromAcquiredDepthSwapchainImage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDepthSwapchainImageViewer_UpdateFromAcquiredDepthSwapchainImage_Statics::DepthSwapchainImageViewer_eventUpdateFromAcquiredDepthSwapchainImage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDepthSwapchainImageViewer_UpdateFromAcquiredDepthSwapchainImage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDepthSwapchainImageViewer_UpdateFromAcquiredDepthSwapchainImage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDepthSwapchainImageViewer::execUpdateFromAcquiredDepthSwapchainImage)
{
	P_GET_TARRAY_REF(FAndroidXRDepthSwapchainImage,Z_Param_Out_SwapchainImage);
	P_GET_TARRAY_REF(FAndroidXRDepthView,Z_Param_Out_DepthViews);
	P_GET_PROPERTY(FIntProperty,Z_Param_AcquiredIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateFromAcquiredDepthSwapchainImage(Z_Param_Out_SwapchainImage,Z_Param_Out_DepthViews,Z_Param_AcquiredIndex);
	P_NATIVE_END;
}
// ********** End Class UDepthSwapchainImageViewer Function UpdateFromAcquiredDepthSwapchainImage **

// ********** Begin Class UDepthSwapchainImageViewer ***********************************************
void UDepthSwapchainImageViewer::StaticRegisterNativesUDepthSwapchainImageViewer()
{
	UClass* Class = UDepthSwapchainImageViewer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnDepthSwapchainCreated", &UDepthSwapchainImageViewer::execOnDepthSwapchainCreated },
		{ "OnSourceChanged", &UDepthSwapchainImageViewer::execOnSourceChanged },
		{ "ResetUI", &UDepthSwapchainImageViewer::execResetUI },
		{ "UpdateFromAcquiredDepthSwapchainImage", &UDepthSwapchainImageViewer::execUpdateFromAcquiredDepthSwapchainImage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDepthSwapchainImageViewer;
UClass* UDepthSwapchainImageViewer::GetPrivateStaticClass()
{
	using TClass = UDepthSwapchainImageViewer;
	if (!Z_Registration_Info_UClass_UDepthSwapchainImageViewer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DepthSwapchainImageViewer"),
			Z_Registration_Info_UClass_UDepthSwapchainImageViewer.InnerSingleton,
			StaticRegisterNativesUDepthSwapchainImageViewer,
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
	return Z_Registration_Info_UClass_UDepthSwapchainImageViewer.InnerSingleton;
}
UClass* Z_Construct_UClass_UDepthSwapchainImageViewer_NoRegister()
{
	return UDepthSwapchainImageViewer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDepthSwapchainImageViewer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DepthSwapchainImageViewer.h" },
		{ "ModuleRelativePath", "DepthSwapchainImageViewer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_RenderSurface_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DepthSwapchainImageViewer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DepthSwapchainImageViewer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboBox_Sources_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DepthSwapchainImageViewer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DepthSwapchainImageViewer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_Source_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DepthSwapchainImageViewer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DepthSwapchainImageViewer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_View0_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DepthSwapchainImageViewer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DepthSwapchainImageViewer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_View1_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DepthSwapchainImageViewer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DepthSwapchainImageViewer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterial_MetaData[] = {
		{ "Category", "DepthSwapchainImageViewer" },
		{ "ModuleRelativePath", "DepthSwapchainImageViewer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DepthMaterial_MetaData[] = {
		{ "Category", "DepthSwapchainImageViewer" },
		{ "ModuleRelativePath", "DepthSwapchainImageViewer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfidenceMaterial_MetaData[] = {
		{ "Category", "DepthSwapchainImageViewer" },
		{ "ModuleRelativePath", "DepthSwapchainImageViewer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageViewData_MetaData[] = {
		{ "ModuleRelativePath", "DepthSwapchainImageViewer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_RenderSurface;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboBox_Sources;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_Source;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_View0;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_View1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DepthMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConfidenceMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImageViewData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ImageViewData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDepthSwapchainImageViewer_OnDepthSwapchainCreated, "OnDepthSwapchainCreated" }, // 3222847819
		{ &Z_Construct_UFunction_UDepthSwapchainImageViewer_OnSourceChanged, "OnSourceChanged" }, // 3442451362
		{ &Z_Construct_UFunction_UDepthSwapchainImageViewer_ResetUI, "ResetUI" }, // 2803596538
		{ &Z_Construct_UFunction_UDepthSwapchainImageViewer_UpdateFromAcquiredDepthSwapchainImage, "UpdateFromAcquiredDepthSwapchainImage" }, // 3197602159
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDepthSwapchainImageViewer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDepthSwapchainImageViewer_Statics::NewProp_Image_RenderSurface = { "Image_RenderSurface", nullptr, (EPropertyFlags)0x012408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDepthSwapchainImageViewer, Image_RenderSurface), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_RenderSurface_MetaData), NewProp_Image_RenderSurface_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDepthSwapchainImageViewer_Statics::NewProp_ComboBox_Sources = { "ComboBox_Sources", nullptr, (EPropertyFlags)0x012408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDepthSwapchainImageViewer, ComboBox_Sources), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboBox_Sources_MetaData), NewProp_ComboBox_Sources_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDepthSwapchainImageViewer_Statics::NewProp_Text_Source = { "Text_Source", nullptr, (EPropertyFlags)0x012408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDepthSwapchainImageViewer, Text_Source), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_Source_MetaData), NewProp_Text_Source_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDepthSwapchainImageViewer_Statics::NewProp_Text_View0 = { "Text_View0", nullptr, (EPropertyFlags)0x012408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDepthSwapchainImageViewer, Text_View0), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_View0_MetaData), NewProp_Text_View0_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDepthSwapchainImageViewer_Statics::NewProp_Text_View1 = { "Text_View1", nullptr, (EPropertyFlags)0x012408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDepthSwapchainImageViewer, Text_View1), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_View1_MetaData), NewProp_Text_View1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDepthSwapchainImageViewer_Statics::NewProp_DefaultMaterial = { "DefaultMaterial", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDepthSwapchainImageViewer, DefaultMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMaterial_MetaData), NewProp_DefaultMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDepthSwapchainImageViewer_Statics::NewProp_DepthMaterial = { "DepthMaterial", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDepthSwapchainImageViewer, DepthMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DepthMaterial_MetaData), NewProp_DepthMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDepthSwapchainImageViewer_Statics::NewProp_ConfidenceMaterial = { "ConfidenceMaterial", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDepthSwapchainImageViewer, ConfidenceMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfidenceMaterial_MetaData), NewProp_ConfidenceMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDepthSwapchainImageViewer_Statics::NewProp_ImageViewData_Inner = { "ImageViewData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSwapchainImageViewData, METADATA_PARAMS(0, nullptr) }; // 2181941333
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDepthSwapchainImageViewer_Statics::NewProp_ImageViewData = { "ImageViewData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDepthSwapchainImageViewer, ImageViewData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageViewData_MetaData), NewProp_ImageViewData_MetaData) }; // 2181941333
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDepthSwapchainImageViewer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDepthSwapchainImageViewer_Statics::NewProp_Image_RenderSurface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDepthSwapchainImageViewer_Statics::NewProp_ComboBox_Sources,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDepthSwapchainImageViewer_Statics::NewProp_Text_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDepthSwapchainImageViewer_Statics::NewProp_Text_View0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDepthSwapchainImageViewer_Statics::NewProp_Text_View1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDepthSwapchainImageViewer_Statics::NewProp_DefaultMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDepthSwapchainImageViewer_Statics::NewProp_DepthMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDepthSwapchainImageViewer_Statics::NewProp_ConfidenceMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDepthSwapchainImageViewer_Statics::NewProp_ImageViewData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDepthSwapchainImageViewer_Statics::NewProp_ImageViewData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDepthSwapchainImageViewer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDepthSwapchainImageViewer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealSamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDepthSwapchainImageViewer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDepthSwapchainImageViewer_Statics::ClassParams = {
	&UDepthSwapchainImageViewer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDepthSwapchainImageViewer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDepthSwapchainImageViewer_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDepthSwapchainImageViewer_Statics::Class_MetaDataParams), Z_Construct_UClass_UDepthSwapchainImageViewer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDepthSwapchainImageViewer()
{
	if (!Z_Registration_Info_UClass_UDepthSwapchainImageViewer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDepthSwapchainImageViewer.OuterSingleton, Z_Construct_UClass_UDepthSwapchainImageViewer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDepthSwapchainImageViewer.OuterSingleton;
}
UDepthSwapchainImageViewer::UDepthSwapchainImageViewer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDepthSwapchainImageViewer);
UDepthSwapchainImageViewer::~UDepthSwapchainImageViewer() {}
// ********** End Class UDepthSwapchainImageViewer *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_DepthSwapchainImageViewer_h__Script_UnrealSamples_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSwapchainImageViewData::StaticStruct, Z_Construct_UScriptStruct_FSwapchainImageViewData_Statics::NewStructOps, TEXT("SwapchainImageViewData"), &Z_Registration_Info_UScriptStruct_FSwapchainImageViewData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSwapchainImageViewData), 2181941333U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDepthSwapchainImageViewer, UDepthSwapchainImageViewer::StaticClass, TEXT("UDepthSwapchainImageViewer"), &Z_Registration_Info_UClass_UDepthSwapchainImageViewer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDepthSwapchainImageViewer), 2394137207U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_DepthSwapchainImageViewer_h__Script_UnrealSamples_3933420686(TEXT("/Script/UnrealSamples"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_DepthSwapchainImageViewer_h__Script_UnrealSamples_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_DepthSwapchainImageViewer_h__Script_UnrealSamples_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_DepthSwapchainImageViewer_h__Script_UnrealSamples_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_DepthSwapchainImageViewer_h__Script_UnrealSamples_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
