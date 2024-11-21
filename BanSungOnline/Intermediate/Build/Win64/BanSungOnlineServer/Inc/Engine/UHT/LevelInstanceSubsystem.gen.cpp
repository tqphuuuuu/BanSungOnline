// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/LevelInstance/LevelInstanceSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelInstanceSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ULevelInstanceSubsystem();
ENGINE_API UClass* Z_Construct_UClass_ULevelInstanceSubsystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStreamingWorldSubsystemInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ULevelInstanceSubsystem
void ULevelInstanceSubsystem::StaticRegisterNativesULevelInstanceSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelInstanceSubsystem);
UClass* Z_Construct_UClass_ULevelInstanceSubsystem_NoRegister()
{
	return ULevelInstanceSubsystem::StaticClass();
}
struct Z_Construct_UClass_ULevelInstanceSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULevelInstanceSubsystem\n */" },
		{ "IncludePath", "LevelInstance/LevelInstanceSubsystem.h" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceSubsystem.h" },
		{ "ToolTip", "ULevelInstanceSubsystem" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelInstanceSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULevelInstanceSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstanceSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULevelInstanceSubsystem_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UStreamingWorldSubsystemInterface_NoRegister, (int32)VTABLE_OFFSET(ULevelInstanceSubsystem, IStreamingWorldSubsystemInterface), false },  // 1282396456
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelInstanceSubsystem_Statics::ClassParams = {
	&ULevelInstanceSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstanceSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelInstanceSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULevelInstanceSubsystem()
{
	if (!Z_Registration_Info_UClass_ULevelInstanceSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelInstanceSubsystem.OuterSingleton, Z_Construct_UClass_ULevelInstanceSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULevelInstanceSubsystem.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ULevelInstanceSubsystem>()
{
	return ULevelInstanceSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelInstanceSubsystem);
// End Class ULevelInstanceSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULevelInstanceSubsystem, ULevelInstanceSubsystem::StaticClass, TEXT("ULevelInstanceSubsystem"), &Z_Registration_Info_UClass_ULevelInstanceSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelInstanceSubsystem), 2217578907U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSubsystem_h_4246957847(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
