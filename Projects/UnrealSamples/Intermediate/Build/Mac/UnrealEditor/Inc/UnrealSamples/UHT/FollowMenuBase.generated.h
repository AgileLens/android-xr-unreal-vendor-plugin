// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FollowMenuBase.h"

#ifdef UNREALSAMPLES_FollowMenuBase_generated_h
#error "FollowMenuBase.generated.h already included, missing '#pragma once' in FollowMenuBase.h"
#endif
#define UNREALSAMPLES_FollowMenuBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FDebugMessageActorMessageDelegate *************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_FollowMenuBase_h_25_DELEGATE \
UNREALSAMPLES_API void FDebugMessageActorMessageDelegate_DelegateWrapper(const FMulticastScriptDelegate& DebugMessageActorMessageDelegate, const FString& DebugMessage);


// ********** End Delegate FDebugMessageActorMessageDelegate ***************************************

// ********** Begin Class UFollowMenuBase **********************************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_FollowMenuBase_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDestroyDebugMessageDelegate); \
	DECLARE_FUNCTION(execCreateDebugMessageDelegate);


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_FollowMenuBase_h_30_CALLBACK_WRAPPERS
UNREALSAMPLES_API UClass* Z_Construct_UClass_UFollowMenuBase_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_FollowMenuBase_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFollowMenuBase(); \
	friend struct Z_Construct_UClass_UFollowMenuBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALSAMPLES_API UClass* Z_Construct_UClass_UFollowMenuBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UFollowMenuBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealSamples"), Z_Construct_UClass_UFollowMenuBase_NoRegister) \
	DECLARE_SERIALIZER(UFollowMenuBase)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_FollowMenuBase_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFollowMenuBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFollowMenuBase(UFollowMenuBase&&) = delete; \
	UFollowMenuBase(const UFollowMenuBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFollowMenuBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFollowMenuBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFollowMenuBase) \
	NO_API virtual ~UFollowMenuBase();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_FollowMenuBase_h_27_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_FollowMenuBase_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_FollowMenuBase_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_FollowMenuBase_h_30_CALLBACK_WRAPPERS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_FollowMenuBase_h_30_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_FollowMenuBase_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFollowMenuBase;

// ********** End Class UFollowMenuBase ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_FollowMenuBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
