// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidXRSpatialTrackingSubsystem.h"

#ifdef ANDROIDXRSPATIALENTITIES_AndroidXRSpatialTrackingSubsystem_generated_h
#error "AndroidXRSpatialTrackingSubsystem.generated.h already included, missing '#pragma once' in AndroidXRSpatialTrackingSubsystem.h"
#endif
#define ANDROIDXRSPATIALENTITIES_AndroidXRSpatialTrackingSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class ESpatialCapability : uint8;
struct FAndroidXRSpatialCapabilityInfo;

// ********** Begin Class UAndroidXRSpatialEntitiesSubsystem ***************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialEntities_Source_AndroidXRSpatialEntities_Public_AndroidXRSpatialTrackingSubsystem_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateDiscoverySnapshotRequest); \
	DECLARE_FUNCTION(execGetCapabilityInfo); \
	DECLARE_FUNCTION(execGetSupportedCapabilities); \
	DECLARE_FUNCTION(execIsReady);


ANDROIDXRSPATIALENTITIES_API UClass* Z_Construct_UClass_UAndroidXRSpatialEntitiesSubsystem_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialEntities_Source_AndroidXRSpatialEntities_Public_AndroidXRSpatialTrackingSubsystem_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAndroidXRSpatialEntitiesSubsystem(); \
	friend struct Z_Construct_UClass_UAndroidXRSpatialEntitiesSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANDROIDXRSPATIALENTITIES_API UClass* Z_Construct_UClass_UAndroidXRSpatialEntitiesSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UAndroidXRSpatialEntitiesSubsystem, UAndroidXRTrackingSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AndroidXRSpatialEntities"), Z_Construct_UClass_UAndroidXRSpatialEntitiesSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UAndroidXRSpatialEntitiesSubsystem)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialEntities_Source_AndroidXRSpatialEntities_Public_AndroidXRSpatialTrackingSubsystem_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidXRSpatialEntitiesSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAndroidXRSpatialEntitiesSubsystem(UAndroidXRSpatialEntitiesSubsystem&&) = delete; \
	UAndroidXRSpatialEntitiesSubsystem(const UAndroidXRSpatialEntitiesSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidXRSpatialEntitiesSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidXRSpatialEntitiesSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAndroidXRSpatialEntitiesSubsystem) \
	NO_API virtual ~UAndroidXRSpatialEntitiesSubsystem();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialEntities_Source_AndroidXRSpatialEntities_Public_AndroidXRSpatialTrackingSubsystem_h_26_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialEntities_Source_AndroidXRSpatialEntities_Public_AndroidXRSpatialTrackingSubsystem_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialEntities_Source_AndroidXRSpatialEntities_Public_AndroidXRSpatialTrackingSubsystem_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialEntities_Source_AndroidXRSpatialEntities_Public_AndroidXRSpatialTrackingSubsystem_h_29_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialEntities_Source_AndroidXRSpatialEntities_Public_AndroidXRSpatialTrackingSubsystem_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAndroidXRSpatialEntitiesSubsystem;

// ********** End Class UAndroidXRSpatialEntitiesSubsystem *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialEntities_Source_AndroidXRSpatialEntities_Public_AndroidXRSpatialTrackingSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
