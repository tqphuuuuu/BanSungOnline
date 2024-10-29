// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOnline/Projectitle/Projectitle_Pistol.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectitle_Pistol() {}

// Begin Cross Module References
BANSUNGONLINE_API UClass* Z_Construct_UClass_AProjectitle();
BANSUNGONLINE_API UClass* Z_Construct_UClass_AProjectitle_Pistol();
BANSUNGONLINE_API UClass* Z_Construct_UClass_AProjectitle_Pistol_NoRegister();
UPackage* Z_Construct_UPackage__Script_BanSungOnline();
// End Cross Module References

// Begin Class AProjectitle_Pistol
void AProjectitle_Pistol::StaticRegisterNativesAProjectitle_Pistol()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectitle_Pistol);
UClass* Z_Construct_UClass_AProjectitle_Pistol_NoRegister()
{
	return AProjectitle_Pistol::StaticClass();
}
struct Z_Construct_UClass_AProjectitle_Pistol_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Projectitle/Projectitle_Pistol.h" },
		{ "ModuleRelativePath", "Projectitle/Projectitle_Pistol.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectitle_Pistol>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AProjectitle_Pistol_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AProjectitle,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOnline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectitle_Pistol_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectitle_Pistol_Statics::ClassParams = {
	&AProjectitle_Pistol::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectitle_Pistol_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectitle_Pistol_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectitle_Pistol()
{
	if (!Z_Registration_Info_UClass_AProjectitle_Pistol.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectitle_Pistol.OuterSingleton, Z_Construct_UClass_AProjectitle_Pistol_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectitle_Pistol.OuterSingleton;
}
template<> BANSUNGONLINE_API UClass* StaticClass<AProjectitle_Pistol>()
{
	return AProjectitle_Pistol::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectitle_Pistol);
AProjectitle_Pistol::~AProjectitle_Pistol() {}
// End Class AProjectitle_Pistol

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_TQPhuuuuu_Desktop_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Projectitle_Projectitle_Pistol_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectitle_Pistol, AProjectitle_Pistol::StaticClass, TEXT("AProjectitle_Pistol"), &Z_Registration_Info_UClass_AProjectitle_Pistol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectitle_Pistol), 607110240U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TQPhuuuuu_Desktop_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Projectitle_Projectitle_Pistol_h_1374351868(TEXT("/Script/BanSungOnline"),
	Z_CompiledInDeferFile_FID_Users_TQPhuuuuu_Desktop_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Projectitle_Projectitle_Pistol_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_TQPhuuuuu_Desktop_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Projectitle_Projectitle_Pistol_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
