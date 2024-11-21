// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/OptimusSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusSource() {}

// Begin Cross Module References
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeSource();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusShaderTextProvider_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSource();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSource_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Class UOptimusSource
void UOptimusSource::StaticRegisterNativesUOptimusSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusSource);
UClass* Z_Construct_UClass_UOptimusSource_NoRegister()
{
	return UOptimusSource::StaticClass();
}
struct Z_Construct_UClass_UOptimusSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OptimusSource.h" },
		{ "ModuleRelativePath", "Public/OptimusSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceText_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** HLSL Source. */" },
		{ "DisplayAfter", "AdditionalSources" },
		{ "ModuleRelativePath", "Public/OptimusSource.h" },
		{ "ToolTip", "HLSL Source." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOptimusSource_Statics::NewProp_SourceText = { "SourceText", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusSource, SourceText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceText_MetaData), NewProp_SourceText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusSource_Statics::NewProp_SourceText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UComputeSource,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOptimusSource_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UOptimusShaderTextProvider_NoRegister, (int32)VTABLE_OFFSET(UOptimusSource, IOptimusShaderTextProvider), false },  // 3448967477
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusSource_Statics::ClassParams = {
	&UOptimusSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusSource_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSource_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusSource()
{
	if (!Z_Registration_Info_UClass_UOptimusSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusSource.OuterSingleton, Z_Construct_UClass_UOptimusSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusSource.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusSource>()
{
	return UOptimusSource::StaticClass();
}
UOptimusSource::UOptimusSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusSource);
UOptimusSource::~UOptimusSource() {}
// End Class UOptimusSource

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusSource_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusSource, UOptimusSource::StaticClass, TEXT("UOptimusSource"), &Z_Registration_Info_UClass_UOptimusSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusSource), 893286015U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusSource_h_3512807822(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusSource_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
