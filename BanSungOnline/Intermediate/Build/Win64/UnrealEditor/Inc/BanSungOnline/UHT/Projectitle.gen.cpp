// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOnline/Projectitle/Projectitle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectitle() {}

// Begin Cross Module References
BANSUNGONLINE_API UClass* Z_Construct_UClass_AProjectitle();
BANSUNGONLINE_API UClass* Z_Construct_UClass_AProjectitle_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BanSungOnline();
// End Cross Module References

// Begin Class AProjectitle
void AProjectitle::StaticRegisterNativesAProjectitle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectitle);
UClass* Z_Construct_UClass_AProjectitle_NoRegister()
{
	return AProjectitle::StaticClass();
}
struct Z_Construct_UClass_AProjectitle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Projectitle/Projectitle.h" },
		{ "ModuleRelativePath", "Projectitle/Projectitle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Projectiles_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Projectitle/Projectitle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[] = {
		{ "Category", "Coli" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Projectitle/Projectitle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedAmmo_MetaData[] = {
		{ "Category", "Gun Properties" },
		{ "ModuleRelativePath", "Projectitle/Projectitle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "Gun Properties" },
		{ "ModuleRelativePath", "Projectitle/Projectitle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Projectiles;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedAmmo;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectitle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectitle_Statics::NewProp_Projectiles = { "Projectiles", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectitle, Projectiles), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Projectiles_MetaData), NewProp_Projectiles_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectitle_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectitle, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereComponent_MetaData), NewProp_SphereComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectitle_Statics::NewProp_SpeedAmmo = { "SpeedAmmo", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectitle, SpeedAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedAmmo_MetaData), NewProp_SpeedAmmo_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectitle_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectitle, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectitle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectitle_Statics::NewProp_Projectiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectitle_Statics::NewProp_SphereComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectitle_Statics::NewProp_SpeedAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectitle_Statics::NewProp_Damage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectitle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProjectitle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOnline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectitle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectitle_Statics::ClassParams = {
	&AProjectitle::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AProjectitle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AProjectitle_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectitle_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectitle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectitle()
{
	if (!Z_Registration_Info_UClass_AProjectitle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectitle.OuterSingleton, Z_Construct_UClass_AProjectitle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectitle.OuterSingleton;
}
template<> BANSUNGONLINE_API UClass* StaticClass<AProjectitle>()
{
	return AProjectitle::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectitle);
AProjectitle::~AProjectitle() {}
// End Class AProjectitle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_TQPhuuuuu_Desktop_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Projectitle_Projectitle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectitle, AProjectitle::StaticClass, TEXT("AProjectitle"), &Z_Registration_Info_UClass_AProjectitle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectitle), 3256238372U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TQPhuuuuu_Desktop_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Projectitle_Projectitle_h_2695576708(TEXT("/Script/BanSungOnline"),
	Z_CompiledInDeferFile_FID_Users_TQPhuuuuu_Desktop_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Projectitle_Projectitle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_TQPhuuuuu_Desktop_GameOnline_BanSungOnline_BanSungOnline_Source_BanSungOnline_Projectitle_Projectitle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
