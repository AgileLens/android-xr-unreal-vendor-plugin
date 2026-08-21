// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpatialAnchorWidget.h"

#ifdef UNREALSAMPLES_SpatialAnchorWidget_generated_h
#error "SpatialAnchorWidget.generated.h already included, missing '#pragma once' in SpatialAnchorWidget.h"
#endif
#define UNREALSAMPLES_SpatialAnchorWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class ESpatialAnchorOperationMode : uint8;

// ********** Begin Delegate FSpatialAnchorOperationModeChagned ************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialAnchorWidget_h_37_DELEGATE \
UNREALSAMPLES_API void FSpatialAnchorOperationModeChagned_DelegateWrapper(const FMulticastScriptDelegate& SpatialAnchorOperationModeChagned, ESpatialAnchorOperationMode Operation);


// ********** End Delegate FSpatialAnchorOperationModeChagned **************************************

// ********** Begin Delegate FSpatialWidgetButtonClicked *******************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialAnchorWidget_h_38_DELEGATE \
UNREALSAMPLES_API void FSpatialWidgetButtonClicked_DelegateWrapper(const FMulticastScriptDelegate& SpatialWidgetButtonClicked);


// ********** End Delegate FSpatialWidgetButtonClicked *********************************************

// ********** Begin Class USpatialAnchorWidget *****************************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialAnchorWidget_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoadPersistedClickedHandler); \
	DECLARE_FUNCTION(execExecuteClickedHandler); \
	DECLARE_FUNCTION(execStopClickedHandler); \
	DECLARE_FUNCTION(execStartClickedHandler);


UNREALSAMPLES_API UClass* Z_Construct_UClass_USpatialAnchorWidget_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialAnchorWidget_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpatialAnchorWidget(); \
	friend struct Z_Construct_UClass_USpatialAnchorWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALSAMPLES_API UClass* Z_Construct_UClass_USpatialAnchorWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(USpatialAnchorWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealSamples"), Z_Construct_UClass_USpatialAnchorWidget_NoRegister) \
	DECLARE_SERIALIZER(USpatialAnchorWidget)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialAnchorWidget_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpatialAnchorWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USpatialAnchorWidget(USpatialAnchorWidget&&) = delete; \
	USpatialAnchorWidget(const USpatialAnchorWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpatialAnchorWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpatialAnchorWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpatialAnchorWidget) \
	NO_API virtual ~USpatialAnchorWidget();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialAnchorWidget_h_39_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialAnchorWidget_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialAnchorWidget_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialAnchorWidget_h_42_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialAnchorWidget_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USpatialAnchorWidget;

// ********** End Class USpatialAnchorWidget *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialAnchorWidget_h

// ********** Begin Enum ESpatialAnchorOperationMode ***********************************************
#define FOREACH_ENUM_ESPATIALANCHOROPERATIONMODE(op) \
	op(ESpatialAnchorOperationMode::Create) \
	op(ESpatialAnchorOperationMode::Delete) \
	op(ESpatialAnchorOperationMode::Persist) \
	op(ESpatialAnchorOperationMode::Unpersist) 

enum class ESpatialAnchorOperationMode : uint8;
template<> struct TIsUEnumClass<ESpatialAnchorOperationMode> { enum { Value = true }; };
template<> UNREALSAMPLES_API UEnum* StaticEnum<ESpatialAnchorOperationMode>();
// ********** End Enum ESpatialAnchorOperationMode *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
