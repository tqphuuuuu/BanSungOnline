// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Variants/MovieSceneNumericVariantGetter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNumericVariantGetter() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNumericVariantGetter();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNumericVariantGetter_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSignedObject();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Class UMovieSceneNumericVariantGetter
void UMovieSceneNumericVariantGetter::StaticRegisterNativesUMovieSceneNumericVariantGetter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneNumericVariantGetter);
UClass* Z_Construct_UClass_UMovieSceneNumericVariantGetter_NoRegister()
{
	return UMovieSceneNumericVariantGetter::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneNumericVariantGetter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for all dynamic getter types supplied to an FMovieSceneNumericVariant\n */" },
		{ "IncludePath", "Variants/MovieSceneNumericVariantGetter.h" },
		{ "ModuleRelativePath", "Public/Variants/MovieSceneNumericVariantGetter.h" },
		{ "ToolTip", "Base class for all dynamic getter types supplied to an FMovieSceneNumericVariant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceToSelf_MetaData[] = {
		{ "Comment", "/**\n\x09 * Reference to self used to report this object to the reference graph inside FMovieSceneNumericVariant::AddStructReferencedObjects\n\x09 */" },
		{ "ModuleRelativePath", "Public/Variants/MovieSceneNumericVariantGetter.h" },
		{ "ToolTip", "Reference to self used to report this object to the reference graph inside FMovieSceneNumericVariant::AddStructReferencedObjects" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReferenceToSelf;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneNumericVariantGetter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneNumericVariantGetter_Statics::NewProp_ReferenceToSelf = { "ReferenceToSelf", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneNumericVariantGetter, ReferenceToSelf), Z_Construct_UClass_UMovieSceneNumericVariantGetter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferenceToSelf_MetaData), NewProp_ReferenceToSelf_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneNumericVariantGetter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNumericVariantGetter_Statics::NewProp_ReferenceToSelf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNumericVariantGetter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneNumericVariantGetter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSignedObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNumericVariantGetter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneNumericVariantGetter_Statics::ClassParams = {
	&UMovieSceneNumericVariantGetter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneNumericVariantGetter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNumericVariantGetter_Statics::PropPointers),
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNumericVariantGetter_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneNumericVariantGetter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneNumericVariantGetter()
{
	if (!Z_Registration_Info_UClass_UMovieSceneNumericVariantGetter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneNumericVariantGetter.OuterSingleton, Z_Construct_UClass_UMovieSceneNumericVariantGetter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneNumericVariantGetter.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneNumericVariantGetter>()
{
	return UMovieSceneNumericVariantGetter::StaticClass();
}
UMovieSceneNumericVariantGetter::UMovieSceneNumericVariantGetter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneNumericVariantGetter);
UMovieSceneNumericVariantGetter::~UMovieSceneNumericVariantGetter() {}
// End Class UMovieSceneNumericVariantGetter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneNumericVariantGetter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneNumericVariantGetter, UMovieSceneNumericVariantGetter::StaticClass, TEXT("UMovieSceneNumericVariantGetter"), &Z_Registration_Info_UClass_UMovieSceneNumericVariantGetter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneNumericVariantGetter), 2323217658U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneNumericVariantGetter_h_2058351504(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneNumericVariantGetter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Variants_MovieSceneNumericVariantGetter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
