// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ApplicationThreadWidget.h"

#ifdef UNREALSAMPLES_ApplicationThreadWidget_generated_h
#error "ApplicationThreadWidget.generated.h already included, missing '#pragma once' in ApplicationThreadWidget.h"
#endif
#define UNREALSAMPLES_ApplicationThreadWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EAndroidXRAndroidThreadType : uint8;

// ********** Begin Class UApplicationThreadWidget *************************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_ApplicationThreadWidget_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetAndroidApplicationThread); \
	DECLARE_FUNCTION(execUpdateDisplay); \
	DECLARE_FUNCTION(execCustomInitialize);


UNREALSAMPLES_API UClass* Z_Construct_UClass_UApplicationThreadWidget_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_ApplicationThreadWidget_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUApplicationThreadWidget(); \
	friend struct Z_Construct_UClass_UApplicationThreadWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALSAMPLES_API UClass* Z_Construct_UClass_UApplicationThreadWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UApplicationThreadWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealSamples"), Z_Construct_UClass_UApplicationThreadWidget_NoRegister) \
	DECLARE_SERIALIZER(UApplicationThreadWidget)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_ApplicationThreadWidget_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UApplicationThreadWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UApplicationThreadWidget(UApplicationThreadWidget&&) = delete; \
	UApplicationThreadWidget(const UApplicationThreadWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UApplicationThreadWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UApplicationThreadWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UApplicationThreadWidget) \
	NO_API virtual ~UApplicationThreadWidget();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_ApplicationThreadWidget_h_49_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_ApplicationThreadWidget_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_ApplicationThreadWidget_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_ApplicationThreadWidget_h_52_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_ApplicationThreadWidget_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UApplicationThreadWidget;

// ********** End Class UApplicationThreadWidget ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_ApplicationThreadWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
