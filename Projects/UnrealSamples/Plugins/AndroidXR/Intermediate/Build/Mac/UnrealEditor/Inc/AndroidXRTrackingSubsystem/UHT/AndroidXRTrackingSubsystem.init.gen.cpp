// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAndroidXRTrackingSubsystem_init() {}
	ANDROIDXRTRACKINGSUBSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AndroidXRTrackingSubsystem_OnTrackerCreated__DelegateSignature();
	ANDROIDXRTRACKINGSUBSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AndroidXRTrackingSubsystem_OnTrackerDestroyed__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AndroidXRTrackingSubsystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AndroidXRTrackingSubsystem()
	{
		if (!Z_Registration_Info_UPackage__Script_AndroidXRTrackingSubsystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AndroidXRTrackingSubsystem_OnTrackerCreated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AndroidXRTrackingSubsystem_OnTrackerDestroyed__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AndroidXRTrackingSubsystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x3DB526EB,
				0xF5442C15,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AndroidXRTrackingSubsystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AndroidXRTrackingSubsystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AndroidXRTrackingSubsystem(Z_Construct_UPackage__Script_AndroidXRTrackingSubsystem, TEXT("/Script/AndroidXRTrackingSubsystem"), Z_Registration_Info_UPackage__Script_AndroidXRTrackingSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3DB526EB, 0xF5442C15));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
