// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRPassthroughMeshTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRPassthroughMeshTypes() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXRPASSTHROUGHMESH_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRPassthroughLayer();
ANDROIDXRPASSTHROUGHMESH_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRPassthroughLayerMeshInfo();
ANDROIDXRPASSTHROUGHMESH_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRSystemPassthroughProperties();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_AndroidXRPassthroughMesh();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FAndroidXRSystemPassthroughProperties *****************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAndroidXRSystemPassthroughProperties;
class UScriptStruct* FAndroidXRSystemPassthroughProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRSystemPassthroughProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAndroidXRSystemPassthroughProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidXRSystemPassthroughProperties, (UObject*)Z_Construct_UPackage__Script_AndroidXRPassthroughMesh(), TEXT("AndroidXRSystemPassthroughProperties"));
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRSystemPassthroughProperties.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAndroidXRSystemPassthroughProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The passthrough layer properties supported by the system\n */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRPassthroughMeshTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The passthrough layer properties supported by the system" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsPassthroughLayer_MetaData[] = {
		{ "Category", "AndroidXR| Passthrough Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If the current system supports composition layer passthrough mesh.\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRPassthroughMeshTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the current system supports composition layer passthrough mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMeshIndexCount_MetaData[] = {
		{ "Category", "AndroidXR| Passthrough Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The maximum count of indices that will be accepted for a passthrough mesh.\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRPassthroughMeshTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum count of indices that will be accepted for a passthrough mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMeshVertexCount_MetaData[] = {
		{ "Category", "AndroidXR| Passthrough Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The maximum count of vertices that will be accepted for a passthrough mesh.\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRPassthroughMeshTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum count of vertices that will be accepted for a passthrough mesh." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bSupportsPassthroughLayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsPassthroughLayer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMeshIndexCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMeshVertexCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidXRSystemPassthroughProperties>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FAndroidXRSystemPassthroughProperties_Statics::NewProp_bSupportsPassthroughLayer_SetBit(void* Obj)
{
	((FAndroidXRSystemPassthroughProperties*)Obj)->bSupportsPassthroughLayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAndroidXRSystemPassthroughProperties_Statics::NewProp_bSupportsPassthroughLayer = { "bSupportsPassthroughLayer", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAndroidXRSystemPassthroughProperties), &Z_Construct_UScriptStruct_FAndroidXRSystemPassthroughProperties_Statics::NewProp_bSupportsPassthroughLayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsPassthroughLayer_MetaData), NewProp_bSupportsPassthroughLayer_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAndroidXRSystemPassthroughProperties_Statics::NewProp_MaxMeshIndexCount = { "MaxMeshIndexCount", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRSystemPassthroughProperties, MaxMeshIndexCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMeshIndexCount_MetaData), NewProp_MaxMeshIndexCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAndroidXRSystemPassthroughProperties_Statics::NewProp_MaxMeshVertexCount = { "MaxMeshVertexCount", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRSystemPassthroughProperties, MaxMeshVertexCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMeshVertexCount_MetaData), NewProp_MaxMeshVertexCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAndroidXRSystemPassthroughProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRSystemPassthroughProperties_Statics::NewProp_bSupportsPassthroughLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRSystemPassthroughProperties_Statics::NewProp_MaxMeshIndexCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRSystemPassthroughProperties_Statics::NewProp_MaxMeshVertexCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRSystemPassthroughProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidXRSystemPassthroughProperties_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRPassthroughMesh,
	nullptr,
	&NewStructOps,
	"AndroidXRSystemPassthroughProperties",
	Z_Construct_UScriptStruct_FAndroidXRSystemPassthroughProperties_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRSystemPassthroughProperties_Statics::PropPointers),
	sizeof(FAndroidXRSystemPassthroughProperties),
	alignof(FAndroidXRSystemPassthroughProperties),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRSystemPassthroughProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAndroidXRSystemPassthroughProperties_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRSystemPassthroughProperties()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRSystemPassthroughProperties.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAndroidXRSystemPassthroughProperties.InnerSingleton, Z_Construct_UScriptStruct_FAndroidXRSystemPassthroughProperties_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRSystemPassthroughProperties.InnerSingleton;
}
// ********** End ScriptStruct FAndroidXRSystemPassthroughProperties *******************************

// ********** Begin ScriptStruct FAndroidXRPassthroughLayer ****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAndroidXRPassthroughLayer;
class UScriptStruct* FAndroidXRPassthroughLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRPassthroughLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAndroidXRPassthroughLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidXRPassthroughLayer, (UObject*)Z_Construct_UPackage__Script_AndroidXRPassthroughMesh(), TEXT("AndroidXRPassthroughLayer"));
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRPassthroughLayer.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAndroidXRPassthroughLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Contains opaque pointer to XrPassthroughLayerANDROID\n */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRPassthroughMeshTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains opaque pointer to XrPassthroughLayerANDROID" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidXRPassthroughLayer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidXRPassthroughLayer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRPassthroughMesh,
	nullptr,
	&NewStructOps,
	"AndroidXRPassthroughLayer",
	nullptr,
	0,
	sizeof(FAndroidXRPassthroughLayer),
	alignof(FAndroidXRPassthroughLayer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRPassthroughLayer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAndroidXRPassthroughLayer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRPassthroughLayer()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRPassthroughLayer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAndroidXRPassthroughLayer.InnerSingleton, Z_Construct_UScriptStruct_FAndroidXRPassthroughLayer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRPassthroughLayer.InnerSingleton;
}
// ********** End ScriptStruct FAndroidXRPassthroughLayer ******************************************

