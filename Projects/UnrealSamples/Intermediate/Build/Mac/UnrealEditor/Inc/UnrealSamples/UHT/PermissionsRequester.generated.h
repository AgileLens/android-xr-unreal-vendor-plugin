// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PermissionsRequester.h"

#ifdef UNREALSAMPLES_PermissionsRequester_generated_h
#error "PermissionsRequester.generated.h already included, missing '#pragma once' in PermissionsRequester.h"
#endif
#define UNREALSAMPLES_PermissionsRequester_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UPermissionsRequester;

// ********** Begin Delegate FOnPermissionsGranted *************************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_PermissionsRequester_h_21_DELEGATE \
UNREALSAMPLES_API void FOnPermissionsGranted_DelegateWrapper(const FMulticastScriptDelegate& OnPermissionsGranted, const UPermissionsRequester* PermissionRequester);


// ********** End Delegate FOnPermissionsGranted ***************************************************

// ********** Begin Class UPermissionsRequester ****************************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_PermissionsRequester_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestPermissions); \
	DECLARE_FUNCTION(execAreAllPermissionsGranted); \
	DECLARE_FUNCTION(execIsPermissionGranted); \
	DECLARE_FUNCTION(execOnPermissionGrantedHandler);


UNREALSAMPLES_API UClass* Z_Construct_UClass_UPermissionsRequester_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_PermissionsRequester_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPermissionsRequester(); \
	friend struct Z_Construct_UClass_UPermissionsRequester_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALSAMPLES_API UClass* Z_Construct_UClass_UPermissionsRequester_NoRegister(); \
public: \
	DECLARE_CLASS2(UPermissionsRequester, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealSamples"), Z_Construct_UClass_UPermissionsRequester_NoRegister) \
	DECLARE_SERIALIZER(UPermissionsRequester)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_PermissionsRequester_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPermissionsRequester(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPermissionsRequester(UPermissionsRequester&&) = delete; \
	UPermissionsRequester(const UPermissionsRequester&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPermissionsRequester); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPermissionsRequester); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPermissionsRequester) \
	NO_API virtual ~UPermissionsRequester();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_PermissionsRequester_h_23_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_PermissionsRequester_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_PermissionsRequester_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_PermissionsRequester_h_26_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_PermissionsRequester_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPermissionsRequester;

// ********** End Class UPermissionsRequester ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_PermissionsRequester_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
