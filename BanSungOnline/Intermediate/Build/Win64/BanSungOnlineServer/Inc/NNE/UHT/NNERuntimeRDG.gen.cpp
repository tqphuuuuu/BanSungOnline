// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NNE/Public/NNERuntimeRDG.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNNERuntimeRDG() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NNE_API UClass* Z_Construct_UClass_UNNERuntimeRDG();
NNE_API UClass* Z_Construct_UClass_UNNERuntimeRDG_NoRegister();
UPackage* Z_Construct_UPackage__Script_NNE();
// End Cross Module References

// Begin Interface UNNERuntimeRDG
void UNNERuntimeRDG::StaticRegisterNativesUNNERuntimeRDG()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNNERuntimeRDG);
UClass* Z_Construct_UClass_UNNERuntimeRDG_NoRegister()
{
	return UNNERuntimeRDG::StaticClass();
}
struct Z_Construct_UClass_UNNERuntimeRDG_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NNERuntimeRDG.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INNERuntimeRDG>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNNERuntimeRDG_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NNE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNNERuntimeRDG_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNNERuntimeRDG_Statics::ClassParams = {
	&UNNERuntimeRDG::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNNERuntimeRDG_Statics::Class_MetaDataParams), Z_Construct_UClass_UNNERuntimeRDG_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNNERuntimeRDG()
{
	if (!Z_Registration_Info_UClass_UNNERuntimeRDG.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNNERuntimeRDG.OuterSingleton, Z_Construct_UClass_UNNERuntimeRDG_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNNERuntimeRDG.OuterSingleton;
}
template<> NNE_API UClass* StaticClass<UNNERuntimeRDG>()
{
	return UNNERuntimeRDG::StaticClass();
}
UNNERuntimeRDG::UNNERuntimeRDG(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNNERuntimeRDG);
UNNERuntimeRDG::~UNNERuntimeRDG() {}
// End Interface UNNERuntimeRDG

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNERuntimeRDG_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNNERuntimeRDG, UNNERuntimeRDG::StaticClass, TEXT("UNNERuntimeRDG"), &Z_Registration_Info_UClass_UNNERuntimeRDG, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNNERuntimeRDG), 809491233U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNERuntimeRDG_h_3405794033(TEXT("/Script/NNE"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNERuntimeRDG_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNERuntimeRDG_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
