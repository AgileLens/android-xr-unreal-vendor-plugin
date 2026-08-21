// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidXRSettings.h"

#ifdef ANDROIDXR_AndroidXRSettings_generated_h
#error "AndroidXRSettings.generated.h already included, missing '#pragma once' in AndroidXRSettings.h"
#endif
#define ANDROIDXR_AndroidXRSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAndroidXRSettings *******************************************************
ANDROIDXR_API UClass* Z_Construct_UClass_UAndroidXRSettings_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXR_Public_AndroidXRSettings_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAndroidXRSettings(); \
	friend struct Z_Construct_UClass_UAndroidXRSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANDROIDXR_API UClass* Z_Construct_UClass_UAndroidXRSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAndroidXRSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AndroidXR"), Z_Construct_UClass_UAndroidXRSettings_NoRegister) \
	DECLARE_SERIALIZER(UAndroidXRSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXR_Public_AndroidXRSettings_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidXRSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAndroidXRSettings(UAndroidXRSettings&&) = delete; \
	UAndroidXRSettings(const UAndroidXRSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidXRSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidXRSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidXRSettings) \
	NO_API virtual ~UAndroidXRSettings();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXR_Public_AndroidXRSettings_h_21_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXR_Public_AndroidXRSettings_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXR_Public_AndroidXRSettings_h_24_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXR_Public_AndroidXRSettings_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAndroidXRSettings;

// ********** End Class UAndroidXRSettings *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXR_Public_AndroidXRSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
