// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBanSungOnline_init() {}
	BANSUNGONLINE_API UFunction* Z_Construct_UDelegateFunction_BanSungOnline_DisplayWBBulletCount__DelegateSignature();
	BANSUNGONLINE_API UFunction* Z_Construct_UDelegateFunction_BanSungOnline_Health__DelegateSignature();
	BANSUNGONLINE_API UFunction* Z_Construct_UDelegateFunction_BanSungOnline_ShowHealth__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BanSungOnline;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BanSungOnline()
	{
		if (!Z_Registration_Info_UPackage__Script_BanSungOnline.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_BanSungOnline_DisplayWBBulletCount__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BanSungOnline_Health__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BanSungOnline_ShowHealth__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BanSungOnline",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x67A80E82,
				0xF503AA01,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BanSungOnline.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BanSungOnline.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BanSungOnline(Z_Construct_UPackage__Script_BanSungOnline, TEXT("/Script/BanSungOnline"), Z_Registration_Info_UPackage__Script_BanSungOnline, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x67A80E82, 0xF503AA01));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
