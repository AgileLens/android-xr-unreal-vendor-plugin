// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidXREyeTrackingTypes.h"

#ifdef ANDROIDXREYETRACKING_AndroidXREyeTrackingTypes_generated_h
#error "AndroidXREyeTrackingTypes.generated.h already included, missing '#pragma once' in AndroidXREyeTrackingTypes.h"
#endif
#define ANDROIDXREYETRACKING_AndroidXREyeTrackingTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAndroidXREyeTracker **********************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXREyeTracking_Source_AndroidXREyeTracking_Public_AndroidXREyeTrackingTypes_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAndroidXREyeTracker_Statics; \
	ANDROIDXREYETRACKING_API static class UScriptStruct* StaticStruct();


struct FAndroidXREyeTracker;
// ********** End ScriptStruct FAndroidXREyeTracker ************************************************

// ********** Begin ScriptStruct FAndroidXREye *****************************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXREyeTracking_Source_AndroidXREyeTracking_Public_AndroidXREyeTrackingTypes_h_82_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAndroidXREye_Statics; \
	ANDROIDXREYETRACKING_API static class UScriptStruct* StaticStruct();


struct FAndroidXREye;
// ********** End ScriptStruct FAndroidXREye *******************************************************

// ********** Begin ScriptStruct FAndroidXREyes ****************************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXREyeTracking_Source_AndroidXREyeTracking_Public_AndroidXREyeTrackingTypes_h_99_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAndroidXREyes_Statics; \
	ANDROIDXREYETRACKING_API static class UScriptStruct* StaticStruct();


struct FAndroidXREyes;
// ********** End ScriptStruct FAndroidXREyes ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXREyeTracking_Source_AndroidXREyeTracking_Public_AndroidXREyeTrackingTypes_h

// ********** Begin Enum EAndroidXREyeIndex ********************************************************
#define FOREACH_ENUM_EANDROIDXREYEINDEX(op) \
	op(EAndroidXREyeIndex::Left) \
	op(EAndroidXREyeIndex::Right) 

enum class EAndroidXREyeIndex : uint8;
template<> struct TIsUEnumClass<EAndroidXREyeIndex> { enum { Value = true }; };
template<> ANDROIDXREYETRACKING_API UEnum* StaticEnum<EAndroidXREyeIndex>();
// ********** End Enum EAndroidXREyeIndex **********************************************************

// ********** Begin Enum EAndroidXREyeState ********************************************************
#define FOREACH_ENUM_EANDROIDXREYESTATE(op) \
	op(EAndroidXREyeState::Invalid) \
	op(EAndroidXREyeState::Gazing) \
	op(EAndroidXREyeState::Shut) 

enum class EAndroidXREyeState : uint8;
template<> struct TIsUEnumClass<EAndroidXREyeState> { enum { Value = true }; };
template<> ANDROIDXREYETRACKING_API UEnum* StaticEnum<EAndroidXREyeState>();
// ********** End Enum EAndroidXREyeState **********************************************************

// ********** Begin Enum EAndroidXREyeTrackingMode *************************************************
#define FOREACH_ENUM_EANDROIDXREYETRACKINGMODE(op) \
	op(EAndroidXREyeTrackingMode::Not_Tracking) \
	op(EAndroidXREyeTrackingMode::Right) \
	op(EAndroidXREyeTrackingMode::Left) \
	op(EAndroidXREyeTrackingMode::Both) 

enum class EAndroidXREyeTrackingMode : uint8;
template<> struct TIsUEnumClass<EAndroidXREyeTrackingMode> { enum { Value = true }; };
template<> ANDROIDXREYETRACKING_API UEnum* StaticEnum<EAndroidXREyeTrackingMode>();
// ********** End Enum EAndroidXREyeTrackingMode ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
