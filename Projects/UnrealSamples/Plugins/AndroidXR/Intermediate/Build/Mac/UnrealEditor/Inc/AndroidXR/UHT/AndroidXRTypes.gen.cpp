// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXRTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXRTypes() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXR_API UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRAndroidThreadType();
ANDROIDXR_API UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRDepthCameraResolution();
ANDROIDXR_API UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRDepthSwapchainCreateFlag();
ANDROIDXR_API UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXREnvironmentBlendMode();
ANDROIDXR_API UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRFaceParameterIndices();
ANDROIDXR_API UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRFaceTrackingConfidenceRegions();
ANDROIDXR_API UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRFaceTrackingState();
ANDROIDXR_API UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRPassthroughCameraState();
ANDROIDXR_API UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRPerformanceMetricsCounterFlags();
ANDROIDXR_API UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRPerformanceMetricsCounterUnit();
ANDROIDXR_API UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsDomain();
ANDROIDXR_API UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsLevel();
ANDROIDXR_API UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsNotificationLevel();
ANDROIDXR_API UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsSubDomain();
ANDROIDXR_API UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRPlaneLabel();
ANDROIDXR_API UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRPlaneType();
ANDROIDXR_API UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRSceneMeshSemanticLabelSet();
ANDROIDXR_API UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRTrackableType();
ANDROIDXR_API UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRTrackingState();
ANDROIDXR_API UEnum* Z_Construct_UEnum_AndroidXR_EOpenXRHandInteractionType();
ANDROIDXR_API UEnum* Z_Construct_UEnum_AndroidXR_ESceneMeshSemanticLabel();
ANDROIDXR_API UEnum* Z_Construct_UEnum_AndroidXR_ESceneMeshTrackingState();
ANDROIDXR_API UFunction* Z_Construct_UDelegateFunction_AndroidXR_AndroidXRDisplayRefreshRateChangedDynamicDelegate__DelegateSignature();
ANDROIDXR_API UFunction* Z_Construct_UDelegateFunction_AndroidXR_AndroidXRPerfSettingsDynamicDelegate__DelegateSignature();
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRDepthAcquireResult();
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRDepthSwapchain();
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRDepthSwapchainImage();
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRDepthView();
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRFaceState();
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRFaceTracker();
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRFieldOfView();
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRPerformanceMetricsCounter();
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRRaycastHit();
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRSceneMeshingTracker();
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRSceneMeshSnapshot();
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshData();
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshState();
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRSpace();
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRTrackable();
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRTrackablePlane();
ANDROIDXR_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRTrackableTracker();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
UPackage* Z_Construct_UPackage__Script_AndroidXR();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EAndroidXRTrackableType ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAndroidXRTrackableType;
static UEnum* EAndroidXRTrackableType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRTrackableType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAndroidXRTrackableType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXR_EAndroidXRTrackableType, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("EAndroidXRTrackableType"));
	}
	return Z_Registration_Info_UEnum_EAndroidXRTrackableType.OuterSingleton;
}
template<> ANDROIDXR_API UEnum* StaticEnum<EAndroidXRTrackableType>()
{
	return EAndroidXRTrackableType_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXR_EAndroidXRTrackableType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Types of trackables.\n */" },
#endif
		{ "Depth.Comment", "// Indicates that the trackable is the depth buffer.\n" },
		{ "Depth.Name", "EAndroidXRTrackableType::Depth" },
		{ "Depth.ToolTip", "Indicates that the trackable is the depth buffer." },
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
		{ "NotValid.Comment", "// Indicates that the trackable is not valid.\n" },
		{ "NotValid.Name", "EAndroidXRTrackableType::NotValid" },
		{ "NotValid.ToolTip", "Indicates that the trackable is not valid." },
		{ "Plane.Comment", "// Indicates that the trackable is a plane.\n" },
		{ "Plane.Name", "EAndroidXRTrackableType::Plane" },
		{ "Plane.ToolTip", "Indicates that the trackable is a plane." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Types of trackables." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAndroidXRTrackableType::NotValid", (int64)EAndroidXRTrackableType::NotValid },
		{ "EAndroidXRTrackableType::Plane", (int64)EAndroidXRTrackableType::Plane },
		{ "EAndroidXRTrackableType::Depth", (int64)EAndroidXRTrackableType::Depth },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXR_EAndroidXRTrackableType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	"EAndroidXRTrackableType",
	"EAndroidXRTrackableType",
	Z_Construct_UEnum_AndroidXR_EAndroidXRTrackableType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXRTrackableType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXRTrackableType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXR_EAndroidXRTrackableType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRTrackableType()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRTrackableType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAndroidXRTrackableType.InnerSingleton, Z_Construct_UEnum_AndroidXR_EAndroidXRTrackableType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAndroidXRTrackableType.InnerSingleton;
}
// ********** End Enum EAndroidXRTrackableType *****************************************************

// ********** Begin Enum EAndroidXRTrackingState ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAndroidXRTrackingState;
static UEnum* EAndroidXRTrackingState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRTrackingState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAndroidXRTrackingState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXR_EAndroidXRTrackingState, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("EAndroidXRTrackingState"));
	}
	return Z_Registration_Info_UEnum_EAndroidXRTrackingState.OuterSingleton;
}
template<> ANDROIDXR_API UEnum* StaticEnum<EAndroidXRTrackingState>()
{
	return EAndroidXRTrackingState_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXR_EAndroidXRTrackingState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Tracking state.\n */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
		{ "Paused.Comment", "// Indicates that the trackable or anchor tracking is paused but may be resumed in the future.\n" },
		{ "Paused.Name", "EAndroidXRTrackingState::Paused" },
		{ "Paused.ToolTip", "Indicates that the trackable or anchor tracking is paused but may be resumed in the future." },
		{ "Stopped.Comment", "// Tracking has stopped on this Trackable and will never be resumed.\n" },
		{ "Stopped.Name", "EAndroidXRTrackingState::Stopped" },
		{ "Stopped.ToolTip", "Tracking has stopped on this Trackable and will never be resumed." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tracking state." },
#endif
		{ "Tracking.Comment", "// The object is currently tracked and its pose is current.\n" },
		{ "Tracking.Name", "EAndroidXRTrackingState::Tracking" },
		{ "Tracking.ToolTip", "The object is currently tracked and its pose is current." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAndroidXRTrackingState::Paused", (int64)EAndroidXRTrackingState::Paused },
		{ "EAndroidXRTrackingState::Stopped", (int64)EAndroidXRTrackingState::Stopped },
		{ "EAndroidXRTrackingState::Tracking", (int64)EAndroidXRTrackingState::Tracking },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXR_EAndroidXRTrackingState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	"EAndroidXRTrackingState",
	"EAndroidXRTrackingState",
	Z_Construct_UEnum_AndroidXR_EAndroidXRTrackingState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXRTrackingState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXRTrackingState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXR_EAndroidXRTrackingState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRTrackingState()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRTrackingState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAndroidXRTrackingState.InnerSingleton, Z_Construct_UEnum_AndroidXR_EAndroidXRTrackingState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAndroidXRTrackingState.InnerSingleton;
}
// ********** End Enum EAndroidXRTrackingState *****************************************************

// ********** Begin Enum EAndroidXRPlaneType *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAndroidXRPlaneType;
static UEnum* EAndroidXRPlaneType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRPlaneType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAndroidXRPlaneType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXR_EAndroidXRPlaneType, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("EAndroidXRPlaneType"));
	}
	return Z_Registration_Info_UEnum_EAndroidXRPlaneType.OuterSingleton;
}
template<> ANDROIDXR_API UEnum* StaticEnum<EAndroidXRPlaneType>()
{
	return EAndroidXRPlaneType_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXR_EAndroidXRPlaneType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Arbitrary.Comment", "// A plane with an arbitrary orientation.\n" },
		{ "Arbitrary.Name", "EAndroidXRPlaneType::Arbitrary" },
		{ "Arbitrary.ToolTip", "A plane with an arbitrary orientation." },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Plane type (generally indicates orientation and facing).\n */" },
#endif
		{ "HorizontalDownwardFacing.Comment", "// A horizontal plane facing downward (for example a ceiling).\n" },
		{ "HorizontalDownwardFacing.Name", "EAndroidXRPlaneType::HorizontalDownwardFacing" },
		{ "HorizontalDownwardFacing.ToolTip", "A horizontal plane facing downward (for example a ceiling)." },
		{ "HorizontalUpwardFacing.Comment", "// A horizontal plane facing upward (for example a floor or tabletop).\n" },
		{ "HorizontalUpwardFacing.Name", "EAndroidXRPlaneType::HorizontalUpwardFacing" },
		{ "HorizontalUpwardFacing.ToolTip", "A horizontal plane facing upward (for example a floor or tabletop)." },
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Plane type (generally indicates orientation and facing)." },
#endif
		{ "Vertical.Comment", "// A vertical plane (for example a wall).\n" },
		{ "Vertical.Name", "EAndroidXRPlaneType::Vertical" },
		{ "Vertical.ToolTip", "A vertical plane (for example a wall)." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAndroidXRPlaneType::HorizontalDownwardFacing", (int64)EAndroidXRPlaneType::HorizontalDownwardFacing },
		{ "EAndroidXRPlaneType::HorizontalUpwardFacing", (int64)EAndroidXRPlaneType::HorizontalUpwardFacing },
		{ "EAndroidXRPlaneType::Vertical", (int64)EAndroidXRPlaneType::Vertical },
		{ "EAndroidXRPlaneType::Arbitrary", (int64)EAndroidXRPlaneType::Arbitrary },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXR_EAndroidXRPlaneType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	"EAndroidXRPlaneType",
	"EAndroidXRPlaneType",
	Z_Construct_UEnum_AndroidXR_EAndroidXRPlaneType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXRPlaneType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXRPlaneType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXR_EAndroidXRPlaneType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRPlaneType()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRPlaneType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAndroidXRPlaneType.InnerSingleton, Z_Construct_UEnum_AndroidXR_EAndroidXRPlaneType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAndroidXRPlaneType.InnerSingleton;
}
// ********** End Enum EAndroidXRPlaneType *********************************************************

// ********** Begin Enum EAndroidXRPlaneLabel ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAndroidXRPlaneLabel;
static UEnum* EAndroidXRPlaneLabel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRPlaneLabel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAndroidXRPlaneLabel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXR_EAndroidXRPlaneLabel, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("EAndroidXRPlaneLabel"));
	}
	return Z_Registration_Info_UEnum_EAndroidXRPlaneLabel.OuterSingleton;
}
template<> ANDROIDXR_API UEnum* StaticEnum<EAndroidXRPlaneLabel>()
{
	return EAndroidXRPlaneLabel_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXR_EAndroidXRPlaneLabel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Ceiling.Comment", "// The plane is a ceiling.\n" },
		{ "Ceiling.Name", "EAndroidXRPlaneLabel::Ceiling" },
		{ "Ceiling.ToolTip", "The plane is a ceiling." },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Semantic plane label.\n */" },
#endif
		{ "Floor.Comment", "// The plane is a floor.\n" },
		{ "Floor.Name", "EAndroidXRPlaneLabel::Floor" },
		{ "Floor.ToolTip", "The plane is a floor." },
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
		{ "Table.Comment", "// The plane is a table.\n" },
		{ "Table.Name", "EAndroidXRPlaneLabel::Table" },
		{ "Table.ToolTip", "The plane is a table." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Semantic plane label." },
#endif
		{ "Unknown.Comment", "// It was not possible to label the plane\n" },
		{ "Unknown.Name", "EAndroidXRPlaneLabel::Unknown" },
		{ "Unknown.ToolTip", "It was not possible to label the plane" },
		{ "Wall.Comment", "// The plane is a wall.\n" },
		{ "Wall.Name", "EAndroidXRPlaneLabel::Wall" },
		{ "Wall.ToolTip", "The plane is a wall." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAndroidXRPlaneLabel::Unknown", (int64)EAndroidXRPlaneLabel::Unknown },
		{ "EAndroidXRPlaneLabel::Wall", (int64)EAndroidXRPlaneLabel::Wall },
		{ "EAndroidXRPlaneLabel::Floor", (int64)EAndroidXRPlaneLabel::Floor },
		{ "EAndroidXRPlaneLabel::Ceiling", (int64)EAndroidXRPlaneLabel::Ceiling },
		{ "EAndroidXRPlaneLabel::Table", (int64)EAndroidXRPlaneLabel::Table },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXR_EAndroidXRPlaneLabel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	"EAndroidXRPlaneLabel",
	"EAndroidXRPlaneLabel",
	Z_Construct_UEnum_AndroidXR_EAndroidXRPlaneLabel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXRPlaneLabel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXRPlaneLabel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXR_EAndroidXRPlaneLabel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRPlaneLabel()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRPlaneLabel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAndroidXRPlaneLabel.InnerSingleton, Z_Construct_UEnum_AndroidXR_EAndroidXRPlaneLabel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAndroidXRPlaneLabel.InnerSingleton;
}
// ********** End Enum EAndroidXRPlaneLabel ********************************************************

// ********** Begin ScriptStruct FAndroidXRTrackable ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAndroidXRTrackable;
class UScriptStruct* FAndroidXRTrackable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRTrackable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAndroidXRTrackable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidXRTrackable, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("AndroidXRTrackable"));
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRTrackable.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAndroidXRTrackable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Contains opaque pointer to XrTrackableANDROID.\n */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains opaque pointer to XrTrackableANDROID." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidXRTrackable>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidXRTrackable_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	&NewStructOps,
	"AndroidXRTrackable",
	nullptr,
	0,
	sizeof(FAndroidXRTrackable),
	alignof(FAndroidXRTrackable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRTrackable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAndroidXRTrackable_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRTrackable()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRTrackable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAndroidXRTrackable.InnerSingleton, Z_Construct_UScriptStruct_FAndroidXRTrackable_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRTrackable.InnerSingleton;
}
// ********** End ScriptStruct FAndroidXRTrackable *************************************************

// ********** Begin ScriptStruct FAndroidXRRaycastHit **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAndroidXRRaycastHit;
class UScriptStruct* FAndroidXRRaycastHit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRRaycastHit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAndroidXRRaycastHit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidXRRaycastHit, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("AndroidXRRaycastHit"));
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRRaycastHit.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAndroidXRRaycastHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Raycast hit.\n */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Raycast hit." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Trackable_MetaData[] = {
		{ "Category", "AndroidXR|Raycast" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The trackable that was hit.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The trackable that was hit." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "AndroidXR|Raycast" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The transform of the intersection.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The transform of the intersection." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackableType_MetaData[] = {
		{ "Category", "AndroidXR|Raycast" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The type of the trackable that was hit.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of the trackable that was hit." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Trackable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackableType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackableType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidXRRaycastHit>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRRaycastHit_Statics::NewProp_Trackable = { "Trackable", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRRaycastHit, Trackable), Z_Construct_UScriptStruct_FAndroidXRTrackable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Trackable_MetaData), NewProp_Trackable_MetaData) }; // 3607608211
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRRaycastHit_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRRaycastHit, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAndroidXRRaycastHit_Statics::NewProp_TrackableType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAndroidXRRaycastHit_Statics::NewProp_TrackableType = { "TrackableType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRRaycastHit, TrackableType), Z_Construct_UEnum_AndroidXR_EAndroidXRTrackableType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackableType_MetaData), NewProp_TrackableType_MetaData) }; // 160846275
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAndroidXRRaycastHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRRaycastHit_Statics::NewProp_Trackable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRRaycastHit_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRRaycastHit_Statics::NewProp_TrackableType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRRaycastHit_Statics::NewProp_TrackableType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRRaycastHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidXRRaycastHit_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	&NewStructOps,
	"AndroidXRRaycastHit",
	Z_Construct_UScriptStruct_FAndroidXRRaycastHit_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRRaycastHit_Statics::PropPointers),
	sizeof(FAndroidXRRaycastHit),
	alignof(FAndroidXRRaycastHit),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRRaycastHit_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAndroidXRRaycastHit_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRRaycastHit()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRRaycastHit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAndroidXRRaycastHit.InnerSingleton, Z_Construct_UScriptStruct_FAndroidXRRaycastHit_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRRaycastHit.InnerSingleton;
}
// ********** End ScriptStruct FAndroidXRRaycastHit ************************************************

// ********** Begin ScriptStruct FAndroidXRTrackableTracker ****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAndroidXRTrackableTracker;
class UScriptStruct* FAndroidXRTrackableTracker::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRTrackableTracker.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAndroidXRTrackableTracker.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidXRTrackableTracker, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("AndroidXRTrackableTracker"));
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRTrackableTracker.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAndroidXRTrackableTracker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Contains opaque pointer to XrTrackableTrackerANDROID.\n */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains opaque pointer to XrTrackableTrackerANDROID." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidXRTrackableTracker>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidXRTrackableTracker_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	&NewStructOps,
	"AndroidXRTrackableTracker",
	nullptr,
	0,
	sizeof(FAndroidXRTrackableTracker),
	alignof(FAndroidXRTrackableTracker),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRTrackableTracker_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAndroidXRTrackableTracker_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRTrackableTracker()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRTrackableTracker.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAndroidXRTrackableTracker.InnerSingleton, Z_Construct_UScriptStruct_FAndroidXRTrackableTracker_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRTrackableTracker.InnerSingleton;
}
// ********** End ScriptStruct FAndroidXRTrackableTracker ******************************************

