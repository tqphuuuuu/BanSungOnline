// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkComponents_init() {}
	LIVELINKCOMPONENTS_API UFunction* Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature();
	LIVELINKCOMPONENTS_API UFunction* Z_Construct_UDelegateFunction_LiveLinkComponents_OnControllerMapUpdatedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LiveLinkComponents;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LiveLinkComponents()
	{
		if (!Z_Registration_Info_UPackage__Script_LiveLinkComponents.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_LiveLinkComponents_OnControllerMapUpdatedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/LiveLinkComponents",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x0C6A8580,
				0xE09EA7BE,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LiveLinkComponents.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_LiveLinkComponents.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LiveLinkComponents(Z_Construct_UPackage__Script_LiveLinkComponents, TEXT("/Script/LiveLinkComponents"), Z_Registration_Info_UPackage__Script_LiveLinkComponents, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0C6A8580, 0xE09EA7BE));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
