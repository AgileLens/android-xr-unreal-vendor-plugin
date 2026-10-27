// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRSpatialTrackingSubsystem.h"
#include "AndroidXRSpatialEntitiesTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRSpatialTrackingSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXRSPATIALENTITIES_API UClass* Z_Construct_UClass_UAndroidXRSpatialEntitiesSubsystem();
ANDROIDXRSPATIALENTITIES_API UClass* Z_Construct_UClass_UAndroidXRSpatialEntitiesSubsystem_NoRegister();
ANDROIDXRSPATIALENTITIES_API UEnum* Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialCapability();
ANDROIDXRSPATIALENTITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRSpatialCapabilityInfo();
ANDROIDXRTRACKINGSUBSYSTEM_API UClass* Z_Construct_UClass_UAndroidXRTrackingSubsystem();
UPackage* Z_Construct_UPackage__Script_AndroidXRSpatialEntities();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAndroidXRSpatialEntitiesSubsystem Function CreateDiscoverySnapshotRequest 
struct Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_CreateDiscoverySnapshotRequest_Statics
{
	struct AndroidXRSpatialEntitiesSubsystem_eventCreateDiscoverySnapshotRequest_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Spatial Entities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Creates a spatial discovery snapshot request\n    * @return Whether the discovery request was created or not\n    **/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialTrackingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a spatial discovery snapshot request\n@return Whether the discovery request was created or not" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_CreateDiscoverySnapshotRequest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRSpatialEntitiesSubsystem_eventCreateDiscoverySnapshotRequest_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_CreateDiscoverySnapshotRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRSpatialEntitiesSubsystem_eventCreateDiscoverySnapshotRequest_Parms), &Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_CreateDiscoverySnapshotRequest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_CreateDiscoverySnapshotRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_CreateDiscoverySnapshotRequest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_CreateDiscoverySnapshotRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_CreateDiscoverySnapshotRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSpatialEntitiesSubsystem, nullptr, "CreateDiscoverySnapshotRequest", Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_CreateDiscoverySnapshotRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_CreateDiscoverySnapshotRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_CreateDiscoverySnapshotRequest_Statics::AndroidXRSpatialEntitiesSubsystem_eventCreateDiscoverySnapshotRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_CreateDiscoverySnapshotRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_CreateDiscoverySnapshotRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_CreateDiscoverySnapshotRequest_Statics::AndroidXRSpatialEntitiesSubsystem_eventCreateDiscoverySnapshotRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_CreateDiscoverySnapshotRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_CreateDiscoverySnapshotRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSpatialEntitiesSubsystem::execCreateDiscoverySnapshotRequest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CreateDiscoverySnapshotRequest();
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSpatialEntitiesSubsystem Function CreateDiscoverySnapshotRequest *

// ********** Begin Class UAndroidXRSpatialEntitiesSubsystem Function GetCapabilityInfo ************
struct Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetCapabilityInfo_Statics
{
	struct AndroidXRSpatialEntitiesSubsystem_eventGetCapabilityInfo_Parms
	{
		ESpatialCapability Capability;
		FAndroidXRSpatialCapabilityInfo CapabilityInfo;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Spatial Entities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Gets the capability info for a given capability\n    * @param[in] The capability to get the information for\n    * @param[out] The capability info\n    * @return Whether the underlying API call was successful\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialTrackingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the capability info for a given capability\n@param[in] The capability to get the information for\n@param[out] The capability info\n@return Whether the underlying API call was successful" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Capability_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Capability;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CapabilityInfo;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetCapabilityInfo_Statics::NewProp_Capability_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetCapabilityInfo_Statics::NewProp_Capability = { "Capability", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRSpatialEntitiesSubsystem_eventGetCapabilityInfo_Parms, Capability), Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialCapability, METADATA_PARAMS(0, nullptr) }; // 4174530781
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetCapabilityInfo_Statics::NewProp_CapabilityInfo = { "CapabilityInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRSpatialEntitiesSubsystem_eventGetCapabilityInfo_Parms, CapabilityInfo), Z_Construct_UScriptStruct_FAndroidXRSpatialCapabilityInfo, METADATA_PARAMS(0, nullptr) }; // 3438250740
void Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetCapabilityInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRSpatialEntitiesSubsystem_eventGetCapabilityInfo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetCapabilityInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRSpatialEntitiesSubsystem_eventGetCapabilityInfo_Parms), &Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetCapabilityInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetCapabilityInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetCapabilityInfo_Statics::NewProp_Capability_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetCapabilityInfo_Statics::NewProp_Capability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetCapabilityInfo_Statics::NewProp_CapabilityInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetCapabilityInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetCapabilityInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetCapabilityInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSpatialEntitiesSubsystem, nullptr, "GetCapabilityInfo", Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetCapabilityInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetCapabilityInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetCapabilityInfo_Statics::AndroidXRSpatialEntitiesSubsystem_eventGetCapabilityInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetCapabilityInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetCapabilityInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetCapabilityInfo_Statics::AndroidXRSpatialEntitiesSubsystem_eventGetCapabilityInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetCapabilityInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetCapabilityInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSpatialEntitiesSubsystem::execGetCapabilityInfo)
{
	P_GET_ENUM(ESpatialCapability,Z_Param_Capability);
	P_GET_STRUCT_REF(FAndroidXRSpatialCapabilityInfo,Z_Param_Out_CapabilityInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCapabilityInfo(ESpatialCapability(Z_Param_Capability),Z_Param_Out_CapabilityInfo);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSpatialEntitiesSubsystem Function GetCapabilityInfo **************

// ********** Begin Class UAndroidXRSpatialEntitiesSubsystem Function GetSupportedCapabilities *****
struct Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetSupportedCapabilities_Statics
{
	struct AndroidXRSpatialEntitiesSubsystem_eventGetSupportedCapabilities_Parms
	{
		TArray<ESpatialCapability> Capabilities;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Spatial Entities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Gets all the supported capabilities\n    * @param[out] An array of supported capabilities\n    * @return Whether the underlying API call was successful\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialTrackingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets all the supported capabilities\n@param[out] An array of supported capabilities\n@return Whether the underlying API call was successful" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Capabilities_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Capabilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Capabilities;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetSupportedCapabilities_Statics::NewProp_Capabilities_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetSupportedCapabilities_Statics::NewProp_Capabilities_Inner = { "Capabilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialCapability, METADATA_PARAMS(0, nullptr) }; // 4174530781
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetSupportedCapabilities_Statics::NewProp_Capabilities = { "Capabilities", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRSpatialEntitiesSubsystem_eventGetSupportedCapabilities_Parms, Capabilities), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4174530781
void Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetSupportedCapabilities_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRSpatialEntitiesSubsystem_eventGetSupportedCapabilities_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetSupportedCapabilities_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRSpatialEntitiesSubsystem_eventGetSupportedCapabilities_Parms), &Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetSupportedCapabilities_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetSupportedCapabilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetSupportedCapabilities_Statics::NewProp_Capabilities_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetSupportedCapabilities_Statics::NewProp_Capabilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetSupportedCapabilities_Statics::NewProp_Capabilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetSupportedCapabilities_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetSupportedCapabilities_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetSupportedCapabilities_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSpatialEntitiesSubsystem, nullptr, "GetSupportedCapabilities", Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetSupportedCapabilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetSupportedCapabilities_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetSupportedCapabilities_Statics::AndroidXRSpatialEntitiesSubsystem_eventGetSupportedCapabilities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetSupportedCapabilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetSupportedCapabilities_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetSupportedCapabilities_Statics::AndroidXRSpatialEntitiesSubsystem_eventGetSupportedCapabilities_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetSupportedCapabilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetSupportedCapabilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSpatialEntitiesSubsystem::execGetSupportedCapabilities)
{
	P_GET_TARRAY_REF(ESpatialCapability,Z_Param_Out_Capabilities);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetSupportedCapabilities(Z_Param_Out_Capabilities);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSpatialEntitiesSubsystem Function GetSupportedCapabilities *******

// ********** Begin Class UAndroidXRSpatialEntitiesSubsystem Function IsReady **********************
struct Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_IsReady_Statics
{
	struct AndroidXRSpatialEntitiesSubsystem_eventIsReady_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Spatial Entities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Whether the underlying tracking subsystem is ready or not\n    * @return The tracking status of the underlying spatial tracking subsystem\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialTrackingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the underlying tracking subsystem is ready or not\n@return The tracking status of the underlying spatial tracking subsystem" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_IsReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRSpatialEntitiesSubsystem_eventIsReady_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_IsReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRSpatialEntitiesSubsystem_eventIsReady_Parms), &Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_IsReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_IsReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_IsReady_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_IsReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_IsReady_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSpatialEntitiesSubsystem, nullptr, "IsReady", Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_IsReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_IsReady_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_IsReady_Statics::AndroidXRSpatialEntitiesSubsystem_eventIsReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_IsReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_IsReady_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_IsReady_Statics::AndroidXRSpatialEntitiesSubsystem_eventIsReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_IsReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_IsReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSpatialEntitiesSubsystem::execIsReady)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsReady();
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSpatialEntitiesSubsystem Function IsReady ************************

// ********** Begin Class UAndroidXRSpatialEntitiesSubsystem ***************************************
void UAndroidXRSpatialEntitiesSubsystem::StaticRegisterNativesUAndroidXRSpatialEntitiesSubsystem()
{
	UClass* Class = UAndroidXRSpatialEntitiesSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateDiscoverySnapshotRequest", &UAndroidXRSpatialEntitiesSubsystem::execCreateDiscoverySnapshotRequest },
		{ "GetCapabilityInfo", &UAndroidXRSpatialEntitiesSubsystem::execGetCapabilityInfo },
		{ "GetSupportedCapabilities", &UAndroidXRSpatialEntitiesSubsystem::execGetSupportedCapabilities },
		{ "IsReady", &UAndroidXRSpatialEntitiesSubsystem::execIsReady },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRSpatialEntitiesSubsystem;
UClass* UAndroidXRSpatialEntitiesSubsystem::GetPrivateStaticClass()
{
	using TClass = UAndroidXRSpatialEntitiesSubsystem;
	if (!Z_Registration_Info_UClass_UAndroidXRSpatialEntitiesSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRSpatialEntitiesSubsystem"),
			Z_Registration_Info_UClass_UAndroidXRSpatialEntitiesSubsystem.InnerSingleton,
			StaticRegisterNativesUAndroidXRSpatialEntitiesSubsystem,
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
	return Z_Registration_Info_UClass_UAndroidXRSpatialEntitiesSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRSpatialEntitiesSubsystem_NoRegister()
{
	return UAndroidXRSpatialEntitiesSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRSpatialEntitiesSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* The base class of all spatial tracking subsystems\n*/" },
#endif
		{ "IncludePath", "AndroidXRSpatialTrackingSubsystem.h" },
		{ "ModuleRelativePath", "Public/AndroidXRSpatialTrackingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The base class of all spatial tracking subsystems" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_CreateDiscoverySnapshotRequest, "CreateDiscoverySnapshotRequest" }, // 4200544377
		{ &Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetCapabilityInfo, "GetCapabilityInfo" }, // 734323451
		{ &Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_GetSupportedCapabilities, "GetSupportedCapabilities" }, // 3933651794
		{ &Z_Construct_UFunction_UAndroidXRSpatialEntitiesSubsystem_IsReady, "IsReady" }, // 423804374
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRSpatialEntitiesSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAndroidXRSpatialEntitiesSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAndroidXRTrackingSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRSpatialEntities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialEntitiesSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRSpatialEntitiesSubsystem_Statics::ClassParams = {
	&UAndroidXRSpatialEntitiesSubsystem::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialEntitiesSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRSpatialEntitiesSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRSpatialEntitiesSubsystem()
{
	if (!Z_Registration_Info_UClass_UAndroidXRSpatialEntitiesSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRSpatialEntitiesSubsystem.OuterSingleton, Z_Construct_UClass_UAndroidXRSpatialEntitiesSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRSpatialEntitiesSubsystem.OuterSingleton;
}
UAndroidXRSpatialEntitiesSubsystem::UAndroidXRSpatialEntitiesSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRSpatialEntitiesSubsystem);
UAndroidXRSpatialEntitiesSubsystem::~UAndroidXRSpatialEntitiesSubsystem() {}
// ********** End Class UAndroidXRSpatialEntitiesSubsystem *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialEntities_Source_AndroidXRSpatialEntities_Public_AndroidXRSpatialTrackingSubsystem_h__Script_AndroidXRSpatialEntities_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXRSpatialEntitiesSubsystem, UAndroidXRSpatialEntitiesSubsystem::StaticClass, TEXT("UAndroidXRSpatialEntitiesSubsystem"), &Z_Registration_Info_UClass_UAndroidXRSpatialEntitiesSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRSpatialEntitiesSubsystem), 3928343220U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialEntities_Source_AndroidXRSpatialEntities_Public_AndroidXRSpatialTrackingSubsystem_h__Script_AndroidXRSpatialEntities_3120598620(TEXT("/Script/AndroidXRSpatialEntities"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialEntities_Source_AndroidXRSpatialEntities_Public_AndroidXRSpatialTrackingSubsystem_h__Script_AndroidXRSpatialEntities_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialEntities_Source_AndroidXRSpatialEntities_Public_AndroidXRSpatialTrackingSubsystem_h__Script_AndroidXRSpatialEntities_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
