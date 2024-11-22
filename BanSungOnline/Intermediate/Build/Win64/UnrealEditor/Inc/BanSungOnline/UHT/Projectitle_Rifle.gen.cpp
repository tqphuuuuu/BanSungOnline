// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOnline/Projectitle/Projectitle_Rifle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectitle_Rifle() {}

// Begin Cross Module References
BANSUNGONLINE_API UClass* Z_Construct_UClass_AProjectitle();
BANSUNGONLINE_API UClass* Z_Construct_UClass_AProjectitle_Rifle();
BANSUNGONLINE_API UClass* Z_Construct_UClass_AProjectitle_Rifle_NoRegister();
UPackage* Z_Construct_UPackage__Script_BanSungOnline();
// End Cross Module References

// Begin Class AProjectitle_Rifle
void AProjectitle_Rifle::StaticRegisterNativesAProjectitle_Rifle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectitle_Rifle);
UClass* Z_Construct_UClass_AProjectitle_Rifle_NoRegister()
{
	return AProjectitle_Rifle::StaticClass();
}
struct Z_Construct_UClass_AProjectitle_Rifle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Projectitle/Projectitle_Rifle.h" },
		{ "ModuleRelativePath", "Projectitle/Projectitle_Rifle.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectitle_Rifle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AProjectitle_Rifle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AProjectitle,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOnline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectitle_Rifle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectitle_Rifle_Statics::ClassParams = {
	&AProjectitle_Rifle::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectitle_Rifle_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectitle_Rifle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectitle_Rifle()
{
	if (!Z_Registration_Info_UClass_AProjectitle_Rifle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectitle_Rifle.OuterSingleton, Z_Construct_UClass_AProjectitle_Rifle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectitle_Rifle.OuterSingleton;
}
template<> BANSUNGONLINE_API UClass* StaticClass<AProjectitle_Rifle>()
{
	return AProjectitle_Rifle::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectitle_Rifle);
AProjectitle_Rifle::~AProjectitle_Rifle() {}
// End Class AProjectitle_Rifle

// Begin Registration
struct Z_CompiledInDeferFile_FID_BanSungOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Projectitle_Projectitle_Rifle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectitle_Rifle, AProjectitle_Rifle::StaticClass, TEXT("AProjectitle_Rifle"), &Z_Registration_Info_UClass_AProjectitle_Rifle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectitle_Rifle), 1340850114U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BanSungOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Projectitle_Projectitle_Rifle_h_3787678756(TEXT("/Script/BanSungOnline"),
	Z_CompiledInDeferFile_FID_BanSungOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Projectitle_Projectitle_Rifle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BanSungOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Projectitle_Projectitle_Rifle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
