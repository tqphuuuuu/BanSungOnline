// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Import/Public/Texture/InterchangeImageWrapperTranslator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeImageWrapperTranslator() {}

// Begin Cross Module References
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeTranslatorBase();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeImageWrapperTranslator();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeImageWrapperTranslator_NoRegister();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeTexturePayloadInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References

// Begin Class UInterchangeImageWrapperTranslator
void UInterchangeImageWrapperTranslator::StaticRegisterNativesUInterchangeImageWrapperTranslator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeImageWrapperTranslator);
UClass* Z_Construct_UClass_UInterchangeImageWrapperTranslator_NoRegister()
{
	return UInterchangeImageWrapperTranslator::StaticClass();
}
struct Z_Construct_UClass_UInterchangeImageWrapperTranslator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A translator for most of the image wrapper supported formats\n */" },
		{ "IncludePath", "Texture/InterchangeImageWrapperTranslator.h" },
		{ "ModuleRelativePath", "Public/Texture/InterchangeImageWrapperTranslator.h" },
		{ "ToolTip", "A translator for most of the image wrapper supported formats" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeImageWrapperTranslator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeImageWrapperTranslator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeTranslatorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeImageWrapperTranslator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInterchangeImageWrapperTranslator_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterchangeTexturePayloadInterface_NoRegister, (int32)VTABLE_OFFSET(UInterchangeImageWrapperTranslator, IInterchangeTexturePayloadInterface), false },  // 3669720233
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeImageWrapperTranslator_Statics::ClassParams = {
	&UInterchangeImageWrapperTranslator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeImageWrapperTranslator_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeImageWrapperTranslator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeImageWrapperTranslator()
{
	if (!Z_Registration_Info_UClass_UInterchangeImageWrapperTranslator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeImageWrapperTranslator.OuterSingleton, Z_Construct_UClass_UInterchangeImageWrapperTranslator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeImageWrapperTranslator.OuterSingleton;
}
template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeImageWrapperTranslator>()
{
	return UInterchangeImageWrapperTranslator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeImageWrapperTranslator);
UInterchangeImageWrapperTranslator::~UInterchangeImageWrapperTranslator() {}
// End Class UInterchangeImageWrapperTranslator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeImageWrapperTranslator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeImageWrapperTranslator, UInterchangeImageWrapperTranslator::StaticClass, TEXT("UInterchangeImageWrapperTranslator"), &Z_Registration_Info_UClass_UInterchangeImageWrapperTranslator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeImageWrapperTranslator), 3090172725U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeImageWrapperTranslator_h_3222840432(TEXT("/Script/InterchangeImport"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeImageWrapperTranslator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeImageWrapperTranslator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
