// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/BlockingVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockingVolume() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ABlockingVolume();
ENGINE_API UClass* Z_Construct_UClass_ABlockingVolume_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AVolume();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ABlockingVolume
void ABlockingVolume::StaticRegisterNativesABlockingVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABlockingVolume);
UClass* Z_Construct_UClass_ABlockingVolume_NoRegister()
{
	return ABlockingVolume::StaticClass();
}
struct Z_Construct_UClass_ABlockingVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** An invisible volume used to block other actors. */" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Engine/BlockingVolume.h" },
		{ "ModuleRelativePath", "Classes/Engine/BlockingVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "An invisible volume used to block other actors." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlockingVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABlockingVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlockingVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlockingVolume_Statics::ClassParams = {
	&ABlockingVolume::StaticClass,
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
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlockingVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlockingVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABlockingVolume()
{
	if (!Z_Registration_Info_UClass_ABlockingVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlockingVolume.OuterSingleton, Z_Construct_UClass_ABlockingVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABlockingVolume.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ABlockingVolume>()
{
	return ABlockingVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABlockingVolume);
ABlockingVolume::~ABlockingVolume() {}
// End Class ABlockingVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlockingVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABlockingVolume, ABlockingVolume::StaticClass, TEXT("ABlockingVolume"), &Z_Registration_Info_UClass_ABlockingVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlockingVolume), 397843731U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlockingVolume_h_1976747068(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlockingVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlockingVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
