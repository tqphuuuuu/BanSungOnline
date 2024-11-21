// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Private/Tests/OnlineBeaconUnitTestHost.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineBeaconUnitTestHost() {}

// Begin Cross Module References
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconHost();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconUnitTestHost();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconUnitTestHost_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin Class AOnlineBeaconUnitTestHost
void AOnlineBeaconUnitTestHost::StaticRegisterNativesAOnlineBeaconUnitTestHost()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOnlineBeaconUnitTestHost);
UClass* Z_Construct_UClass_AOnlineBeaconUnitTestHost_NoRegister()
{
	return AOnlineBeaconUnitTestHost::StaticClass();
}
struct Z_Construct_UClass_AOnlineBeaconUnitTestHost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/OnlineBeaconUnitTestHost.h" },
		{ "ModuleRelativePath", "Private/Tests/OnlineBeaconUnitTestHost.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOnlineBeaconUnitTestHost>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AOnlineBeaconUnitTestHost_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AOnlineBeaconHost,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconUnitTestHost_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOnlineBeaconUnitTestHost_Statics::ClassParams = {
	&AOnlineBeaconUnitTestHost::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconUnitTestHost_Statics::Class_MetaDataParams), Z_Construct_UClass_AOnlineBeaconUnitTestHost_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOnlineBeaconUnitTestHost()
{
	if (!Z_Registration_Info_UClass_AOnlineBeaconUnitTestHost.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOnlineBeaconUnitTestHost.OuterSingleton, Z_Construct_UClass_AOnlineBeaconUnitTestHost_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOnlineBeaconUnitTestHost.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<AOnlineBeaconUnitTestHost>()
{
	return AOnlineBeaconUnitTestHost::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOnlineBeaconUnitTestHost);
AOnlineBeaconUnitTestHost::~AOnlineBeaconUnitTestHost() {}
// End Class AOnlineBeaconUnitTestHost

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestHost_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOnlineBeaconUnitTestHost, AOnlineBeaconUnitTestHost::StaticClass, TEXT("AOnlineBeaconUnitTestHost"), &Z_Registration_Info_UClass_AOnlineBeaconUnitTestHost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOnlineBeaconUnitTestHost), 3842311729U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestHost_h_257792760(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestHost_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestHost_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
