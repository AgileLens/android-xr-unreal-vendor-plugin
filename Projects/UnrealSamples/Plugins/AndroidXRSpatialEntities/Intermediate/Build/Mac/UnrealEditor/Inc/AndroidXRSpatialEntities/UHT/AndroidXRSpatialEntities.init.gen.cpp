// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAndroidXRSpatialEntities_init() {}
	ANDROIDXRSPATIALENTITIES_API UFunction* Z_Construct_UDelegateFunction_AndroidXRSpatialEntities_SpatialContextCreatedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AndroidXRSpatialEntities;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AndroidXRSpatialEntities()
	{
		if (!Z_Registration_Info_UPackage__Script_AndroidXRSpatialEntities.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AndroidXRSpatialEntities_SpatialContextCreatedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AndroidXRSpatialEntities",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x9AEFB385,
				0x27B23CD1,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AndroidXRSpatialEntities.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AndroidXRSpatialEntities.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AndroidXRSpatialEntities(Z_Construct_UPackage__Script_AndroidXRSpatialEntities, TEXT("/Script/AndroidXRSpatialEntities"), Z_Registration_Info_UPackage__Script_AndroidXRSpatialEntities, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9AEFB385, 0x27B23CD1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
