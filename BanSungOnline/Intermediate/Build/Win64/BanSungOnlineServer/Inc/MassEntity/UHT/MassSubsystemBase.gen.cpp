// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MassEntity/Public/MassSubsystemBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassSubsystemBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
MASSENTITY_API UClass* Z_Construct_UClass_UMassSubsystemBase();
MASSENTITY_API UClass* Z_Construct_UClass_UMassSubsystemBase_NoRegister();
MASSENTITY_API UClass* Z_Construct_UClass_UMassTickableSubsystemBase();
MASSENTITY_API UClass* Z_Construct_UClass_UMassTickableSubsystemBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassEntity();
// End Cross Module References

// Begin Class UMassSubsystemBase
void UMassSubsystemBase::StaticRegisterNativesUMassSubsystemBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassSubsystemBase);
UClass* Z_Construct_UClass_UMassSubsystemBase_NoRegister()
{
	return UMassSubsystemBase::StaticClass();
}
struct Z_Construct_UClass_UMassSubsystemBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * The sole responsibility of this world subsystem class is to serve functionality common to all \n * Mass-related UWorldSubsystem-based subsystems, like whether the subsystems should get created at all. \n */" },
		{ "IncludePath", "MassSubsystemBase.h" },
		{ "ModuleRelativePath", "Public/MassSubsystemBase.h" },
		{ "ToolTip", "The sole responsibility of this world subsystem class is to serve functionality common to all\nMass-related UWorldSubsystem-based subsystems, like whether the subsystems should get created at all." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassSubsystemBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMassSubsystemBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassSubsystemBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassSubsystemBase_Statics::ClassParams = {
	&UMassSubsystemBase::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassSubsystemBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassSubsystemBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassSubsystemBase()
{
	if (!Z_Registration_Info_UClass_UMassSubsystemBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassSubsystemBase.OuterSingleton, Z_Construct_UClass_UMassSubsystemBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassSubsystemBase.OuterSingleton;
}
template<> MASSENTITY_API UClass* StaticClass<UMassSubsystemBase>()
{
	return UMassSubsystemBase::StaticClass();
}
UMassSubsystemBase::UMassSubsystemBase() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassSubsystemBase);
UMassSubsystemBase::~UMassSubsystemBase() {}
// End Class UMassSubsystemBase

// Begin Class UMassTickableSubsystemBase
void UMassTickableSubsystemBase::StaticRegisterNativesUMassTickableSubsystemBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTickableSubsystemBase);
UClass* Z_Construct_UClass_UMassTickableSubsystemBase_NoRegister()
{
	return UMassTickableSubsystemBase::StaticClass();
}
struct Z_Construct_UClass_UMassTickableSubsystemBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The sole responsibility of this tickable world subsystem class is to serve functionality common to all\n * Mass-related UTickableWorldSubsystem-based subsystems, like whether the subsystems should get created at all.\n */" },
		{ "IncludePath", "MassSubsystemBase.h" },
		{ "ModuleRelativePath", "Public/MassSubsystemBase.h" },
		{ "ToolTip", "The sole responsibility of this tickable world subsystem class is to serve functionality common to all\nMass-related UTickableWorldSubsystem-based subsystems, like whether the subsystems should get created at all." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTickableSubsystemBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMassTickableSubsystemBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTickableSubsystemBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTickableSubsystemBase_Statics::ClassParams = {
	&UMassTickableSubsystemBase::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTickableSubsystemBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTickableSubsystemBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassTickableSubsystemBase()
{
	if (!Z_Registration_Info_UClass_UMassTickableSubsystemBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTickableSubsystemBase.OuterSingleton, Z_Construct_UClass_UMassTickableSubsystemBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTickableSubsystemBase.OuterSingleton;
}
template<> MASSENTITY_API UClass* StaticClass<UMassTickableSubsystemBase>()
{
	return UMassTickableSubsystemBase::StaticClass();
}
UMassTickableSubsystemBase::UMassTickableSubsystemBase() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTickableSubsystemBase);
UMassTickableSubsystemBase::~UMassTickableSubsystemBase() {}
// End Class UMassTickableSubsystemBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassSubsystemBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassSubsystemBase, UMassSubsystemBase::StaticClass, TEXT("UMassSubsystemBase"), &Z_Registration_Info_UClass_UMassSubsystemBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassSubsystemBase), 2339813838U) },
		{ Z_Construct_UClass_UMassTickableSubsystemBase, UMassTickableSubsystemBase::StaticClass, TEXT("UMassTickableSubsystemBase"), &Z_Registration_Info_UClass_UMassTickableSubsystemBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTickableSubsystemBase), 1206399590U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassSubsystemBase_h_3520554691(TEXT("/Script/MassEntity"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassSubsystemBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassSubsystemBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
