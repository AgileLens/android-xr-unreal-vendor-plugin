// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidXRSpatialEntitiesTypes.h"

#ifdef ANDROIDXRSPATIALENTITIES_AndroidXRSpatialEntitiesTypes_generated_h
#error "AndroidXRSpatialEntitiesTypes.generated.h already included, missing '#pragma once' in AndroidXRSpatialEntitiesTypes.h"
#endif
#define ANDROIDXRSPATIALENTITIES_AndroidXRSpatialEntitiesTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAndroidXRSpatialCapabilityInfo ***********************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialEntities_Source_AndroidXRSpatialEntities_Public_AndroidXRSpatialEntitiesTypes_h_109_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAndroidXRSpatialCapabilityInfo_Statics; \
	static class UScriptStruct* StaticStruct();


struct FAndroidXRSpatialCapabilityInfo;
// ********** End ScriptStruct FAndroidXRSpatialCapabilityInfo *************************************

// ********** Begin Delegate FSpatialContextCreatedDelegate ****************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialEntities_Source_AndroidXRSpatialEntities_Public_AndroidXRSpatialEntitiesTypes_h_121_DELEGATE \
ANDROIDXRSPATIALENTITIES_API void FSpatialContextCreatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpatialContextCreatedDelegate);


// ********** End Delegate FSpatialContextCreatedDelegate ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialEntities_Source_AndroidXRSpatialEntities_Public_AndroidXRSpatialEntitiesTypes_h

// ********** Begin Enum ESpatialCapability ********************************************************
#define FOREACH_ENUM_ESPATIALCAPABILITY(op) \
	op(ESpatialCapability::PlaneTracking) \
	op(ESpatialCapability::MarkerTracking_QR_Code) \
	op(ESpatialCapability::MarkerTracking_Micro_QR_Code) \
	op(ESpatialCapability::MarkerTracking_Aruco) \
	op(ESpatialCapability::MarkerTracking_April_Tag) \
	op(ESpatialCapability::Anchor) \
	op(ESpatialCapability::ObjectTracking) \
	op(ESpatialCapability::DepthRaycast) 

enum class ESpatialCapability : uint8;
template<> struct TIsUEnumClass<ESpatialCapability> { enum { Value = true }; };
template<> ANDROIDXRSPATIALENTITIES_API UEnum* StaticEnum<ESpatialCapability>();
// ********** End Enum ESpatialCapability **********************************************************

// ********** Begin Enum ESpatialCapabilityFeature *************************************************
#define FOREACH_ENUM_ESPATIALCAPABILITYFEATURE(op) \
	op(ESpatialCapabilityFeature::FixedSizeMarkers) \
	op(ESpatialCapabilityFeature::StaticMarkers) 

enum class ESpatialCapabilityFeature : uint8;
template<> struct TIsUEnumClass<ESpatialCapabilityFeature> { enum { Value = true }; };
template<> ANDROIDXRSPATIALENTITIES_API UEnum* StaticEnum<ESpatialCapabilityFeature>();
// ********** End Enum ESpatialCapabilityFeature ***************************************************

// ********** Begin Enum ESpatialComponentType *****************************************************
#define FOREACH_ENUM_ESPATIALCOMPONENTTYPE(op) \
	op(ESpatialComponentType::None) \
	op(ESpatialComponentType::Bounded2D) \
	op(ESpatialComponentType::Bounded3D) \
	op(ESpatialComponentType::Parent) \
	op(ESpatialComponentType::Mesh3D) \
	op(ESpatialComponentType::PlaneAlignment) \
	op(ESpatialComponentType::Mesh2D) \
	op(ESpatialComponentType::Polygon2D) \
	op(ESpatialComponentType::PlaneSemanticLabel) \
	op(ESpatialComponentType::Marker) \
	op(ESpatialComponentType::Anchor) \
	op(ESpatialComponentType::Persistence) \
	op(ESpatialComponentType::ObjectSemanticLabel) \
	op(ESpatialComponentType::RaycastResult) \
	op(ESpatialComponentType::SubsumedByAndroid) 

enum class ESpatialComponentType : uint8;
template<> struct TIsUEnumClass<ESpatialComponentType> { enum { Value = true }; };
template<> ANDROIDXRSPATIALENTITIES_API UEnum* StaticEnum<ESpatialComponentType>();
// ********** End Enum ESpatialComponentType *******************************************************

// ********** Begin Enum ESpatialEntityTrackingState ***********************************************
#define FOREACH_ENUM_ESPATIALENTITYTRACKINGSTATE(op) \
	op(ESpatialEntityTrackingState::Stopped) \
	op(ESpatialEntityTrackingState::Paused) \
	op(ESpatialEntityTrackingState::Tracking) 

enum class ESpatialEntityTrackingState : uint8;
template<> struct TIsUEnumClass<ESpatialEntityTrackingState> { enum { Value = true }; };
template<> ANDROIDXRSPATIALENTITIES_API UEnum* StaticEnum<ESpatialEntityTrackingState>();
// ********** End Enum ESpatialEntityTrackingState *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
