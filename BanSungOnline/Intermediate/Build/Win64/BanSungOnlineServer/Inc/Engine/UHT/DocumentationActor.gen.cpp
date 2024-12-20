// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/DocumentationActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDocumentationActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_ADocumentationActor();
ENGINE_API UClass* Z_Construct_UClass_ADocumentationActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialBillboardComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ADocumentationActor
void ADocumentationActor::StaticRegisterNativesADocumentationActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADocumentationActor);
UClass* Z_Construct_UClass_ADocumentationActor_NoRegister()
{
	return ADocumentationActor::StaticClass();
}
struct Z_Construct_UClass_ADocumentationActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Sprite MaterialSprite Actor Transform Tags Materials Rendering Components Blueprint bject Collision Display Physics Input Lighting Layers" },
		{ "IncludePath", "Engine/DocumentationActor.h" },
		{ "ModuleRelativePath", "Classes/Engine/DocumentationActor.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DocumentLink_MetaData[] = {
		{ "Category", "HelpDocumentation" },
		{ "Comment", "/** Link to a help document. */" },
		{ "ModuleRelativePath", "Classes/Engine/DocumentationActor.h" },
		{ "ToolTip", "Link to a help document." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Billboard_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sprite" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/DocumentationActor.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DocumentLink;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Billboard;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADocumentationActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ADocumentationActor_Statics::NewProp_DocumentLink = { "DocumentLink", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADocumentationActor, DocumentLink), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DocumentLink_MetaData), NewProp_DocumentLink_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADocumentationActor_Statics::NewProp_Billboard = { "Billboard", nullptr, (EPropertyFlags)0x01440008000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADocumentationActor, Billboard), Z_Construct_UClass_UMaterialBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Billboard_MetaData), NewProp_Billboard_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADocumentationActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADocumentationActor_Statics::NewProp_DocumentLink,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADocumentationActor_Statics::NewProp_Billboard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADocumentationActor_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_ADocumentationActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADocumentationActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADocumentationActor_Statics::ClassParams = {
	&ADocumentationActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_ADocumentationActor_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_ADocumentationActor_Statics::PropPointers), 0),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADocumentationActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ADocumentationActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADocumentationActor()
{
	if (!Z_Registration_Info_UClass_ADocumentationActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADocumentationActor.OuterSingleton, Z_Construct_UClass_ADocumentationActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADocumentationActor.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ADocumentationActor>()
{
	return ADocumentationActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADocumentationActor);
ADocumentationActor::~ADocumentationActor() {}
// End Class ADocumentationActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADocumentationActor, ADocumentationActor::StaticClass, TEXT("ADocumentationActor"), &Z_Registration_Info_UClass_ADocumentationActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADocumentationActor), 858658905U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_2865563584(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
