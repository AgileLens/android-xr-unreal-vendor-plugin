// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidXRSpatialPlaneEntity.h"

#ifdef ANDROIDXRSPATIALPLANETRACKING_AndroidXRSpatialPlaneEntity_generated_h
#error "AndroidXRSpatialPlaneEntity.generated.h already included, missing '#pragma once' in AndroidXRSpatialPlaneEntity.h"
#endif
#define ANDROIDXRSPATIALPLANETRACKING_AndroidXRSpatialPlaneEntity_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAndroidXRSpatialPlaneEntity;

// ********** Begin ScriptStruct FSpatialPlaneMesh *************************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialPlaneTracking_Source_AndroidXRSpatialPlaneTracking_Public_AndroidXRSpatialPlaneEntity_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpatialPlaneMesh_Statics; \
	ANDROIDXRSPATIALPLANETRACKING_API static class UScriptStruct* StaticStruct();


struct FSpatialPlaneMesh;
// ********** End ScriptStruct FSpatialPlaneMesh ***************************************************

// ********** Begin ScriptStruct FSpatialPlanePolygon **********************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialPlaneTracking_Source_AndroidXRSpatialPlaneTracking_Public_AndroidXRSpatialPlaneEntity_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpatialPlanePolygon_Statics; \
	ANDROIDXRSPATIALPLANETRACKING_API static class UScriptStruct* StaticStruct();


struct FSpatialPlanePolygon;
// ********** End ScriptStruct FSpatialPlanePolygon ************************************************

// ********** Begin Class UAndroidXRSpatialPlaneEntity *********************************************
ANDROIDXRSPATIALPLANETRACKING_API UClass* Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialPlaneTracking_Source_AndroidXRSpatialPlaneTracking_Public_AndroidXRSpatialPlaneEntity_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAndroidXRSpatialPlaneEntity(); \
	friend struct Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANDROIDXRSPATIALPLANETRACKING_API UClass* Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_NoRegister(); \
public: \
	DECLARE_CLASS2(UAndroidXRSpatialPlaneEntity, UAndroidXRSpatialEntity, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AndroidXRSpatialPlaneTracking"), Z_Construct_UClass_UAndroidXRSpatialPlaneEntity_NoRegister) \
	DECLARE_SERIALIZER(UAndroidXRSpatialPlaneEntity)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialPlaneTracking_Source_AndroidXRSpatialPlaneTracking_Public_AndroidXRSpatialPlaneEntity_h_88_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidXRSpatialPlaneEntity(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAndroidXRSpatialPlaneEntity(UAndroidXRSpatialPlaneEntity&&) = delete; \
	UAndroidXRSpatialPlaneEntity(const UAndroidXRSpatialPlaneEntity&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidXRSpatialPlaneEntity); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidXRSpatialPlaneEntity); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidXRSpatialPlaneEntity) \
	NO_API virtual ~UAndroidXRSpatialPlaneEntity();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialPlaneTracking_Source_AndroidXRSpatialPlaneTracking_Public_AndroidXRSpatialPlaneEntity_h_85_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialPlaneTracking_Source_AndroidXRSpatialPlaneTracking_Public_AndroidXRSpatialPlaneEntity_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialPlaneTracking_Source_AndroidXRSpatialPlaneTracking_Public_AndroidXRSpatialPlaneEntity_h_88_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialPlaneTracking_Source_AndroidXRSpatialPlaneTracking_Public_AndroidXRSpatialPlaneEntity_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAndroidXRSpatialPlaneEntity;

// ********** End Class UAndroidXRSpatialPlaneEntity ***********************************************

// ********** Begin Delegate FSpatialPlaneChangedDelegate ******************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialPlaneTracking_Source_AndroidXRSpatialPlaneTracking_Public_AndroidXRSpatialPlaneEntity_h_128_DELEGATE \
ANDROIDXRSPATIALPLANETRACKING_API void FSpatialPlaneChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpatialPlaneChangedDelegate, UAndroidXRSpatialPlaneEntity* Plane);


// ********** End Delegate FSpatialPlaneChangedDelegate ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialPlaneTracking_Source_AndroidXRSpatialPlaneTracking_Public_AndroidXRSpatialPlaneEntity_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
