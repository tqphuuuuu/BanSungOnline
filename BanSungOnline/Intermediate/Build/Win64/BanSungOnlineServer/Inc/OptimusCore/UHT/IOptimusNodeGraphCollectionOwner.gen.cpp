// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/IOptimusNodeGraphCollectionOwner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOptimusNodeGraphCollectionOwner() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeGraphCollectionOwner();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeGraphCollectionOwner_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Interface UOptimusNodeGraphCollectionOwner
void UOptimusNodeGraphCollectionOwner::StaticRegisterNativesUOptimusNodeGraphCollectionOwner()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNodeGraphCollectionOwner);
UClass* Z_Construct_UClass_UOptimusNodeGraphCollectionOwner_NoRegister()
{
	return UOptimusNodeGraphCollectionOwner::StaticClass();
}
struct Z_Construct_UClass_UOptimusNodeGraphCollectionOwner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IOptimusNodeGraphCollectionOwner.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOptimusNodeGraphCollectionOwner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusNodeGraphCollectionOwner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeGraphCollectionOwner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNodeGraphCollectionOwner_Statics::ClassParams = {
	&UOptimusNodeGraphCollectionOwner::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeGraphCollectionOwner_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusNodeGraphCollectionOwner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusNodeGraphCollectionOwner()
{
	if (!Z_Registration_Info_UClass_UOptimusNodeGraphCollectionOwner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNodeGraphCollectionOwner.OuterSingleton, Z_Construct_UClass_UOptimusNodeGraphCollectionOwner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusNodeGraphCollectionOwner.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNodeGraphCollectionOwner>()
{
	return UOptimusNodeGraphCollectionOwner::StaticClass();
}
UOptimusNodeGraphCollectionOwner::UOptimusNodeGraphCollectionOwner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNodeGraphCollectionOwner);
UOptimusNodeGraphCollectionOwner::~UOptimusNodeGraphCollectionOwner() {}
// End Interface UOptimusNodeGraphCollectionOwner

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeGraphCollectionOwner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNodeGraphCollectionOwner, UOptimusNodeGraphCollectionOwner::StaticClass, TEXT("UOptimusNodeGraphCollectionOwner"), &Z_Registration_Info_UClass_UOptimusNodeGraphCollectionOwner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNodeGraphCollectionOwner), 1130611942U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeGraphCollectionOwner_h_114037644(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeGraphCollectionOwner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeGraphCollectionOwner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
