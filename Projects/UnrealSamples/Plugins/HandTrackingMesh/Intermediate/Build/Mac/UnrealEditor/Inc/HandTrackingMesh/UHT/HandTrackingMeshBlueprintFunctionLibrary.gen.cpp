// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HandTrackingMeshBlueprintFunctionLibrary.h"
#include "Engine/SkeletalMesh.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHandTrackingMeshBlueprintFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
HANDTRACKINGMESH_API UClass* Z_Construct_UClass_UHandTrackingMeshBlueprintFunctionLibrary();
HANDTRACKINGMESH_API UClass* Z_Construct_UClass_UHandTrackingMeshBlueprintFunctionLibrary_NoRegister();
HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EHandKeypoint();
INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
UPackage* Z_Construct_UPackage__Script_HandTrackingMesh();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHandTrackingMeshBlueprintFunctionLibrary Function CreateHandMesh ********
struct Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_CreateHandMesh_Statics
{
	struct HandTrackingMeshBlueprintFunctionLibrary_eventCreateHandMesh_Parms
	{
		EControllerHand ControllerHand;
		UMaterialInterface* Material;
		USkeletalMesh* SkeletalMesh;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HandTrackingMesh|Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Creates a hand mesh for a specified hand.\n     * @param[in] ControllerHand Hand to mesh. EControllerHand::Right will use\n     * the right hand; anything else will use the left hand.\n     * @param[in] Material Material to use (Material must have 'Use with skeletal\n     * mesh' parameter set or it will not be visible).\n     * @param[out] SkeletalMesh The created mesh, if successful.\n     * @return True if the underlying API call was successful.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/HandTrackingMeshBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a hand mesh for a specified hand.\n@param[in] ControllerHand Hand to mesh. EControllerHand::Right will use\nthe right hand; anything else will use the left hand.\n@param[in] Material Material to use (Material must have 'Use with skeletal\nmesh' parameter set or it will not be visible).\n@param[out] SkeletalMesh The created mesh, if successful.\n@return True if the underlying API call was successful." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ControllerHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ControllerHand;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_CreateHandMesh_Statics::NewProp_ControllerHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_CreateHandMesh_Statics::NewProp_ControllerHand = { "ControllerHand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandTrackingMeshBlueprintFunctionLibrary_eventCreateHandMesh_Parms, ControllerHand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // 775183092
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_CreateHandMesh_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandTrackingMeshBlueprintFunctionLibrary_eventCreateHandMesh_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_CreateHandMesh_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandTrackingMeshBlueprintFunctionLibrary_eventCreateHandMesh_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_CreateHandMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HandTrackingMeshBlueprintFunctionLibrary_eventCreateHandMesh_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_CreateHandMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HandTrackingMeshBlueprintFunctionLibrary_eventCreateHandMesh_Parms), &Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_CreateHandMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_CreateHandMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_CreateHandMesh_Statics::NewProp_ControllerHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_CreateHandMesh_Statics::NewProp_ControllerHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_CreateHandMesh_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_CreateHandMesh_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_CreateHandMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_CreateHandMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_CreateHandMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHandTrackingMeshBlueprintFunctionLibrary, nullptr, "CreateHandMesh", Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_CreateHandMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_CreateHandMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_CreateHandMesh_Statics::HandTrackingMeshBlueprintFunctionLibrary_eventCreateHandMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_CreateHandMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_CreateHandMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_CreateHandMesh_Statics::HandTrackingMeshBlueprintFunctionLibrary_eventCreateHandMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_CreateHandMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_CreateHandMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHandTrackingMeshBlueprintFunctionLibrary::execCreateHandMesh)
{
	P_GET_ENUM(EControllerHand,Z_Param_ControllerHand);
	P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
	P_GET_OBJECT_REF(USkeletalMesh,Z_Param_Out_SkeletalMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UHandTrackingMeshBlueprintFunctionLibrary::CreateHandMesh(EControllerHand(Z_Param_ControllerHand),Z_Param_Material,P_ARG_GC_BARRIER(Z_Param_Out_SkeletalMesh));
	P_NATIVE_END;
}
// ********** End Class UHandTrackingMeshBlueprintFunctionLibrary Function CreateHandMesh **********

// ********** Begin Class UHandTrackingMeshBlueprintFunctionLibrary Function GetBoneNameFromHandKeypoint 
struct Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetBoneNameFromHandKeypoint_Statics
{
	struct HandTrackingMeshBlueprintFunctionLibrary_eventGetBoneNameFromHandKeypoint_Parms
	{
		EHandKeypoint HandKeypoint;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HandTrackingMesh|Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Gets the hand mesh bone name from an EHandKeypoint value. Not all hand\n     * keypoints map to bones, so an empty FName may be returned.\n     * @param[in] HandKeypoint Keypoint for which the bone name is desired.\n     * @return Name of corresponding bone (may be empty if no bone matches).\n     */" },
#endif
		{ "ModuleRelativePath", "Public/HandTrackingMeshBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the hand mesh bone name from an EHandKeypoint value. Not all hand\nkeypoints map to bones, so an empty FName may be returned.\n@param[in] HandKeypoint Keypoint for which the bone name is desired.\n@return Name of corresponding bone (may be empty if no bone matches)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_HandKeypoint_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HandKeypoint;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetBoneNameFromHandKeypoint_Statics::NewProp_HandKeypoint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetBoneNameFromHandKeypoint_Statics::NewProp_HandKeypoint = { "HandKeypoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandTrackingMeshBlueprintFunctionLibrary_eventGetBoneNameFromHandKeypoint_Parms, HandKeypoint), Z_Construct_UEnum_HeadMountedDisplay_EHandKeypoint, METADATA_PARAMS(0, nullptr) }; // 3656641922
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetBoneNameFromHandKeypoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandTrackingMeshBlueprintFunctionLibrary_eventGetBoneNameFromHandKeypoint_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetBoneNameFromHandKeypoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetBoneNameFromHandKeypoint_Statics::NewProp_HandKeypoint_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetBoneNameFromHandKeypoint_Statics::NewProp_HandKeypoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetBoneNameFromHandKeypoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetBoneNameFromHandKeypoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetBoneNameFromHandKeypoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHandTrackingMeshBlueprintFunctionLibrary, nullptr, "GetBoneNameFromHandKeypoint", Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetBoneNameFromHandKeypoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetBoneNameFromHandKeypoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetBoneNameFromHandKeypoint_Statics::HandTrackingMeshBlueprintFunctionLibrary_eventGetBoneNameFromHandKeypoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetBoneNameFromHandKeypoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetBoneNameFromHandKeypoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetBoneNameFromHandKeypoint_Statics::HandTrackingMeshBlueprintFunctionLibrary_eventGetBoneNameFromHandKeypoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetBoneNameFromHandKeypoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetBoneNameFromHandKeypoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHandTrackingMeshBlueprintFunctionLibrary::execGetBoneNameFromHandKeypoint)
{
	P_GET_ENUM(EHandKeypoint,Z_Param_HandKeypoint);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=UHandTrackingMeshBlueprintFunctionLibrary::GetBoneNameFromHandKeypoint(EHandKeypoint(Z_Param_HandKeypoint));
	P_NATIVE_END;
}
// ********** End Class UHandTrackingMeshBlueprintFunctionLibrary Function GetBoneNameFromHandKeypoint 

// ********** Begin Class UHandTrackingMeshBlueprintFunctionLibrary Function GetJointTransforms ****
struct Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetJointTransforms_Statics
{
	struct HandTrackingMeshBlueprintFunctionLibrary_eventGetJointTransforms_Parms
	{
		EControllerHand ControllerHand;
		TArray<FTransform> JointTransforms;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HandTrackingMesh|Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Gets the transforms for the joints. Use EHandKeypoint enum for indexes\n     * into the resulting array.\n     * @param[in] ControllerHand Hand to retrieve. EControllerHand::Right will use\n     * the right hand; anything else will use the left hand.\n     * @param[out] JointTransforms An array transforms of size EHandKeypointCount\n     * transforms, if successful.\n     * @return True if the underlying API call was successful.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/HandTrackingMeshBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the transforms for the joints. Use EHandKeypoint enum for indexes\ninto the resulting array.\n@param[in] ControllerHand Hand to retrieve. EControllerHand::Right will use\nthe right hand; anything else will use the left hand.\n@param[out] JointTransforms An array transforms of size EHandKeypointCount\ntransforms, if successful.\n@return True if the underlying API call was successful." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ControllerHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ControllerHand;
	static const UECodeGen_Private::FStructPropertyParams NewProp_JointTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_JointTransforms;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetJointTransforms_Statics::NewProp_ControllerHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetJointTransforms_Statics::NewProp_ControllerHand = { "ControllerHand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandTrackingMeshBlueprintFunctionLibrary_eventGetJointTransforms_Parms, ControllerHand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // 775183092
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetJointTransforms_Statics::NewProp_JointTransforms_Inner = { "JointTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetJointTransforms_Statics::NewProp_JointTransforms = { "JointTransforms", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandTrackingMeshBlueprintFunctionLibrary_eventGetJointTransforms_Parms, JointTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetJointTransforms_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HandTrackingMeshBlueprintFunctionLibrary_eventGetJointTransforms_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetJointTransforms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HandTrackingMeshBlueprintFunctionLibrary_eventGetJointTransforms_Parms), &Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetJointTransforms_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetJointTransforms_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetJointTransforms_Statics::NewProp_ControllerHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetJointTransforms_Statics::NewProp_ControllerHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetJointTransforms_Statics::NewProp_JointTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetJointTransforms_Statics::NewProp_JointTransforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetJointTransforms_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetJointTransforms_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetJointTransforms_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHandTrackingMeshBlueprintFunctionLibrary, nullptr, "GetJointTransforms", Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetJointTransforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetJointTransforms_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetJointTransforms_Statics::HandTrackingMeshBlueprintFunctionLibrary_eventGetJointTransforms_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetJointTransforms_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetJointTransforms_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetJointTransforms_Statics::HandTrackingMeshBlueprintFunctionLibrary_eventGetJointTransforms_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetJointTransforms()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetJointTransforms_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHandTrackingMeshBlueprintFunctionLibrary::execGetJointTransforms)
{
	P_GET_ENUM(EControllerHand,Z_Param_ControllerHand);
	P_GET_TARRAY_REF(FTransform,Z_Param_Out_JointTransforms);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UHandTrackingMeshBlueprintFunctionLibrary::GetJointTransforms(EControllerHand(Z_Param_ControllerHand),Z_Param_Out_JointTransforms);
	P_NATIVE_END;
}
// ********** End Class UHandTrackingMeshBlueprintFunctionLibrary Function GetJointTransforms ******

// ********** Begin Class UHandTrackingMeshBlueprintFunctionLibrary Function SetHandMeshScale ******
struct Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_SetHandMeshScale_Statics
{
	struct HandTrackingMeshBlueprintFunctionLibrary_eventSetHandMeshScale_Parms
	{
		EControllerHand ControllerHand;
		float Scale;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HandTrackingMesh|Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Sets the hand mesh scale via OpenXR settings. Note that this scales bones\n     * in length but not in radius.\n     * @param[in] ControllerHand Hand to scale. EControllerHand::Right will use\n     * the right hand; anything else will use the left hand.\n     * @return True if the underlying API call was successful.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/HandTrackingMeshBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the hand mesh scale via OpenXR settings. Note that this scales bones\nin length but not in radius.\n@param[in] ControllerHand Hand to scale. EControllerHand::Right will use\nthe right hand; anything else will use the left hand.\n@return True if the underlying API call was successful." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ControllerHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ControllerHand;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_SetHandMeshScale_Statics::NewProp_ControllerHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_SetHandMeshScale_Statics::NewProp_ControllerHand = { "ControllerHand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandTrackingMeshBlueprintFunctionLibrary_eventSetHandMeshScale_Parms, ControllerHand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // 775183092
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_SetHandMeshScale_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandTrackingMeshBlueprintFunctionLibrary_eventSetHandMeshScale_Parms, Scale), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_SetHandMeshScale_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HandTrackingMeshBlueprintFunctionLibrary_eventSetHandMeshScale_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_SetHandMeshScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HandTrackingMeshBlueprintFunctionLibrary_eventSetHandMeshScale_Parms), &Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_SetHandMeshScale_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_SetHandMeshScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_SetHandMeshScale_Statics::NewProp_ControllerHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_SetHandMeshScale_Statics::NewProp_ControllerHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_SetHandMeshScale_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_SetHandMeshScale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_SetHandMeshScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_SetHandMeshScale_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHandTrackingMeshBlueprintFunctionLibrary, nullptr, "SetHandMeshScale", Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_SetHandMeshScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_SetHandMeshScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_SetHandMeshScale_Statics::HandTrackingMeshBlueprintFunctionLibrary_eventSetHandMeshScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_SetHandMeshScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_SetHandMeshScale_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_SetHandMeshScale_Statics::HandTrackingMeshBlueprintFunctionLibrary_eventSetHandMeshScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_SetHandMeshScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_SetHandMeshScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHandTrackingMeshBlueprintFunctionLibrary::execSetHandMeshScale)
{
	P_GET_ENUM(EControllerHand,Z_Param_ControllerHand);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UHandTrackingMeshBlueprintFunctionLibrary::SetHandMeshScale(EControllerHand(Z_Param_ControllerHand),Z_Param_Scale);
	P_NATIVE_END;
}
// ********** End Class UHandTrackingMeshBlueprintFunctionLibrary Function SetHandMeshScale ********

// ********** Begin Class UHandTrackingMeshBlueprintFunctionLibrary ********************************
void UHandTrackingMeshBlueprintFunctionLibrary::StaticRegisterNativesUHandTrackingMeshBlueprintFunctionLibrary()
{
	UClass* Class = UHandTrackingMeshBlueprintFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateHandMesh", &UHandTrackingMeshBlueprintFunctionLibrary::execCreateHandMesh },
		{ "GetBoneNameFromHandKeypoint", &UHandTrackingMeshBlueprintFunctionLibrary::execGetBoneNameFromHandKeypoint },
		{ "GetJointTransforms", &UHandTrackingMeshBlueprintFunctionLibrary::execGetJointTransforms },
		{ "SetHandMeshScale", &UHandTrackingMeshBlueprintFunctionLibrary::execSetHandMeshScale },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHandTrackingMeshBlueprintFunctionLibrary;
UClass* UHandTrackingMeshBlueprintFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UHandTrackingMeshBlueprintFunctionLibrary;
	if (!Z_Registration_Info_UClass_UHandTrackingMeshBlueprintFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HandTrackingMeshBlueprintFunctionLibrary"),
			Z_Registration_Info_UClass_UHandTrackingMeshBlueprintFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUHandTrackingMeshBlueprintFunctionLibrary,
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
	return Z_Registration_Info_UClass_UHandTrackingMeshBlueprintFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UHandTrackingMeshBlueprintFunctionLibrary_NoRegister()
{
	return UHandTrackingMeshBlueprintFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHandTrackingMeshBlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "HandTrackingMesh" },
		{ "IncludePath", "HandTrackingMeshBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/HandTrackingMeshBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_CreateHandMesh, "CreateHandMesh" }, // 3005160353
		{ &Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetBoneNameFromHandKeypoint, "GetBoneNameFromHandKeypoint" }, // 33220761
		{ &Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_GetJointTransforms, "GetJointTransforms" }, // 2014951613
		{ &Z_Construct_UFunction_UHandTrackingMeshBlueprintFunctionLibrary_SetHandMeshScale, "SetHandMeshScale" }, // 3678098848
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHandTrackingMeshBlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHandTrackingMeshBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_HandTrackingMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHandTrackingMeshBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHandTrackingMeshBlueprintFunctionLibrary_Statics::ClassParams = {
	&UHandTrackingMeshBlueprintFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHandTrackingMeshBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UHandTrackingMeshBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHandTrackingMeshBlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UHandTrackingMeshBlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHandTrackingMeshBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UHandTrackingMeshBlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHandTrackingMeshBlueprintFunctionLibrary.OuterSingleton;
}
UHandTrackingMeshBlueprintFunctionLibrary::UHandTrackingMeshBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHandTrackingMeshBlueprintFunctionLibrary);
UHandTrackingMeshBlueprintFunctionLibrary::~UHandTrackingMeshBlueprintFunctionLibrary() {}
// ********** End Class UHandTrackingMeshBlueprintFunctionLibrary **********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_HandTrackingMesh_Source_HandTrackingMesh_Public_HandTrackingMeshBlueprintFunctionLibrary_h__Script_HandTrackingMesh_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHandTrackingMeshBlueprintFunctionLibrary, UHandTrackingMeshBlueprintFunctionLibrary::StaticClass, TEXT("UHandTrackingMeshBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UHandTrackingMeshBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHandTrackingMeshBlueprintFunctionLibrary), 3561446334U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_HandTrackingMesh_Source_HandTrackingMesh_Public_HandTrackingMeshBlueprintFunctionLibrary_h__Script_HandTrackingMesh_2900149191(TEXT("/Script/HandTrackingMesh"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_HandTrackingMesh_Source_HandTrackingMesh_Public_HandTrackingMeshBlueprintFunctionLibrary_h__Script_HandTrackingMesh_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_HandTrackingMesh_Source_HandTrackingMesh_Public_HandTrackingMeshBlueprintFunctionLibrary_h__Script_HandTrackingMesh_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
