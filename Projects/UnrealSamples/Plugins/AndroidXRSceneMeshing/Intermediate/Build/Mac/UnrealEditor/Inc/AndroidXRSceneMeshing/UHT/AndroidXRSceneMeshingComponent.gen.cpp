// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRSceneMeshingComponent.h"
#include "AndroidXRTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRSceneMeshingComponent() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXR_API UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRSceneMeshSemanticLabelSet();
ANDROIDXR_API UEnum* Z_Construct_UEnum_AndroidXR_ESceneMeshTrackingState();
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRSceneMeshingTracker();
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshData();
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshState();
ANDROIDXRSCENEMESHING_API UClass* Z_Construct_UClass_UAndroidXRSceneMeshingComponent();
ANDROIDXRSCENEMESHING_API UClass* Z_Construct_UClass_UAndroidXRSceneMeshingComponent_NoRegister();
ANDROIDXRSCENEMESHING_API UFunction* Z_Construct_UDelegateFunction_AndroidXRSceneMeshing_AndroidXRWorldMeshDeltaDelegateMulticast__DelegateSignature();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
MRMESH_API UClass* Z_Construct_UClass_UMRMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AndroidXRSceneMeshing();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FAndroidXRWorldMeshDeltaDelegateMulticast *****************************
struct Z_Construct_UDelegateFunction_AndroidXRSceneMeshing_AndroidXRWorldMeshDeltaDelegateMulticast__DelegateSignature_Statics
{
	struct _Script_AndroidXRSceneMeshing_eventAndroidXRWorldMeshDeltaDelegateMulticast_Parms
	{
		TArray<FGuid> AddedMeshBlockIds;
		TArray<FGuid> UpdatedMeshBlockIds;
		TArray<FGuid> RemovedMeshBlockIds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AndroidXRSceneMeshingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddedMeshBlockIds_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdatedMeshBlockIds_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemovedMeshBlockIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AddedMeshBlockIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AddedMeshBlockIds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdatedMeshBlockIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UpdatedMeshBlockIds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemovedMeshBlockIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RemovedMeshBlockIds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AndroidXRSceneMeshing_AndroidXRWorldMeshDeltaDelegateMulticast__DelegateSignature_Statics::NewProp_AddedMeshBlockIds_Inner = { "AddedMeshBlockIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AndroidXRSceneMeshing_AndroidXRWorldMeshDeltaDelegateMulticast__DelegateSignature_Statics::NewProp_AddedMeshBlockIds = { "AddedMeshBlockIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AndroidXRSceneMeshing_eventAndroidXRWorldMeshDeltaDelegateMulticast_Parms, AddedMeshBlockIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddedMeshBlockIds_MetaData), NewProp_AddedMeshBlockIds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AndroidXRSceneMeshing_AndroidXRWorldMeshDeltaDelegateMulticast__DelegateSignature_Statics::NewProp_UpdatedMeshBlockIds_Inner = { "UpdatedMeshBlockIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AndroidXRSceneMeshing_AndroidXRWorldMeshDeltaDelegateMulticast__DelegateSignature_Statics::NewProp_UpdatedMeshBlockIds = { "UpdatedMeshBlockIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AndroidXRSceneMeshing_eventAndroidXRWorldMeshDeltaDelegateMulticast_Parms, UpdatedMeshBlockIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdatedMeshBlockIds_MetaData), NewProp_UpdatedMeshBlockIds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AndroidXRSceneMeshing_AndroidXRWorldMeshDeltaDelegateMulticast__DelegateSignature_Statics::NewProp_RemovedMeshBlockIds_Inner = { "RemovedMeshBlockIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AndroidXRSceneMeshing_AndroidXRWorldMeshDeltaDelegateMulticast__DelegateSignature_Statics::NewProp_RemovedMeshBlockIds = { "RemovedMeshBlockIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AndroidXRSceneMeshing_eventAndroidXRWorldMeshDeltaDelegateMulticast_Parms, RemovedMeshBlockIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemovedMeshBlockIds_MetaData), NewProp_RemovedMeshBlockIds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AndroidXRSceneMeshing_AndroidXRWorldMeshDeltaDelegateMulticast__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AndroidXRSceneMeshing_AndroidXRWorldMeshDeltaDelegateMulticast__DelegateSignature_Statics::NewProp_AddedMeshBlockIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AndroidXRSceneMeshing_AndroidXRWorldMeshDeltaDelegateMulticast__DelegateSignature_Statics::NewProp_AddedMeshBlockIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AndroidXRSceneMeshing_AndroidXRWorldMeshDeltaDelegateMulticast__DelegateSignature_Statics::NewProp_UpdatedMeshBlockIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AndroidXRSceneMeshing_AndroidXRWorldMeshDeltaDelegateMulticast__DelegateSignature_Statics::NewProp_UpdatedMeshBlockIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AndroidXRSceneMeshing_AndroidXRWorldMeshDeltaDelegateMulticast__DelegateSignature_Statics::NewProp_RemovedMeshBlockIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AndroidXRSceneMeshing_AndroidXRWorldMeshDeltaDelegateMulticast__DelegateSignature_Statics::NewProp_RemovedMeshBlockIds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRSceneMeshing_AndroidXRWorldMeshDeltaDelegateMulticast__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AndroidXRSceneMeshing_AndroidXRWorldMeshDeltaDelegateMulticast__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AndroidXRSceneMeshing, nullptr, "AndroidXRWorldMeshDeltaDelegateMulticast__DelegateSignature", Z_Construct_UDelegateFunction_AndroidXRSceneMeshing_AndroidXRWorldMeshDeltaDelegateMulticast__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRSceneMeshing_AndroidXRWorldMeshDeltaDelegateMulticast__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AndroidXRSceneMeshing_AndroidXRWorldMeshDeltaDelegateMulticast__DelegateSignature_Statics::_Script_AndroidXRSceneMeshing_eventAndroidXRWorldMeshDeltaDelegateMulticast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRSceneMeshing_AndroidXRWorldMeshDeltaDelegateMulticast__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AndroidXRSceneMeshing_AndroidXRWorldMeshDeltaDelegateMulticast__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AndroidXRSceneMeshing_AndroidXRWorldMeshDeltaDelegateMulticast__DelegateSignature_Statics::_Script_AndroidXRSceneMeshing_eventAndroidXRWorldMeshDeltaDelegateMulticast_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AndroidXRSceneMeshing_AndroidXRWorldMeshDeltaDelegateMulticast__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AndroidXRSceneMeshing_AndroidXRWorldMeshDeltaDelegateMulticast__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAndroidXRWorldMeshDeltaDelegateMulticast_DelegateWrapper(const FMulticastScriptDelegate& AndroidXRWorldMeshDeltaDelegateMulticast, TArray<FGuid> const& AddedMeshBlockIds, TArray<FGuid> const& UpdatedMeshBlockIds, TArray<FGuid> const& RemovedMeshBlockIds)
{
	struct _Script_AndroidXRSceneMeshing_eventAndroidXRWorldMeshDeltaDelegateMulticast_Parms
	{
		TArray<FGuid> AddedMeshBlockIds;
		TArray<FGuid> UpdatedMeshBlockIds;
		TArray<FGuid> RemovedMeshBlockIds;
	};
	_Script_AndroidXRSceneMeshing_eventAndroidXRWorldMeshDeltaDelegateMulticast_Parms Parms;
	Parms.AddedMeshBlockIds=AddedMeshBlockIds;
	Parms.UpdatedMeshBlockIds=UpdatedMeshBlockIds;
	Parms.RemovedMeshBlockIds=RemovedMeshBlockIds;
	AndroidXRWorldMeshDeltaDelegateMulticast.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FAndroidXRWorldMeshDeltaDelegateMulticast *******************************

// ********** Begin Class UAndroidXRSceneMeshingComponent Function ClearPublishedMeshHistory *******
struct Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_ClearPublishedMeshHistory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Removes all history of published bricks\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSceneMeshingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes all history of published bricks" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_ClearPublishedMeshHistory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSceneMeshingComponent, nullptr, "ClearPublishedMeshHistory", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_ClearPublishedMeshHistory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_ClearPublishedMeshHistory_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_ClearPublishedMeshHistory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_ClearPublishedMeshHistory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSceneMeshingComponent::execClearPublishedMeshHistory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearPublishedMeshHistory();
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSceneMeshingComponent Function ClearPublishedMeshHistory *********

// ********** Begin Class UAndroidXRSceneMeshingComponent Function ClearUniqueSubmeshes ************
struct Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_ClearUniqueSubmeshes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clears all recorded unique submeshes\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSceneMeshingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears all recorded unique submeshes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_ClearUniqueSubmeshes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSceneMeshingComponent, nullptr, "ClearUniqueSubmeshes", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_ClearUniqueSubmeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_ClearUniqueSubmeshes_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_ClearUniqueSubmeshes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_ClearUniqueSubmeshes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSceneMeshingComponent::execClearUniqueSubmeshes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearUniqueSubmeshes();
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSceneMeshingComponent Function ClearUniqueSubmeshes **************

// ********** Begin Class UAndroidXRSceneMeshingComponent Function ConnectMrMesh *******************
struct Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_ConnectMrMesh_Statics
{
	struct AndroidXRSceneMeshingComponent_eventConnectMrMesh_Parms
	{
		UMRMeshComponent* InMrMesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Connects a MR Mesh component to this component for visualization\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSceneMeshingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Connects a MR Mesh component to this component for visualization" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMrMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMrMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_ConnectMrMesh_Statics::NewProp_InMrMesh = { "InMrMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRSceneMeshingComponent_eventConnectMrMesh_Parms, InMrMesh), Z_Construct_UClass_UMRMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMrMesh_MetaData), NewProp_InMrMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_ConnectMrMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_ConnectMrMesh_Statics::NewProp_InMrMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_ConnectMrMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_ConnectMrMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSceneMeshingComponent, nullptr, "ConnectMrMesh", Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_ConnectMrMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_ConnectMrMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_ConnectMrMesh_Statics::AndroidXRSceneMeshingComponent_eventConnectMrMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_ConnectMrMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_ConnectMrMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_ConnectMrMesh_Statics::AndroidXRSceneMeshingComponent_eventConnectMrMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_ConnectMrMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_ConnectMrMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSceneMeshingComponent::execConnectMrMesh)
{
	P_GET_OBJECT(UMRMeshComponent,Z_Param_InMrMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConnectMrMesh(Z_Param_InMrMesh);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSceneMeshingComponent Function ConnectMrMesh *********************

// ********** Begin Class UAndroidXRSceneMeshingComponent Function CreateTracker *******************
struct Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_CreateTracker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Creates a mesh tracker (destroys any existing one first)\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSceneMeshingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a mesh tracker (destroys any existing one first)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_CreateTracker_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSceneMeshingComponent, nullptr, "CreateTracker", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_CreateTracker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_CreateTracker_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_CreateTracker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_CreateTracker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSceneMeshingComponent::execCreateTracker)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateTracker();
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSceneMeshingComponent Function CreateTracker *********************

// ********** Begin Class UAndroidXRSceneMeshingComponent Function DrawPublishedBrickBounds ********
struct Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_DrawPublishedBrickBounds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Draws bounding boxes of published bricks (does not work in Shipping)\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSceneMeshingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Draws bounding boxes of published bricks (does not work in Shipping)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_DrawPublishedBrickBounds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSceneMeshingComponent, nullptr, "DrawPublishedBrickBounds", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_DrawPublishedBrickBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_DrawPublishedBrickBounds_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_DrawPublishedBrickBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_DrawPublishedBrickBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSceneMeshingComponent::execDrawPublishedBrickBounds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawPublishedBrickBounds();
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSceneMeshingComponent Function DrawPublishedBrickBounds **********

// ********** Begin Class UAndroidXRSceneMeshingComponent Function RequestSubmeshes ****************
struct Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_RequestSubmeshes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Performas a mesh query and broadcasts delegates\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSceneMeshingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Performas a mesh query and broadcasts delegates" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_RequestSubmeshes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSceneMeshingComponent, nullptr, "RequestSubmeshes", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_RequestSubmeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_RequestSubmeshes_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_RequestSubmeshes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_RequestSubmeshes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSceneMeshingComponent::execRequestSubmeshes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestSubmeshes();
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSceneMeshingComponent Function RequestSubmeshes ******************

// ********** Begin Class UAndroidXRSceneMeshingComponent ******************************************
void UAndroidXRSceneMeshingComponent::StaticRegisterNativesUAndroidXRSceneMeshingComponent()
{
	UClass* Class = UAndroidXRSceneMeshingComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearPublishedMeshHistory", &UAndroidXRSceneMeshingComponent::execClearPublishedMeshHistory },
		{ "ClearUniqueSubmeshes", &UAndroidXRSceneMeshingComponent::execClearUniqueSubmeshes },
		{ "ConnectMrMesh", &UAndroidXRSceneMeshingComponent::execConnectMrMesh },
		{ "CreateTracker", &UAndroidXRSceneMeshingComponent::execCreateTracker },
		{ "DrawPublishedBrickBounds", &UAndroidXRSceneMeshingComponent::execDrawPublishedBrickBounds },
		{ "RequestSubmeshes", &UAndroidXRSceneMeshingComponent::execRequestSubmeshes },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRSceneMeshingComponent;
UClass* UAndroidXRSceneMeshingComponent::GetPrivateStaticClass()
{
	using TClass = UAndroidXRSceneMeshingComponent;
	if (!Z_Registration_Info_UClass_UAndroidXRSceneMeshingComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRSceneMeshingComponent"),
			Z_Registration_Info_UClass_UAndroidXRSceneMeshingComponent.InnerSingleton,
			StaticRegisterNativesUAndroidXRSceneMeshingComponent,
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
	return Z_Registration_Info_UClass_UAndroidXRSceneMeshingComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRSceneMeshingComponent_NoRegister()
{
	return UAndroidXRSceneMeshingComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "AndroidXRSceneMeshingComponent.h" },
		{ "ModuleRelativePath", "Public/AndroidXRSceneMeshingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultDelegate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Raw results delegate, receives all mesh blocks found with the current parameters\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSceneMeshingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Raw results delegate, receives all mesh blocks found with the current parameters" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaDelegate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Difference between previous and current detected mesh blocks\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSceneMeshingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Difference between previous and current detected mesh blocks" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchVolume_MetaData[] = {
		{ "Category", "AndroidXRSceneMeshingComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bounding box for query\n" },
#endif
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/AndroidXRSceneMeshingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bounding box for query" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SemanticLabelSet_MetaData[] = {
		{ "Category", "AndroidXRSceneMeshingComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Semantic label for query\n" },
#endif
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/AndroidXRSceneMeshingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Semantic label for query" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableNormals_MetaData[] = {
		{ "Category", "AndroidXRSceneMeshingComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether or not query should include normals\n" },
#endif
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/AndroidXRSceneMeshingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether or not query should include normals" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxBricksPerFrame_MetaData[] = {
		{ "Category", "AndroidXRSceneMeshingComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If >0, limits the number of MR Mesh blocks generated per frame\n" },
#endif
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/AndroidXRSceneMeshingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If >0, limits the number of MR Mesh blocks generated per frame" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueSubmeshStates_MetaData[] = {
		{ "Category", "AndroidXRSceneMeshingComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Unique submesh states\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSceneMeshingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unique submesh states" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueSubmeshData_MetaData[] = {
		{ "Category", "AndroidXRSceneMeshingComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Unique submesh data\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSceneMeshingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unique submesh data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshingTracker_MetaData[] = {
		{ "Category", "AndroidXRSceneMeshingComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current tracker\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSceneMeshingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current tracker" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackingState_MetaData[] = {
		{ "Category", "AndroidXRSceneMeshingComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current tracking state (refreshed whenever a snapshot is taken)\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSceneMeshingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current tracking state (refreshed whenever a snapshot is taken)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ResultDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DeltaDelegate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SearchVolume;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SemanticLabelSet_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SemanticLabelSet;
	static void NewProp_bEnableNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableNormals;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxBricksPerFrame;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueSubmeshStates_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueSubmeshStates_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_UniqueSubmeshStates;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueSubmeshData_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueSubmeshData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_UniqueSubmeshData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshingTracker;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackingState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackingState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_ClearPublishedMeshHistory, "ClearPublishedMeshHistory" }, // 4192122272
		{ &Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_ClearUniqueSubmeshes, "ClearUniqueSubmeshes" }, // 1916476986
		{ &Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_ConnectMrMesh, "ConnectMrMesh" }, // 1504776104
		{ &Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_CreateTracker, "CreateTracker" }, // 3755603595
		{ &Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_DrawPublishedBrickBounds, "DrawPublishedBrickBounds" }, // 2838949015
		{ &Z_Construct_UFunction_UAndroidXRSceneMeshingComponent_RequestSubmeshes, "RequestSubmeshes" }, // 4293341557
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRSceneMeshingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::NewProp_ResultDelegate = { "ResultDelegate", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSceneMeshingComponent, ResultDelegate), Z_Construct_UDelegateFunction_AndroidXRSceneMeshing_AndroidXRWorldMeshDeltaDelegateMulticast__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultDelegate_MetaData), NewProp_ResultDelegate_MetaData) }; // 2774547249
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::NewProp_DeltaDelegate = { "DeltaDelegate", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSceneMeshingComponent, DeltaDelegate), Z_Construct_UDelegateFunction_AndroidXRSceneMeshing_AndroidXRWorldMeshDeltaDelegateMulticast__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaDelegate_MetaData), NewProp_DeltaDelegate_MetaData) }; // 2774547249
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::NewProp_SearchVolume = { "SearchVolume", nullptr, (EPropertyFlags)0x012508000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSceneMeshingComponent, SearchVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchVolume_MetaData), NewProp_SearchVolume_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::NewProp_SemanticLabelSet_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::NewProp_SemanticLabelSet = { "SemanticLabelSet", nullptr, (EPropertyFlags)0x0021080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSceneMeshingComponent, SemanticLabelSet), Z_Construct_UEnum_AndroidXR_EAndroidXRSceneMeshSemanticLabelSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SemanticLabelSet_MetaData), NewProp_SemanticLabelSet_MetaData) }; // 3108264534
void Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::NewProp_bEnableNormals_SetBit(void* Obj)
{
	((UAndroidXRSceneMeshingComponent*)Obj)->bEnableNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::NewProp_bEnableNormals = { "bEnableNormals", nullptr, (EPropertyFlags)0x0021080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAndroidXRSceneMeshingComponent), &Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::NewProp_bEnableNormals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableNormals_MetaData), NewProp_bEnableNormals_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::NewProp_MaxBricksPerFrame = { "MaxBricksPerFrame", nullptr, (EPropertyFlags)0x0021080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSceneMeshingComponent, MaxBricksPerFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxBricksPerFrame_MetaData), NewProp_MaxBricksPerFrame_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::NewProp_UniqueSubmeshStates_ValueProp = { "UniqueSubmeshStates", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshState, METADATA_PARAMS(0, nullptr) }; // 3691295063
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::NewProp_UniqueSubmeshStates_Key_KeyProp = { "UniqueSubmeshStates_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::NewProp_UniqueSubmeshStates = { "UniqueSubmeshStates", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSceneMeshingComponent, UniqueSubmeshStates), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueSubmeshStates_MetaData), NewProp_UniqueSubmeshStates_MetaData) }; // 3691295063
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::NewProp_UniqueSubmeshData_ValueProp = { "UniqueSubmeshData", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshData, METADATA_PARAMS(0, nullptr) }; // 2166744783
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::NewProp_UniqueSubmeshData_Key_KeyProp = { "UniqueSubmeshData_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::NewProp_UniqueSubmeshData = { "UniqueSubmeshData", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSceneMeshingComponent, UniqueSubmeshData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueSubmeshData_MetaData), NewProp_UniqueSubmeshData_MetaData) }; // 2166744783
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::NewProp_MeshingTracker = { "MeshingTracker", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSceneMeshingComponent, MeshingTracker), Z_Construct_UScriptStruct_FAndroidXRSceneMeshingTracker, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshingTracker_MetaData), NewProp_MeshingTracker_MetaData) }; // 1987802369
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::NewProp_TrackingState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::NewProp_TrackingState = { "TrackingState", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSceneMeshingComponent, TrackingState), Z_Construct_UEnum_AndroidXR_ESceneMeshTrackingState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackingState_MetaData), NewProp_TrackingState_MetaData) }; // 1507175967
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::NewProp_ResultDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::NewProp_DeltaDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::NewProp_SearchVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::NewProp_SemanticLabelSet_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::NewProp_SemanticLabelSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::NewProp_bEnableNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::NewProp_MaxBricksPerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::NewProp_UniqueSubmeshStates_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::NewProp_UniqueSubmeshStates_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::NewProp_UniqueSubmeshStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::NewProp_UniqueSubmeshData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::NewProp_UniqueSubmeshData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::NewProp_UniqueSubmeshData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::NewProp_MeshingTracker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::NewProp_TrackingState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::NewProp_TrackingState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRSceneMeshing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::ClassParams = {
	&UAndroidXRSceneMeshingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRSceneMeshingComponent()
{
	if (!Z_Registration_Info_UClass_UAndroidXRSceneMeshingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRSceneMeshingComponent.OuterSingleton, Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRSceneMeshingComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRSceneMeshingComponent);
UAndroidXRSceneMeshingComponent::~UAndroidXRSceneMeshingComponent() {}
// ********** End Class UAndroidXRSceneMeshingComponent ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSceneMeshing_Source_AndroidXRSceneMeshing_Public_AndroidXRSceneMeshingComponent_h__Script_AndroidXRSceneMeshing_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXRSceneMeshingComponent, UAndroidXRSceneMeshingComponent::StaticClass, TEXT("UAndroidXRSceneMeshingComponent"), &Z_Registration_Info_UClass_UAndroidXRSceneMeshingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRSceneMeshingComponent), 3306918466U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSceneMeshing_Source_AndroidXRSceneMeshing_Public_AndroidXRSceneMeshingComponent_h__Script_AndroidXRSceneMeshing_2915011778(TEXT("/Script/AndroidXRSceneMeshing"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSceneMeshing_Source_AndroidXRSceneMeshing_Public_AndroidXRSceneMeshingComponent_h__Script_AndroidXRSceneMeshing_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSceneMeshing_Source_AndroidXRSceneMeshing_Public_AndroidXRSceneMeshingComponent_h__Script_AndroidXRSceneMeshing_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
