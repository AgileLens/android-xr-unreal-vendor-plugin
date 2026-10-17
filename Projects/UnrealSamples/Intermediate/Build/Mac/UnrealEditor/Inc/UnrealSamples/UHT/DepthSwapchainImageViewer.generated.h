// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DepthSwapchainImageViewer.h"

#ifdef UNREALSAMPLES_DepthSwapchainImageViewer_generated_h
#error "DepthSwapchainImageViewer.generated.h already included, missing '#pragma once' in DepthSwapchainImageViewer.h"
#endif
#define UNREALSAMPLES_DepthSwapchainImageViewer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EAndroidXRDepthCameraResolution : uint8;
struct FAndroidXRDepthSwapchain;
struct FAndroidXRDepthSwapchainImage;
struct FAndroidXRDepthView;

// ********** Begin ScriptStruct FSwapchainImageViewData *******************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_DepthSwapchainImageViewer_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSwapchainImageViewData_Statics; \
	UNREALSAMPLES_API static class UScriptStruct* StaticStruct();


struct FSwapchainImageViewData;
// ********** End ScriptStruct FSwapchainImageViewData *********************************************

// ********** Begin Class UDepthSwapchainImageViewer ***********************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_DepthSwapchainImageViewer_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateFromAcquiredDepthSwapchainImage); \
	DECLARE_FUNCTION(execOnDepthSwapchainCreated); \
	DECLARE_FUNCTION(execResetUI); \
	DECLARE_FUNCTION(execOnSourceChanged);


UNREALSAMPLES_API UClass* Z_Construct_UClass_UDepthSwapchainImageViewer_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_DepthSwapchainImageViewer_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDepthSwapchainImageViewer(); \
	friend struct Z_Construct_UClass_UDepthSwapchainImageViewer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALSAMPLES_API UClass* Z_Construct_UClass_UDepthSwapchainImageViewer_NoRegister(); \
public: \
	DECLARE_CLASS2(UDepthSwapchainImageViewer, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealSamples"), Z_Construct_UClass_UDepthSwapchainImageViewer_NoRegister) \
	DECLARE_SERIALIZER(UDepthSwapchainImageViewer)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_DepthSwapchainImageViewer_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDepthSwapchainImageViewer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDepthSwapchainImageViewer(UDepthSwapchainImageViewer&&) = delete; \
	UDepthSwapchainImageViewer(const UDepthSwapchainImageViewer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDepthSwapchainImageViewer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDepthSwapchainImageViewer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDepthSwapchainImageViewer) \
	NO_API virtual ~UDepthSwapchainImageViewer();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_DepthSwapchainImageViewer_h_41_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_DepthSwapchainImageViewer_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_DepthSwapchainImageViewer_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_DepthSwapchainImageViewer_h_44_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_DepthSwapchainImageViewer_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDepthSwapchainImageViewer;

// ********** End Class UDepthSwapchainImageViewer *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_DepthSwapchainImageViewer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
