// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GamepadMotionSensorsSubsystem.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGamepadMotionSensorsSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
GAMEPADMOTIONSENSORS_API UClass* Z_Construct_UClass_UGamepadMotionSensorsSubsystem();
GAMEPADMOTIONSENSORS_API UClass* Z_Construct_UClass_UGamepadMotionSensorsSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_GamepadMotionSensors();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGamepadMotionSensorsSubsystem Function GetAcceleration ******************
struct Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetAcceleration_Statics
{
	struct GamepadMotionSensorsSubsystem_eventGetAcceleration_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gamepad Motion Sensors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Raw acceleration in m/s^2, including gravity. */" },
#endif
		{ "ModuleRelativePath", "Public/GamepadMotionSensorsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Raw acceleration in m/s^2, including gravity." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetAcceleration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GamepadMotionSensorsSubsystem_eventGetAcceleration_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetAcceleration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetAcceleration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetAcceleration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetAcceleration_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGamepadMotionSensorsSubsystem, nullptr, "GetAcceleration", Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetAcceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetAcceleration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetAcceleration_Statics::GamepadMotionSensorsSubsystem_eventGetAcceleration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetAcceleration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetAcceleration_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetAcceleration_Statics::GamepadMotionSensorsSubsystem_eventGetAcceleration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetAcceleration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetAcceleration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGamepadMotionSensorsSubsystem::execGetAcceleration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetAcceleration();
	P_NATIVE_END;
}
// ********** End Class UGamepadMotionSensorsSubsystem Function GetAcceleration ********************

// ********** Begin Class UGamepadMotionSensorsSubsystem Function GetAngularVelocity ***************
struct Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetAngularVelocity_Statics
{
	struct GamepadMotionSensorsSubsystem_eventGetAngularVelocity_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gamepad Motion Sensors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Raw angular velocity in radians/second, per controller axis. */" },
#endif
		{ "ModuleRelativePath", "Public/GamepadMotionSensorsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Raw angular velocity in radians/second, per controller axis." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetAngularVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GamepadMotionSensorsSubsystem_eventGetAngularVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetAngularVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetAngularVelocity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetAngularVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetAngularVelocity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGamepadMotionSensorsSubsystem, nullptr, "GetAngularVelocity", Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetAngularVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetAngularVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetAngularVelocity_Statics::GamepadMotionSensorsSubsystem_eventGetAngularVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetAngularVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetAngularVelocity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetAngularVelocity_Statics::GamepadMotionSensorsSubsystem_eventGetAngularVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetAngularVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetAngularVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGamepadMotionSensorsSubsystem::execGetAngularVelocity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetAngularVelocity();
	P_NATIVE_END;
}
// ********** End Class UGamepadMotionSensorsSubsystem Function GetAngularVelocity *****************

// ********** Begin Class UGamepadMotionSensorsSubsystem Function GetBatteryLevel ******************
struct Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetBatteryLevel_Statics
{
	struct GamepadMotionSensorsSubsystem_eventGetBatteryLevel_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gamepad Motion Sensors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Battery charge of the attached controller, 0..1. Returns -1 when the\n     * device does not report one, or when nothing is attached.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GamepadMotionSensorsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Battery charge of the attached controller, 0..1. Returns -1 when the\ndevice does not report one, or when nothing is attached." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetBatteryLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GamepadMotionSensorsSubsystem_eventGetBatteryLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetBatteryLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetBatteryLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetBatteryLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetBatteryLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGamepadMotionSensorsSubsystem, nullptr, "GetBatteryLevel", Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetBatteryLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetBatteryLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetBatteryLevel_Statics::GamepadMotionSensorsSubsystem_eventGetBatteryLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetBatteryLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetBatteryLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetBatteryLevel_Statics::GamepadMotionSensorsSubsystem_eventGetBatteryLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetBatteryLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetBatteryLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGamepadMotionSensorsSubsystem::execGetBatteryLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetBatteryLevel();
	P_NATIVE_END;
}
// ********** End Class UGamepadMotionSensorsSubsystem Function GetBatteryLevel ********************

// ********** Begin Class UGamepadMotionSensorsSubsystem Function GetDeviceName ********************
struct Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetDeviceName_Statics
{
	struct GamepadMotionSensorsSubsystem_eventGetDeviceName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gamepad Motion Sensors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the attached device, e.g. \"DualSense Wireless Controller\". */" },
#endif
		{ "ModuleRelativePath", "Public/GamepadMotionSensorsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the attached device, e.g. \"DualSense Wireless Controller\"." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetDeviceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GamepadMotionSensorsSubsystem_eventGetDeviceName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetDeviceName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetDeviceName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetDeviceName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetDeviceName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGamepadMotionSensorsSubsystem, nullptr, "GetDeviceName", Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetDeviceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetDeviceName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetDeviceName_Statics::GamepadMotionSensorsSubsystem_eventGetDeviceName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetDeviceName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetDeviceName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetDeviceName_Statics::GamepadMotionSensorsSubsystem_eventGetDeviceName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetDeviceName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetDeviceName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGamepadMotionSensorsSubsystem::execGetDeviceName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetDeviceName();
	P_NATIVE_END;
}
// ********** End Class UGamepadMotionSensorsSubsystem Function GetDeviceName **********************

// ********** Begin Class UGamepadMotionSensorsSubsystem Function GetOrientation *******************
struct Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetOrientation_Statics
{
	struct GamepadMotionSensorsSubsystem_eventGetOrientation_Parms
	{
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gamepad Motion Sensors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Integrated orientation of the controller. Identity until recentered. */" },
#endif
		{ "ModuleRelativePath", "Public/GamepadMotionSensorsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Integrated orientation of the controller. Identity until recentered." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetOrientation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GamepadMotionSensorsSubsystem_eventGetOrientation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetOrientation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetOrientation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetOrientation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetOrientation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGamepadMotionSensorsSubsystem, nullptr, "GetOrientation", Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetOrientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetOrientation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetOrientation_Statics::GamepadMotionSensorsSubsystem_eventGetOrientation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetOrientation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetOrientation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetOrientation_Statics::GamepadMotionSensorsSubsystem_eventGetOrientation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetOrientation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetOrientation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGamepadMotionSensorsSubsystem::execGetOrientation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetOrientation();
	P_NATIVE_END;
}
// ********** End Class UGamepadMotionSensorsSubsystem Function GetOrientation *********************

// ********** Begin Class UGamepadMotionSensorsSubsystem Function GetOrientationQuat ***************
struct Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetOrientationQuat_Statics
{
	struct GamepadMotionSensorsSubsystem_eventGetOrientationQuat_Parms
	{
		FQuat ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gamepad Motion Sensors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Integrated orientation as a quaternion. */" },
#endif
		{ "ModuleRelativePath", "Public/GamepadMotionSensorsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Integrated orientation as a quaternion." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetOrientationQuat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GamepadMotionSensorsSubsystem_eventGetOrientationQuat_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetOrientationQuat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetOrientationQuat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetOrientationQuat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetOrientationQuat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGamepadMotionSensorsSubsystem, nullptr, "GetOrientationQuat", Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetOrientationQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetOrientationQuat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetOrientationQuat_Statics::GamepadMotionSensorsSubsystem_eventGetOrientationQuat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetOrientationQuat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetOrientationQuat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetOrientationQuat_Statics::GamepadMotionSensorsSubsystem_eventGetOrientationQuat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetOrientationQuat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetOrientationQuat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGamepadMotionSensorsSubsystem::execGetOrientationQuat)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FQuat*)Z_Param__Result=P_THIS->GetOrientationQuat();
	P_NATIVE_END;
}
// ********** End Class UGamepadMotionSensorsSubsystem Function GetOrientationQuat *****************

// ********** Begin Class UGamepadMotionSensorsSubsystem Function GetSampleRateHz ******************
struct Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetSampleRateHz_Statics
{
	struct GamepadMotionSensorsSubsystem_eventGetSampleRateHz_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gamepad Motion Sensors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Measured delivery rate of gyroscope samples, in Hz. */" },
#endif
		{ "ModuleRelativePath", "Public/GamepadMotionSensorsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Measured delivery rate of gyroscope samples, in Hz." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetSampleRateHz_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GamepadMotionSensorsSubsystem_eventGetSampleRateHz_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetSampleRateHz_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetSampleRateHz_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetSampleRateHz_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetSampleRateHz_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGamepadMotionSensorsSubsystem, nullptr, "GetSampleRateHz", Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetSampleRateHz_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetSampleRateHz_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetSampleRateHz_Statics::GamepadMotionSensorsSubsystem_eventGetSampleRateHz_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetSampleRateHz_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetSampleRateHz_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetSampleRateHz_Statics::GamepadMotionSensorsSubsystem_eventGetSampleRateHz_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetSampleRateHz()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetSampleRateHz_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGamepadMotionSensorsSubsystem::execGetSampleRateHz)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSampleRateHz();
	P_NATIVE_END;
}
// ********** End Class UGamepadMotionSensorsSubsystem Function GetSampleRateHz ********************

// ********** Begin Class UGamepadMotionSensorsSubsystem Function IsAvailable **********************
struct Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_IsAvailable_Statics
{
	struct GamepadMotionSensorsSubsystem_eventIsAvailable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gamepad Motion Sensors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** True once a gamepad with a gyroscope has been attached. */" },
#endif
		{ "ModuleRelativePath", "Public/GamepadMotionSensorsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True once a gamepad with a gyroscope has been attached." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_IsAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GamepadMotionSensorsSubsystem_eventIsAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_IsAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GamepadMotionSensorsSubsystem_eventIsAvailable_Parms), &Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_IsAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_IsAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_IsAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_IsAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_IsAvailable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGamepadMotionSensorsSubsystem, nullptr, "IsAvailable", Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_IsAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_IsAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_IsAvailable_Statics::GamepadMotionSensorsSubsystem_eventIsAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_IsAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_IsAvailable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_IsAvailable_Statics::GamepadMotionSensorsSubsystem_eventIsAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_IsAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_IsAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGamepadMotionSensorsSubsystem::execIsAvailable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAvailable();
	P_NATIVE_END;
}
// ********** End Class UGamepadMotionSensorsSubsystem Function IsAvailable ************************

// ********** Begin Class UGamepadMotionSensorsSubsystem Function Recenter *************************
struct Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_Recenter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gamepad Motion Sensors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Resets orientation to identity. Bind this to a button. */" },
#endif
		{ "ModuleRelativePath", "Public/GamepadMotionSensorsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resets orientation to identity. Bind this to a button." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_Recenter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGamepadMotionSensorsSubsystem, nullptr, "Recenter", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_Recenter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_Recenter_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_Recenter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_Recenter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGamepadMotionSensorsSubsystem::execRecenter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Recenter();
	P_NATIVE_END;
}
// ********** End Class UGamepadMotionSensorsSubsystem Function Recenter ***************************

// ********** Begin Class UGamepadMotionSensorsSubsystem Function StartGamepadMotion ***************
struct Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_StartGamepadMotion_Statics
{
	struct GamepadMotionSensorsSubsystem_eventStartGamepadMotion_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gamepad Motion Sensors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Attaches to the first connected input device that exposes a gyroscope.\n     * Safe to call repeatedly -- returns true if already attached. Call again\n     * after a controller reconnects.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GamepadMotionSensorsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attaches to the first connected input device that exposes a gyroscope.\nSafe to call repeatedly -- returns true if already attached. Call again\nafter a controller reconnects." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_StartGamepadMotion_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GamepadMotionSensorsSubsystem_eventStartGamepadMotion_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_StartGamepadMotion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GamepadMotionSensorsSubsystem_eventStartGamepadMotion_Parms), &Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_StartGamepadMotion_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_StartGamepadMotion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_StartGamepadMotion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_StartGamepadMotion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_StartGamepadMotion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGamepadMotionSensorsSubsystem, nullptr, "StartGamepadMotion", Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_StartGamepadMotion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_StartGamepadMotion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_StartGamepadMotion_Statics::GamepadMotionSensorsSubsystem_eventStartGamepadMotion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_StartGamepadMotion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_StartGamepadMotion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_StartGamepadMotion_Statics::GamepadMotionSensorsSubsystem_eventStartGamepadMotion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_StartGamepadMotion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_StartGamepadMotion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGamepadMotionSensorsSubsystem::execStartGamepadMotion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StartGamepadMotion();
	P_NATIVE_END;
}
// ********** End Class UGamepadMotionSensorsSubsystem Function StartGamepadMotion *****************

// ********** Begin Class UGamepadMotionSensorsSubsystem Function StopGamepadMotion ****************
struct Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_StopGamepadMotion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gamepad Motion Sensors" },
		{ "ModuleRelativePath", "Public/GamepadMotionSensorsSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_StopGamepadMotion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGamepadMotionSensorsSubsystem, nullptr, "StopGamepadMotion", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_StopGamepadMotion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_StopGamepadMotion_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_StopGamepadMotion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_StopGamepadMotion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGamepadMotionSensorsSubsystem::execStopGamepadMotion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopGamepadMotion();
	P_NATIVE_END;
}
// ********** End Class UGamepadMotionSensorsSubsystem Function StopGamepadMotion ******************

// ********** Begin Class UGamepadMotionSensorsSubsystem *******************************************
void UGamepadMotionSensorsSubsystem::StaticRegisterNativesUGamepadMotionSensorsSubsystem()
{
	UClass* Class = UGamepadMotionSensorsSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAcceleration", &UGamepadMotionSensorsSubsystem::execGetAcceleration },
		{ "GetAngularVelocity", &UGamepadMotionSensorsSubsystem::execGetAngularVelocity },
		{ "GetBatteryLevel", &UGamepadMotionSensorsSubsystem::execGetBatteryLevel },
		{ "GetDeviceName", &UGamepadMotionSensorsSubsystem::execGetDeviceName },
		{ "GetOrientation", &UGamepadMotionSensorsSubsystem::execGetOrientation },
		{ "GetOrientationQuat", &UGamepadMotionSensorsSubsystem::execGetOrientationQuat },
		{ "GetSampleRateHz", &UGamepadMotionSensorsSubsystem::execGetSampleRateHz },
		{ "IsAvailable", &UGamepadMotionSensorsSubsystem::execIsAvailable },
		{ "Recenter", &UGamepadMotionSensorsSubsystem::execRecenter },
		{ "StartGamepadMotion", &UGamepadMotionSensorsSubsystem::execStartGamepadMotion },
		{ "StopGamepadMotion", &UGamepadMotionSensorsSubsystem::execStopGamepadMotion },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGamepadMotionSensorsSubsystem;
UClass* UGamepadMotionSensorsSubsystem::GetPrivateStaticClass()
{
	using TClass = UGamepadMotionSensorsSubsystem;
	if (!Z_Registration_Info_UClass_UGamepadMotionSensorsSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GamepadMotionSensorsSubsystem"),
			Z_Registration_Info_UClass_UGamepadMotionSensorsSubsystem.InnerSingleton,
			StaticRegisterNativesUGamepadMotionSensorsSubsystem,
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
	return Z_Registration_Info_UClass_UGamepadMotionSensorsSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UGamepadMotionSensorsSubsystem_NoRegister()
{
	return UGamepadMotionSensorsSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGamepadMotionSensorsSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Exposes the IMU of a connected Bluetooth gamepad.\n *\n * Android surfaces a gamepad's accelerometer and gyroscope through\n * InputDevice.getSensorManager() (API 31+), which is separate from the global\n * SensorManager -- the global one only reports the host device's own sensors.\n * On XR devices that do not ship tracked 6DoF controllers this is the only\n * route to a hand-held motion source, and it is enough for a 3DoF pointer.\n *\n * Orientation is integrated from the gyroscope. Pitch and roll can be kept\n * level against the accelerometer's gravity vector, but yaw has no absolute\n * reference and will drift, so expose a recenter action in your UI.\n *\n * Android only. On other platforms IsAvailable() returns false and the getters\n * return identity/zero.\n */" },
#endif
		{ "IncludePath", "GamepadMotionSensorsSubsystem.h" },
		{ "ModuleRelativePath", "Public/GamepadMotionSensorsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Exposes the IMU of a connected Bluetooth gamepad.\n\nAndroid surfaces a gamepad's accelerometer and gyroscope through\nInputDevice.getSensorManager() (API 31+), which is separate from the global\nSensorManager -- the global one only reports the host device's own sensors.\nOn XR devices that do not ship tracked 6DoF controllers this is the only\nroute to a hand-held motion source, and it is enough for a 3DoF pointer.\n\nOrientation is integrated from the gyroscope. Pitch and roll can be kept\nlevel against the accelerometer's gravity vector, but yaw has no absolute\nreference and will drift, so expose a recenter action in your UI.\n\nAndroid only. On other platforms IsAvailable() returns false and the getters\nreturn identity/zero." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetAcceleration, "GetAcceleration" }, // 3647000681
		{ &Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetAngularVelocity, "GetAngularVelocity" }, // 443897657
		{ &Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetBatteryLevel, "GetBatteryLevel" }, // 4271347640
		{ &Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetDeviceName, "GetDeviceName" }, // 1138357383
		{ &Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetOrientation, "GetOrientation" }, // 1977253614
		{ &Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetOrientationQuat, "GetOrientationQuat" }, // 1104771724
		{ &Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_GetSampleRateHz, "GetSampleRateHz" }, // 730435379
		{ &Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_IsAvailable, "IsAvailable" }, // 2237299585
		{ &Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_Recenter, "Recenter" }, // 2722759712
		{ &Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_StartGamepadMotion, "StartGamepadMotion" }, // 1143609000
		{ &Z_Construct_UFunction_UGamepadMotionSensorsSubsystem_StopGamepadMotion, "StopGamepadMotion" }, // 3946218794
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGamepadMotionSensorsSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGamepadMotionSensorsSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_GamepadMotionSensors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGamepadMotionSensorsSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGamepadMotionSensorsSubsystem_Statics::ClassParams = {
	&UGamepadMotionSensorsSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGamepadMotionSensorsSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UGamepadMotionSensorsSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGamepadMotionSensorsSubsystem()
{
	if (!Z_Registration_Info_UClass_UGamepadMotionSensorsSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGamepadMotionSensorsSubsystem.OuterSingleton, Z_Construct_UClass_UGamepadMotionSensorsSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGamepadMotionSensorsSubsystem.OuterSingleton;
}
UGamepadMotionSensorsSubsystem::UGamepadMotionSensorsSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGamepadMotionSensorsSubsystem);
UGamepadMotionSensorsSubsystem::~UGamepadMotionSensorsSubsystem() {}
// ********** End Class UGamepadMotionSensorsSubsystem *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_GamepadMotionSensors_Source_GamepadMotionSensors_Public_GamepadMotionSensorsSubsystem_h__Script_GamepadMotionSensors_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGamepadMotionSensorsSubsystem, UGamepadMotionSensorsSubsystem::StaticClass, TEXT("UGamepadMotionSensorsSubsystem"), &Z_Registration_Info_UClass_UGamepadMotionSensorsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGamepadMotionSensorsSubsystem), 3952681314U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_GamepadMotionSensors_Source_GamepadMotionSensors_Public_GamepadMotionSensorsSubsystem_h__Script_GamepadMotionSensors_3115285758(TEXT("/Script/GamepadMotionSensors"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_GamepadMotionSensors_Source_GamepadMotionSensors_Public_GamepadMotionSensorsSubsystem_h__Script_GamepadMotionSensors_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Plugins_GamepadMotionSensors_Source_GamepadMotionSensors_Public_GamepadMotionSensorsSubsystem_h__Script_GamepadMotionSensors_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
