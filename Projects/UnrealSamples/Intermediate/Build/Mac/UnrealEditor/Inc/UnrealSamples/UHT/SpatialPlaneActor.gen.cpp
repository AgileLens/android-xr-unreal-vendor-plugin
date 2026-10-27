// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealSamples/SpatialPlaneActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSpatialPlaneActor() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXRSPATIALPLANETRACKING_API UClass* Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_NoRegister();
ANDROIDXRSPATIALPLANETRACKING_API UEnum* Z_Construct_UEnum_AndroidXRSpatialPlaneTracking_ESpatialPlaneAlignment();
ANDROIDXRSPATIALPLANETRACKING_API UEnum* Z_Construct_UEnum_AndroidXRSpatialPlaneTracking_ESpatialPlaneSemanticLabel();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
UNREALSAMPLES_API UClass* Z_Construct_UClass_ASpatialPlaneActor();
UNREALSAMPLES_API UClass* Z_Construct_UClass_ASpatialPlaneActor_NoRegister();
UNREALSAMPLES_API UScriptStruct* Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter();
UPackage* Z_Construct_UPackage__Script_UnrealSamples();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSpatialPlaneRenderFilter *****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSpatialPlaneRenderFilter;
class UScriptStruct* FSpatialPlaneRenderFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSpatialPlaneRenderFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSpatialPlaneRenderFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter, (UObject*)Z_Construct_UPackage__Script_UnrealSamples(), TEXT("SpatialPlaneRenderFilter"));
	}
	return Z_Registration_Info_UScriptStruct_FSpatialPlaneRenderFilter.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SpatialPlaneActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldRenderBounds_MetaData[] = {
		{ "Category", "SpatialPlaneRenderFilter" },
		{ "ModuleRelativePath", "SpatialPlaneActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldRenderMesh_MetaData[] = {
		{ "Category", "SpatialPlaneRenderFilter" },
		{ "ModuleRelativePath", "SpatialPlaneActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldRenderPolygons_MetaData[] = {
		{ "Category", "SpatialPlaneRenderFilter" },
		{ "ModuleRelativePath", "SpatialPlaneActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlignmentFilter_MetaData[] = {
		{ "Category", "SpatialPlaneRenderFilter" },
		{ "ModuleRelativePath", "SpatialPlaneActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alignment_MetaData[] = {
		{ "Category", "SpatialPlaneRenderFilter" },
		{ "ModuleRelativePath", "SpatialPlaneActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSemanticFilter_MetaData[] = {
		{ "Category", "SpatialPlaneRenderFilter" },
		{ "ModuleRelativePath", "SpatialPlaneActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SemanticLabel_MetaData[] = {
		{ "Category", "SpatialPlaneRenderFilter" },
		{ "ModuleRelativePath", "SpatialPlaneActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bShouldRenderBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldRenderBounds;
	static void NewProp_bShouldRenderMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldRenderMesh;
	static void NewProp_bShouldRenderPolygons_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldRenderPolygons;
	static void NewProp_bAlignmentFilter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlignmentFilter;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Alignment_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Alignment;
	static void NewProp_bSemanticFilter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSemanticFilter;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SemanticLabel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SemanticLabel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpatialPlaneRenderFilter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics::NewProp_bShouldRenderBounds_SetBit(void* Obj)
{
	((FSpatialPlaneRenderFilter*)Obj)->bShouldRenderBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics::NewProp_bShouldRenderBounds = { "bShouldRenderBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpatialPlaneRenderFilter), &Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics::NewProp_bShouldRenderBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldRenderBounds_MetaData), NewProp_bShouldRenderBounds_MetaData) };
void Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics::NewProp_bShouldRenderMesh_SetBit(void* Obj)
{
	((FSpatialPlaneRenderFilter*)Obj)->bShouldRenderMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics::NewProp_bShouldRenderMesh = { "bShouldRenderMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpatialPlaneRenderFilter), &Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics::NewProp_bShouldRenderMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldRenderMesh_MetaData), NewProp_bShouldRenderMesh_MetaData) };
void Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics::NewProp_bShouldRenderPolygons_SetBit(void* Obj)
{
	((FSpatialPlaneRenderFilter*)Obj)->bShouldRenderPolygons = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics::NewProp_bShouldRenderPolygons = { "bShouldRenderPolygons", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpatialPlaneRenderFilter), &Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics::NewProp_bShouldRenderPolygons_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldRenderPolygons_MetaData), NewProp_bShouldRenderPolygons_MetaData) };
void Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics::NewProp_bAlignmentFilter_SetBit(void* Obj)
{
	((FSpatialPlaneRenderFilter*)Obj)->bAlignmentFilter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics::NewProp_bAlignmentFilter = { "bAlignmentFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpatialPlaneRenderFilter), &Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics::NewProp_bAlignmentFilter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlignmentFilter_MetaData), NewProp_bAlignmentFilter_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics::NewProp_Alignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics::NewProp_Alignment = { "Alignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpatialPlaneRenderFilter, Alignment), Z_Construct_UEnum_AndroidXRSpatialPlaneTracking_ESpatialPlaneAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alignment_MetaData), NewProp_Alignment_MetaData) }; // 1416143316
void Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics::NewProp_bSemanticFilter_SetBit(void* Obj)
{
	((FSpatialPlaneRenderFilter*)Obj)->bSemanticFilter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics::NewProp_bSemanticFilter = { "bSemanticFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpatialPlaneRenderFilter), &Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics::NewProp_bSemanticFilter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSemanticFilter_MetaData), NewProp_bSemanticFilter_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics::NewProp_SemanticLabel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics::NewProp_SemanticLabel = { "SemanticLabel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpatialPlaneRenderFilter, SemanticLabel), Z_Construct_UEnum_AndroidXRSpatialPlaneTracking_ESpatialPlaneSemanticLabel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SemanticLabel_MetaData), NewProp_SemanticLabel_MetaData) }; // 1914260473
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics::NewProp_bShouldRenderBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics::NewProp_bShouldRenderMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics::NewProp_bShouldRenderPolygons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics::NewProp_bAlignmentFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics::NewProp_Alignment_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics::NewProp_Alignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics::NewProp_bSemanticFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics::NewProp_SemanticLabel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics::NewProp_SemanticLabel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealSamples,
	nullptr,
	&NewStructOps,
	"SpatialPlaneRenderFilter",
	Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics::PropPointers),
	sizeof(FSpatialPlaneRenderFilter),
	alignof(FSpatialPlaneRenderFilter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter()
{
	if (!Z_Registration_Info_UScriptStruct_FSpatialPlaneRenderFilter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSpatialPlaneRenderFilter.InnerSingleton, Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSpatialPlaneRenderFilter.InnerSingleton;
}
// ********** End ScriptStruct FSpatialPlaneRenderFilter *******************************************

// ********** Begin Class ASpatialPlaneActor Function ClearVisuals *********************************
struct Z_Construct_UFunction_ASpatialPlaneActor_ClearVisuals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpatialPlaneActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialPlaneActor_ClearVisuals_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASpatialPlaneActor, nullptr, "ClearVisuals", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialPlaneActor_ClearVisuals_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpatialPlaneActor_ClearVisuals_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASpatialPlaneActor_ClearVisuals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpatialPlaneActor_ClearVisuals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpatialPlaneActor::execClearVisuals)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearVisuals();
	P_NATIVE_END;
}
// ********** End Class ASpatialPlaneActor Function ClearVisuals ***********************************

// ********** Begin Class ASpatialPlaneActor Function DrawPlanes ***********************************
struct Z_Construct_UFunction_ASpatialPlaneActor_DrawPlanes_Statics
{
	struct SpatialPlaneActor_eventDrawPlanes_Parms
	{
		TSet<UAndroidXRSpatialPlaneEntity*> Planes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpatialPlaneActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Planes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Planes_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Planes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpatialPlaneActor_DrawPlanes_Statics::NewProp_Planes_ElementProp = { "Planes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_ASpatialPlaneActor_DrawPlanes_Statics::NewProp_Planes = { "Planes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpatialPlaneActor_eventDrawPlanes_Parms, Planes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Planes_MetaData), NewProp_Planes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpatialPlaneActor_DrawPlanes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialPlaneActor_DrawPlanes_Statics::NewProp_Planes_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialPlaneActor_DrawPlanes_Statics::NewProp_Planes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialPlaneActor_DrawPlanes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialPlaneActor_DrawPlanes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASpatialPlaneActor, nullptr, "DrawPlanes", Z_Construct_UFunction_ASpatialPlaneActor_DrawPlanes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialPlaneActor_DrawPlanes_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpatialPlaneActor_DrawPlanes_Statics::SpatialPlaneActor_eventDrawPlanes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialPlaneActor_DrawPlanes_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpatialPlaneActor_DrawPlanes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASpatialPlaneActor_DrawPlanes_Statics::SpatialPlaneActor_eventDrawPlanes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpatialPlaneActor_DrawPlanes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpatialPlaneActor_DrawPlanes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpatialPlaneActor::execDrawPlanes)
{
	P_GET_TSET_REF(UAndroidXRSpatialPlaneEntity*,Z_Param_Out_Planes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawPlanes(Z_Param_Out_Planes);
	P_NATIVE_END;
}
// ********** End Class ASpatialPlaneActor Function DrawPlanes *************************************

// ********** Begin Class ASpatialPlaneActor Function UpdateRenderFilter ***************************
struct Z_Construct_UFunction_ASpatialPlaneActor_UpdateRenderFilter_Statics
{
	struct SpatialPlaneActor_eventUpdateRenderFilter_Parms
	{
		FSpatialPlaneRenderFilter InRenderFilter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpatialPlaneActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InRenderFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InRenderFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpatialPlaneActor_UpdateRenderFilter_Statics::NewProp_InRenderFilter = { "InRenderFilter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpatialPlaneActor_eventUpdateRenderFilter_Parms, InRenderFilter), Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InRenderFilter_MetaData), NewProp_InRenderFilter_MetaData) }; // 3332545791
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpatialPlaneActor_UpdateRenderFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialPlaneActor_UpdateRenderFilter_Statics::NewProp_InRenderFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialPlaneActor_UpdateRenderFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialPlaneActor_UpdateRenderFilter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASpatialPlaneActor, nullptr, "UpdateRenderFilter", Z_Construct_UFunction_ASpatialPlaneActor_UpdateRenderFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialPlaneActor_UpdateRenderFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpatialPlaneActor_UpdateRenderFilter_Statics::SpatialPlaneActor_eventUpdateRenderFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialPlaneActor_UpdateRenderFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpatialPlaneActor_UpdateRenderFilter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASpatialPlaneActor_UpdateRenderFilter_Statics::SpatialPlaneActor_eventUpdateRenderFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpatialPlaneActor_UpdateRenderFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpatialPlaneActor_UpdateRenderFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpatialPlaneActor::execUpdateRenderFilter)
{
	P_GET_STRUCT_REF(FSpatialPlaneRenderFilter,Z_Param_Out_InRenderFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateRenderFilter(Z_Param_Out_InRenderFilter);
	P_NATIVE_END;
}
// ********** End Class ASpatialPlaneActor Function UpdateRenderFilter *****************************

// ********** Begin Class ASpatialPlaneActor *******************************************************
void ASpatialPlaneActor::StaticRegisterNativesASpatialPlaneActor()
{
	UClass* Class = ASpatialPlaneActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearVisuals", &ASpatialPlaneActor::execClearVisuals },
		{ "DrawPlanes", &ASpatialPlaneActor::execDrawPlanes },
		{ "UpdateRenderFilter", &ASpatialPlaneActor::execUpdateRenderFilter },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASpatialPlaneActor;
UClass* ASpatialPlaneActor::GetPrivateStaticClass()
{
	using TClass = ASpatialPlaneActor;
	if (!Z_Registration_Info_UClass_ASpatialPlaneActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SpatialPlaneActor"),
			Z_Registration_Info_UClass_ASpatialPlaneActor.InnerSingleton,
			StaticRegisterNativesASpatialPlaneActor,
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
	return Z_Registration_Info_UClass_ASpatialPlaneActor.InnerSingleton;
}
UClass* Z_Construct_UClass_ASpatialPlaneActor_NoRegister()
{
	return ASpatialPlaneActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASpatialPlaneActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SpatialPlaneActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "SpatialPlaneActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneBoundsInstancedMesh_MetaData[] = {
		{ "Category", "SpatialPlaneActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpatialPlaneActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlanePolygonProceduralMesh_MetaData[] = {
		{ "Category", "SpatialPlaneActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpatialPlaneActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlanePolygonMaterial_MetaData[] = {
		{ "Category", "SpatialPlaneActor" },
		{ "ModuleRelativePath", "SpatialPlaneActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlanePolygonMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "SpatialPlaneActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaneBoundsInstancedMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlanePolygonProceduralMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlanePolygonMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlanePolygonMaterialInstance_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlanePolygonMaterialInstance_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlanePolygonMaterialInstance_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PlanePolygonMaterialInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpatialPlaneActor_ClearVisuals, "ClearVisuals" }, // 3973218582
		{ &Z_Construct_UFunction_ASpatialPlaneActor_DrawPlanes, "DrawPlanes" }, // 605383773
		{ &Z_Construct_UFunction_ASpatialPlaneActor_UpdateRenderFilter, "UpdateRenderFilter" }, // 1671593291
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpatialPlaneActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpatialPlaneActor_Statics::NewProp_PlaneBoundsInstancedMesh = { "PlaneBoundsInstancedMesh", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpatialPlaneActor, PlaneBoundsInstancedMesh), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneBoundsInstancedMesh_MetaData), NewProp_PlaneBoundsInstancedMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpatialPlaneActor_Statics::NewProp_PlanePolygonProceduralMesh = { "PlanePolygonProceduralMesh", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpatialPlaneActor, PlanePolygonProceduralMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlanePolygonProceduralMesh_MetaData), NewProp_PlanePolygonProceduralMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpatialPlaneActor_Statics::NewProp_PlanePolygonMaterial = { "PlanePolygonMaterial", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpatialPlaneActor, PlanePolygonMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlanePolygonMaterial_MetaData), NewProp_PlanePolygonMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpatialPlaneActor_Statics::NewProp_PlanePolygonMaterialInstance_ValueProp = { "PlanePolygonMaterialInstance", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASpatialPlaneActor_Statics::NewProp_PlanePolygonMaterialInstance_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASpatialPlaneActor_Statics::NewProp_PlanePolygonMaterialInstance_Key_KeyProp = { "PlanePolygonMaterialInstance_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_AndroidXRSpatialPlaneTracking_ESpatialPlaneSemanticLabel, METADATA_PARAMS(0, nullptr) }; // 1914260473
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASpatialPlaneActor_Statics::NewProp_PlanePolygonMaterialInstance = { "PlanePolygonMaterialInstance", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpatialPlaneActor, PlanePolygonMaterialInstance), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlanePolygonMaterialInstance_MetaData), NewProp_PlanePolygonMaterialInstance_MetaData) }; // 1914260473
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpatialPlaneActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialPlaneActor_Statics::NewProp_PlaneBoundsInstancedMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialPlaneActor_Statics::NewProp_PlanePolygonProceduralMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialPlaneActor_Statics::NewProp_PlanePolygonMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialPlaneActor_Statics::NewProp_PlanePolygonMaterialInstance_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialPlaneActor_Statics::NewProp_PlanePolygonMaterialInstance_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialPlaneActor_Statics::NewProp_PlanePolygonMaterialInstance_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialPlaneActor_Statics::NewProp_PlanePolygonMaterialInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialPlaneActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpatialPlaneActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealSamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialPlaneActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpatialPlaneActor_Statics::ClassParams = {
	&ASpatialPlaneActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASpatialPlaneActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialPlaneActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialPlaneActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpatialPlaneActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpatialPlaneActor()
{
	if (!Z_Registration_Info_UClass_ASpatialPlaneActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpatialPlaneActor.OuterSingleton, Z_Construct_UClass_ASpatialPlaneActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpatialPlaneActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpatialPlaneActor);
ASpatialPlaneActor::~ASpatialPlaneActor() {}
// ********** End Class ASpatialPlaneActor *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialPlaneActor_h__Script_UnrealSamples_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSpatialPlaneRenderFilter::StaticStruct, Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter_Statics::NewStructOps, TEXT("SpatialPlaneRenderFilter"), &Z_Registration_Info_UScriptStruct_FSpatialPlaneRenderFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpatialPlaneRenderFilter), 3332545791U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpatialPlaneActor, ASpatialPlaneActor::StaticClass, TEXT("ASpatialPlaneActor"), &Z_Registration_Info_UClass_ASpatialPlaneActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpatialPlaneActor), 1629996858U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialPlaneActor_h__Script_UnrealSamples_1927543956(TEXT("/Script/UnrealSamples"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialPlaneActor_h__Script_UnrealSamples_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialPlaneActor_h__Script_UnrealSamples_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialPlaneActor_h__Script_UnrealSamples_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialPlaneActor_h__Script_UnrealSamples_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
