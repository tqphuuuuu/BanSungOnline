// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Landscape/Public/LandscapeSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeProxy_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSubsystem();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References

// Begin Class ULandscapeSubsystem
void ULandscapeSubsystem::StaticRegisterNativesULandscapeSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeSubsystem);
UClass* Z_Construct_UClass_ULandscapeSubsystem_NoRegister()
{
	return ULandscapeSubsystem::StaticClass();
}
struct Z_Construct_UClass_ULandscapeSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LandscapeSubsystem.h" },
		{ "ModuleRelativePath", "Public/LandscapeSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeActors_MetaData[] = {
		{ "Comment", "// UPROPERTY ensures these objects are not deleted before being unregistered\n// (technically not necessary, as actors should always unregister prior to deletion)\n" },
		{ "ModuleRelativePath", "Public/LandscapeSubsystem.h" },
		{ "ToolTip", "UPROPERTY ensures these objects are not deleted before being unregistered\n(technically not necessary, as actors should always unregister prior to deletion)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Proxies_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LandscapeActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LandscapeActors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Proxies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Proxies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeSubsystem_Statics::NewProp_LandscapeActors_Inner = { "LandscapeActors", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeSubsystem_Statics::NewProp_LandscapeActors = { "LandscapeActors", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeSubsystem, LandscapeActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeActors_MetaData), NewProp_LandscapeActors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeSubsystem_Statics::NewProp_Proxies_Inner = { "Proxies", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ALandscapeProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeSubsystem_Statics::NewProp_Proxies = { "Proxies", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeSubsystem, Proxies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Proxies_MetaData), NewProp_Proxies_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSubsystem_Statics::NewProp_LandscapeActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSubsystem_Statics::NewProp_LandscapeActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSubsystem_Statics::NewProp_Proxies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSubsystem_Statics::NewProp_Proxies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULandscapeSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeSubsystem_Statics::ClassParams = {
	&ULandscapeSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULandscapeSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSubsystem_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_ULandscapeSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULandscapeSubsystem()
{
	if (!Z_Registration_Info_UClass_ULandscapeSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeSubsystem.OuterSingleton, Z_Construct_UClass_ULandscapeSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULandscapeSubsystem.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ULandscapeSubsystem>()
{
	return ULandscapeSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeSubsystem);
// End Class ULandscapeSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeSubsystem, ULandscapeSubsystem::StaticClass, TEXT("ULandscapeSubsystem"), &Z_Registration_Info_UClass_ULandscapeSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeSubsystem), 3147540961U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeSubsystem_h_181280386(TEXT("/Script/Landscape"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
