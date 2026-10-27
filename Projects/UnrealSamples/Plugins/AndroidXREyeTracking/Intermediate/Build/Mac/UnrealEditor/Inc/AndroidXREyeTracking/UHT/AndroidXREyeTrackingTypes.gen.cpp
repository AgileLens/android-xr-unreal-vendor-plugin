// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidXREyeTrackingTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAndroidXREyeTrackingTypes() {}

// ********** Begin Cross Module References ********************************************************
ANDROIDXREYETRACKING_API UEnum* Z_Construct_UEnum_AndroidXREyeTracking_EAndroidXREyeIndex();
ANDROIDXREYETRACKING_API UEnum* Z_Construct_UEnum_AndroidXREyeTracking_EAndroidXREyeState();
ANDROIDXREYETRACKING_API UEnum* Z_Construct_UEnum_AndroidXREyeTracking_EAndroidXREyeTrackingMode();
ANDROIDXREYETRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXREye();
ANDROIDXREYETRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXREyes();
ANDROIDXREYETRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidXREyeTracker();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
UPackage* Z_Construct_UPackage__Script_AndroidXREyeTracking();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EAndroidXREyeIndex ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAndroidXREyeIndex;
static UEnum* EAndroidXREyeIndex_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAndroidXREyeIndex.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAndroidXREyeIndex.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXREyeTracking_EAndroidXREyeIndex, (UObject*)Z_Construct_UPackage__Script_AndroidXREyeTracking(), TEXT("EAndroidXREyeIndex"));
	}
	return Z_Registration_Info_UEnum_EAndroidXREyeIndex.OuterSingleton;
}
template<> ANDROIDXREYETRACKING_API UEnum* StaticEnum<EAndroidXREyeIndex>()
{
	return EAndroidXREyeIndex_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXREyeTracking_EAndroidXREyeIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* The index of the eye\n*/" },
#endif
		{ "Left.Comment", "// Left Eye Index\n" },
		{ "Left.Name", "EAndroidXREyeIndex::Left" },
		{ "Left.ToolTip", "Left Eye Index" },
		{ "ModuleRelativePath", "Public/AndroidXREyeTrackingTypes.h" },
		{ "Right.Comment", "// Right Eye Index\n" },
		{ "Right.Name", "EAndroidXREyeIndex::Right" },
		{ "Right.ToolTip", "Right Eye Index" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The index of the eye" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAndroidXREyeIndex::Left", (int64)EAndroidXREyeIndex::Left },
		{ "EAndroidXREyeIndex::Right", (int64)EAndroidXREyeIndex::Right },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXREyeTracking_EAndroidXREyeIndex_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXREyeTracking,
	nullptr,
	"EAndroidXREyeIndex",
	"EAndroidXREyeIndex",
	Z_Construct_UEnum_AndroidXREyeTracking_EAndroidXREyeIndex_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXREyeTracking_EAndroidXREyeIndex_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXREyeTracking_EAndroidXREyeIndex_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXREyeTracking_EAndroidXREyeIndex_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXREyeTracking_EAndroidXREyeIndex()
{
	if (!Z_Registration_Info_UEnum_EAndroidXREyeIndex.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAndroidXREyeIndex.InnerSingleton, Z_Construct_UEnum_AndroidXREyeTracking_EAndroidXREyeIndex_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAndroidXREyeIndex.InnerSingleton;
}
// ********** End Enum EAndroidXREyeIndex **********************************************************

// ********** Begin Enum EAndroidXREyeState ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAndroidXREyeState;
static UEnum* EAndroidXREyeState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAndroidXREyeState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAndroidXREyeState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXREyeTracking_EAndroidXREyeState, (UObject*)Z_Construct_UPackage__Script_AndroidXREyeTracking(), TEXT("EAndroidXREyeState"));
	}
	return Z_Registration_Info_UEnum_EAndroidXREyeState.OuterSingleton;
}
template<> ANDROIDXREYETRACKING_API UEnum* StaticEnum<EAndroidXREyeState>()
{
	return EAndroidXREyeState_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXREyeTracking_EAndroidXREyeState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* The state of the eye data\n*/" },
#endif
		{ "Gazing.Comment", "// The eye is gazing\n" },
		{ "Gazing.Name", "EAndroidXREyeState::Gazing" },
		{ "Gazing.ToolTip", "The eye is gazing" },
		{ "Invalid.Comment", "// The eye data is invalid\n" },
		{ "Invalid.Name", "EAndroidXREyeState::Invalid" },
		{ "Invalid.ToolTip", "The eye data is invalid" },
		{ "ModuleRelativePath", "Public/AndroidXREyeTrackingTypes.h" },
		{ "Shut.Comment", "// The eye is shut\n" },
		{ "Shut.Name", "EAndroidXREyeState::Shut" },
		{ "Shut.ToolTip", "The eye is shut" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The state of the eye data" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAndroidXREyeState::Invalid", (int64)EAndroidXREyeState::Invalid },
		{ "EAndroidXREyeState::Gazing", (int64)EAndroidXREyeState::Gazing },
		{ "EAndroidXREyeState::Shut", (int64)EAndroidXREyeState::Shut },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXREyeTracking_EAndroidXREyeState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXREyeTracking,
	nullptr,
	"EAndroidXREyeState",
	"EAndroidXREyeState",
	Z_Construct_UEnum_AndroidXREyeTracking_EAndroidXREyeState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXREyeTracking_EAndroidXREyeState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXREyeTracking_EAndroidXREyeState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXREyeTracking_EAndroidXREyeState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXREyeTracking_EAndroidXREyeState()
{
	if (!Z_Registration_Info_UEnum_EAndroidXREyeState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAndroidXREyeState.InnerSingleton, Z_Construct_UEnum_AndroidXREyeTracking_EAndroidXREyeState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAndroidXREyeState.InnerSingleton;
}
// ********** End Enum EAndroidXREyeState **********************************************************

// ********** Begin Enum EAndroidXREyeTrackingMode *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAndroidXREyeTrackingMode;
static UEnum* EAndroidXREyeTrackingMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAndroidXREyeTrackingMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAndroidXREyeTrackingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidXREyeTracking_EAndroidXREyeTrackingMode, (UObject*)Z_Construct_UPackage__Script_AndroidXREyeTracking(), TEXT("EAndroidXREyeTrackingMode"));
	}
	return Z_Registration_Info_UEnum_EAndroidXREyeTrackingMode.OuterSingleton;
}
template<> ANDROIDXREYETRACKING_API UEnum* StaticEnum<EAndroidXREyeTrackingMode>()
{
	return EAndroidXREyeTrackingMode_StaticEnum();
}
struct Z_Construct_UEnum_AndroidXREyeTracking_EAndroidXREyeTrackingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Both.Comment", "// Both eyes are being tracked\n" },
		{ "Both.Name", "EAndroidXREyeTrackingMode::Both" },
		{ "Both.ToolTip", "Both eyes are being tracked" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* The eye tracking mode\n*/" },
#endif
		{ "Left.Comment", "// The left eye is being tracked\n" },
		{ "Left.Name", "EAndroidXREyeTrackingMode::Left" },
		{ "Left.ToolTip", "The left eye is being tracked" },
		{ "ModuleRelativePath", "Public/AndroidXREyeTrackingTypes.h" },
		{ "Not_Tracking.Comment", "// Eyes are not being tracked\n" },
		{ "Not_Tracking.Name", "EAndroidXREyeTrackingMode::Not_Tracking" },
		{ "Not_Tracking.ToolTip", "Eyes are not being tracked" },
		{ "Right.Comment", "// The right eye is being tracked\n" },
		{ "Right.Name", "EAndroidXREyeTrackingMode::Right" },
		{ "Right.ToolTip", "The right eye is being tracked" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The eye tracking mode" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAndroidXREyeTrackingMode::Not_Tracking", (int64)EAndroidXREyeTrackingMode::Not_Tracking },
		{ "EAndroidXREyeTrackingMode::Right", (int64)EAndroidXREyeTrackingMode::Right },
		{ "EAndroidXREyeTrackingMode::Left", (int64)EAndroidXREyeTrackingMode::Left },
		{ "EAndroidXREyeTrackingMode::Both", (int64)EAndroidXREyeTrackingMode::Both },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidXREyeTracking_EAndroidXREyeTrackingMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidXREyeTracking,
	nullptr,
	"EAndroidXREyeTrackingMode",
	"EAndroidXREyeTrackingMode",
	Z_Construct_UEnum_AndroidXREyeTracking_EAndroidXREyeTrackingMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXREyeTracking_EAndroidXREyeTrackingMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidXREyeTracking_EAndroidXREyeTrackingMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidXREyeTracking_EAndroidXREyeTrackingMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidXREyeTracking_EAndroidXREyeTrackingMode()
{
	if (!Z_Registration_Info_UEnum_EAndroidXREyeTrackingMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAndroidXREyeTrackingMode.InnerSingleton, Z_Construct_UEnum_AndroidXREyeTracking_EAndroidXREyeTrackingMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAndroidXREyeTrackingMode.InnerSingleton;
}
// ********** End Enum EAndroidXREyeTrackingMode ***************************************************

// ********** Begin ScriptStruct FAndroidXREyeTracker **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAndroidXREyeTracker;
class UScriptStruct* FAndroidXREyeTracker::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXREyeTracker.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAndroidXREyeTracker.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidXREyeTracker, (UObject*)Z_Construct_UPackage__Script_AndroidXREyeTracking(), TEXT("AndroidXREyeTracker"));
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXREyeTracker.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAndroidXREyeTracker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Represents an eye tracker\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXREyeTrackingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents an eye tracker" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidXREyeTracker>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidXREyeTracker_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXREyeTracking,
	nullptr,
	&NewStructOps,
	"AndroidXREyeTracker",
	nullptr,
	0,
	sizeof(FAndroidXREyeTracker),
	alignof(FAndroidXREyeTracker),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXREyeTracker_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAndroidXREyeTracker_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAndroidXREyeTracker()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXREyeTracker.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAndroidXREyeTracker.InnerSingleton, Z_Construct_UScriptStruct_FAndroidXREyeTracker_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXREyeTracker.InnerSingleton;
}
// ********** End ScriptStruct FAndroidXREyeTracker ************************************************

