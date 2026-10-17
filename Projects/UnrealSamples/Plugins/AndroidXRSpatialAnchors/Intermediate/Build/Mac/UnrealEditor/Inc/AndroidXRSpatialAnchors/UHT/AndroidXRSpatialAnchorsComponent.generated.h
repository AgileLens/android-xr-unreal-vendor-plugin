// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidXRSpatialAnchorsComponent.h"

#ifdef ANDROIDXRSPATIALANCHORS_AndroidXRSpatialAnchorsComponent_generated_h
#error "AndroidXRSpatialAnchorsComponent.generated.h already included, missing '#pragma once' in AndroidXRSpatialAnchorsComponent.h"
#endif
#define ANDROIDXRSPATIALANCHORS_AndroidXRSpatialAnchorsComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAndroidXRSpatialAnchorEntity;
enum class ESpatialAnchorPeristenceResult : uint8;

// ********** Begin Delegate FSpatialAnchorPersistedDelegate ***************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorsComponent_h_24_DELEGATE \
ANDROIDXRSPATIALANCHORS_API void FSpatialAnchorPersistedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpatialAnchorPersistedDelegate);


// ********** End Delegate FSpatialAnchorPersistedDelegate *****************************************

// ********** Begin Class UAndroidXRSpatialAnchorsComponent ****************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorsComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnpersistFailedHandler); \
	DECLARE_FUNCTION(execPersistFailedHandler); \
	DECLARE_FUNCTION(execAnchorUnpersistedHandler); \
	DECLARE_FUNCTION(execAnchorPersistedHandler); \
	DECLARE_FUNCTION(execIsValidAnchor); \
	DECLARE_FUNCTION(execUnpersistAnchor); \
	DECLARE_FUNCTION(execPersistAnchor); \
	DECLARE_FUNCTION(execDestroyAnchor); \
	DECLARE_FUNCTION(execCreateAnchor); \
	DECLARE_FUNCTION(execInitialize);


ANDROIDXRSPATIALANCHORS_API UClass* Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorsComponent_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAndroidXRSpatialAnchorsComponent(); \
	friend struct Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANDROIDXRSPATIALANCHORS_API UClass* Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAndroidXRSpatialAnchorsComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AndroidXRSpatialAnchors"), Z_Construct_UClass_UAndroidXRSpatialAnchorsComponent_NoRegister) \
	DECLARE_SERIALIZER(UAndroidXRSpatialAnchorsComponent)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorsComponent_h_33_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAndroidXRSpatialAnchorsComponent(UAndroidXRSpatialAnchorsComponent&&) = delete; \
	UAndroidXRSpatialAnchorsComponent(const UAndroidXRSpatialAnchorsComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidXRSpatialAnchorsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidXRSpatialAnchorsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAndroidXRSpatialAnchorsComponent) \
	NO_API virtual ~UAndroidXRSpatialAnchorsComponent();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorsComponent_h_30_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorsComponent_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorsComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorsComponent_h_33_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorsComponent_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAndroidXRSpatialAnchorsComponent;

// ********** End Class UAndroidXRSpatialAnchorsComponent ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorsComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
