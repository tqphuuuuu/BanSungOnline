// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/IOptimusNodeSubGraphReferencer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOptimusNodeSubGraphReferencer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeSubGraphReferencer();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeSubGraphReferencer_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Interface UOptimusNodeSubGraphReferencer
void UOptimusNodeSubGraphReferencer::StaticRegisterNativesUOptimusNodeSubGraphReferencer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNodeSubGraphReferencer);
UClass* Z_Construct_UClass_UOptimusNodeSubGraphReferencer_NoRegister()
{
	return UOptimusNodeSubGraphReferencer::StaticClass();
}
struct Z_Construct_UClass_UOptimusNodeSubGraphReferencer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IOptimusNodeSubGraphReferencer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOptimusNodeSubGraphReferencer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusNodeSubGraphReferencer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeSubGraphReferencer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNodeSubGraphReferencer_Statics::ClassParams = {
	&UOptimusNodeSubGraphReferencer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeSubGraphReferencer_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusNodeSubGraphReferencer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusNodeSubGraphReferencer()
{
	if (!Z_Registration_Info_UClass_UOptimusNodeSubGraphReferencer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNodeSubGraphReferencer.OuterSingleton, Z_Construct_UClass_UOptimusNodeSubGraphReferencer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusNodeSubGraphReferencer.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNodeSubGraphReferencer>()
{
	return UOptimusNodeSubGraphReferencer::StaticClass();
}
UOptimusNodeSubGraphReferencer::UOptimusNodeSubGraphReferencer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNodeSubGraphReferencer);
UOptimusNodeSubGraphReferencer::~UOptimusNodeSubGraphReferencer() {}
// End Interface UOptimusNodeSubGraphReferencer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeSubGraphReferencer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNodeSubGraphReferencer, UOptimusNodeSubGraphReferencer::StaticClass, TEXT("UOptimusNodeSubGraphReferencer"), &Z_Registration_Info_UClass_UOptimusNodeSubGraphReferencer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNodeSubGraphReferencer), 2457316854U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeSubGraphReferencer_h_2619655070(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeSubGraphReferencer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeSubGraphReferencer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
