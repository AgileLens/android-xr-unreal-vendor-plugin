// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidXRDeviceAnchorPersistenceTypes.h"

#ifdef ANDROIDXRDEVICEANCHORPERSISTENCE_AndroidXRDeviceAnchorPersistenceTypes_generated_h
#error "AndroidXRDeviceAnchorPersistenceTypes.generated.h already included, missing '#pragma once' in AndroidXRDeviceAnchorPersistenceTypes.h"
#endif
#define ANDROIDXRDEVICEANCHORPERSISTENCE_AndroidXRDeviceAnchorPersistenceTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAndroidXRDeviceAnchor ********************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceTypes_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAndroidXRDeviceAnchor_Statics; \
	ANDROIDXRDEVICEANCHORPERSISTENCE_API static class UScriptStruct* StaticStruct();


struct FAndroidXRDeviceAnchor;
// ********** End ScriptStruct FAndroidXRDeviceAnchor **********************************************

// ********** Begin ScriptStruct FAndroidXRDeviceAnchorPersistence *********************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceTypes_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAndroidXRDeviceAnchorPersistence_Statics; \
	ANDROIDXRDEVICEANCHORPERSISTENCE_API static class UScriptStruct* StaticStruct();


struct FAndroidXRDeviceAnchorPersistence;
// ********** End ScriptStruct FAndroidXRDeviceAnchorPersistence ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceTypes_h

// ********** Begin Enum EAndroidXRAnchorPersistState **********************************************
#define FOREACH_ENUM_EANDROIDXRANCHORPERSISTSTATE(op) \
	op(EAndroidXRAnchorPersistState::PersistNotRequested) \
	op(EAndroidXRAnchorPersistState::PersistPending) \
	op(EAndroidXRAnchorPersistState::Persisted) 

enum class EAndroidXRAnchorPersistState : uint8;
template<> struct TIsUEnumClass<EAndroidXRAnchorPersistState> { enum { Value = true }; };
template<> ANDROIDXRDEVICEANCHORPERSISTENCE_API UEnum* StaticEnum<EAndroidXRAnchorPersistState>();
// ********** End Enum EAndroidXRAnchorPersistState ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
