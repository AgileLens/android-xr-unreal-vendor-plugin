// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRSpatialPlaneEntity.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRSpatialPlaneEntity() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXRSPATIALENTITIES_API UClass* Z_Construct_UClass_UAndroidXRSpatialEntity();
ANDROIDXRSPATIALPLANETRACKING_API UClass* Z_Construct_UClass_UAndroidXRSpatialPlaneEntity();
ANDROIDXRSPATIALPLANETRACKING_API UClass* Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_NoRegister();
ANDROIDXRSPATIALPLANETRACKING_API UEnum* Z_Construct_UEnum_AndroidXRSpatialPlaneTracking_ESpatialPlaneAlignment();
ANDROIDXRSPATIALPLANETRACKING_API UEnum* Z_Construct_UEnum_AndroidXRSpatialPlaneTracking_ESpatialPlaneSemanticLabel();
ANDROIDXRSPATIALPLANETRACKING_API UFunction* Z_Construct_UDelegateFunction_AndroidXRSpatialPlaneTracking_SpatialPlaneChangedDelegate__DelegateSignature();
ANDROIDXRSPATIALPLANETRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FSpatialPlaneMesh();
ANDROIDXRSPATIALPLANETRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FSpatialPlanePolygon();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
UPackage* Z_Construct_UPackage__Script_AndroidXRSpatialPlaneTracking();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSpatialPlaneMesh *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSpatialPlaneMesh;
class UScriptStruct* FSpatialPlaneMesh::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSpatialPlaneMesh.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSpatialPlaneMesh.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpatialPlaneMesh, (UObject*)Z_Construct_UPackage__Script_AndroidXRSpatialPlaneTracking(), TEXT("SpatialPlaneMesh"));
	}
	return Z_Registration_Info_UScriptStruct_FSpatialPlaneMesh.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSpatialPlaneMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A spatial plane's mesh data\n */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialPlaneEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A spatial plane's mesh data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Plane Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Whether the mesh data is valid\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialPlaneEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the mesh data is valid" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshOrigin_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Plane Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The origin of the plane mesh\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialPlaneEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The origin of the plane mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Plane Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The vertices of the plane mesh\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialPlaneEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The vertices of the plane mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Indices_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Plane Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The indices of the plane mesh\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialPlaneEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The indices of the plane mesh" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Indices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Indices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpatialPlaneMesh>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSpatialPlaneMesh_Statics::NewProp_bIsValid_SetBit(void* Obj)
{
	((FSpatialPlaneMesh*)Obj)->bIsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpatialPlaneMesh_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpatialPlaneMesh), &Z_Construct_UScriptStruct_FSpatialPlaneMesh_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValid_MetaData), NewProp_bIsValid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpatialPlaneMesh_Statics::NewProp_MeshOrigin = { "MeshOrigin", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpatialPlaneMesh, MeshOrigin), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshOrigin_MetaData), NewProp_MeshOrigin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpatialPlaneMesh_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpatialPlaneMesh_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpatialPlaneMesh, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vertices_MetaData), NewProp_Vertices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpatialPlaneMesh_Statics::NewProp_Indices_Inner = { "Indices", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpatialPlaneMesh_Statics::NewProp_Indices = { "Indices", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpatialPlaneMesh, Indices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Indices_MetaData), NewProp_Indices_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpatialPlaneMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialPlaneMesh_Statics::NewProp_bIsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialPlaneMesh_Statics::NewProp_MeshOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialPlaneMesh_Statics::NewProp_Vertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialPlaneMesh_Statics::NewProp_Vertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialPlaneMesh_Statics::NewProp_Indices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialPlaneMesh_Statics::NewProp_Indices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialPlaneMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpatialPlaneMesh_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRSpatialPlaneTracking,
	nullptr,
	&NewStructOps,
	"SpatialPlaneMesh",
	Z_Construct_UScriptStruct_FSpatialPlaneMesh_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialPlaneMesh_Statics::PropPointers),
	sizeof(FSpatialPlaneMesh),
	alignof(FSpatialPlaneMesh),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialPlaneMesh_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpatialPlaneMesh_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSpatialPlaneMesh()
{
	if (!Z_Registration_Info_UScriptStruct_FSpatialPlaneMesh.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSpatialPlaneMesh.InnerSingleton, Z_Construct_UScriptStruct_FSpatialPlaneMesh_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSpatialPlaneMesh.InnerSingleton;
}
// ********** End ScriptStruct FSpatialPlaneMesh ***************************************************

// ********** Begin ScriptStruct FSpatialPlanePolygon **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSpatialPlanePolygon;
class UScriptStruct* FSpatialPlanePolygon::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSpatialPlanePolygon.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSpatialPlanePolygon.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpatialPlanePolygon, (UObject*)Z_Construct_UPackage__Script_AndroidXRSpatialPlaneTracking(), TEXT("SpatialPlanePolygon"));
	}
	return Z_Registration_Info_UScriptStruct_FSpatialPlanePolygon.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSpatialPlanePolygon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* A spatial plane's polygon data\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialPlaneEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A spatial plane's polygon data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Plane Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Whether the polygon data is valid\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialPlaneEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the polygon data is valid" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PolygonOrigin_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Plane Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The origin of the plane polygon\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialPlaneEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The origin of the plane polygon" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Plane Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The vertices of the spatial plane's polygon\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialPlaneEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The vertices of the spatial plane's polygon" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpatialPlanePolygon>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSpatialPlanePolygon_Statics::NewProp_bIsValid_SetBit(void* Obj)
{
	((FSpatialPlanePolygon*)Obj)->bIsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpatialPlanePolygon_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpatialPlanePolygon), &Z_Construct_UScriptStruct_FSpatialPlanePolygon_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValid_MetaData), NewProp_bIsValid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpatialPlanePolygon_Statics::NewProp_PolygonOrigin = { "PolygonOrigin", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpatialPlanePolygon, PolygonOrigin), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PolygonOrigin_MetaData), NewProp_PolygonOrigin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpatialPlanePolygon_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpatialPlanePolygon_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpatialPlanePolygon, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vertices_MetaData), NewProp_Vertices_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpatialPlanePolygon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialPlanePolygon_Statics::NewProp_bIsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialPlanePolygon_Statics::NewProp_PolygonOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialPlanePolygon_Statics::NewProp_Vertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialPlanePolygon_Statics::NewProp_Vertices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialPlanePolygon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpatialPlanePolygon_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRSpatialPlaneTracking,
	nullptr,
	&NewStructOps,
	"SpatialPlanePolygon",
	Z_Construct_UScriptStruct_FSpatialPlanePolygon_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialPlanePolygon_Statics::PropPointers),
	sizeof(FSpatialPlanePolygon),
	alignof(FSpatialPlanePolygon),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialPlanePolygon_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpatialPlanePolygon_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSpatialPlanePolygon()
{
	if (!Z_Registration_Info_UScriptStruct_FSpatialPlanePolygon.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSpatialPlanePolygon.InnerSingleton, Z_Construct_UScriptStruct_FSpatialPlanePolygon_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSpatialPlanePolygon.InnerSingleton;
}
// ********** End ScriptStruct FSpatialPlanePolygon ************************************************

// ********** Begin Class UAndroidXRSpatialPlaneEntity *********************************************
void UAndroidXRSpatialPlaneEntity::StaticRegisterNativesUAndroidXRSpatialPlaneEntity()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRSpatialPlaneEntity;
UClass* UAndroidXRSpatialPlaneEntity::GetPrivateStaticClass()
{
	using TClass = UAndroidXRSpatialPlaneEntity;
	if (!Z_Registration_Info_UClass_UAndroidXRSpatialPlaneEntity.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRSpatialPlaneEntity"),
			Z_Registration_Info_UClass_UAndroidXRSpatialPlaneEntity.InnerSingleton,
			StaticRegisterNativesUAndroidXRSpatialPlaneEntity,
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
	return Z_Registration_Info_UClass_UAndroidXRSpatialPlaneEntity.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_NoRegister()
{
	return UAndroidXRSpatialPlaneEntity::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* A spatial plane entity\n*/" },
#endif
		{ "IncludePath", "AndroidXRSpatialPlaneEntity.h" },
		{ "ModuleRelativePath", "Public/AndroidXRSpatialPlaneEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A spatial plane entity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneTransform_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Plane Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The transform of the spatial plane\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialPlaneEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The transform of the spatial plane" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneExtents_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Plane Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The extents of the spatial plane\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialPlaneEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The extents of the spatial plane" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alignment_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Plane Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The spatial plane alignment\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialPlaneEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The spatial plane alignment" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SemanticLabel_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Plane Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The spatial plane's semantic label\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialPlaneEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The spatial plane's semantic label" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneMesh_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Plane Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The mesh data of the spatial plane\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialPlaneEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The mesh data of the spatial plane" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlanePolygon_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Plane Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The polygon data of the spatial plane\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialPlaneEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The polygon data of the spatial plane" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneExtents;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Alignment_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Alignment;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SemanticLabel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SemanticLabel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlanePolygon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRSpatialPlaneEntity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_Statics::NewProp_PlaneTransform = { "PlaneTransform", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialPlaneEntity, PlaneTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneTransform_MetaData), NewProp_PlaneTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_Statics::NewProp_PlaneExtents = { "PlaneExtents", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialPlaneEntity, PlaneExtents), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneExtents_MetaData), NewProp_PlaneExtents_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_Statics::NewProp_Alignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_Statics::NewProp_Alignment = { "Alignment", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialPlaneEntity, Alignment), Z_Construct_UEnum_AndroidXRSpatialPlaneTracking_ESpatialPlaneAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alignment_MetaData), NewProp_Alignment_MetaData) }; // 1416143316
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_Statics::NewProp_SemanticLabel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_Statics::NewProp_SemanticLabel = { "SemanticLabel", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialPlaneEntity, SemanticLabel), Z_Construct_UEnum_AndroidXRSpatialPlaneTracking_ESpatialPlaneSemanticLabel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SemanticLabel_MetaData), NewProp_SemanticLabel_MetaData) }; // 1914260473
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_Statics::NewProp_PlaneMesh = { "PlaneMesh", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialPlaneEntity, PlaneMesh), Z_Construct_UScriptStruct_FSpatialPlaneMesh, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneMesh_MetaData), NewProp_PlaneMesh_MetaData) }; // 627331396
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_Statics::NewProp_PlanePolygon = { "PlanePolygon", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialPlaneEntity, PlanePolygon), Z_Construct_UScriptStruct_FSpatialPlanePolygon, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlanePolygon_MetaData), NewProp_PlanePolygon_MetaData) }; // 58091385
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_Statics::NewProp_PlaneTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_Statics::NewProp_PlaneExtents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_Statics::NewProp_Alignment_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_Statics::NewProp_Alignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_Statics::NewProp_SemanticLabel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_Statics::NewProp_SemanticLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_Statics::NewProp_PlaneMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_Statics::NewProp_PlanePolygon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAndroidXRSpatialEntity,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRSpatialPlaneTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_Statics::ClassParams = {
	&UAndroidXRSpatialPlaneEntity::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRSpatialPlaneEntity()
{
	if (!Z_Registration_Info_UClass_UAndroidXRSpatialPlaneEntity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRSpatialPlaneEntity.OuterSingleton, Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRSpatialPlaneEntity.OuterSingleton;
}
UAndroidXRSpatialPlaneEntity::UAndroidXRSpatialPlaneEntity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRSpatialPlaneEntity);
UAndroidXRSpatialPlaneEntity::~UAndroidXRSpatialPlaneEntity() {}
// ********** End Class UAndroidXRSpatialPlaneEntity ***********************************************

// ********** Begin Delegate FSpatialPlaneChangedDelegate ******************************************
struct Z_Construct_UDelegateFunction_AndroidXRSpatialPlaneTracking_SpatialPlaneChangedDelegate__DelegateSignature_Statics
{
	struct _Script_AndroidXRSpatialPlaneTracking_eventSpatialPlaneChangedDelegate_Parms
	{
		UAndroidXRSpatialPlaneEntity* Plane;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AndroidXRSpatialPlaneEntity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Plane;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AndroidXRSpatialPlaneTracking_SpatialPlaneChangedDelegate__DelegateSignature_Statics::NewProp_Plane = { "Plane", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AndroidXRSpatialPlaneTracking_eventSpatialPlaneChangedDelegate_Parms, Plane), Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AndroidXRSpatialPlaneTracking_SpatialPlaneChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AndroidXRSpatialPlaneTracking_SpatialPlaneChangedDelegate__DelegateSignature_Statics::NewProp_Plane,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRSpatialPlaneTracking_SpatialPlaneChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AndroidXRSpatialPlaneTracking_SpatialPlaneChangedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AndroidXRSpatialPlaneTracking, nullptr, "SpatialPlaneChangedDelegate__DelegateSignature", Z_Construct_UDelegateFunction_AndroidXRSpatialPlaneTracking_SpatialPlaneChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRSpatialPlaneTracking_SpatialPlaneChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AndroidXRSpatialPlaneTracking_SpatialPlaneChangedDelegate__DelegateSignature_Statics::_Script_AndroidXRSpatialPlaneTracking_eventSpatialPlaneChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRSpatialPlaneTracking_SpatialPlaneChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AndroidXRSpatialPlaneTracking_SpatialPlaneChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AndroidXRSpatialPlaneTracking_SpatialPlaneChangedDelegate__DelegateSignature_Statics::_Script_AndroidXRSpatialPlaneTracking_eventSpatialPlaneChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AndroidXRSpatialPlaneTracking_SpatialPlaneChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AndroidXRSpatialPlaneTracking_SpatialPlaneChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSpatialPlaneChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpatialPlaneChangedDelegate, UAndroidXRSpatialPlaneEntity* Plane)
{
	struct _Script_AndroidXRSpatialPlaneTracking_eventSpatialPlaneChangedDelegate_Parms
	{
		UAndroidXRSpatialPlaneEntity* Plane;
	};
	_Script_AndroidXRSpatialPlaneTracking_eventSpatialPlaneChangedDelegate_Parms Parms;
	Parms.Plane=Plane;
	SpatialPlaneChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSpatialPlaneChangedDelegate ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialPlaneTracking_Source_AndroidXRSpatialPlaneTracking_Public_AndroidXRSpatialPlaneEntity_h__Script_AndroidXRSpatialPlaneTracking_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSpatialPlaneMesh::StaticStruct, Z_Construct_UScriptStruct_FSpatialPlaneMesh_Statics::NewStructOps, TEXT("SpatialPlaneMesh"), &Z_Registration_Info_UScriptStruct_FSpatialPlaneMesh, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpatialPlaneMesh), 627331396U) },
		{ FSpatialPlanePolygon::StaticStruct, Z_Construct_UScriptStruct_FSpatialPlanePolygon_Statics::NewStructOps, TEXT("SpatialPlanePolygon"), &Z_Registration_Info_UScriptStruct_FSpatialPlanePolygon, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpatialPlanePolygon), 58091385U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXRSpatialPlaneEntity, UAndroidXRSpatialPlaneEntity::StaticClass, TEXT("UAndroidXRSpatialPlaneEntity"), &Z_Registration_Info_UClass_UAndroidXRSpatialPlaneEntity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRSpatialPlaneEntity), 2613168859U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialPlaneTracking_Source_AndroidXRSpatialPlaneTracking_Public_AndroidXRSpatialPlaneEntity_h__Script_AndroidXRSpatialPlaneTracking_3757303670(TEXT("/Script/AndroidXRSpatialPlaneTracking"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialPlaneTracking_Source_AndroidXRSpatialPlaneTracking_Public_AndroidXRSpatialPlaneEntity_h__Script_AndroidXRSpatialPlaneTracking_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialPlaneTracking_Source_AndroidXRSpatialPlaneTracking_Public_AndroidXRSpatialPlaneEntity_h__Script_AndroidXRSpatialPlaneTracking_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialPlaneTracking_Source_AndroidXRSpatialPlaneTracking_Public_AndroidXRSpatialPlaneEntity_h__Script_AndroidXRSpatialPlaneTracking_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialPlaneTracking_Source_AndroidXRSpatialPlaneTracking_Public_AndroidXRSpatialPlaneEntity_h__Script_AndroidXRSpatialPlaneTracking_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
