// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/AndroidXREyeTrackingComponent.h"
#include "AndroidXREyeTrackingTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXREyeTrackingComponent() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXREYETRACKING_API UClass* Z_Construct_UClass_UAndroidXREyeTrackingComponent();
ANDROIDXREYETRACKING_API UClass* Z_Construct_UClass_UAndroidXREyeTrackingComponent_NoRegister();
ANDROIDXREYETRACKING_API UEnum* Z_Construct_UEnum_AndroidXREyeTracking_EAndroidXREyeIndex();
ANDROIDXREYETRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXREyes();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
UPackage* Z_Construct_UPackage__Script_AndroidXREyeTracking();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAndroidXREyeTrackingComponent *******************************************
void UAndroidXREyeTrackingComponent::StaticRegisterNativesUAndroidXREyeTrackingComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXREyeTrackingComponent;
UClass* UAndroidXREyeTrackingComponent::GetPrivateStaticClass()
{
	using TClass = UAndroidXREyeTrackingComponent;
	if (!Z_Registration_Info_UClass_UAndroidXREyeTrackingComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXREyeTrackingComponent"),
			Z_Registration_Info_UClass_UAndroidXREyeTrackingComponent.InnerSingleton,
			StaticRegisterNativesUAndroidXREyeTrackingComponent,
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
	return Z_Registration_Info_UClass_UAndroidXREyeTrackingComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXREyeTrackingComponent_NoRegister()
{
	return UAndroidXREyeTrackingComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXREyeTrackingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* AndroidXR Eye Tracking scene component. The component will be positioned at the pose of the selected eye source\n*/" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/AndroidXREyeTrackingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/AndroidXREyeTrackingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AndroidXR Eye Tracking scene component. The component will be positioned at the pose of the selected eye source" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateTransform_MetaData[] = {
		{ "Category", "AndroidXR|Eye Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Whether to update the transform of the component with the eye transform\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Components/AndroidXREyeTrackingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to update the transform of the component with the eye transform" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardOffset_MetaData[] = {
		{ "Category", "AndroidXR|Eye Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The forward offset from the eye position for the component\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Components/AndroidXREyeTrackingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The forward offset from the eye position for the component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationOffSet_MetaData[] = {
		{ "Category", "AndroidXR|Eye Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The location offset of the component from the eye position\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Components/AndroidXREyeTrackingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The location offset of the component from the eye position" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMatchEyeRotation_MetaData[] = {
		{ "Category", "AndroidXR|Eye Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Whether to match the component's rotation with the eye rotation\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Components/AndroidXREyeTrackingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to match the component's rotation with the eye rotation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EyeSource_MetaData[] = {
		{ "Category", "AndroidXR|Eye Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The eye to update the component's transform with\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Components/AndroidXREyeTrackingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The eye to update the component's transform with" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EyesState_MetaData[] = {
		{ "Category", "AndroidXR|Eye Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The eye data obtained from the AndroidXREyeTracking subsystem\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Components/AndroidXREyeTrackingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The eye data obtained from the AndroidXREyeTracking subsystem" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bUpdateTransform_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateTransform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffSet;
	static void NewProp_bMatchEyeRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchEyeRotation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EyeSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EyeSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EyesState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXREyeTrackingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAndroidXREyeTrackingComponent_Statics::NewProp_bUpdateTransform_SetBit(void* Obj)
{
	((UAndroidXREyeTrackingComponent*)Obj)->bUpdateTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidXREyeTrackingComponent_Statics::NewProp_bUpdateTransform = { "bUpdateTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAndroidXREyeTrackingComponent), &Z_Construct_UClass_UAndroidXREyeTrackingComponent_Statics::NewProp_bUpdateTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateTransform_MetaData), NewProp_bUpdateTransform_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAndroidXREyeTrackingComponent_Statics::NewProp_ForwardOffset = { "ForwardOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXREyeTrackingComponent, ForwardOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardOffset_MetaData), NewProp_ForwardOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidXREyeTrackingComponent_Statics::NewProp_LocationOffSet = { "LocationOffSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXREyeTrackingComponent, LocationOffSet), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationOffSet_MetaData), NewProp_LocationOffSet_MetaData) };
void Z_Construct_UClass_UAndroidXREyeTrackingComponent_Statics::NewProp_bMatchEyeRotation_SetBit(void* Obj)
{
	((UAndroidXREyeTrackingComponent*)Obj)->bMatchEyeRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidXREyeTrackingComponent_Statics::NewProp_bMatchEyeRotation = { "bMatchEyeRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAndroidXREyeTrackingComponent), &Z_Construct_UClass_UAndroidXREyeTrackingComponent_Statics::NewProp_bMatchEyeRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMatchEyeRotation_MetaData), NewProp_bMatchEyeRotation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidXREyeTrackingComponent_Statics::NewProp_EyeSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAndroidXREyeTrackingComponent_Statics::NewProp_EyeSource = { "EyeSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXREyeTrackingComponent, EyeSource), Z_Construct_UEnum_AndroidXREyeTracking_EAndroidXREyeIndex, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EyeSource_MetaData), NewProp_EyeSource_MetaData) }; // 1771742669
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidXREyeTrackingComponent_Statics::NewProp_EyesState = { "EyesState", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXREyeTrackingComponent, EyesState), Z_Construct_UScriptStruct_FAndroidXREyes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EyesState_MetaData), NewProp_EyesState_MetaData) }; // 1457270145
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidXREyeTrackingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXREyeTrackingComponent_Statics::NewProp_bUpdateTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXREyeTrackingComponent_Statics::NewProp_ForwardOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXREyeTrackingComponent_Statics::NewProp_LocationOffSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXREyeTrackingComponent_Statics::NewProp_bMatchEyeRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXREyeTrackingComponent_Statics::NewProp_EyeSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXREyeTrackingComponent_Statics::NewProp_EyeSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXREyeTrackingComponent_Statics::NewProp_EyesState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXREyeTrackingComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAndroidXREyeTrackingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXREyeTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXREyeTrackingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXREyeTrackingComponent_Statics::ClassParams = {
	&UAndroidXREyeTrackingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAndroidXREyeTrackingComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXREyeTrackingComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXREyeTrackingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXREyeTrackingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXREyeTrackingComponent()
{
	if (!Z_Registration_Info_UClass_UAndroidXREyeTrackingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXREyeTrackingComponent.OuterSingleton, Z_Construct_UClass_UAndroidXREyeTrackingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXREyeTrackingComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXREyeTrackingComponent);
UAndroidXREyeTrackingComponent::~UAndroidXREyeTrackingComponent() {}
// ********** End Class UAndroidXREyeTrackingComponent *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXREyeTracking_Source_AndroidXREyeTracking_Public_Components_AndroidXREyeTrackingComponent_h__Script_AndroidXREyeTracking_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXREyeTrackingComponent, UAndroidXREyeTrackingComponent::StaticClass, TEXT("UAndroidXREyeTrackingComponent"), &Z_Registration_Info_UClass_UAndroidXREyeTrackingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXREyeTrackingComponent), 2227611537U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXREyeTracking_Source_AndroidXREyeTracking_Public_Components_AndroidXREyeTrackingComponent_h__Script_AndroidXREyeTracking_277470134(TEXT("/Script/AndroidXREyeTracking"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXREyeTracking_Source_AndroidXREyeTracking_Public_Components_AndroidXREyeTrackingComponent_h__Script_AndroidXREyeTracking_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXREyeTracking_Source_AndroidXREyeTracking_Public_Components_AndroidXREyeTrackingComponent_h__Script_AndroidXREyeTracking_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
