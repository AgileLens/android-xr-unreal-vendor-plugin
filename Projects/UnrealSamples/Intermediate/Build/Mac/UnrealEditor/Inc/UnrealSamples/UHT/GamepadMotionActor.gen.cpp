// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealSamples/GamepadMotionActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGamepadMotionActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UNREALSAMPLES_API UClass* Z_Construct_UClass_AGamepadMotionActor();
UNREALSAMPLES_API UClass* Z_Construct_UClass_AGamepadMotionActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealSamples();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGamepadMotionActor Function GetStatusText *******************************
struct Z_Construct_UFunction_AGamepadMotionActor_GetStatusText_Statics
{
	struct GamepadMotionActor_eventGetStatusText_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gamepad Motion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Status for on-screen display: which device is attached, its sample rate,\n\x09 * or why no controller was found. Bound by the sample's Blueprint widget.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "GamepadMotionActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Status for on-screen display: which device is attached, its sample rate,\nor why no controller was found. Bound by the sample's Blueprint widget." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGamepadMotionActor_GetStatusText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GamepadMotionActor_eventGetStatusText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGamepadMotionActor_GetStatusText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGamepadMotionActor_GetStatusText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGamepadMotionActor_GetStatusText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGamepadMotionActor_GetStatusText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGamepadMotionActor, nullptr, "GetStatusText", Z_Construct_UFunction_AGamepadMotionActor_GetStatusText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGamepadMotionActor_GetStatusText_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGamepadMotionActor_GetStatusText_Statics::GamepadMotionActor_eventGetStatusText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGamepadMotionActor_GetStatusText_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGamepadMotionActor_GetStatusText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGamepadMotionActor_GetStatusText_Statics::GamepadMotionActor_eventGetStatusText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGamepadMotionActor_GetStatusText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGamepadMotionActor_GetStatusText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGamepadMotionActor::execGetStatusText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetStatusText();
	P_NATIVE_END;
}
// ********** End Class AGamepadMotionActor Function GetStatusText *********************************

// ********** Begin Class AGamepadMotionActor Function IsGamepadMotionAvailable ********************
struct Z_Construct_UFunction_AGamepadMotionActor_IsGamepadMotionAvailable_Statics
{
	struct GamepadMotionActor_eventIsGamepadMotionAvailable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gamepad Motion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** True once a gamepad exposing a gyroscope has been attached. */" },
#endif
		{ "ModuleRelativePath", "GamepadMotionActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True once a gamepad exposing a gyroscope has been attached." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGamepadMotionActor_IsGamepadMotionAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GamepadMotionActor_eventIsGamepadMotionAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGamepadMotionActor_IsGamepadMotionAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GamepadMotionActor_eventIsGamepadMotionAvailable_Parms), &Z_Construct_UFunction_AGamepadMotionActor_IsGamepadMotionAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGamepadMotionActor_IsGamepadMotionAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGamepadMotionActor_IsGamepadMotionAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGamepadMotionActor_IsGamepadMotionAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGamepadMotionActor_IsGamepadMotionAvailable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGamepadMotionActor, nullptr, "IsGamepadMotionAvailable", Z_Construct_UFunction_AGamepadMotionActor_IsGamepadMotionAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGamepadMotionActor_IsGamepadMotionAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGamepadMotionActor_IsGamepadMotionAvailable_Statics::GamepadMotionActor_eventIsGamepadMotionAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGamepadMotionActor_IsGamepadMotionAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGamepadMotionActor_IsGamepadMotionAvailable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGamepadMotionActor_IsGamepadMotionAvailable_Statics::GamepadMotionActor_eventIsGamepadMotionAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGamepadMotionActor_IsGamepadMotionAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGamepadMotionActor_IsGamepadMotionAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGamepadMotionActor::execIsGamepadMotionAvailable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsGamepadMotionAvailable();
	P_NATIVE_END;
}
// ********** End Class AGamepadMotionActor Function IsGamepadMotionAvailable **********************

// ********** Begin Class AGamepadMotionActor Function Recenter ************************************
struct Z_Construct_UFunction_AGamepadMotionActor_Recenter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gamepad Motion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Resets orientation to identity. */" },
#endif
		{ "ModuleRelativePath", "GamepadMotionActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resets orientation to identity." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGamepadMotionActor_Recenter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGamepadMotionActor, nullptr, "Recenter", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGamepadMotionActor_Recenter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGamepadMotionActor_Recenter_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGamepadMotionActor_Recenter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGamepadMotionActor_Recenter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGamepadMotionActor::execRecenter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Recenter();
	P_NATIVE_END;
}
// ********** End Class AGamepadMotionActor Function Recenter **************************************

