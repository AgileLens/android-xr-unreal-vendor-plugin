// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRPassthroughMeshBlueprintFunctionLibrary.h"
#include "AndroidXRPassthroughMeshTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRPassthroughMeshBlueprintFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXRPASSTHROUGHMESH_API UClass* Z_Construct_UClass_UAndroidXRPassthroughMeshBlueprintFunctionLibrary();
ANDROIDXRPASSTHROUGHMESH_API UClass* Z_Construct_UClass_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_NoRegister();
ANDROIDXRPASSTHROUGHMESH_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRPassthroughLayer();
ANDROIDXRPASSTHROUGHMESH_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRPassthroughLayerMeshInfo();
ANDROIDXRPASSTHROUGHMESH_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRSystemPassthroughProperties();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AndroidXRPassthroughMesh();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAndroidXRPassthroughMeshBlueprintFunctionLibrary Function CreatePassthroughLayer 
struct Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_CreatePassthroughLayer_Statics
{
	struct AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventCreatePassthroughLayer_Parms
	{
		FAndroidXRPassthroughLayerMeshInfo LayerInfo;
		FAndroidXRPassthroughLayer Layer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Passthrough Mesh Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * Creates a passthrough layer for the mesh info.\n   * @param[in] The mesh info for the passthrough layer.\n   * @param[out] The passthrough layer created.\n   * @return True if the underlying API call was successful.\n   */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRPassthroughMeshBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a passthrough layer for the mesh info.\n@param[in] The mesh info for the passthrough layer.\n@param[out] The passthrough layer created.\n@return True if the underlying API call was successful." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayerInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Layer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_CreatePassthroughLayer_Statics::NewProp_LayerInfo = { "LayerInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventCreatePassthroughLayer_Parms, LayerInfo), Z_Construct_UScriptStruct_FAndroidXRPassthroughLayerMeshInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerInfo_MetaData), NewProp_LayerInfo_MetaData) }; // 2648848655
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_CreatePassthroughLayer_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventCreatePassthroughLayer_Parms, Layer), Z_Construct_UScriptStruct_FAndroidXRPassthroughLayer, METADATA_PARAMS(0, nullptr) }; // 1310625649
void Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_CreatePassthroughLayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventCreatePassthroughLayer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_CreatePassthroughLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventCreatePassthroughLayer_Parms), &Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_CreatePassthroughLayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_CreatePassthroughLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_CreatePassthroughLayer_Statics::NewProp_LayerInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_CreatePassthroughLayer_Statics::NewProp_Layer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_CreatePassthroughLayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_CreatePassthroughLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_CreatePassthroughLayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRPassthroughMeshBlueprintFunctionLibrary, nullptr, "CreatePassthroughLayer", Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_CreatePassthroughLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_CreatePassthroughLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_CreatePassthroughLayer_Statics::AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventCreatePassthroughLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_CreatePassthroughLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_CreatePassthroughLayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_CreatePassthroughLayer_Statics::AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventCreatePassthroughLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_CreatePassthroughLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_CreatePassthroughLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRPassthroughMeshBlueprintFunctionLibrary::execCreatePassthroughLayer)
{
	P_GET_STRUCT_REF(FAndroidXRPassthroughLayerMeshInfo,Z_Param_Out_LayerInfo);
	P_GET_STRUCT_REF(FAndroidXRPassthroughLayer,Z_Param_Out_Layer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRPassthroughMeshBlueprintFunctionLibrary::CreatePassthroughLayer(Z_Param_Out_LayerInfo,Z_Param_Out_Layer);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRPassthroughMeshBlueprintFunctionLibrary Function CreatePassthroughLayer 

// ********** Begin Class UAndroidXRPassthroughMeshBlueprintFunctionLibrary Function DestroyPassthroughLayer 
struct Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_DestroyPassthroughLayer_Statics
{
	struct AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventDestroyPassthroughLayer_Parms
	{
		FAndroidXRPassthroughLayer Layer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Passthrough Mesh Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * Destroys the passthrough layer\n   * @param[in] The passthrough layer to destroy\n   * @return True if the underlying API call was successful.\n   */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRPassthroughMeshBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Destroys the passthrough layer\n@param[in] The passthrough layer to destroy\n@return True if the underlying API call was successful." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Layer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_DestroyPassthroughLayer_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventDestroyPassthroughLayer_Parms, Layer), Z_Construct_UScriptStruct_FAndroidXRPassthroughLayer, METADATA_PARAMS(0, nullptr) }; // 1310625649
void Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_DestroyPassthroughLayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventDestroyPassthroughLayer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_DestroyPassthroughLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventDestroyPassthroughLayer_Parms), &Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_DestroyPassthroughLayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_DestroyPassthroughLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_DestroyPassthroughLayer_Statics::NewProp_Layer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_DestroyPassthroughLayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_DestroyPassthroughLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_DestroyPassthroughLayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRPassthroughMeshBlueprintFunctionLibrary, nullptr, "DestroyPassthroughLayer", Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_DestroyPassthroughLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_DestroyPassthroughLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_DestroyPassthroughLayer_Statics::AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventDestroyPassthroughLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_DestroyPassthroughLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_DestroyPassthroughLayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_DestroyPassthroughLayer_Statics::AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventDestroyPassthroughLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_DestroyPassthroughLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_DestroyPassthroughLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRPassthroughMeshBlueprintFunctionLibrary::execDestroyPassthroughLayer)
{
	P_GET_STRUCT_REF(FAndroidXRPassthroughLayer,Z_Param_Out_Layer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRPassthroughMeshBlueprintFunctionLibrary::DestroyPassthroughLayer(Z_Param_Out_Layer);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRPassthroughMeshBlueprintFunctionLibrary Function DestroyPassthroughLayer 

// ********** Begin Class UAndroidXRPassthroughMeshBlueprintFunctionLibrary Function GetPassthroughMeshSystemProperties 
struct Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_GetPassthroughMeshSystemProperties_Statics
{
	struct AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventGetPassthroughMeshSystemProperties_Parms
	{
		FAndroidXRSystemPassthroughProperties Properties;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Passthrough Mesh Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * Gets the passthrough mesh system properties.\n   * @param[out] The passthrough mesh properties of the system.\n   * @return True if the underlying API call was successful.\n   */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRPassthroughMeshBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the passthrough mesh system properties.\n@param[out] The passthrough mesh properties of the system.\n@return True if the underlying API call was successful." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Properties;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_GetPassthroughMeshSystemProperties_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventGetPassthroughMeshSystemProperties_Parms, Properties), Z_Construct_UScriptStruct_FAndroidXRSystemPassthroughProperties, METADATA_PARAMS(0, nullptr) }; // 1414805262
void Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_GetPassthroughMeshSystemProperties_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventGetPassthroughMeshSystemProperties_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_GetPassthroughMeshSystemProperties_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventGetPassthroughMeshSystemProperties_Parms), &Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_GetPassthroughMeshSystemProperties_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_GetPassthroughMeshSystemProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_GetPassthroughMeshSystemProperties_Statics::NewProp_Properties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_GetPassthroughMeshSystemProperties_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_GetPassthroughMeshSystemProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_GetPassthroughMeshSystemProperties_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRPassthroughMeshBlueprintFunctionLibrary, nullptr, "GetPassthroughMeshSystemProperties", Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_GetPassthroughMeshSystemProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_GetPassthroughMeshSystemProperties_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_GetPassthroughMeshSystemProperties_Statics::AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventGetPassthroughMeshSystemProperties_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_GetPassthroughMeshSystemProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_GetPassthroughMeshSystemProperties_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_GetPassthroughMeshSystemProperties_Statics::AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventGetPassthroughMeshSystemProperties_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_GetPassthroughMeshSystemProperties()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_GetPassthroughMeshSystemProperties_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRPassthroughMeshBlueprintFunctionLibrary::execGetPassthroughMeshSystemProperties)
{
	P_GET_STRUCT_REF(FAndroidXRSystemPassthroughProperties,Z_Param_Out_Properties);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRPassthroughMeshBlueprintFunctionLibrary::GetPassthroughMeshSystemProperties(Z_Param_Out_Properties);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRPassthroughMeshBlueprintFunctionLibrary Function GetPassthroughMeshSystemProperties 

// ********** Begin Class UAndroidXRPassthroughMeshBlueprintFunctionLibrary Function IsValidPassthroughLayer 
struct Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_IsValidPassthroughLayer_Statics
{
	struct AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventIsValidPassthroughLayer_Parms
	{
		FAndroidXRPassthroughLayer Layer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Passthrough Mesh Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * Checks if the passthrough layer is valid.\n   * @param[in] The layer to check the validity of.\n   * @return True if the layer is valid.\n   */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRPassthroughMeshBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the passthrough layer is valid.\n@param[in] The layer to check the validity of.\n@return True if the layer is valid." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Layer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_IsValidPassthroughLayer_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventIsValidPassthroughLayer_Parms, Layer), Z_Construct_UScriptStruct_FAndroidXRPassthroughLayer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layer_MetaData), NewProp_Layer_MetaData) }; // 1310625649
void Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_IsValidPassthroughLayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventIsValidPassthroughLayer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_IsValidPassthroughLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventIsValidPassthroughLayer_Parms), &Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_IsValidPassthroughLayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_IsValidPassthroughLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_IsValidPassthroughLayer_Statics::NewProp_Layer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_IsValidPassthroughLayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_IsValidPassthroughLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_IsValidPassthroughLayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRPassthroughMeshBlueprintFunctionLibrary, nullptr, "IsValidPassthroughLayer", Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_IsValidPassthroughLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_IsValidPassthroughLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_IsValidPassthroughLayer_Statics::AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventIsValidPassthroughLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_IsValidPassthroughLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_IsValidPassthroughLayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_IsValidPassthroughLayer_Statics::AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventIsValidPassthroughLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_IsValidPassthroughLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_IsValidPassthroughLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRPassthroughMeshBlueprintFunctionLibrary::execIsValidPassthroughLayer)
{
	P_GET_STRUCT_REF(FAndroidXRPassthroughLayer,Z_Param_Out_Layer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRPassthroughMeshBlueprintFunctionLibrary::IsValidPassthroughLayer(Z_Param_Out_Layer);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRPassthroughMeshBlueprintFunctionLibrary Function IsValidPassthroughLayer 

// ********** Begin Class UAndroidXRPassthroughMeshBlueprintFunctionLibrary Function UpdatePassthroughLayerMesh 
struct Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerMesh_Statics
{
	struct AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventUpdatePassthroughLayerMesh_Parms
	{
		FAndroidXRPassthroughLayer Layer;
		TArray<FVector> Vertices;
		TArray<int32> Indices;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Passthrough Mesh Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * Updates the passthrough layer's mesh\n   * @param[in] The layer to update the mesh for.\n   * @param[in] The new vertices of the layer mesh.\n   * @param[in] The new indices of the layer mesh.\n   * @return True if the underlying API call was successful.\n   */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRPassthroughMeshBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates the passthrough layer's mesh\n@param[in] The layer to update the mesh for.\n@param[in] The new vertices of the layer mesh.\n@param[in] The new indices of the layer mesh.\n@return True if the underlying API call was successful." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Indices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Layer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Indices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Indices;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerMesh_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventUpdatePassthroughLayerMesh_Parms, Layer), Z_Construct_UScriptStruct_FAndroidXRPassthroughLayer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layer_MetaData), NewProp_Layer_MetaData) }; // 1310625649
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerMesh_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerMesh_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventUpdatePassthroughLayerMesh_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vertices_MetaData), NewProp_Vertices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerMesh_Statics::NewProp_Indices_Inner = { "Indices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerMesh_Statics::NewProp_Indices = { "Indices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventUpdatePassthroughLayerMesh_Parms, Indices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Indices_MetaData), NewProp_Indices_MetaData) };
void Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventUpdatePassthroughLayerMesh_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventUpdatePassthroughLayerMesh_Parms), &Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerMesh_Statics::NewProp_Layer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerMesh_Statics::NewProp_Vertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerMesh_Statics::NewProp_Vertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerMesh_Statics::NewProp_Indices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerMesh_Statics::NewProp_Indices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRPassthroughMeshBlueprintFunctionLibrary, nullptr, "UpdatePassthroughLayerMesh", Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerMesh_Statics::AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventUpdatePassthroughLayerMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerMesh_Statics::AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventUpdatePassthroughLayerMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRPassthroughMeshBlueprintFunctionLibrary::execUpdatePassthroughLayerMesh)
{
	P_GET_STRUCT_REF(FAndroidXRPassthroughLayer,Z_Param_Out_Layer);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices);
	P_GET_TARRAY_REF(int32,Z_Param_Out_Indices);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRPassthroughMeshBlueprintFunctionLibrary::UpdatePassthroughLayerMesh(Z_Param_Out_Layer,Z_Param_Out_Vertices,Z_Param_Out_Indices);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRPassthroughMeshBlueprintFunctionLibrary Function UpdatePassthroughLayerMesh 

// ********** Begin Class UAndroidXRPassthroughMeshBlueprintFunctionLibrary Function UpdatePassthroughLayerOpacity 
struct Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerOpacity_Statics
{
	struct AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventUpdatePassthroughLayerOpacity_Parms
	{
		FAndroidXRPassthroughLayer Layer;
		float Opacity;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Passthrough Mesh Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * Updates the passthrough layer texture's opacity\n   * @param[in] The layer to update the opacity for.\n   * @param[in] The new opacity of the layer texture.\n   * @return True if the underlying API call was successful.\n   */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRPassthroughMeshBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates the passthrough layer texture's opacity\n@param[in] The layer to update the opacity for.\n@param[in] The new opacity of the layer texture.\n@return True if the underlying API call was successful." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Layer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Opacity;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerOpacity_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventUpdatePassthroughLayerOpacity_Parms, Layer), Z_Construct_UScriptStruct_FAndroidXRPassthroughLayer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layer_MetaData), NewProp_Layer_MetaData) }; // 1310625649
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerOpacity_Statics::NewProp_Opacity = { "Opacity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventUpdatePassthroughLayerOpacity_Parms, Opacity), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerOpacity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventUpdatePassthroughLayerOpacity_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerOpacity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventUpdatePassthroughLayerOpacity_Parms), &Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerOpacity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerOpacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerOpacity_Statics::NewProp_Layer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerOpacity_Statics::NewProp_Opacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerOpacity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerOpacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerOpacity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRPassthroughMeshBlueprintFunctionLibrary, nullptr, "UpdatePassthroughLayerOpacity", Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerOpacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerOpacity_Statics::AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventUpdatePassthroughLayerOpacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerOpacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerOpacity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerOpacity_Statics::AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventUpdatePassthroughLayerOpacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerOpacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerOpacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRPassthroughMeshBlueprintFunctionLibrary::execUpdatePassthroughLayerOpacity)
{
	P_GET_STRUCT_REF(FAndroidXRPassthroughLayer,Z_Param_Out_Layer);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Opacity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRPassthroughMeshBlueprintFunctionLibrary::UpdatePassthroughLayerOpacity(Z_Param_Out_Layer,Z_Param_Opacity);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRPassthroughMeshBlueprintFunctionLibrary Function UpdatePassthroughLayerOpacity 

// ********** Begin Class UAndroidXRPassthroughMeshBlueprintFunctionLibrary Function UpdatePassthroughLayerTransform 
struct Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerTransform_Statics
{
	struct AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventUpdatePassthroughLayerTransform_Parms
	{
		FAndroidXRPassthroughLayer Layer;
		FTransform Transform;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Passthrough Mesh Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * Updates the passthrough layer's transform\n   * @param[in] The layer to update the transform for.\n   * @param[in] The new transform of the layer mesh.\n   * @return True if the underlying API call was successful.\n   */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRPassthroughMeshBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates the passthrough layer's transform\n@param[in] The layer to update the transform for.\n@param[in] The new transform of the layer mesh.\n@return True if the underlying API call was successful." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Layer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerTransform_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventUpdatePassthroughLayerTransform_Parms, Layer), Z_Construct_UScriptStruct_FAndroidXRPassthroughLayer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layer_MetaData), NewProp_Layer_MetaData) }; // 1310625649
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventUpdatePassthroughLayerTransform_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
void Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventUpdatePassthroughLayerTransform_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventUpdatePassthroughLayerTransform_Parms), &Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerTransform_Statics::NewProp_Layer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerTransform_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerTransform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRPassthroughMeshBlueprintFunctionLibrary, nullptr, "UpdatePassthroughLayerTransform", Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerTransform_Statics::AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventUpdatePassthroughLayerTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerTransform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerTransform_Statics::AndroidXRPassthroughMeshBlueprintFunctionLibrary_eventUpdatePassthroughLayerTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRPassthroughMeshBlueprintFunctionLibrary::execUpdatePassthroughLayerTransform)
{
	P_GET_STRUCT_REF(FAndroidXRPassthroughLayer,Z_Param_Out_Layer);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidXRPassthroughMeshBlueprintFunctionLibrary::UpdatePassthroughLayerTransform(Z_Param_Out_Layer,Z_Param_Out_Transform);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRPassthroughMeshBlueprintFunctionLibrary Function UpdatePassthroughLayerTransform 

// ********** Begin Class UAndroidXRPassthroughMeshBlueprintFunctionLibrary ************************
void UAndroidXRPassthroughMeshBlueprintFunctionLibrary::StaticRegisterNativesUAndroidXRPassthroughMeshBlueprintFunctionLibrary()
{
	UClass* Class = UAndroidXRPassthroughMeshBlueprintFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreatePassthroughLayer", &UAndroidXRPassthroughMeshBlueprintFunctionLibrary::execCreatePassthroughLayer },
		{ "DestroyPassthroughLayer", &UAndroidXRPassthroughMeshBlueprintFunctionLibrary::execDestroyPassthroughLayer },
		{ "GetPassthroughMeshSystemProperties", &UAndroidXRPassthroughMeshBlueprintFunctionLibrary::execGetPassthroughMeshSystemProperties },
		{ "IsValidPassthroughLayer", &UAndroidXRPassthroughMeshBlueprintFunctionLibrary::execIsValidPassthroughLayer },
		{ "UpdatePassthroughLayerMesh", &UAndroidXRPassthroughMeshBlueprintFunctionLibrary::execUpdatePassthroughLayerMesh },
		{ "UpdatePassthroughLayerOpacity", &UAndroidXRPassthroughMeshBlueprintFunctionLibrary::execUpdatePassthroughLayerOpacity },
		{ "UpdatePassthroughLayerTransform", &UAndroidXRPassthroughMeshBlueprintFunctionLibrary::execUpdatePassthroughLayerTransform },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRPassthroughMeshBlueprintFunctionLibrary;
UClass* UAndroidXRPassthroughMeshBlueprintFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UAndroidXRPassthroughMeshBlueprintFunctionLibrary;
	if (!Z_Registration_Info_UClass_UAndroidXRPassthroughMeshBlueprintFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRPassthroughMeshBlueprintFunctionLibrary"),
			Z_Registration_Info_UClass_UAndroidXRPassthroughMeshBlueprintFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUAndroidXRPassthroughMeshBlueprintFunctionLibrary,
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
	return Z_Registration_Info_UClass_UAndroidXRPassthroughMeshBlueprintFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_NoRegister()
{
	return UAndroidXRPassthroughMeshBlueprintFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AndroidXRPassthroughMesh" },
		{ "IncludePath", "AndroidXRPassthroughMeshBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/AndroidXRPassthroughMeshBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_CreatePassthroughLayer, "CreatePassthroughLayer" }, // 3492452208
		{ &Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_DestroyPassthroughLayer, "DestroyPassthroughLayer" }, // 1484205360
		{ &Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_GetPassthroughMeshSystemProperties, "GetPassthroughMeshSystemProperties" }, // 375323850
		{ &Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_IsValidPassthroughLayer, "IsValidPassthroughLayer" }, // 1022222182
		{ &Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerMesh, "UpdatePassthroughLayerMesh" }, // 4240102588
		{ &Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerOpacity, "UpdatePassthroughLayerOpacity" }, // 1514883579
		{ &Z_Construct_UFunction_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_UpdatePassthroughLayerTransform, "UpdatePassthroughLayerTransform" }, // 2626776579
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRPassthroughMeshBlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRPassthroughMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_Statics::ClassParams = {
	&UAndroidXRPassthroughMeshBlueprintFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRPassthroughMeshBlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UAndroidXRPassthroughMeshBlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRPassthroughMeshBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UAndroidXRPassthroughMeshBlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRPassthroughMeshBlueprintFunctionLibrary.OuterSingleton;
}
UAndroidXRPassthroughMeshBlueprintFunctionLibrary::UAndroidXRPassthroughMeshBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRPassthroughMeshBlueprintFunctionLibrary);
UAndroidXRPassthroughMeshBlueprintFunctionLibrary::~UAndroidXRPassthroughMeshBlueprintFunctionLibrary() {}
// ********** End Class UAndroidXRPassthroughMeshBlueprintFunctionLibrary **************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRPassthroughMesh_Source_AndroidXRPassthroughMesh_Public_AndroidXRPassthroughMeshBlueprintFunctionLibrary_h__Script_AndroidXRPassthroughMesh_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXRPassthroughMeshBlueprintFunctionLibrary, UAndroidXRPassthroughMeshBlueprintFunctionLibrary::StaticClass, TEXT("UAndroidXRPassthroughMeshBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UAndroidXRPassthroughMeshBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRPassthroughMeshBlueprintFunctionLibrary), 2462944054U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRPassthroughMesh_Source_AndroidXRPassthroughMesh_Public_AndroidXRPassthroughMeshBlueprintFunctionLibrary_h__Script_AndroidXRPassthroughMesh_862554120(TEXT("/Script/AndroidXRPassthroughMesh"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRPassthroughMesh_Source_AndroidXRPassthroughMesh_Public_AndroidXRPassthroughMeshBlueprintFunctionLibrary_h__Script_AndroidXRPassthroughMesh_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRPassthroughMesh_Source_AndroidXRPassthroughMesh_Public_AndroidXRPassthroughMeshBlueprintFunctionLibrary_h__Script_AndroidXRPassthroughMesh_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
