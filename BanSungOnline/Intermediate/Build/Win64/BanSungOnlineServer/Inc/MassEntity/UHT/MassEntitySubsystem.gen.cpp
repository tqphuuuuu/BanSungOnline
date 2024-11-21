// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MassEntity/Public/MassEntitySubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassEntitySubsystem() {}

// Begin Cross Module References
MASSENTITY_API UClass* Z_Construct_UClass_UMassEntitySubsystem();
MASSENTITY_API UClass* Z_Construct_UClass_UMassEntitySubsystem_NoRegister();
MASSENTITY_API UClass* Z_Construct_UClass_UMassSubsystemBase();
UPackage* Z_Construct_UPackage__Script_MassEntity();
// End Cross Module References

// Begin Class UMassEntitySubsystem
void UMassEntitySubsystem::StaticRegisterNativesUMassEntitySubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassEntitySubsystem);
UClass* Z_Construct_UClass_UMassEntitySubsystem_NoRegister()
{
	return UMassEntitySubsystem::StaticClass();
}
struct Z_Construct_UClass_UMassEntitySubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * The sole responsibility of this world subsystem class is to host the default instance of FMassEntityManager\n * for a given UWorld. All the gameplay-related use cases of Mass (found in MassGameplay and related plugins) \n * use this by default. \n */" },
		{ "IncludePath", "MassEntitySubsystem.h" },
		{ "ModuleRelativePath", "Public/MassEntitySubsystem.h" },
		{ "ToolTip", "The sole responsibility of this world subsystem class is to host the default instance of FMassEntityManager\nfor a given UWorld. All the gameplay-related use cases of Mass (found in MassGameplay and related plugins)\nuse this by default." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassEntitySubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMassEntitySubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassSubsystemBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassEntitySubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassEntitySubsystem_Statics::ClassParams = {
	&UMassEntitySubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassEntitySubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassEntitySubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassEntitySubsystem()
{
	if (!Z_Registration_Info_UClass_UMassEntitySubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassEntitySubsystem.OuterSingleton, Z_Construct_UClass_UMassEntitySubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassEntitySubsystem.OuterSingleton;
}
template<> MASSENTITY_API UClass* StaticClass<UMassEntitySubsystem>()
{
	return UMassEntitySubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassEntitySubsystem);
UMassEntitySubsystem::~UMassEntitySubsystem() {}
// End Class UMassEntitySubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassEntitySubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassEntitySubsystem, UMassEntitySubsystem::StaticClass, TEXT("UMassEntitySubsystem"), &Z_Registration_Info_UClass_UMassEntitySubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassEntitySubsystem), 520620937U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassEntitySubsystem_h_4126464756(TEXT("/Script/MassEntity"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassEntitySubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassEntitySubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
