// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidXRSceneMeshingComponent.h"

#ifdef ANDROIDXRSCENEMESHING_AndroidXRSceneMeshingComponent_generated_h
#error "AndroidXRSceneMeshingComponent.generated.h already included, missing '#pragma once' in AndroidXRSceneMeshingComponent.h"
#endif
#define ANDROIDXRSCENEMESHING_AndroidXRSceneMeshingComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UMRMeshComponent;
struct FGuid;

// ********** Begin Delegate FAndroidXRWorldMeshDeltaDelegateMulticast *****************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSceneMeshing_Source_AndroidXRSceneMeshing_Public_AndroidXRSceneMeshingComponent_h_26_DELEGATE \
ANDROIDXRSCENEMESHING_API void FAndroidXRWorldMeshDeltaDelegateMulticast_DelegateWrapper(const FMulticastScriptDelegate& AndroidXRWorldMeshDeltaDelegateMulticast, TArray<FGuid> const& AddedMeshBlockIds, TArray<FGuid> const& UpdatedMeshBlockIds, TArray<FGuid> const& RemovedMeshBlockIds);


// ********** End Delegate FAndroidXRWorldMeshDeltaDelegateMulticast *******************************

// ********** Begin Class UAndroidXRSceneMeshingComponent ******************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSceneMeshing_Source_AndroidXRSceneMeshing_Public_AndroidXRSceneMeshingComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDrawPublishedBrickBounds); \
	DECLARE_FUNCTION(execClearPublishedMeshHistory); \
	DECLARE_FUNCTION(execConnectMrMesh); \
	DECLARE_FUNCTION(execClearUniqueSubmeshes); \
	DECLARE_FUNCTION(execRequestSubmeshes); \
	DECLARE_FUNCTION(execCreateTracker);


ANDROIDXRSCENEMESHING_API UClass* Z_Construct_UClass_UAndroidXRSceneMeshingComponent_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSceneMeshing_Source_AndroidXRSceneMeshing_Public_AndroidXRSceneMeshingComponent_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAndroidXRSceneMeshingComponent(); \
	friend struct Z_Construct_UClass_UAndroidXRSceneMeshingComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANDROIDXRSCENEMESHING_API UClass* Z_Construct_UClass_UAndroidXRSceneMeshingComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAndroidXRSceneMeshingComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AndroidXRSceneMeshing"), Z_Construct_UClass_UAndroidXRSceneMeshingComponent_NoRegister) \
	DECLARE_SERIALIZER(UAndroidXRSceneMeshingComponent)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSceneMeshing_Source_AndroidXRSceneMeshing_Public_AndroidXRSceneMeshingComponent_h_33_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAndroidXRSceneMeshingComponent(UAndroidXRSceneMeshingComponent&&) = delete; \
	UAndroidXRSceneMeshingComponent(const UAndroidXRSceneMeshingComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidXRSceneMeshingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidXRSceneMeshingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAndroidXRSceneMeshingComponent) \
	NO_API virtual ~UAndroidXRSceneMeshingComponent();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSceneMeshing_Source_AndroidXRSceneMeshing_Public_AndroidXRSceneMeshingComponent_h_30_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSceneMeshing_Source_AndroidXRSceneMeshing_Public_AndroidXRSceneMeshingComponent_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSceneMeshing_Source_AndroidXRSceneMeshing_Public_AndroidXRSceneMeshingComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSceneMeshing_Source_AndroidXRSceneMeshing_Public_AndroidXRSceneMeshingComponent_h_33_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSceneMeshing_Source_AndroidXRSceneMeshing_Public_AndroidXRSceneMeshingComponent_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAndroidXRSceneMeshingComponent;

// ********** End Class UAndroidXRSceneMeshingComponent ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSceneMeshing_Source_AndroidXRSceneMeshing_Public_AndroidXRSceneMeshingComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
