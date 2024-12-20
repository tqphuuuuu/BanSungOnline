// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOnline/Enemy/Enemy_Boss.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_Boss() {}

// Begin Cross Module References
BANSUNGONLINE_API UClass* Z_Construct_UClass_AEnemy();
BANSUNGONLINE_API UClass* Z_Construct_UClass_AEnemy_Boss();
BANSUNGONLINE_API UClass* Z_Construct_UClass_AEnemy_Boss_NoRegister();
UPackage* Z_Construct_UPackage__Script_BanSungOnline();
// End Cross Module References

// Begin Class AEnemy_Boss
void AEnemy_Boss::StaticRegisterNativesAEnemy_Boss()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy_Boss);
UClass* Z_Construct_UClass_AEnemy_Boss_NoRegister()
{
	return AEnemy_Boss::StaticClass();
}
struct Z_Construct_UClass_AEnemy_Boss_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy/Enemy_Boss.h" },
		{ "ModuleRelativePath", "Enemy/Enemy_Boss.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_Boss>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemy_Boss_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemy,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOnline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Boss_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_Boss_Statics::ClassParams = {
	&AEnemy_Boss::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Boss_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemy_Boss_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemy_Boss()
{
	if (!Z_Registration_Info_UClass_AEnemy_Boss.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy_Boss.OuterSingleton, Z_Construct_UClass_AEnemy_Boss_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemy_Boss.OuterSingleton;
}
template<> BANSUNGONLINE_API UClass* StaticClass<AEnemy_Boss>()
{
	return AEnemy_Boss::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_Boss);
AEnemy_Boss::~AEnemy_Boss() {}
// End Class AEnemy_Boss

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Enemy_Enemy_Boss_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy_Boss, AEnemy_Boss::StaticClass, TEXT("AEnemy_Boss"), &Z_Registration_Info_UClass_AEnemy_Boss, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy_Boss), 310482785U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Enemy_Enemy_Boss_h_3863468267(TEXT("/Script/BanSungOnline"),
	Z_CompiledInDeferFile_FID_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Enemy_Enemy_Boss_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Enemy_Enemy_Boss_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
