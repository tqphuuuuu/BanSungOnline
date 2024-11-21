// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/OptimusKernelSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusKernelSource() {}

// Begin Cross Module References
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeKernelSource();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusKernelSource();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusKernelSource_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Class UOptimusKernelSource
void UOptimusKernelSource::StaticRegisterNativesUOptimusKernelSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusKernelSource);
UClass* Z_Construct_UClass_UOptimusKernelSource_NoRegister()
{
	return UOptimusKernelSource::StaticClass();
}
struct Z_Construct_UClass_UOptimusKernelSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OptimusKernelSource.h" },
		{ "ModuleRelativePath", "Public/OptimusKernelSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusKernelSource.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Source;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusKernelSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOptimusKernelSource_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusKernelSource, Source), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusKernelSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusKernelSource_Statics::NewProp_Source,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusKernelSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusKernelSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UComputeKernelSource,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusKernelSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusKernelSource_Statics::ClassParams = {
	&UOptimusKernelSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusKernelSource_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusKernelSource_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusKernelSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusKernelSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusKernelSource()
{
	if (!Z_Registration_Info_UClass_UOptimusKernelSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusKernelSource.OuterSingleton, Z_Construct_UClass_UOptimusKernelSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusKernelSource.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusKernelSource>()
{
	return UOptimusKernelSource::StaticClass();
}
UOptimusKernelSource::UOptimusKernelSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusKernelSource);
UOptimusKernelSource::~UOptimusKernelSource() {}
// End Class UOptimusKernelSource

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusKernelSource_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusKernelSource, UOptimusKernelSource::StaticClass, TEXT("UOptimusKernelSource"), &Z_Registration_Info_UClass_UOptimusKernelSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusKernelSource), 2813719172U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusKernelSource_h_611311301(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusKernelSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusKernelSource_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
