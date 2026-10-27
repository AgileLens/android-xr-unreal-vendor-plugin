// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealSamples/HandTrackingJointActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHandTrackingJointActor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EHandKeypoint();
UNREALSAMPLES_API UClass* Z_Construct_UClass_AHandTrackingJointActor();
UNREALSAMPLES_API UClass* Z_Construct_UClass_AHandTrackingJointActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealSamples();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHandTrackingJointActor Function ShowHandJoint ***************************
struct Z_Construct_UFunction_AHandTrackingJointActor_ShowHandJoint_Statics
{
	struct HandTrackingJointActor_eventShowHandJoint_Parms
	{
		bool bShouldShow;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HandTrackingJointActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bShouldShow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldShow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AHandTrackingJointActor_ShowHandJoint_Statics::NewProp_bShouldShow_SetBit(void* Obj)
{
	((HandTrackingJointActor_eventShowHandJoint_Parms*)Obj)->bShouldShow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHandTrackingJointActor_ShowHandJoint_Statics::NewProp_bShouldShow = { "bShouldShow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HandTrackingJointActor_eventShowHandJoint_Parms), &Z_Construct_UFunction_AHandTrackingJointActor_ShowHandJoint_Statics::NewProp_bShouldShow_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHandTrackingJointActor_ShowHandJoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHandTrackingJointActor_ShowHandJoint_Statics::NewProp_bShouldShow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHandTrackingJointActor_ShowHandJoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHandTrackingJointActor_ShowHandJoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHandTrackingJointActor, nullptr, "ShowHandJoint", Z_Construct_UFunction_AHandTrackingJointActor_ShowHandJoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHandTrackingJointActor_ShowHandJoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHandTrackingJointActor_ShowHandJoint_Statics::HandTrackingJointActor_eventShowHandJoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHandTrackingJointActor_ShowHandJoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHandTrackingJointActor_ShowHandJoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHandTrackingJointActor_ShowHandJoint_Statics::HandTrackingJointActor_eventShowHandJoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHandTrackingJointActor_ShowHandJoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHandTrackingJointActor_ShowHandJoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHandTrackingJointActor::execShowHandJoint)
{
	P_GET_UBOOL(Z_Param_bShouldShow);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowHandJoint(Z_Param_bShouldShow);
	P_NATIVE_END;
}
// ********** End Class AHandTrackingJointActor Function ShowHandJoint *****************************

// ********** Begin Class AHandTrackingJointActor Function UpdateHandJoint *************************
struct HandTrackingJointActor_eventUpdateHandJoint_Parms
{
	EHandKeypoint HandKeyPoint;
	FVector JointPosition;
	FQuat JointRotation;
	float JointRadius;
};
static FName NAME_AHandTrackingJointActor_UpdateHandJoint = FName(TEXT("UpdateHandJoint"));
void AHandTrackingJointActor::UpdateHandJoint(EHandKeypoint HandKeyPoint, FVector const& JointPosition, FQuat const& JointRotation, float JointRadius)
{
	HandTrackingJointActor_eventUpdateHandJoint_Parms Parms;
	Parms.HandKeyPoint=HandKeyPoint;
	Parms.JointPosition=JointPosition;
	Parms.JointRotation=JointRotation;
	Parms.JointRadius=JointRadius;
	UFunction* Func = FindFunctionChecked(NAME_AHandTrackingJointActor_UpdateHandJoint);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AHandTrackingJointActor_UpdateHandJoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HandTrackingJointActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JointPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JointRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_HandKeyPoint_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HandKeyPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_JointPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_JointRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JointRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AHandTrackingJointActor_UpdateHandJoint_Statics::NewProp_HandKeyPoint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AHandTrackingJointActor_UpdateHandJoint_Statics::NewProp_HandKeyPoint = { "HandKeyPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandTrackingJointActor_eventUpdateHandJoint_Parms, HandKeyPoint), Z_Construct_UEnum_HeadMountedDisplay_EHandKeypoint, METADATA_PARAMS(0, nullptr) }; // 3656641922
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHandTrackingJointActor_UpdateHandJoint_Statics::NewProp_JointPosition = { "JointPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandTrackingJointActor_eventUpdateHandJoint_Parms, JointPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JointPosition_MetaData), NewProp_JointPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHandTrackingJointActor_UpdateHandJoint_Statics::NewProp_JointRotation = { "JointRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandTrackingJointActor_eventUpdateHandJoint_Parms, JointRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JointRotation_MetaData), NewProp_JointRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHandTrackingJointActor_UpdateHandJoint_Statics::NewProp_JointRadius = { "JointRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandTrackingJointActor_eventUpdateHandJoint_Parms, JointRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHandTrackingJointActor_UpdateHandJoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHandTrackingJointActor_UpdateHandJoint_Statics::NewProp_HandKeyPoint_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHandTrackingJointActor_UpdateHandJoint_Statics::NewProp_HandKeyPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHandTrackingJointActor_UpdateHandJoint_Statics::NewProp_JointPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHandTrackingJointActor_UpdateHandJoint_Statics::NewProp_JointRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHandTrackingJointActor_UpdateHandJoint_Statics::NewProp_JointRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHandTrackingJointActor_UpdateHandJoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHandTrackingJointActor_UpdateHandJoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHandTrackingJointActor, nullptr, "UpdateHandJoint", Z_Construct_UFunction_AHandTrackingJointActor_UpdateHandJoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHandTrackingJointActor_UpdateHandJoint_Statics::PropPointers), sizeof(HandTrackingJointActor_eventUpdateHandJoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHandTrackingJointActor_UpdateHandJoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHandTrackingJointActor_UpdateHandJoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(HandTrackingJointActor_eventUpdateHandJoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHandTrackingJointActor_UpdateHandJoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHandTrackingJointActor_UpdateHandJoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AHandTrackingJointActor Function UpdateHandJoint ***************************

// ********** Begin Class AHandTrackingJointActor **************************************************
void AHandTrackingJointActor::StaticRegisterNativesAHandTrackingJointActor()
{
	UClass* Class = AHandTrackingJointActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ShowHandJoint", &AHandTrackingJointActor::execShowHandJoint },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AHandTrackingJointActor;
UClass* AHandTrackingJointActor::GetPrivateStaticClass()
{
	using TClass = AHandTrackingJointActor;
	if (!Z_Registration_Info_UClass_AHandTrackingJointActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HandTrackingJointActor"),
			Z_Registration_Info_UClass_AHandTrackingJointActor.InnerSingleton,
			StaticRegisterNativesAHandTrackingJointActor,
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
	return Z_Registration_Info_UClass_AHandTrackingJointActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AHandTrackingJointActor_NoRegister()
{
	return AHandTrackingJointActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHandTrackingJointActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HandTrackingJointActor.h" },
		{ "ModuleRelativePath", "HandTrackingJointActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleFactor_MetaData[] = {
		{ "Category", "HandTrackingJointActor" },
		{ "ModuleRelativePath", "HandTrackingJointActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldShowLabel_MetaData[] = {
		{ "Category", "HandTrackingJointActor" },
		{ "ModuleRelativePath", "HandTrackingJointActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleFactor;
	static void NewProp_bShouldShowLabel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldShowLabel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHandTrackingJointActor_ShowHandJoint, "ShowHandJoint" }, // 153634486
		{ &Z_Construct_UFunction_AHandTrackingJointActor_UpdateHandJoint, "UpdateHandJoint" }, // 3149163393
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHandTrackingJointActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHandTrackingJointActor_Statics::NewProp_ScaleFactor = { "ScaleFactor", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHandTrackingJointActor, ScaleFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleFactor_MetaData), NewProp_ScaleFactor_MetaData) };
void Z_Construct_UClass_AHandTrackingJointActor_Statics::NewProp_bShouldShowLabel_SetBit(void* Obj)
{
	((AHandTrackingJointActor*)Obj)->bShouldShowLabel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHandTrackingJointActor_Statics::NewProp_bShouldShowLabel = { "bShouldShowLabel", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHandTrackingJointActor), &Z_Construct_UClass_AHandTrackingJointActor_Statics::NewProp_bShouldShowLabel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldShowLabel_MetaData), NewProp_bShouldShowLabel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHandTrackingJointActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHandTrackingJointActor_Statics::NewProp_ScaleFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHandTrackingJointActor_Statics::NewProp_bShouldShowLabel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHandTrackingJointActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHandTrackingJointActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealSamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHandTrackingJointActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHandTrackingJointActor_Statics::ClassParams = {
	&AHandTrackingJointActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AHandTrackingJointActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AHandTrackingJointActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHandTrackingJointActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AHandTrackingJointActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHandTrackingJointActor()
{
	if (!Z_Registration_Info_UClass_AHandTrackingJointActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHandTrackingJointActor.OuterSingleton, Z_Construct_UClass_AHandTrackingJointActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHandTrackingJointActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHandTrackingJointActor);
AHandTrackingJointActor::~AHandTrackingJointActor() {}
// ********** End Class AHandTrackingJointActor ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_HandTrackingJointActor_h__Script_UnrealSamples_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHandTrackingJointActor, AHandTrackingJointActor::StaticClass, TEXT("AHandTrackingJointActor"), &Z_Registration_Info_UClass_AHandTrackingJointActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHandTrackingJointActor), 2545390882U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_HandTrackingJointActor_h__Script_UnrealSamples_834677127(TEXT("/Script/UnrealSamples"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_HandTrackingJointActor_h__Script_UnrealSamples_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_HandTrackingJointActor_h__Script_UnrealSamples_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
