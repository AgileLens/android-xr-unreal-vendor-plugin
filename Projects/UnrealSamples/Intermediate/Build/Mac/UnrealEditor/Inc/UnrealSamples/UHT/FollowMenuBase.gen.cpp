// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealSamples/FollowMenuBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFollowMenuBase() {}

// ********** Begin Cross Module References ********************************************************
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UNREALSAMPLES_API UClass* Z_Construct_UClass_UFollowMenuBase();
UNREALSAMPLES_API UClass* Z_Construct_UClass_UFollowMenuBase_NoRegister();
UNREALSAMPLES_API UFunction* Z_Construct_UDelegateFunction_UnrealSamples_DebugMessageActorMessageDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_UnrealSamples();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FDebugMessageActorMessageDelegate *************************************
struct Z_Construct_UDelegateFunction_UnrealSamples_DebugMessageActorMessageDelegate__DelegateSignature_Statics
{
	struct _Script_UnrealSamples_eventDebugMessageActorMessageDelegate_Parms
	{
		FString DebugMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FollowMenuBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DebugMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UnrealSamples_DebugMessageActorMessageDelegate__DelegateSignature_Statics::NewProp_DebugMessage = { "DebugMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UnrealSamples_eventDebugMessageActorMessageDelegate_Parms, DebugMessage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UnrealSamples_DebugMessageActorMessageDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnrealSamples_DebugMessageActorMessageDelegate__DelegateSignature_Statics::NewProp_DebugMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealSamples_DebugMessageActorMessageDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UnrealSamples_DebugMessageActorMessageDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UnrealSamples, nullptr, "DebugMessageActorMessageDelegate__DelegateSignature", Z_Construct_UDelegateFunction_UnrealSamples_DebugMessageActorMessageDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealSamples_DebugMessageActorMessageDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UnrealSamples_DebugMessageActorMessageDelegate__DelegateSignature_Statics::_Script_UnrealSamples_eventDebugMessageActorMessageDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealSamples_DebugMessageActorMessageDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UnrealSamples_DebugMessageActorMessageDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UnrealSamples_DebugMessageActorMessageDelegate__DelegateSignature_Statics::_Script_UnrealSamples_eventDebugMessageActorMessageDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UnrealSamples_DebugMessageActorMessageDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UnrealSamples_DebugMessageActorMessageDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDebugMessageActorMessageDelegate_DelegateWrapper(const FMulticastScriptDelegate& DebugMessageActorMessageDelegate, const FString& DebugMessage)
{
	struct _Script_UnrealSamples_eventDebugMessageActorMessageDelegate_Parms
	{
		FString DebugMessage;
	};
	_Script_UnrealSamples_eventDebugMessageActorMessageDelegate_Parms Parms;
	Parms.DebugMessage=DebugMessage;
	DebugMessageActorMessageDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FDebugMessageActorMessageDelegate ***************************************

// ********** Begin Class UFollowMenuBase Function CreateDebugMessageDelegate **********************
struct Z_Construct_UFunction_UFollowMenuBase_CreateDebugMessageDelegate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FollowMenuBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFollowMenuBase_CreateDebugMessageDelegate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFollowMenuBase, nullptr, "CreateDebugMessageDelegate", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowMenuBase_CreateDebugMessageDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFollowMenuBase_CreateDebugMessageDelegate_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFollowMenuBase_CreateDebugMessageDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFollowMenuBase_CreateDebugMessageDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFollowMenuBase::execCreateDebugMessageDelegate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateDebugMessageDelegate();
	P_NATIVE_END;
}
// ********** End Class UFollowMenuBase Function CreateDebugMessageDelegate ************************

// ********** Begin Class UFollowMenuBase Function DestroyDebugMessageDelegate *********************
struct Z_Construct_UFunction_UFollowMenuBase_DestroyDebugMessageDelegate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FollowMenuBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFollowMenuBase_DestroyDebugMessageDelegate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFollowMenuBase, nullptr, "DestroyDebugMessageDelegate", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowMenuBase_DestroyDebugMessageDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFollowMenuBase_DestroyDebugMessageDelegate_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFollowMenuBase_DestroyDebugMessageDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFollowMenuBase_DestroyDebugMessageDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFollowMenuBase::execDestroyDebugMessageDelegate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyDebugMessageDelegate();
	P_NATIVE_END;
}
// ********** End Class UFollowMenuBase Function DestroyDebugMessageDelegate ***********************

// ********** Begin Class UFollowMenuBase Function OnDebugMessage **********************************
struct FollowMenuBase_eventOnDebugMessage_Parms
{
	FString DebugMessage;
};
static FName NAME_UFollowMenuBase_OnDebugMessage = FName(TEXT("OnDebugMessage"));
void UFollowMenuBase::OnDebugMessage(const FString& DebugMessage)
{
	FollowMenuBase_eventOnDebugMessage_Parms Parms;
	Parms.DebugMessage=DebugMessage;
	UFunction* Func = FindFunctionChecked(NAME_UFollowMenuBase_OnDebugMessage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UFollowMenuBase_OnDebugMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FollowMenuBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DebugMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFollowMenuBase_OnDebugMessage_Statics::NewProp_DebugMessage = { "DebugMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FollowMenuBase_eventOnDebugMessage_Parms, DebugMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugMessage_MetaData), NewProp_DebugMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFollowMenuBase_OnDebugMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFollowMenuBase_OnDebugMessage_Statics::NewProp_DebugMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowMenuBase_OnDebugMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFollowMenuBase_OnDebugMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFollowMenuBase, nullptr, "OnDebugMessage", Z_Construct_UFunction_UFollowMenuBase_OnDebugMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowMenuBase_OnDebugMessage_Statics::PropPointers), sizeof(FollowMenuBase_eventOnDebugMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowMenuBase_OnDebugMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFollowMenuBase_OnDebugMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FollowMenuBase_eventOnDebugMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFollowMenuBase_OnDebugMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFollowMenuBase_OnDebugMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UFollowMenuBase Function OnDebugMessage ************************************

// ********** Begin Class UFollowMenuBase **********************************************************
void UFollowMenuBase::StaticRegisterNativesUFollowMenuBase()
{
	UClass* Class = UFollowMenuBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateDebugMessageDelegate", &UFollowMenuBase::execCreateDebugMessageDelegate },
		{ "DestroyDebugMessageDelegate", &UFollowMenuBase::execDestroyDebugMessageDelegate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFollowMenuBase;
UClass* UFollowMenuBase::GetPrivateStaticClass()
{
	using TClass = UFollowMenuBase;
	if (!Z_Registration_Info_UClass_UFollowMenuBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FollowMenuBase"),
			Z_Registration_Info_UClass_UFollowMenuBase.InnerSingleton,
			StaticRegisterNativesUFollowMenuBase,
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
	return Z_Registration_Info_UClass_UFollowMenuBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UFollowMenuBase_NoRegister()
{
	return UFollowMenuBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFollowMenuBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FollowMenuBase.h" },
		{ "ModuleRelativePath", "FollowMenuBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessageDelegate_MetaData[] = {
		{ "ModuleRelativePath", "FollowMenuBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_MessageDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFollowMenuBase_CreateDebugMessageDelegate, "CreateDebugMessageDelegate" }, // 598452289
		{ &Z_Construct_UFunction_UFollowMenuBase_DestroyDebugMessageDelegate, "DestroyDebugMessageDelegate" }, // 438018563
		{ &Z_Construct_UFunction_UFollowMenuBase_OnDebugMessage, "OnDebugMessage" }, // 2067154833
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFollowMenuBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFollowMenuBase_Statics::NewProp_MessageDelegate = { "MessageDelegate", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFollowMenuBase, MessageDelegate), Z_Construct_UDelegateFunction_UnrealSamples_DebugMessageActorMessageDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessageDelegate_MetaData), NewProp_MessageDelegate_MetaData) }; // 257849739
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFollowMenuBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFollowMenuBase_Statics::NewProp_MessageDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFollowMenuBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFollowMenuBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealSamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFollowMenuBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFollowMenuBase_Statics::ClassParams = {
	&UFollowMenuBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFollowMenuBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFollowMenuBase_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFollowMenuBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UFollowMenuBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFollowMenuBase()
{
	if (!Z_Registration_Info_UClass_UFollowMenuBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFollowMenuBase.OuterSingleton, Z_Construct_UClass_UFollowMenuBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFollowMenuBase.OuterSingleton;
}
UFollowMenuBase::UFollowMenuBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFollowMenuBase);
UFollowMenuBase::~UFollowMenuBase() {}
// ********** End Class UFollowMenuBase ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_FollowMenuBase_h__Script_UnrealSamples_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFollowMenuBase, UFollowMenuBase::StaticClass, TEXT("UFollowMenuBase"), &Z_Registration_Info_UClass_UFollowMenuBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFollowMenuBase), 617718714U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_FollowMenuBase_h__Script_UnrealSamples_1392252427(TEXT("/Script/UnrealSamples"),
	Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_FollowMenuBase_h__Script_UnrealSamples_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alex_dev_android_xr_unreal_vendor_plugin_Projects_UnrealSamples_Source_UnrealSamples_FollowMenuBase_h__Script_UnrealSamples_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
