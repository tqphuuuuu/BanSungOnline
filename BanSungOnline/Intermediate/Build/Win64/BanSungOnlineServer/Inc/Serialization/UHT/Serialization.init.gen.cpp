// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSerialization_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Serialization;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Serialization()
	{
		if (!Z_Registration_Info_UPackage__Script_Serialization.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Serialization",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x6C0A70BB,
				0x3FA290EC,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Serialization.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Serialization.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Serialization(Z_Construct_UPackage__Script_Serialization, TEXT("/Script/Serialization"), Z_Registration_Info_UPackage__Script_Serialization, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x6C0A70BB, 0x3FA290EC));
PRAGMA_ENABLE_DEPRECATION_WARNINGS