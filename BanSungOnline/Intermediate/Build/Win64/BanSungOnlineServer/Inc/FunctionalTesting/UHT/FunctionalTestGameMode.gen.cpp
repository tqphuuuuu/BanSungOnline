// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/FunctionalTesting/Classes/FunctionalTestGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFunctionalTestGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalTestGameMode();
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalTestGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
// End Cross Module References

// Begin Class AFunctionalTestGameMode
void AFunctionalTestGameMode::StaticRegisterNativesAFunctionalTestGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFunctionalTestGameMode);
UClass* Z_Construct_UClass_AFunctionalTestGameMode_NoRegister()
{
	return AFunctionalTestGameMode::StaticClass();
}
struct Z_Construct_UClass_AFunctionalTestGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FunctionalTestGameMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/FunctionalTestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFunctionalTestGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFunctionalTestGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalTestGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFunctionalTestGameMode_Statics::ClassParams = {
	&AFunctionalTestGameMode::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalTestGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFunctionalTestGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFunctionalTestGameMode()
{
	if (!Z_Registration_Info_UClass_AFunctionalTestGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFunctionalTestGameMode.OuterSingleton, Z_Construct_UClass_AFunctionalTestGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFunctionalTestGameMode.OuterSingleton;
}
template<> FUNCTIONALTESTING_API UClass* StaticClass<AFunctionalTestGameMode>()
{
	return AFunctionalTestGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFunctionalTestGameMode);
AFunctionalTestGameMode::~AFunctionalTestGameMode() {}
// End Class AFunctionalTestGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFunctionalTestGameMode, AFunctionalTestGameMode::StaticClass, TEXT("AFunctionalTestGameMode"), &Z_Registration_Info_UClass_AFunctionalTestGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFunctionalTestGameMode), 1421274569U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_2422229735(TEXT("/Script/FunctionalTesting"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
