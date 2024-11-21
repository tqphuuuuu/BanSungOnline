// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Private/Tests/OnlineBeaconUnitTestClient.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineBeaconUnitTestClient() {}

// Begin Cross Module References
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconClient();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconUnitTestClient();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconUnitTestClient_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin Class AOnlineBeaconUnitTestClient
void AOnlineBeaconUnitTestClient::StaticRegisterNativesAOnlineBeaconUnitTestClient()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOnlineBeaconUnitTestClient);
UClass* Z_Construct_UClass_AOnlineBeaconUnitTestClient_NoRegister()
{
	return AOnlineBeaconUnitTestClient::StaticClass();
}
struct Z_Construct_UClass_AOnlineBeaconUnitTestClient_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/OnlineBeaconUnitTestClient.h" },
		{ "ModuleRelativePath", "Private/Tests/OnlineBeaconUnitTestClient.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOnlineBeaconUnitTestClient>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AOnlineBeaconUnitTestClient_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AOnlineBeaconClient,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconUnitTestClient_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOnlineBeaconUnitTestClient_Statics::ClassParams = {
	&AOnlineBeaconUnitTestClient::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconUnitTestClient_Statics::Class_MetaDataParams), Z_Construct_UClass_AOnlineBeaconUnitTestClient_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOnlineBeaconUnitTestClient()
{
	if (!Z_Registration_Info_UClass_AOnlineBeaconUnitTestClient.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOnlineBeaconUnitTestClient.OuterSingleton, Z_Construct_UClass_AOnlineBeaconUnitTestClient_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOnlineBeaconUnitTestClient.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<AOnlineBeaconUnitTestClient>()
{
	return AOnlineBeaconUnitTestClient::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOnlineBeaconUnitTestClient);
AOnlineBeaconUnitTestClient::~AOnlineBeaconUnitTestClient() {}
// End Class AOnlineBeaconUnitTestClient

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestClient_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOnlineBeaconUnitTestClient, AOnlineBeaconUnitTestClient::StaticClass, TEXT("AOnlineBeaconUnitTestClient"), &Z_Registration_Info_UClass_AOnlineBeaconUnitTestClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOnlineBeaconUnitTestClient), 3299268452U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestClient_h_3902995981(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestClient_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
