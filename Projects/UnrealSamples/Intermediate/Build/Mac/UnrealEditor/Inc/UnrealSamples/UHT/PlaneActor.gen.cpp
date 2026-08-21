// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealSamples/PlaneActor.h"
#include "AndroidXRTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlaneActor() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXR_API UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRPlaneLabel();
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRTrackablePlane();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
UNREALSAMPLES_API UClass* Z_Construct_UClass_APlaneActor();
UNREALSAMPLES_API UClass* Z_Construct_UClass_APlaneActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealSamples();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APlaneActor Function AddTrackablePlane ***********************************
struct Z_Construct_UFunction_APlaneActor_AddTrackablePlane_Statics
{
	struct PlaneActor_eventAddTrackablePlane_Parms
	{
		FAndroidXRTrackablePlane TrackablePlane;
		bool bShowBounds;
		bool bShowPolygons;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlaneActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackablePlane_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrackablePlane;
	static void NewProp_bShowBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowBounds;
	static void NewProp_bShowPolygons_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPolygons;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlaneActor_AddTrackablePlane_Statics::NewProp_TrackablePlane = { "TrackablePlane", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlaneActor_eventAddTrackablePlane_Parms, TrackablePlane), Z_Construct_UScriptStruct_FAndroidXRTrackablePlane, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackablePlane_MetaData), NewProp_TrackablePlane_MetaData) }; // 1988889438
void Z_Construct_UFunction_APlaneActor_AddTrackablePlane_Statics::NewProp_bShowBounds_SetBit(void* Obj)
{
	((PlaneActor_eventAddTrackablePlane_Parms*)Obj)->bShowBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlaneActor_AddTrackablePlane_Statics::NewProp_bShowBounds = { "bShowBounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlaneActor_eventAddTrackablePlane_Parms), &Z_Construct_UFunction_APlaneActor_AddTrackablePlane_Statics::NewProp_bShowBounds_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlaneActor_AddTrackablePlane_Statics::NewProp_bShowPolygons_SetBit(void* Obj)
{
	((PlaneActor_eventAddTrackablePlane_Parms*)Obj)->bShowPolygons = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlaneActor_AddTrackablePlane_Statics::NewProp_bShowPolygons = { "bShowPolygons", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlaneActor_eventAddTrackablePlane_Parms), &Z_Construct_UFunction_APlaneActor_AddTrackablePlane_Statics::NewProp_bShowPolygons_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlaneActor_AddTrackablePlane_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlaneActor_AddTrackablePlane_Statics::NewProp_TrackablePlane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlaneActor_AddTrackablePlane_Statics::NewProp_bShowBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlaneActor_AddTrackablePlane_Statics::NewProp_bShowPolygons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlaneActor_AddTrackablePlane_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlaneActor_AddTrackablePlane_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlaneActor, nullptr, "AddTrackablePlane", Z_Construct_UFunction_APlaneActor_AddTrackablePlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlaneActor_AddTrackablePlane_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlaneActor_AddTrackablePlane_Statics::PlaneActor_eventAddTrackablePlane_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlaneActor_AddTrackablePlane_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlaneActor_AddTrackablePlane_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlaneActor_AddTrackablePlane_Statics::PlaneActor_eventAddTrackablePlane_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlaneActor_AddTrackablePlane()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlaneActor_AddTrackablePlane_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlaneActor::execAddTrackablePlane)
{
	P_GET_STRUCT_REF(FAndroidXRTrackablePlane,Z_Param_Out_TrackablePlane);
	P_GET_UBOOL(Z_Param_bShowBounds);
	P_GET_UBOOL(Z_Param_bShowPolygons);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTrackablePlane(Z_Param_Out_TrackablePlane,Z_Param_bShowBounds,Z_Param_bShowPolygons);
	P_NATIVE_END;
}
// ********** End Class APlaneActor Function AddTrackablePlane *************************************

// ********** Begin Class APlaneActor Function ClearTrackablePlanes ********************************
struct Z_Construct_UFunction_APlaneActor_ClearTrackablePlanes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlaneActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlaneActor_ClearTrackablePlanes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlaneActor, nullptr, "ClearTrackablePlanes", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlaneActor_ClearTrackablePlanes_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlaneActor_ClearTrackablePlanes_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APlaneActor_ClearTrackablePlanes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlaneActor_ClearTrackablePlanes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlaneActor::execClearTrackablePlanes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearTrackablePlanes();
	P_NATIVE_END;
}
// ********** End Class APlaneActor Function ClearTrackablePlanes **********************************

// ********** Begin Class APlaneActor Function UpdateVisuals ***************************************
struct Z_Construct_UFunction_APlaneActor_UpdateVisuals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlaneActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlaneActor_UpdateVisuals_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlaneActor, nullptr, "UpdateVisuals", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlaneActor_UpdateVisuals_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlaneActor_UpdateVisuals_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APlaneActor_UpdateVisuals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlaneActor_UpdateVisuals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlaneActor::execUpdateVisuals)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateVisuals();
	P_NATIVE_END;
}
// ********** End Class APlaneActor Function UpdateVisuals *****************************************

