// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/PlayerStartPIE.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerStartPIE() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerStart();
ENGINE_API UClass* Z_Construct_UClass_APlayerStartPIE();
ENGINE_API UClass* Z_Construct_UClass_APlayerStartPIE_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class APlayerStartPIE
void APlayerStartPIE::StaticRegisterNativesAPlayerStartPIE()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerStartPIE);
UClass* Z_Construct_UClass_APlayerStartPIE_NoRegister()
{
	return APlayerStartPIE::StaticClass();
}
struct Z_Construct_UClass_APlayerStartPIE_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Lighting LightColor Force" },
		{ "IncludePath", "Engine/PlayerStartPIE.h" },
		{ "ModuleRelativePath", "Classes/Engine/PlayerStartPIE.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerStartPIE>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APlayerStartPIE_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerStart,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerStartPIE_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerStartPIE_Statics::ClassParams = {
	&APlayerStartPIE::StaticClass,
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
	0x008802A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerStartPIE_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerStartPIE_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerStartPIE()
{
	if (!Z_Registration_Info_UClass_APlayerStartPIE.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerStartPIE.OuterSingleton, Z_Construct_UClass_APlayerStartPIE_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerStartPIE.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<APlayerStartPIE>()
{
	return APlayerStartPIE::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerStartPIE);
APlayerStartPIE::~APlayerStartPIE() {}
// End Class APlayerStartPIE

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PlayerStartPIE_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerStartPIE, APlayerStartPIE::StaticClass, TEXT("APlayerStartPIE"), &Z_Registration_Info_UClass_APlayerStartPIE, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerStartPIE), 67015983U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PlayerStartPIE_h_2463811747(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PlayerStartPIE_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PlayerStartPIE_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
