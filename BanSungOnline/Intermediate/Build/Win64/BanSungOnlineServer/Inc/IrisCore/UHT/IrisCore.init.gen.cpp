// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIrisCore_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_IrisCore;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_IrisCore()
	{
		if (!Z_Registration_Info_UPackage__Script_IrisCore.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/IrisCore",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x497AFF73,
				0xD8B1E8B7,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_IrisCore.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_IrisCore.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_IrisCore(Z_Construct_UPackage__Script_IrisCore, TEXT("/Script/IrisCore"), Z_Registration_Info_UPackage__Script_IrisCore, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x497AFF73, 0xD8B1E8B7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
