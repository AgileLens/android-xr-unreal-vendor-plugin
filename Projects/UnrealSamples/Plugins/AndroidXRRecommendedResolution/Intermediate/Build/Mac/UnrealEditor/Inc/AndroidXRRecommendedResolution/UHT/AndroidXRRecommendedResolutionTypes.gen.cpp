// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRRecommendedResolutionTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRRecommendedResolutionTypes() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXRRECOMMENDEDRESOLUTION_API UFunction* Z_Construct_UDelegateFunction_AndroidXRRecommendedResolution_AndroidXRRecommendedResolutionChangedDynamicDelegate__DelegateSignature();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
UPackage* Z_Construct_UPackage__Script_AndroidXRRecommendedResolution();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FAndroidXRRecommendedResolutionChangedDynamicDelegate *****************
struct Z_Construct_UDelegateFunction_AndroidXRRecommendedResolution_AndroidXRRecommendedResolutionChangedDynamicDelegate__DelegateSignature_Statics
{
	struct _Script_AndroidXRRecommendedResolution_eventAndroidXRRecommendedResolutionChangedDynamicDelegate_Parms
	{
		FVector2D RecommendedResolution;
		FVector2D MaxResolution;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Broadcast via the AndroidXRRecommendedResolutionEventProxy in the event of\n// XR_TYPE_EVENT_DATA_RECOMMENDED_RESOLUTION_CHANGED_ANDROID\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRRecommendedResolutionTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Broadcast via the AndroidXRRecommendedResolutionEventProxy in the event of\nXR_TYPE_EVENT_DATA_RECOMMENDED_RESOLUTION_CHANGED_ANDROID" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecommendedResolution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxResolution;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AndroidXRRecommendedResolution_AndroidXRRecommendedResolutionChangedDynamicDelegate__DelegateSignature_Statics::NewProp_RecommendedResolution = { "RecommendedResolution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AndroidXRRecommendedResolution_eventAndroidXRRecommendedResolutionChangedDynamicDelegate_Parms, RecommendedResolution), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AndroidXRRecommendedResolution_AndroidXRRecommendedResolutionChangedDynamicDelegate__DelegateSignature_Statics::NewProp_MaxResolution = { "MaxResolution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AndroidXRRecommendedResolution_eventAndroidXRRecommendedResolutionChangedDynamicDelegate_Parms, MaxResolution), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AndroidXRRecommendedResolution_AndroidXRRecommendedResolutionChangedDynamicDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AndroidXRRecommendedResolution_AndroidXRRecommendedResolutionChangedDynamicDelegate__DelegateSignature_Statics::NewProp_RecommendedResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AndroidXRRecommendedResolution_AndroidXRRecommendedResolutionChangedDynamicDelegate__DelegateSignature_Statics::NewProp_MaxResolution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRRecommendedResolution_AndroidXRRecommendedResolutionChangedDynamicDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AndroidXRRecommendedResolution_AndroidXRRecommendedResolutionChangedDynamicDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AndroidXRRecommendedResolution, nullptr, "AndroidXRRecommendedResolutionChangedDynamicDelegate__DelegateSignature", Z_Construct_UDelegateFunction_AndroidXRRecommendedResolution_AndroidXRRecommendedResolutionChangedDynamicDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRRecommendedResolution_AndroidXRRecommendedResolutionChangedDynamicDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AndroidXRRecommendedResolution_AndroidXRRecommendedResolutionChangedDynamicDelegate__DelegateSignature_Statics::_Script_AndroidXRRecommendedResolution_eventAndroidXRRecommendedResolutionChangedDynamicDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRRecommendedResolution_AndroidXRRecommendedResolutionChangedDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AndroidXRRecommendedResolution_AndroidXRRecommendedResolutionChangedDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AndroidXRRecommendedResolution_AndroidXRRecommendedResolutionChangedDynamicDelegate__DelegateSignature_Statics::_Script_AndroidXRRecommendedResolution_eventAndroidXRRecommendedResolutionChangedDynamicDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AndroidXRRecommendedResolution_AndroidXRRecommendedResolutionChangedDynamicDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AndroidXRRecommendedResolution_AndroidXRRecommendedResolutionChangedDynamicDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAndroidXRRecommendedResolutionChangedDynamicDelegate_DelegateWrapper(const FMulticastScriptDelegate& AndroidXRRecommendedResolutionChangedDynamicDelegate, FVector2D RecommendedResolution, FVector2D MaxResolution)
{
	struct _Script_AndroidXRRecommendedResolution_eventAndroidXRRecommendedResolutionChangedDynamicDelegate_Parms
	{
		FVector2D RecommendedResolution;
		FVector2D MaxResolution;
	};
	_Script_AndroidXRRecommendedResolution_eventAndroidXRRecommendedResolutionChangedDynamicDelegate_Parms Parms;
	Parms.RecommendedResolution=RecommendedResolution;
	Parms.MaxResolution=MaxResolution;
	AndroidXRRecommendedResolutionChangedDynamicDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FAndroidXRRecommendedResolutionChangedDynamicDelegate *******************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
