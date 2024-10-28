// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOnline/Weapon/WeaponPistol.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponPistol() {}

// Begin Cross Module References
BANSUNGONLINE_API UClass* Z_Construct_UClass_AWeaponPistol();
BANSUNGONLINE_API UClass* Z_Construct_UClass_AWeaponPistol_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BanSungOnline();
// End Cross Module References

// Begin Class AWeaponPistol
void AWeaponPistol::StaticRegisterNativesAWeaponPistol()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeaponPistol);
UClass* Z_Construct_UClass_AWeaponPistol_NoRegister()
{
	return AWeaponPistol::StaticClass();
}
struct Z_Construct_UClass_AWeaponPistol_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/WeaponPistol.h" },
		{ "ModuleRelativePath", "Weapon/WeaponPistol.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponPistol>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWeaponPistol_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOnline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPistol_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeaponPistol_Statics::ClassParams = {
	&AWeaponPistol::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPistol_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeaponPistol_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWeaponPistol()
{
	if (!Z_Registration_Info_UClass_AWeaponPistol.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeaponPistol.OuterSingleton, Z_Construct_UClass_AWeaponPistol_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWeaponPistol.OuterSingleton;
}
template<> BANSUNGONLINE_API UClass* StaticClass<AWeaponPistol>()
{
	return AWeaponPistol::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponPistol);
AWeaponPistol::~AWeaponPistol() {}
// End Class AWeaponPistol

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_TQPhuuuuu_Desktop_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Weapon_WeaponPistol_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeaponPistol, AWeaponPistol::StaticClass, TEXT("AWeaponPistol"), &Z_Registration_Info_UClass_AWeaponPistol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeaponPistol), 198143042U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TQPhuuuuu_Desktop_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Weapon_WeaponPistol_h_871738036(TEXT("/Script/BanSungOnline"),
	Z_CompiledInDeferFile_FID_Users_TQPhuuuuu_Desktop_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Weapon_WeaponPistol_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_TQPhuuuuu_Desktop_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Weapon_WeaponPistol_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
