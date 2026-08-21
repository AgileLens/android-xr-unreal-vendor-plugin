// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRSpatialMarkerEntity.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRSpatialMarkerEntity() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXRSPATIALENTITIES_API UClass* Z_Construct_UClass_UAndroidXRSpatialEntity();
ANDROIDXRSPATIALMARKERTRACKING_API UClass* Z_Construct_UClass_UAndroidXRSpatialMarkerEntity();
ANDROIDXRSPATIALMARKERTRACKING_API UClass* Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_NoRegister();
ANDROIDXRSPATIALMARKERTRACKING_API UEnum* Z_Construct_UEnum_AndroidXRSpatialMarkerTracking_ESpatialMarkerType();
ANDROIDXRSPATIALMARKERTRACKING_API UFunction* Z_Construct_UDelegateFunction_AndroidXRSpatialMarkerTracking_OnSpatialMarkerChangedDelegate__DelegateSignature();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
UPackage* Z_Construct_UPackage__Script_AndroidXRSpatialMarkerTracking();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESpatialMarkerType ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpatialMarkerType;
static UEnum* ESpatialMarkerType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESpatialMarkerType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESpatialMarkerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXRSpatialMarkerTracking_ESpatialMarkerType, (UObject*)Z_Construct_UPackage__Script_AndroidXRSpatialMarkerTracking(), TEXT("ESpatialMarkerType"));
	}
	return Z_Registration_Info_UEnum_ESpatialMarkerType.OuterSingleton;
}
template<> ANDROIDXRSPATIALMARKERTRACKING_API UEnum* StaticEnum<ESpatialMarkerType>()
{
	return ESpatialMarkerType_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXRSpatialMarkerTracking_ESpatialMarkerType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AprilTag.Comment", "//April tag\n" },
		{ "AprilTag.Name", "ESpatialMarkerType::AprilTag" },
		{ "AprilTag.ToolTip", "April tag" },
		{ "Aruco.Comment", "//Aruco marker\n" },
		{ "Aruco.Name", "ESpatialMarkerType::Aruco" },
		{ "Aruco.ToolTip", "Aruco marker" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* The marker type\n*/" },
#endif
		{ "MicroQR.Comment", "//MicroQR code\n" },
		{ "MicroQR.Name", "ESpatialMarkerType::MicroQR" },
		{ "MicroQR.ToolTip", "MicroQR code" },
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkerEntity.h" },
		{ "QR.Comment", "//QR code\n" },
		{ "QR.Name", "ESpatialMarkerType::QR" },
		{ "QR.ToolTip", "QR code" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The marker type" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESpatialMarkerType::Aruco", (int64)ESpatialMarkerType::Aruco },
		{ "ESpatialMarkerType::QR", (int64)ESpatialMarkerType::QR },
		{ "ESpatialMarkerType::MicroQR", (int64)ESpatialMarkerType::MicroQR },
		{ "ESpatialMarkerType::AprilTag", (int64)ESpatialMarkerType::AprilTag },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXRSpatialMarkerTracking_ESpatialMarkerType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXRSpatialMarkerTracking,
	nullptr,
	"ESpatialMarkerType",
	"ESpatialMarkerType",
	Z_Construct_UEnum_AndroidXRSpatialMarkerTracking_ESpatialMarkerType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXRSpatialMarkerTracking_ESpatialMarkerType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXRSpatialMarkerTracking_ESpatialMarkerType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXRSpatialMarkerTracking_ESpatialMarkerType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXRSpatialMarkerTracking_ESpatialMarkerType()
{
	if (!Z_Registration_Info_UEnum_ESpatialMarkerType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpatialMarkerType.InnerSingleton, Z_Construct_UEnum_AndroidXRSpatialMarkerTracking_ESpatialMarkerType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESpatialMarkerType.InnerSingleton;
}
// ********** End Enum ESpatialMarkerType **********************************************************

// ********** Begin Class UAndroidXRSpatialMarkerEntity ********************************************
void UAndroidXRSpatialMarkerEntity::StaticRegisterNativesUAndroidXRSpatialMarkerEntity()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAndroidXRSpatialMarkerEntity;
UClass* UAndroidXRSpatialMarkerEntity::GetPrivateStaticClass()
{
	using TClass = UAndroidXRSpatialMarkerEntity;
	if (!Z_Registration_Info_UClass_UAndroidXRSpatialMarkerEntity.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AndroidXRSpatialMarkerEntity"),
			Z_Registration_Info_UClass_UAndroidXRSpatialMarkerEntity.InnerSingleton,
			StaticRegisterNativesUAndroidXRSpatialMarkerEntity,
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
	return Z_Registration_Info_UClass_UAndroidXRSpatialMarkerEntity.InnerSingleton;
}
UClass* Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_NoRegister()
{
	return UAndroidXRSpatialMarkerEntity::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* A spatial marker entity\n*/" },
#endif
		{ "IncludePath", "AndroidXRSpatialMarkerEntity.h" },
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkerEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A spatial marker entity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Marker Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Whether the marker entity is valid\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkerEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the marker entity is valid" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerType_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Marker Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The type of marker associated with this entity\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkerEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of marker associated with this entity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerId_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Marker Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The id of the marker\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkerEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The id of the marker" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerTransform_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Marker Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The transform of the marker\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkerEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The transform of the marker" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerScale_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Marker Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The 2D extents of the marker\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkerEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The 2D extents of the marker" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasStringData_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Marker Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Whether the marker has string data or a byte buffer\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkerEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the marker has string data or a byte buffer" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerStringData_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Marker Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The string data of the marker\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkerEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The string data of the marker" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerRawData_MetaData[] = {
		{ "Category", "AndroidXR|Spatial Marker Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The byte buffer if the marker does not support strings\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkerEntity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The byte buffer if the marker does not support strings" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MarkerType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MarkerType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MarkerId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MarkerTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MarkerScale;
	static void NewProp_bHasStringData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasStringData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MarkerStringData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MarkerRawData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MarkerRawData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidXRSpatialMarkerEntity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_Statics::NewProp_bIsValid_SetBit(void* Obj)
{
	((UAndroidXRSpatialMarkerEntity*)Obj)->bIsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAndroidXRSpatialMarkerEntity), &Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValid_MetaData), NewProp_bIsValid_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_Statics::NewProp_MarkerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_Statics::NewProp_MarkerType = { "MarkerType", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialMarkerEntity, MarkerType), Z_Construct_UEnum_AndroidXRSpatialMarkerTracking_ESpatialMarkerType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerType_MetaData), NewProp_MarkerType_MetaData) }; // 4198143309
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_Statics::NewProp_MarkerId = { "MarkerId", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialMarkerEntity, MarkerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerId_MetaData), NewProp_MarkerId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_Statics::NewProp_MarkerTransform = { "MarkerTransform", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialMarkerEntity, MarkerTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerTransform_MetaData), NewProp_MarkerTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_Statics::NewProp_MarkerScale = { "MarkerScale", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialMarkerEntity, MarkerScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerScale_MetaData), NewProp_MarkerScale_MetaData) };
void Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_Statics::NewProp_bHasStringData_SetBit(void* Obj)
{
	((UAndroidXRSpatialMarkerEntity*)Obj)->bHasStringData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_Statics::NewProp_bHasStringData = { "bHasStringData", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAndroidXRSpatialMarkerEntity), &Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_Statics::NewProp_bHasStringData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasStringData_MetaData), NewProp_bHasStringData_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_Statics::NewProp_MarkerStringData = { "MarkerStringData", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialMarkerEntity, MarkerStringData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerStringData_MetaData), NewProp_MarkerStringData_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_Statics::NewProp_MarkerRawData_Inner = { "MarkerRawData", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_Statics::NewProp_MarkerRawData = { "MarkerRawData", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidXRSpatialMarkerEntity, MarkerRawData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerRawData_MetaData), NewProp_MarkerRawData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_Statics::NewProp_bIsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_Statics::NewProp_MarkerType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_Statics::NewProp_MarkerType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_Statics::NewProp_MarkerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_Statics::NewProp_MarkerTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_Statics::NewProp_MarkerScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_Statics::NewProp_bHasStringData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_Statics::NewProp_MarkerStringData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_Statics::NewProp_MarkerRawData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_Statics::NewProp_MarkerRawData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAndroidXRSpatialEntity,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXRSpatialMarkerTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_Statics::ClassParams = {
	&UAndroidXRSpatialMarkerEntity::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidXRSpatialMarkerEntity()
{
	if (!Z_Registration_Info_UClass_UAndroidXRSpatialMarkerEntity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidXRSpatialMarkerEntity.OuterSingleton, Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidXRSpatialMarkerEntity.OuterSingleton;
}
UAndroidXRSpatialMarkerEntity::UAndroidXRSpatialMarkerEntity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidXRSpatialMarkerEntity);
UAndroidXRSpatialMarkerEntity::~UAndroidXRSpatialMarkerEntity() {}
// ********** End Class UAndroidXRSpatialMarkerEntity **********************************************

// ********** Begin Delegate FOnSpatialMarkerChangedDelegate ***************************************
struct Z_Construct_UDelegateFunction_AndroidXRSpatialMarkerTracking_OnSpatialMarkerChangedDelegate__DelegateSignature_Statics
{
	struct _Script_AndroidXRSpatialMarkerTracking_eventOnSpatialMarkerChangedDelegate_Parms
	{
		UAndroidXRSpatialMarkerEntity* AddedMarker;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AndroidXRSpatialMarkerEntity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AddedMarker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AndroidXRSpatialMarkerTracking_OnSpatialMarkerChangedDelegate__DelegateSignature_Statics::NewProp_AddedMarker = { "AddedMarker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AndroidXRSpatialMarkerTracking_eventOnSpatialMarkerChangedDelegate_Parms, AddedMarker), Z_Construct_UClass_UAndroidXRSpatialMarkerEntity_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AndroidXRSpatialMarkerTracking_OnSpatialMarkerChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AndroidXRSpatialMarkerTracking_OnSpatialMarkerChangedDelegate__DelegateSignature_Statics::NewProp_AddedMarker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRSpatialMarkerTracking_OnSpatialMarkerChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AndroidXRSpatialMarkerTracking_OnSpatialMarkerChangedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AndroidXRSpatialMarkerTracking, nullptr, "OnSpatialMarkerChangedDelegate__DelegateSignature", Z_Construct_UDelegateFunction_AndroidXRSpatialMarkerTracking_OnSpatialMarkerChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRSpatialMarkerTracking_OnSpatialMarkerChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AndroidXRSpatialMarkerTracking_OnSpatialMarkerChangedDelegate__DelegateSignature_Statics::_Script_AndroidXRSpatialMarkerTracking_eventOnSpatialMarkerChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXRSpatialMarkerTracking_OnSpatialMarkerChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AndroidXRSpatialMarkerTracking_OnSpatialMarkerChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AndroidXRSpatialMarkerTracking_OnSpatialMarkerChangedDelegate__DelegateSignature_Statics::_Script_AndroidXRSpatialMarkerTracking_eventOnSpatialMarkerChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AndroidXRSpatialMarkerTracking_OnSpatialMarkerChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AndroidXRSpatialMarkerTracking_OnSpatialMarkerChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSpatialMarkerChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSpatialMarkerChangedDelegate, UAndroidXRSpatialMarkerEntity* AddedMarker)
{
	struct _Script_AndroidXRSpatialMarkerTracking_eventOnSpatialMarkerChangedDelegate_Parms
	{
		UAndroidXRSpatialMarkerEntity* AddedMarker;
	};
	_Script_AndroidXRSpatialMarkerTracking_eventOnSpatialMarkerChangedDelegate_Parms Parms;
	Parms.AddedMarker=AddedMarker;
	OnSpatialMarkerChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSpatialMarkerChangedDelegate *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialMarkerTracking_Source_AndroidXRSpatialMarkerTracking_Public_AndroidXRSpatialMarkerEntity_h__Script_AndroidXRSpatialMarkerTracking_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESpatialMarkerType_StaticEnum, TEXT("ESpatialMarkerType"), &Z_Registration_Info_UEnum_ESpatialMarkerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4198143309U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidXRSpatialMarkerEntity, UAndroidXRSpatialMarkerEntity::StaticClass, TEXT("UAndroidXRSpatialMarkerEntity"), &Z_Registration_Info_UClass_UAndroidXRSpatialMarkerEntity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidXRSpatialMarkerEntity), 2642896118U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialMarkerTracking_Source_AndroidXRSpatialMarkerTracking_Public_AndroidXRSpatialMarkerEntity_h__Script_AndroidXRSpatialMarkerTracking_1788440071(TEXT("/Script/AndroidXRSpatialMarkerTracking"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialMarkerTracking_Source_AndroidXRSpatialMarkerTracking_Public_AndroidXRSpatialMarkerEntity_h__Script_AndroidXRSpatialMarkerTracking_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialMarkerTracking_Source_AndroidXRSpatialMarkerTracking_Public_AndroidXRSpatialMarkerEntity_h__Script_AndroidXRSpatialMarkerTracking_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialMarkerTracking_Source_AndroidXRSpatialMarkerTracking_Public_AndroidXRSpatialMarkerEntity_h__Script_AndroidXRSpatialMarkerTracking_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXRSpatialMarkerTracking_Source_AndroidXRSpatialMarkerTracking_Public_AndroidXRSpatialMarkerEntity_h__Script_AndroidXRSpatialMarkerTracking_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
