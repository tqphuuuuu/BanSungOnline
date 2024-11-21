// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LiveLinkInterface/Public/LiveLinkFramePreProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkFramePreProcessor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFramePreProcessor();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFramePreProcessor_NoRegister();
UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References

// Begin Class ULiveLinkFramePreProcessor
void ULiveLinkFramePreProcessor::StaticRegisterNativesULiveLinkFramePreProcessor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkFramePreProcessor);
UClass* Z_Construct_UClass_ULiveLinkFramePreProcessor_NoRegister()
{
	return ULiveLinkFramePreProcessor::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkFramePreProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "LiveLink" },
		{ "Comment", "/**\n * Basic object to apply preprocessing to a live link frame. \n * Inherit from it to add specific operations / options for a certain type of data\n * @note It can only be used on the Game Thread. See ILiveLinkFramePreProcessorWorker for the any thread implementation.\n */" },
		{ "IncludePath", "LiveLinkFramePreProcessor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkFramePreProcessor.h" },
		{ "ToolTip", "Basic object to apply preprocessing to a live link frame.\nInherit from it to add specific operations / options for a certain type of data\n@note It can only be used on the Game Thread. See ILiveLinkFramePreProcessorWorker for the any thread implementation." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkFramePreProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULiveLinkFramePreProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkFramePreProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkFramePreProcessor_Statics::ClassParams = {
	&ULiveLinkFramePreProcessor::StaticClass,
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
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkFramePreProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkFramePreProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkFramePreProcessor()
{
	if (!Z_Registration_Info_UClass_ULiveLinkFramePreProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkFramePreProcessor.OuterSingleton, Z_Construct_UClass_ULiveLinkFramePreProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkFramePreProcessor.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkFramePreProcessor>()
{
	return ULiveLinkFramePreProcessor::StaticClass();
}
ULiveLinkFramePreProcessor::ULiveLinkFramePreProcessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkFramePreProcessor);
ULiveLinkFramePreProcessor::~ULiveLinkFramePreProcessor() {}
// End Class ULiveLinkFramePreProcessor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkFramePreProcessor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkFramePreProcessor, ULiveLinkFramePreProcessor::StaticClass, TEXT("ULiveLinkFramePreProcessor"), &Z_Registration_Info_UClass_ULiveLinkFramePreProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkFramePreProcessor), 1903113072U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkFramePreProcessor_h_1452805564(TEXT("/Script/LiveLinkInterface"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkFramePreProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkFramePreProcessor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
