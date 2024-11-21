// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Private/Tests/OnlineBeaconUnitTestNetDriver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineBeaconUnitTestNetDriver() {}

// Begin Cross Module References
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpNetDriver();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineBeaconUnitTestNetDriver();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineBeaconUnitTestNetDriver_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin Class UOnlineBeaconUnitTestNetDriver
void UOnlineBeaconUnitTestNetDriver::StaticRegisterNativesUOnlineBeaconUnitTestNetDriver()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineBeaconUnitTestNetDriver);
UClass* Z_Construct_UClass_UOnlineBeaconUnitTestNetDriver_NoRegister()
{
	return UOnlineBeaconUnitTestNetDriver::StaticClass();
}
struct Z_Construct_UClass_UOnlineBeaconUnitTestNetDriver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/OnlineBeaconUnitTestNetDriver.h" },
		{ "ModuleRelativePath", "Private/Tests/OnlineBeaconUnitTestNetDriver.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineBeaconUnitTestNetDriver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOnlineBeaconUnitTestNetDriver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIpNetDriver,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBeaconUnitTestNetDriver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineBeaconUnitTestNetDriver_Statics::ClassParams = {
	&UOnlineBeaconUnitTestNetDriver::StaticClass,
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
	0x000002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBeaconUnitTestNetDriver_Statics::Class_MetaDataParams), Z_Construct_UClass_UOnlineBeaconUnitTestNetDriver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOnlineBeaconUnitTestNetDriver()
{
	if (!Z_Registration_Info_UClass_UOnlineBeaconUnitTestNetDriver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineBeaconUnitTestNetDriver.OuterSingleton, Z_Construct_UClass_UOnlineBeaconUnitTestNetDriver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOnlineBeaconUnitTestNetDriver.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UOnlineBeaconUnitTestNetDriver>()
{
	return UOnlineBeaconUnitTestNetDriver::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineBeaconUnitTestNetDriver);
UOnlineBeaconUnitTestNetDriver::~UOnlineBeaconUnitTestNetDriver() {}
// End Class UOnlineBeaconUnitTestNetDriver

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestNetDriver_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineBeaconUnitTestNetDriver, UOnlineBeaconUnitTestNetDriver::StaticClass, TEXT("UOnlineBeaconUnitTestNetDriver"), &Z_Registration_Info_UClass_UOnlineBeaconUnitTestNetDriver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineBeaconUnitTestNetDriver), 3955943563U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestNetDriver_h_1156467766(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestNetDriver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestNetDriver_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