// ********** Begin ScriptStruct FAndroidXRTrackablePlane ******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAndroidXRTrackablePlane;
class UScriptStruct* FAndroidXRTrackablePlane::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRTrackablePlane.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAndroidXRTrackablePlane.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidXRTrackablePlane, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("AndroidXRTrackablePlane"));
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRTrackablePlane.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAndroidXRTrackablePlane_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Trackable plane.\n */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trackable plane." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackingState_MetaData[] = {
		{ "Category", "AndroidXR|Trackables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tracking state\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tracking state" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "AndroidXR|Trackables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current pose\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current pose" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extents_MetaData[] = {
		{ "Category", "AndroidXR|Trackables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Extents (half width/height)\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extents (half width/height)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneType_MetaData[] = {
		{ "Category", "AndroidXR|Trackables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Plane type\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Plane type" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneLabel_MetaData[] = {
		{ "Category", "AndroidXR|Trackables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Semantic plane label\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Semantic plane label" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubsumedByPlane_MetaData[] = {
		{ "Category", "AndroidXR|Trackables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Plane that subsumes this plane (if any)\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Plane that subsumes this plane (if any)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastUpdatedTime_MetaData[] = {
		{ "Category", "AndroidXR|Trackables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Last updated time\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Last updated time" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
		{ "Category", "AndroidXR|Trackables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Plane polygon vertices.\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Plane polygon vertices." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackingState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackingState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Extents;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlaneType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlaneType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlaneLabel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlaneLabel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubsumedByPlane;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastUpdatedTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidXRTrackablePlane>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAndroidXRTrackablePlane_Statics::NewProp_TrackingState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAndroidXRTrackablePlane_Statics::NewProp_TrackingState = { "TrackingState", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRTrackablePlane, TrackingState), Z_Construct_UEnum_AndroidXR_EAndroidXRTrackingState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackingState_MetaData), NewProp_TrackingState_MetaData) }; // 2331092526
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRTrackablePlane_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRTrackablePlane, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRTrackablePlane_Statics::NewProp_Extents = { "Extents", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRTrackablePlane, Extents), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extents_MetaData), NewProp_Extents_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAndroidXRTrackablePlane_Statics::NewProp_PlaneType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAndroidXRTrackablePlane_Statics::NewProp_PlaneType = { "PlaneType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRTrackablePlane, PlaneType), Z_Construct_UEnum_AndroidXR_EAndroidXRPlaneType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneType_MetaData), NewProp_PlaneType_MetaData) }; // 3832835734
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAndroidXRTrackablePlane_Statics::NewProp_PlaneLabel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAndroidXRTrackablePlane_Statics::NewProp_PlaneLabel = { "PlaneLabel", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRTrackablePlane, PlaneLabel), Z_Construct_UEnum_AndroidXR_EAndroidXRPlaneLabel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneLabel_MetaData), NewProp_PlaneLabel_MetaData) }; // 3523931115
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRTrackablePlane_Statics::NewProp_SubsumedByPlane = { "SubsumedByPlane", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRTrackablePlane, SubsumedByPlane), Z_Construct_UScriptStruct_FAndroidXRTrackable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubsumedByPlane_MetaData), NewProp_SubsumedByPlane_MetaData) }; // 3607608211
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRTrackablePlane_Statics::NewProp_LastUpdatedTime = { "LastUpdatedTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRTrackablePlane, LastUpdatedTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastUpdatedTime_MetaData), NewProp_LastUpdatedTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRTrackablePlane_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAndroidXRTrackablePlane_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRTrackablePlane, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vertices_MetaData), NewProp_Vertices_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAndroidXRTrackablePlane_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRTrackablePlane_Statics::NewProp_TrackingState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRTrackablePlane_Statics::NewProp_TrackingState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRTrackablePlane_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRTrackablePlane_Statics::NewProp_Extents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRTrackablePlane_Statics::NewProp_PlaneType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRTrackablePlane_Statics::NewProp_PlaneType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRTrackablePlane_Statics::NewProp_PlaneLabel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRTrackablePlane_Statics::NewProp_PlaneLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRTrackablePlane_Statics::NewProp_SubsumedByPlane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRTrackablePlane_Statics::NewProp_LastUpdatedTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRTrackablePlane_Statics::NewProp_Vertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRTrackablePlane_Statics::NewProp_Vertices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRTrackablePlane_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidXRTrackablePlane_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	&NewStructOps,
	"AndroidXRTrackablePlane",
	Z_Construct_UScriptStruct_FAndroidXRTrackablePlane_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRTrackablePlane_Statics::PropPointers),
	sizeof(FAndroidXRTrackablePlane),
	alignof(FAndroidXRTrackablePlane),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRTrackablePlane_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAndroidXRTrackablePlane_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRTrackablePlane()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRTrackablePlane.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAndroidXRTrackablePlane.InnerSingleton, Z_Construct_UScriptStruct_FAndroidXRTrackablePlane_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRTrackablePlane.InnerSingleton;
}
// ********** End ScriptStruct FAndroidXRTrackablePlane ********************************************

// ********** Begin Enum EAndroidXRPassthroughCameraState ******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAndroidXRPassthroughCameraState;
static UEnum* EAndroidXRPassthroughCameraState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRPassthroughCameraState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAndroidXRPassthroughCameraState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXR_EAndroidXRPassthroughCameraState, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("EAndroidXRPassthroughCameraState"));
	}
	return Z_Registration_Info_UEnum_EAndroidXRPassthroughCameraState.OuterSingleton;
}
template<> ANDROIDXR_API UEnum* StaticEnum<EAndroidXRPassthroughCameraState>()
{
	return EAndroidXRPassthroughCameraState_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXR_EAndroidXRPassthroughCameraState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Passthrough camera state\n */" },
#endif
		{ "Disabled.Name", "EAndroidXRPassthroughCameraState::Disabled" },
		{ "Error.Name", "EAndroidXRPassthroughCameraState::Error" },
		{ "Initializing.Name", "EAndroidXRPassthroughCameraState::Initializing" },
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
		{ "Ready.Name", "EAndroidXRPassthroughCameraState::Ready" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Passthrough camera state" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAndroidXRPassthroughCameraState::Disabled", (int64)EAndroidXRPassthroughCameraState::Disabled },
		{ "EAndroidXRPassthroughCameraState::Initializing", (int64)EAndroidXRPassthroughCameraState::Initializing },
		{ "EAndroidXRPassthroughCameraState::Ready", (int64)EAndroidXRPassthroughCameraState::Ready },
		{ "EAndroidXRPassthroughCameraState::Error", (int64)EAndroidXRPassthroughCameraState::Error },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXR_EAndroidXRPassthroughCameraState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	"EAndroidXRPassthroughCameraState",
	"EAndroidXRPassthroughCameraState",
	Z_Construct_UEnum_AndroidXR_EAndroidXRPassthroughCameraState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXRPassthroughCameraState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXRPassthroughCameraState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXR_EAndroidXRPassthroughCameraState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRPassthroughCameraState()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRPassthroughCameraState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAndroidXRPassthroughCameraState.InnerSingleton, Z_Construct_UEnum_AndroidXR_EAndroidXRPassthroughCameraState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAndroidXRPassthroughCameraState.InnerSingleton;
}
// ********** End Enum EAndroidXRPassthroughCameraState ********************************************

// ********** Begin ScriptStruct FAndroidXRSpace ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAndroidXRSpace;
class UScriptStruct* FAndroidXRSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAndroidXRSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidXRSpace, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("AndroidXRSpace"));
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRSpace.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAndroidXRSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Contains opaque pointer to an XrSpace\n */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains opaque pointer to an XrSpace" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidXRSpace>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidXRSpace_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	&NewStructOps,
	"AndroidXRSpace",
	nullptr,
	0,
	sizeof(FAndroidXRSpace),
	alignof(FAndroidXRSpace),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRSpace_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAndroidXRSpace_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRSpace()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAndroidXRSpace.InnerSingleton, Z_Construct_UScriptStruct_FAndroidXRSpace_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRSpace.InnerSingleton;
}
// ********** End ScriptStruct FAndroidXRSpace *****************************************************

// ********** Begin Enum EAndroidXRPerformanceMetricsCounterFlags **********************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAndroidXRPerformanceMetricsCounterFlags;
static UEnum* EAndroidXRPerformanceMetricsCounterFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRPerformanceMetricsCounterFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAndroidXRPerformanceMetricsCounterFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXR_EAndroidXRPerformanceMetricsCounterFlags, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("EAndroidXRPerformanceMetricsCounterFlags"));
	}
	return Z_Registration_Info_UEnum_EAndroidXRPerformanceMetricsCounterFlags.OuterSingleton;
}
template<> ANDROIDXR_API UEnum* StaticEnum<EAndroidXRPerformanceMetricsCounterFlags>()
{
	return EAndroidXRPerformanceMetricsCounterFlags_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXR_EAndroidXRPerformanceMetricsCounterFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AnyValueValid.Comment", "// Indicates any of the values in FAndroidXRPerformanceMetricsCounter is valid\n" },
		{ "AnyValueValid.Name", "EAndroidXRPerformanceMetricsCounterFlags::AnyValueValid" },
		{ "AnyValueValid.ToolTip", "Indicates any of the values in FAndroidXRPerformanceMetricsCounter is valid" },
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Performance metrics counter flags\n */" },
#endif
		{ "FloatValueValid.Comment", "// Indicates the FloatValue in FAndroidXRPerformanceMetricsCounter is valid\n" },
		{ "FloatValueValid.Name", "EAndroidXRPerformanceMetricsCounterFlags::FloatValueValid" },
		{ "FloatValueValid.ToolTip", "Indicates the FloatValue in FAndroidXRPerformanceMetricsCounter is valid" },
		{ "IntValueValid.Comment", "// Indicates the IntValue in FAndroidXRPerformanceMetricsCounter is valid\n" },
		{ "IntValueValid.Name", "EAndroidXRPerformanceMetricsCounterFlags::IntValueValid" },
		{ "IntValueValid.ToolTip", "Indicates the IntValue in FAndroidXRPerformanceMetricsCounter is valid" },
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EAndroidXRPerformanceMetricsCounterFlags::None" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Performance metrics counter flags" },
#endif
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAndroidXRPerformanceMetricsCounterFlags::None", (int64)EAndroidXRPerformanceMetricsCounterFlags::None },
		{ "EAndroidXRPerformanceMetricsCounterFlags::AnyValueValid", (int64)EAndroidXRPerformanceMetricsCounterFlags::AnyValueValid },
		{ "EAndroidXRPerformanceMetricsCounterFlags::IntValueValid", (int64)EAndroidXRPerformanceMetricsCounterFlags::IntValueValid },
		{ "EAndroidXRPerformanceMetricsCounterFlags::FloatValueValid", (int64)EAndroidXRPerformanceMetricsCounterFlags::FloatValueValid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXR_EAndroidXRPerformanceMetricsCounterFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	"EAndroidXRPerformanceMetricsCounterFlags",
	"EAndroidXRPerformanceMetricsCounterFlags",
	Z_Construct_UEnum_AndroidXR_EAndroidXRPerformanceMetricsCounterFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXRPerformanceMetricsCounterFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXRPerformanceMetricsCounterFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXR_EAndroidXRPerformanceMetricsCounterFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRPerformanceMetricsCounterFlags()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRPerformanceMetricsCounterFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAndroidXRPerformanceMetricsCounterFlags.InnerSingleton, Z_Construct_UEnum_AndroidXR_EAndroidXRPerformanceMetricsCounterFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAndroidXRPerformanceMetricsCounterFlags.InnerSingleton;
}
// ********** End Enum EAndroidXRPerformanceMetricsCounterFlags ************************************

// ********** Begin Enum EAndroidXRPerformanceMetricsCounterUnit ***********************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAndroidXRPerformanceMetricsCounterUnit;
static UEnum* EAndroidXRPerformanceMetricsCounterUnit_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRPerformanceMetricsCounterUnit.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAndroidXRPerformanceMetricsCounterUnit.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXR_EAndroidXRPerformanceMetricsCounterUnit, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("EAndroidXRPerformanceMetricsCounterUnit"));
	}
	return Z_Registration_Info_UEnum_EAndroidXRPerformanceMetricsCounterUnit.OuterSingleton;
}
template<> ANDROIDXR_API UEnum* StaticEnum<EAndroidXRPerformanceMetricsCounterUnit>()
{
	return EAndroidXRPerformanceMetricsCounterUnit_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXR_EAndroidXRPerformanceMetricsCounterUnit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bytes.Comment", "// The performance counter unit is byte\n" },
		{ "Bytes.Name", "EAndroidXRPerformanceMetricsCounterUnit::Bytes" },
		{ "Bytes.ToolTip", "The performance counter unit is byte" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Performance metrics counter unit\n */" },
#endif
		{ "Generic.Comment", "// The performance counter unit is generic (unspecified)\n" },
		{ "Generic.Name", "EAndroidXRPerformanceMetricsCounterUnit::Generic" },
		{ "Generic.ToolTip", "The performance counter unit is generic (unspecified)" },
		{ "Hertz.Comment", "// The performance counter unit is hertz (Hz)\n" },
		{ "Hertz.Name", "EAndroidXRPerformanceMetricsCounterUnit::Hertz" },
		{ "Hertz.ToolTip", "The performance counter unit is hertz (Hz)" },
		{ "Millisecond.Comment", "// The performance counter unit is millisecond\n" },
		{ "Millisecond.Name", "EAndroidXRPerformanceMetricsCounterUnit::Millisecond" },
		{ "Millisecond.ToolTip", "The performance counter unit is millisecond" },
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
		{ "Percentage.Comment", "// The performance counter unit is a percentage\n" },
		{ "Percentage.Name", "EAndroidXRPerformanceMetricsCounterUnit::Percentage" },
		{ "Percentage.ToolTip", "The performance counter unit is a percentage" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Performance metrics counter unit" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAndroidXRPerformanceMetricsCounterUnit::Generic", (int64)EAndroidXRPerformanceMetricsCounterUnit::Generic },
		{ "EAndroidXRPerformanceMetricsCounterUnit::Percentage", (int64)EAndroidXRPerformanceMetricsCounterUnit::Percentage },
		{ "EAndroidXRPerformanceMetricsCounterUnit::Millisecond", (int64)EAndroidXRPerformanceMetricsCounterUnit::Millisecond },
		{ "EAndroidXRPerformanceMetricsCounterUnit::Bytes", (int64)EAndroidXRPerformanceMetricsCounterUnit::Bytes },
		{ "EAndroidXRPerformanceMetricsCounterUnit::Hertz", (int64)EAndroidXRPerformanceMetricsCounterUnit::Hertz },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXR_EAndroidXRPerformanceMetricsCounterUnit_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	"EAndroidXRPerformanceMetricsCounterUnit",
	"EAndroidXRPerformanceMetricsCounterUnit",
	Z_Construct_UEnum_AndroidXR_EAndroidXRPerformanceMetricsCounterUnit_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXRPerformanceMetricsCounterUnit_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXRPerformanceMetricsCounterUnit_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXR_EAndroidXRPerformanceMetricsCounterUnit_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRPerformanceMetricsCounterUnit()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRPerformanceMetricsCounterUnit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAndroidXRPerformanceMetricsCounterUnit.InnerSingleton, Z_Construct_UEnum_AndroidXR_EAndroidXRPerformanceMetricsCounterUnit_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAndroidXRPerformanceMetricsCounterUnit.InnerSingleton;
}
// ********** End Enum EAndroidXRPerformanceMetricsCounterUnit *************************************

// ********** Begin ScriptStruct FAndroidXRPerformanceMetricsCounter *******************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAndroidXRPerformanceMetricsCounter;
class UScriptStruct* FAndroidXRPerformanceMetricsCounter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRPerformanceMetricsCounter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAndroidXRPerformanceMetricsCounter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidXRPerformanceMetricsCounter, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("AndroidXRPerformanceMetricsCounter"));
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRPerformanceMetricsCounter.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAndroidXRPerformanceMetricsCounter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Performance metrics counter\n */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Performance metrics counter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/AndroidXRPerformanceMetrics.EAndroidXRPerformanceMetricsCounterFlags" },
		{ "Category", "AndroidXR|PerformanceMetrics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Flags\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flags" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Unit_MetaData[] = {
		{ "Category", "AndroidXR|PerformanceMetrics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Unit\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unit" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[] = {
		{ "Category", "AndroidXR|PerformanceMetrics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Integer value\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Integer value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[] = {
		{ "Category", "AndroidXR|PerformanceMetrics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Float value\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Float value" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Flags;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Unit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Unit;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_IntValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidXRPerformanceMetricsCounter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAndroidXRPerformanceMetricsCounter_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRPerformanceMetricsCounter, Flags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flags_MetaData), NewProp_Flags_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAndroidXRPerformanceMetricsCounter_Statics::NewProp_Unit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAndroidXRPerformanceMetricsCounter_Statics::NewProp_Unit = { "Unit", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRPerformanceMetricsCounter, Unit), Z_Construct_UEnum_AndroidXR_EAndroidXRPerformanceMetricsCounterUnit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Unit_MetaData), NewProp_Unit_MetaData) }; // 1664253347
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FAndroidXRPerformanceMetricsCounter_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRPerformanceMetricsCounter, IntValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntValue_MetaData), NewProp_IntValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAndroidXRPerformanceMetricsCounter_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRPerformanceMetricsCounter, FloatValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatValue_MetaData), NewProp_FloatValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAndroidXRPerformanceMetricsCounter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRPerformanceMetricsCounter_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRPerformanceMetricsCounter_Statics::NewProp_Unit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRPerformanceMetricsCounter_Statics::NewProp_Unit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRPerformanceMetricsCounter_Statics::NewProp_IntValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRPerformanceMetricsCounter_Statics::NewProp_FloatValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRPerformanceMetricsCounter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidXRPerformanceMetricsCounter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	&NewStructOps,
	"AndroidXRPerformanceMetricsCounter",
	Z_Construct_UScriptStruct_FAndroidXRPerformanceMetricsCounter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRPerformanceMetricsCounter_Statics::PropPointers),
	sizeof(FAndroidXRPerformanceMetricsCounter),
	alignof(FAndroidXRPerformanceMetricsCounter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRPerformanceMetricsCounter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAndroidXRPerformanceMetricsCounter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRPerformanceMetricsCounter()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRPerformanceMetricsCounter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAndroidXRPerformanceMetricsCounter.InnerSingleton, Z_Construct_UScriptStruct_FAndroidXRPerformanceMetricsCounter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRPerformanceMetricsCounter.InnerSingleton;
}
// ********** End ScriptStruct FAndroidXRPerformanceMetricsCounter *********************************

