// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/IOptimusOutputBufferWriter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOptimusOutputBufferWriter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusOutputBufferWriter();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusOutputBufferWriter_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Interface UOptimusOutputBufferWriter
void UOptimusOutputBufferWriter::StaticRegisterNativesUOptimusOutputBufferWriter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusOutputBufferWriter);
UClass* Z_Construct_UClass_UOptimusOutputBufferWriter_NoRegister()
{
	return UOptimusOutputBufferWriter::StaticClass();
}
struct Z_Construct_UClass_UOptimusOutputBufferWriter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IOptimusOutputBufferWriter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOptimusOutputBufferWriter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusOutputBufferWriter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusOutputBufferWriter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusOutputBufferWriter_Statics::ClassParams = {
	&UOptimusOutputBufferWriter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusOutputBufferWriter_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusOutputBufferWriter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusOutputBufferWriter()
{
	if (!Z_Registration_Info_UClass_UOptimusOutputBufferWriter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusOutputBufferWriter.OuterSingleton, Z_Construct_UClass_UOptimusOutputBufferWriter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusOutputBufferWriter.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusOutputBufferWriter>()
{
	return UOptimusOutputBufferWriter::StaticClass();
}
UOptimusOutputBufferWriter::UOptimusOutputBufferWriter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusOutputBufferWriter);
UOptimusOutputBufferWriter::~UOptimusOutputBufferWriter() {}
// End Interface UOptimusOutputBufferWriter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusOutputBufferWriter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusOutputBufferWriter, UOptimusOutputBufferWriter::StaticClass, TEXT("UOptimusOutputBufferWriter"), &Z_Registration_Info_UClass_UOptimusOutputBufferWriter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusOutputBufferWriter), 2834014048U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusOutputBufferWriter_h_3454719175(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusOutputBufferWriter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusOutputBufferWriter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
