// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidXRTrackingSubsystem.h"

#ifdef ANDROIDXRTRACKINGSUBSYSTEM_AndroidXRTrackingSubsystem_generated_h
#error "AndroidXRTrackingSubsystem.generated.h already included, missing '#pragma once' in AndroidXRTrackingSubsystem.h"
#endif
#define ANDROIDXRTRACKINGSUBSYSTEM_AndroidXRTrackingSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnTrackerCreated *****************************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXRTrackingSubsystem_Public_AndroidXRTrackingSubsystem_h_19_DELEGATE \
ANDROIDXRTRACKINGSUBSYSTEM_API void FOnTrackerCreated_DelegateWrapper(const FMulticastScriptDelegate& OnTrackerCreated);


// ********** End Delegate FOnTrackerCreated *******************************************************

// ********** Begin Delegate FOnTrackerDestroyed ***************************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXRTrackingSubsystem_Public_AndroidXRTrackingSubsystem_h_20_DELEGATE \
ANDROIDXRTRACKINGSUBSYSTEM_API void FOnTrackerDestroyed_DelegateWrapper(const FMulticastScriptDelegate& OnTrackerDestroyed);


// ********** End Delegate FOnTrackerDestroyed *****************************************************

// ********** Begin Class UAndroidXRTrackingSubsystem **********************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXRTrackingSubsystem_Public_AndroidXRTrackingSubsystem_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsTracking); \
	DECLARE_FUNCTION(execStopTracking); \
	DECLARE_FUNCTION(execStartTracking);


ANDROIDXRTRACKINGSUBSYSTEM_API UClass* Z_Construct_UClass_UAndroidXRTrackingSubsystem_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXRTrackingSubsystem_Public_AndroidXRTrackingSubsystem_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAndroidXRTrackingSubsystem(); \
	friend struct Z_Construct_UClass_UAndroidXRTrackingSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANDROIDXRTRACKINGSUBSYSTEM_API UClass* Z_Construct_UClass_UAndroidXRTrackingSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UAndroidXRTrackingSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AndroidXRTrackingSubsystem"), Z_Construct_UClass_UAndroidXRTrackingSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UAndroidXRTrackingSubsystem)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXRTrackingSubsystem_Public_AndroidXRTrackingSubsystem_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidXRTrackingSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAndroidXRTrackingSubsystem(UAndroidXRTrackingSubsystem&&) = delete; \
	UAndroidXRTrackingSubsystem(const UAndroidXRTrackingSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidXRTrackingSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidXRTrackingSubsystem); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UAndroidXRTrackingSubsystem) \
	NO_API virtual ~UAndroidXRTrackingSubsystem();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXRTrackingSubsystem_Public_AndroidXRTrackingSubsystem_h_25_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXRTrackingSubsystem_Public_AndroidXRTrackingSubsystem_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXRTrackingSubsystem_Public_AndroidXRTrackingSubsystem_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXRTrackingSubsystem_Public_AndroidXRTrackingSubsystem_h_28_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXRTrackingSubsystem_Public_AndroidXRTrackingSubsystem_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAndroidXRTrackingSubsystem;

// ********** End Class UAndroidXRTrackingSubsystem ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXRTrackingSubsystem_Public_AndroidXRTrackingSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