// ********** Begin Enum EAndroidXRDepthCameraResolution *******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAndroidXRDepthCameraResolution;
static UEnum* EAndroidXRDepthCameraResolution_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRDepthCameraResolution.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAndroidXRDepthCameraResolution.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXR_EAndroidXRDepthCameraResolution, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("EAndroidXRDepthCameraResolution"));
	}
	return Z_Registration_Info_UEnum_EAndroidXRDepthCameraResolution.OuterSingleton;
}
template<> ANDROIDXR_API UEnum* StaticEnum<EAndroidXRDepthCameraResolution>()
{
	return EAndroidXRDepthCameraResolution_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXR_EAndroidXRDepthCameraResolution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Depth camera resolutions\n */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
		{ "Resolution160.Comment", "// The resolution of the depth and confidence images is 160x160.\n" },
		{ "Resolution160.DisplayName", "160x160" },
		{ "Resolution160.Name", "EAndroidXRDepthCameraResolution::Resolution160" },
		{ "Resolution160.ToolTip", "The resolution of the depth and confidence images is 160x160." },
		{ "Resolution320.Comment", "// The resolution of the depth and confidence images is 320x320.\n" },
		{ "Resolution320.DisplayName", "320x320" },
		{ "Resolution320.Name", "EAndroidXRDepthCameraResolution::Resolution320" },
		{ "Resolution320.ToolTip", "The resolution of the depth and confidence images is 320x320." },
		{ "Resolution80.Comment", "// The resolution of the depth and confidence images is 80x80.\n" },
		{ "Resolution80.DisplayName", "80x80" },
		{ "Resolution80.Name", "EAndroidXRDepthCameraResolution::Resolution80" },
		{ "Resolution80.ToolTip", "The resolution of the depth and confidence images is 80x80." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Depth camera resolutions" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAndroidXRDepthCameraResolution::Resolution80", (int64)EAndroidXRDepthCameraResolution::Resolution80 },
		{ "EAndroidXRDepthCameraResolution::Resolution160", (int64)EAndroidXRDepthCameraResolution::Resolution160 },
		{ "EAndroidXRDepthCameraResolution::Resolution320", (int64)EAndroidXRDepthCameraResolution::Resolution320 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXR_EAndroidXRDepthCameraResolution_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	"EAndroidXRDepthCameraResolution",
	"EAndroidXRDepthCameraResolution",
	Z_Construct_UEnum_AndroidXR_EAndroidXRDepthCameraResolution_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXRDepthCameraResolution_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXRDepthCameraResolution_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXR_EAndroidXRDepthCameraResolution_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRDepthCameraResolution()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRDepthCameraResolution.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAndroidXRDepthCameraResolution.InnerSingleton, Z_Construct_UEnum_AndroidXR_EAndroidXRDepthCameraResolution_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAndroidXRDepthCameraResolution.InnerSingleton;
}
// ********** End Enum EAndroidXRDepthCameraResolution *********************************************

// ********** Begin Enum EAndroidXRDepthSwapchainCreateFlag ****************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAndroidXRDepthSwapchainCreateFlag;
static UEnum* EAndroidXRDepthSwapchainCreateFlag_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRDepthSwapchainCreateFlag.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAndroidXRDepthSwapchainCreateFlag.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXR_EAndroidXRDepthSwapchainCreateFlag, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("EAndroidXRDepthSwapchainCreateFlag"));
	}
	return Z_Registration_Info_UEnum_EAndroidXRDepthSwapchainCreateFlag.OuterSingleton;
}
template<> ANDROIDXR_API UEnum* StaticEnum<EAndroidXRDepthSwapchainCreateFlag>()
{
	return EAndroidXRDepthSwapchainCreateFlag_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXR_EAndroidXRDepthSwapchainCreateFlag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Flags used to control depth swapchain image creation\n */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EAndroidXRDepthSwapchainCreateFlag::None" },
		{ "RawConfidenceImage.Comment", "// Indicates the swapchain should provide raw depth confidence imagess.\n" },
		{ "RawConfidenceImage.Name", "EAndroidXRDepthSwapchainCreateFlag::RawConfidenceImage" },
		{ "RawConfidenceImage.ToolTip", "Indicates the swapchain should provide raw depth confidence imagess." },
		{ "RawDepthImage.Comment", "// Indicates the swapchain should provide raw depth imagess.\n" },
		{ "RawDepthImage.Name", "EAndroidXRDepthSwapchainCreateFlag::RawDepthImage" },
		{ "RawDepthImage.ToolTip", "Indicates the swapchain should provide raw depth imagess." },
		{ "SmoothConfidenceImage.Comment", "// Indicates the swapchain should provide smooth depth confidence imagess.\n" },
		{ "SmoothConfidenceImage.Name", "EAndroidXRDepthSwapchainCreateFlag::SmoothConfidenceImage" },
		{ "SmoothConfidenceImage.ToolTip", "Indicates the swapchain should provide smooth depth confidence imagess." },
		{ "SmoothDepthImage.Comment", "// Indicates the swapchain should provide smooth depth imagess.\n" },
		{ "SmoothDepthImage.Name", "EAndroidXRDepthSwapchainCreateFlag::SmoothDepthImage" },
		{ "SmoothDepthImage.ToolTip", "Indicates the swapchain should provide smooth depth imagess." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flags used to control depth swapchain image creation" },
#endif
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAndroidXRDepthSwapchainCreateFlag::None", (int64)EAndroidXRDepthSwapchainCreateFlag::None },
		{ "EAndroidXRDepthSwapchainCreateFlag::SmoothDepthImage", (int64)EAndroidXRDepthSwapchainCreateFlag::SmoothDepthImage },
		{ "EAndroidXRDepthSwapchainCreateFlag::SmoothConfidenceImage", (int64)EAndroidXRDepthSwapchainCreateFlag::SmoothConfidenceImage },
		{ "EAndroidXRDepthSwapchainCreateFlag::RawDepthImage", (int64)EAndroidXRDepthSwapchainCreateFlag::RawDepthImage },
		{ "EAndroidXRDepthSwapchainCreateFlag::RawConfidenceImage", (int64)EAndroidXRDepthSwapchainCreateFlag::RawConfidenceImage },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXR_EAndroidXRDepthSwapchainCreateFlag_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	"EAndroidXRDepthSwapchainCreateFlag",
	"EAndroidXRDepthSwapchainCreateFlag",
	Z_Construct_UEnum_AndroidXR_EAndroidXRDepthSwapchainCreateFlag_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXRDepthSwapchainCreateFlag_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXRDepthSwapchainCreateFlag_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXR_EAndroidXRDepthSwapchainCreateFlag_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRDepthSwapchainCreateFlag()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRDepthSwapchainCreateFlag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAndroidXRDepthSwapchainCreateFlag.InnerSingleton, Z_Construct_UEnum_AndroidXR_EAndroidXRDepthSwapchainCreateFlag_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAndroidXRDepthSwapchainCreateFlag.InnerSingleton;
}
// ********** End Enum EAndroidXRDepthSwapchainCreateFlag ******************************************

// ********** Begin ScriptStruct FAndroidXRDepthSwapchain ******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAndroidXRDepthSwapchain;
class UScriptStruct* FAndroidXRDepthSwapchain::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRDepthSwapchain.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAndroidXRDepthSwapchain.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidXRDepthSwapchain, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("AndroidXRDepthSwapchain"));
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRDepthSwapchain.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAndroidXRDepthSwapchain_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Contains opaque pointer to an XrDepthSwapchainANDROID\n */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains opaque pointer to an XrDepthSwapchainANDROID" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidXRDepthSwapchain>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidXRDepthSwapchain_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	&NewStructOps,
	"AndroidXRDepthSwapchain",
	nullptr,
	0,
	sizeof(FAndroidXRDepthSwapchain),
	alignof(FAndroidXRDepthSwapchain),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRDepthSwapchain_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAndroidXRDepthSwapchain_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRDepthSwapchain()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRDepthSwapchain.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAndroidXRDepthSwapchain.InnerSingleton, Z_Construct_UScriptStruct_FAndroidXRDepthSwapchain_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRDepthSwapchain.InnerSingleton;
}
// ********** End ScriptStruct FAndroidXRDepthSwapchain ********************************************

// ********** Begin ScriptStruct FAndroidXRDepthSwapchainImage *************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAndroidXRDepthSwapchainImage;
class UScriptStruct* FAndroidXRDepthSwapchainImage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRDepthSwapchainImage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAndroidXRDepthSwapchainImage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidXRDepthSwapchainImage, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("AndroidXRDepthSwapchainImage"));
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRDepthSwapchainImage.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAndroidXRDepthSwapchainImage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Contains opaque pointer to an XrDepthSwapchainImageANDROID\n */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains opaque pointer to an XrDepthSwapchainImageANDROID" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidXRDepthSwapchainImage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidXRDepthSwapchainImage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	&NewStructOps,
	"AndroidXRDepthSwapchainImage",
	nullptr,
	0,
	sizeof(FAndroidXRDepthSwapchainImage),
	alignof(FAndroidXRDepthSwapchainImage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRDepthSwapchainImage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAndroidXRDepthSwapchainImage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRDepthSwapchainImage()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRDepthSwapchainImage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAndroidXRDepthSwapchainImage.InnerSingleton, Z_Construct_UScriptStruct_FAndroidXRDepthSwapchainImage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRDepthSwapchainImage.InnerSingleton;
}
// ********** End ScriptStruct FAndroidXRDepthSwapchainImage ***************************************

// ********** Begin ScriptStruct FAndroidXRFieldOfView *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAndroidXRFieldOfView;
class UScriptStruct* FAndroidXRFieldOfView::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRFieldOfView.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAndroidXRFieldOfView.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidXRFieldOfView, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("AndroidXRFieldOfView"));
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRFieldOfView.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAndroidXRFieldOfView_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Field of view\n */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Field of view" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleLeft_MetaData[] = {
		{ "Category", "AndroidXRFieldOfView" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Left angle\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Left angle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleRight_MetaData[] = {
		{ "Category", "AndroidXRFieldOfView" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Right angle\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Right angle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleUp_MetaData[] = {
		{ "Category", "AndroidXRFieldOfView" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Up angle\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Up angle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleDown_MetaData[] = {
		{ "Category", "AndroidXRFieldOfView" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Down angle\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Down angle" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleLeft;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleRight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleUp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleDown;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidXRFieldOfView>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAndroidXRFieldOfView_Statics::NewProp_AngleLeft = { "AngleLeft", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRFieldOfView, AngleLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleLeft_MetaData), NewProp_AngleLeft_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAndroidXRFieldOfView_Statics::NewProp_AngleRight = { "AngleRight", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRFieldOfView, AngleRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleRight_MetaData), NewProp_AngleRight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAndroidXRFieldOfView_Statics::NewProp_AngleUp = { "AngleUp", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRFieldOfView, AngleUp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleUp_MetaData), NewProp_AngleUp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAndroidXRFieldOfView_Statics::NewProp_AngleDown = { "AngleDown", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRFieldOfView, AngleDown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleDown_MetaData), NewProp_AngleDown_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAndroidXRFieldOfView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRFieldOfView_Statics::NewProp_AngleLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRFieldOfView_Statics::NewProp_AngleRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRFieldOfView_Statics::NewProp_AngleUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRFieldOfView_Statics::NewProp_AngleDown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRFieldOfView_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidXRFieldOfView_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	&NewStructOps,
	"AndroidXRFieldOfView",
	Z_Construct_UScriptStruct_FAndroidXRFieldOfView_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRFieldOfView_Statics::PropPointers),
	sizeof(FAndroidXRFieldOfView),
	alignof(FAndroidXRFieldOfView),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRFieldOfView_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAndroidXRFieldOfView_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRFieldOfView()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRFieldOfView.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAndroidXRFieldOfView.InnerSingleton, Z_Construct_UScriptStruct_FAndroidXRFieldOfView_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRFieldOfView.InnerSingleton;
}
// ********** End ScriptStruct FAndroidXRFieldOfView ***********************************************

// ********** Begin ScriptStruct FAndroidXRDepthView ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAndroidXRDepthView;
class UScriptStruct* FAndroidXRDepthView::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRDepthView.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAndroidXRDepthView.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidXRDepthView, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("AndroidXRDepthView"));
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRDepthView.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAndroidXRDepthView_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Depth view (essentially an eye's view)\n */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Depth view (essentially an eye's view)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[] = {
		{ "Category", "AndroidXRDepthView" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Field of view\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Field of view" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "AndroidXRDepthView" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current pose of this view\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current pose of this view" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FieldOfView;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidXRDepthView>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRDepthView_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRDepthView, FieldOfView), Z_Construct_UScriptStruct_FAndroidXRFieldOfView, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldOfView_MetaData), NewProp_FieldOfView_MetaData) }; // 1730733844
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRDepthView_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRDepthView, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAndroidXRDepthView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRDepthView_Statics::NewProp_FieldOfView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRDepthView_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRDepthView_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidXRDepthView_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	&NewStructOps,
	"AndroidXRDepthView",
	Z_Construct_UScriptStruct_FAndroidXRDepthView_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRDepthView_Statics::PropPointers),
	sizeof(FAndroidXRDepthView),
	alignof(FAndroidXRDepthView),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRDepthView_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAndroidXRDepthView_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRDepthView()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRDepthView.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAndroidXRDepthView.InnerSingleton, Z_Construct_UScriptStruct_FAndroidXRDepthView_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRDepthView.InnerSingleton;
}
// ********** End ScriptStruct FAndroidXRDepthView *************************************************

// ********** Begin ScriptStruct FAndroidXRDepthAcquireResult **************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAndroidXRDepthAcquireResult;
class UScriptStruct* FAndroidXRDepthAcquireResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRDepthAcquireResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAndroidXRDepthAcquireResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidXRDepthAcquireResult, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("AndroidXRDepthAcquireResult"));
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRDepthAcquireResult.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAndroidXRDepthAcquireResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Depth acquire result\n */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Depth acquire result" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcquiredIndex_MetaData[] = {
		{ "Category", "AndroidXRDepthAcquireResult" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The index of the image that was acquired\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The index of the image that was acquired" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExposureTimespan_MetaData[] = {
		{ "Category", "AndroidXRDepthAcquireResult" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Timespan acquired\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Timespan acquired" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Views_MetaData[] = {
		{ "Category", "AndroidXRDepthAcquireResult" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// View details (array will be of size 2)\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "View details (array will be of size 2)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AcquiredIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExposureTimespan;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Views_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Views;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidXRDepthAcquireResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAndroidXRDepthAcquireResult_Statics::NewProp_AcquiredIndex = { "AcquiredIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRDepthAcquireResult, AcquiredIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcquiredIndex_MetaData), NewProp_AcquiredIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRDepthAcquireResult_Statics::NewProp_ExposureTimespan = { "ExposureTimespan", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRDepthAcquireResult, ExposureTimespan), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExposureTimespan_MetaData), NewProp_ExposureTimespan_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRDepthAcquireResult_Statics::NewProp_Views_Inner = { "Views", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAndroidXRDepthView, METADATA_PARAMS(0, nullptr) }; // 577800069
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAndroidXRDepthAcquireResult_Statics::NewProp_Views = { "Views", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRDepthAcquireResult, Views), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Views_MetaData), NewProp_Views_MetaData) }; // 577800069
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAndroidXRDepthAcquireResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRDepthAcquireResult_Statics::NewProp_AcquiredIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRDepthAcquireResult_Statics::NewProp_ExposureTimespan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRDepthAcquireResult_Statics::NewProp_Views_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRDepthAcquireResult_Statics::NewProp_Views,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRDepthAcquireResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidXRDepthAcquireResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	&NewStructOps,
	"AndroidXRDepthAcquireResult",
	Z_Construct_UScriptStruct_FAndroidXRDepthAcquireResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRDepthAcquireResult_Statics::PropPointers),
	sizeof(FAndroidXRDepthAcquireResult),
	alignof(FAndroidXRDepthAcquireResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRDepthAcquireResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAndroidXRDepthAcquireResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRDepthAcquireResult()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRDepthAcquireResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAndroidXRDepthAcquireResult.InnerSingleton, Z_Construct_UScriptStruct_FAndroidXRDepthAcquireResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRDepthAcquireResult.InnerSingleton;
}
// ********** End ScriptStruct FAndroidXRDepthAcquireResult ****************************************

// ********** Begin Enum EAndroidXRPerfSettingsDomain **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAndroidXRPerfSettingsDomain;
static UEnum* EAndroidXRPerfSettingsDomain_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRPerfSettingsDomain.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAndroidXRPerfSettingsDomain.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsDomain, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("EAndroidXRPerfSettingsDomain"));
	}
	return Z_Registration_Info_UEnum_EAndroidXRPerfSettingsDomain.OuterSingleton;
}
template<> ANDROIDXR_API UEnum* StaticEnum<EAndroidXRPerfSettingsDomain>()
{
	return EAndroidXRPerfSettingsDomain_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsDomain_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Perf settings domain\n */" },
#endif
		{ "CPU.Comment", "// CPU domain\n" },
		{ "CPU.Name", "EAndroidXRPerfSettingsDomain::CPU" },
		{ "CPU.ToolTip", "CPU domain" },
		{ "GPU.Comment", "// GPU domain\n" },
		{ "GPU.Name", "EAndroidXRPerfSettingsDomain::GPU" },
		{ "GPU.ToolTip", "GPU domain" },
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Perf settings domain" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAndroidXRPerfSettingsDomain::CPU", (int64)EAndroidXRPerfSettingsDomain::CPU },
		{ "EAndroidXRPerfSettingsDomain::GPU", (int64)EAndroidXRPerfSettingsDomain::GPU },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsDomain_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	"EAndroidXRPerfSettingsDomain",
	"EAndroidXRPerfSettingsDomain",
	Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsDomain_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsDomain_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsDomain_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsDomain_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsDomain()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRPerfSettingsDomain.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAndroidXRPerfSettingsDomain.InnerSingleton, Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsDomain_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAndroidXRPerfSettingsDomain.InnerSingleton;
}
// ********** End Enum EAndroidXRPerfSettingsDomain ************************************************

// ********** Begin Enum EAndroidXRPerfSettingsSubDomain *******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAndroidXRPerfSettingsSubDomain;
static UEnum* EAndroidXRPerfSettingsSubDomain_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRPerfSettingsSubDomain.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAndroidXRPerfSettingsSubDomain.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsSubDomain, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("EAndroidXRPerfSettingsSubDomain"));
	}
	return Z_Registration_Info_UEnum_EAndroidXRPerfSettingsSubDomain.OuterSingleton;
}
template<> ANDROIDXR_API UEnum* StaticEnum<EAndroidXRPerfSettingsSubDomain>()
{
	return EAndroidXRPerfSettingsSubDomain_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsSubDomain_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Perf settings subdomain\n */" },
#endif
		{ "Compositing.Comment", "// Compositing subdomain\n" },
		{ "Compositing.Name", "EAndroidXRPerfSettingsSubDomain::Compositing" },
		{ "Compositing.ToolTip", "Compositing subdomain" },
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
		{ "Rendering.Comment", "// Rendering subdomain\n" },
		{ "Rendering.Name", "EAndroidXRPerfSettingsSubDomain::Rendering" },
		{ "Rendering.ToolTip", "Rendering subdomain" },
		{ "Thermal.Comment", "// Thermal subdomain\n" },
		{ "Thermal.Name", "EAndroidXRPerfSettingsSubDomain::Thermal" },
		{ "Thermal.ToolTip", "Thermal subdomain" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Perf settings subdomain" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAndroidXRPerfSettingsSubDomain::Compositing", (int64)EAndroidXRPerfSettingsSubDomain::Compositing },
		{ "EAndroidXRPerfSettingsSubDomain::Rendering", (int64)EAndroidXRPerfSettingsSubDomain::Rendering },
		{ "EAndroidXRPerfSettingsSubDomain::Thermal", (int64)EAndroidXRPerfSettingsSubDomain::Thermal },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsSubDomain_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	"EAndroidXRPerfSettingsSubDomain",
	"EAndroidXRPerfSettingsSubDomain",
	Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsSubDomain_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsSubDomain_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsSubDomain_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsSubDomain_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsSubDomain()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRPerfSettingsSubDomain.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAndroidXRPerfSettingsSubDomain.InnerSingleton, Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsSubDomain_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAndroidXRPerfSettingsSubDomain.InnerSingleton;
}
// ********** End Enum EAndroidXRPerfSettingsSubDomain *********************************************

