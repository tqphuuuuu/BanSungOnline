// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlate_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Slate;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Slate()
	{
		if (!Z_Registration_Info_UPackage__Script_Slate.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Slate",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xDA75F7A1,
				0xC5AE1ADF,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Slate.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Slate.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Slate(Z_Construct_UPackage__Script_Slate, TEXT("/Script/Slate"), Z_Registration_Info_UPackage__Script_Slate, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDA75F7A1, 0xC5AE1ADF));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
