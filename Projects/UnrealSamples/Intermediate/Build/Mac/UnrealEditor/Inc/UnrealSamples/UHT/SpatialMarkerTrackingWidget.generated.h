// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpatialMarkerTrackingWidget.h"

#ifdef UNREALSAMPLES_SpatialMarkerTrackingWidget_generated_h
#error "SpatialMarkerTrackingWidget.generated.h already included, missing '#pragma once' in SpatialMarkerTrackingWidget.h"
#endif
#define UNREALSAMPLES_SpatialMarkerTrackingWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class ESpatialCapability : uint8; struct FAndroidXRSpatialCapabilityInfo;
struct FSpatialMarkerTrackingConfig;

// ********** Begin Delegate FSpatialMarkerTrackingStartClicked ************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialMarkerTrackingWidget_h_30_DELEGATE \
UNREALSAMPLES_API void FSpatialMarkerTrackingStartClicked_DelegateWrapper(const FMulticastScriptDelegate& SpatialMarkerTrackingStartClicked, FSpatialMarkerTrackingConfig const& Config);


// ********** End Delegate FSpatialMarkerTrackingStartClicked **************************************

// ********** Begin Delegate FSpatialMarkerTrackingStopClicked *************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialMarkerTrackingWidget_h_31_DELEGATE \
UNREALSAMPLES_API void FSpatialMarkerTrackingStopClicked_DelegateWrapper(const FMulticastScriptDelegate& SpatialMarkerTrackingStopClicked);


// ********** End Delegate FSpatialMarkerTrackingStopClicked ***************************************

// ********** Begin Class USpatialMarkerConfigWidget ***********************************************
UNREALSAMPLES_API UClass* Z_Construct_UClass_USpatialMarkerConfigWidget_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialMarkerTrackingWidget_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpatialMarkerConfigWidget(); \
	friend struct Z_Construct_UClass_USpatialMarkerConfigWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALSAMPLES_API UClass* Z_Construct_UClass_USpatialMarkerConfigWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(USpatialMarkerConfigWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealSamples"), Z_Construct_UClass_USpatialMarkerConfigWidget_NoRegister) \
	DECLARE_SERIALIZER(USpatialMarkerConfigWidget)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialMarkerTrackingWidget_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpatialMarkerConfigWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USpatialMarkerConfigWidget(USpatialMarkerConfigWidget&&) = delete; \
	USpatialMarkerConfigWidget(const USpatialMarkerConfigWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpatialMarkerConfigWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpatialMarkerConfigWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpatialMarkerConfigWidget) \
	NO_API virtual ~USpatialMarkerConfigWidget();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialMarkerTrackingWidget_h_33_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialMarkerTrackingWidget_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialMarkerTrackingWidget_h_36_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialMarkerTrackingWidget_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USpatialMarkerConfigWidget;

// ********** End Class USpatialMarkerConfigWidget *************************************************

// ********** Begin Class USpatialMarkerConfigWidgetWithComboBox ***********************************
UNREALSAMPLES_API UClass* Z_Construct_UClass_USpatialMarkerConfigWidgetWithComboBox_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialMarkerTrackingWidget_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpatialMarkerConfigWidgetWithComboBox(); \
	friend struct Z_Construct_UClass_USpatialMarkerConfigWidgetWithComboBox_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALSAMPLES_API UClass* Z_Construct_UClass_USpatialMarkerConfigWidgetWithComboBox_NoRegister(); \
public: \
	DECLARE_CLASS2(USpatialMarkerConfigWidgetWithComboBox, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealSamples"), Z_Construct_UClass_USpatialMarkerConfigWidgetWithComboBox_NoRegister) \
	DECLARE_SERIALIZER(USpatialMarkerConfigWidgetWithComboBox)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialMarkerTrackingWidget_h_58_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpatialMarkerConfigWidgetWithComboBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USpatialMarkerConfigWidgetWithComboBox(USpatialMarkerConfigWidgetWithComboBox&&) = delete; \
	USpatialMarkerConfigWidgetWithComboBox(const USpatialMarkerConfigWidgetWithComboBox&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpatialMarkerConfigWidgetWithComboBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpatialMarkerConfigWidgetWithComboBox); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpatialMarkerConfigWidgetWithComboBox) \
	NO_API virtual ~USpatialMarkerConfigWidgetWithComboBox();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialMarkerTrackingWidget_h_55_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialMarkerTrackingWidget_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialMarkerTrackingWidget_h_58_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialMarkerTrackingWidget_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USpatialMarkerConfigWidgetWithComboBox;

// ********** End Class USpatialMarkerConfigWidgetWithComboBox *************************************

// ********** Begin Class USpatialMarkerTrackingWidget *********************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialMarkerTrackingWidget_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execForceUpdateClickedHandler); \
	DECLARE_FUNCTION(execStopClickedHandler); \
	DECLARE_FUNCTION(execStartClickedHandler); \
	DECLARE_FUNCTION(execInitializeMarkerConfig);


UNREALSAMPLES_API UClass* Z_Construct_UClass_USpatialMarkerTrackingWidget_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialMarkerTrackingWidget_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpatialMarkerTrackingWidget(); \
	friend struct Z_Construct_UClass_USpatialMarkerTrackingWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALSAMPLES_API UClass* Z_Construct_UClass_USpatialMarkerTrackingWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(USpatialMarkerTrackingWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealSamples"), Z_Construct_UClass_USpatialMarkerTrackingWidget_NoRegister) \
	DECLARE_SERIALIZER(USpatialMarkerTrackingWidget)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialMarkerTrackingWidget_h_74_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpatialMarkerTrackingWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USpatialMarkerTrackingWidget(USpatialMarkerTrackingWidget&&) = delete; \
	USpatialMarkerTrackingWidget(const USpatialMarkerTrackingWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpatialMarkerTrackingWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpatialMarkerTrackingWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpatialMarkerTrackingWidget) \
	NO_API virtual ~USpatialMarkerTrackingWidget();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialMarkerTrackingWidget_h_71_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialMarkerTrackingWidget_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialMarkerTrackingWidget_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialMarkerTrackingWidget_h_74_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialMarkerTrackingWidget_h_74_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USpatialMarkerTrackingWidget;

// ********** End Class USpatialMarkerTrackingWidget ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialMarkerTrackingWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