// ********** Begin ScriptStruct FAndroidXREye *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAndroidXREye;
class UScriptStruct* FAndroidXREye::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXREye.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAndroidXREye.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidXREye, (UObject*)Z_Construct_UPackage__Script_AndroidXREyeTracking(), TEXT("AndroidXREye"));
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXREye.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAndroidXREye_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* An eye data obtained from eye tracking\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXREyeTrackingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An eye data obtained from eye tracking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EyeState_MetaData[] = {
		{ "Category", "AndroidXR|Eye Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The state of the eye\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXREyeTrackingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The state of the eye" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "AndroidXR|Eye Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The transform of the eye\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXREyeTrackingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The transform of the eye" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EyeState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EyeState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidXREye>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAndroidXREye_Statics::NewProp_EyeState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAndroidXREye_Statics::NewProp_EyeState = { "EyeState", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXREye, EyeState), Z_Construct_UEnum_AndroidXREyeTracking_EAndroidXREyeState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EyeState_MetaData), NewProp_EyeState_MetaData) }; // 519896838
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXREye_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXREye, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAndroidXREye_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXREye_Statics::NewProp_EyeState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXREye_Statics::NewProp_EyeState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXREye_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXREye_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidXREye_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXREyeTracking,
	nullptr,
	&NewStructOps,
	"AndroidXREye",
	Z_Construct_UScriptStruct_FAndroidXREye_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXREye_Statics::PropPointers),
	sizeof(FAndroidXREye),
	alignof(FAndroidXREye),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXREye_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAndroidXREye_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAndroidXREye()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXREye.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAndroidXREye.InnerSingleton, Z_Construct_UScriptStruct_FAndroidXREye_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXREye.InnerSingleton;
}
// ********** End ScriptStruct FAndroidXREye *******************************************************

