// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidXRSpatialAnchorEntity.h"

#ifdef ANDROIDXRSPATIALANCHORS_AndroidXRSpatialAnchorEntity_generated_h
#error "AndroidXRSpatialAnchorEntity.generated.h already included, missing '#pragma once' in AndroidXRSpatialAnchorEntity.h"
#endif
#define ANDROIDXRSPATIALANCHORS_AndroidXRSpatialAnchorEntity_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAndroidXRSpatialAnchorEntity;
enum class ESpatialAnchorPeristenceResult : uint8;

// ********** Begin Class UAndroidXRSpatialAnchorEntity ********************************************
ANDROIDXRSPATIALANCHORS_API UClass* Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorEntity_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAndroidXRSpatialAnchorEntity(); \
	friend struct Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANDROIDXRSPATIALANCHORS_API UClass* Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_NoRegister(); \
public: \
	DECLARE_CLASS2(UAndroidXRSpatialAnchorEntity, UAndroidXRSpatialEntity, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AndroidXRSpatialAnchors"), Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_NoRegister) \
	DECLARE_SERIALIZER(UAndroidXRSpatialAnchorEntity)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorEntity_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidXRSpatialAnchorEntity(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAndroidXRSpatialAnchorEntity(UAndroidXRSpatialAnchorEntity&&) = delete; \
	UAndroidXRSpatialAnchorEntity(const UAndroidXRSpatialAnchorEntity&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidXRSpatialAnchorEntity); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidXRSpatialAnchorEntity); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidXRSpatialAnchorEntity) \
	NO_API virtual ~UAndroidXRSpatialAnchorEntity();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorEntity_h_25_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorEntity_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorEntity_h_28_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorEntity_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAndroidXRSpatialAnchorEntity;

// ********** End Class UAndroidXRSpatialAnchorEntity **********************************************

// ********** Begin Delegate FAnchorPersistOperationDelegate ***************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorEntity_h_62_DELEGATE \
ANDROIDXRSPATIALANCHORS_API void FAnchorPersistOperationDelegate_DelegateWrapper(const FMulticastScriptDelegate& AnchorPersistOperationDelegate, UAndroidXRSpatialAnchorEntity* Anchor);


// ********** End Delegate FAnchorPersistOperationDelegate *****************************************

// ********** Begin Delegate FAnchorPersistOperationFailedDelegate *********************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorEntity_h_63_DELEGATE \
ANDROIDXRSPATIALANCHORS_API void FAnchorPersistOperationFailedDelegate_DelegateWrapper(const FMulticastScriptDelegate& AnchorPersistOperationFailedDelegate, ESpatialAnchorPeristenceResult FailureReason);


// ********** End Delegate FAnchorPersistOperationFailedDelegate ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorEntity_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
