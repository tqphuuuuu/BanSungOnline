// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LiveLinkInterface/Public/LiveLinkFrameTranslator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkFrameTranslator() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFrameTranslator();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFrameTranslator_NoRegister();
UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References

// Begin Class ULiveLinkFrameTranslator
void ULiveLinkFrameTranslator::StaticRegisterNativesULiveLinkFrameTranslator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkFrameTranslator);
UClass* Z_Construct_UClass_ULiveLinkFrameTranslator_NoRegister()
{
	return ULiveLinkFrameTranslator::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkFrameTranslator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "LiveLink" },
		{ "Comment", "/**\n * Basic object to translate data from one role to another\n * @note It can only be used on the Game Thread. See ILiveLinkFrameTranslatorWorker for the any thread implementation.\n */" },
		{ "IncludePath", "LiveLinkFrameTranslator.h" },
		{ "ModuleRelativePath", "Public/LiveLinkFrameTranslator.h" },
		{ "ToolTip", "Basic object to translate data from one role to another\n@note It can only be used on the Game Thread. See ILiveLinkFrameTranslatorWorker for the any thread implementation." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkFrameTranslator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULiveLinkFrameTranslator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkFrameTranslator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkFrameTranslator_Statics::ClassParams = {
	&ULiveLinkFrameTranslator::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkFrameTranslator_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkFrameTranslator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkFrameTranslator()
{
	if (!Z_Registration_Info_UClass_ULiveLinkFrameTranslator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkFrameTranslator.OuterSingleton, Z_Construct_UClass_ULiveLinkFrameTranslator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkFrameTranslator.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkFrameTranslator>()
{
	return ULiveLinkFrameTranslator::StaticClass();
}
ULiveLinkFrameTranslator::ULiveLinkFrameTranslator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkFrameTranslator);
ULiveLinkFrameTranslator::~ULiveLinkFrameTranslator() {}
// End Class ULiveLinkFrameTranslator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkFrameTranslator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkFrameTranslator, ULiveLinkFrameTranslator::StaticClass, TEXT("ULiveLinkFrameTranslator"), &Z_Registration_Info_UClass_ULiveLinkFrameTranslator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkFrameTranslator), 3894651920U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkFrameTranslator_h_4013735113(TEXT("/Script/LiveLinkInterface"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkFrameTranslator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkFrameTranslator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
