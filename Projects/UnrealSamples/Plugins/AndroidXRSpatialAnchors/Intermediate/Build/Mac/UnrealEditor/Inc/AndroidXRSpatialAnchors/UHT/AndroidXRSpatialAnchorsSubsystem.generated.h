// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidXRSpatialAnchorsSubsystem.h"

#ifdef ANDROIDXRSPATIALANCHORS_AndroidXRSpatialAnchorsSubsystem_generated_h
#error "AndroidXRSpatialAnchorsSubsystem.generated.h already included, missing '#pragma once' in AndroidXRSpatialAnchorsSubsystem.h"
#endif
#define ANDROIDXRSPATIALANCHORS_AndroidXRSpatialAnchorsSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAndroidXRSpatialAnchorEntity;
class UAndroidXRSpatialAnchorsPersistenceAsyncAction;
enum class ESpatialAnchorPeristenceResult : uint8;

// ********** Begin Class UAndroidXRSpatialAnchorsSubsystem ****************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorsSubsystem_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoadPersistedAnchors); \
	DECLARE_FUNCTION(execDestroySpatialAnchor); \
	DECLARE_FUNCTION(execCreateSpatialAnchor);


ANDROIDXRSPATIALANCHORS_API UClass* Z_Construct_UClass_UAndroidXRSpatialAnchorsSubsystem_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorsSubsystem_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAndroidXRSpatialAnchorsSubsystem(); \
	friend struct Z_Construct_UClass_UAndroidXRSpatialAnchorsSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANDROIDXRSPATIALANCHORS_API UClass* Z_Construct_UClass_UAndroidXRSpatialAnchorsSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UAndroidXRSpatialAnchorsSubsystem, UAndroidXRSpatialEntitiesSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AndroidXRSpatialAnchors"), Z_Construct_UClass_UAndroidXRSpatialAnchorsSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UAndroidXRSpatialAnchorsSubsystem)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorsSubsystem_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidXRSpatialAnchorsSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAndroidXRSpatialAnchorsSubsystem(UAndroidXRSpatialAnchorsSubsystem&&) = delete; \
	UAndroidXRSpatialAnchorsSubsystem(const UAndroidXRSpatialAnchorsSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidXRSpatialAnchorsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidXRSpatialAnchorsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAndroidXRSpatialAnchorsSubsystem) \
	NO_API virtual ~UAndroidXRSpatialAnchorsSubsystem();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorsSubsystem_h_29_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorsSubsystem_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorsSubsystem_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorsSubsystem_h_32_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorsSubsystem_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAndroidXRSpatialAnchorsSubsystem;

// ********** End Class UAndroidXRSpatialAnchorsSubsystem ******************************************

// ********** Begin Class UAndroidXRSpatialAnchorsPersistenceAsyncAction ***************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorsSubsystem_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPersistOperationFailedHandler); \
	DECLARE_FUNCTION(execPersistOperationFinishedHandler); \
	DECLARE_FUNCTION(execUnPersistAnchorAsync); \
	DECLARE_FUNCTION(execPersistAnchorAsync);


ANDROIDXRSPATIALANCHORS_API UClass* Z_Construct_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorsSubsystem_h_91_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAndroidXRSpatialAnchorsPersistenceAsyncAction(); \
	friend struct Z_Construct_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANDROIDXRSPATIALANCHORS_API UClass* Z_Construct_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction_NoRegister(); \
public: \
	DECLARE_CLASS2(UAndroidXRSpatialAnchorsPersistenceAsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AndroidXRSpatialAnchors"), Z_Construct_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction_NoRegister) \
	DECLARE_SERIALIZER(UAndroidXRSpatialAnchorsPersistenceAsyncAction)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorsSubsystem_h_91_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidXRSpatialAnchorsPersistenceAsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAndroidXRSpatialAnchorsPersistenceAsyncAction(UAndroidXRSpatialAnchorsPersistenceAsyncAction&&) = delete; \
	UAndroidXRSpatialAnchorsPersistenceAsyncAction(const UAndroidXRSpatialAnchorsPersistenceAsyncAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidXRSpatialAnchorsPersistenceAsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidXRSpatialAnchorsPersistenceAsyncAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidXRSpatialAnchorsPersistenceAsyncAction) \
	NO_API virtual ~UAndroidXRSpatialAnchorsPersistenceAsyncAction();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorsSubsystem_h_88_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorsSubsystem_h_91_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorsSubsystem_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorsSubsystem_h_91_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorsSubsystem_h_91_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAndroidXRSpatialAnchorsPersistenceAsyncAction;

// ********** End Class UAndroidXRSpatialAnchorsPersistenceAsyncAction *****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorsSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
