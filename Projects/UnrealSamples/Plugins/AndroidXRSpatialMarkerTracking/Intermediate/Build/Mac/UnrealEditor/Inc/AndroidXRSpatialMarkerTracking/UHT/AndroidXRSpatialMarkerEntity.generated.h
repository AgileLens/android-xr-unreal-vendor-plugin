// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidXRSpatialMarkerEntity.h"

#ifdef ANDROIDXRSPATIALMARKERTRACKING_AndroidXRSpatialMarkerEntity_generated_h
#error "AndroidXRSpatialMarkerEntity.generated.h already included, missing '#pragma once' in AndroidXRSpatialMarkerEntity.h"
#endif
#define ANDROIDXRSPATIALMARKERTRACKING_AndroidXRSpatialMarkerEntity_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAndroidXRSpatialMarkerEntity;

// ********** Begin Class UAndroidXRSpatialMarkerEntity ********************************************
ANDROIDXRSPATIALMARKERTRACKING_API UClass* Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialMarkerTracking_Source_AndroidXRSpatialMarkerTracking_Public_AndroidXRSpatialMarkerEntity_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAndroidXRSpatialMarkerEntity(); \
	friend struct Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANDROIDXRSPATIALMARKERTRACKING_API UClass* Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_NoRegister(); \
public: \
	DECLARE_CLASS2(UAndroidXRSpatialMarkerEntity, UAndroidXRSpatialEntity, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AndroidXRSpatialMarkerTracking"), Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_NoRegister) \
	DECLARE_SERIALIZER(UAndroidXRSpatialMarkerEntity)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialMarkerTracking_Source_AndroidXRSpatialMarkerTracking_Public_AndroidXRSpatialMarkerEntity_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidXRSpatialMarkerEntity(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAndroidXRSpatialMarkerEntity(UAndroidXRSpatialMarkerEntity&&) = delete; \
	UAndroidXRSpatialMarkerEntity(const UAndroidXRSpatialMarkerEntity&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidXRSpatialMarkerEntity); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidXRSpatialMarkerEntity); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidXRSpatialMarkerEntity) \
	NO_API virtual ~UAndroidXRSpatialMarkerEntity();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialMarkerTracking_Source_AndroidXRSpatialMarkerTracking_Public_AndroidXRSpatialMarkerEntity_h_40_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialMarkerTracking_Source_AndroidXRSpatialMarkerTracking_Public_AndroidXRSpatialMarkerEntity_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialMarkerTracking_Source_AndroidXRSpatialMarkerTracking_Public_AndroidXRSpatialMarkerEntity_h_43_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialMarkerTracking_Source_AndroidXRSpatialMarkerTracking_Public_AndroidXRSpatialMarkerEntity_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAndroidXRSpatialMarkerEntity;

// ********** End Class UAndroidXRSpatialMarkerEntity **********************************************

// ********** Begin Delegate FOnSpatialMarkerChangedDelegate ***************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialMarkerTracking_Source_AndroidXRSpatialMarkerTracking_Public_AndroidXRSpatialMarkerEntity_h_95_DELEGATE \
ANDROIDXRSPATIALMARKERTRACKING_API void FOnSpatialMarkerChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSpatialMarkerChangedDelegate, UAndroidXRSpatialMarkerEntity* AddedMarker);


// ********** End Delegate FOnSpatialMarkerChangedDelegate *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialMarkerTracking_Source_AndroidXRSpatialMarkerTracking_Public_AndroidXRSpatialMarkerEntity_h

// ********** Begin Enum ESpatialMarkerType ********************************************************
#define FOREACH_ENUM_ESPATIALMARKERTYPE(op) \
	op(ESpatialMarkerType::Aruco) \
	op(ESpatialMarkerType::QR) \
	op(ESpatialMarkerType::MicroQR) \
	op(ESpatialMarkerType::AprilTag) 

enum class ESpatialMarkerType : uint8;
template<> struct TIsUEnumClass<ESpatialMarkerType> { enum { Value = true }; };
template<> ANDROIDXRSPATIALMARKERTRACKING_API UEnum* StaticEnum<ESpatialMarkerType>();
// ********** End Enum ESpatialMarkerType **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
