// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpatialPlanesWidget.h"

#ifdef UNREALSAMPLES_SpatialPlanesWidget_generated_h
#error "SpatialPlanesWidget.generated.h already included, missing '#pragma once' in SpatialPlanesWidget.h"
#endif
#define UNREALSAMPLES_SpatialPlanesWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FSpatialPlaneRenderFilter;

// ********** Begin Delegate FPlaneRenderFilterChanged *********************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialPlanesWidget_h_25_DELEGATE \
UNREALSAMPLES_API void FPlaneRenderFilterChanged_DelegateWrapper(const FMulticastScriptDelegate& PlaneRenderFilterChanged, FSpatialPlaneRenderFilter const& RenderFilter);


// ********** End Delegate FPlaneRenderFilterChanged ***********************************************

// ********** Begin Class USpatialPlanesWidget *****************************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialPlanesWidget_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPolygonRenderChangedHandler); \
	DECLARE_FUNCTION(execMeshRenderChangedHandler); \
	DECLARE_FUNCTION(execBoundsRenderChangedHandler); \
	DECLARE_FUNCTION(execAlignmentFilterChangedHandler); \
	DECLARE_FUNCTION(execLabelFilterChangedHandler);


UNREALSAMPLES_API UClass* Z_Construct_UClass_USpatialPlanesWidget_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialPlanesWidget_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpatialPlanesWidget(); \
	friend struct Z_Construct_UClass_USpatialPlanesWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALSAMPLES_API UClass* Z_Construct_UClass_USpatialPlanesWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(USpatialPlanesWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealSamples"), Z_Construct_UClass_USpatialPlanesWidget_NoRegister) \
	DECLARE_SERIALIZER(USpatialPlanesWidget)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialPlanesWidget_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpatialPlanesWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USpatialPlanesWidget(USpatialPlanesWidget&&) = delete; \
	USpatialPlanesWidget(const USpatialPlanesWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpatialPlanesWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpatialPlanesWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpatialPlanesWidget) \
	NO_API virtual ~USpatialPlanesWidget();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialPlanesWidget_h_27_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialPlanesWidget_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialPlanesWidget_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialPlanesWidget_h_30_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialPlanesWidget_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USpatialPlanesWidget;

// ********** End Class USpatialPlanesWidget *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_SpatialPlanesWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
