// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HandInteractionBlueprintFunctionLibrary.h"

#ifdef HANDINTERACTION_HandInteractionBlueprintFunctionLibrary_generated_h
#error "HandInteractionBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in HandInteractionBlueprintFunctionLibrary.h"
#endif
#define HANDINTERACTION_HandInteractionBlueprintFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EControllerHand : uint8;
enum class EOpenXRHandInteractionType : uint8;

// ********** Begin Class UHandInteractionBlueprintFunctionLibrary *********************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_HandInteraction_Source_HandInteraction_Public_HandInteractionBlueprintFunctionLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInteractionReady); \
	DECLARE_FUNCTION(execGetInteractionValue); \
	DECLARE_FUNCTION(execGetInteractionPose);


HANDINTERACTION_API UClass* Z_Construct_UClass_UHandInteractionBlueprintFunctionLibrary_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_HandInteraction_Source_HandInteraction_Public_HandInteractionBlueprintFunctionLibrary_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHandInteractionBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UHandInteractionBlueprintFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HANDINTERACTION_API UClass* Z_Construct_UClass_UHandInteractionBlueprintFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UHandInteractionBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HandInteraction"), Z_Construct_UClass_UHandInteractionBlueprintFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UHandInteractionBlueprintFunctionLibrary)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_HandInteraction_Source_HandInteraction_Public_HandInteractionBlueprintFunctionLibrary_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHandInteractionBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHandInteractionBlueprintFunctionLibrary(UHandInteractionBlueprintFunctionLibrary&&) = delete; \
	UHandInteractionBlueprintFunctionLibrary(const UHandInteractionBlueprintFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHandInteractionBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHandInteractionBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHandInteractionBlueprintFunctionLibrary) \
	NO_API virtual ~UHandInteractionBlueprintFunctionLibrary();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_HandInteraction_Source_HandInteraction_Public_HandInteractionBlueprintFunctionLibrary_h_21_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_HandInteraction_Source_HandInteraction_Public_HandInteractionBlueprintFunctionLibrary_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_HandInteraction_Source_HandInteraction_Public_HandInteractionBlueprintFunctionLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_HandInteraction_Source_HandInteraction_Public_HandInteractionBlueprintFunctionLibrary_h_24_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_HandInteraction_Source_HandInteraction_Public_HandInteractionBlueprintFunctionLibrary_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHandInteractionBlueprintFunctionLibrary;

// ********** End Class UHandInteractionBlueprintFunctionLibrary ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_HandInteraction_Source_HandInteraction_Public_HandInteractionBlueprintFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
