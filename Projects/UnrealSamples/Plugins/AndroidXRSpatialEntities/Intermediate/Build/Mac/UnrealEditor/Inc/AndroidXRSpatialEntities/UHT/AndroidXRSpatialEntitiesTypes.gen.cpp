// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRSpatialEntitiesTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRSpatialEntitiesTypes() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXRSPATIALENTITIES_API UEnum* Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialCapability();
ANDROIDXRSPATIALENTITIES_API UEnum* Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialCapabilityFeature();
ANDROIDXRSPATIALENTITIES_API UEnum* Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialComponentType();
ANDROIDXRSPATIALENTITIES_API UEnum* Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialEntityTrackingState();
ANDROIDXRSPATIALENTITIES_API UFunction* Z_Construct_UDelegateFunction_AndroidXRSpatialEntities_SpatialContextCreatedDelegate__DelegateSignature();
ANDROIDXRSPATIALENTITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRSpatialCapabilityInfo();
UPackage* Z_Construct_UPackage__Script_AndroidXRSpatialEntities();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESpatialCapability ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpatialCapability;
static UEnum* ESpatialCapability_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESpatialCapability.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESpatialCapability.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialCapability, (UObject*)Z_Construct_UPackage__Script_AndroidXRSpatialEntities(), TEXT("ESpatialCapability"));
	}
	return Z_Registration_Info_UEnum_ESpatialCapability.OuterSingleton;
}
template<> ANDROIDXRSPATIALENTITIES_API UEnum* StaticEnum<ESpatialCapability>()
{
	return ESpatialCapability_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialCapability_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Anchor.Comment", "//Capability to be able to create spatial anchors\n" },
		{ "Anchor.Name", "ESpatialCapability::Anchor" },
		{ "Anchor.ToolTip", "Capability to be able to create spatial anchors" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Spatial capabilities define a runtime\xef\xbf\xbds abilities to discover entities that have a guaranteed set of components on them\n */" },
#endif
		{ "DepthRaycast.Comment", "//Capability to perform a depth raycast against entities\n" },
		{ "DepthRaycast.Name", "ESpatialCapability::DepthRaycast" },
		{ "DepthRaycast.ToolTip", "Capability to perform a depth raycast against entities" },
		{ "MarkerTracking_April_Tag.Comment", "//Capability to be able to detect and track AprilTags\n" },
		{ "MarkerTracking_April_Tag.Name", "ESpatialCapability::MarkerTracking_April_Tag" },
		{ "MarkerTracking_April_Tag.ToolTip", "Capability to be able to detect and track AprilTags" },
		{ "MarkerTracking_Aruco.Comment", "//Capability to be able to detect and track Aruco Markers\n" },
		{ "MarkerTracking_Aruco.Name", "ESpatialCapability::MarkerTracking_Aruco" },
		{ "MarkerTracking_Aruco.ToolTip", "Capability to be able to detect and track Aruco Markers" },
		{ "MarkerTracking_Micro_QR_Code.Comment", "//Capability to be able to detect and track Micro QR codes\n" },
		{ "MarkerTracking_Micro_QR_Code.Name", "ESpatialCapability::MarkerTracking_Micro_QR_Code" },
		{ "MarkerTracking_Micro_QR_Code.ToolTip", "Capability to be able to detect and track Micro QR codes" },
		{ "MarkerTracking_QR_Code.Comment", "//Capability to be able to detect and track QR codes\n" },
		{ "MarkerTracking_QR_Code.Name", "ESpatialCapability::MarkerTracking_QR_Code" },
		{ "MarkerTracking_QR_Code.ToolTip", "Capability to be able to detect and track QR codes" },
		{ "ModuleRelativePath", "Public/AndroidXRSpatialEntitiesTypes.h" },
		{ "ObjectTracking.Comment", "//Capability to track objects\n" },
		{ "ObjectTracking.Name", "ESpatialCapability::ObjectTracking" },
		{ "ObjectTracking.ToolTip", "Capability to track objects" },
		{ "PlaneTracking.Comment", "// Plane tracking\n" },
		{ "PlaneTracking.Name", "ESpatialCapability::PlaneTracking" },
		{ "PlaneTracking.ToolTip", "Plane tracking" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spatial capabilities define a runtime\xef\xbf\xbds abilities to discover entities that have a guaranteed set of components on them" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESpatialCapability::PlaneTracking", (int64)ESpatialCapability::PlaneTracking },
		{ "ESpatialCapability::MarkerTracking_QR_Code", (int64)ESpatialCapability::MarkerTracking_QR_Code },
		{ "ESpatialCapability::MarkerTracking_Micro_QR_Code", (int64)ESpatialCapability::MarkerTracking_Micro_QR_Code },
		{ "ESpatialCapability::MarkerTracking_Aruco", (int64)ESpatialCapability::MarkerTracking_Aruco },
		{ "ESpatialCapability::MarkerTracking_April_Tag", (int64)ESpatialCapability::MarkerTracking_April_Tag },
		{ "ESpatialCapability::Anchor", (int64)ESpatialCapability::Anchor },
		{ "ESpatialCapability::ObjectTracking", (int64)ESpatialCapability::ObjectTracking },
		{ "ESpatialCapability::DepthRaycast", (int64)ESpatialCapability::DepthRaycast },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialCapability_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXRSpatialEntities,
	nullptr,
	"ESpatialCapability",
	"ESpatialCapability",
	Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialCapability_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialCapability_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialCapability_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialCapability_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialCapability()
{
	if (!Z_Registration_Info_UEnum_ESpatialCapability.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpatialCapability.InnerSingleton, Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialCapability_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESpatialCapability.InnerSingleton;
}
// ********** End Enum ESpatialCapability **********************************************************

// ********** Begin Enum ESpatialCapabilityFeature *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpatialCapabilityFeature;
static UEnum* ESpatialCapabilityFeature_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESpatialCapabilityFeature.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESpatialCapabilityFeature.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialCapabilityFeature, (UObject*)Z_Construct_UPackage__Script_AndroidXRSpatialEntities(), TEXT("ESpatialCapabilityFeature"));
	}
	return Z_Registration_Info_UEnum_ESpatialCapabilityFeature.OuterSingleton;
}
template<> ANDROIDXRSPATIALENTITIES_API UEnum* StaticEnum<ESpatialCapabilityFeature>()
{
	return ESpatialCapabilityFeature_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialCapabilityFeature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Some capabilities have parameters exposed to the application to configure how the component data is computed by the runtime. These dimensions of parameterization/configurability are known as capability features\n*/" },
#endif
		{ "FixedSizeMarkers.Comment", "//Capability feature to allow applications to specify the size for the markers\n" },
		{ "FixedSizeMarkers.Name", "ESpatialCapabilityFeature::FixedSizeMarkers" },
		{ "FixedSizeMarkers.ToolTip", "Capability feature to allow applications to specify the size for the markers" },
		{ "ModuleRelativePath", "Public/AndroidXRSpatialEntitiesTypes.h" },
		{ "StaticMarkers.Comment", "//Capability feature to allow applications to specify if markers are static\n" },
		{ "StaticMarkers.Name", "ESpatialCapabilityFeature::StaticMarkers" },
		{ "StaticMarkers.ToolTip", "Capability feature to allow applications to specify if markers are static" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Some capabilities have parameters exposed to the application to configure how the component data is computed by the runtime. These dimensions of parameterization/configurability are known as capability features" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESpatialCapabilityFeature::FixedSizeMarkers", (int64)ESpatialCapabilityFeature::FixedSizeMarkers },
		{ "ESpatialCapabilityFeature::StaticMarkers", (int64)ESpatialCapabilityFeature::StaticMarkers },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialCapabilityFeature_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXRSpatialEntities,
	nullptr,
	"ESpatialCapabilityFeature",
	"ESpatialCapabilityFeature",
	Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialCapabilityFeature_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialCapabilityFeature_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialCapabilityFeature_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialCapabilityFeature_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialCapabilityFeature()
{
	if (!Z_Registration_Info_UEnum_ESpatialCapabilityFeature.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpatialCapabilityFeature.InnerSingleton, Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialCapabilityFeature_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESpatialCapabilityFeature.InnerSingleton;
}
// ********** End Enum ESpatialCapabilityFeature ***************************************************

// ********** Begin Enum ESpatialComponentType *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpatialComponentType;
static UEnum* ESpatialComponentType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESpatialComponentType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESpatialComponentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialComponentType, (UObject*)Z_Construct_UPackage__Script_AndroidXRSpatialEntities(), TEXT("ESpatialComponentType"));
	}
	return Z_Registration_Info_UEnum_ESpatialComponentType.OuterSingleton;
}
template<> ANDROIDXRSPATIALENTITIES_API UEnum* StaticEnum<ESpatialComponentType>()
{
	return ESpatialComponentType_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialComponentType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Anchor.Comment", "//Component that provides the location for an anchor\n" },
		{ "Anchor.Name", "ESpatialComponentType::Anchor" },
		{ "Anchor.ToolTip", "Component that provides the location for an anchor" },
		{ "BlueprintType", "true" },
		{ "Bounded2D.Comment", "//Component that provides the 2D bounds for a spatial entity\n" },
		{ "Bounded2D.Name", "ESpatialComponentType::Bounded2D" },
		{ "Bounded2D.ToolTip", "Component that provides the 2D bounds for a spatial entity" },
		{ "Bounded3D.Comment", "//Component that provides the 3D bounds for a spatial entity\n" },
		{ "Bounded3D.Name", "ESpatialComponentType::Bounded3D" },
		{ "Bounded3D.ToolTip", "Component that provides the 3D bounds for a spatial entity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* A spatial entity has one or more components which provide data or behaviors for that entity\n*/" },
#endif
		{ "Marker.Comment", "//A component describing the marker type\n" },
		{ "Marker.Name", "ESpatialComponentType::Marker" },
		{ "Marker.ToolTip", "A component describing the marker type" },
		{ "Mesh2D.Comment", "//Component that provides a 2D mesh for a spatial entityzs\n" },
		{ "Mesh2D.Name", "ESpatialComponentType::Mesh2D" },
		{ "Mesh2D.ToolTip", "Component that provides a 2D mesh for a spatial entityzs" },
		{ "Mesh3D.Comment", "//Component that provides a 3D mesh for a spatial entity\n" },
		{ "Mesh3D.Name", "ESpatialComponentType::Mesh3D" },
		{ "Mesh3D.ToolTip", "Component that provides a 3D mesh for a spatial entity" },
		{ "ModuleRelativePath", "Public/AndroidXRSpatialEntitiesTypes.h" },
		{ "None.Name", "ESpatialComponentType::None" },
		{ "ObjectSemanticLabel.Comment", "//Component that provides a semantic label for an object\n" },
		{ "ObjectSemanticLabel.Name", "ESpatialComponentType::ObjectSemanticLabel" },
		{ "ObjectSemanticLabel.ToolTip", "Component that provides a semantic label for an object" },
		{ "Parent.Comment", "//Component that provides the FSpatialEntityId of the parent for a spatial entity\n" },
		{ "Parent.Name", "ESpatialComponentType::Parent" },
		{ "Parent.ToolTip", "Component that provides the FSpatialEntityId of the parent for a spatial entity" },
		{ "Persistence.Comment", "//Component that provides the persisted UUID for a spatial entity\n" },
		{ "Persistence.Name", "ESpatialComponentType::Persistence" },
		{ "Persistence.ToolTip", "Component that provides the persisted UUID for a spatial entity" },
		{ "PlaneAlignment.Comment", "//Component that provides the plane alignment enum for a spatial entity\n" },
		{ "PlaneAlignment.Name", "ESpatialComponentType::PlaneAlignment" },
		{ "PlaneAlignment.ToolTip", "Component that provides the plane alignment enum for a spatial entity" },
		{ "PlaneSemanticLabel.Comment", "//Component that provides a semantic label for a plane\n" },
		{ "PlaneSemanticLabel.Name", "ESpatialComponentType::PlaneSemanticLabel" },
		{ "PlaneSemanticLabel.ToolTip", "Component that provides a semantic label for a plane" },
		{ "Polygon2D.Comment", "//Component that provides a 2D boundary polygon for a spatial entity\n" },
		{ "Polygon2D.Name", "ESpatialComponentType::Polygon2D" },
		{ "Polygon2D.ToolTip", "Component that provides a 2D boundary polygon for a spatial entity" },
		{ "RaycastResult.Comment", "//Component that provides the result of a raycast\n" },
		{ "RaycastResult.Name", "ESpatialComponentType::RaycastResult" },
		{ "RaycastResult.ToolTip", "Component that provides the result of a raycast" },
		{ "SubsumedByAndroid.Comment", "//The comonent that the entity is subsumed by\n" },
		{ "SubsumedByAndroid.Name", "ESpatialComponentType::SubsumedByAndroid" },
		{ "SubsumedByAndroid.ToolTip", "The comonent that the entity is subsumed by" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A spatial entity has one or more components which provide data or behaviors for that entity" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESpatialComponentType::None", (int64)ESpatialComponentType::None },
		{ "ESpatialComponentType::Bounded2D", (int64)ESpatialComponentType::Bounded2D },
		{ "ESpatialComponentType::Bounded3D", (int64)ESpatialComponentType::Bounded3D },
		{ "ESpatialComponentType::Parent", (int64)ESpatialComponentType::Parent },
		{ "ESpatialComponentType::Mesh3D", (int64)ESpatialComponentType::Mesh3D },
		{ "ESpatialComponentType::PlaneAlignment", (int64)ESpatialComponentType::PlaneAlignment },
		{ "ESpatialComponentType::Mesh2D", (int64)ESpatialComponentType::Mesh2D },
		{ "ESpatialComponentType::Polygon2D", (int64)ESpatialComponentType::Polygon2D },
		{ "ESpatialComponentType::PlaneSemanticLabel", (int64)ESpatialComponentType::PlaneSemanticLabel },
		{ "ESpatialComponentType::Marker", (int64)ESpatialComponentType::Marker },
		{ "ESpatialComponentType::Anchor", (int64)ESpatialComponentType::Anchor },
		{ "ESpatialComponentType::Persistence", (int64)ESpatialComponentType::Persistence },
		{ "ESpatialComponentType::ObjectSemanticLabel", (int64)ESpatialComponentType::ObjectSemanticLabel },
		{ "ESpatialComponentType::RaycastResult", (int64)ESpatialComponentType::RaycastResult },
		{ "ESpatialComponentType::SubsumedByAndroid", (int64)ESpatialComponentType::SubsumedByAndroid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialComponentType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXRSpatialEntities,
	nullptr,
	"ESpatialComponentType",
	"ESpatialComponentType",
	Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialComponentType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialComponentType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialComponentType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialComponentType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialComponentType()
{
	if (!Z_Registration_Info_UEnum_ESpatialComponentType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpatialComponentType.InnerSingleton, Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialComponentType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESpatialComponentType.InnerSingleton;
}
// ********** End Enum ESpatialComponentType *******************************************************

// ********** Begin Enum ESpatialEntityTrackingState ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpatialEntityTrackingState;
static UEnum* ESpatialEntityTrackingState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESpatialEntityTrackingState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESpatialEntityTrackingState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialEntityTrackingState, (UObject*)Z_Construct_UPackage__Script_AndroidXRSpatialEntities(), TEXT("ESpatialEntityTrackingState"));
	}
	return Z_Registration_Info_UEnum_ESpatialEntityTrackingState.OuterSingleton;
}
template<> ANDROIDXRSPATIALENTITIES_API UEnum* StaticEnum<ESpatialEntityTrackingState>()
{
	return ESpatialEntityTrackingState_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialEntityTrackingState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* The possible spatial entity tracking states\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialEntitiesTypes.h" },
		{ "Paused.Comment", "//The runtime has paused tracking this entity but may resume tracking it in the future\n" },
		{ "Paused.Name", "ESpatialEntityTrackingState::Paused" },
		{ "Paused.ToolTip", "The runtime has paused tracking this entity but may resume tracking it in the future" },
		{ "Stopped.Comment", "//The runtime has stopped tracking this entity and will never resume tracking it\n" },
		{ "Stopped.Name", "ESpatialEntityTrackingState::Stopped" },
		{ "Stopped.ToolTip", "The runtime has stopped tracking this entity and will never resume tracking it" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The possible spatial entity tracking states" },
#endif
		{ "Tracking.Comment", "//The runtime is currently tracking this entity and its component data is valid\n" },
		{ "Tracking.Name", "ESpatialEntityTrackingState::Tracking" },
		{ "Tracking.ToolTip", "The runtime is currently tracking this entity and its component data is valid" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESpatialEntityTrackingState::Stopped", (int64)ESpatialEntityTrackingState::Stopped },
		{ "ESpatialEntityTrackingState::Paused", (int64)ESpatialEntityTrackingState::Paused },
		{ "ESpatialEntityTrackingState::Tracking", (int64)ESpatialEntityTrackingState::Tracking },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialEntityTrackingState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXRSpatialEntities,
	nullptr,
	"ESpatialEntityTrackingState",
	"ESpatialEntityTrackingState",
	Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialEntityTrackingState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialEntityTrackingState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialEntityTrackingState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialEntityTrackingState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialEntityTrackingState()
{
	if (!Z_Registration_Info_UEnum_ESpatialEntityTrackingState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpatialEntityTrackingState.InnerSingleton, Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialEntityTrackingState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESpatialEntityTrackingState.InnerSingleton;
}
// ********** End Enum ESpatialEntityTrackingState *************************************************

// ********** Begin ScriptStruct FAndroidXRSpatialCapabilityInfo ***********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAndroidXRSpatialCapabilityInfo;
class UScriptStruct* FAndroidXRSpatialCapabilityInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRSpatialCapabilityInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAndroidXRSpatialCapabilityInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidXRSpatialCapabilityInfo, (UObject*)Z_Construct_UPackage__Script_AndroidXRSpatialEntities(), TEXT("AndroidXRSpatialCapabilityInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRSpatialCapabilityInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAndroidXRSpatialCapabilityInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AndroidXRSpatialEntitiesTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCapabilitySupported_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Entities" },
		{ "ModuleRelativePath", "Public/AndroidXRSpatialEntitiesTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SupportedComponents_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Entities" },
		{ "ModuleRelativePath", "Public/AndroidXRSpatialEntitiesTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SupportedFeatures_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Entities" },
		{ "ModuleRelativePath", "Public/AndroidXRSpatialEntitiesTypes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsCapabilitySupported_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCapabilitySupported;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SupportedComponents_ElementProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SupportedComponents_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_SupportedComponents;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SupportedFeatures_ElementProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SupportedFeatures_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_SupportedFeatures;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidXRSpatialCapabilityInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FAndroidXRSpatialCapabilityInfo_Statics::NewProp_bIsCapabilitySupported_SetBit(void* Obj)
{
	((FAndroidXRSpatialCapabilityInfo*)Obj)->bIsCapabilitySupported = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAndroidXRSpatialCapabilityInfo_Statics::NewProp_bIsCapabilitySupported = { "bIsCapabilitySupported", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAndroidXRSpatialCapabilityInfo), &Z_Construct_UScriptStruct_FAndroidXRSpatialCapabilityInfo_Statics::NewProp_bIsCapabilitySupported_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCapabilitySupported_MetaData), NewProp_bIsCapabilitySupported_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAndroidXRSpatialCapabilityInfo_Statics::NewProp_SupportedComponents_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAndroidXRSpatialCapabilityInfo_Statics::NewProp_SupportedComponents_ElementProp = { "SupportedComponents", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialComponentType, METADATA_PARAMS(0, nullptr) }; // 1632774629
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FAndroidXRSpatialCapabilityInfo_Statics::NewProp_SupportedComponents = { "SupportedComponents", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRSpatialCapabilityInfo, SupportedComponents), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SupportedComponents_MetaData), NewProp_SupportedComponents_MetaData) }; // 1632774629
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAndroidXRSpatialCapabilityInfo_Statics::NewProp_SupportedFeatures_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAndroidXRSpatialCapabilityInfo_Statics::NewProp_SupportedFeatures_ElementProp = { "SupportedFeatures", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_AndroidXRSpatialEntities_ESpatialCapabilityFeature, METADATA_PARAMS(0, nullptr) }; // 1200459797
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FAndroidXRSpatialCapabilityInfo_Statics::NewProp_SupportedFeatures = { "SupportedFeatures", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRSpatialCapabilityInfo, SupportedFeatures), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SupportedFeatures_MetaData), NewProp_SupportedFeatures_MetaData) }; // 1200459797
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAndroidXRSpatialCapabilityInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRSpatialCapabilityInfo_Statics::NewProp_bIsCapabilitySupported,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRSpatialCapabilityInfo_Statics::NewProp_SupportedComponents_ElementProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRSpatialCapabilityInfo_Statics::NewProp_SupportedComponents_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRSpatialCapabilityInfo_Statics::NewProp_SupportedComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRSpatialCapabilityInfo_Statics::NewProp_SupportedFeatures_ElementProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRSpatialCapabilityInfo_Statics::NewProp_SupportedFeatures_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRSpatialCapabilityInfo_Statics::NewProp_SupportedFeatures,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRSpatialCapabilityInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidXRSpatialCapabilityInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRSpatialEntities,
	nullptr,
	&NewStructOps,
	"AndroidXRSpatialCapabilityInfo",
	Z_Construct_UScriptStruct_FAndroidXRSpatialCapabilityInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRSpatialCapabilityInfo_Statics::PropPointers),
	sizeof(FAndroidXRSpatialCapabilityInfo),
	alignof(FAndroidXRSpatialCapabilityInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRSpatialCapabilityInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAndroidXRSpatialCapabilityInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRSpatialCapabilityInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRSpatialCapabilityInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAndroidXRSpatialCapabilityInfo.InnerSingleton, Z_Construct_UScriptStruct_FAndroidXRSpatialCapabilityInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRSpatialCapabilityInfo.InnerSingleton;
}
// ********** End ScriptStruct FAndroidXRSpatialCapabilityInfo *************************************

