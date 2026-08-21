// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HandInteractionBlueprintFunctionLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHandInteractionBlueprintFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXR_API UEnum* Z_Construct_UEnum_AndroidXR_EOpenXRHandInteractionType();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
HANDINTERACTION_API UClass* Z_Construct_UClass_UHandInteractionBlueprintFunctionLibrary();
HANDINTERACTION_API UClass* Z_Construct_UClass_UHandInteractionBlueprintFunctionLibrary_NoRegister();
INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
UPackage* Z_Construct_UPackage__Script_HandInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHandInteractionBlueprintFunctionLibrary Function GetInteractionPose *****
struct Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionPose_Statics
{
	struct HandInteractionBlueprintFunctionLibrary_eventGetInteractionPose_Parms
	{
		EControllerHand Hand;
		EOpenXRHandInteractionType InteractionType;
		FTransform InteractionPose;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HandInteraction|Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Gets an interaction's current pose transform.\n     * @param[in] Hand  Hand to retrieve. EControllerHand::Right will use\n     * the right hand; anything else will use the left hand.\n     * @param[in] InteractionType Interaction to query.\n     * @param[out] InteractionPose The current pose transform.\n     * @return True if the underlying API call was successful.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/HandInteractionBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets an interaction's current pose transform.\n@param[in] Hand  Hand to retrieve. EControllerHand::Right will use\nthe right hand; anything else will use the left hand.\n@param[in] InteractionType Interaction to query.\n@param[out] InteractionPose The current pose transform.\n@return True if the underlying API call was successful." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InteractionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InteractionType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionPose;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionPose_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionPose_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandInteractionBlueprintFunctionLibrary_eventGetInteractionPose_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // 775183092
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionPose_Statics::NewProp_InteractionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionPose_Statics::NewProp_InteractionType = { "InteractionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandInteractionBlueprintFunctionLibrary_eventGetInteractionPose_Parms, InteractionType), Z_Construct_UEnum_AndroidXR_EOpenXRHandInteractionType, METADATA_PARAMS(0, nullptr) }; // 1815545537
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionPose_Statics::NewProp_InteractionPose = { "InteractionPose", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandInteractionBlueprintFunctionLibrary_eventGetInteractionPose_Parms, InteractionPose), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionPose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HandInteractionBlueprintFunctionLibrary_eventGetInteractionPose_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HandInteractionBlueprintFunctionLibrary_eventGetInteractionPose_Parms), &Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionPose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionPose_Statics::NewProp_Hand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionPose_Statics::NewProp_Hand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionPose_Statics::NewProp_InteractionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionPose_Statics::NewProp_InteractionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionPose_Statics::NewProp_InteractionPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionPose_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionPose_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHandInteractionBlueprintFunctionLibrary, nullptr, "GetInteractionPose", Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionPose_Statics::HandInteractionBlueprintFunctionLibrary_eventGetInteractionPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionPose_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionPose_Statics::HandInteractionBlueprintFunctionLibrary_eventGetInteractionPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHandInteractionBlueprintFunctionLibrary::execGetInteractionPose)
{
	P_GET_ENUM(EControllerHand,Z_Param_Hand);
	P_GET_ENUM(EOpenXRHandInteractionType,Z_Param_InteractionType);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_InteractionPose);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UHandInteractionBlueprintFunctionLibrary::GetInteractionPose(EControllerHand(Z_Param_Hand),EOpenXRHandInteractionType(Z_Param_InteractionType),Z_Param_Out_InteractionPose);
	P_NATIVE_END;
}
// ********** End Class UHandInteractionBlueprintFunctionLibrary Function GetInteractionPose *******

