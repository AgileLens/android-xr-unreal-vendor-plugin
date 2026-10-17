// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealSamples/CubemapImageViewer.h"
#include "AndroidXRLightEstimationTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCubemapImageViewer() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXRLIGHTESTIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRCubemapEstimator();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESelectInfo();
UMG_API UClass* Z_Construct_UClass_UComboBoxString_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UNREALSAMPLES_API UClass* Z_Construct_UClass_UCubemapImageViewer();
UNREALSAMPLES_API UClass* Z_Construct_UClass_UCubemapImageViewer_NoRegister();
UNREALSAMPLES_API UEnum* Z_Construct_UEnum_UnrealSamples_ECubemapFace();
UPackage* Z_Construct_UPackage__Script_UnrealSamples();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ECubemapFace **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECubemapFace;
static UEnum* ECubemapFace_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECubemapFace.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECubemapFace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealSamples_ECubemapFace, (UObject*)Z_Construct_UPackage__Script_UnrealSamples(), TEXT("ECubemapFace"));
	}
	return Z_Registration_Info_UEnum_ECubemapFace.OuterSingleton;
}
template<> UNREALSAMPLES_API UEnum* StaticEnum<ECubemapFace>()
{
	return ECubemapFace_StaticEnum();
}
struct Z_Construct_UEnum_UnrealSamples_ECubemapFace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Back.Name", "Back" },
		{ "Down.Name", "Down" },
		{ "Front.Name", "Front" },
		{ "Left.Name", "Left" },
		{ "ModuleRelativePath", "CubemapImageViewer.h" },
		{ "Right.Name", "Right" },
		{ "Up.Name", "Up" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Front", (int64)Front },
		{ "Back", (int64)Back },
		{ "Right", (int64)Right },
		{ "Left", (int64)Left },
		{ "Up", (int64)Up },
		{ "Down", (int64)Down },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealSamples_ECubemapFace_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UnrealSamples,
	nullptr,
	"ECubemapFace",
	"ECubemapFace",
	Z_Construct_UEnum_UnrealSamples_ECubemapFace_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealSamples_ECubemapFace_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealSamples_ECubemapFace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UnrealSamples_ECubemapFace_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UnrealSamples_ECubemapFace()
{
	if (!Z_Registration_Info_UEnum_ECubemapFace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECubemapFace.InnerSingleton, Z_Construct_UEnum_UnrealSamples_ECubemapFace_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECubemapFace.InnerSingleton;
}
// ********** End Enum ECubemapFace ****************************************************************

// ********** Begin Class UCubemapImageViewer Function InitializeCubemap ***************************
struct Z_Construct_UFunction_UCubemapImageViewer_InitializeCubemap_Statics
{
	struct CubemapImageViewer_eventInitializeCubemap_Parms
	{
		FAndroidXRCubemapEstimator CubemapEstimator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CubemapImageViewer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CubemapEstimator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CubemapEstimator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCubemapImageViewer_InitializeCubemap_Statics::NewProp_CubemapEstimator = { "CubemapEstimator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CubemapImageViewer_eventInitializeCubemap_Parms, CubemapEstimator), Z_Construct_UScriptStruct_FAndroidXRCubemapEstimator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CubemapEstimator_MetaData), NewProp_CubemapEstimator_MetaData) }; // 2373206697
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCubemapImageViewer_InitializeCubemap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCubemapImageViewer_InitializeCubemap_Statics::NewProp_CubemapEstimator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCubemapImageViewer_InitializeCubemap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCubemapImageViewer_InitializeCubemap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCubemapImageViewer, nullptr, "InitializeCubemap", Z_Construct_UFunction_UCubemapImageViewer_InitializeCubemap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCubemapImageViewer_InitializeCubemap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCubemapImageViewer_InitializeCubemap_Statics::CubemapImageViewer_eventInitializeCubemap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCubemapImageViewer_InitializeCubemap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCubemapImageViewer_InitializeCubemap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCubemapImageViewer_InitializeCubemap_Statics::CubemapImageViewer_eventInitializeCubemap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCubemapImageViewer_InitializeCubemap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCubemapImageViewer_InitializeCubemap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCubemapImageViewer::execInitializeCubemap)
{
	P_GET_STRUCT_REF(FAndroidXRCubemapEstimator,Z_Param_Out_CubemapEstimator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeCubemap(Z_Param_Out_CubemapEstimator);
	P_NATIVE_END;
}
// ********** End Class UCubemapImageViewer Function InitializeCubemap *****************************

// ********** Begin Class UCubemapImageViewer Function OnSelectedFaceChanged ***********************
struct Z_Construct_UFunction_UCubemapImageViewer_OnSelectedFaceChanged_Statics
{
	struct CubemapImageViewer_eventOnSelectedFaceChanged_Parms
	{
		FString SelectedItem;
		TEnumAsByte<ESelectInfo::Type> SelectionType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CubemapImageViewer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCubemapImageViewer_OnSelectedFaceChanged_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CubemapImageViewer_eventOnSelectedFaceChanged_Parms, SelectedItem), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCubemapImageViewer_OnSelectedFaceChanged_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CubemapImageViewer_eventOnSelectedFaceChanged_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(0, nullptr) }; // 4040429206
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCubemapImageViewer_OnSelectedFaceChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCubemapImageViewer_OnSelectedFaceChanged_Statics::NewProp_SelectedItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCubemapImageViewer_OnSelectedFaceChanged_Statics::NewProp_SelectionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCubemapImageViewer_OnSelectedFaceChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCubemapImageViewer_OnSelectedFaceChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCubemapImageViewer, nullptr, "OnSelectedFaceChanged", Z_Construct_UFunction_UCubemapImageViewer_OnSelectedFaceChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCubemapImageViewer_OnSelectedFaceChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCubemapImageViewer_OnSelectedFaceChanged_Statics::CubemapImageViewer_eventOnSelectedFaceChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCubemapImageViewer_OnSelectedFaceChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCubemapImageViewer_OnSelectedFaceChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCubemapImageViewer_OnSelectedFaceChanged_Statics::CubemapImageViewer_eventOnSelectedFaceChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCubemapImageViewer_OnSelectedFaceChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCubemapImageViewer_OnSelectedFaceChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCubemapImageViewer::execOnSelectedFaceChanged)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SelectedItem);
	P_GET_PROPERTY(FByteProperty,Z_Param_SelectionType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSelectedFaceChanged(Z_Param_SelectedItem,ESelectInfo::Type(Z_Param_SelectionType));
	P_NATIVE_END;
}
// ********** End Class UCubemapImageViewer Function OnSelectedFaceChanged *************************

// ********** Begin Class UCubemapImageViewer Function ResetCubemap ********************************
struct Z_Construct_UFunction_UCubemapImageViewer_ResetCubemap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CubemapImageViewer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCubemapImageViewer_ResetCubemap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCubemapImageViewer, nullptr, "ResetCubemap", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCubemapImageViewer_ResetCubemap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCubemapImageViewer_ResetCubemap_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCubemapImageViewer_ResetCubemap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCubemapImageViewer_ResetCubemap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCubemapImageViewer::execResetCubemap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetCubemap();
	P_NATIVE_END;
}
// ********** End Class UCubemapImageViewer Function ResetCubemap **********************************

// ********** Begin Class UCubemapImageViewer Function UpdateCubemap *******************************
struct Z_Construct_UFunction_UCubemapImageViewer_UpdateCubemap_Statics
{
	struct CubemapImageViewer_eventUpdateCubemap_Parms
	{
		UTextureCube* Cube;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CubemapImageViewer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Cube;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCubemapImageViewer_UpdateCubemap_Statics::NewProp_Cube = { "Cube", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CubemapImageViewer_eventUpdateCubemap_Parms, Cube), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCubemapImageViewer_UpdateCubemap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCubemapImageViewer_UpdateCubemap_Statics::NewProp_Cube,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCubemapImageViewer_UpdateCubemap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCubemapImageViewer_UpdateCubemap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCubemapImageViewer, nullptr, "UpdateCubemap", Z_Construct_UFunction_UCubemapImageViewer_UpdateCubemap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCubemapImageViewer_UpdateCubemap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCubemapImageViewer_UpdateCubemap_Statics::CubemapImageViewer_eventUpdateCubemap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCubemapImageViewer_UpdateCubemap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCubemapImageViewer_UpdateCubemap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCubemapImageViewer_UpdateCubemap_Statics::CubemapImageViewer_eventUpdateCubemap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCubemapImageViewer_UpdateCubemap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCubemapImageViewer_UpdateCubemap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCubemapImageViewer::execUpdateCubemap)
{
	P_GET_OBJECT(UTextureCube,Z_Param_Cube);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCubemap(Z_Param_Cube);
	P_NATIVE_END;
}
// ********** End Class UCubemapImageViewer Function UpdateCubemap *********************************

// ********** Begin Class UCubemapImageViewer ******************************************************
void UCubemapImageViewer::StaticRegisterNativesUCubemapImageViewer()
{
	UClass* Class = UCubemapImageViewer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitializeCubemap", &UCubemapImageViewer::execInitializeCubemap },
		{ "OnSelectedFaceChanged", &UCubemapImageViewer::execOnSelectedFaceChanged },
		{ "ResetCubemap", &UCubemapImageViewer::execResetCubemap },
		{ "UpdateCubemap", &UCubemapImageViewer::execUpdateCubemap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCubemapImageViewer;
UClass* UCubemapImageViewer::GetPrivateStaticClass()
{
	using TClass = UCubemapImageViewer;
	if (!Z_Registration_Info_UClass_UCubemapImageViewer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CubemapImageViewer"),
			Z_Registration_Info_UClass_UCubemapImageViewer.InnerSingleton,
			StaticRegisterNativesUCubemapImageViewer,
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
	return Z_Registration_Info_UClass_UCubemapImageViewer.InnerSingleton;
}
UClass* Z_Construct_UClass_UCubemapImageViewer_NoRegister()
{
	return UCubemapImageViewer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCubemapImageViewer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CubemapImageViewer.h" },
		{ "ModuleRelativePath", "CubemapImageViewer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CubeFaceImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CubemapImageViewer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CubemapImageViewer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceSelectionComboBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CubemapImageViewer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CubemapImageViewer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CubemapViewerMaterial_MetaData[] = {
		{ "Category", "CubemapImageViewer" },
		{ "ModuleRelativePath", "CubemapImageViewer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "CubemapImageViewer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CubemapTexture_MetaData[] = {
		{ "ModuleRelativePath", "CubemapImageViewer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CubeFaceImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FaceSelectionComboBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CubemapViewerMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CubemapTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCubemapImageViewer_InitializeCubemap, "InitializeCubemap" }, // 358046693
		{ &Z_Construct_UFunction_UCubemapImageViewer_OnSelectedFaceChanged, "OnSelectedFaceChanged" }, // 3938292565
		{ &Z_Construct_UFunction_UCubemapImageViewer_ResetCubemap, "ResetCubemap" }, // 3427278446
		{ &Z_Construct_UFunction_UCubemapImageViewer_UpdateCubemap, "UpdateCubemap" }, // 891629265
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCubemapImageViewer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCubemapImageViewer_Statics::NewProp_CubeFaceImage = { "CubeFaceImage", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCubemapImageViewer, CubeFaceImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CubeFaceImage_MetaData), NewProp_CubeFaceImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCubemapImageViewer_Statics::NewProp_FaceSelectionComboBox = { "FaceSelectionComboBox", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCubemapImageViewer, FaceSelectionComboBox), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceSelectionComboBox_MetaData), NewProp_FaceSelectionComboBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCubemapImageViewer_Statics::NewProp_CubemapViewerMaterial = { "CubemapViewerMaterial", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCubemapImageViewer, CubemapViewerMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CubemapViewerMaterial_MetaData), NewProp_CubemapViewerMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCubemapImageViewer_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCubemapImageViewer, MaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialInstance_MetaData), NewProp_MaterialInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCubemapImageViewer_Statics::NewProp_CubemapTexture = { "CubemapTexture", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCubemapImageViewer, CubemapTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CubemapTexture_MetaData), NewProp_CubemapTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCubemapImageViewer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubemapImageViewer_Statics::NewProp_CubeFaceImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubemapImageViewer_Statics::NewProp_FaceSelectionComboBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubemapImageViewer_Statics::NewProp_CubemapViewerMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubemapImageViewer_Statics::NewProp_MaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubemapImageViewer_Statics::NewProp_CubemapTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCubemapImageViewer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCubemapImageViewer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealSamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCubemapImageViewer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCubemapImageViewer_Statics::ClassParams = {
	&UCubemapImageViewer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCubemapImageViewer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCubemapImageViewer_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCubemapImageViewer_Statics::Class_MetaDataParams), Z_Construct_UClass_UCubemapImageViewer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCubemapImageViewer()
{
	if (!Z_Registration_Info_UClass_UCubemapImageViewer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCubemapImageViewer.OuterSingleton, Z_Construct_UClass_UCubemapImageViewer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCubemapImageViewer.OuterSingleton;
}
UCubemapImageViewer::UCubemapImageViewer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCubemapImageViewer);
UCubemapImageViewer::~UCubemapImageViewer() {}
// ********** End Class UCubemapImageViewer ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_CubemapImageViewer_h__Script_UnrealSamples_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECubemapFace_StaticEnum, TEXT("ECubemapFace"), &Z_Registration_Info_UEnum_ECubemapFace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 172110597U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCubemapImageViewer, UCubemapImageViewer::StaticClass, TEXT("UCubemapImageViewer"), &Z_Registration_Info_UClass_UCubemapImageViewer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCubemapImageViewer), 1204219226U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_CubemapImageViewer_h__Script_UnrealSamples_2489975739(TEXT("/Script/UnrealSamples"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_CubemapImageViewer_h__Script_UnrealSamples_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_CubemapImageViewer_h__Script_UnrealSamples_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_CubemapImageViewer_h__Script_UnrealSamples_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_CubemapImageViewer_h__Script_UnrealSamples_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
