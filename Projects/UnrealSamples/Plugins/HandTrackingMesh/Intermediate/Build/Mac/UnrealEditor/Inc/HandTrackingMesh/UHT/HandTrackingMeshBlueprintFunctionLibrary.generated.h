// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HandTrackingMeshBlueprintFunctionLibrary.h"

#ifdef HANDTRACKINGMESH_HandTrackingMeshBlueprintFunctionLibrary_generated_h
#error "HandTrackingMeshBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in HandTrackingMeshBlueprintFunctionLibrary.h"
#endif
#define HANDTRACKINGMESH_HandTrackingMeshBlueprintFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UMaterialInterface;
class USkeletalMesh;
enum class EControllerHand : uint8;
enum class EHandKeypoint : uint8;

// ********** Begin Class UHandTrackingMeshBlueprintFunctionLibrary ********************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_HandTrackingMesh_Source_HandTrackingMesh_Public_HandTrackingMeshBlueprintFunctionLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBoneNameFromHandKeypoint); \
	DECLARE_FUNCTION(execGetJointTransforms); \
	DECLARE_FUNCTION(execSetHandMeshScale); \
	DECLARE_FUNCTION(execCreateHandMesh);


HANDTRACKINGMESH_API UClass* Z_Construct_UClass_UHandTrackingMeshBlueprintFunctionLibrary_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_HandTrackingMesh_Source_HandTrackingMesh_Public_HandTrackingMeshBlueprintFunctionLibrary_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHandTrackingMeshBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UHandTrackingMeshBlueprintFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HANDTRACKINGMESH_API UClass* Z_Construct_UClass_UHandTrackingMeshBlueprintFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UHandTrackingMeshBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HandTrackingMesh"), Z_Construct_UClass_UHandTrackingMeshBlueprintFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UHandTrackingMeshBlueprintFunctionLibrary)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_HandTrackingMesh_Source_HandTrackingMesh_Public_HandTrackingMeshBlueprintFunctionLibrary_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHandTrackingMeshBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHandTrackingMeshBlueprintFunctionLibrary(UHandTrackingMeshBlueprintFunctionLibrary&&) = delete; \
	UHandTrackingMeshBlueprintFunctionLibrary(const UHandTrackingMeshBlueprintFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHandTrackingMeshBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHandTrackingMeshBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHandTrackingMeshBlueprintFunctionLibrary) \
	NO_API virtual ~UHandTrackingMeshBlueprintFunctionLibrary();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_HandTrackingMesh_Source_HandTrackingMesh_Public_HandTrackingMeshBlueprintFunctionLibrary_h_21_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_HandTrackingMesh_Source_HandTrackingMesh_Public_HandTrackingMeshBlueprintFunctionLibrary_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_HandTrackingMesh_Source_HandTrackingMesh_Public_HandTrackingMeshBlueprintFunctionLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_HandTrackingMesh_Source_HandTrackingMesh_Public_HandTrackingMeshBlueprintFunctionLibrary_h_24_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_HandTrackingMesh_Source_HandTrackingMesh_Public_HandTrackingMeshBlueprintFunctionLibrary_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHandTrackingMeshBlueprintFunctionLibrary;

// ********** End Class UHandTrackingMeshBlueprintFunctionLibrary **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_HandTrackingMesh_Source_HandTrackingMesh_Public_HandTrackingMeshBlueprintFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
