// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRSpatialAnchorsSubsystem.h"
#include "AndroidXRSpatialAnchorEntity.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRSpatialAnchorsSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXRSPATIALANCHORS_API UClass* Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_NoRegister();
ANDROIDXRSPATIALANCHORS_API UClass* Z_Construct_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction();
ANDROIDXRSPATIALANCHORS_API UClass* Z_Construct_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction_NoRegister();
ANDROIDXRSPATIALANCHORS_API UClass* Z_Construct_UClass_UAndroidXRSpatialAnchorsSubsystem();
ANDROIDXRSPATIALANCHORS_API UClass* Z_Construct_UClass_UAndroidXRSpatialAnchorsSubsystem_NoRegister();
ANDROIDXRSPATIALANCHORS_API UEnum* Z_Construct_UEnum_AndroidXRSpatialAnchors_ESpatialAnchorPeristenceResult();
ANDROIDXRSPATIALANCHORS_API UFunction* Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationDelegate__DelegateSignature();
ANDROIDXRSPATIALANCHORS_API UFunction* Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationFailedDelegate__DelegateSignature();
ANDROIDXRSPATIALENTITIES_API UClass* Z_Construct_UClass_UAndroidXRSpatialEntitiesSubsystem();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
UPackage* Z_Construct_UPackage__Script_AndroidXRSpatialAnchors();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAndroidXRSpatialAnchorsSubsystem Function CreateSpatialAnchor ***********
struct Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_CreateSpatialAnchor_Statics
{
	struct AndroidXRSpatialAnchorsSubsystem_eventCreateSpatialAnchor_Parms
	{
		FTransform AnchorTransform;
		UAndroidXRSpatialAnchorEntity* CreatedAnchor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Spatial Anchors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Creates a spatial anchor at the specified transform\n    * @param[in] The transform at which to create the anchor\n    * @param[out] The created anchor\n    * @return Whether the underlying API call was successful\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a spatial anchor at the specified transform\n@param[in] The transform at which to create the anchor\n@param[out] The created anchor\n@return Whether the underlying API call was successful" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnchorTransform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedAnchor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_CreateSpatialAnchor_Statics::NewProp_AnchorTransform = { "AnchorTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRSpatialAnchorsSubsystem_eventCreateSpatialAnchor_Parms, AnchorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorTransform_MetaData), NewProp_AnchorTransform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_CreateSpatialAnchor_Statics::NewProp_CreatedAnchor = { "CreatedAnchor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRSpatialAnchorsSubsystem_eventCreateSpatialAnchor_Parms, CreatedAnchor), Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_CreateSpatialAnchor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRSpatialAnchorsSubsystem_eventCreateSpatialAnchor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_CreateSpatialAnchor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRSpatialAnchorsSubsystem_eventCreateSpatialAnchor_Parms), &Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_CreateSpatialAnchor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_CreateSpatialAnchor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_CreateSpatialAnchor_Statics::NewProp_AnchorTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_CreateSpatialAnchor_Statics::NewProp_CreatedAnchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_CreateSpatialAnchor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_CreateSpatialAnchor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_CreateSpatialAnchor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSpatialAnchorsSubsystem, nullptr, "CreateSpatialAnchor", Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_CreateSpatialAnchor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_CreateSpatialAnchor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_CreateSpatialAnchor_Statics::AndroidXRSpatialAnchorsSubsystem_eventCreateSpatialAnchor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_CreateSpatialAnchor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_CreateSpatialAnchor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_CreateSpatialAnchor_Statics::AndroidXRSpatialAnchorsSubsystem_eventCreateSpatialAnchor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_CreateSpatialAnchor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_CreateSpatialAnchor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSpatialAnchorsSubsystem::execCreateSpatialAnchor)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_AnchorTransform);
	P_GET_OBJECT_REF(UAndroidXRSpatialAnchorEntity,Z_Param_Out_CreatedAnchor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CreateSpatialAnchor(Z_Param_Out_AnchorTransform,P_ARG_GC_BARRIER(Z_Param_Out_CreatedAnchor));
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSpatialAnchorsSubsystem Function CreateSpatialAnchor *************

// ********** Begin Class UAndroidXRSpatialAnchorsSubsystem Function DestroySpatialAnchor **********
struct Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_DestroySpatialAnchor_Statics
{
	struct AndroidXRSpatialAnchorsSubsystem_eventDestroySpatialAnchor_Parms
	{
		UAndroidXRSpatialAnchorEntity* AnchorToDestroy;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Spatial Anchors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Destroys a spatial anchor\n    * @param[in] The anchor to destroy\n    * @return Whether the underlying API call was successful\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Destroys a spatial anchor\n@param[in] The anchor to destroy\n@return Whether the underlying API call was successful" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnchorToDestroy;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_DestroySpatialAnchor_Statics::NewProp_AnchorToDestroy = { "AnchorToDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRSpatialAnchorsSubsystem_eventDestroySpatialAnchor_Parms, AnchorToDestroy), Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_DestroySpatialAnchor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRSpatialAnchorsSubsystem_eventDestroySpatialAnchor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_DestroySpatialAnchor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRSpatialAnchorsSubsystem_eventDestroySpatialAnchor_Parms), &Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_DestroySpatialAnchor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_DestroySpatialAnchor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_DestroySpatialAnchor_Statics::NewProp_AnchorToDestroy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_DestroySpatialAnchor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_DestroySpatialAnchor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_DestroySpatialAnchor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSpatialAnchorsSubsystem, nullptr, "DestroySpatialAnchor", Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_DestroySpatialAnchor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_DestroySpatialAnchor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_DestroySpatialAnchor_Statics::AndroidXRSpatialAnchorsSubsystem_eventDestroySpatialAnchor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_DestroySpatialAnchor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_DestroySpatialAnchor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_DestroySpatialAnchor_Statics::AndroidXRSpatialAnchorsSubsystem_eventDestroySpatialAnchor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_DestroySpatialAnchor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_DestroySpatialAnchor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSpatialAnchorsSubsystem::execDestroySpatialAnchor)
{
	P_GET_OBJECT(UAndroidXRSpatialAnchorEntity,Z_Param_AnchorToDestroy);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DestroySpatialAnchor(Z_Param_AnchorToDestroy);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSpatialAnchorsSubsystem Function DestroySpatialAnchor ************

// ********** Begin Class UAndroidXRSpatialAnchorsSubsystem Function LoadPersistedAnchors **********
struct Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_LoadPersistedAnchors_Statics
{
	struct AndroidXRSpatialAnchorsSubsystem_eventLoadPersistedAnchors_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Spatial Anchors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Loads persistent anchors. The callbacks of OnAnchorAdded will be fired for the loaded anchors\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loads persistent anchors. The callbacks of OnAnchorAdded will be fired for the loaded anchors" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_LoadPersistedAnchors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidXRSpatialAnchorsSubsystem_eventLoadPersistedAnchors_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_LoadPersistedAnchors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidXRSpatialAnchorsSubsystem_eventLoadPersistedAnchors_Parms), &Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_LoadPersistedAnchors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_LoadPersistedAnchors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_LoadPersistedAnchors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_LoadPersistedAnchors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_LoadPersistedAnchors_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSpatialAnchorsSubsystem, nullptr, "LoadPersistedAnchors", Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_LoadPersistedAnchors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_LoadPersistedAnchors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_LoadPersistedAnchors_Statics::AndroidXRSpatialAnchorsSubsystem_eventLoadPersistedAnchors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_LoadPersistedAnchors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_LoadPersistedAnchors_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_LoadPersistedAnchors_Statics::AndroidXRSpatialAnchorsSubsystem_eventLoadPersistedAnchors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_LoadPersistedAnchors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_LoadPersistedAnchors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSpatialAnchorsSubsystem::execLoadPersistedAnchors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LoadPersistedAnchors();
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSpatialAnchorsSubsystem Function LoadPersistedAnchors ************

// ********** Begin Class UAndroidXRSpatialAnchorsSubsystem ****************************************
void UAndroidXRSpatialAnchorsSubsystem::StaticRegisterNativesUAndroidXRSpatialAnchorsSubsystem()
{
	UClass* Class = UAndroidXRSpatialAnchorsSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateSpatialAnchor", &UAndroidXRSpatialAnchorsSubsystem::execCreateSpatialAnchor },
		{ "DestroySpatialAnchor", &UAndroidXRSpatialAnchorsSubsystem::execDestroySpatialAnchor },
		{ "LoadPersistedAnchors", &UAndroidXRSpatialAnchorsSubsystem::execLoadPersistedAnchors },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRSpatialAnchorsSubsystem;
UClass* UAndroidXRSpatialAnchorsSubsystem::GetPrivateStaticClass()
{
	using TClass = UAndroidXRSpatialAnchorsSubsystem;
	if (!Z_Registration_Info_UClass_UAndroidXRSpatialAnchorsSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRSpatialAnchorsSubsystem"),
			Z_Registration_Info_UClass_UAndroidXRSpatialAnchorsSubsystem.InnerSingleton,
			StaticRegisterNativesUAndroidXRSpatialAnchorsSubsystem,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UAndroidXRSpatialAnchorsSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRSpatialAnchorsSubsystem_NoRegister()
{
	return UAndroidXRSpatialAnchorsSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRSpatialAnchorsSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* The Spatial Anchors subsystem\n*/" },
#endif
		{ "IncludePath", "AndroidXRSpatialAnchorsSubsystem.h" },
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Spatial Anchors subsystem" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnchorAdded_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Anchors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The callback for when the runtime detects anchors in the environment (when loading persisted anchors for example)\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The callback for when the runtime detects anchors in the environment (when loading persisted anchors for example)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnchorRemoved_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Anchors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The callback for when the runtime removes tracked anchors from the environment (when loading persisted anchors for example)\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The callback for when the runtime removes tracked anchors from the environment (when loading persisted anchors for example)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnchorAdded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnchorRemoved;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_CreateSpatialAnchor, "CreateSpatialAnchor" }, // 3781540392
		{ &Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_DestroySpatialAnchor, "DestroySpatialAnchor" }, // 3208563415
		{ &Z_Construct_UFunction_UAndroidXRSpatialAnchorsSubsystem_LoadPersistedAnchors, "LoadPersistedAnchors" }, // 2047862467
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRSpatialAnchorsSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAndroidXRSpatialAnchorsSubsystem_Statics::NewProp_OnAnchorAdded = { "OnAnchorAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialAnchorsSubsystem, OnAnchorAdded), Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnchorAdded_MetaData), NewProp_OnAnchorAdded_MetaData) }; // 4207430944
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAndroidXRSpatialAnchorsSubsystem_Statics::NewProp_OnAnchorRemoved = { "OnAnchorRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialAnchorsSubsystem, OnAnchorRemoved), Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnchorRemoved_MetaData), NewProp_OnAnchorRemoved_MetaData) }; // 4207430944
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidXRSpatialAnchorsSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialAnchorsSubsystem_Statics::NewProp_OnAnchorAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialAnchorsSubsystem_Statics::NewProp_OnAnchorRemoved,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialAnchorsSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAndroidXRSpatialAnchorsSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAndroidXRSpatialEntitiesSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRSpatialAnchors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialAnchorsSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRSpatialAnchorsSubsystem_Statics::ClassParams = {
	&UAndroidXRSpatialAnchorsSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAndroidXRSpatialAnchorsSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialAnchorsSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialAnchorsSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRSpatialAnchorsSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRSpatialAnchorsSubsystem()
{
	if (!Z_Registration_Info_UClass_UAndroidXRSpatialAnchorsSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRSpatialAnchorsSubsystem.OuterSingleton, Z_Construct_UClass_UAndroidXRSpatialAnchorsSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRSpatialAnchorsSubsystem.OuterSingleton;
}
UAndroidXRSpatialAnchorsSubsystem::UAndroidXRSpatialAnchorsSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRSpatialAnchorsSubsystem);
UAndroidXRSpatialAnchorsSubsystem::~UAndroidXRSpatialAnchorsSubsystem() {}
// ********** End Class UAndroidXRSpatialAnchorsSubsystem ******************************************

// ********** Begin Class UAndroidXRSpatialAnchorsPersistenceAsyncAction Function PersistAnchorAsync 
struct Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistAnchorAsync_Statics
{
	struct AndroidXRSpatialAnchorsPersistenceAsyncAction_eventPersistAnchorAsync_Parms
	{
		UAndroidXRSpatialAnchorEntity* AnchorToPersist;
		UAndroidXRSpatialAnchorsPersistenceAsyncAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Spatial Anchors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Persists a spatial anchor\n    * @param[in] The anchor to persist\n    * @return The asynchronous operation for persistence\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Persists a spatial anchor\n@param[in] The anchor to persist\n@return The asynchronous operation for persistence" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnchorToPersist;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistAnchorAsync_Statics::NewProp_AnchorToPersist = { "AnchorToPersist", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRSpatialAnchorsPersistenceAsyncAction_eventPersistAnchorAsync_Parms, AnchorToPersist), Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistAnchorAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRSpatialAnchorsPersistenceAsyncAction_eventPersistAnchorAsync_Parms, ReturnValue), Z_Construct_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistAnchorAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistAnchorAsync_Statics::NewProp_AnchorToPersist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistAnchorAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistAnchorAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistAnchorAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction, nullptr, "PersistAnchorAsync", Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistAnchorAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistAnchorAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistAnchorAsync_Statics::AndroidXRSpatialAnchorsPersistenceAsyncAction_eventPersistAnchorAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistAnchorAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistAnchorAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistAnchorAsync_Statics::AndroidXRSpatialAnchorsPersistenceAsyncAction_eventPersistAnchorAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistAnchorAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistAnchorAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSpatialAnchorsPersistenceAsyncAction::execPersistAnchorAsync)
{
	P_GET_OBJECT(UAndroidXRSpatialAnchorEntity,Z_Param_AnchorToPersist);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAndroidXRSpatialAnchorsPersistenceAsyncAction**)Z_Param__Result=UAndroidXRSpatialAnchorsPersistenceAsyncAction::PersistAnchorAsync(Z_Param_AnchorToPersist);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSpatialAnchorsPersistenceAsyncAction Function PersistAnchorAsync *

// ********** Begin Class UAndroidXRSpatialAnchorsPersistenceAsyncAction Function PersistOperationFailedHandler 
struct Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistOperationFailedHandler_Statics
{
	struct AndroidXRSpatialAnchorsPersistenceAsyncAction_eventPersistOperationFailedHandler_Parms
	{
		ESpatialAnchorPeristenceResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorsSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistOperationFailedHandler_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistOperationFailedHandler_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRSpatialAnchorsPersistenceAsyncAction_eventPersistOperationFailedHandler_Parms, Result), Z_Construct_UEnum_AndroidXRSpatialAnchors_ESpatialAnchorPeristenceResult, METADATA_PARAMS(0, nullptr) }; // 2812280769
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistOperationFailedHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistOperationFailedHandler_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistOperationFailedHandler_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistOperationFailedHandler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistOperationFailedHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction, nullptr, "PersistOperationFailedHandler", Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistOperationFailedHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistOperationFailedHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistOperationFailedHandler_Statics::AndroidXRSpatialAnchorsPersistenceAsyncAction_eventPersistOperationFailedHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistOperationFailedHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistOperationFailedHandler_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistOperationFailedHandler_Statics::AndroidXRSpatialAnchorsPersistenceAsyncAction_eventPersistOperationFailedHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistOperationFailedHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistOperationFailedHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSpatialAnchorsPersistenceAsyncAction::execPersistOperationFailedHandler)
{
	P_GET_ENUM(ESpatialAnchorPeristenceResult,Z_Param_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PersistOperationFailedHandler(ESpatialAnchorPeristenceResult(Z_Param_Result));
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSpatialAnchorsPersistenceAsyncAction Function PersistOperationFailedHandler 

// ********** Begin Class UAndroidXRSpatialAnchorsPersistenceAsyncAction Function PersistOperationFinishedHandler 
struct Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistOperationFinishedHandler_Statics
{
	struct AndroidXRSpatialAnchorsPersistenceAsyncAction_eventPersistOperationFinishedHandler_Parms
	{
		UAndroidXRSpatialAnchorEntity* Anchor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorsSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Anchor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistOperationFinishedHandler_Statics::NewProp_Anchor = { "Anchor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRSpatialAnchorsPersistenceAsyncAction_eventPersistOperationFinishedHandler_Parms, Anchor), Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistOperationFinishedHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistOperationFinishedHandler_Statics::NewProp_Anchor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistOperationFinishedHandler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistOperationFinishedHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction, nullptr, "PersistOperationFinishedHandler", Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistOperationFinishedHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistOperationFinishedHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistOperationFinishedHandler_Statics::AndroidXRSpatialAnchorsPersistenceAsyncAction_eventPersistOperationFinishedHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistOperationFinishedHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistOperationFinishedHandler_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistOperationFinishedHandler_Statics::AndroidXRSpatialAnchorsPersistenceAsyncAction_eventPersistOperationFinishedHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistOperationFinishedHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistOperationFinishedHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSpatialAnchorsPersistenceAsyncAction::execPersistOperationFinishedHandler)
{
	P_GET_OBJECT(UAndroidXRSpatialAnchorEntity,Z_Param_Anchor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PersistOperationFinishedHandler(Z_Param_Anchor);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSpatialAnchorsPersistenceAsyncAction Function PersistOperationFinishedHandler 

// ********** Begin Class UAndroidXRSpatialAnchorsPersistenceAsyncAction Function UnPersistAnchorAsync 
struct Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_UnPersistAnchorAsync_Statics
{
	struct AndroidXRSpatialAnchorsPersistenceAsyncAction_eventUnPersistAnchorAsync_Parms
	{
		UAndroidXRSpatialAnchorEntity* AnchorToUnPersist;
		UAndroidXRSpatialAnchorsPersistenceAsyncAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidXR|Spatial Anchors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Unpersists a spatial anchor\n    * @param[in] The anchor to unpersist\n    * @return The asynchronous operation for unpersistence\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unpersists a spatial anchor\n@param[in] The anchor to unpersist\n@return The asynchronous operation for unpersistence" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnchorToUnPersist;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_UnPersistAnchorAsync_Statics::NewProp_AnchorToUnPersist = { "AnchorToUnPersist", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRSpatialAnchorsPersistenceAsyncAction_eventUnPersistAnchorAsync_Parms, AnchorToUnPersist), Z_Construct_UClass_UAndroidXRSpatialAnchorEntity_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_UnPersistAnchorAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidXRSpatialAnchorsPersistenceAsyncAction_eventUnPersistAnchorAsync_Parms, ReturnValue), Z_Construct_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_UnPersistAnchorAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_UnPersistAnchorAsync_Statics::NewProp_AnchorToUnPersist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_UnPersistAnchorAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_UnPersistAnchorAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_UnPersistAnchorAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction, nullptr, "UnPersistAnchorAsync", Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_UnPersistAnchorAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_UnPersistAnchorAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_UnPersistAnchorAsync_Statics::AndroidXRSpatialAnchorsPersistenceAsyncAction_eventUnPersistAnchorAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_UnPersistAnchorAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_UnPersistAnchorAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_UnPersistAnchorAsync_Statics::AndroidXRSpatialAnchorsPersistenceAsyncAction_eventUnPersistAnchorAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_UnPersistAnchorAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_UnPersistAnchorAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidXRSpatialAnchorsPersistenceAsyncAction::execUnPersistAnchorAsync)
{
	P_GET_OBJECT(UAndroidXRSpatialAnchorEntity,Z_Param_AnchorToUnPersist);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAndroidXRSpatialAnchorsPersistenceAsyncAction**)Z_Param__Result=UAndroidXRSpatialAnchorsPersistenceAsyncAction::UnPersistAnchorAsync(Z_Param_AnchorToUnPersist);
	P_NATIVE_END;
}
// ********** End Class UAndroidXRSpatialAnchorsPersistenceAsyncAction Function UnPersistAnchorAsync 

// ********** Begin Class UAndroidXRSpatialAnchorsPersistenceAsyncAction ***************************
void UAndroidXRSpatialAnchorsPersistenceAsyncAction::StaticRegisterNativesUAndroidXRSpatialAnchorsPersistenceAsyncAction()
{
	UClass* Class = UAndroidXRSpatialAnchorsPersistenceAsyncAction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PersistAnchorAsync", &UAndroidXRSpatialAnchorsPersistenceAsyncAction::execPersistAnchorAsync },
		{ "PersistOperationFailedHandler", &UAndroidXRSpatialAnchorsPersistenceAsyncAction::execPersistOperationFailedHandler },
		{ "PersistOperationFinishedHandler", &UAndroidXRSpatialAnchorsPersistenceAsyncAction::execPersistOperationFinishedHandler },
		{ "UnPersistAnchorAsync", &UAndroidXRSpatialAnchorsPersistenceAsyncAction::execUnPersistAnchorAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction;
UClass* UAndroidXRSpatialAnchorsPersistenceAsyncAction::GetPrivateStaticClass()
{
	using TClass = UAndroidXRSpatialAnchorsPersistenceAsyncAction;
	if (!Z_Registration_Info_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRSpatialAnchorsPersistenceAsyncAction"),
			Z_Registration_Info_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction.InnerSingleton,
			StaticRegisterNativesUAndroidXRSpatialAnchorsPersistenceAsyncAction,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction_NoRegister()
{
	return UAndroidXRSpatialAnchorsPersistenceAsyncAction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AndroidXRSpatialAnchors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* The async operations associated with spatial anchors\n*/" },
#endif
		{ "IncludePath", "AndroidXRSpatialAnchorsSubsystem.h" },
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The async operations associated with spatial anchors" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnOperationSuccess_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Anchors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The callback for when the async operation succeeds\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The callback for when the async operation succeeds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnOperationFailed_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Anchors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The callback for when the async operation fails\n    */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialAnchorsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The callback for when the async operation fails" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOperationSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOperationFailed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistAnchorAsync, "PersistAnchorAsync" }, // 3451353039
		{ &Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistOperationFailedHandler, "PersistOperationFailedHandler" }, // 3253415223
		{ &Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_PersistOperationFinishedHandler, "PersistOperationFinishedHandler" }, // 208744410
		{ &Z_Construct_UFunction_UAndroidXRSpatialAnchorsPersistenceAsyncAction_UnPersistAnchorAsync, "UnPersistAnchorAsync" }, // 3045328853
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRSpatialAnchorsPersistenceAsyncAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction_Statics::NewProp_OnOperationSuccess = { "OnOperationSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialAnchorsPersistenceAsyncAction, OnOperationSuccess), Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnOperationSuccess_MetaData), NewProp_OnOperationSuccess_MetaData) }; // 4207430944
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction_Statics::NewProp_OnOperationFailed = { "OnOperationFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialAnchorsPersistenceAsyncAction, OnOperationFailed), Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationFailedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnOperationFailed_MetaData), NewProp_OnOperationFailed_MetaData) }; // 1445707693
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction_Statics::NewProp_OnOperationSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction_Statics::NewProp_OnOperationFailed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRSpatialAnchors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction_Statics::ClassParams = {
	&UAndroidXRSpatialAnchorsPersistenceAsyncAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction()
{
	if (!Z_Registration_Info_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction.OuterSingleton, Z_Construct_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction.OuterSingleton;
}
UAndroidXRSpatialAnchorsPersistenceAsyncAction::UAndroidXRSpatialAnchorsPersistenceAsyncAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRSpatialAnchorsPersistenceAsyncAction);
UAndroidXRSpatialAnchorsPersistenceAsyncAction::~UAndroidXRSpatialAnchorsPersistenceAsyncAction() {}
// ********** End Class UAndroidXRSpatialAnchorsPersistenceAsyncAction *****************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorsSubsystem_h__Script_AndroidXRSpatialAnchors_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXRSpatialAnchorsSubsystem, UAndroidXRSpatialAnchorsSubsystem::StaticClass, TEXT("UAndroidXRSpatialAnchorsSubsystem"), &Z_Registration_Info_UClass_UAndroidXRSpatialAnchorsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRSpatialAnchorsSubsystem), 3914954903U) },
		{ Z_Construct_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction, UAndroidXRSpatialAnchorsPersistenceAsyncAction::StaticClass, TEXT("UAndroidXRSpatialAnchorsPersistenceAsyncAction"), &Z_Registration_Info_UClass_UAndroidXRSpatialAnchorsPersistenceAsyncAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRSpatialAnchorsPersistenceAsyncAction), 2467886709U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorsSubsystem_h__Script_AndroidXRSpatialAnchors_3932831807(TEXT("/Script/AndroidXRSpatialAnchors"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorsSubsystem_h__Script_AndroidXRSpatialAnchors_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialAnchors_Source_AndroidXRSpatialAnchors_Public_AndroidXRSpatialAnchorsSubsystem_h__Script_AndroidXRSpatialAnchors_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
