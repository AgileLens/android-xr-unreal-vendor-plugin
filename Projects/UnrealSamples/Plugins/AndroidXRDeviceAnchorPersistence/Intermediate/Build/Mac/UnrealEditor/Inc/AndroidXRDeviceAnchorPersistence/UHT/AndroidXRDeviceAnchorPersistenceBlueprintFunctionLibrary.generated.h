// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.h"

#ifdef ANDROIDXRDEVICEANCHORPERSISTENCE_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_generated_h
#error "AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary.h"
#endif
#define ANDROIDXRDEVICEANCHORPERSISTENCE_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UCreatePersistedAnchorSpace;
class UPersistAnchor;
class UUnpersistAnchor;
enum class EAndroidXRAnchorPersistState : uint8;
enum class EAndroidXRTrackableType : uint8;
struct FAndroidXRDeviceAnchorPersistence;
struct FAndroidXRSpace;
struct FGuid;

// ********** Begin Delegate FOnAnchorPersistedDynamic *********************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_22_DELEGATE \
ANDROIDXRDEVICEANCHORPERSISTENCE_API void FOnAnchorPersistedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnAnchorPersistedDynamic, FAndroidXRSpace const& AnchorSpace, FGuid const& PersistedId);


// ********** End Delegate FOnAnchorPersistedDynamic ***********************************************

// ********** Begin Delegate FOnAnchorUnpersistedDynamic *******************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_23_DELEGATE \
ANDROIDXRDEVICEANCHORPERSISTENCE_API void FOnAnchorUnpersistedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnAnchorUnpersistedDynamic);


// ********** End Delegate FOnAnchorUnpersistedDynamic *********************************************

// ********** Begin Delegate FOnPersistedAnchorSpaceCreatedDynamic *********************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_24_DELEGATE \
ANDROIDXRDEVICEANCHORPERSISTENCE_API void FOnPersistedAnchorSpaceCreatedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnPersistedAnchorSpaceCreatedDynamic, FAndroidXRSpace const& AnchorSpace, FGuid const& PersistedId);


// ********** End Delegate FOnPersistedAnchorSpaceCreatedDynamic ***********************************

// ********** Begin Delegate FOnAsyncActionFailedDynamic *******************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_25_DELEGATE \
ANDROIDXRDEVICEANCHORPERSISTENCE_API void FOnAsyncActionFailedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnAsyncActionFailedDynamic);


// ********** End Delegate FOnAsyncActionFailedDynamic *********************************************

// ********** Begin Class UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary ****************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEnumeratePersistedAnchors); \
	DECLARE_FUNCTION(execGetAnchorPersistState); \
	DECLARE_FUNCTION(execDestroyDeviceAnchorPersistence); \
	DECLARE_FUNCTION(execCreateDeviceAnchorPersistence); \
	DECLARE_FUNCTION(execEnumerateSupportedPersistenceAnchorTypes); \
	DECLARE_FUNCTION(execGetAnchorPersistenceSupported); \
	DECLARE_FUNCTION(execIsValidAnchorPersistence);


ANDROIDXRDEVICEANCHORPERSISTENCE_API UClass* Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANDROIDXRDEVICEANCHORPERSISTENCE_API UClass* Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AndroidXRDeviceAnchorPersistence"), Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary(UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary&&) = delete; \
	UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary(const UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary) \
	NO_API virtual ~UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_27_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_30_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary;

// ********** End Class UAndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary ******************

// ********** Begin Class UAndroidXRDeviceAnchorPersistenceAsyncAction *****************************
ANDROIDXRDEVICEANCHORPERSISTENCE_API UClass* Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceAsyncAction_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAndroidXRDeviceAnchorPersistenceAsyncAction(); \
	friend struct Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceAsyncAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANDROIDXRDEVICEANCHORPERSISTENCE_API UClass* Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceAsyncAction_NoRegister(); \