// ********** Begin Class UHandInteractionBlueprintFunctionLibrary Function GetInteractionReady ****
struct Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionReady_Statics
{
	struct HandInteractionBlueprintFunctionLibrary_eventGetInteractionReady_Parms
	{
		EControllerHand Hand;
		EOpenXRHandInteractionType InteractionType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HandInteraction|Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Gets the ready state of an interaction.\n     * @param[in] Hand  Hand to retrieve. EControllerHand::Right will use\n     * the right hand; anything else will use the left hand.\n     * @param[in] InteractionType The desired interaction.\n     * @return True if the underlying API call was successful and the interaction is ready.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/HandInteractionBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the ready state of an interaction.\n@param[in] Hand  Hand to retrieve. EControllerHand::Right will use\nthe right hand; anything else will use the left hand.\n@param[in] InteractionType The desired interaction.\n@return True if the underlying API call was successful and the interaction is ready." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InteractionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InteractionType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionReady_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionReady_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandInteractionBlueprintFunctionLibrary_eventGetInteractionReady_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // 775183092
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionReady_Statics::NewProp_InteractionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionReady_Statics::NewProp_InteractionType = { "InteractionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandInteractionBlueprintFunctionLibrary_eventGetInteractionReady_Parms, InteractionType), Z_Construct_UEnum_AndroidXR_EOpenXRHandInteractionType, METADATA_PARAMS(0, nullptr) }; // 1815545537
void Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HandInteractionBlueprintFunctionLibrary_eventGetInteractionReady_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HandInteractionBlueprintFunctionLibrary_eventGetInteractionReady_Parms), &Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionReady_Statics::NewProp_Hand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionReady_Statics::NewProp_Hand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionReady_Statics::NewProp_InteractionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionReady_Statics::NewProp_InteractionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionReady_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionReady_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHandInteractionBlueprintFunctionLibrary, nullptr, "GetInteractionReady", Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionReady_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionReady_Statics::HandInteractionBlueprintFunctionLibrary_eventGetInteractionReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionReady_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionReady_Statics::HandInteractionBlueprintFunctionLibrary_eventGetInteractionReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHandInteractionBlueprintFunctionLibrary::execGetInteractionReady)
{
	P_GET_ENUM(EControllerHand,Z_Param_Hand);
	P_GET_ENUM(EOpenXRHandInteractionType,Z_Param_InteractionType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UHandInteractionBlueprintFunctionLibrary::GetInteractionReady(EControllerHand(Z_Param_Hand),EOpenXRHandInteractionType(Z_Param_InteractionType));
	P_NATIVE_END;
}
// ********** End Class UHandInteractionBlueprintFunctionLibrary Function GetInteractionReady ******

// ********** Begin Class UHandInteractionBlueprintFunctionLibrary Function GetInteractionValue ****
struct Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionValue_Statics
{
	struct HandInteractionBlueprintFunctionLibrary_eventGetInteractionValue_Parms
	{
		EControllerHand Hand;
		EOpenXRHandInteractionType InteractionType;
		float InteractionValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HandInteraction|Function Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Gets an interaction's current float value.\n     * @param[in] Hand  Hand to retrieve. EControllerHand::Right will use\n     * the right hand; anything else will use the left hand.\n     * @param[in] InteractionType The desired interaction.\n     * @param[out] InteractionValue The current value.\n     * @return True if the underlying API call was successful.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/HandInteractionBlueprintFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets an interaction's current float value.\n@param[in] Hand  Hand to retrieve. EControllerHand::Right will use\nthe right hand; anything else will use the left hand.\n@param[in] InteractionType The desired interaction.\n@param[out] InteractionValue The current value.\n@return True if the underlying API call was successful." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InteractionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InteractionType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionValue_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionValue_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandInteractionBlueprintFunctionLibrary_eventGetInteractionValue_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // 775183092
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionValue_Statics::NewProp_InteractionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionValue_Statics::NewProp_InteractionType = { "InteractionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandInteractionBlueprintFunctionLibrary_eventGetInteractionValue_Parms, InteractionType), Z_Construct_UEnum_AndroidXR_EOpenXRHandInteractionType, METADATA_PARAMS(0, nullptr) }; // 1815545537
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionValue_Statics::NewProp_InteractionValue = { "InteractionValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandInteractionBlueprintFunctionLibrary_eventGetInteractionValue_Parms, InteractionValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HandInteractionBlueprintFunctionLibrary_eventGetInteractionValue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HandInteractionBlueprintFunctionLibrary_eventGetInteractionValue_Parms), &Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionValue_Statics::NewProp_Hand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionValue_Statics::NewProp_Hand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionValue_Statics::NewProp_InteractionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionValue_Statics::NewProp_InteractionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionValue_Statics::NewProp_InteractionValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHandInteractionBlueprintFunctionLibrary, nullptr, "GetInteractionValue", Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionValue_Statics::HandInteractionBlueprintFunctionLibrary_eventGetInteractionValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionValue_Statics::HandInteractionBlueprintFunctionLibrary_eventGetInteractionValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHandInteractionBlueprintFunctionLibrary::execGetInteractionValue)
{
	P_GET_ENUM(EControllerHand,Z_Param_Hand);
	P_GET_ENUM(EOpenXRHandInteractionType,Z_Param_InteractionType);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_InteractionValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UHandInteractionBlueprintFunctionLibrary::GetInteractionValue(EControllerHand(Z_Param_Hand),EOpenXRHandInteractionType(Z_Param_InteractionType),Z_Param_Out_InteractionValue);
	P_NATIVE_END;
}
// ********** End Class UHandInteractionBlueprintFunctionLibrary Function GetInteractionValue ******

// ********** Begin Class UHandInteractionBlueprintFunctionLibrary *********************************
void UHandInteractionBlueprintFunctionLibrary::StaticRegisterNativesUHandInteractionBlueprintFunctionLibrary()
{
	UClass* Class = UHandInteractionBlueprintFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInteractionPose", &UHandInteractionBlueprintFunctionLibrary::execGetInteractionPose },
		{ "GetInteractionReady", &UHandInteractionBlueprintFunctionLibrary::execGetInteractionReady },
		{ "GetInteractionValue", &UHandInteractionBlueprintFunctionLibrary::execGetInteractionValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHandInteractionBlueprintFunctionLibrary;
UClass* UHandInteractionBlueprintFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UHandInteractionBlueprintFunctionLibrary;
	if (!Z_Registration_Info_UClass_UHandInteractionBlueprintFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HandInteractionBlueprintFunctionLibrary"),
			Z_Registration_Info_UClass_UHandInteractionBlueprintFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUHandInteractionBlueprintFunctionLibrary,
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
	return Z_Registration_Info_UClass_UHandInteractionBlueprintFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UHandInteractionBlueprintFunctionLibrary_NoRegister()
{
	return UHandInteractionBlueprintFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHandInteractionBlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "HandInteraction" },
		{ "IncludePath", "HandInteractionBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/HandInteractionBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionPose, "GetInteractionPose" }, // 4170031205
		{ &Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionReady, "GetInteractionReady" }, // 1911413985
		{ &Z_Construct_UFunction_UHandInteractionBlueprintFunctionLibrary_GetInteractionValue, "GetInteractionValue" }, // 1386669260
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHandInteractionBlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHandInteractionBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_HandInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHandInteractionBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHandInteractionBlueprintFunctionLibrary_Statics::ClassParams = {
	&UHandInteractionBlueprintFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHandInteractionBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UHandInteractionBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHandInteractionBlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UHandInteractionBlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHandInteractionBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UHandInteractionBlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHandInteractionBlueprintFunctionLibrary.OuterSingleton;
}
UHandInteractionBlueprintFunctionLibrary::UHandInteractionBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHandInteractionBlueprintFunctionLibrary);
UHandInteractionBlueprintFunctionLibrary::~UHandInteractionBlueprintFunctionLibrary() {}
// ********** End Class UHandInteractionBlueprintFunctionLibrary ***********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_HandInteraction_Source_HandInteraction_Public_HandInteractionBlueprintFunctionLibrary_h__Script_HandInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHandInteractionBlueprintFunctionLibrary, UHandInteractionBlueprintFunctionLibrary::StaticClass, TEXT("UHandInteractionBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UHandInteractionBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHandInteractionBlueprintFunctionLibrary), 1992993732U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_HandInteraction_Source_HandInteraction_Public_HandInteractionBlueprintFunctionLibrary_h__Script_HandInteraction_549393938(TEXT("/Script/HandInteraction"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_HandInteraction_Source_HandInteraction_Public_HandInteractionBlueprintFunctionLibrary_h__Script_HandInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_HandInteraction_Source_HandInteraction_Public_HandInteractionBlueprintFunctionLibrary_h__Script_HandInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
