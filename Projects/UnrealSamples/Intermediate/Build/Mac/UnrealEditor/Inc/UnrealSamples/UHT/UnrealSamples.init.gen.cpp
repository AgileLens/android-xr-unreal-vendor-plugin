// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealSamples_init() {}
	UNREALSAMPLES_API UFunction* Z_Construct_UDelegateFunction_UnrealSamples_DebugMessageActorMessageDelegate__DelegateSignature();
	UNREALSAMPLES_API UFunction* Z_Construct_UDelegateFunction_UnrealSamples_OnPermissionsGranted__DelegateSignature();
	UNREALSAMPLES_API UFunction* Z_Construct_UDelegateFunction_UnrealSamples_PlaneRenderFilterChanged__DelegateSignature();
	UNREALSAMPLES_API UFunction* Z_Construct_UDelegateFunction_UnrealSamples_SpatialAnchorOperationModeChagned__DelegateSignature();
	UNREALSAMPLES_API UFunction* Z_Construct_UDelegateFunction_UnrealSamples_SpatialMarkerTrackingStartClicked__DelegateSignature();
	UNREALSAMPLES_API UFunction* Z_Construct_UDelegateFunction_UnrealSamples_SpatialMarkerTrackingStopClicked__DelegateSignature();
	UNREALSAMPLES_API UFunction* Z_Construct_UDelegateFunction_UnrealSamples_SpatialWidgetButtonClicked__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UnrealSamples;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UnrealSamples()
	{
		if (!Z_Registration_Info_UPackage__Script_UnrealSamples.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UnrealSamples_DebugMessageActorMessageDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UnrealSamples_OnPermissionsGranted__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UnrealSamples_PlaneRenderFilterChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UnrealSamples_SpatialAnchorOperationModeChagned__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UnrealSamples_SpatialMarkerTrackingStartClicked__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UnrealSamples_SpatialMarkerTrackingStopClicked__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UnrealSamples_SpatialWidgetButtonClicked__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UnrealSamples",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x01533C77,
				0x8B1DA039,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UnrealSamples.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UnrealSamples.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UnrealSamples(Z_Construct_UPackage__Script_UnrealSamples, TEXT("/Script/UnrealSamples"), Z_Registration_Info_UPackage__Script_UnrealSamples, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x01533C77, 0x8B1DA039));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
