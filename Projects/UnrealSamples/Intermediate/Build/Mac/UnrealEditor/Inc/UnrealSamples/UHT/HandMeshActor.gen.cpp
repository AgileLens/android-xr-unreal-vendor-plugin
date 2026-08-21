// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealSamples/HandMeshActor.h"
#include "HeadMountedDisplayTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHandMeshActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPoseableMeshComponent_NoRegister();
HEADMOUNTEDDISPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FXRMotionControllerData();
INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
UNREALSAMPLES_API UClass* Z_Construct_UClass_AHandMeshActor();
UNREALSAMPLES_API UClass* Z_Construct_UClass_AHandMeshActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealSamples();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHandMeshActor Function CreateHandMesh ***********************************
struct Z_Construct_UFunction_AHandMeshActor_CreateHandMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HandMeshActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHandMeshActor_CreateHandMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHandMeshActor, nullptr, "CreateHandMesh", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHandMeshActor_CreateHandMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHandMeshActor_CreateHandMesh_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AHandMeshActor_CreateHandMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHandMeshActor_CreateHandMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHandMeshActor::execCreateHandMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateHandMesh();
	P_NATIVE_END;
}
// ********** End Class AHandMeshActor Function CreateHandMesh *************************************

// ********** Begin Class AHandMeshActor Function SetHandMeshScale *********************************
struct Z_Construct_UFunction_AHandMeshActor_SetHandMeshScale_Statics
{
	struct HandMeshActor_eventSetHandMeshScale_Parms
	{
		float Scale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HandMeshActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHandMeshActor_SetHandMeshScale_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandMeshActor_eventSetHandMeshScale_Parms, Scale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHandMeshActor_SetHandMeshScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHandMeshActor_SetHandMeshScale_Statics::NewProp_Scale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHandMeshActor_SetHandMeshScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHandMeshActor_SetHandMeshScale_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHandMeshActor, nullptr, "SetHandMeshScale", Z_Construct_UFunction_AHandMeshActor_SetHandMeshScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHandMeshActor_SetHandMeshScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHandMeshActor_SetHandMeshScale_Statics::HandMeshActor_eventSetHandMeshScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHandMeshActor_SetHandMeshScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHandMeshActor_SetHandMeshScale_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHandMeshActor_SetHandMeshScale_Statics::HandMeshActor_eventSetHandMeshScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHandMeshActor_SetHandMeshScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHandMeshActor_SetHandMeshScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHandMeshActor::execSetHandMeshScale)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHandMeshScale(Z_Param_Scale);
	P_NATIVE_END;
}
// ********** End Class AHandMeshActor Function SetHandMeshScale ***********************************

// ********** Begin Class AHandMeshActor ***********************************************************
void AHandMeshActor::StaticRegisterNativesAHandMeshActor()
{
	UClass* Class = AHandMeshActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateHandMesh", &AHandMeshActor::execCreateHandMesh },
		{ "SetHandMeshScale", &AHandMeshActor::execSetHandMeshScale },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AHandMeshActor;
UClass* AHandMeshActor::GetPrivateStaticClass()
{
	using TClass = AHandMeshActor;
	if (!Z_Registration_Info_UClass_AHandMeshActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HandMeshActor"),
			Z_Registration_Info_UClass_AHandMeshActor.InnerSingleton,
			StaticRegisterNativesAHandMeshActor,
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
	return Z_Registration_Info_UClass_AHandMeshActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AHandMeshActor_NoRegister()
{
	return AHandMeshActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHandMeshActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HandMeshActor.h" },
		{ "ModuleRelativePath", "HandMeshActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseableMeshComponent_MetaData[] = {
		{ "Category", "HandMeshActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HandMeshActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionControllerData_MetaData[] = {
		{ "Category", "HandMeshActor" },
		{ "ModuleRelativePath", "HandMeshActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "HandMeshActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NOTE that this material must have bUsedWithSkeletalMesh set to true\n" },
#endif
		{ "ModuleRelativePath", "HandMeshActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NOTE that this material must have bUsedWithSkeletalMesh set to true" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerHand_MetaData[] = {
		{ "Category", "HandMeshActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set this to either Right or Left to get the joints\n" },
#endif
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "HandMeshActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set this to either Right or Left to get the joints" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PoseableMeshComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MotionControllerData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ControllerHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ControllerHand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHandMeshActor_CreateHandMesh, "CreateHandMesh" }, // 2533098726
		{ &Z_Construct_UFunction_AHandMeshActor_SetHandMeshScale, "SetHandMeshScale" }, // 3705256953
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHandMeshActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHandMeshActor_Statics::NewProp_PoseableMeshComponent = { "PoseableMeshComponent", nullptr, (EPropertyFlags)0x012408000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHandMeshActor, PoseableMeshComponent), Z_Construct_UClass_UPoseableMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseableMeshComponent_MetaData), NewProp_PoseableMeshComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHandMeshActor_Statics::NewProp_MotionControllerData = { "MotionControllerData", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHandMeshActor, MotionControllerData), Z_Construct_UScriptStruct_FXRMotionControllerData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionControllerData_MetaData), NewProp_MotionControllerData_MetaData) }; // 2164928069
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHandMeshActor_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHandMeshActor, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHandMeshActor_Statics::NewProp_ControllerHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AHandMeshActor_Statics::NewProp_ControllerHand = { "ControllerHand", nullptr, (EPropertyFlags)0x0021080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHandMeshActor, ControllerHand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerHand_MetaData), NewProp_ControllerHand_MetaData) }; // 775183092
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHandMeshActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHandMeshActor_Statics::NewProp_PoseableMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHandMeshActor_Statics::NewProp_MotionControllerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHandMeshActor_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHandMeshActor_Statics::NewProp_ControllerHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHandMeshActor_Statics::NewProp_ControllerHand,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHandMeshActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHandMeshActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealSamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHandMeshActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHandMeshActor_Statics::ClassParams = {
	&AHandMeshActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AHandMeshActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AHandMeshActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHandMeshActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AHandMeshActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHandMeshActor()
{
	if (!Z_Registration_Info_UClass_AHandMeshActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHandMeshActor.OuterSingleton, Z_Construct_UClass_AHandMeshActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHandMeshActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHandMeshActor);
AHandMeshActor::~AHandMeshActor() {}
// ********** End Class AHandMeshActor *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_HandMeshActor_h__Script_UnrealSamples_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHandMeshActor, AHandMeshActor::StaticClass, TEXT("AHandMeshActor"), &Z_Registration_Info_UClass_AHandMeshActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHandMeshActor), 3625548796U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_HandMeshActor_h__Script_UnrealSamples_2818648921(TEXT("/Script/UnrealSamples"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_HandMeshActor_h__Script_UnrealSamples_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_HandMeshActor_h__Script_UnrealSamples_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