// ********** Begin Enum EAndroidXRPerfSettingsLevel ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAndroidXRPerfSettingsLevel;
static UEnum* EAndroidXRPerfSettingsLevel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRPerfSettingsLevel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAndroidXRPerfSettingsLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsLevel, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("EAndroidXRPerfSettingsLevel"));
	}
	return Z_Registration_Info_UEnum_EAndroidXRPerfSettingsLevel.OuterSingleton;
}
template<> ANDROIDXR_API UEnum* StaticEnum<EAndroidXRPerfSettingsLevel>()
{
	return EAndroidXRPerfSettingsLevel_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Boost.Comment", "// Used to indicate that the application enters a section with very high\n// complexity, during which the XR Runtime is allowed to step up beyond\n// the thermally sustainable range\n" },
		{ "Boost.Name", "EAndroidXRPerfSettingsLevel::Boost" },
		{ "Boost.ToolTip", "Used to indicate that the application enters a section with very high\ncomplexity, during which the XR Runtime is allowed to step up beyond\nthe thermally sustainable range" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Perf settings level\n */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
		{ "PowerSavings.Comment", "// Used by the application to indicate that it enters a non-XR section\n// (head-locked / static screen), during which power savings are to be\n// prioritized\n" },
		{ "PowerSavings.Name", "EAndroidXRPerfSettingsLevel::PowerSavings" },
		{ "PowerSavings.ToolTip", "Used by the application to indicate that it enters a non-XR section\n(head-locked / static screen), during which power savings are to be\nprioritized" },
		{ "SustainedHigh.Comment", "// Used by the application to indicate that it enters a high or dynamic\n// complexity section, during which the XR Runtime strives for\n// consistent XR compositing and frame rendering within a thermally\n// sustainable range\n" },
		{ "SustainedHigh.Name", "EAndroidXRPerfSettingsLevel::SustainedHigh" },
		{ "SustainedHigh.ToolTip", "Used by the application to indicate that it enters a high or dynamic\ncomplexity section, during which the XR Runtime strives for\nconsistent XR compositing and frame rendering within a thermally\nsustainable range" },
		{ "SustainedLow.Comment", "// Used by the application to indicate that it enters a low and stable\n// complexity section, during which reducing power is more important\n// than occasional late rendering frames\n" },
		{ "SustainedLow.Name", "EAndroidXRPerfSettingsLevel::SustainedLow" },
		{ "SustainedLow.ToolTip", "Used by the application to indicate that it enters a low and stable\ncomplexity section, during which reducing power is more important\nthan occasional late rendering frames" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Perf settings level" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAndroidXRPerfSettingsLevel::PowerSavings", (int64)EAndroidXRPerfSettingsLevel::PowerSavings },
		{ "EAndroidXRPerfSettingsLevel::SustainedLow", (int64)EAndroidXRPerfSettingsLevel::SustainedLow },
		{ "EAndroidXRPerfSettingsLevel::SustainedHigh", (int64)EAndroidXRPerfSettingsLevel::SustainedHigh },
		{ "EAndroidXRPerfSettingsLevel::Boost", (int64)EAndroidXRPerfSettingsLevel::Boost },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsLevel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	"EAndroidXRPerfSettingsLevel",
	"EAndroidXRPerfSettingsLevel",
	Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsLevel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsLevel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsLevel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsLevel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsLevel()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRPerfSettingsLevel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAndroidXRPerfSettingsLevel.InnerSingleton, Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsLevel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAndroidXRPerfSettingsLevel.InnerSingleton;
}
// ********** End Enum EAndroidXRPerfSettingsLevel *************************************************

// ********** Begin Enum EAndroidXRPerfSettingsNotificationLevel ***********************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAndroidXRPerfSettingsNotificationLevel;
static UEnum* EAndroidXRPerfSettingsNotificationLevel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRPerfSettingsNotificationLevel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAndroidXRPerfSettingsNotificationLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsNotificationLevel, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("EAndroidXRPerfSettingsNotificationLevel"));
	}
	return Z_Registration_Info_UEnum_EAndroidXRPerfSettingsNotificationLevel.OuterSingleton;
}
template<> ANDROIDXR_API UEnum* StaticEnum<EAndroidXRPerfSettingsNotificationLevel>()
{
	return EAndroidXRPerfSettingsNotificationLevel_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsNotificationLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Perf settings notification level\n */" },
#endif
		{ "Impaired.Comment", "// Notifies that the sub-domain has reached a critical level with significant\n// performance degradation\n" },
		{ "Impaired.Name", "EAndroidXRPerfSettingsNotificationLevel::Impaired" },
		{ "Impaired.ToolTip", "Notifies that the sub-domain has reached a critical level with significant\nperformance degradation" },
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
		{ "Normal.Comment", "// Notifies that the sub-domain has reached a level where no further actions\n// other than currently applied are necessary.\n" },
		{ "Normal.Name", "EAndroidXRPerfSettingsNotificationLevel::Normal" },
		{ "Normal.ToolTip", "Notifies that the sub-domain has reached a level where no further actions\nother than currently applied are necessary." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Perf settings notification level" },
#endif
		{ "Warning.Comment", "// Notifies that the sub-domain has reached an early warning level where the\n// application should start proactive mitigation actions with the goal to\n// return to the normal level\n" },
		{ "Warning.Name", "EAndroidXRPerfSettingsNotificationLevel::Warning" },
		{ "Warning.ToolTip", "Notifies that the sub-domain has reached an early warning level where the\napplication should start proactive mitigation actions with the goal to\nreturn to the normal level" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAndroidXRPerfSettingsNotificationLevel::Normal", (int64)EAndroidXRPerfSettingsNotificationLevel::Normal },
		{ "EAndroidXRPerfSettingsNotificationLevel::Warning", (int64)EAndroidXRPerfSettingsNotificationLevel::Warning },
		{ "EAndroidXRPerfSettingsNotificationLevel::Impaired", (int64)EAndroidXRPerfSettingsNotificationLevel::Impaired },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsNotificationLevel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	"EAndroidXRPerfSettingsNotificationLevel",
	"EAndroidXRPerfSettingsNotificationLevel",
	Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsNotificationLevel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsNotificationLevel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsNotificationLevel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsNotificationLevel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsNotificationLevel()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRPerfSettingsNotificationLevel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAndroidXRPerfSettingsNotificationLevel.InnerSingleton, Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsNotificationLevel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAndroidXRPerfSettingsNotificationLevel.InnerSingleton;
}
// ********** End Enum EAndroidXRPerfSettingsNotificationLevel *************************************

// ********** Begin Enum EAndroidXRAndroidThreadType ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAndroidXRAndroidThreadType;
static UEnum* EAndroidXRAndroidThreadType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRAndroidThreadType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAndroidXRAndroidThreadType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXR_EAndroidXRAndroidThreadType, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("EAndroidXRAndroidThreadType"));
	}
	return Z_Registration_Info_UEnum_EAndroidXRAndroidThreadType.OuterSingleton;
}
template<> ANDROIDXR_API UEnum* StaticEnum<EAndroidXRAndroidThreadType>()
{
	return EAndroidXRAndroidThreadType_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXR_EAndroidXRAndroidThreadType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ApplicationMain.Comment", "// Hints the XR runtime that the thread is doing time critical CPU tasks\n" },
		{ "ApplicationMain.Name", "EAndroidXRAndroidThreadType::ApplicationMain" },
		{ "ApplicationMain.ToolTip", "Hints the XR runtime that the thread is doing time critical CPU tasks" },
		{ "ApplicationWorker.Comment", "// Hints the XR runtime that the thread is doing background CPU tasks\n" },
		{ "ApplicationWorker.Name", "EAndroidXRAndroidThreadType::ApplicationWorker" },
		{ "ApplicationWorker.ToolTip", "Hints the XR runtime that the thread is doing background CPU tasks" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Thread types\n */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
		{ "RendererMain.Comment", "// Hints the XR runtime that the thread is doing time critical graphics\n// device tasks\n" },
		{ "RendererMain.Name", "EAndroidXRAndroidThreadType::RendererMain" },
		{ "RendererMain.ToolTip", "Hints the XR runtime that the thread is doing time critical graphics\ndevice tasks" },
		{ "RendererWorker.Comment", "// Hints the XR runtime that the thread is doing background graphics\n// device tasks\n" },
		{ "RendererWorker.Name", "EAndroidXRAndroidThreadType::RendererWorker" },
		{ "RendererWorker.ToolTip", "Hints the XR runtime that the thread is doing background graphics\ndevice tasks" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Thread types" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAndroidXRAndroidThreadType::ApplicationMain", (int64)EAndroidXRAndroidThreadType::ApplicationMain },
		{ "EAndroidXRAndroidThreadType::ApplicationWorker", (int64)EAndroidXRAndroidThreadType::ApplicationWorker },
		{ "EAndroidXRAndroidThreadType::RendererMain", (int64)EAndroidXRAndroidThreadType::RendererMain },
		{ "EAndroidXRAndroidThreadType::RendererWorker", (int64)EAndroidXRAndroidThreadType::RendererWorker },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXR_EAndroidXRAndroidThreadType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	"EAndroidXRAndroidThreadType",
	"EAndroidXRAndroidThreadType",
	Z_Construct_UEnum_AndroidXR_EAndroidXRAndroidThreadType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXRAndroidThreadType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXRAndroidThreadType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXR_EAndroidXRAndroidThreadType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRAndroidThreadType()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRAndroidThreadType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAndroidXRAndroidThreadType.InnerSingleton, Z_Construct_UEnum_AndroidXR_EAndroidXRAndroidThreadType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAndroidXRAndroidThreadType.InnerSingleton;
}
// ********** End Enum EAndroidXRAndroidThreadType *************************************************

// ********** Begin Enum EOpenXRHandInteractionType ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOpenXRHandInteractionType;
static UEnum* EOpenXRHandInteractionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOpenXRHandInteractionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOpenXRHandInteractionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXR_EOpenXRHandInteractionType, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("EOpenXRHandInteractionType"));
	}
	return Z_Registration_Info_UEnum_EOpenXRHandInteractionType.OuterSingleton;
}
template<> ANDROIDXR_API UEnum* StaticEnum<EOpenXRHandInteractionType>()
{
	return EOpenXRHandInteractionType_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXR_EOpenXRHandInteractionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Aim.Name", "EOpenXRHandInteractionType::Aim" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Hand interaction types\n */" },
