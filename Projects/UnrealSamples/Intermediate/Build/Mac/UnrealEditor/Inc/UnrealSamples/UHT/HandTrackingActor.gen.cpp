// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealSamples/HandTrackingActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHandTrackingActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
UNREALSAMPLES_API UClass* Z_Construct_UClass_AHandTrackingActor();
UNREALSAMPLES_API UClass* Z_Construct_UClass_AHandTrackingActor_NoRegister();
UNREALSAMPLES_API UClass* Z_Construct_UClass_AHandTrackingJointActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealSamples();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHandTrackingActor Function Initialize ***********************************
struct Z_Construct_UFunction_AHandTrackingActor_Initialize_Statics
{
	struct HandTrackingActor_eventInitialize_Parms
	{
		EControllerHand Hand;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HandTrackingActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AHandTrackingActor_Initialize_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AHandTrackingActor_Initialize_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandTrackingActor_eventInitialize_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // 775183092
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHandTrackingActor_Initialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHandTrackingActor_Initialize_Statics::NewProp_Hand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHandTrackingActor_Initialize_Statics::NewProp_Hand,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHandTrackingActor_Initialize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHandTrackingActor_Initialize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHandTrackingActor, nullptr, "Initialize", Z_Construct_UFunction_AHandTrackingActor_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHandTrackingActor_Initialize_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHandTrackingActor_Initialize_Statics::HandTrackingActor_eventInitialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHandTrackingActor_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHandTrackingActor_Initialize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHandTrackingActor_Initialize_Statics::HandTrackingActor_eventInitialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHandTrackingActor_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHandTrackingActor_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHandTrackingActor::execInitialize)
{
	P_GET_ENUM(EControllerHand,Z_Param_Hand);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialize(EControllerHand(Z_Param_Hand));
	P_NATIVE_END;
}
// ********** End Class AHandTrackingActor Function Initialize *************************************

// ********** Begin Class AHandTrackingActor Function ShouldShowHandJointLabels ********************
struct Z_Construct_UFunction_AHandTrackingActor_ShouldShowHandJointLabels_Statics
{
	struct HandTrackingActor_eventShouldShowHandJointLabels_Parms
	{
		bool bShowLabels;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HandTrackingActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bShowLabels_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowLabels;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AHandTrackingActor_ShouldShowHandJointLabels_Statics::NewProp_bShowLabels_SetBit(void* Obj)
{
	((HandTrackingActor_eventShouldShowHandJointLabels_Parms*)Obj)->bShowLabels = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHandTrackingActor_ShouldShowHandJointLabels_Statics::NewProp_bShowLabels = { "bShowLabels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HandTrackingActor_eventShouldShowHandJointLabels_Parms), &Z_Construct_UFunction_AHandTrackingActor_ShouldShowHandJointLabels_Statics::NewProp_bShowLabels_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHandTrackingActor_ShouldShowHandJointLabels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHandTrackingActor_ShouldShowHandJointLabels_Statics::NewProp_bShowLabels,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHandTrackingActor_ShouldShowHandJointLabels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHandTrackingActor_ShouldShowHandJointLabels_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHandTrackingActor, nullptr, "ShouldShowHandJointLabels", Z_Construct_UFunction_AHandTrackingActor_ShouldShowHandJointLabels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHandTrackingActor_ShouldShowHandJointLabels_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHandTrackingActor_ShouldShowHandJointLabels_Statics::HandTrackingActor_eventShouldShowHandJointLabels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHandTrackingActor_ShouldShowHandJointLabels_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHandTrackingActor_ShouldShowHandJointLabels_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHandTrackingActor_ShouldShowHandJointLabels_Statics::HandTrackingActor_eventShouldShowHandJointLabels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHandTrackingActor_ShouldShowHandJointLabels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHandTrackingActor_ShouldShowHandJointLabels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHandTrackingActor::execShouldShowHandJointLabels)
{
	P_GET_UBOOL(Z_Param_bShowLabels);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShouldShowHandJointLabels(Z_Param_bShowLabels);
	P_NATIVE_END;
}
// ********** End Class AHandTrackingActor Function ShouldShowHandJointLabels **********************

// ********** Begin Class AHandTrackingActor Function ShouldTrackHand ******************************
struct Z_Construct_UFunction_AHandTrackingActor_ShouldTrackHand_Statics
{
	struct HandTrackingActor_eventShouldTrackHand_Parms
	{
		bool bShouldTrack;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HandTrackingActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bShouldTrack_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTrack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AHandTrackingActor_ShouldTrackHand_Statics::NewProp_bShouldTrack_SetBit(void* Obj)
{
	((HandTrackingActor_eventShouldTrackHand_Parms*)Obj)->bShouldTrack = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHandTrackingActor_ShouldTrackHand_Statics::NewProp_bShouldTrack = { "bShouldTrack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HandTrackingActor_eventShouldTrackHand_Parms), &Z_Construct_UFunction_AHandTrackingActor_ShouldTrackHand_Statics::NewProp_bShouldTrack_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHandTrackingActor_ShouldTrackHand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHandTrackingActor_ShouldTrackHand_Statics::NewProp_bShouldTrack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHandTrackingActor_ShouldTrackHand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHandTrackingActor_ShouldTrackHand_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHandTrackingActor, nullptr, "ShouldTrackHand", Z_Construct_UFunction_AHandTrackingActor_ShouldTrackHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHandTrackingActor_ShouldTrackHand_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHandTrackingActor_ShouldTrackHand_Statics::HandTrackingActor_eventShouldTrackHand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHandTrackingActor_ShouldTrackHand_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHandTrackingActor_ShouldTrackHand_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHandTrackingActor_ShouldTrackHand_Statics::HandTrackingActor_eventShouldTrackHand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHandTrackingActor_ShouldTrackHand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHandTrackingActor_ShouldTrackHand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHandTrackingActor::execShouldTrackHand)
{
	P_GET_UBOOL(Z_Param_bShouldTrack);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShouldTrackHand(Z_Param_bShouldTrack);
	P_NATIVE_END;
}
// ********** End Class AHandTrackingActor Function ShouldTrackHand ********************************

// ********** Begin Class AHandTrackingActor Function UpdateHandJointScaleFactor *******************
struct Z_Construct_UFunction_AHandTrackingActor_UpdateHandJointScaleFactor_Statics
{
	struct HandTrackingActor_eventUpdateHandJointScaleFactor_Parms
	{
		float ScaleFactor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HandTrackingActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleFactor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHandTrackingActor_UpdateHandJointScaleFactor_Statics::NewProp_ScaleFactor = { "ScaleFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandTrackingActor_eventUpdateHandJointScaleFactor_Parms, ScaleFactor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHandTrackingActor_UpdateHandJointScaleFactor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHandTrackingActor_UpdateHandJointScaleFactor_Statics::NewProp_ScaleFactor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHandTrackingActor_UpdateHandJointScaleFactor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHandTrackingActor_UpdateHandJointScaleFactor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHandTrackingActor, nullptr, "UpdateHandJointScaleFactor", Z_Construct_UFunction_AHandTrackingActor_UpdateHandJointScaleFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHandTrackingActor_UpdateHandJointScaleFactor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHandTrackingActor_UpdateHandJointScaleFactor_Statics::HandTrackingActor_eventUpdateHandJointScaleFactor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHandTrackingActor_UpdateHandJointScaleFactor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHandTrackingActor_UpdateHandJointScaleFactor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHandTrackingActor_UpdateHandJointScaleFactor_Statics::HandTrackingActor_eventUpdateHandJointScaleFactor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHandTrackingActor_UpdateHandJointScaleFactor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHandTrackingActor_UpdateHandJointScaleFactor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHandTrackingActor::execUpdateHandJointScaleFactor)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleFactor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateHandJointScaleFactor(Z_Param_ScaleFactor);
	P_NATIVE_END;
}
// ********** End Class AHandTrackingActor Function UpdateHandJointScaleFactor *********************

// ********** Begin Class AHandTrackingActor *******************************************************
void AHandTrackingActor::StaticRegisterNativesAHandTrackingActor()
{
	UClass* Class = AHandTrackingActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Initialize", &AHandTrackingActor::execInitialize },
		{ "ShouldShowHandJointLabels", &AHandTrackingActor::execShouldShowHandJointLabels },
		{ "ShouldTrackHand", &AHandTrackingActor::execShouldTrackHand },
		{ "UpdateHandJointScaleFactor", &AHandTrackingActor::execUpdateHandJointScaleFactor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AHandTrackingActor;
UClass* AHandTrackingActor::GetPrivateStaticClass()
{
	using TClass = AHandTrackingActor;
	if (!Z_Registration_Info_UClass_AHandTrackingActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HandTrackingActor"),
			Z_Registration_Info_UClass_AHandTrackingActor.InnerSingleton,
			StaticRegisterNativesAHandTrackingActor,
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
	return Z_Registration_Info_UClass_AHandTrackingActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AHandTrackingActor_NoRegister()
{
	return AHandTrackingActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHandTrackingActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HandTrackingActor.h" },
		{ "ModuleRelativePath", "HandTrackingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandJointActorClass_MetaData[] = {
		{ "Category", "HandTrackingActor" },
		{ "ModuleRelativePath", "HandTrackingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackingHand_MetaData[] = {
		{ "Category", "HandTrackingActor" },
		{ "ModuleRelativePath", "HandTrackingActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_HandJointActorClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackingHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackingHand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHandTrackingActor_Initialize, "Initialize" }, // 3754663428
		{ &Z_Construct_UFunction_AHandTrackingActor_ShouldShowHandJointLabels, "ShouldShowHandJointLabels" }, // 4196387711
		{ &Z_Construct_UFunction_AHandTrackingActor_ShouldTrackHand, "ShouldTrackHand" }, // 595123447
		{ &Z_Construct_UFunction_AHandTrackingActor_UpdateHandJointScaleFactor, "UpdateHandJointScaleFactor" }, // 2317093448
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHandTrackingActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_AHandTrackingActor_Statics::NewProp_HandJointActorClass = { "HandJointActorClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHandTrackingActor, HandJointActorClass), Z_Construct_UClass_AHandTrackingJointActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandJointActorClass_MetaData), NewProp_HandJointActorClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHandTrackingActor_Statics::NewProp_TrackingHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AHandTrackingActor_Statics::NewProp_TrackingHand = { "TrackingHand", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHandTrackingActor, TrackingHand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackingHand_MetaData), NewProp_TrackingHand_MetaData) }; // 775183092
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHandTrackingActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHandTrackingActor_Statics::NewProp_HandJointActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHandTrackingActor_Statics::NewProp_TrackingHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHandTrackingActor_Statics::NewProp_TrackingHand,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHandTrackingActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHandTrackingActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealSamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHandTrackingActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHandTrackingActor_Statics::ClassParams = {
	&AHandTrackingActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AHandTrackingActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AHandTrackingActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHandTrackingActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AHandTrackingActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHandTrackingActor()
{
	if (!Z_Registration_Info_UClass_AHandTrackingActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHandTrackingActor.OuterSingleton, Z_Construct_UClass_AHandTrackingActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHandTrackingActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHandTrackingActor);
AHandTrackingActor::~AHandTrackingActor() {}
// ********** End Class AHandTrackingActor *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_HandTrackingActor_h__Script_UnrealSamples_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHandTrackingActor, AHandTrackingActor::StaticClass, TEXT("AHandTrackingActor"), &Z_Registration_Info_UClass_AHandTrackingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHandTrackingActor), 4030857459U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_HandTrackingActor_h__Script_UnrealSamples_4026254764(TEXT("/Script/UnrealSamples"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_HandTrackingActor_h__Script_UnrealSamples_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_HandTrackingActor_h__Script_UnrealSamples_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
