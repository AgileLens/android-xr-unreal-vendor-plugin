// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRSpatialAnchorsComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRSpatialAnchorsComponent() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXRSPATIALANCHORS_API UClass* Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_NoRegister();
ANDROIDXRSPATIALANCHORS_API UClass* Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent();
ANDROIDXRSPATIALANCHORS_API UClass* Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent_NoRegister();
ANDROIDXRSPATIALANCHORS_API UEnum* Z_Construct_UEnum_AndroidXRSpatialAnchors_ESpatialAnchorPeristenceResult();
ANDROIDXRSPATIALANCHORS_API UFunction* Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationFailedDelegate__DelegateSignature();
ANDROIDXRSPATIALANCHORS_API UFunction* Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_SpatialAnchorPersistedDelegate__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
UPackage* Z_Construct_UPackage__Script_AndroidXRSpatialAnchors();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FSpatialAnchorPersistedDelegate ***************************************
struct Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_SpatialAnchorPersistedDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_SpatialAnchorPersistedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AndroidXRSpatialAnchors, nullptr, "SpatialAnchorPersistedDelegate__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_SpatialAnchorPersistedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_SpatialAnchorPersistedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_SpatialAnchorPersistedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_SpatialAnchorPersistedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSpatialAnchorPersistedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpatialAnchorPersistedDelegate)
{
	SpatialAnchorPersistedDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FSpatialAnchorPersistedDelegate *****************************************

// ********** Begin Class UAndroidXRSpatialAnchorsComponent Function AnchorPersistedHandler ********
struct Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_AnchorPersistedHandler_Statics
{
	struct AndroidXRSpatialAnchorsComponent_eventAnchorPersistedHandler_Parms
	{
		UAndroidXRSpatialAnchorEntity* Anchor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Anchor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_AnchorPersistedHandler_Statics::NewProp_Anchor = { "Anchor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRSpatialAnchorsComponent_eventAnchorPersistedHandler_Parms, Anchor), Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_AnchorPersistedHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_AnchorPersistedHandler_Statics::NewProp_Anchor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_AnchorPersistedHandler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_AnchorPersistedHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent, nullptr, "AnchorPersistedHandler", Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_AnchorPersistedHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_AnchorPersistedHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_AnchorPersistedHandler_Statics::AndroidXRSpatialAnchorsComponent_eventAnchorPersistedHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_AnchorPersistedHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_AnchorPersistedHandler_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_AnchorPersistedHandler_Statics::AndroidXRSpatialAnchorsComponent_eventAnchorPersistedHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_AnchorPersistedHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_AnchorPersistedHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSpatialAnchorsComponent::execAnchorPersistedHandler)
{
	P_GET_OBJECT(UAndroidXRSpatialAnchorEntity,Z_Param_Anchor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AnchorPersistedHandler(Z_Param_Anchor);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSpatialAnchorsComponent Function AnchorPersistedHandler **********

// ********** Begin Class UAndroidXRSpatialAnchorsComponent Function AnchorUnpersistedHandler ******
struct Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_AnchorUnpersistedHandler_Statics
{
	struct AndroidXRSpatialAnchorsComponent_eventAnchorUnpersistedHandler_Parms
	{
		UAndroidXRSpatialAnchorEntity* Anchor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Anchor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_AnchorUnpersistedHandler_Statics::NewProp_Anchor = { "Anchor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRSpatialAnchorsComponent_eventAnchorUnpersistedHandler_Parms, Anchor), Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_AnchorUnpersistedHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_AnchorUnpersistedHandler_Statics::NewProp_Anchor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_AnchorUnpersistedHandler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_AnchorUnpersistedHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent, nullptr, "AnchorUnpersistedHandler", Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_AnchorUnpersistedHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_AnchorUnpersistedHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_AnchorUnpersistedHandler_Statics::AndroidXRSpatialAnchorsComponent_eventAnchorUnpersistedHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_AnchorUnpersistedHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_AnchorUnpersistedHandler_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_AnchorUnpersistedHandler_Statics::AndroidXRSpatialAnchorsComponent_eventAnchorUnpersistedHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_AnchorUnpersistedHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_AnchorUnpersistedHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSpatialAnchorsComponent::execAnchorUnpersistedHandler)
{
	P_GET_OBJECT(UAndroidXRSpatialAnchorEntity,Z_Param_Anchor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AnchorUnpersistedHandler(Z_Param_Anchor);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSpatialAnchorsComponent Function AnchorUnpersistedHandler ********

// ********** Begin Class UAndroidXRSpatialAnchorsComponent Function CreateAnchor ******************
struct Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_CreateAnchor_Statics
{
	struct AndroidXRSpatialAnchorsComponent_eventCreateAnchor_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Create an anchor and associate it with this component\n\x09* @return Whether the anchor was created\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create an anchor and associate it with this component\n@return Whether the anchor was created" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_CreateAnchor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRSpatialAnchorsComponent_eventCreateAnchor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_CreateAnchor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRSpatialAnchorsComponent_eventCreateAnchor_Parms), &Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_CreateAnchor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_CreateAnchor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_CreateAnchor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_CreateAnchor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_CreateAnchor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent, nullptr, "CreateAnchor", Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_CreateAnchor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_CreateAnchor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_CreateAnchor_Statics::AndroidXRSpatialAnchorsComponent_eventCreateAnchor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_CreateAnchor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_CreateAnchor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_CreateAnchor_Statics::AndroidXRSpatialAnchorsComponent_eventCreateAnchor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_CreateAnchor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_CreateAnchor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSpatialAnchorsComponent::execCreateAnchor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CreateAnchor();
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSpatialAnchorsComponent Function CreateAnchor ********************

// ********** Begin Class UAndroidXRSpatialAnchorsComponent Function DestroyAnchor *****************
struct Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_DestroyAnchor_Statics
{
	struct AndroidXRSpatialAnchorsComponent_eventDestroyAnchor_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Destroys the anchor associated it with this component\n\x09* @return Whether the anchor was destroyed\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Destroys the anchor associated it with this component\n@return Whether the anchor was destroyed" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_DestroyAnchor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRSpatialAnchorsComponent_eventDestroyAnchor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_DestroyAnchor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRSpatialAnchorsComponent_eventDestroyAnchor_Parms), &Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_DestroyAnchor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_DestroyAnchor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_DestroyAnchor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_DestroyAnchor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_DestroyAnchor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent, nullptr, "DestroyAnchor", Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_DestroyAnchor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_DestroyAnchor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_DestroyAnchor_Statics::AndroidXRSpatialAnchorsComponent_eventDestroyAnchor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_DestroyAnchor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_DestroyAnchor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_DestroyAnchor_Statics::AndroidXRSpatialAnchorsComponent_eventDestroyAnchor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_DestroyAnchor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_DestroyAnchor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSpatialAnchorsComponent::execDestroyAnchor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DestroyAnchor();
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSpatialAnchorsComponent Function DestroyAnchor *******************

// ********** Begin Class UAndroidXRSpatialAnchorsComponent Function Initialize ********************
struct Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_Initialize_Statics
{
	struct AndroidXRSpatialAnchorsComponent_eventInitialize_Parms
	{
		UAndroidXRSpatialAnchorEntity* InAnchor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Spatial Anchors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Set the associated anchor entity for this component (for example, after loading persisted anchors)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the associated anchor entity for this component (for example, after loading persisted anchors)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnchor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_Initialize_Statics::NewProp_InAnchor = { "InAnchor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRSpatialAnchorsComponent_eventInitialize_Parms, InAnchor), Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_Initialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_Initialize_Statics::NewProp_InAnchor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_Initialize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_Initialize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent, nullptr, "Initialize", Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_Initialize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_Initialize_Statics::AndroidXRSpatialAnchorsComponent_eventInitialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_Initialize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_Initialize_Statics::AndroidXRSpatialAnchorsComponent_eventInitialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSpatialAnchorsComponent::execInitialize)
{
	P_GET_OBJECT(UAndroidXRSpatialAnchorEntity,Z_Param_InAnchor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialize(Z_Param_InAnchor);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSpatialAnchorsComponent Function Initialize **********************

// ********** Begin Class UAndroidXRSpatialAnchorsComponent Function IsValidAnchor *****************
struct Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_IsValidAnchor_Statics
{
	struct AndroidXRSpatialAnchorsComponent_eventIsValidAnchor_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Returns whether the component has an anchor associated with it\n\x09* @return Whether the component has an anchor associated with it\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether the component has an anchor associated with it\n@return Whether the component has an anchor associated with it" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_IsValidAnchor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRSpatialAnchorsComponent_eventIsValidAnchor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_IsValidAnchor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRSpatialAnchorsComponent_eventIsValidAnchor_Parms), &Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_IsValidAnchor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_IsValidAnchor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_IsValidAnchor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_IsValidAnchor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_IsValidAnchor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent, nullptr, "IsValidAnchor", Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_IsValidAnchor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_IsValidAnchor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_IsValidAnchor_Statics::AndroidXRSpatialAnchorsComponent_eventIsValidAnchor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_IsValidAnchor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_IsValidAnchor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_IsValidAnchor_Statics::AndroidXRSpatialAnchorsComponent_eventIsValidAnchor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_IsValidAnchor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_IsValidAnchor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSpatialAnchorsComponent::execIsValidAnchor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValidAnchor();
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSpatialAnchorsComponent Function IsValidAnchor *******************

// ********** Begin Class UAndroidXRSpatialAnchorsComponent Function PersistAnchor *****************
struct Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_PersistAnchor_Statics
{
	struct AndroidXRSpatialAnchorsComponent_eventPersistAnchor_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Persist the anchor associated with this component\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Persist the anchor associated with this component" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_PersistAnchor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRSpatialAnchorsComponent_eventPersistAnchor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_PersistAnchor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRSpatialAnchorsComponent_eventPersistAnchor_Parms), &Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_PersistAnchor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_PersistAnchor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_PersistAnchor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_PersistAnchor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_PersistAnchor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent, nullptr, "PersistAnchor", Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_PersistAnchor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_PersistAnchor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_PersistAnchor_Statics::AndroidXRSpatialAnchorsComponent_eventPersistAnchor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_PersistAnchor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_PersistAnchor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_PersistAnchor_Statics::AndroidXRSpatialAnchorsComponent_eventPersistAnchor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_PersistAnchor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_PersistAnchor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSpatialAnchorsComponent::execPersistAnchor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PersistAnchor();
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSpatialAnchorsComponent Function PersistAnchor *******************

// ********** Begin Class UAndroidXRSpatialAnchorsComponent Function PersistFailedHandler **********
struct Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_PersistFailedHandler_Statics
{
	struct AndroidXRSpatialAnchorsComponent_eventPersistFailedHandler_Parms
	{
		ESpatialAnchorPeristenceResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_PersistFailedHandler_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_PersistFailedHandler_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRSpatialAnchorsComponent_eventPersistFailedHandler_Parms, Result), Z_Construct_UEnum_AndroidXRSpatialAnchors_ESpatialAnchorPeristenceResult, METADATA_PARAMS(0, nullptr) }; // 2812280769
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_PersistFailedHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_PersistFailedHandler_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_PersistFailedHandler_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_PersistFailedHandler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_PersistFailedHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent, nullptr, "PersistFailedHandler", Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_PersistFailedHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_PersistFailedHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_PersistFailedHandler_Statics::AndroidXRSpatialAnchorsComponent_eventPersistFailedHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_PersistFailedHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_PersistFailedHandler_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_PersistFailedHandler_Statics::AndroidXRSpatialAnchorsComponent_eventPersistFailedHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_PersistFailedHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_PersistFailedHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSpatialAnchorsComponent::execPersistFailedHandler)
{
	P_GET_ENUM(ESpatialAnchorPeristenceResult,Z_Param_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PersistFailedHandler(ESpatialAnchorPeristenceResult(Z_Param_Result));
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSpatialAnchorsComponent Function PersistFailedHandler ************

// ********** Begin Class UAndroidXRSpatialAnchorsComponent Function UnpersistAnchor ***************
struct Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_UnpersistAnchor_Statics
{
	struct AndroidXRSpatialAnchorsComponent_eventUnpersistAnchor_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Unpersist the anchor associated with this component\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unpersist the anchor associated with this component" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_UnpersistAnchor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRSpatialAnchorsComponent_eventUnpersistAnchor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_UnpersistAnchor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRSpatialAnchorsComponent_eventUnpersistAnchor_Parms), &Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_UnpersistAnchor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_UnpersistAnchor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_UnpersistAnchor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_UnpersistAnchor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_UnpersistAnchor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent, nullptr, "UnpersistAnchor", Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_UnpersistAnchor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_UnpersistAnchor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_UnpersistAnchor_Statics::AndroidXRSpatialAnchorsComponent_eventUnpersistAnchor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_UnpersistAnchor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_UnpersistAnchor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_UnpersistAnchor_Statics::AndroidXRSpatialAnchorsComponent_eventUnpersistAnchor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_UnpersistAnchor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_UnpersistAnchor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSpatialAnchorsComponent::execUnpersistAnchor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UnpersistAnchor();
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSpatialAnchorsComponent Function UnpersistAnchor *****************

// ********** Begin Class UAndroidXRSpatialAnchorsComponent Function UnpersistFailedHandler ********
struct Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_UnpersistFailedHandler_Statics
{
	struct AndroidXRSpatialAnchorsComponent_eventUnpersistFailedHandler_Parms
	{
		ESpatialAnchorPeristenceResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_UnpersistFailedHandler_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_UnpersistFailedHandler_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRSpatialAnchorsComponent_eventUnpersistFailedHandler_Parms, Result), Z_Construct_UEnum_AndroidXRSpatialAnchors_ESpatialAnchorPeristenceResult, METADATA_PARAMS(0, nullptr) }; // 2812280769
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_UnpersistFailedHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_UnpersistFailedHandler_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_UnpersistFailedHandler_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_UnpersistFailedHandler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_UnpersistFailedHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent, nullptr, "UnpersistFailedHandler", Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_UnpersistFailedHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_UnpersistFailedHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_UnpersistFailedHandler_Statics::AndroidXRSpatialAnchorsComponent_eventUnpersistFailedHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_UnpersistFailedHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_UnpersistFailedHandler_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_UnpersistFailedHandler_Statics::AndroidXRSpatialAnchorsComponent_eventUnpersistFailedHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_UnpersistFailedHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_UnpersistFailedHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSpatialAnchorsComponent::execUnpersistFailedHandler)
{
	P_GET_ENUM(ESpatialAnchorPeristenceResult,Z_Param_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnpersistFailedHandler(ESpatialAnchorPeristenceResult(Z_Param_Result));
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSpatialAnchorsComponent Function UnpersistFailedHandler **********

// ********** Begin Class UAndroidXRSpatialAnchorsComponent ****************************************
void UAndroidXRSpatialAnchorsComponent::StaticRegisterNativesUAndroidXRSpatialAnchorsComponent()
{
	UClass* Class = UAndroidXRSpatialAnchorsComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AnchorPersistedHandler", &UAndroidXRSpatialAnchorsComponent::execAnchorPersistedHandler },
		{ "AnchorUnpersistedHandler", &UAndroidXRSpatialAnchorsComponent::execAnchorUnpersistedHandler },
		{ "CreateAnchor", &UAndroidXRSpatialAnchorsComponent::execCreateAnchor },
		{ "DestroyAnchor", &UAndroidXRSpatialAnchorsComponent::execDestroyAnchor },
		{ "Initialize", &UAndroidXRSpatialAnchorsComponent::execInitialize },
		{ "IsValidAnchor", &UAndroidXRSpatialAnchorsComponent::execIsValidAnchor },
		{ "PersistAnchor", &UAndroidXRSpatialAnchorsComponent::execPersistAnchor },
		{ "PersistFailedHandler", &UAndroidXRSpatialAnchorsComponent::execPersistFailedHandler },
		{ "UnpersistAnchor", &UAndroidXRSpatialAnchorsComponent::execUnpersistAnchor },
		{ "UnpersistFailedHandler", &UAndroidXRSpatialAnchorsComponent::execUnpersistFailedHandler },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRSpatialAnchorsComponent;
UClass* UAndroidXRSpatialAnchorsComponent::GetPrivateStaticClass()
{
	using TClass = UAndroidXRSpatialAnchorsComponent;
	if (!Z_Registration_Info_UClass_UAndroidXRSpatialAnchorsComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRSpatialAnchorsComponent"),
			Z_Registration_Info_UClass_UAndroidXRSpatialAnchorsComponent.InnerSingleton,
			StaticRegisterNativesUAndroidXRSpatialAnchorsComponent,
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
	return Z_Registration_Info_UClass_UAndroidXRSpatialAnchorsComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent_NoRegister()
{
	return UAndroidXRSpatialAnchorsComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* The anchor component that can be added to create, destroy, and persist an anchor\n*\n*/" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "AndroidXRSpatialAnchorsComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The anchor component that can be added to create, destroy, and persist an anchor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateComponentTransform_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Anchors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Whether to update the component transform with the tracked anchor's transform\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to update the component transform with the tracked anchor's transform" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorInfo_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Anchors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The associated anchor entity with this component. This can be set through Initialize or will be set by calling CreateAnchor\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The associated anchor entity with this component. This can be set through Initialize or will be set by calling CreateAnchor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnchorPersisted_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Anchors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The callback for when the anchor associated with this component is persisted\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The callback for when the anchor associated with this component is persisted" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnchorPersistFailed_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Anchors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The callback for when the persist operation associated with this component fails\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The callback for when the persist operation associated with this component fails" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnchorUnpersisted_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Anchors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The callback for when the anchor associated with this component is unpersisted\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The callback for when the anchor associated with this component is unpersisted" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnchorUnpersistFailed_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Anchors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The callback for when the unpersist operation fails\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The callback for when the unpersist operation fails" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bUpdateComponentTransform_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateComponentTransform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnchorInfo;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnchorPersisted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnchorPersistFailed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnchorUnpersisted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnchorUnpersistFailed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_AnchorPersistedHandler, "AnchorPersistedHandler" }, // 2406204263
		{ &Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_AnchorUnpersistedHandler, "AnchorUnpersistedHandler" }, // 2360806987
		{ &Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_CreateAnchor, "CreateAnchor" }, // 831767835
		{ &Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_DestroyAnchor, "DestroyAnchor" }, // 3824168305
		{ &Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_Initialize, "Initialize" }, // 3244942077
		{ &Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_IsValidAnchor, "IsValidAnchor" }, // 2636577621
		{ &Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_PersistAnchor, "PersistAnchor" }, // 2798142570
		{ &Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_PersistFailedHandler, "PersistFailedHandler" }, // 1444896466
		{ &Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_UnpersistAnchor, "UnpersistAnchor" }, // 3156466981
		{ &Z_Construct_UFunction_UAndroidXRSpatialAnchorsComponent_UnpersistFailedHandler, "UnpersistFailedHandler" }, // 4182970207
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRSpatialAnchorsComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent_Statics::NewProp_bUpdateComponentTransform_SetBit(void* Obj)
{
	((UAndroidXRSpatialAnchorsComponent*)Obj)->bUpdateComponentTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent_Statics::NewProp_bUpdateComponentTransform = { "bUpdateComponentTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAndroidXRSpatialAnchorsComponent), &Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent_Statics::NewProp_bUpdateComponentTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateComponentTransform_MetaData), NewProp_bUpdateComponentTransform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent_Statics::NewProp_AnchorInfo = { "AnchorInfo", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialAnchorsComponent, AnchorInfo), Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorInfo_MetaData), NewProp_AnchorInfo_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent_Statics::NewProp_OnAnchorPersisted = { "OnAnchorPersisted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialAnchorsComponent, OnAnchorPersisted), Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_SpatialAnchorPersistedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnchorPersisted_MetaData), NewProp_OnAnchorPersisted_MetaData) }; // 2135525364
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent_Statics::NewProp_OnAnchorPersistFailed = { "OnAnchorPersistFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialAnchorsComponent, OnAnchorPersistFailed), Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationFailedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnchorPersistFailed_MetaData), NewProp_OnAnchorPersistFailed_MetaData) }; // 1445707693
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent_Statics::NewProp_OnAnchorUnpersisted = { "OnAnchorUnpersisted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialAnchorsComponent, OnAnchorUnpersisted), Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_SpatialAnchorPersistedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnchorUnpersisted_MetaData), NewProp_OnAnchorUnpersisted_MetaData) }; // 2135525364
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent_Statics::NewProp_OnAnchorUnpersistFailed = { "OnAnchorUnpersistFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialAnchorsComponent, OnAnchorUnpersistFailed), Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationFailedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnchorUnpersistFailed_MetaData), NewProp_OnAnchorUnpersistFailed_MetaData) }; // 1445707693
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent_Statics::NewProp_bUpdateComponentTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent_Statics::NewProp_AnchorInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent_Statics::NewProp_OnAnchorPersisted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent_Statics::NewProp_OnAnchorPersistFailed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent_Statics::NewProp_OnAnchorUnpersisted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent_Statics::NewProp_OnAnchorUnpersistFailed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRSpatialAnchors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent_Statics::ClassParams = {
	&UAndroidXRSpatialAnchorsComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent()
{
	if (!Z_Registration_Info_UClass_UAndroidXRSpatialAnchorsComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRSpatialAnchorsComponent.OuterSingleton, Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRSpatialAnchorsComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRSpatialAnchorsComponent);
UAndroidXRSpatialAnchorsComponent::~UAndroidXRSpatialAnchorsComponent() {}
// ********** End Class UAndroidXRSpatialAnchorsComponent ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorsComponent_h__Script_AndroidXRSpatialAnchors_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent, UAndroidXRSpatialAnchorsComponent::StaticClass, TEXT("UAndroidXRSpatialAnchorsComponent"), &Z_Registration_Info_UClass_UAndroidXRSpatialAnchorsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRSpatialAnchorsComponent), 2643321373U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorsComponent_h__Script_AndroidXRSpatialAnchors_3780648581(TEXT("/Script/AndroidXRSpatialAnchors"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorsComponent_h__Script_AndroidXRSpatialAnchors_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorsComponent_h__Script_AndroidXRSpatialAnchors_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