// ********** Begin Class APlaneActor **************************************************************
void APlaneActor::StaticRegisterNativesAPlaneActor()
{
	UClass* Class = APlaneActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddTrackablePlane", &APlaneActor::execAddTrackablePlane },
		{ "ClearTrackablePlanes", &APlaneActor::execClearTrackablePlanes },
		{ "UpdateVisuals", &APlaneActor::execUpdateVisuals },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_APlaneActor;
UClass* APlaneActor::GetPrivateStaticClass()
{
	using TClass = APlaneActor;
	if (!Z_Registration_Info_UClass_APlaneActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlaneActor"),
			Z_Registration_Info_UClass_APlaneActor.InnerSingleton,
			StaticRegisterNativesAPlaneActor,
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
	return Z_Registration_Info_UClass_APlaneActor.InnerSingleton;
}
UClass* Z_Construct_UClass_APlaneActor_NoRegister()
{
	return APlaneActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APlaneActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlaneActor.h" },
		{ "ModuleRelativePath", "PlaneActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneBoundsInstancedMesh_MetaData[] = {
		{ "Category", "PlaneActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlaneActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlanePolygonProceduralMesh_MetaData[] = {
		{ "Category", "PlaneActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlaneActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlanePolygonMaterial_MetaData[] = {
		{ "Category", "PlaneActor" },
		{ "ModuleRelativePath", "PlaneActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlanePolygonNiagara_MetaData[] = {
		{ "Category", "PlaneActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlaneActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlanePolygonMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "PlaneActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaneBoundsInstancedMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlanePolygonProceduralMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlanePolygonMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlanePolygonNiagara;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlanePolygonMaterialInstance_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlanePolygonMaterialInstance_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlanePolygonMaterialInstance_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PlanePolygonMaterialInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlaneActor_AddTrackablePlane, "AddTrackablePlane" }, // 3722460477
		{ &Z_Construct_UFunction_APlaneActor_ClearTrackablePlanes, "ClearTrackablePlanes" }, // 2789132395
		{ &Z_Construct_UFunction_APlaneActor_UpdateVisuals, "UpdateVisuals" }, // 3055248131
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlaneActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlaneActor_Statics::NewProp_PlaneBoundsInstancedMesh = { "PlaneBoundsInstancedMesh", nullptr, (EPropertyFlags)0x012408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlaneActor, PlaneBoundsInstancedMesh), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneBoundsInstancedMesh_MetaData), NewProp_PlaneBoundsInstancedMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlaneActor_Statics::NewProp_PlanePolygonProceduralMesh = { "PlanePolygonProceduralMesh", nullptr, (EPropertyFlags)0x012408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlaneActor, PlanePolygonProceduralMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlanePolygonProceduralMesh_MetaData), NewProp_PlanePolygonProceduralMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlaneActor_Statics::NewProp_PlanePolygonMaterial = { "PlanePolygonMaterial", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlaneActor, PlanePolygonMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlanePolygonMaterial_MetaData), NewProp_PlanePolygonMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlaneActor_Statics::NewProp_PlanePolygonNiagara = { "PlanePolygonNiagara", nullptr, (EPropertyFlags)0x012408000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlaneActor, PlanePolygonNiagara), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlanePolygonNiagara_MetaData), NewProp_PlanePolygonNiagara_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlaneActor_Statics::NewProp_PlanePolygonMaterialInstance_ValueProp = { "PlanePolygonMaterialInstance", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlaneActor_Statics::NewProp_PlanePolygonMaterialInstance_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APlaneActor_Statics::NewProp_PlanePolygonMaterialInstance_Key_KeyProp = { "PlanePolygonMaterialInstance_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_AndroidXR_EAndroidXRPlaneLabel, METADATA_PARAMS(0, nullptr) }; // 3523931115
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_APlaneActor_Statics::NewProp_PlanePolygonMaterialInstance = { "PlanePolygonMaterialInstance", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlaneActor, PlanePolygonMaterialInstance), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlanePolygonMaterialInstance_MetaData), NewProp_PlanePolygonMaterialInstance_MetaData) }; // 3523931115
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlaneActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlaneActor_Statics::NewProp_PlaneBoundsInstancedMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlaneActor_Statics::NewProp_PlanePolygonProceduralMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlaneActor_Statics::NewProp_PlanePolygonMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlaneActor_Statics::NewProp_PlanePolygonNiagara,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlaneActor_Statics::NewProp_PlanePolygonMaterialInstance_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlaneActor_Statics::NewProp_PlanePolygonMaterialInstance_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlaneActor_Statics::NewProp_PlanePolygonMaterialInstance_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlaneActor_Statics::NewProp_PlanePolygonMaterialInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlaneActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlaneActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealSamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlaneActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlaneActor_Statics::ClassParams = {
	&APlaneActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APlaneActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlaneActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlaneActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APlaneActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlaneActor()
{
	if (!Z_Registration_Info_UClass_APlaneActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlaneActor.OuterSingleton, Z_Construct_UClass_APlaneActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlaneActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlaneActor);
APlaneActor::~APlaneActor() {}
// ********** End Class APlaneActor ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_PlaneActor_h__Script_UnrealSamples_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlaneActor, APlaneActor::StaticClass, TEXT("APlaneActor"), &Z_Registration_Info_UClass_APlaneActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlaneActor), 3717630136U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_PlaneActor_h__Script_UnrealSamples_3300622852(TEXT("/Script/UnrealSamples"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_PlaneActor_h__Script_UnrealSamples_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_PlaneActor_h__Script_UnrealSamples_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
