// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/AndroidXRFaceTrackingComponent.h"
#include "AndroidXRTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRFaceTrackingComponent() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRFaceState();
ANDROIDXRFACETRACKING_API UClass* Z_Construct_UClass_UAndroidXRFaceTrackingComponent();
ANDROIDXRFACETRACKING_API UClass* Z_Construct_UClass_UAndroidXRFaceTrackingComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
UPackage* Z_Construct_UPackage__Script_AndroidXRFaceTracking();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAndroidXRFaceTrackingComponent ******************************************
void UAndroidXRFaceTrackingComponent::StaticRegisterNativesUAndroidXRFaceTrackingComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRFaceTrackingComponent;
UClass* UAndroidXRFaceTrackingComponent::GetPrivateStaticClass()
{
	using TClass = UAndroidXRFaceTrackingComponent;
	if (!Z_Registration_Info_UClass_UAndroidXRFaceTrackingComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRFaceTrackingComponent"),
			Z_Registration_Info_UClass_UAndroidXRFaceTrackingComponent.InnerSingleton,
			StaticRegisterNativesUAndroidXRFaceTrackingComponent,
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
	return Z_Registration_Info_UClass_UAndroidXRFaceTrackingComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRFaceTrackingComponent_NoRegister()
{
	return UAndroidXRFaceTrackingComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRFaceTrackingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* AndroidXR Face Tracking Component\n*/" },
#endif
		{ "HideCategories", "Object Mesh|SkeletalAsset Object Mobility Trigger" },
		{ "IncludePath", "Components/AndroidXRFaceTrackingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/AndroidXRFaceTrackingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AndroidXR Face Tracking Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceState_MetaData[] = {
		{ "Category", "AndroidXR|Face Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The face tracking state and facial expressions\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Components/AndroidXRFaceTrackingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The face tracking state and facial expressions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFaceCalibrationStatus_MetaData[] = {
		{ "Category", "AndroidXR|Face Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The face calibration status\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Components/AndroidXRFaceTrackingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The face calibration status" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FaceState;
	static void NewProp_bFaceCalibrationStatus_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFaceCalibrationStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRFaceTrackingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidXRFaceTrackingComponent_Statics::NewProp_FaceState = { "FaceState", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRFaceTrackingComponent, FaceState), Z_Construct_UScriptStruct_FAndroidXRFaceState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceState_MetaData), NewProp_FaceState_MetaData) }; // 2513444597
void Z_Construct_UClass_UAndroidXRFaceTrackingComponent_Statics::NewProp_bFaceCalibrationStatus_SetBit(void* Obj)
{
	((UAndroidXRFaceTrackingComponent*)Obj)->bFaceCalibrationStatus = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidXRFaceTrackingComponent_Statics::NewProp_bFaceCalibrationStatus = { "bFaceCalibrationStatus", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAndroidXRFaceTrackingComponent), &Z_Construct_UClass_UAndroidXRFaceTrackingComponent_Statics::NewProp_bFaceCalibrationStatus_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFaceCalibrationStatus_MetaData), NewProp_bFaceCalibrationStatus_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidXRFaceTrackingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRFaceTrackingComponent_Statics::NewProp_FaceState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRFaceTrackingComponent_Statics::NewProp_bFaceCalibrationStatus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRFaceTrackingComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAndroidXRFaceTrackingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRFaceTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRFaceTrackingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRFaceTrackingComponent_Statics::ClassParams = {
	&UAndroidXRFaceTrackingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAndroidXRFaceTrackingComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRFaceTrackingComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRFaceTrackingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRFaceTrackingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRFaceTrackingComponent()
{
	if (!Z_Registration_Info_UClass_UAndroidXRFaceTrackingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRFaceTrackingComponent.OuterSingleton, Z_Construct_UClass_UAndroidXRFaceTrackingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRFaceTrackingComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRFaceTrackingComponent);
UAndroidXRFaceTrackingComponent::~UAndroidXRFaceTrackingComponent() {}
// ********** End Class UAndroidXRFaceTrackingComponent ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRFaceTracking_Source_AndroidXRFaceTracking_Public_Components_AndroidXRFaceTrackingComponent_h__Script_AndroidXRFaceTracking_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXRFaceTrackingComponent, UAndroidXRFaceTrackingComponent::StaticClass, TEXT("UAndroidXRFaceTrackingComponent"), &Z_Registration_Info_UClass_UAndroidXRFaceTrackingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRFaceTrackingComponent), 4219481985U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRFaceTracking_Source_AndroidXRFaceTracking_Public_Components_AndroidXRFaceTrackingComponent_h__Script_AndroidXRFaceTracking_1679957743(TEXT("/Script/AndroidXRFaceTracking"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRFaceTracking_Source_AndroidXRFaceTracking_Public_Components_AndroidXRFaceTrackingComponent_h__Script_AndroidXRFaceTracking_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRFaceTracking_Source_AndroidXRFaceTracking_Public_Components_AndroidXRFaceTrackingComponent_h__Script_AndroidXRFaceTracking_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