// ********** Begin Delegate FSpatialContextCreatedDelegate ****************************************
struct Z_Construct_UDelegateFunction_AndroidXRSpatialEntities_SpatialContextCreatedDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AndroidXRSpatialEntitiesTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AndroidXRSpatialEntities_SpatialContextCreatedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AndroidXRSpatialEntities, nullptr, "SpatialContextCreatedDelegate__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRSpatialEntities_SpatialContextCreatedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AndroidXRSpatialEntities_SpatialContextCreatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_AndroidXRSpatialEntities_SpatialContextCreatedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AndroidXRSpatialEntities_SpatialContextCreatedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSpatialContextCreatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpatialContextCreatedDelegate)
{
	SpatialContextCreatedDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FSpatialContextCreatedDelegate ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialEntities_Source_AndroidXRSpatialEntities_Public_AndroidXRSpatialEntitiesTypes_h__Script_AndroidXRSpatialEntities_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESpatialCapability_StaticEnum, TEXT("ESpatialCapability"), &Z_Registration_Info_UEnum_ESpatialCapability, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4174530781U) },
		{ ESpatialCapabilityFeature_StaticEnum, TEXT("ESpatialCapabilityFeature"), &Z_Registration_Info_UEnum_ESpatialCapabilityFeature, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1200459797U) },
		{ ESpatialComponentType_StaticEnum, TEXT("ESpatialComponentType"), &Z_Registration_Info_UEnum_ESpatialComponentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1632774629U) },
		{ ESpatialEntityTrackingState_StaticEnum, TEXT("ESpatialEntityTrackingState"), &Z_Registration_Info_UEnum_ESpatialEntityTrackingState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1393767310U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAndroidXRSpatialCapabilityInfo::StaticStruct, Z_Construct_UScriptStruct_FAndroidXRSpatialCapabilityInfo_Statics::NewStructOps, TEXT("AndroidXRSpatialCapabilityInfo"), &Z_Registration_Info_UScriptStruct_FAndroidXRSpatialCapabilityInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAndroidXRSpatialCapabilityInfo), 3438250740U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialEntities_Source_AndroidXRSpatialEntities_Public_AndroidXRSpatialEntitiesTypes_h__Script_AndroidXRSpatialEntities_1102668961(TEXT("/Script/AndroidXRSpatialEntities"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialEntities_Source_AndroidXRSpatialEntities_Public_AndroidXRSpatialEntitiesTypes_h__Script_AndroidXRSpatialEntities_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialEntities_Source_AndroidXRSpatialEntities_Public_AndroidXRSpatialEntitiesTypes_h__Script_AndroidXRSpatialEntities_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialEntities_Source_AndroidXRSpatialEntities_Public_AndroidXRSpatialEntitiesTypes_h__Script_AndroidXRSpatialEntities_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialEntities_Source_AndroidXRSpatialEntities_Public_AndroidXRSpatialEntitiesTypes_h__Script_AndroidXRSpatialEntities_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
