// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusCore_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OptimusCore;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OptimusCore()
	{
		if (!Z_Registration_Info_UPackage__Script_OptimusCore.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/OptimusCore",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x1413AD92,
				0x8EC2C43E,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OptimusCore.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_OptimusCore.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OptimusCore(Z_Construct_UPackage__Script_OptimusCore, TEXT("/Script/OptimusCore"), Z_Registration_Info_UPackage__Script_OptimusCore, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1413AD92, 0x8EC2C43E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS