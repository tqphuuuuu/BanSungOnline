// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEngineMessages_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_EngineMessages;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_EngineMessages()
	{
		if (!Z_Registration_Info_UPackage__Script_EngineMessages.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/EngineMessages",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x5996A5B2,
				0xA2F1C5D5,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_EngineMessages.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_EngineMessages.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_EngineMessages(Z_Construct_UPackage__Script_EngineMessages, TEXT("/Script/EngineMessages"), Z_Registration_Info_UPackage__Script_EngineMessages, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5996A5B2, 0xA2F1C5D5));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
