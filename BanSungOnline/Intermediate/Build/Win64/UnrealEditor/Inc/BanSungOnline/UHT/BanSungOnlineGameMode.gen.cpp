// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOnline/BanSungOnlineGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBanSungOnlineGameMode() {}

// Begin Cross Module References
BANSUNGONLINE_API UClass* Z_Construct_UClass_ABanSungOnlineGameMode();
BANSUNGONLINE_API UClass* Z_Construct_UClass_ABanSungOnlineGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BanSungOnline();
// End Cross Module References

// Begin Class ABanSungOnlineGameMode
void ABanSungOnlineGameMode::StaticRegisterNativesABanSungOnlineGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABanSungOnlineGameMode);
UClass* Z_Construct_UClass_ABanSungOnlineGameMode_NoRegister()
{
	return ABanSungOnlineGameMode::StaticClass();
}
struct Z_Construct_UClass_ABanSungOnlineGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BanSungOnlineGameMode.h" },
		{ "ModuleRelativePath", "BanSungOnlineGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABanSungOnlineGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABanSungOnlineGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOnline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABanSungOnlineGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABanSungOnlineGameMode_Statics::ClassParams = {
	&ABanSungOnlineGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABanSungOnlineGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABanSungOnlineGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABanSungOnlineGameMode()
{
	if (!Z_Registration_Info_UClass_ABanSungOnlineGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABanSungOnlineGameMode.OuterSingleton, Z_Construct_UClass_ABanSungOnlineGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABanSungOnlineGameMode.OuterSingleton;
}
template<> BANSUNGONLINE_API UClass* StaticClass<ABanSungOnlineGameMode>()
{
	return ABanSungOnlineGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABanSungOnlineGameMode);
ABanSungOnlineGameMode::~ABanSungOnlineGameMode() {}
// End Class ABanSungOnlineGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_CloneLai_BanSungOnline_BanSungOnline_Source_BanSungOnline_BanSungOnlineGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABanSungOnlineGameMode, ABanSungOnlineGameMode::StaticClass, TEXT("ABanSungOnlineGameMode"), &Z_Registration_Info_UClass_ABanSungOnlineGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABanSungOnlineGameMode), 2677740864U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CloneLai_BanSungOnline_BanSungOnline_Source_BanSungOnline_BanSungOnlineGameMode_h_1344539289(TEXT("/Script/BanSungOnline"),
	Z_CompiledInDeferFile_FID_CloneLai_BanSungOnline_BanSungOnline_Source_BanSungOnline_BanSungOnlineGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CloneLai_BanSungOnline_BanSungOnline_Source_BanSungOnline_BanSungOnlineGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
