// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Private/Tests/OnlineBeaconUnitTestNetConnection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineBeaconUnitTestNetConnection() {}

// Begin Cross Module References
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpConnection();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineBeaconUnitTestNetConnection();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineBeaconUnitTestNetConnection_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin Class UOnlineBeaconUnitTestNetConnection
void UOnlineBeaconUnitTestNetConnection::StaticRegisterNativesUOnlineBeaconUnitTestNetConnection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineBeaconUnitTestNetConnection);
UClass* Z_Construct_UClass_UOnlineBeaconUnitTestNetConnection_NoRegister()
{
	return UOnlineBeaconUnitTestNetConnection::StaticClass();
}
struct Z_Construct_UClass_UOnlineBeaconUnitTestNetConnection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/OnlineBeaconUnitTestNetConnection.h" },
		{ "ModuleRelativePath", "Private/Tests/OnlineBeaconUnitTestNetConnection.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineBeaconUnitTestNetConnection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOnlineBeaconUnitTestNetConnection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIpConnection,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBeaconUnitTestNetConnection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineBeaconUnitTestNetConnection_Statics::ClassParams = {
	&UOnlineBeaconUnitTestNetConnection::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBeaconUnitTestNetConnection_Statics::Class_MetaDataParams), Z_Construct_UClass_UOnlineBeaconUnitTestNetConnection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOnlineBeaconUnitTestNetConnection()
{
	if (!Z_Registration_Info_UClass_UOnlineBeaconUnitTestNetConnection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineBeaconUnitTestNetConnection.OuterSingleton, Z_Construct_UClass_UOnlineBeaconUnitTestNetConnection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOnlineBeaconUnitTestNetConnection.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UOnlineBeaconUnitTestNetConnection>()
{
	return UOnlineBeaconUnitTestNetConnection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineBeaconUnitTestNetConnection);
UOnlineBeaconUnitTestNetConnection::~UOnlineBeaconUnitTestNetConnection() {}
// End Class UOnlineBeaconUnitTestNetConnection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestNetConnection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineBeaconUnitTestNetConnection, UOnlineBeaconUnitTestNetConnection::StaticClass, TEXT("UOnlineBeaconUnitTestNetConnection"), &Z_Registration_Info_UClass_UOnlineBeaconUnitTestNetConnection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineBeaconUnitTestNetConnection), 418256337U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestNetConnection_h_660342873(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestNetConnection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestNetConnection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
