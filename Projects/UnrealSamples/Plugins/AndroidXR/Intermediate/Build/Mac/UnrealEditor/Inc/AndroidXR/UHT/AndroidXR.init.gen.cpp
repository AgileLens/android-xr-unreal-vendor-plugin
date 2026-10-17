// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAndroidXR_init() {}
	ANDROIDXR_API UFunction* Z_Construct_UDelegateFunction_AndroidXR_AndroidXRDisplayRefreshRateChangedDynamicDelegate__DelegateSignature();
	ANDROIDXR_API UFunction* Z_Construct_UDelegateFunction_AndroidXR_AndroidXRPerfSettingsDynamicDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AndroidXR;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AndroidXR()
	{
		if (!Z_Registration_Info_UPackage__Script_AndroidXR.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AndroidXR_AndroidXRDisplayRefreshRateChangedDynamicDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AndroidXR_AndroidXRPerfSettingsDynamicDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AndroidXR",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xC1360F63,
				0xD3CA6BD5,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AndroidXR.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AndroidXR.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AndroidXR(Z_Construct_UPackage__Script_AndroidXR, TEXT("/Script/AndroidXR"), Z_Registration_Info_UPackage__Script_AndroidXR, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC1360F63, 0xD3CA6BD5));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
