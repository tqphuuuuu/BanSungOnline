// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLink_init() {}
	LIVELINK_API UFunction* Z_Construct_UDelegateFunction_LiveLink_LiveLinkTickSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LiveLink;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LiveLink()
	{
		if (!Z_Registration_Info_UPackage__Script_LiveLink.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_LiveLink_LiveLinkTickSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/LiveLink",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x84896859,
				0x9C073394,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LiveLink.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_LiveLink.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LiveLink(Z_Construct_UPackage__Script_LiveLink, TEXT("/Script/LiveLink"), Z_Registration_Info_UPackage__Script_LiveLink, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x84896859, 0x9C073394));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
