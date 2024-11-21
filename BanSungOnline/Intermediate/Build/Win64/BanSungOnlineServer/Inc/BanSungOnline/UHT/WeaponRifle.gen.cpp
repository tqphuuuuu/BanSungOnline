// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOnline/Weapon/WeaponRifle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponRifle() {}

// Begin Cross Module References
BANSUNGONLINE_API UClass* Z_Construct_UClass_AWeapon();
BANSUNGONLINE_API UClass* Z_Construct_UClass_AWeaponRifle();
BANSUNGONLINE_API UClass* Z_Construct_UClass_AWeaponRifle_NoRegister();
UPackage* Z_Construct_UPackage__Script_BanSungOnline();
// End Cross Module References

// Begin Class AWeaponRifle
void AWeaponRifle::StaticRegisterNativesAWeaponRifle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeaponRifle);
UClass* Z_Construct_UClass_AWeaponRifle_NoRegister()
{
	return AWeaponRifle::StaticClass();
}
struct Z_Construct_UClass_AWeaponRifle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/WeaponRifle.h" },
		{ "ModuleRelativePath", "Weapon/WeaponRifle.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponRifle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWeaponRifle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWeapon,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOnline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponRifle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeaponRifle_Statics::ClassParams = {
	&AWeaponRifle::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponRifle_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeaponRifle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWeaponRifle()
{
	if (!Z_Registration_Info_UClass_AWeaponRifle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeaponRifle.OuterSingleton, Z_Construct_UClass_AWeaponRifle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWeaponRifle.OuterSingleton;
}
template<> BANSUNGONLINE_API UClass* StaticClass<AWeaponRifle>()
{
	return AWeaponRifle::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponRifle);
AWeaponRifle::~AWeaponRifle() {}
// End Class AWeaponRifle

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_BanSungOnline_BanSungOnline_Source_BanSungOnline_Weapon_WeaponRifle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeaponRifle, AWeaponRifle::StaticClass, TEXT("AWeaponRifle"), &Z_Registration_Info_UClass_AWeaponRifle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeaponRifle), 2684164891U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_BanSungOnline_BanSungOnline_Source_BanSungOnline_Weapon_WeaponRifle_h_1656083347(TEXT("/Script/BanSungOnline"),
	Z_CompiledInDeferFile_FID_GitHub_BanSungOnline_BanSungOnline_Source_BanSungOnline_Weapon_WeaponRifle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_BanSungOnline_BanSungOnline_Source_BanSungOnline_Weapon_WeaponRifle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
