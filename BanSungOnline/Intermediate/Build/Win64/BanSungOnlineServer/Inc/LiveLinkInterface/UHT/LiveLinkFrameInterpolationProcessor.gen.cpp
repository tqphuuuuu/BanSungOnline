// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LiveLinkInterface/Public/LiveLinkFrameInterpolationProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkFrameInterpolationProcessor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor_NoRegister();
UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References

// Begin Class ULiveLinkFrameInterpolationProcessor
void ULiveLinkFrameInterpolationProcessor::StaticRegisterNativesULiveLinkFrameInterpolationProcessor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkFrameInterpolationProcessor);
UClass* Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor_NoRegister()
{
	return ULiveLinkFrameInterpolationProcessor::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "LiveLink" },
		{ "Comment", "/**\n * Basic object to interpolate live link frames\n * Inherit from it to do custom blending for your data type\n * @note It can only be used on the Game Thread. See ILiveLinkFrameInterpolationProcessorWorker for the any thread implementation.\n */" },
		{ "IncludePath", "LiveLinkFrameInterpolationProcessor.h" },
		{ "ModuleRelativePath", "Public/LiveLinkFrameInterpolationProcessor.h" },
		{ "ToolTip", "Basic object to interpolate live link frames\nInherit from it to do custom blending for your data type\n@note It can only be used on the Game Thread. See ILiveLinkFrameInterpolationProcessorWorker for the any thread implementation." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkFrameInterpolationProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor_Statics::ClassParams = {
	&ULiveLinkFrameInterpolationProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor()
{
	if (!Z_Registration_Info_UClass_ULiveLinkFrameInterpolationProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkFrameInterpolationProcessor.OuterSingleton, Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkFrameInterpolationProcessor.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkFrameInterpolationProcessor>()
{
	return ULiveLinkFrameInterpolationProcessor::StaticClass();
}
ULiveLinkFrameInterpolationProcessor::ULiveLinkFrameInterpolationProcessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkFrameInterpolationProcessor);
ULiveLinkFrameInterpolationProcessor::~ULiveLinkFrameInterpolationProcessor() {}
// End Class ULiveLinkFrameInterpolationProcessor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkFrameInterpolationProcessor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor, ULiveLinkFrameInterpolationProcessor::StaticClass, TEXT("ULiveLinkFrameInterpolationProcessor"), &Z_Registration_Info_UClass_ULiveLinkFrameInterpolationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkFrameInterpolationProcessor), 740164258U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkFrameInterpolationProcessor_h_2760702043(TEXT("/Script/LiveLinkInterface"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkFrameInterpolationProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkFrameInterpolationProcessor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
