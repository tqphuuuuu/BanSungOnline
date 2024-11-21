// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/IOptimusDeformerInstanceAccessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOptimusDeformerInstanceAccessor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeformerInstanceAccessor();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeformerInstanceAccessor_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Interface UOptimusDeformerInstanceAccessor
void UOptimusDeformerInstanceAccessor::StaticRegisterNativesUOptimusDeformerInstanceAccessor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusDeformerInstanceAccessor);
UClass* Z_Construct_UClass_UOptimusDeformerInstanceAccessor_NoRegister()
{
	return UOptimusDeformerInstanceAccessor::StaticClass();
}
struct Z_Construct_UClass_UOptimusDeformerInstanceAccessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IOptimusDeformerInstanceAccessor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOptimusDeformerInstanceAccessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusDeformerInstanceAccessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformerInstanceAccessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusDeformerInstanceAccessor_Statics::ClassParams = {
	&UOptimusDeformerInstanceAccessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformerInstanceAccessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusDeformerInstanceAccessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusDeformerInstanceAccessor()
{
	if (!Z_Registration_Info_UClass_UOptimusDeformerInstanceAccessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusDeformerInstanceAccessor.OuterSingleton, Z_Construct_UClass_UOptimusDeformerInstanceAccessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusDeformerInstanceAccessor.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusDeformerInstanceAccessor>()
{
	return UOptimusDeformerInstanceAccessor::StaticClass();
}
UOptimusDeformerInstanceAccessor::UOptimusDeformerInstanceAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusDeformerInstanceAccessor);
UOptimusDeformerInstanceAccessor::~UOptimusDeformerInstanceAccessor() {}
// End Interface UOptimusDeformerInstanceAccessor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeformerInstanceAccessor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusDeformerInstanceAccessor, UOptimusDeformerInstanceAccessor::StaticClass, TEXT("UOptimusDeformerInstanceAccessor"), &Z_Registration_Info_UClass_UOptimusDeformerInstanceAccessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusDeformerInstanceAccessor), 1833869264U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeformerInstanceAccessor_h_1290028417(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeformerInstanceAccessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeformerInstanceAccessor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
