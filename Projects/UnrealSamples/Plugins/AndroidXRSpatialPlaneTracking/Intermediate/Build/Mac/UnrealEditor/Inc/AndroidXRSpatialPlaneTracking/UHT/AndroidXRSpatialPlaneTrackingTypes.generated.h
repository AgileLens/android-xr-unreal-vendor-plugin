// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidXRSpatialPlaneTrackingTypes.h"

#ifdef ANDROIDXRSPATIALPLANETRACKING_AndroidXRSpatialPlaneTrackingTypes_generated_h
#error "AndroidXRSpatialPlaneTrackingTypes.generated.h already included, missing '#pragma once' in AndroidXRSpatialPlaneTrackingTypes.h"
#endif
#define ANDROIDXRSPATIALPLANETRACKING_AndroidXRSpatialPlaneTrackingTypes_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialPlaneTracking_Source_AndroidXRSpatialPlaneTracking_Public_AndroidXRSpatialPlaneTrackingTypes_h

// ********** Begin Enum ESpatialPlaneAlignment ****************************************************
#define FOREACH_ENUM_ESPATIALPLANEALIGNMENT(op) \
	op(ESpatialPlaneAlignment::HorizontalUpward) \
	op(ESpatialPlaneAlignment::HorizontalDownward) \
	op(ESpatialPlaneAlignment::Vertical) \
	op(ESpatialPlaneAlignment::Arbitrary) 

enum class ESpatialPlaneAlignment : uint8;
template<> struct TIsUEnumClass<ESpatialPlaneAlignment> { enum { Value = true }; };
template<> ANDROIDXRSPATIALPLANETRACKING_API UEnum* StaticEnum<ESpatialPlaneAlignment>();
// ********** End Enum ESpatialPlaneAlignment ******************************************************

// ********** Begin Enum ESpatialPlaneSemanticLabel ************************************************
#define FOREACH_ENUM_ESPATIALPLANESEMANTICLABEL(op) \
	op(ESpatialPlaneSemanticLabel::Uncategorized) \
	op(ESpatialPlaneSemanticLabel::Floor) \
	op(ESpatialPlaneSemanticLabel::Wall) \
	op(ESpatialPlaneSemanticLabel::Ceiling) \
	op(ESpatialPlaneSemanticLabel::Table) 

enum class ESpatialPlaneSemanticLabel : uint8;
template<> struct TIsUEnumClass<ESpatialPlaneSemanticLabel> { enum { Value = true }; };
template<> ANDROIDXRSPATIALPLANETRACKING_API UEnum* StaticEnum<ESpatialPlaneSemanticLabel>();
// ********** End Enum ESpatialPlaneSemanticLabel **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