// ********** Begin ScriptStruct FAndroidXRPassthroughLayerMeshInfo ********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAndroidXRPassthroughLayerMeshInfo;
class UScriptStruct* FAndroidXRPassthroughLayerMeshInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRPassthroughLayerMeshInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAndroidXRPassthroughLayerMeshInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidXRPassthroughLayerMeshInfo, (UObject*)Z_Construct_UPackage__Script_AndroidXRPassthroughMesh(), TEXT("AndroidXRPassthroughLayerMeshInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRPassthroughLayerMeshInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAndroidXRPassthroughLayerMeshInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The passthrough layer mesh info\n */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRPassthroughMeshTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The passthrough layer mesh info" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "AndroidXR| Passthrough Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The transform of the layer mesh\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRPassthroughMeshTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The transform of the layer mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Opacity_MetaData[] = {
		{ "Category", "AndroidXR| Passthrough Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The opacity of the passthrough texture in range [0,1]\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRPassthroughMeshTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The opacity of the passthrough texture in range [0,1]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
		{ "Category", "AndroidXR| Passthrough Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The vertex positions of the passthrough layer mesh\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRPassthroughMeshTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The vertex positions of the passthrough layer mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Indices_MetaData[] = {
		{ "Category", "AndroidXR| Passthrough Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The indicies of the passthrough layer mesh\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRPassthroughMeshTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The indicies of the passthrough layer mesh" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Opacity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Indices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Indices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidXRPassthroughLayerMeshInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRPassthroughLayerMeshInfo_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRPassthroughLayerMeshInfo, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAndroidXRPassthroughLayerMeshInfo_Statics::NewProp_Opacity = { "Opacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRPassthroughLayerMeshInfo, Opacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Opacity_MetaData), NewProp_Opacity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRPassthroughLayerMeshInfo_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAndroidXRPassthroughLayerMeshInfo_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRPassthroughLayerMeshInfo, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vertices_MetaData), NewProp_Vertices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAndroidXRPassthroughLayerMeshInfo_Statics::NewProp_Indices_Inner = { "Indices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAndroidXRPassthroughLayerMeshInfo_Statics::NewProp_Indices = { "Indices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRPassthroughLayerMeshInfo, Indices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Indices_MetaData), NewProp_Indices_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAndroidXRPassthroughLayerMeshInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRPassthroughLayerMeshInfo_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRPassthroughLayerMeshInfo_Statics::NewProp_Opacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRPassthroughLayerMeshInfo_Statics::NewProp_Vertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRPassthroughLayerMeshInfo_Statics::NewProp_Vertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRPassthroughLayerMeshInfo_Statics::NewProp_Indices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRPassthroughLayerMeshInfo_Statics::NewProp_Indices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRPassthroughLayerMeshInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidXRPassthroughLayerMeshInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRPassthroughMesh,
	nullptr,
	&NewStructOps,
	"AndroidXRPassthroughLayerMeshInfo",
	Z_Construct_UScriptStruct_FAndroidXRPassthroughLayerMeshInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRPassthroughLayerMeshInfo_Statics::PropPointers),
	sizeof(FAndroidXRPassthroughLayerMeshInfo),
	alignof(FAndroidXRPassthroughLayerMeshInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRPassthroughLayerMeshInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAndroidXRPassthroughLayerMeshInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRPassthroughLayerMeshInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRPassthroughLayerMeshInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAndroidXRPassthroughLayerMeshInfo.InnerSingleton, Z_Construct_UScriptStruct_FAndroidXRPassthroughLayerMeshInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRPassthroughLayerMeshInfo.InnerSingleton;
}
// ********** End ScriptStruct FAndroidXRPassthroughLayerMeshInfo **********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRPassthroughMesh_Source_AndroidXRPassthroughMesh_Public_AndroidXRPassthroughMeshTypes_h__Script_AndroidXRPassthroughMesh_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAndroidXRSystemPassthroughProperties::StaticStruct, Z_Construct_UScriptStruct_FAndroidXRSystemPassthroughProperties_Statics::NewStructOps, TEXT("AndroidXRSystemPassthroughProperties"), &Z_Registration_Info_UScriptStruct_FAndroidXRSystemPassthroughProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAndroidXRSystemPassthroughProperties), 1414805262U) },
		{ FAndroidXRPassthroughLayer::StaticStruct, Z_Construct_UScriptStruct_FAndroidXRPassthroughLayer_Statics::NewStructOps, TEXT("AndroidXRPassthroughLayer"), &Z_Registration_Info_UScriptStruct_FAndroidXRPassthroughLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAndroidXRPassthroughLayer), 1310625649U) },
		{ FAndroidXRPassthroughLayerMeshInfo::StaticStruct, Z_Construct_UScriptStruct_FAndroidXRPassthroughLayerMeshInfo_Statics::NewStructOps, TEXT("AndroidXRPassthroughLayerMeshInfo"), &Z_Registration_Info_UScriptStruct_FAndroidXRPassthroughLayerMeshInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAndroidXRPassthroughLayerMeshInfo), 2648848655U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRPassthroughMesh_Source_AndroidXRPassthroughMesh_Public_AndroidXRPassthroughMeshTypes_h__Script_AndroidXRPassthroughMesh_2711841717(TEXT("/Script/AndroidXRPassthroughMesh"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRPassthroughMesh_Source_AndroidXRPassthroughMesh_Public_AndroidXRPassthroughMeshTypes_h__Script_AndroidXRPassthroughMesh_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRPassthroughMesh_Source_AndroidXRPassthroughMesh_Public_AndroidXRPassthroughMeshTypes_h__Script_AndroidXRPassthroughMesh_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