public: \
	DECLARE_CLASS2(UAndroidXRDeviceAnchorPersistenceAsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AndroidXRDeviceAnchorPersistence"), Z_Construct_UClass_UAndroidXRDeviceAnchorPersistenceAsyncAction_NoRegister) \
	DECLARE_SERIALIZER(UAndroidXRDeviceAnchorPersistenceAsyncAction)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_98_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidXRDeviceAnchorPersistenceAsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAndroidXRDeviceAnchorPersistenceAsyncAction(UAndroidXRDeviceAnchorPersistenceAsyncAction&&) = delete; \
	UAndroidXRDeviceAnchorPersistenceAsyncAction(const UAndroidXRDeviceAnchorPersistenceAsyncAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidXRDeviceAnchorPersistenceAsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidXRDeviceAnchorPersistenceAsyncAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidXRDeviceAnchorPersistenceAsyncAction) \
	NO_API virtual ~UAndroidXRDeviceAnchorPersistenceAsyncAction();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_95_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_98_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAndroidXRDeviceAnchorPersistenceAsyncAction;

// ********** End Class UAndroidXRDeviceAnchorPersistenceAsyncAction *******************************

// ********** Begin Class UPersistAnchor ***********************************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPersistAnchorCallback); \
	DECLARE_FUNCTION(execPersistAnchorAsync);


ANDROIDXRDEVICEANCHORPERSISTENCE_API UClass* Z_Construct_UClass_UPersistAnchor_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_115_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPersistAnchor(); \
	friend struct Z_Construct_UClass_UPersistAnchor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANDROIDXRDEVICEANCHORPERSISTENCE_API UClass* Z_Construct_UClass_UPersistAnchor_NoRegister(); \
public: \
	DECLARE_CLASS2(UPersistAnchor, UAndroidXRDeviceAnchorPersistenceAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AndroidXRDeviceAnchorPersistence"), Z_Construct_UClass_UPersistAnchor_NoRegister) \
	DECLARE_SERIALIZER(UPersistAnchor)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_115_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPersistAnchor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPersistAnchor(UPersistAnchor&&) = delete; \
	UPersistAnchor(const UPersistAnchor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPersistAnchor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPersistAnchor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPersistAnchor) \
	NO_API virtual ~UPersistAnchor();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_112_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_115_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_115_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_115_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPersistAnchor;

// ********** End Class UPersistAnchor *************************************************************

// ********** Begin Class UUnpersistAnchor *********************************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_145_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnpersistAnchorCallback); \
	DECLARE_FUNCTION(execUnpersistAnchorAsync);


ANDROIDXRDEVICEANCHORPERSISTENCE_API UClass* Z_Construct_UClass_UUnpersistAnchor_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_145_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnpersistAnchor(); \
	friend struct Z_Construct_UClass_UUnpersistAnchor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANDROIDXRDEVICEANCHORPERSISTENCE_API UClass* Z_Construct_UClass_UUnpersistAnchor_NoRegister(); \
public: \
	DECLARE_CLASS2(UUnpersistAnchor, UAndroidXRDeviceAnchorPersistenceAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AndroidXRDeviceAnchorPersistence"), Z_Construct_UClass_UUnpersistAnchor_NoRegister) \
	DECLARE_SERIALIZER(UUnpersistAnchor)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_145_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnpersistAnchor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUnpersistAnchor(UUnpersistAnchor&&) = delete; \
	UUnpersistAnchor(const UUnpersistAnchor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnpersistAnchor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnpersistAnchor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnpersistAnchor) \
	NO_API virtual ~UUnpersistAnchor();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_142_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_145_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_145_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_145_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_145_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUnpersistAnchor;

// ********** End Class UUnpersistAnchor ***********************************************************

// ********** Begin Class UCreatePersistedAnchorSpace **********************************************
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_173_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPersistedAnchorCreatedCallback); \
	DECLARE_FUNCTION(execCreatePersistedAnchorSpaceAsync);


ANDROIDXRDEVICEANCHORPERSISTENCE_API UClass* Z_Construct_UClass_UCreatePersistedAnchorSpace_NoRegister();

#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_173_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCreatePersistedAnchorSpace(); \
	friend struct Z_Construct_UClass_UCreatePersistedAnchorSpace_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANDROIDXRDEVICEANCHORPERSISTENCE_API UClass* Z_Construct_UClass_UCreatePersistedAnchorSpace_NoRegister(); \
public: \
	DECLARE_CLASS2(UCreatePersistedAnchorSpace, UAndroidXRDeviceAnchorPersistenceAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AndroidXRDeviceAnchorPersistence"), Z_Construct_UClass_UCreatePersistedAnchorSpace_NoRegister) \
	DECLARE_SERIALIZER(UCreatePersistedAnchorSpace)


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_173_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCreatePersistedAnchorSpace(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCreatePersistedAnchorSpace(UCreatePersistedAnchorSpace&&) = delete; \
	UCreatePersistedAnchorSpace(const UCreatePersistedAnchorSpace&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCreatePersistedAnchorSpace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCreatePersistedAnchorSpace); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCreatePersistedAnchorSpace) \
	NO_API virtual ~UCreatePersistedAnchorSpace();


#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_170_PROLOG
#define FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_173_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_173_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_173_INCLASS_NO_PURE_DECLS \
	FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h_173_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCreatePersistedAnchorSpace;

// ********** End Class UCreatePersistedAnchorSpace ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRDeviceAnchorPersistence_Source_AndroidXRDeviceAnchorPersistence_Public_AndroidXRDeviceAnchorPersistenceBlueprintFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
