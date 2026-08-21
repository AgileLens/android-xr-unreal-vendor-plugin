// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidXRTrackablesObjectTypes.h"

#ifdef ANDROIDXRTRACKABLESOBJECT_AndroidXRTrackablesObjectTypes_generated_h
#error "AndroidXRTrackablesObjectTypes.generated.h already included, missing '#pragma once' in AndroidXRTrackablesObjectTypes.h"
#endif
#define ANDROIDXRTRACKABLESOBJECT_AndroidXRTrackablesObjectTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAndroidXRTrackableObject *****************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRTrackablesObject_Source_AndroidXRTrackablesObject_Public_AndroidXRTrackablesObjectTypes_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAndroidXRTrackableObject_Statics; \
	ANDROIDXRTRACKABLESOBJECT_API static class UScriptStruct* StaticStruct();


struct FAndroidXRTrackableObject;
// ********** End ScriptStruct FAndroidXRTrackableObject *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRTrackablesObject_Source_AndroidXRTrackablesObject_Public_AndroidXRTrackablesObjectTypes_h

// ********** Begin Enum EAndroidXRTrackablesObjectLabel *******************************************
#define FOREACH_ENUM_EANDROIDXRTRACKABLESOBJECTLABEL(op) \
	op(EAndroidXRTrackablesObjectLabel::Unknown) \
	op(EAndroidXRTrackablesObjectLabel::Keyboard) \
	op(EAndroidXRTrackablesObjectLabel::Mouse) \
	op(EAndroidXRTrackablesObjectLabel::Laptop) 

enum class EAndroidXRTrackablesObjectLabel : uint8;
template<> struct TIsUEnumClass<EAndroidXRTrackablesObjectLabel> { enum { Value = true }; };
template<> ANDROIDXRTRACKABLESOBJECT_API UEnum* StaticEnum<EAndroidXRTrackablesObjectLabel>();
// ********** End Enum EAndroidXRTrackablesObjectLabel *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
