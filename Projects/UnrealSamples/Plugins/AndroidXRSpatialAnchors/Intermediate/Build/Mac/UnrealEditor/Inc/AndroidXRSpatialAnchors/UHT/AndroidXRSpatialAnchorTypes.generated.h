// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidXRSpatialAnchorTypes.h"

#ifdef ANDROIDXRSPATIALANCHORS_AndroidXRSpatialAnchorTypes_generated_h
#error "AndroidXRSpatialAnchorTypes.generated.h already included, missing '#pragma once' in AndroidXRSpatialAnchorTypes.h"
#endif
#define ANDROIDXRSPATIALANCHORS_AndroidXRSpatialAnchorTypes_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorTypes_h

// ********** Begin Enum ESpatialAnchorPersistState ************************************************
#define FOREACH_ENUM_ESPATIALANCHORPERSISTSTATE(op) \
	op(ESpatialAnchorPersistState::Loaded) \
	op(ESpatialAnchorPersistState::NotFound) 

enum class ESpatialAnchorPersistState : uint8;
template<> struct TIsUEnumClass<ESpatialAnchorPersistState> { enum { Value = true }; };
template<> ANDROIDXRSPATIALANCHORS_API UEnum* StaticEnum<ESpatialAnchorPersistState>();
// ********** End Enum ESpatialAnchorPersistState **************************************************

// ********** Begin Enum ESpatialAnchorPeristenceResult ********************************************
#define FOREACH_ENUM_ESPATIALANCHORPERISTENCERESULT(op) \
	op(ESpatialAnchorPeristenceResult::Success) \
	op(ESpatialAnchorPeristenceResult::PersistedIdNotFound) \
	op(ESpatialAnchorPeristenceResult::EntityNotTracking) \
	op(ESpatialAnchorPeristenceResult::TimedOut) \
	op(ESpatialAnchorPeristenceResult::PersistenceUnsupported) \
	op(ESpatialAnchorPeristenceResult::InvalidPersistenceContext) \
	op(ESpatialAnchorPeristenceResult::InvalidSpatialContext) \
	op(ESpatialAnchorPeristenceResult::InvalidEntity) 

enum class ESpatialAnchorPeristenceResult : uint8;
template<> struct TIsUEnumClass<ESpatialAnchorPeristenceResult> { enum { Value = true }; };
template<> ANDROIDXRSPATIALANCHORS_API UEnum* StaticEnum<ESpatialAnchorPeristenceResult>();
// ********** End Enum ESpatialAnchorPeristenceResult **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
