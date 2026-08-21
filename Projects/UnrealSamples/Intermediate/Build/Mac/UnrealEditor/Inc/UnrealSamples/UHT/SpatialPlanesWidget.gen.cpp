// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealSamples/SpatialPlanesWidget.h"
#include "UnrealSamples/SpatialPlaneActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSpatialPlanesWidget() {}

// ********** Begin Cross Module References ********************************************************
UMG_API UClass* Z_Construct_UClass_UCheckBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UComboBoxString_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UNREALSAMPLES_API UClass* Z_Construct_UClass_USpatialPlanesWidget();
UNREALSAMPLES_API UClass* Z_Construct_UClass_USpatialPlanesWidget_NoRegister();
UNREALSAMPLES_API UFunction* Z_Construct_UDelegateFunction_UnrealSamples_PlaneRenderFilterChanged__DelegateSignature();
UNREALSAMPLES_API UScriptStruct* Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter();
UPackage* Z_Construct_UPackage__Script_UnrealSamples();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FPlaneRenderFilterChanged *********************************************
struct Z_Construct_UDelegateFunction_UnrealSamples_PlaneRenderFilterChanged__DelegateSignature_Statics
{
	struct _Script_UnrealSamples_eventPlaneRenderFilterChanged_Parms
	{
		FSpatialPlaneRenderFilter RenderFilter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpatialPlanesWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RenderFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UnrealSamples_PlaneRenderFilterChanged__DelegateSignature_Statics::NewProp_RenderFilter = { "RenderFilter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UnrealSamples_eventPlaneRenderFilterChanged_Parms, RenderFilter), Z_Construct_UScriptStruct_FSpatialPlaneRenderFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderFilter_MetaData), NewProp_RenderFilter_MetaData) }; // 3332545791
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UnrealSamples_PlaneRenderFilterChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnrealSamples_PlaneRenderFilterChanged__DelegateSignature_Statics::NewProp_RenderFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealSamples_PlaneRenderFilterChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UnrealSamples_PlaneRenderFilterChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UnrealSamples, nullptr, "PlaneRenderFilterChanged__DelegateSignature", Z_Construct_UDelegateFunction_UnrealSamples_PlaneRenderFilterChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealSamples_PlaneRenderFilterChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UnrealSamples_PlaneRenderFilterChanged__DelegateSignature_Statics::_Script_UnrealSamples_eventPlaneRenderFilterChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealSamples_PlaneRenderFilterChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UnrealSamples_PlaneRenderFilterChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UnrealSamples_PlaneRenderFilterChanged__DelegateSignature_Statics::_Script_UnrealSamples_eventPlaneRenderFilterChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UnrealSamples_PlaneRenderFilterChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UnrealSamples_PlaneRenderFilterChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPlaneRenderFilterChanged_DelegateWrapper(const FMulticastScriptDelegate& PlaneRenderFilterChanged, FSpatialPlaneRenderFilter const& RenderFilter)
{
	struct _Script_UnrealSamples_eventPlaneRenderFilterChanged_Parms
	{
		FSpatialPlaneRenderFilter RenderFilter;
	};
	_Script_UnrealSamples_eventPlaneRenderFilterChanged_Parms Parms;
	Parms.RenderFilter=RenderFilter;
	PlaneRenderFilterChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FPlaneRenderFilterChanged ***********************************************

// ********** Begin Class USpatialPlanesWidget Function AlignmentFilterChangedHandler **************
struct Z_Construct_UFunction_USpatialPlanesWidget_AlignmentFilterChangedHandler_Statics
{
	struct SpatialPlanesWidget_eventAlignmentFilterChangedHandler_Parms
	{
		bool bEnableFilter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpatialPlanesWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableFilter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USpatialPlanesWidget_AlignmentFilterChangedHandler_Statics::NewProp_bEnableFilter_SetBit(void* Obj)
{
	((SpatialPlanesWidget_eventAlignmentFilterChangedHandler_Parms*)Obj)->bEnableFilter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpatialPlanesWidget_AlignmentFilterChangedHandler_Statics::NewProp_bEnableFilter = { "bEnableFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpatialPlanesWidget_eventAlignmentFilterChangedHandler_Parms), &Z_Construct_UFunction_USpatialPlanesWidget_AlignmentFilterChangedHandler_Statics::NewProp_bEnableFilter_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialPlanesWidget_AlignmentFilterChangedHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialPlanesWidget_AlignmentFilterChangedHandler_Statics::NewProp_bEnableFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialPlanesWidget_AlignmentFilterChangedHandler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialPlanesWidget_AlignmentFilterChangedHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpatialPlanesWidget, nullptr, "AlignmentFilterChangedHandler", Z_Construct_UFunction_USpatialPlanesWidget_AlignmentFilterChangedHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialPlanesWidget_AlignmentFilterChangedHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpatialPlanesWidget_AlignmentFilterChangedHandler_Statics::SpatialPlanesWidget_eventAlignmentFilterChangedHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialPlanesWidget_AlignmentFilterChangedHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpatialPlanesWidget_AlignmentFilterChangedHandler_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USpatialPlanesWidget_AlignmentFilterChangedHandler_Statics::SpatialPlanesWidget_eventAlignmentFilterChangedHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpatialPlanesWidget_AlignmentFilterChangedHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpatialPlanesWidget_AlignmentFilterChangedHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpatialPlanesWidget::execAlignmentFilterChangedHandler)
{
	P_GET_UBOOL(Z_Param_bEnableFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AlignmentFilterChangedHandler(Z_Param_bEnableFilter);
	P_NATIVE_END;
}
// ********** End Class USpatialPlanesWidget Function AlignmentFilterChangedHandler ****************

// ********** Begin Class USpatialPlanesWidget Function BoundsRenderChangedHandler *****************
struct Z_Construct_UFunction_USpatialPlanesWidget_BoundsRenderChangedHandler_Statics
{
	struct SpatialPlanesWidget_eventBoundsRenderChangedHandler_Parms
	{
		bool bEnableFilter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpatialPlanesWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableFilter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USpatialPlanesWidget_BoundsRenderChangedHandler_Statics::NewProp_bEnableFilter_SetBit(void* Obj)
{
	((SpatialPlanesWidget_eventBoundsRenderChangedHandler_Parms*)Obj)->bEnableFilter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpatialPlanesWidget_BoundsRenderChangedHandler_Statics::NewProp_bEnableFilter = { "bEnableFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpatialPlanesWidget_eventBoundsRenderChangedHandler_Parms), &Z_Construct_UFunction_USpatialPlanesWidget_BoundsRenderChangedHandler_Statics::NewProp_bEnableFilter_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialPlanesWidget_BoundsRenderChangedHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialPlanesWidget_BoundsRenderChangedHandler_Statics::NewProp_bEnableFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialPlanesWidget_BoundsRenderChangedHandler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialPlanesWidget_BoundsRenderChangedHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpatialPlanesWidget, nullptr, "BoundsRenderChangedHandler", Z_Construct_UFunction_USpatialPlanesWidget_BoundsRenderChangedHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialPlanesWidget_BoundsRenderChangedHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpatialPlanesWidget_BoundsRenderChangedHandler_Statics::SpatialPlanesWidget_eventBoundsRenderChangedHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialPlanesWidget_BoundsRenderChangedHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpatialPlanesWidget_BoundsRenderChangedHandler_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USpatialPlanesWidget_BoundsRenderChangedHandler_Statics::SpatialPlanesWidget_eventBoundsRenderChangedHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpatialPlanesWidget_BoundsRenderChangedHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpatialPlanesWidget_BoundsRenderChangedHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpatialPlanesWidget::execBoundsRenderChangedHandler)
{
	P_GET_UBOOL(Z_Param_bEnableFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BoundsRenderChangedHandler(Z_Param_bEnableFilter);
	P_NATIVE_END;
}
// ********** End Class USpatialPlanesWidget Function BoundsRenderChangedHandler *******************

// ********** Begin Class USpatialPlanesWidget Function LabelFilterChangedHandler ******************
struct Z_Construct_UFunction_USpatialPlanesWidget_LabelFilterChangedHandler_Statics
{
	struct SpatialPlanesWidget_eventLabelFilterChangedHandler_Parms
	{
		bool bEnableFilter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpatialPlanesWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableFilter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USpatialPlanesWidget_LabelFilterChangedHandler_Statics::NewProp_bEnableFilter_SetBit(void* Obj)
{
	((SpatialPlanesWidget_eventLabelFilterChangedHandler_Parms*)Obj)->bEnableFilter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpatialPlanesWidget_LabelFilterChangedHandler_Statics::NewProp_bEnableFilter = { "bEnableFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpatialPlanesWidget_eventLabelFilterChangedHandler_Parms), &Z_Construct_UFunction_USpatialPlanesWidget_LabelFilterChangedHandler_Statics::NewProp_bEnableFilter_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialPlanesWidget_LabelFilterChangedHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialPlanesWidget_LabelFilterChangedHandler_Statics::NewProp_bEnableFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialPlanesWidget_LabelFilterChangedHandler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialPlanesWidget_LabelFilterChangedHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpatialPlanesWidget, nullptr, "LabelFilterChangedHandler", Z_Construct_UFunction_USpatialPlanesWidget_LabelFilterChangedHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialPlanesWidget_LabelFilterChangedHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpatialPlanesWidget_LabelFilterChangedHandler_Statics::SpatialPlanesWidget_eventLabelFilterChangedHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialPlanesWidget_LabelFilterChangedHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpatialPlanesWidget_LabelFilterChangedHandler_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USpatialPlanesWidget_LabelFilterChangedHandler_Statics::SpatialPlanesWidget_eventLabelFilterChangedHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpatialPlanesWidget_LabelFilterChangedHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpatialPlanesWidget_LabelFilterChangedHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpatialPlanesWidget::execLabelFilterChangedHandler)
{
	P_GET_UBOOL(Z_Param_bEnableFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LabelFilterChangedHandler(Z_Param_bEnableFilter);
	P_NATIVE_END;
}
// ********** End Class USpatialPlanesWidget Function LabelFilterChangedHandler ********************

// ********** Begin Class USpatialPlanesWidget Function MeshRenderChangedHandler *******************
struct Z_Construct_UFunction_USpatialPlanesWidget_MeshRenderChangedHandler_Statics
{
	struct SpatialPlanesWidget_eventMeshRenderChangedHandler_Parms
	{
		bool bEnableFilter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpatialPlanesWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableFilter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USpatialPlanesWidget_MeshRenderChangedHandler_Statics::NewProp_bEnableFilter_SetBit(void* Obj)
{
	((SpatialPlanesWidget_eventMeshRenderChangedHandler_Parms*)Obj)->bEnableFilter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpatialPlanesWidget_MeshRenderChangedHandler_Statics::NewProp_bEnableFilter = { "bEnableFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpatialPlanesWidget_eventMeshRenderChangedHandler_Parms), &Z_Construct_UFunction_USpatialPlanesWidget_MeshRenderChangedHandler_Statics::NewProp_bEnableFilter_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialPlanesWidget_MeshRenderChangedHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialPlanesWidget_MeshRenderChangedHandler_Statics::NewProp_bEnableFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialPlanesWidget_MeshRenderChangedHandler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialPlanesWidget_MeshRenderChangedHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpatialPlanesWidget, nullptr, "MeshRenderChangedHandler", Z_Construct_UFunction_USpatialPlanesWidget_MeshRenderChangedHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialPlanesWidget_MeshRenderChangedHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpatialPlanesWidget_MeshRenderChangedHandler_Statics::SpatialPlanesWidget_eventMeshRenderChangedHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialPlanesWidget_MeshRenderChangedHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpatialPlanesWidget_MeshRenderChangedHandler_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USpatialPlanesWidget_MeshRenderChangedHandler_Statics::SpatialPlanesWidget_eventMeshRenderChangedHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpatialPlanesWidget_MeshRenderChangedHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpatialPlanesWidget_MeshRenderChangedHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpatialPlanesWidget::execMeshRenderChangedHandler)
{
	P_GET_UBOOL(Z_Param_bEnableFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MeshRenderChangedHandler(Z_Param_bEnableFilter);
	P_NATIVE_END;
}
// ********** End Class USpatialPlanesWidget Function MeshRenderChangedHandler *********************

// ********** Begin Class USpatialPlanesWidget Function PolygonRenderChangedHandler ****************
struct Z_Construct_UFunction_USpatialPlanesWidget_PolygonRenderChangedHandler_Statics
{
	struct SpatialPlanesWidget_eventPolygonRenderChangedHandler_Parms
	{
		bool bEnableFilter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpatialPlanesWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableFilter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USpatialPlanesWidget_PolygonRenderChangedHandler_Statics::NewProp_bEnableFilter_SetBit(void* Obj)
{
	((SpatialPlanesWidget_eventPolygonRenderChangedHandler_Parms*)Obj)->bEnableFilter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpatialPlanesWidget_PolygonRenderChangedHandler_Statics::NewProp_bEnableFilter = { "bEnableFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpatialPlanesWidget_eventPolygonRenderChangedHandler_Parms), &Z_Construct_UFunction_USpatialPlanesWidget_PolygonRenderChangedHandler_Statics::NewProp_bEnableFilter_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialPlanesWidget_PolygonRenderChangedHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialPlanesWidget_PolygonRenderChangedHandler_Statics::NewProp_bEnableFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialPlanesWidget_PolygonRenderChangedHandler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialPlanesWidget_PolygonRenderChangedHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpatialPlanesWidget, nullptr, "PolygonRenderChangedHandler", Z_Construct_UFunction_USpatialPlanesWidget_PolygonRenderChangedHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialPlanesWidget_PolygonRenderChangedHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpatialPlanesWidget_PolygonRenderChangedHandler_Statics::SpatialPlanesWidget_eventPolygonRenderChangedHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialPlanesWidget_PolygonRenderChangedHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpatialPlanesWidget_PolygonRenderChangedHandler_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USpatialPlanesWidget_PolygonRenderChangedHandler_Statics::SpatialPlanesWidget_eventPolygonRenderChangedHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpatialPlanesWidget_PolygonRenderChangedHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpatialPlanesWidget_PolygonRenderChangedHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpatialPlanesWidget::execPolygonRenderChangedHandler)
{
	P_GET_UBOOL(Z_Param_bEnableFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PolygonRenderChangedHandler(Z_Param_bEnableFilter);
	P_NATIVE_END;
}
// ********** End Class USpatialPlanesWidget Function PolygonRenderChangedHandler ******************

// ********** Begin Class USpatialPlanesWidget *****************************************************
void USpatialPlanesWidget::StaticRegisterNativesUSpatialPlanesWidget()
{
	UClass* Class = USpatialPlanesWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AlignmentFilterChangedHandler", &USpatialPlanesWidget::execAlignmentFilterChangedHandler },
		{ "BoundsRenderChangedHandler", &USpatialPlanesWidget::execBoundsRenderChangedHandler },
		{ "LabelFilterChangedHandler", &USpatialPlanesWidget::execLabelFilterChangedHandler },
		{ "MeshRenderChangedHandler", &USpatialPlanesWidget::execMeshRenderChangedHandler },
		{ "PolygonRenderChangedHandler", &USpatialPlanesWidget::execPolygonRenderChangedHandler },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USpatialPlanesWidget;
UClass* USpatialPlanesWidget::GetPrivateStaticClass()
{
	using TClass = USpatialPlanesWidget;
	if (!Z_Registration_Info_UClass_USpatialPlanesWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SpatialPlanesWidget"),
			Z_Registration_Info_UClass_USpatialPlanesWidget.InnerSingleton,
			StaticRegisterNativesUSpatialPlanesWidget,
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
	return Z_Registration_Info_UClass_USpatialPlanesWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_USpatialPlanesWidget_NoRegister()
{
	return USpatialPlanesWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USpatialPlanesWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SpatialPlanesWidget.h" },
		{ "ModuleRelativePath", "SpatialPlanesWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderBoundsCheckbox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SpatialPlanesWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpatialPlanesWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderPolygonsCheckbox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SpatialPlanesWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpatialPlanesWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderMeshCheckbox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SpatialPlanesWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpatialPlanesWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlignmentFilter_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SpatialPlanesWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpatialPlanesWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlignmentComboBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SpatialPlanesWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpatialPlanesWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelFilter_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SpatialPlanesWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpatialPlanesWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelComboBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SpatialPlanesWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpatialPlanesWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRenderFilterChanged_MetaData[] = {
		{ "ModuleRelativePath", "SpatialPlanesWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderBoundsCheckbox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderPolygonsCheckbox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderMeshCheckbox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AlignmentFilter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AlignmentComboBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LabelFilter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LabelComboBox;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRenderFilterChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USpatialPlanesWidget_AlignmentFilterChangedHandler, "AlignmentFilterChangedHandler" }, // 1540566210
		{ &Z_Construct_UFunction_USpatialPlanesWidget_BoundsRenderChangedHandler, "BoundsRenderChangedHandler" }, // 2241999785
		{ &Z_Construct_UFunction_USpatialPlanesWidget_LabelFilterChangedHandler, "LabelFilterChangedHandler" }, // 723560745
		{ &Z_Construct_UFunction_USpatialPlanesWidget_MeshRenderChangedHandler, "MeshRenderChangedHandler" }, // 1798572519
		{ &Z_Construct_UFunction_USpatialPlanesWidget_PolygonRenderChangedHandler, "PolygonRenderChangedHandler" }, // 1027684979
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpatialPlanesWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialPlanesWidget_Statics::NewProp_RenderBoundsCheckbox = { "RenderBoundsCheckbox", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpatialPlanesWidget, RenderBoundsCheckbox), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderBoundsCheckbox_MetaData), NewProp_RenderBoundsCheckbox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialPlanesWidget_Statics::NewProp_RenderPolygonsCheckbox = { "RenderPolygonsCheckbox", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpatialPlanesWidget, RenderPolygonsCheckbox), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderPolygonsCheckbox_MetaData), NewProp_RenderPolygonsCheckbox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialPlanesWidget_Statics::NewProp_RenderMeshCheckbox = { "RenderMeshCheckbox", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpatialPlanesWidget, RenderMeshCheckbox), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderMeshCheckbox_MetaData), NewProp_RenderMeshCheckbox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialPlanesWidget_Statics::NewProp_AlignmentFilter = { "AlignmentFilter", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpatialPlanesWidget, AlignmentFilter), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlignmentFilter_MetaData), NewProp_AlignmentFilter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialPlanesWidget_Statics::NewProp_AlignmentComboBox = { "AlignmentComboBox", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpatialPlanesWidget, AlignmentComboBox), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlignmentComboBox_MetaData), NewProp_AlignmentComboBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialPlanesWidget_Statics::NewProp_LabelFilter = { "LabelFilter", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpatialPlanesWidget, LabelFilter), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelFilter_MetaData), NewProp_LabelFilter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialPlanesWidget_Statics::NewProp_LabelComboBox = { "LabelComboBox", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpatialPlanesWidget, LabelComboBox), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelComboBox_MetaData), NewProp_LabelComboBox_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpatialPlanesWidget_Statics::NewProp_OnRenderFilterChanged = { "OnRenderFilterChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpatialPlanesWidget, OnRenderFilterChanged), Z_Construct_UDelegateFunction_UnrealSamples_PlaneRenderFilterChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRenderFilterChanged_MetaData), NewProp_OnRenderFilterChanged_MetaData) }; // 221984489
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpatialPlanesWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialPlanesWidget_Statics::NewProp_RenderBoundsCheckbox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialPlanesWidget_Statics::NewProp_RenderPolygonsCheckbox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialPlanesWidget_Statics::NewProp_RenderMeshCheckbox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialPlanesWidget_Statics::NewProp_AlignmentFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialPlanesWidget_Statics::NewProp_AlignmentComboBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialPlanesWidget_Statics::NewProp_LabelFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialPlanesWidget_Statics::NewProp_LabelComboBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialPlanesWidget_Statics::NewProp_OnRenderFilterChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpatialPlanesWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USpatialPlanesWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealSamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpatialPlanesWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpatialPlanesWidget_Statics::ClassParams = {
	&USpatialPlanesWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USpatialPlanesWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USpatialPlanesWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpatialPlanesWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_USpatialPlanesWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpatialPlanesWidget()
{
	if (!Z_Registration_Info_UClass_USpatialPlanesWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpatialPlanesWidget.OuterSingleton, Z_Construct_UClass_USpatialPlanesWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpatialPlanesWidget.OuterSingleton;
}
USpatialPlanesWidget::USpatialPlanesWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpatialPlanesWidget);
USpatialPlanesWidget::~USpatialPlanesWidget() {}
// ********** End Class USpatialPlanesWidget *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialPlanesWidget_h__Script_UnrealSamples_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpatialPlanesWidget, USpatialPlanesWidget::StaticClass, TEXT("USpatialPlanesWidget"), &Z_Registration_Info_UClass_USpatialPlanesWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpatialPlanesWidget), 2256498346U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialPlanesWidget_h__Script_UnrealSamples_2854621648(TEXT("/Script/UnrealSamples"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialPlanesWidget_h__Script_UnrealSamples_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialPlanesWidget_h__Script_UnrealSamples_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
