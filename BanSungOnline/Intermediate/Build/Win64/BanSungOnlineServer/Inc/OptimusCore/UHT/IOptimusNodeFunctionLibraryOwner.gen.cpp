// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/IOptimusNodeFunctionLibraryOwner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOptimusNodeFunctionLibraryOwner() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeFunctionLibraryOwner();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeFunctionLibraryOwner_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Interface UOptimusNodeFunctionLibraryOwner
void UOptimusNodeFunctionLibraryOwner::StaticRegisterNativesUOptimusNodeFunctionLibraryOwner()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNodeFunctionLibraryOwner);
UClass* Z_Construct_UClass_UOptimusNodeFunctionLibraryOwner_NoRegister()
{
	return UOptimusNodeFunctionLibraryOwner::StaticClass();
}
struct Z_Construct_UClass_UOptimusNodeFunctionLibraryOwner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IOptimusNodeFunctionLibraryOwner.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOptimusNodeFunctionLibraryOwner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusNodeFunctionLibraryOwner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeFunctionLibraryOwner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNodeFunctionLibraryOwner_Statics::ClassParams = {
	&UOptimusNodeFunctionLibraryOwner::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeFunctionLibraryOwner_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusNodeFunctionLibraryOwner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusNodeFunctionLibraryOwner()
{
	if (!Z_Registration_Info_UClass_UOptimusNodeFunctionLibraryOwner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNodeFunctionLibraryOwner.OuterSingleton, Z_Construct_UClass_UOptimusNodeFunctionLibraryOwner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusNodeFunctionLibraryOwner.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNodeFunctionLibraryOwner>()
{
	return UOptimusNodeFunctionLibraryOwner::StaticClass();
}
UOptimusNodeFunctionLibraryOwner::UOptimusNodeFunctionLibraryOwner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNodeFunctionLibraryOwner);
UOptimusNodeFunctionLibraryOwner::~UOptimusNodeFunctionLibraryOwner() {}
// End Interface UOptimusNodeFunctionLibraryOwner

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeFunctionLibraryOwner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNodeFunctionLibraryOwner, UOptimusNodeFunctionLibraryOwner::StaticClass, TEXT("UOptimusNodeFunctionLibraryOwner"), &Z_Registration_Info_UClass_UOptimusNodeFunctionLibraryOwner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNodeFunctionLibraryOwner), 817524197U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeFunctionLibraryOwner_h_832177545(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeFunctionLibraryOwner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeFunctionLibraryOwner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
