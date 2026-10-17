// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAndroidXRSpatialAnchors_init() {}
	ANDROIDXRSPATIALANCHORS_API UFunction* Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationDelegate__DelegateSignature();
	ANDROIDXRSPATIALANCHORS_API UFunction* Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationFailedDelegate__DelegateSignature();
	ANDROIDXRSPATIALANCHORS_API UFunction* Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_SpatialAnchorPersistedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AndroidXRSpatialAnchors;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AndroidXRSpatialAnchors()
	{
		if (!Z_Registration_Info_UPackage__Script_AndroidXRSpatialAnchors.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_AnchorPersistOperationFailedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AndroidXRSpatialAnchors_SpatialAnchorPersistedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AndroidXRSpatialAnchors",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x2A454A06,
				0x589352A7,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AndroidXRSpatialAnchors.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AndroidXRSpatialAnchors.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AndroidXRSpatialAnchors(Z_Construct_UPackage__Script_AndroidXRSpatialAnchors, TEXT("/Script/AndroidXRSpatialAnchors"), Z_Registration_Info_UPackage__Script_AndroidXRSpatialAnchors, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2A454A06, 0x589352A7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
