// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Private/Tests/OnlineBeaconUnitTestHostObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineBeaconUnitTestHostObject() {}

// Begin Cross Module References
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconHostObject();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconUnitTestHostObject();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconUnitTestHostObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin Class AOnlineBeaconUnitTestHostObject
void AOnlineBeaconUnitTestHostObject::StaticRegisterNativesAOnlineBeaconUnitTestHostObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOnlineBeaconUnitTestHostObject);
UClass* Z_Construct_UClass_AOnlineBeaconUnitTestHostObject_NoRegister()
{
	return AOnlineBeaconUnitTestHostObject::StaticClass();
}
struct Z_Construct_UClass_AOnlineBeaconUnitTestHostObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/OnlineBeaconUnitTestHostObject.h" },
		{ "ModuleRelativePath", "Private/Tests/OnlineBeaconUnitTestHostObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOnlineBeaconUnitTestHostObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AOnlineBeaconUnitTestHostObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AOnlineBeaconHostObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconUnitTestHostObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOnlineBeaconUnitTestHostObject_Statics::ClassParams = {
	&AOnlineBeaconUnitTestHostObject::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconUnitTestHostObject_Statics::Class_MetaDataParams), Z_Construct_UClass_AOnlineBeaconUnitTestHostObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOnlineBeaconUnitTestHostObject()
{
	if (!Z_Registration_Info_UClass_AOnlineBeaconUnitTestHostObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOnlineBeaconUnitTestHostObject.OuterSingleton, Z_Construct_UClass_AOnlineBeaconUnitTestHostObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOnlineBeaconUnitTestHostObject.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<AOnlineBeaconUnitTestHostObject>()
{
	return AOnlineBeaconUnitTestHostObject::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOnlineBeaconUnitTestHostObject);
AOnlineBeaconUnitTestHostObject::~AOnlineBeaconUnitTestHostObject() {}
// End Class AOnlineBeaconUnitTestHostObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestHostObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOnlineBeaconUnitTestHostObject, AOnlineBeaconUnitTestHostObject::StaticClass, TEXT("AOnlineBeaconUnitTestHostObject"), &Z_Registration_Info_UClass_AOnlineBeaconUnitTestHostObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOnlineBeaconUnitTestHostObject), 3778177623U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestHostObject_h_235289365(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestHostObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestHostObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