// ********** Begin ScriptStruct FAndroidXREyes ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAndroidXREyes;
class UScriptStruct* FAndroidXREyes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXREyes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAndroidXREyes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidXREyes, (UObject*)Z_Construct_UPackage__Script_AndroidXREyeTracking(), TEXT("AndroidXREyes"));
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXREyes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAndroidXREyes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* The eyes data obtained from eye tracking\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXREyeTrackingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The eyes data obtained from eye tracking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Eyes_MetaData[] = {
		{ "Category", "AndroidXR|Eye Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// All the obtained eye data\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXREyeTrackingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All the obtained eye data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "AndroidXR|Eye Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The tracking mode of the eyes\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidXREyeTrackingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The tracking mode of the eyes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Eyes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Eyes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidXREyes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAndroidXREyes_Statics::NewProp_Eyes_Inner = { "Eyes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAndroidXREye, METADATA_PARAMS(0, nullptr) }; // 4044627430
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAndroidXREyes_Statics::NewProp_Eyes = { "Eyes", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXREyes, Eyes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Eyes_MetaData), NewProp_Eyes_MetaData) }; // 4044627430
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAndroidXREyes_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAndroidXREyes_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAndroidXREyes, Mode), Z_Construct_UEnum_AndroidXREyeTracking_EAndroidXREyeTrackingMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 3214497974
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAndroidXREyes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXREyes_Statics::NewProp_Eyes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXREyes_Statics::NewProp_Eyes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXREyes_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidXREyes_Statics::NewProp_Mode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXREyes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidXREyes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidXREyeTracking,
	nullptr,
	&NewStructOps,
	"AndroidXREyes",
	Z_Construct_UScriptStruct_FAndroidXREyes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXREyes_Statics::PropPointers),
	sizeof(FAndroidXREyes),
	alignof(FAndroidXREyes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidXREyes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAndroidXREyes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAndroidXREyes()
{
	if (!Z_Registration_Info_UScriptStruct_FAndroidXREyes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAndroidXREyes.InnerSingleton, Z_Construct_UScriptStruct_FAndroidXREyes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAndroidXREyes.InnerSingleton;
}
// ********** End ScriptStruct FAndroidXREyes ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXREyeTracking_Source_AndroidXREyeTracking_Public_AndroidXREyeTrackingTypes_h__Script_AndroidXREyeTracking_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAndroidXREyeIndex_StaticEnum, TEXT("EAndroidXREyeIndex"), &Z_Registration_Info_UEnum_EAndroidXREyeIndex, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1771742669U) },
		{ EAndroidXREyeState_StaticEnum, TEXT("EAndroidXREyeState"), &Z_Registration_Info_UEnum_EAndroidXREyeState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 519896838U) },
		{ EAndroidXREyeTrackingMode_StaticEnum, TEXT("EAndroidXREyeTrackingMode"), &Z_Registration_Info_UEnum_EAndroidXREyeTrackingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3214497974U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAndroidXREyeTracker::StaticStruct, Z_Construct_UScriptStruct_FAndroidXREyeTracker_Statics::NewStructOps, TEXT("AndroidXREyeTracker"), &Z_Registration_Info_UScriptStruct_FAndroidXREyeTracker, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAndroidXREyeTracker), 2116009469U) },
		{ FAndroidXREye::StaticStruct, Z_Construct_UScriptStruct_FAndroidXREye_Statics::NewStructOps, TEXT("AndroidXREye"), &Z_Registration_Info_UScriptStruct_FAndroidXREye, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAndroidXREye), 4044627430U) },
		{ FAndroidXREyes::StaticStruct, Z_Construct_UScriptStruct_FAndroidXREyes_Statics::NewStructOps, TEXT("AndroidXREyes"), &Z_Registration_Info_UScriptStruct_FAndroidXREyes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAndroidXREyes), 1457270145U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXREyeTracking_Source_AndroidXREyeTracking_Public_AndroidXREyeTrackingTypes_h__Script_AndroidXREyeTracking_3982357672(TEXT("/Script/AndroidXREyeTracking"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXREyeTracking_Source_AndroidXREyeTracking_Public_AndroidXREyeTrackingTypes_h__Script_AndroidXREyeTracking_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXREyeTracking_Source_AndroidXREyeTracking_Public_AndroidXREyeTrackingTypes_h__Script_AndroidXREyeTracking_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXREyeTracking_Source_AndroidXREyeTracking_Public_AndroidXREyeTrackingTypes_h__Script_AndroidXREyeTracking_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_AndroidXREyeTracking_Source_AndroidXREyeTracking_Public_AndroidXREyeTrackingTypes_h__Script_AndroidXREyeTracking_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