// ********** Begin Class AGamepadMotionActor ******************************************************
void AGamepadMotionActor::StaticRegisterNativesAGamepadMotionActor()
{
	UClass* Class = AGamepadMotionActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetStatusText", &AGamepadMotionActor::execGetStatusText },
		{ "IsGamepadMotionAvailable", &AGamepadMotionActor::execIsGamepadMotionAvailable },
		{ "Recenter", &AGamepadMotionActor::execRecenter },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGamepadMotionActor;
UClass* AGamepadMotionActor::GetPrivateStaticClass()
{
	using TClass = AGamepadMotionActor;
	if (!Z_Registration_Info_UClass_AGamepadMotionActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GamepadMotionActor"),
			Z_Registration_Info_UClass_AGamepadMotionActor.InnerSingleton,
			StaticRegisterNativesAGamepadMotionActor,
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
	return Z_Registration_Info_UClass_AGamepadMotionActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AGamepadMotionActor_NoRegister()
{
	return AGamepadMotionActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGamepadMotionActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Rotates a mesh to match the orientation of a connected Bluetooth gamepad,\n * demonstrating the GamepadMotionSensors plugin.\n *\n * Android XR glasses-class devices do not currently ship tracked 6DoF\n * controllers, but a standard Bluetooth gamepad pairs and exposes its IMU\n * through InputDevice.getSensorManager(). That is enough for a 3DoF pointer.\n *\n * Orientation is integrated from the gyroscope, so yaw drifts over time.\n * Pressing Gamepad Face Button Bottom (A / cross) recenters.\n */" },
#endif
		{ "IncludePath", "GamepadMotionActor.h" },
		{ "ModuleRelativePath", "GamepadMotionActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotates a mesh to match the orientation of a connected Bluetooth gamepad,\ndemonstrating the GamepadMotionSensors plugin.\n\nAndroid XR glasses-class devices do not currently ship tracked 6DoF\ncontrollers, but a standard Bluetooth gamepad pairs and exposes its IMU\nthrough InputDevice.getSensorManager(). That is enough for a 3DoF pointer.\n\nOrientation is integrated from the gyroscope, so yaw drifts over time.\nPressing Gamepad Face Button Bottom (A / cross) recenters." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Gamepad Motion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mesh driven by the controller's orientation. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GamepadMotionActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mesh driven by the controller's orientation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterial_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Material instance so the cube shades as a solid object, not world grid. */" },
#endif
		{ "ModuleRelativePath", "GamepadMotionActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material instance so the cube shades as a solid object, not world grid." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGamepadMotionActor_GetStatusText, "GetStatusText" }, // 2306278085
		{ &Z_Construct_UFunction_AGamepadMotionActor_IsGamepadMotionAvailable, "IsGamepadMotionAvailable" }, // 3584809578
		{ &Z_Construct_UFunction_AGamepadMotionActor_Recenter, "Recenter" }, // 2368220104
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGamepadMotionActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGamepadMotionActor_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGamepadMotionActor, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGamepadMotionActor_Statics::NewProp_DynamicMaterial = { "DynamicMaterial", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGamepadMotionActor, DynamicMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicMaterial_MetaData), NewProp_DynamicMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGamepadMotionActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamepadMotionActor_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamepadMotionActor_Statics::NewProp_DynamicMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGamepadMotionActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGamepadMotionActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealSamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGamepadMotionActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGamepadMotionActor_Statics::ClassParams = {
	&AGamepadMotionActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGamepadMotionActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGamepadMotionActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGamepadMotionActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AGamepadMotionActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGamepadMotionActor()
{
	if (!Z_Registration_Info_UClass_AGamepadMotionActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGamepadMotionActor.OuterSingleton, Z_Construct_UClass_AGamepadMotionActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGamepadMotionActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGamepadMotionActor);
AGamepadMotionActor::~AGamepadMotionActor() {}
// ********** End Class AGamepadMotionActor ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_GamepadMotionActor_h__Script_UnrealSamples_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGamepadMotionActor, AGamepadMotionActor::StaticClass, TEXT("AGamepadMotionActor"), &Z_Registration_Info_UClass_AGamepadMotionActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGamepadMotionActor), 1107670647U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_GamepadMotionActor_h__Script_UnrealSamples_3233994014(TEXT("/Script/UnrealSamples"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_GamepadMotionActor_h__Script_UnrealSamples_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_GamepadMotionActor_h__Script_UnrealSamples_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