#endif
		{ "Count.Hidden", "" },
		{ "Count.Name", "EOpenXRHandInteractionType::Count" },
		{ "Grip.Name", "EOpenXRHandInteractionType::Grip" },
		{ "GripSurface.Name", "EOpenXRHandInteractionType::GripSurface" },
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
		{ "Palm.Name", "EOpenXRHandInteractionType::Palm" },
		{ "Pinch.Name", "EOpenXRHandInteractionType::Pinch" },
		{ "Poke.Name", "EOpenXRHandInteractionType::Poke" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hand interaction types" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOpenXRHandInteractionType::Aim", (int64)EOpenXRHandInteractionType::Aim },
		{ "EOpenXRHandInteractionType::Grip", (int64)EOpenXRHandInteractionType::Grip },
		{ "EOpenXRHandInteractionType::Pinch", (int64)EOpenXRHandInteractionType::Pinch },
		{ "EOpenXRHandInteractionType::Poke", (int64)EOpenXRHandInteractionType::Poke },
		{ "EOpenXRHandInteractionType::Palm", (int64)EOpenXRHandInteractionType::Palm },
		{ "EOpenXRHandInteractionType::GripSurface", (int64)EOpenXRHandInteractionType::GripSurface },
		{ "EOpenXRHandInteractionType::Count", (int64)EOpenXRHandInteractionType::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXR_EOpenXRHandInteractionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	"EOpenXRHandInteractionType",
	"EOpenXRHandInteractionType",
	Z_Construct_UEnum_AndroidXR_EOpenXRHandInteractionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EOpenXRHandInteractionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EOpenXRHandInteractionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXR_EOpenXRHandInteractionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXR_EOpenXRHandInteractionType()
{
	if (!Z_Registration_Info_UEnum_EOpenXRHandInteractionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOpenXRHandInteractionType.InnerSingleton, Z_Construct_UEnum_AndroidXR_EOpenXRHandInteractionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOpenXRHandInteractionType.InnerSingleton;
}
// ********** End Enum EOpenXRHandInteractionType **************************************************

// ********** Begin Enum EAndroidXREnvironmentBlendMode ********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAndroidXREnvironmentBlendMode;
static UEnum* EAndroidXREnvironmentBlendMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAndroidXREnvironmentBlendMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAndroidXREnvironmentBlendMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXR_EAndroidXREnvironmentBlendMode, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("EAndroidXREnvironmentBlendMode"));
	}
	return Z_Registration_Info_UEnum_EAndroidXREnvironmentBlendMode.OuterSingleton;
}
template<> ANDROIDXR_API UEnum* StaticEnum<EAndroidXREnvironmentBlendMode>()
{
	return EAndroidXREnvironmentBlendMode_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXR_EAndroidXREnvironmentBlendMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Additive.Comment", "//The composition layers will be additively blended with the real world behind the display.\n" },
		{ "Additive.Name", "EAndroidXREnvironmentBlendMode::Additive" },
		{ "Additive.ToolTip", "The composition layers will be additively blended with the real world behind the display." },
		{ "AlphaBlend.Comment", "//The composition layers will be alpha-blended with the real world behind the display.\n" },
		{ "AlphaBlend.Name", "EAndroidXREnvironmentBlendMode::AlphaBlend" },
		{ "AlphaBlend.ToolTip", "The composition layers will be alpha-blended with the real world behind the display." },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Environment Blend Mode Types\n */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
		{ "None.Name", "EAndroidXREnvironmentBlendMode::None" },
		{ "Opaque.Comment", "//The composition layers will be displayed with no view of the physical world behind them.\n" },
		{ "Opaque.Name", "EAndroidXREnvironmentBlendMode::Opaque" },
		{ "Opaque.ToolTip", "The composition layers will be displayed with no view of the physical world behind them." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Environment Blend Mode Types" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAndroidXREnvironmentBlendMode::None", (int64)EAndroidXREnvironmentBlendMode::None },
		{ "EAndroidXREnvironmentBlendMode::Opaque", (int64)EAndroidXREnvironmentBlendMode::Opaque },
		{ "EAndroidXREnvironmentBlendMode::Additive", (int64)EAndroidXREnvironmentBlendMode::Additive },
		{ "EAndroidXREnvironmentBlendMode::AlphaBlend", (int64)EAndroidXREnvironmentBlendMode::AlphaBlend },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXR_EAndroidXREnvironmentBlendMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	"EAndroidXREnvironmentBlendMode",
	"EAndroidXREnvironmentBlendMode",
	Z_Construct_UEnum_AndroidXR_EAndroidXREnvironmentBlendMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXREnvironmentBlendMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXREnvironmentBlendMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXR_EAndroidXREnvironmentBlendMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXREnvironmentBlendMode()
{
	if (!Z_Registration_Info_UEnum_EAndroidXREnvironmentBlendMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAndroidXREnvironmentBlendMode.InnerSingleton, Z_Construct_UEnum_AndroidXR_EAndroidXREnvironmentBlendMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAndroidXREnvironmentBlendMode.InnerSingleton;
}
// ********** End Enum EAndroidXREnvironmentBlendMode **********************************************

// ********** Begin Delegate FAndroidXRPerfSettingsDynamicDelegate *********************************
struct Z_Construct_UDelegateFunction_AndroidXR_AndroidXRPerfSettingsDynamicDelegate__DelegateSignature_Statics
{
	struct _Script_AndroidXR_eventAndroidXRPerfSettingsDynamicDelegate_Parms
	{
		EAndroidXRPerfSettingsDomain Domain;
		EAndroidXRPerfSettingsSubDomain SubDomain;
		EAndroidXRPerfSettingsNotificationLevel FromLevel;
		EAndroidXRPerfSettingsNotificationLevel ToLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Broadcast via the AndroidXREventProxy in the event of\n// XR_TYPE_EVENT_DATA_PERF_SETTINGS_EXT\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Broadcast via the AndroidXREventProxy in the event of\nXR_TYPE_EVENT_DATA_PERF_SETTINGS_EXT" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Domain_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Domain;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SubDomain_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SubDomain;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FromLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FromLevel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ToLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ToLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AndroidXR_AndroidXRPerfSettingsDynamicDelegate__DelegateSignature_Statics::NewProp_Domain_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AndroidXR_AndroidXRPerfSettingsDynamicDelegate__DelegateSignature_Statics::NewProp_Domain = { "Domain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AndroidXR_eventAndroidXRPerfSettingsDynamicDelegate_Parms, Domain), Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsDomain, METADATA_PARAMS(0, nullptr) }; // 3600440092
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AndroidXR_AndroidXRPerfSettingsDynamicDelegate__DelegateSignature_Statics::NewProp_SubDomain_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AndroidXR_AndroidXRPerfSettingsDynamicDelegate__DelegateSignature_Statics::NewProp_SubDomain = { "SubDomain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AndroidXR_eventAndroidXRPerfSettingsDynamicDelegate_Parms, SubDomain), Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsSubDomain, METADATA_PARAMS(0, nullptr) }; // 2633529476
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AndroidXR_AndroidXRPerfSettingsDynamicDelegate__DelegateSignature_Statics::NewProp_FromLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AndroidXR_AndroidXRPerfSettingsDynamicDelegate__DelegateSignature_Statics::NewProp_FromLevel = { "FromLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AndroidXR_eventAndroidXRPerfSettingsDynamicDelegate_Parms, FromLevel), Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsNotificationLevel, METADATA_PARAMS(0, nullptr) }; // 758341563
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AndroidXR_AndroidXRPerfSettingsDynamicDelegate__DelegateSignature_Statics::NewProp_ToLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AndroidXR_AndroidXRPerfSettingsDynamicDelegate__DelegateSignature_Statics::NewProp_ToLevel = { "ToLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AndroidXR_eventAndroidXRPerfSettingsDynamicDelegate_Parms, ToLevel), Z_Construct_UEnum_AndroidXR_EAndroidXRPerfSettingsNotificationLevel, METADATA_PARAMS(0, nullptr) }; // 758341563
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AndroidXR_AndroidXRPerfSettingsDynamicDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AndroidXR_AndroidXRPerfSettingsDynamicDelegate__DelegateSignature_Statics::NewProp_Domain_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AndroidXR_AndroidXRPerfSettingsDynamicDelegate__DelegateSignature_Statics::NewProp_Domain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AndroidXR_AndroidXRPerfSettingsDynamicDelegate__DelegateSignature_Statics::NewProp_SubDomain_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AndroidXR_AndroidXRPerfSettingsDynamicDelegate__DelegateSignature_Statics::NewProp_SubDomain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AndroidXR_AndroidXRPerfSettingsDynamicDelegate__DelegateSignature_Statics::NewProp_FromLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AndroidXR_AndroidXRPerfSettingsDynamicDelegate__DelegateSignature_Statics::NewProp_FromLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AndroidXR_AndroidXRPerfSettingsDynamicDelegate__DelegateSignature_Statics::NewProp_ToLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AndroidXR_AndroidXRPerfSettingsDynamicDelegate__DelegateSignature_Statics::NewProp_ToLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXR_AndroidXRPerfSettingsDynamicDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AndroidXR_AndroidXRPerfSettingsDynamicDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AndroidXR, nullptr, "AndroidXRPerfSettingsDynamicDelegate__DelegateSignature", Z_Construct_UDelegateFunction_AndroidXR_AndroidXRPerfSettingsDynamicDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXR_AndroidXRPerfSettingsDynamicDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AndroidXR_AndroidXRPerfSettingsDynamicDelegate__DelegateSignature_Statics::_Script_AndroidXR_eventAndroidXRPerfSettingsDynamicDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXR_AndroidXRPerfSettingsDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AndroidXR_AndroidXRPerfSettingsDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AndroidXR_AndroidXRPerfSettingsDynamicDelegate__DelegateSignature_Statics::_Script_AndroidXR_eventAndroidXRPerfSettingsDynamicDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AndroidXR_AndroidXRPerfSettingsDynamicDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AndroidXR_AndroidXRPerfSettingsDynamicDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAndroidXRPerfSettingsDynamicDelegate_DelegateWrapper(const FMulticastScriptDelegate& AndroidXRPerfSettingsDynamicDelegate, EAndroidXRPerfSettingsDomain Domain, EAndroidXRPerfSettingsSubDomain SubDomain, EAndroidXRPerfSettingsNotificationLevel FromLevel, EAndroidXRPerfSettingsNotificationLevel ToLevel)
{
	struct _Script_AndroidXR_eventAndroidXRPerfSettingsDynamicDelegate_Parms
	{
		EAndroidXRPerfSettingsDomain Domain;
		EAndroidXRPerfSettingsSubDomain SubDomain;
		EAndroidXRPerfSettingsNotificationLevel FromLevel;
		EAndroidXRPerfSettingsNotificationLevel ToLevel;
	};
	_Script_AndroidXR_eventAndroidXRPerfSettingsDynamicDelegate_Parms Parms;
	Parms.Domain=Domain;
	Parms.SubDomain=SubDomain;
	Parms.FromLevel=FromLevel;
	Parms.ToLevel=ToLevel;
	AndroidXRPerfSettingsDynamicDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FAndroidXRPerfSettingsDynamicDelegate ***********************************

// ********** Begin Delegate FAndroidXRDisplayRefreshRateChangedDynamicDelegate ********************
struct Z_Construct_UDelegateFunction_AndroidXR_AndroidXRDisplayRefreshRateChangedDynamicDelegate__DelegateSignature_Statics
{
	struct _Script_AndroidXR_eventAndroidXRDisplayRefreshRateChangedDynamicDelegate_Parms
	{
		float FromRate;
		float ToRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Broadcast via the AndroidXREventProxy in the event of\n// XR_TYPE_EVENT_DATA_DISPLAY_REFRESH_RATE_CHANGED_FB\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Broadcast via the AndroidXREventProxy in the event of\nXR_TYPE_EVENT_DATA_DISPLAY_REFRESH_RATE_CHANGED_FB" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FromRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ToRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AndroidXR_AndroidXRDisplayRefreshRateChangedDynamicDelegate__DelegateSignature_Statics::NewProp_FromRate = { "FromRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AndroidXR_eventAndroidXRDisplayRefreshRateChangedDynamicDelegate_Parms, FromRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AndroidXR_AndroidXRDisplayRefreshRateChangedDynamicDelegate__DelegateSignature_Statics::NewProp_ToRate = { "ToRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AndroidXR_eventAndroidXRDisplayRefreshRateChangedDynamicDelegate_Parms, ToRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AndroidXR_AndroidXRDisplayRefreshRateChangedDynamicDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AndroidXR_AndroidXRDisplayRefreshRateChangedDynamicDelegate__DelegateSignature_Statics::NewProp_FromRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AndroidXR_AndroidXRDisplayRefreshRateChangedDynamicDelegate__DelegateSignature_Statics::NewProp_ToRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXR_AndroidXRDisplayRefreshRateChangedDynamicDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AndroidXR_AndroidXRDisplayRefreshRateChangedDynamicDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AndroidXR, nullptr, "AndroidXRDisplayRefreshRateChangedDynamicDelegate__DelegateSignature", Z_Construct_UDelegateFunction_AndroidXR_AndroidXRDisplayRefreshRateChangedDynamicDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXR_AndroidXRDisplayRefreshRateChangedDynamicDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AndroidXR_AndroidXRDisplayRefreshRateChangedDynamicDelegate__DelegateSignature_Statics::_Script_AndroidXR_eventAndroidXRDisplayRefreshRateChangedDynamicDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidXR_AndroidXRDisplayRefreshRateChangedDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AndroidXR_AndroidXRDisplayRefreshRateChangedDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AndroidXR_AndroidXRDisplayRefreshRateChangedDynamicDelegate__DelegateSignature_Statics::_Script_AndroidXR_eventAndroidXRDisplayRefreshRateChangedDynamicDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AndroidXR_AndroidXRDisplayRefreshRateChangedDynamicDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AndroidXR_AndroidXRDisplayRefreshRateChangedDynamicDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAndroidXRDisplayRefreshRateChangedDynamicDelegate_DelegateWrapper(const FMulticastScriptDelegate& AndroidXRDisplayRefreshRateChangedDynamicDelegate, float FromRate, float ToRate)
{
	struct _Script_AndroidXR_eventAndroidXRDisplayRefreshRateChangedDynamicDelegate_Parms
	{
		float FromRate;
		float ToRate;
	};
	_Script_AndroidXR_eventAndroidXRDisplayRefreshRateChangedDynamicDelegate_Parms Parms;
	Parms.FromRate=FromRate;
	Parms.ToRate=ToRate;
	AndroidXRDisplayRefreshRateChangedDynamicDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FAndroidXRDisplayRefreshRateChangedDynamicDelegate **********************

// ********** Begin Enum EAndroidXRFaceTrackingState ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAndroidXRFaceTrackingState;
static UEnum* EAndroidXRFaceTrackingState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRFaceTrackingState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAndroidXRFaceTrackingState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXR_EAndroidXRFaceTrackingState, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("EAndroidXRFaceTrackingState"));
	}
	return Z_Registration_Info_UEnum_EAndroidXRFaceTrackingState.OuterSingleton;
}
template<> ANDROIDXR_API UEnum* StaticEnum<EAndroidXRFaceTrackingState>()
{
	return EAndroidXRFaceTrackingState_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXR_EAndroidXRFaceTrackingState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Identifies the different states of the face tracker.\n */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
		{ "Paused.Comment", "// Indicates that face tracking is paused but may be resumed in the future.\n" },
		{ "Paused.Name", "EAndroidXRFaceTrackingState::Paused" },
		{ "Paused.ToolTip", "Indicates that face tracking is paused but may be resumed in the future." },
		{ "Stopped.Comment", "// Tracking has stopped but the client still has an active face tracker.\n" },
		{ "Stopped.Name", "EAndroidXRFaceTrackingState::Stopped" },
		{ "Stopped.ToolTip", "Tracking has stopped but the client still has an active face tracker." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Identifies the different states of the face tracker." },
#endif
		{ "Tracked.Comment", "// The face is tracked and its pose is current.\n" },
		{ "Tracked.Name", "EAndroidXRFaceTrackingState::Tracked" },
		{ "Tracked.ToolTip", "The face is tracked and its pose is current." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAndroidXRFaceTrackingState::Paused", (int64)EAndroidXRFaceTrackingState::Paused },
		{ "EAndroidXRFaceTrackingState::Stopped", (int64)EAndroidXRFaceTrackingState::Stopped },
		{ "EAndroidXRFaceTrackingState::Tracked", (int64)EAndroidXRFaceTrackingState::Tracked },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXR_EAndroidXRFaceTrackingState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	"EAndroidXRFaceTrackingState",
	"EAndroidXRFaceTrackingState",
	Z_Construct_UEnum_AndroidXR_EAndroidXRFaceTrackingState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXRFaceTrackingState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXRFaceTrackingState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXR_EAndroidXRFaceTrackingState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRFaceTrackingState()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRFaceTrackingState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAndroidXRFaceTrackingState.InnerSingleton, Z_Construct_UEnum_AndroidXR_EAndroidXRFaceTrackingState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAndroidXRFaceTrackingState.InnerSingleton;
}
// ********** End Enum EAndroidXRFaceTrackingState *************************************************

// ********** Begin Enum EAndroidXRFaceParameterIndices ********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAndroidXRFaceParameterIndices;
static UEnum* EAndroidXRFaceParameterIndices_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRFaceParameterIndices.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAndroidXRFaceParameterIndices.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXR_EAndroidXRFaceParameterIndices, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("EAndroidXRFaceParameterIndices"));
	}
	return Z_Registration_Info_UEnum_EAndroidXRFaceParameterIndices.OuterSingleton;
}
template<> ANDROIDXR_API UEnum* StaticEnum<EAndroidXRFaceParameterIndices>()
{
	return EAndroidXRFaceParameterIndices_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXR_EAndroidXRFaceParameterIndices_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Brow_Lowerer_L.Comment", "// The left brow lowerer blendshape parameter.\n" },
		{ "Brow_Lowerer_L.Name", "EAndroidXRFaceParameterIndices::Brow_Lowerer_L" },
		{ "Brow_Lowerer_L.ToolTip", "The left brow lowerer blendshape parameter." },
		{ "Brow_Lowerer_R.Comment", "// The right brow lowerer blendshape parameter.\n" },
		{ "Brow_Lowerer_R.Name", "EAndroidXRFaceParameterIndices::Brow_Lowerer_R" },
		{ "Brow_Lowerer_R.ToolTip", "The right brow lowerer blendshape parameter." },
		{ "Cheek_Puff_L.Comment", "// The left cheek puff blendshape parameter.\n" },
		{ "Cheek_Puff_L.Name", "EAndroidXRFaceParameterIndices::Cheek_Puff_L" },
		{ "Cheek_Puff_L.ToolTip", "The left cheek puff blendshape parameter." },
		{ "Cheek_Puff_R.Comment", "// The right cheek puff blendshape parameter.\n" },
		{ "Cheek_Puff_R.Name", "EAndroidXRFaceParameterIndices::Cheek_Puff_R" },
		{ "Cheek_Puff_R.ToolTip", "The right cheek puff blendshape parameter." },
		{ "Cheek_Raiser_L.Comment", "// The left cheek raiser blendshape parameter.\n" },
		{ "Cheek_Raiser_L.Name", "EAndroidXRFaceParameterIndices::Cheek_Raiser_L" },
		{ "Cheek_Raiser_L.ToolTip", "The left cheek raiser blendshape parameter." },
		{ "Cheek_Raiser_R.Comment", "// The right cheek raiser blendshape parameter.\n" },
		{ "Cheek_Raiser_R.Name", "EAndroidXRFaceParameterIndices::Cheek_Raiser_R" },
		{ "Cheek_Raiser_R.ToolTip", "The right cheek raiser blendshape parameter." },
		{ "Cheek_Suck_L.Comment", "// The left cheek suck blendshape parameter.\n" },
		{ "Cheek_Suck_L.Name", "EAndroidXRFaceParameterIndices::Cheek_Suck_L" },
		{ "Cheek_Suck_L.ToolTip", "The left cheek suck blendshape parameter." },
		{ "Cheek_Suck_R.Comment", "// The right cheek suck blendshape parameter.\n" },
		{ "Cheek_Suck_R.Name", "EAndroidXRFaceParameterIndices::Cheek_Suck_R" },
		{ "Cheek_Suck_R.ToolTip", "The right cheek suck blendshape parameter." },
		{ "Chin_Raiser_B.Comment", "// The bottom chin raiser blendshape parameter.\n" },
		{ "Chin_Raiser_B.Name", "EAndroidXRFaceParameterIndices::Chin_Raiser_B" },
		{ "Chin_Raiser_B.ToolTip", "The bottom chin raiser blendshape parameter." },
		{ "Chin_Raiser_T.Comment", "// The top chin raiser blendshape parameter.\n" },
		{ "Chin_Raiser_T.Name", "EAndroidXRFaceParameterIndices::Chin_Raiser_T" },
		{ "Chin_Raiser_T.ToolTip", "The top chin raiser blendshape parameter." },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The blend shapes defined by the face tracking extension.\n * Each parameter in this enum is an index into a blend shape array whose values are type of float and the runtime normalizes to 1 - 0\n */" },
#endif
		{ "Dimpler_L.Comment", "// The left dimpler blendshape parameter.\n" },
		{ "Dimpler_L.Name", "EAndroidXRFaceParameterIndices::Dimpler_L" },
		{ "Dimpler_L.ToolTip", "The left dimpler blendshape parameter." },
		{ "Dimpler_R.Comment", "// The right dimpler lowerer blendshape parameter.\n" },
		{ "Dimpler_R.Name", "EAndroidXRFaceParameterIndices::Dimpler_R" },
		{ "Dimpler_R.ToolTip", "The right dimpler lowerer blendshape parameter." },
		{ "Eyes_Closed_L.Comment", "// The left eyes closed blendshape parameter.\n" },
		{ "Eyes_Closed_L.Name", "EAndroidXRFaceParameterIndices::Eyes_Closed_L" },
		{ "Eyes_Closed_L.ToolTip", "The left eyes closed blendshape parameter." },
		{ "Eyes_Closed_R.Comment", "// The right eyes closed blendshape parameter.\n" },
		{ "Eyes_Closed_R.Name", "EAndroidXRFaceParameterIndices::Eyes_Closed_R" },
		{ "Eyes_Closed_R.ToolTip", "The right eyes closed blendshape parameter." },
		{ "Eyes_Look_Down_L.Comment", "// The left eyes look down blendshape parameter.\n" },
		{ "Eyes_Look_Down_L.Name", "EAndroidXRFaceParameterIndices::Eyes_Look_Down_L" },
		{ "Eyes_Look_Down_L.ToolTip", "The left eyes look down blendshape parameter." },
		{ "Eyes_Look_Down_R.Comment", "// The right eyes look down blendshape parameter.\n" },
		{ "Eyes_Look_Down_R.Name", "EAndroidXRFaceParameterIndices::Eyes_Look_Down_R" },
		{ "Eyes_Look_Down_R.ToolTip", "The right eyes look down blendshape parameter." },
		{ "Eyes_Look_Left_L.Comment", "// The left look left blendshape parameter.\n" },
		{ "Eyes_Look_Left_L.Name", "EAndroidXRFaceParameterIndices::Eyes_Look_Left_L" },
		{ "Eyes_Look_Left_L.ToolTip", "The left look left blendshape parameter." },
		{ "Eyes_Look_Left_R.Comment", "// The left look right blendshape parameter.\n" },
		{ "Eyes_Look_Left_R.Name", "EAndroidXRFaceParameterIndices::Eyes_Look_Left_R" },
		{ "Eyes_Look_Left_R.ToolTip", "The left look right blendshape parameter." },
		{ "Eyes_Look_Right_L.Comment", "// The right look left blendshape parameter.\n" },
		{ "Eyes_Look_Right_L.Name", "EAndroidXRFaceParameterIndices::Eyes_Look_Right_L" },
		{ "Eyes_Look_Right_L.ToolTip", "The right look left blendshape parameter." },
		{ "Eyes_Look_Right_R.Comment", "// The right look right blendshape parameter.\n" },
		{ "Eyes_Look_Right_R.Name", "EAndroidXRFaceParameterIndices::Eyes_Look_Right_R" },
		{ "Eyes_Look_Right_R.ToolTip", "The right look right blendshape parameter." },
		{ "Eyes_Look_Up_L.Comment", "// The left eyes look up blendshape parameter.\n" },
		{ "Eyes_Look_Up_L.Name", "EAndroidXRFaceParameterIndices::Eyes_Look_Up_L" },
		{ "Eyes_Look_Up_L.ToolTip", "The left eyes look up blendshape parameter." },
		{ "Eyes_Look_Up_R.Comment", "// The right eyes look up blendshape parameter.\n" },
		{ "Eyes_Look_Up_R.Name", "EAndroidXRFaceParameterIndices::Eyes_Look_Up_R" },
		{ "Eyes_Look_Up_R.ToolTip", "The right eyes look up blendshape parameter." },
		{ "Inner_Brow_Raiser_L.Comment", "// The left inner brow raiser blendshape parameter.\n" },
		{ "Inner_Brow_Raiser_L.Name", "EAndroidXRFaceParameterIndices::Inner_Brow_Raiser_L" },
		{ "Inner_Brow_Raiser_L.ToolTip", "The left inner brow raiser blendshape parameter." },
		{ "Inner_Brow_Raiser_R.Comment", "// The right inner brow raiser blendshape parameter.\n" },
		{ "Inner_Brow_Raiser_R.Name", "EAndroidXRFaceParameterIndices::Inner_Brow_Raiser_R" },
		{ "Inner_Brow_Raiser_R.ToolTip", "The right inner brow raiser blendshape parameter." },
		{ "Jaw_Drop.Comment", "// The jaw drop blendshape parameter.\n" },
		{ "Jaw_Drop.Name", "EAndroidXRFaceParameterIndices::Jaw_Drop" },
		{ "Jaw_Drop.ToolTip", "The jaw drop blendshape parameter." },
		{ "Jaw_Sideways_Left.Comment", "// The left jaw sideways blendshape parameter.\n" },
		{ "Jaw_Sideways_Left.Name", "EAndroidXRFaceParameterIndices::Jaw_Sideways_Left" },
		{ "Jaw_Sideways_Left.ToolTip", "The left jaw sideways blendshape parameter." },
		{ "Jaw_Sideways_Right.Comment", "// The right jaw sideways blendshape parameter.\n" },
		{ "Jaw_Sideways_Right.Name", "EAndroidXRFaceParameterIndices::Jaw_Sideways_Right" },
		{ "Jaw_Sideways_Right.ToolTip", "The right jaw sideways blendshape parameter." },
		{ "Jaw_Thrust.Comment", "// The jaw thrust blendshape parameter.\n" },
		{ "Jaw_Thrust.Name", "EAndroidXRFaceParameterIndices::Jaw_Thrust" },
		{ "Jaw_Thrust.ToolTip", "The jaw thrust blendshape parameter." },
		{ "Lid_Tightener_L.Comment", "// The left lid tightener blendshape parameter.\n" },
		{ "Lid_Tightener_L.Name", "EAndroidXRFaceParameterIndices::Lid_Tightener_L" },
		{ "Lid_Tightener_L.ToolTip", "The left lid tightener blendshape parameter." },
		{ "Lid_Tightener_R.Comment", "// The right lid tightener blendshape parameter.\n" },
		{ "Lid_Tightener_R.Name", "EAndroidXRFaceParameterIndices::Lid_Tightener_R" },
		{ "Lid_Tightener_R.ToolTip", "The right lid tightener blendshape parameter." },
		{ "Lip_Corner_Depressor_L.Comment", "// The left corner lip depressor blendshape parameter.\n" },
		{ "Lip_Corner_Depressor_L.Name", "EAndroidXRFaceParameterIndices::Lip_Corner_Depressor_L" },
		{ "Lip_Corner_Depressor_L.ToolTip", "The left corner lip depressor blendshape parameter." },
		{ "Lip_Corner_Depressor_R.Comment", "// The right corner lip depressor blendshape parameter.\n" },
		{ "Lip_Corner_Depressor_R.Name", "EAndroidXRFaceParameterIndices::Lip_Corner_Depressor_R" },
		{ "Lip_Corner_Depressor_R.ToolTip", "The right corner lip depressor blendshape parameter." },
		{ "Lip_Corner_Puller_L.Comment", "// The left corner lip puller blendshape parameter.\n" },
		{ "Lip_Corner_Puller_L.Name", "EAndroidXRFaceParameterIndices::Lip_Corner_Puller_L" },
		{ "Lip_Corner_Puller_L.ToolTip", "The left corner lip puller blendshape parameter." },
		{ "Lip_Corner_Puller_R.Comment", "// The right corner lip puller blendshape parameter.\n" },
		{ "Lip_Corner_Puller_R.Name", "EAndroidXRFaceParameterIndices::Lip_Corner_Puller_R" },
		{ "Lip_Corner_Puller_R.ToolTip", "The right corner lip puller blendshape parameter." },
		{ "Lip_Funneler_LB.Comment", "// The left bottom lip funneler blendshape parameter.\n" },
		{ "Lip_Funneler_LB.Name", "EAndroidXRFaceParameterIndices::Lip_Funneler_LB" },
		{ "Lip_Funneler_LB.ToolTip", "The left bottom lip funneler blendshape parameter." },
		{ "Lip_Funneler_LT.Comment", "// The left top lip funneler blendshape parameter.\n" },
		{ "Lip_Funneler_LT.Name", "EAndroidXRFaceParameterIndices::Lip_Funneler_LT" },
		{ "Lip_Funneler_LT.ToolTip", "The left top lip funneler blendshape parameter." },
		{ "Lip_Funneler_RB.Comment", "// The right bottom lip funneler blendshape parameter.\n" },
		{ "Lip_Funneler_RB.Name", "EAndroidXRFaceParameterIndices::Lip_Funneler_RB" },
		{ "Lip_Funneler_RB.ToolTip", "The right bottom lip funneler blendshape parameter." },
		{ "Lip_Funneler_RT.Comment", "// The right top lip funneler blendshape parameter.\n" },
		{ "Lip_Funneler_RT.Name", "EAndroidXRFaceParameterIndices::Lip_Funneler_RT" },
		{ "Lip_Funneler_RT.ToolTip", "The right top lip funneler blendshape parameter." },
		{ "Lip_Pressor_L.Comment", "// The left lip pressor blendshape parameter.\n" },
		{ "Lip_Pressor_L.Name", "EAndroidXRFaceParameterIndices::Lip_Pressor_L" },
		{ "Lip_Pressor_L.ToolTip", "The left lip pressor blendshape parameter." },
		{ "Lip_Pressor_R.Comment", "// The right lip pressor blendshape parameter.\n" },
		{ "Lip_Pressor_R.Name", "EAndroidXRFaceParameterIndices::Lip_Pressor_R" },
		{ "Lip_Pressor_R.ToolTip", "The right lip pressor blendshape parameter." },
		{ "Lip_Pucker_L.Comment", "// The left lip pucker blendshape parameter.\n" },
		{ "Lip_Pucker_L.Name", "EAndroidXRFaceParameterIndices::Lip_Pucker_L" },
		{ "Lip_Pucker_L.ToolTip", "The left lip pucker blendshape parameter." },
		{ "Lip_Pucker_R.Comment", "// The right lip pucker blendshape parameter.\n" },
		{ "Lip_Pucker_R.Name", "EAndroidXRFaceParameterIndices::Lip_Pucker_R" },
		{ "Lip_Pucker_R.ToolTip", "The right lip pucker blendshape parameter." },
		{ "Lip_Stretcher_L.Comment", "// The left lip stretcher blendshape parameter.\n" },
		{ "Lip_Stretcher_L.Name", "EAndroidXRFaceParameterIndices::Lip_Stretcher_L" },
		{ "Lip_Stretcher_L.ToolTip", "The left lip stretcher blendshape parameter." },
		{ "Lip_Stretcher_R.Comment", "// The right lip stretcher blendshape parameter.\n" },
		{ "Lip_Stretcher_R.Name", "EAndroidXRFaceParameterIndices::Lip_Stretcher_R" },
		{ "Lip_Stretcher_R.ToolTip", "The right lip stretcher blendshape parameter." },
		{ "Lip_Suck_LB.Comment", "// The left bottom lip suck blendshape parameter.\n" },
		{ "Lip_Suck_LB.Name", "EAndroidXRFaceParameterIndices::Lip_Suck_LB" },
		{ "Lip_Suck_LB.ToolTip", "The left bottom lip suck blendshape parameter." },
		{ "Lip_Suck_LT.Comment", "// The left top lip suck blendshape parameter.\n" },
		{ "Lip_Suck_LT.Name", "EAndroidXRFaceParameterIndices::Lip_Suck_LT" },
		{ "Lip_Suck_LT.ToolTip", "The left top lip suck blendshape parameter." },
		{ "Lip_Suck_RB.Comment", "// The right bottom lip suck blendshape parameter.\n" },
		{ "Lip_Suck_RB.Name", "EAndroidXRFaceParameterIndices::Lip_Suck_RB" },
		{ "Lip_Suck_RB.ToolTip", "The right bottom lip suck blendshape parameter." },
		{ "Lip_Suck_RT.Comment", "// The right top lip suck blendshape parameter.\n" },
		{ "Lip_Suck_RT.Name", "EAndroidXRFaceParameterIndices::Lip_Suck_RT" },
		{ "Lip_Suck_RT.ToolTip", "The right top lip suck blendshape parameter." },
		{ "Lip_Tightener_L.Comment", "// The left lip tightener blendshape parameter.\n" },
		{ "Lip_Tightener_L.Name", "EAndroidXRFaceParameterIndices::Lip_Tightener_L" },
		{ "Lip_Tightener_L.ToolTip", "The left lip tightener blendshape parameter." },
		{ "Lip_Tightener_R.Comment", "// The right lip tightener blendshape parameter.\n" },
		{ "Lip_Tightener_R.Name", "EAndroidXRFaceParameterIndices::Lip_Tightener_R" },
		{ "Lip_Tightener_R.ToolTip", "The right lip tightener blendshape parameter." },
		{ "Lips_Toward.Comment", "// The lips toward blendshape parameter.\n" },
		{ "Lips_Toward.Name", "EAndroidXRFaceParameterIndices::Lips_Toward" },
		{ "Lips_Toward.ToolTip", "The lips toward blendshape parameter." },
		{ "Lower_Lip_Depressor_L.Comment", "// The left lower lip depressor blendshape parameter.\n" },
		{ "Lower_Lip_Depressor_L.Name", "EAndroidXRFaceParameterIndices::Lower_Lip_Depressor_L" },
		{ "Lower_Lip_Depressor_L.ToolTip", "The left lower lip depressor blendshape parameter." },
		{ "Lower_Lip_Depressor_R.Comment", "// The right lower lip depressor blendshape parameter.\n" },
		{ "Lower_Lip_Depressor_R.Name", "EAndroidXRFaceParameterIndices::Lower_Lip_Depressor_R" },
		{ "Lower_Lip_Depressor_R.ToolTip", "The right lower lip depressor blendshape parameter." },
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
		{ "Mouth_Left.Comment", "// The mouth move left blendshape parameter.\n" },
		{ "Mouth_Left.Name", "EAndroidXRFaceParameterIndices::Mouth_Left" },
		{ "Mouth_Left.ToolTip", "The mouth move left blendshape parameter." },
		{ "Mouth_Right.Comment", "// The mouth move right blendshape parameter.\n" },
		{ "Mouth_Right.Name", "EAndroidXRFaceParameterIndices::Mouth_Right" },
		{ "Mouth_Right.ToolTip", "The mouth move right blendshape parameter." },
		{ "Nose_Wrinkler_L.Comment", "// The left nose wrinkler blendshape parameter.\n" },
		{ "Nose_Wrinkler_L.Name", "EAndroidXRFaceParameterIndices::Nose_Wrinkler_L" },
		{ "Nose_Wrinkler_L.ToolTip", "The left nose wrinkler blendshape parameter." },
		{ "Nose_Wrinkler_R.Comment", "// The right nose wrinkler blendshape parameter.\n" },
		{ "Nose_Wrinkler_R.Name", "EAndroidXRFaceParameterIndices::Nose_Wrinkler_R" },
		{ "Nose_Wrinkler_R.ToolTip", "The right nose wrinkler blendshape parameter." },
		{ "Outer_Brow_Raiser_L.Comment", "// The left outer brow raiser blendshape parameter.\n" },
		{ "Outer_Brow_Raiser_L.Name", "EAndroidXRFaceParameterIndices::Outer_Brow_Raiser_L" },
		{ "Outer_Brow_Raiser_L.ToolTip", "The left outer brow raiser blendshape parameter." },
		{ "Outer_Brow_Raiser_R.Comment", "// The right outer brow raiser blendshape parameter.\n" },
		{ "Outer_Brow_Raiser_R.Name", "EAndroidXRFaceParameterIndices::Outer_Brow_Raiser_R" },
		{ "Outer_Brow_Raiser_R.ToolTip", "The right outer brow raiser blendshape parameter." },
		{ "Tongue_Down.Comment", "// The right down puller blendshape parameter.\n" },
		{ "Tongue_Down.Name", "EAndroidXRFaceParameterIndices::Tongue_Down" },
		{ "Tongue_Down.ToolTip", "The right down puller blendshape parameter." },
		{ "Tongue_Left.Comment", "// The tongue left puller blendshape parameter.\n" },
		{ "Tongue_Left.Name", "EAndroidXRFaceParameterIndices::Tongue_Left" },
		{ "Tongue_Left.ToolTip", "The tongue left puller blendshape parameter." },
		{ "Tongue_Out.Comment", "// The tongue out blendshape parameter.\n" },
		{ "Tongue_Out.Name", "EAndroidXRFaceParameterIndices::Tongue_Out" },
		{ "Tongue_Out.ToolTip", "The tongue out blendshape parameter." },
		{ "Tongue_Right.Comment", "// The right right puller blendshape parameter.\n" },
		{ "Tongue_Right.Name", "EAndroidXRFaceParameterIndices::Tongue_Right" },
		{ "Tongue_Right.ToolTip", "The right right puller blendshape parameter." },
		{ "Tongue_Up.Comment", "// The right up puller blendshape parameter.\n" },
		{ "Tongue_Up.Name", "EAndroidXRFaceParameterIndices::Tongue_Up" },
		{ "Tongue_Up.ToolTip", "The right up puller blendshape parameter." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The blend shapes defined by the face tracking extension.\nEach parameter in this enum is an index into a blend shape array whose values are type of float and the runtime normalizes to 1 - 0" },
#endif
		{ "Upper_Lid_Raiser_L.Comment", "// The left lid raiser blendshape parameter.\n" },
		{ "Upper_Lid_Raiser_L.Name", "EAndroidXRFaceParameterIndices::Upper_Lid_Raiser_L" },
		{ "Upper_Lid_Raiser_L.ToolTip", "The left lid raiser blendshape parameter." },
		{ "Upper_Lid_Raiser_R.Comment", "// The right lid raiser blendshape parameter.\n" },
		{ "Upper_Lid_Raiser_R.Name", "EAndroidXRFaceParameterIndices::Upper_Lid_Raiser_R" },
		{ "Upper_Lid_Raiser_R.ToolTip", "The right lid raiser blendshape parameter." },
		{ "Upper_Lip_Raiser_L.Comment", "// The left lip raiser blendshape parameter.\n" },
		{ "Upper_Lip_Raiser_L.Name", "EAndroidXRFaceParameterIndices::Upper_Lip_Raiser_L" },
		{ "Upper_Lip_Raiser_L.ToolTip", "The left lip raiser blendshape parameter." },
		{ "Upper_Lip_Raiser_R.Comment", "// The right lip raiser blendshape parameter.\n" },
		{ "Upper_Lip_Raiser_R.Name", "EAndroidXRFaceParameterIndices::Upper_Lip_Raiser_R" },
		{ "Upper_Lip_Raiser_R.ToolTip", "The right lip raiser blendshape parameter." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAndroidXRFaceParameterIndices::Brow_Lowerer_L", (int64)EAndroidXRFaceParameterIndices::Brow_Lowerer_L },
		{ "EAndroidXRFaceParameterIndices::Brow_Lowerer_R", (int64)EAndroidXRFaceParameterIndices::Brow_Lowerer_R },
		{ "EAndroidXRFaceParameterIndices::Cheek_Puff_L", (int64)EAndroidXRFaceParameterIndices::Cheek_Puff_L },
		{ "EAndroidXRFaceParameterIndices::Cheek_Puff_R", (int64)EAndroidXRFaceParameterIndices::Cheek_Puff_R },
		{ "EAndroidXRFaceParameterIndices::Cheek_Raiser_L", (int64)EAndroidXRFaceParameterIndices::Cheek_Raiser_L },
		{ "EAndroidXRFaceParameterIndices::Cheek_Raiser_R", (int64)EAndroidXRFaceParameterIndices::Cheek_Raiser_R },
		{ "EAndroidXRFaceParameterIndices::Cheek_Suck_L", (int64)EAndroidXRFaceParameterIndices::Cheek_Suck_L },
		{ "EAndroidXRFaceParameterIndices::Cheek_Suck_R", (int64)EAndroidXRFaceParameterIndices::Cheek_Suck_R },
		{ "EAndroidXRFaceParameterIndices::Chin_Raiser_B", (int64)EAndroidXRFaceParameterIndices::Chin_Raiser_B },
		{ "EAndroidXRFaceParameterIndices::Chin_Raiser_T", (int64)EAndroidXRFaceParameterIndices::Chin_Raiser_T },
		{ "EAndroidXRFaceParameterIndices::Dimpler_L", (int64)EAndroidXRFaceParameterIndices::Dimpler_L },
		{ "EAndroidXRFaceParameterIndices::Dimpler_R", (int64)EAndroidXRFaceParameterIndices::Dimpler_R },
		{ "EAndroidXRFaceParameterIndices::Eyes_Closed_L", (int64)EAndroidXRFaceParameterIndices::Eyes_Closed_L },
		{ "EAndroidXRFaceParameterIndices::Eyes_Closed_R", (int64)EAndroidXRFaceParameterIndices::Eyes_Closed_R },
		{ "EAndroidXRFaceParameterIndices::Eyes_Look_Down_L", (int64)EAndroidXRFaceParameterIndices::Eyes_Look_Down_L },
		{ "EAndroidXRFaceParameterIndices::Eyes_Look_Down_R", (int64)EAndroidXRFaceParameterIndices::Eyes_Look_Down_R },
		{ "EAndroidXRFaceParameterIndices::Eyes_Look_Left_L", (int64)EAndroidXRFaceParameterIndices::Eyes_Look_Left_L },
		{ "EAndroidXRFaceParameterIndices::Eyes_Look_Left_R", (int64)EAndroidXRFaceParameterIndices::Eyes_Look_Left_R },
		{ "EAndroidXRFaceParameterIndices::Eyes_Look_Right_L", (int64)EAndroidXRFaceParameterIndices::Eyes_Look_Right_L },
		{ "EAndroidXRFaceParameterIndices::Eyes_Look_Right_R", (int64)EAndroidXRFaceParameterIndices::Eyes_Look_Right_R },
		{ "EAndroidXRFaceParameterIndices::Eyes_Look_Up_L", (int64)EAndroidXRFaceParameterIndices::Eyes_Look_Up_L },
		{ "EAndroidXRFaceParameterIndices::Eyes_Look_Up_R", (int64)EAndroidXRFaceParameterIndices::Eyes_Look_Up_R },
		{ "EAndroidXRFaceParameterIndices::Inner_Brow_Raiser_L", (int64)EAndroidXRFaceParameterIndices::Inner_Brow_Raiser_L },
		{ "EAndroidXRFaceParameterIndices::Inner_Brow_Raiser_R", (int64)EAndroidXRFaceParameterIndices::Inner_Brow_Raiser_R },
		{ "EAndroidXRFaceParameterIndices::Jaw_Drop", (int64)EAndroidXRFaceParameterIndices::Jaw_Drop },
		{ "EAndroidXRFaceParameterIndices::Jaw_Sideways_Left", (int64)EAndroidXRFaceParameterIndices::Jaw_Sideways_Left },
		{ "EAndroidXRFaceParameterIndices::Jaw_Sideways_Right", (int64)EAndroidXRFaceParameterIndices::Jaw_Sideways_Right },
		{ "EAndroidXRFaceParameterIndices::Jaw_Thrust", (int64)EAndroidXRFaceParameterIndices::Jaw_Thrust },
		{ "EAndroidXRFaceParameterIndices::Lid_Tightener_L", (int64)EAndroidXRFaceParameterIndices::Lid_Tightener_L },
		{ "EAndroidXRFaceParameterIndices::Lid_Tightener_R", (int64)EAndroidXRFaceParameterIndices::Lid_Tightener_R },
		{ "EAndroidXRFaceParameterIndices::Lip_Corner_Depressor_L", (int64)EAndroidXRFaceParameterIndices::Lip_Corner_Depressor_L },
		{ "EAndroidXRFaceParameterIndices::Lip_Corner_Depressor_R", (int64)EAndroidXRFaceParameterIndices::Lip_Corner_Depressor_R },
		{ "EAndroidXRFaceParameterIndices::Lip_Corner_Puller_L", (int64)EAndroidXRFaceParameterIndices::Lip_Corner_Puller_L },
		{ "EAndroidXRFaceParameterIndices::Lip_Corner_Puller_R", (int64)EAndroidXRFaceParameterIndices::Lip_Corner_Puller_R },
		{ "EAndroidXRFaceParameterIndices::Lip_Funneler_LB", (int64)EAndroidXRFaceParameterIndices::Lip_Funneler_LB },
		{ "EAndroidXRFaceParameterIndices::Lip_Funneler_LT", (int64)EAndroidXRFaceParameterIndices::Lip_Funneler_LT },
		{ "EAndroidXRFaceParameterIndices::Lip_Funneler_RB", (int64)EAndroidXRFaceParameterIndices::Lip_Funneler_RB },
		{ "EAndroidXRFaceParameterIndices::Lip_Funneler_RT", (int64)EAndroidXRFaceParameterIndices::Lip_Funneler_RT },
		{ "EAndroidXRFaceParameterIndices::Lip_Pressor_L", (int64)EAndroidXRFaceParameterIndices::Lip_Pressor_L },
		{ "EAndroidXRFaceParameterIndices::Lip_Pressor_R", (int64)EAndroidXRFaceParameterIndices::Lip_Pressor_R },
		{ "EAndroidXRFaceParameterIndices::Lip_Pucker_L", (int64)EAndroidXRFaceParameterIndices::Lip_Pucker_L },
		{ "EAndroidXRFaceParameterIndices::Lip_Pucker_R", (int64)EAndroidXRFaceParameterIndices::Lip_Pucker_R },
		{ "EAndroidXRFaceParameterIndices::Lip_Stretcher_L", (int64)EAndroidXRFaceParameterIndices::Lip_Stretcher_L },
		{ "EAndroidXRFaceParameterIndices::Lip_Stretcher_R", (int64)EAndroidXRFaceParameterIndices::Lip_Stretcher_R },
		{ "EAndroidXRFaceParameterIndices::Lip_Suck_LB", (int64)EAndroidXRFaceParameterIndices::Lip_Suck_LB },
		{ "EAndroidXRFaceParameterIndices::Lip_Suck_LT", (int64)EAndroidXRFaceParameterIndices::Lip_Suck_LT },
		{ "EAndroidXRFaceParameterIndices::Lip_Suck_RB", (int64)EAndroidXRFaceParameterIndices::Lip_Suck_RB },
		{ "EAndroidXRFaceParameterIndices::Lip_Suck_RT", (int64)EAndroidXRFaceParameterIndices::Lip_Suck_RT },
		{ "EAndroidXRFaceParameterIndices::Lip_Tightener_L", (int64)EAndroidXRFaceParameterIndices::Lip_Tightener_L },
		{ "EAndroidXRFaceParameterIndices::Lip_Tightener_R", (int64)EAndroidXRFaceParameterIndices::Lip_Tightener_R },
		{ "EAndroidXRFaceParameterIndices::Lips_Toward", (int64)EAndroidXRFaceParameterIndices::Lips_Toward },
		{ "EAndroidXRFaceParameterIndices::Lower_Lip_Depressor_L", (int64)EAndroidXRFaceParameterIndices::Lower_Lip_Depressor_L },
		{ "EAndroidXRFaceParameterIndices::Lower_Lip_Depressor_R", (int64)EAndroidXRFaceParameterIndices::Lower_Lip_Depressor_R },
		{ "EAndroidXRFaceParameterIndices::Mouth_Left", (int64)EAndroidXRFaceParameterIndices::Mouth_Left },
		{ "EAndroidXRFaceParameterIndices::Mouth_Right", (int64)EAndroidXRFaceParameterIndices::Mouth_Right },
		{ "EAndroidXRFaceParameterIndices::Nose_Wrinkler_L", (int64)EAndroidXRFaceParameterIndices::Nose_Wrinkler_L },
		{ "EAndroidXRFaceParameterIndices::Nose_Wrinkler_R", (int64)EAndroidXRFaceParameterIndices::Nose_Wrinkler_R },
		{ "EAndroidXRFaceParameterIndices::Outer_Brow_Raiser_L", (int64)EAndroidXRFaceParameterIndices::Outer_Brow_Raiser_L },
		{ "EAndroidXRFaceParameterIndices::Outer_Brow_Raiser_R", (int64)EAndroidXRFaceParameterIndices::Outer_Brow_Raiser_R },
		{ "EAndroidXRFaceParameterIndices::Upper_Lid_Raiser_L", (int64)EAndroidXRFaceParameterIndices::Upper_Lid_Raiser_L },
		{ "EAndroidXRFaceParameterIndices::Upper_Lid_Raiser_R", (int64)EAndroidXRFaceParameterIndices::Upper_Lid_Raiser_R },
		{ "EAndroidXRFaceParameterIndices::Upper_Lip_Raiser_L", (int64)EAndroidXRFaceParameterIndices::Upper_Lip_Raiser_L },
		{ "EAndroidXRFaceParameterIndices::Upper_Lip_Raiser_R", (int64)EAndroidXRFaceParameterIndices::Upper_Lip_Raiser_R },
		{ "EAndroidXRFaceParameterIndices::Tongue_Out", (int64)EAndroidXRFaceParameterIndices::Tongue_Out },
		{ "EAndroidXRFaceParameterIndices::Tongue_Left", (int64)EAndroidXRFaceParameterIndices::Tongue_Left },
		{ "EAndroidXRFaceParameterIndices::Tongue_Right", (int64)EAndroidXRFaceParameterIndices::Tongue_Right },
		{ "EAndroidXRFaceParameterIndices::Tongue_Up", (int64)EAndroidXRFaceParameterIndices::Tongue_Up },
		{ "EAndroidXRFaceParameterIndices::Tongue_Down", (int64)EAndroidXRFaceParameterIndices::Tongue_Down },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXR_EAndroidXRFaceParameterIndices_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	"EAndroidXRFaceParameterIndices",
	"EAndroidXRFaceParameterIndices",
	Z_Construct_UEnum_AndroidXR_EAndroidXRFaceParameterIndices_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXRFaceParameterIndices_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXRFaceParameterIndices_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXR_EAndroidXRFaceParameterIndices_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRFaceParameterIndices()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRFaceParameterIndices.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAndroidXRFaceParameterIndices.InnerSingleton, Z_Construct_UEnum_AndroidXR_EAndroidXRFaceParameterIndices_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAndroidXRFaceParameterIndices.InnerSingleton;
}
// ********** End Enum EAndroidXRFaceParameterIndices **********************************************

// ********** Begin Enum EAndroidXRFaceTrackingConfidenceRegions ***********************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAndroidXRFaceTrackingConfidenceRegions;
static UEnum* EAndroidXRFaceTrackingConfidenceRegions_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRFaceTrackingConfidenceRegions.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAndroidXRFaceTrackingConfidenceRegions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXR_EAndroidXRFaceTrackingConfidenceRegions, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("EAndroidXRFaceTrackingConfidenceRegions"));
	}
	return Z_Registration_Info_UEnum_EAndroidXRFaceTrackingConfidenceRegions.OuterSingleton;
}
template<> ANDROIDXR_API UEnum* StaticEnum<EAndroidXRFaceTrackingConfidenceRegions>()
{
	return EAndroidXRFaceTrackingConfidenceRegions_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXR_EAndroidXRFaceTrackingConfidenceRegions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Left_Upper.Comment", "// Confidence corresponding to the left upper region.\n" },
		{ "Left_Upper.Name", "EAndroidXRFaceTrackingConfidenceRegions::Left_Upper" },
		{ "Left_Upper.ToolTip", "Confidence corresponding to the left upper region." },
		{ "Lower.Comment", "// Confidence corresponding to the lower region.\n" },
		{ "Lower.Name", "EAndroidXRFaceTrackingConfidenceRegions::Lower" },
		{ "Lower.ToolTip", "Confidence corresponding to the lower region." },
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
		{ "Right_Upper.Comment", "// Confidence corresponding to the right upper region.\n" },
		{ "Right_Upper.Name", "EAndroidXRFaceTrackingConfidenceRegions::Right_Upper" },
		{ "Right_Upper.ToolTip", "Confidence corresponding to the right upper region." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAndroidXRFaceTrackingConfidenceRegions::Lower", (int64)EAndroidXRFaceTrackingConfidenceRegions::Lower },
		{ "EAndroidXRFaceTrackingConfidenceRegions::Left_Upper", (int64)EAndroidXRFaceTrackingConfidenceRegions::Left_Upper },
		{ "EAndroidXRFaceTrackingConfidenceRegions::Right_Upper", (int64)EAndroidXRFaceTrackingConfidenceRegions::Right_Upper },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXR_EAndroidXRFaceTrackingConfidenceRegions_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	"EAndroidXRFaceTrackingConfidenceRegions",
	"EAndroidXRFaceTrackingConfidenceRegions",
	Z_Construct_UEnum_AndroidXR_EAndroidXRFaceTrackingConfidenceRegions_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXRFaceTrackingConfidenceRegions_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXRFaceTrackingConfidenceRegions_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXR_EAndroidXRFaceTrackingConfidenceRegions_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRFaceTrackingConfidenceRegions()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRFaceTrackingConfidenceRegions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAndroidXRFaceTrackingConfidenceRegions.InnerSingleton, Z_Construct_UEnum_AndroidXR_EAndroidXRFaceTrackingConfidenceRegions_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAndroidXRFaceTrackingConfidenceRegions.InnerSingleton;
}
// ********** End Enum EAndroidXRFaceTrackingConfidenceRegions *************************************

// ********** Begin ScriptStruct FAndroidXRFaceTracker *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAndroidXRFaceTracker;
class UScriptStruct* FAndroidXRFaceTracker::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRFaceTracker.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAndroidXRFaceTracker.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidXRFaceTracker, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("AndroidXRFaceTracker"));
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRFaceTracker.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAndroidXRFaceTracker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Contains opaque pointer to XrFaceTrackerANDROID.\n */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains opaque pointer to XrFaceTrackerANDROID." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidXRFaceTracker>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidXRFaceTracker_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	&NewStructOps,
	"AndroidXRFaceTracker",
	nullptr,
	0,
	sizeof(FAndroidXRFaceTracker),
	alignof(FAndroidXRFaceTracker),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRFaceTracker_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAndroidXRFaceTracker_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRFaceTracker()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRFaceTracker.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAndroidXRFaceTracker.InnerSingleton, Z_Construct_UScriptStruct_FAndroidXRFaceTracker_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRFaceTracker.InnerSingleton;
}
// ********** End ScriptStruct FAndroidXRFaceTracker ***********************************************

// ********** Begin ScriptStruct FAndroidXRFaceState ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAndroidXRFaceState;
class UScriptStruct* FAndroidXRFaceState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRFaceState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAndroidXRFaceState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidXRFaceState, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("AndroidXRFaceState"));
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRFaceState.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAndroidXRFaceState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The face tracking state and the facial expression blend shapes\n */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The face tracking state and the facial expression blend shapes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsValid_MetaData[] = {
		{ "Category", "AndroidXRFaceState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether the data is valid for the current frame or not\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the data is valid for the current frame or not" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceTrackingState_MetaData[] = {
		{ "Category", "AndroidXRFaceState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The validaty status of the face tracking\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The validaty status of the face tracking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleTime_MetaData[] = {
		{ "Category", "AndroidXRFaceState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The time at which the expressions were tracked\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The time at which the expressions were tracked" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "Category", "AndroidXRFaceState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The weights of facial expression blend shapes\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The weights of facial expression blend shapes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfidenceRegions_MetaData[] = {
		{ "Category", "AndroidXRFaceState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The confidence values for regions\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The confidence values for regions" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_IsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FaceTrackingState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FaceTrackingState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SampleTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Parameters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConfidenceRegions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConfidenceRegions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidXRFaceState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FAndroidXRFaceState_Statics::NewProp_IsValid_SetBit(void* Obj)
{
	((FAndroidXRFaceState*)Obj)->IsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAndroidXRFaceState_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAndroidXRFaceState), &Z_Construct_UScriptStruct_FAndroidXRFaceState_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsValid_MetaData), NewProp_IsValid_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAndroidXRFaceState_Statics::NewProp_FaceTrackingState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAndroidXRFaceState_Statics::NewProp_FaceTrackingState = { "FaceTrackingState", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRFaceState, FaceTrackingState), Z_Construct_UEnum_AndroidXR_EAndroidXRFaceTrackingState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceTrackingState_MetaData), NewProp_FaceTrackingState_MetaData) }; // 583747808
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRFaceState_Statics::NewProp_SampleTime = { "SampleTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRFaceState, SampleTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleTime_MetaData), NewProp_SampleTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAndroidXRFaceState_Statics::NewProp_Parameters_Inner = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAndroidXRFaceState_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRFaceState, Parameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAndroidXRFaceState_Statics::NewProp_ConfidenceRegions_Inner = { "ConfidenceRegions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAndroidXRFaceState_Statics::NewProp_ConfidenceRegions = { "ConfidenceRegions", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRFaceState, ConfidenceRegions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfidenceRegions_MetaData), NewProp_ConfidenceRegions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAndroidXRFaceState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRFaceState_Statics::NewProp_IsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRFaceState_Statics::NewProp_FaceTrackingState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRFaceState_Statics::NewProp_FaceTrackingState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRFaceState_Statics::NewProp_SampleTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRFaceState_Statics::NewProp_Parameters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRFaceState_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRFaceState_Statics::NewProp_ConfidenceRegions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRFaceState_Statics::NewProp_ConfidenceRegions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRFaceState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidXRFaceState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	&NewStructOps,
	"AndroidXRFaceState",
	Z_Construct_UScriptStruct_FAndroidXRFaceState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRFaceState_Statics::PropPointers),
	sizeof(FAndroidXRFaceState),
	alignof(FAndroidXRFaceState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRFaceState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAndroidXRFaceState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRFaceState()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRFaceState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAndroidXRFaceState.InnerSingleton, Z_Construct_UScriptStruct_FAndroidXRFaceState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRFaceState.InnerSingleton;
}
// ********** End ScriptStruct FAndroidXRFaceState *************************************************

// ********** Begin Enum EAndroidXRSceneMeshSemanticLabelSet ***************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAndroidXRSceneMeshSemanticLabelSet;
static UEnum* EAndroidXRSceneMeshSemanticLabelSet_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRSceneMeshSemanticLabelSet.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAndroidXRSceneMeshSemanticLabelSet.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXR_EAndroidXRSceneMeshSemanticLabelSet, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("EAndroidXRSceneMeshSemanticLabelSet"));
	}
	return Z_Registration_Info_UEnum_EAndroidXRSceneMeshSemanticLabelSet.OuterSingleton;
}
template<> ANDROIDXR_API UEnum* StaticEnum<EAndroidXRSceneMeshSemanticLabelSet>()
{
	return EAndroidXRSceneMeshSemanticLabelSet_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXR_EAndroidXRSceneMeshSemanticLabelSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Scene mesh semantic label set\n */" },
#endif
		{ "Default.Comment", "// Semantic label information is needed for the mesh\n" },
		{ "Default.Name", "EAndroidXRSceneMeshSemanticLabelSet::Default" },
		{ "Default.ToolTip", "Semantic label information is needed for the mesh" },
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
		{ "None.Comment", "// No semantic labels are needed for the mesh\n" },
		{ "None.Name", "EAndroidXRSceneMeshSemanticLabelSet::None" },
		{ "None.ToolTip", "No semantic labels are needed for the mesh" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scene mesh semantic label set" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAndroidXRSceneMeshSemanticLabelSet::None", (int64)EAndroidXRSceneMeshSemanticLabelSet::None },
		{ "EAndroidXRSceneMeshSemanticLabelSet::Default", (int64)EAndroidXRSceneMeshSemanticLabelSet::Default },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXR_EAndroidXRSceneMeshSemanticLabelSet_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	"EAndroidXRSceneMeshSemanticLabelSet",
	"EAndroidXRSceneMeshSemanticLabelSet",
	Z_Construct_UEnum_AndroidXR_EAndroidXRSceneMeshSemanticLabelSet_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXRSceneMeshSemanticLabelSet_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_EAndroidXRSceneMeshSemanticLabelSet_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXR_EAndroidXRSceneMeshSemanticLabelSet_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXR_EAndroidXRSceneMeshSemanticLabelSet()
{
	if (!Z_Registration_Info_UEnum_EAndroidXRSceneMeshSemanticLabelSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAndroidXRSceneMeshSemanticLabelSet.InnerSingleton, Z_Construct_UEnum_AndroidXR_EAndroidXRSceneMeshSemanticLabelSet_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAndroidXRSceneMeshSemanticLabelSet.InnerSingleton;
}
// ********** End Enum EAndroidXRSceneMeshSemanticLabelSet *****************************************

// ********** Begin Enum ESceneMeshSemanticLabel ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESceneMeshSemanticLabel;
static UEnum* ESceneMeshSemanticLabel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESceneMeshSemanticLabel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESceneMeshSemanticLabel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXR_ESceneMeshSemanticLabel, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("ESceneMeshSemanticLabel"));
	}
	return Z_Registration_Info_UEnum_ESceneMeshSemanticLabel.OuterSingleton;
}
template<> ANDROIDXR_API UEnum* StaticEnum<ESceneMeshSemanticLabel>()
{
	return ESceneMeshSemanticLabel_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXR_ESceneMeshSemanticLabel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Ceiling.Comment", "// This semantic indicates that the corresponding mesh element represents a ceiling.\n" },
		{ "Ceiling.Name", "ESceneMeshSemanticLabel::Ceiling" },
		{ "Ceiling.ToolTip", "This semantic indicates that the corresponding mesh element represents a ceiling." },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Scene mesh semantic label\n */" },
#endif
		{ "Floor.Comment", "// This semantic indicates that the corresponding mesh element represents a floor.\n" },
		{ "Floor.Name", "ESceneMeshSemanticLabel::Floor" },
		{ "Floor.ToolTip", "This semantic indicates that the corresponding mesh element represents a floor." },
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
		{ "Other.Comment", "// This semantic indicates that the corresponding mesh element represents an unknown object.\n" },
		{ "Other.Name", "ESceneMeshSemanticLabel::Other" },
		{ "Other.ToolTip", "This semantic indicates that the corresponding mesh element represents an unknown object." },
		{ "Table.Comment", "// This semantic indicates that the corresponding mesh element represents a table.\n" },
		{ "Table.Name", "ESceneMeshSemanticLabel::Table" },
		{ "Table.ToolTip", "This semantic indicates that the corresponding mesh element represents a table." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scene mesh semantic label" },
#endif
		{ "Wall.Comment", "// This semantic indicates that the corresponding mesh element represents a wall.\n" },
		{ "Wall.Name", "ESceneMeshSemanticLabel::Wall" },
		{ "Wall.ToolTip", "This semantic indicates that the corresponding mesh element represents a wall." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESceneMeshSemanticLabel::Other", (int64)ESceneMeshSemanticLabel::Other },
		{ "ESceneMeshSemanticLabel::Floor", (int64)ESceneMeshSemanticLabel::Floor },
		{ "ESceneMeshSemanticLabel::Ceiling", (int64)ESceneMeshSemanticLabel::Ceiling },
		{ "ESceneMeshSemanticLabel::Wall", (int64)ESceneMeshSemanticLabel::Wall },
		{ "ESceneMeshSemanticLabel::Table", (int64)ESceneMeshSemanticLabel::Table },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXR_ESceneMeshSemanticLabel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	"ESceneMeshSemanticLabel",
	"ESceneMeshSemanticLabel",
	Z_Construct_UEnum_AndroidXR_ESceneMeshSemanticLabel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_ESceneMeshSemanticLabel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_ESceneMeshSemanticLabel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXR_ESceneMeshSemanticLabel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXR_ESceneMeshSemanticLabel()
{
	if (!Z_Registration_Info_UEnum_ESceneMeshSemanticLabel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESceneMeshSemanticLabel.InnerSingleton, Z_Construct_UEnum_AndroidXR_ESceneMeshSemanticLabel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESceneMeshSemanticLabel.InnerSingleton;
}
// ********** End Enum ESceneMeshSemanticLabel *****************************************************

// ********** Begin Enum ESceneMeshTrackingState ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESceneMeshTrackingState;
static UEnum* ESceneMeshTrackingState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESceneMeshTrackingState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESceneMeshTrackingState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXR_ESceneMeshTrackingState, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("ESceneMeshTrackingState"));
	}
	return Z_Registration_Info_UEnum_ESceneMeshTrackingState.OuterSingleton;
}
template<> ANDROIDXR_API UEnum* StaticEnum<ESceneMeshTrackingState>()
{
	return ESceneMeshTrackingState_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXR_ESceneMeshTrackingState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Scene mesh tracking state\n */" },
#endif
		{ "Error.Comment", "// The internal tracker has not received valid measurements for multiple cycles and is in an error state.\n" },
		{ "Error.Name", "ESceneMeshTrackingState::Error" },
		{ "Error.ToolTip", "The internal tracker has not received valid measurements for multiple cycles and is in an error state." },
		{ "Initializing.Comment", "// The internal tracker is not yet ready to provide mesh data.\n" },
		{ "Initializing.Name", "ESceneMeshTrackingState::Initializing" },
		{ "Initializing.ToolTip", "The internal tracker is not yet ready to provide mesh data." },
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scene mesh tracking state" },
#endif
		{ "Tracking.Comment", "// The internal tracker is actively tracking.\n" },
		{ "Tracking.Name", "ESceneMeshTrackingState::Tracking" },
		{ "Tracking.ToolTip", "The internal tracker is actively tracking." },
		{ "Waiting.Comment", "// The internal tracker is waiting for valid measurements to integrate since the last mesh update.\n" },
		{ "Waiting.Name", "ESceneMeshTrackingState::Waiting" },
		{ "Waiting.ToolTip", "The internal tracker is waiting for valid measurements to integrate since the last mesh update." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESceneMeshTrackingState::Initializing", (int64)ESceneMeshTrackingState::Initializing },
		{ "ESceneMeshTrackingState::Tracking", (int64)ESceneMeshTrackingState::Tracking },
		{ "ESceneMeshTrackingState::Waiting", (int64)ESceneMeshTrackingState::Waiting },
		{ "ESceneMeshTrackingState::Error", (int64)ESceneMeshTrackingState::Error },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXR_ESceneMeshTrackingState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	"ESceneMeshTrackingState",
	"ESceneMeshTrackingState",
	Z_Construct_UEnum_AndroidXR_ESceneMeshTrackingState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_ESceneMeshTrackingState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXR_ESceneMeshTrackingState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXR_ESceneMeshTrackingState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXR_ESceneMeshTrackingState()
{
	if (!Z_Registration_Info_UEnum_ESceneMeshTrackingState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESceneMeshTrackingState.InnerSingleton, Z_Construct_UEnum_AndroidXR_ESceneMeshTrackingState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESceneMeshTrackingState.InnerSingleton;
}
// ********** End Enum ESceneMeshTrackingState *****************************************************

// ********** Begin ScriptStruct FAndroidXRSceneMeshingTracker *************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAndroidXRSceneMeshingTracker;
class UScriptStruct* FAndroidXRSceneMeshingTracker::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRSceneMeshingTracker.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAndroidXRSceneMeshingTracker.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidXRSceneMeshingTracker, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("AndroidXRSceneMeshingTracker"));
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRSceneMeshingTracker.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAndroidXRSceneMeshingTracker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Contains opaque pointer to an XrSceneMeshingTrackerANDROID\n * Also stores whether or not the tracker was created with normals,\n * so we know whether or not to supply storage\n */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains opaque pointer to an XrSceneMeshingTrackerANDROID\nAlso stores whether or not the tracker was created with normals,\nso we know whether or not to supply storage" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidXRSceneMeshingTracker>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidXRSceneMeshingTracker_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	&NewStructOps,
	"AndroidXRSceneMeshingTracker",
	nullptr,
	0,
	sizeof(FAndroidXRSceneMeshingTracker),
	alignof(FAndroidXRSceneMeshingTracker),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRSceneMeshingTracker_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAndroidXRSceneMeshingTracker_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRSceneMeshingTracker()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRSceneMeshingTracker.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAndroidXRSceneMeshingTracker.InnerSingleton, Z_Construct_UScriptStruct_FAndroidXRSceneMeshingTracker_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRSceneMeshingTracker.InnerSingleton;
}
// ********** End ScriptStruct FAndroidXRSceneMeshingTracker ***************************************

// ********** Begin ScriptStruct FAndroidXRSceneMeshSnapshot ***************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAndroidXRSceneMeshSnapshot;
class UScriptStruct* FAndroidXRSceneMeshSnapshot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRSceneMeshSnapshot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAndroidXRSceneMeshSnapshot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidXRSceneMeshSnapshot, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("AndroidXRSceneMeshSnapshot"));
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRSceneMeshSnapshot.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAndroidXRSceneMeshSnapshot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Contains opaque pointer to an XrSceneMeshSnapshotANDROID\n * Also stores whether or not the snapshot was created from\n * a tracker with normals enabled, so we don't have to also\n * pass the tracker around\n */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains opaque pointer to an XrSceneMeshSnapshotANDROID\nAlso stores whether or not the snapshot was created from\na tracker with normals enabled, so we don't have to also\npass the tracker around" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidXRSceneMeshSnapshot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidXRSceneMeshSnapshot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	&NewStructOps,
	"AndroidXRSceneMeshSnapshot",
	nullptr,
	0,
	sizeof(FAndroidXRSceneMeshSnapshot),
	alignof(FAndroidXRSceneMeshSnapshot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRSceneMeshSnapshot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAndroidXRSceneMeshSnapshot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRSceneMeshSnapshot()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRSceneMeshSnapshot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAndroidXRSceneMeshSnapshot.InnerSingleton, Z_Construct_UScriptStruct_FAndroidXRSceneMeshSnapshot_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRSceneMeshSnapshot.InnerSingleton;
}
// ********** End ScriptStruct FAndroidXRSceneMeshSnapshot *****************************************

// ********** Begin ScriptStruct FAndroidXRSceneSubmeshState ***************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAndroidXRSceneSubmeshState;
class UScriptStruct* FAndroidXRSceneSubmeshState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRSceneSubmeshState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAndroidXRSceneSubmeshState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshState, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("AndroidXRSceneSubmeshState"));
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRSceneSubmeshState.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The Scene submesh state\n */" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Scene submesh state" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubmeshId_MetaData[] = {
		{ "Category", "AndroidXRSceneSubmeshState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Id of the Submesh\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Id of the Submesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastUpdatedTimespan_MetaData[] = {
		{ "Category", "AndroidXRSceneSubmeshState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The last updated timespan for the submesh\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The last updated timespan for the submesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseInBaseSpace_MetaData[] = {
		{ "Category", "AndroidXRSceneSubmeshState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The pose of the submesh in base space\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The pose of the submesh in base space" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extents_MetaData[] = {
		{ "Category", "AndroidXRSceneSubmeshState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The extents of the submesh\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The extents of the submesh" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubmeshId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastUpdatedTimespan;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoseInBaseSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Extents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidXRSceneSubmeshState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshState_Statics::NewProp_SubmeshId = { "SubmeshId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRSceneSubmeshState, SubmeshId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubmeshId_MetaData), NewProp_SubmeshId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshState_Statics::NewProp_LastUpdatedTimespan = { "LastUpdatedTimespan", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRSceneSubmeshState, LastUpdatedTimespan), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastUpdatedTimespan_MetaData), NewProp_LastUpdatedTimespan_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshState_Statics::NewProp_PoseInBaseSpace = { "PoseInBaseSpace", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRSceneSubmeshState, PoseInBaseSpace), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseInBaseSpace_MetaData), NewProp_PoseInBaseSpace_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshState_Statics::NewProp_Extents = { "Extents", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRSceneSubmeshState, Extents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extents_MetaData), NewProp_Extents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshState_Statics::NewProp_SubmeshId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshState_Statics::NewProp_LastUpdatedTimespan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshState_Statics::NewProp_PoseInBaseSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshState_Statics::NewProp_Extents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	&NewStructOps,
	"AndroidXRSceneSubmeshState",
	Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshState_Statics::PropPointers),
	sizeof(FAndroidXRSceneSubmeshState),
	alignof(FAndroidXRSceneSubmeshState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshState()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRSceneSubmeshState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAndroidXRSceneSubmeshState.InnerSingleton, Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRSceneSubmeshState.InnerSingleton;
}
// ********** End ScriptStruct FAndroidXRSceneSubmeshState *****************************************

// ********** Begin ScriptStruct FAndroidXRSceneSubmeshData ****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAndroidXRSceneSubmeshData;
class UScriptStruct* FAndroidXRSceneSubmeshData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRSceneSubmeshData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAndroidXRSceneSubmeshData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshData, (UObject*)Z_Construct_UPackage__Script_AndroidXR(), TEXT("AndroidXRSceneSubmeshData"));
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRSceneSubmeshData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* The submesh data\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The submesh data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubmeshId_MetaData[] = {
		{ "Category", "AndroidXRSceneSubmeshData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Id of the submesh\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Id of the submesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexPositions_MetaData[] = {
		{ "Category", "AndroidXRSceneSubmeshData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The vertex positions of the submesh\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The vertex positions of the submesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexNormals_MetaData[] = {
		{ "Category", "AndroidXRSceneSubmeshData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The vertex normals of the submesh\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The vertex normals of the submesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexSemantics_MetaData[] = {
		{ "Category", "AndroidXRSceneSubmeshData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The vertex semantics of the submesh\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The vertex semantics of the submesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Indexes_MetaData[] = {
		{ "Category", "AndroidXRSceneSubmeshData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The indicies of the submesh\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXRTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The indicies of the submesh" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubmeshId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexPositions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexPositions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexNormals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexNormals;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VertexSemantics_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexSemantics;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Indexes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Indexes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidXRSceneSubmeshData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshData_Statics::NewProp_SubmeshId = { "SubmeshId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRSceneSubmeshData, SubmeshId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubmeshId_MetaData), NewProp_SubmeshId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshData_Statics::NewProp_VertexPositions_Inner = { "VertexPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshData_Statics::NewProp_VertexPositions = { "VertexPositions", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRSceneSubmeshData, VertexPositions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexPositions_MetaData), NewProp_VertexPositions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshData_Statics::NewProp_VertexNormals_Inner = { "VertexNormals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshData_Statics::NewProp_VertexNormals = { "VertexNormals", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRSceneSubmeshData, VertexNormals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexNormals_MetaData), NewProp_VertexNormals_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshData_Statics::NewProp_VertexSemantics_Inner = { "VertexSemantics", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshData_Statics::NewProp_VertexSemantics = { "VertexSemantics", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRSceneSubmeshData, VertexSemantics), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexSemantics_MetaData), NewProp_VertexSemantics_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshData_Statics::NewProp_Indexes_Inner = { "Indexes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshData_Statics::NewProp_Indexes = { "Indexes", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXRSceneSubmeshData, Indexes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Indexes_MetaData), NewProp_Indexes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshData_Statics::NewProp_SubmeshId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshData_Statics::NewProp_VertexPositions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshData_Statics::NewProp_VertexPositions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshData_Statics::NewProp_VertexNormals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshData_Statics::NewProp_VertexNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshData_Statics::NewProp_VertexSemantics_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshData_Statics::NewProp_VertexSemantics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshData_Statics::NewProp_Indexes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshData_Statics::NewProp_Indexes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXR,
	nullptr,
	&NewStructOps,
	"AndroidXRSceneSubmeshData",
	Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshData_Statics::PropPointers),
	sizeof(FAndroidXRSceneSubmeshData),
	alignof(FAndroidXRSceneSubmeshData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshData()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXRSceneSubmeshData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAndroidXRSceneSubmeshData.InnerSingleton, Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXRSceneSubmeshData.InnerSingleton;
}
// ********** End ScriptStruct FAndroidXRSceneSubmeshData ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXR_Public_AndroidXRTypes_h__Script_AndroidXR_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAndroidXRTrackableType_StaticEnum, TEXT("EAndroidXRTrackableType"), &Z_Registration_Info_UEnum_EAndroidXRTrackableType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 160846275U) },
		{ EAndroidXRTrackingState_StaticEnum, TEXT("EAndroidXRTrackingState"), &Z_Registration_Info_UEnum_EAndroidXRTrackingState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2331092526U) },
		{ EAndroidXRPlaneType_StaticEnum, TEXT("EAndroidXRPlaneType"), &Z_Registration_Info_UEnum_EAndroidXRPlaneType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3832835734U) },
		{ EAndroidXRPlaneLabel_StaticEnum, TEXT("EAndroidXRPlaneLabel"), &Z_Registration_Info_UEnum_EAndroidXRPlaneLabel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3523931115U) },
		{ EAndroidXRPassthroughCameraState_StaticEnum, TEXT("EAndroidXRPassthroughCameraState"), &Z_Registration_Info_UEnum_EAndroidXRPassthroughCameraState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 559067176U) },
		{ EAndroidXRPerformanceMetricsCounterFlags_StaticEnum, TEXT("EAndroidXRPerformanceMetricsCounterFlags"), &Z_Registration_Info_UEnum_EAndroidXRPerformanceMetricsCounterFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 739492887U) },
		{ EAndroidXRPerformanceMetricsCounterUnit_StaticEnum, TEXT("EAndroidXRPerformanceMetricsCounterUnit"), &Z_Registration_Info_UEnum_EAndroidXRPerformanceMetricsCounterUnit, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1664253347U) },
		{ EAndroidXRDepthCameraResolution_StaticEnum, TEXT("EAndroidXRDepthCameraResolution"), &Z_Registration_Info_UEnum_EAndroidXRDepthCameraResolution, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2846417938U) },
		{ EAndroidXRDepthSwapchainCreateFlag_StaticEnum, TEXT("EAndroidXRDepthSwapchainCreateFlag"), &Z_Registration_Info_UEnum_EAndroidXRDepthSwapchainCreateFlag, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2603938546U) },
		{ EAndroidXRPerfSettingsDomain_StaticEnum, TEXT("EAndroidXRPerfSettingsDomain"), &Z_Registration_Info_UEnum_EAndroidXRPerfSettingsDomain, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3600440092U) },
		{ EAndroidXRPerfSettingsSubDomain_StaticEnum, TEXT("EAndroidXRPerfSettingsSubDomain"), &Z_Registration_Info_UEnum_EAndroidXRPerfSettingsSubDomain, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2633529476U) },
		{ EAndroidXRPerfSettingsLevel_StaticEnum, TEXT("EAndroidXRPerfSettingsLevel"), &Z_Registration_Info_UEnum_EAndroidXRPerfSettingsLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3593975389U) },
		{ EAndroidXRPerfSettingsNotificationLevel_StaticEnum, TEXT("EAndroidXRPerfSettingsNotificationLevel"), &Z_Registration_Info_UEnum_EAndroidXRPerfSettingsNotificationLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 758341563U) },
		{ EAndroidXRAndroidThreadType_StaticEnum, TEXT("EAndroidXRAndroidThreadType"), &Z_Registration_Info_UEnum_EAndroidXRAndroidThreadType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2076852619U) },
		{ EOpenXRHandInteractionType_StaticEnum, TEXT("EOpenXRHandInteractionType"), &Z_Registration_Info_UEnum_EOpenXRHandInteractionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1815545537U) },
		{ EAndroidXREnvironmentBlendMode_StaticEnum, TEXT("EAndroidXREnvironmentBlendMode"), &Z_Registration_Info_UEnum_EAndroidXREnvironmentBlendMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3538382790U) },
		{ EAndroidXRFaceTrackingState_StaticEnum, TEXT("EAndroidXRFaceTrackingState"), &Z_Registration_Info_UEnum_EAndroidXRFaceTrackingState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 583747808U) },
		{ EAndroidXRFaceParameterIndices_StaticEnum, TEXT("EAndroidXRFaceParameterIndices"), &Z_Registration_Info_UEnum_EAndroidXRFaceParameterIndices, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2570161266U) },
		{ EAndroidXRFaceTrackingConfidenceRegions_StaticEnum, TEXT("EAndroidXRFaceTrackingConfidenceRegions"), &Z_Registration_Info_UEnum_EAndroidXRFaceTrackingConfidenceRegions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1423313424U) },
		{ EAndroidXRSceneMeshSemanticLabelSet_StaticEnum, TEXT("EAndroidXRSceneMeshSemanticLabelSet"), &Z_Registration_Info_UEnum_EAndroidXRSceneMeshSemanticLabelSet, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3108264534U) },
		{ ESceneMeshSemanticLabel_StaticEnum, TEXT("ESceneMeshSemanticLabel"), &Z_Registration_Info_UEnum_ESceneMeshSemanticLabel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3603004497U) },
		{ ESceneMeshTrackingState_StaticEnum, TEXT("ESceneMeshTrackingState"), &Z_Registration_Info_UEnum_ESceneMeshTrackingState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1507175967U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAndroidXRTrackable::StaticStruct, Z_Construct_UScriptStruct_FAndroidXRTrackable_Statics::NewStructOps, TEXT("AndroidXRTrackable"), &Z_Registration_Info_UScriptStruct_FAndroidXRTrackable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAndroidXRTrackable), 3607608211U) },
		{ FAndroidXRRaycastHit::StaticStruct, Z_Construct_UScriptStruct_FAndroidXRRaycastHit_Statics::NewStructOps, TEXT("AndroidXRRaycastHit"), &Z_Registration_Info_UScriptStruct_FAndroidXRRaycastHit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAndroidXRRaycastHit), 1631806076U) },
		{ FAndroidXRTrackableTracker::StaticStruct, Z_Construct_UScriptStruct_FAndroidXRTrackableTracker_Statics::NewStructOps, TEXT("AndroidXRTrackableTracker"), &Z_Registration_Info_UScriptStruct_FAndroidXRTrackableTracker, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAndroidXRTrackableTracker), 2921418092U) },
		{ FAndroidXRTrackablePlane::StaticStruct, Z_Construct_UScriptStruct_FAndroidXRTrackablePlane_Statics::NewStructOps, TEXT("AndroidXRTrackablePlane"), &Z_Registration_Info_UScriptStruct_FAndroidXRTrackablePlane, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAndroidXRTrackablePlane), 1988889438U) },
		{ FAndroidXRSpace::StaticStruct, Z_Construct_UScriptStruct_FAndroidXRSpace_Statics::NewStructOps, TEXT("AndroidXRSpace"), &Z_Registration_Info_UScriptStruct_FAndroidXRSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAndroidXRSpace), 1341678083U) },
		{ FAndroidXRPerformanceMetricsCounter::StaticStruct, Z_Construct_UScriptStruct_FAndroidXRPerformanceMetricsCounter_Statics::NewStructOps, TEXT("AndroidXRPerformanceMetricsCounter"), &Z_Registration_Info_UScriptStruct_FAndroidXRPerformanceMetricsCounter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAndroidXRPerformanceMetricsCounter), 4233078464U) },
		{ FAndroidXRDepthSwapchain::StaticStruct, Z_Construct_UScriptStruct_FAndroidXRDepthSwapchain_Statics::NewStructOps, TEXT("AndroidXRDepthSwapchain"), &Z_Registration_Info_UScriptStruct_FAndroidXRDepthSwapchain, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAndroidXRDepthSwapchain), 1959412716U) },
		{ FAndroidXRDepthSwapchainImage::StaticStruct, Z_Construct_UScriptStruct_FAndroidXRDepthSwapchainImage_Statics::NewStructOps, TEXT("AndroidXRDepthSwapchainImage"), &Z_Registration_Info_UScriptStruct_FAndroidXRDepthSwapchainImage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAndroidXRDepthSwapchainImage), 765442177U) },
		{ FAndroidXRFieldOfView::StaticStruct, Z_Construct_UScriptStruct_FAndroidXRFieldOfView_Statics::NewStructOps, TEXT("AndroidXRFieldOfView"), &Z_Registration_Info_UScriptStruct_FAndroidXRFieldOfView, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAndroidXRFieldOfView), 1730733844U) },
		{ FAndroidXRDepthView::StaticStruct, Z_Construct_UScriptStruct_FAndroidXRDepthView_Statics::NewStructOps, TEXT("AndroidXRDepthView"), &Z_Registration_Info_UScriptStruct_FAndroidXRDepthView, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAndroidXRDepthView), 577800069U) },
		{ FAndroidXRDepthAcquireResult::StaticStruct, Z_Construct_UScriptStruct_FAndroidXRDepthAcquireResult_Statics::NewStructOps, TEXT("AndroidXRDepthAcquireResult"), &Z_Registration_Info_UScriptStruct_FAndroidXRDepthAcquireResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAndroidXRDepthAcquireResult), 3215623939U) },
		{ FAndroidXRFaceTracker::StaticStruct, Z_Construct_UScriptStruct_FAndroidXRFaceTracker_Statics::NewStructOps, TEXT("AndroidXRFaceTracker"), &Z_Registration_Info_UScriptStruct_FAndroidXRFaceTracker, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAndroidXRFaceTracker), 773837539U) },
		{ FAndroidXRFaceState::StaticStruct, Z_Construct_UScriptStruct_FAndroidXRFaceState_Statics::NewStructOps, TEXT("AndroidXRFaceState"), &Z_Registration_Info_UScriptStruct_FAndroidXRFaceState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAndroidXRFaceState), 2513444597U) },
		{ FAndroidXRSceneMeshingTracker::StaticStruct, Z_Construct_UScriptStruct_FAndroidXRSceneMeshingTracker_Statics::NewStructOps, TEXT("AndroidXRSceneMeshingTracker"), &Z_Registration_Info_UScriptStruct_FAndroidXRSceneMeshingTracker, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAndroidXRSceneMeshingTracker), 1987802369U) },
		{ FAndroidXRSceneMeshSnapshot::StaticStruct, Z_Construct_UScriptStruct_FAndroidXRSceneMeshSnapshot_Statics::NewStructOps, TEXT("AndroidXRSceneMeshSnapshot"), &Z_Registration_Info_UScriptStruct_FAndroidXRSceneMeshSnapshot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAndroidXRSceneMeshSnapshot), 1006925503U) },
		{ FAndroidXRSceneSubmeshState::StaticStruct, Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshState_Statics::NewStructOps, TEXT("AndroidXRSceneSubmeshState"), &Z_Registration_Info_UScriptStruct_FAndroidXRSceneSubmeshState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAndroidXRSceneSubmeshState), 3691295063U) },
		{ FAndroidXRSceneSubmeshData::StaticStruct, Z_Construct_UScriptStruct_FAndroidXRSceneSubmeshData_Statics::NewStructOps, TEXT("AndroidXRSceneSubmeshData"), &Z_Registration_Info_UScriptStruct_FAndroidXRSceneSubmeshData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAndroidXRSceneSubmeshData), 2166744783U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXR_Public_AndroidXRTypes_h__Script_AndroidXR_2513395252(TEXT("/Script/AndroidXR"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXR_Public_AndroidXRTypes_h__Script_AndroidXR_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXR_Public_AndroidXRTypes_h__Script_AndroidXR_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXR_Public_AndroidXRTypes_h__Script_AndroidXR_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXR_Source_AndroidXR_Public_AndroidXRTypes_h__Script_AndroidXR_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
