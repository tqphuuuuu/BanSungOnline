// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneRotatorSection.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneDoubleChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneRotatorSection() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDoubleChannel();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneRotatorSection();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneRotatorSection_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneRotatorSection
void UMovieSceneRotatorSection::StaticRegisterNativesUMovieSceneRotatorSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneRotatorSection);
UClass* Z_Construct_UClass_UMovieSceneRotatorSection_NoRegister()
{
	return UMovieSceneRotatorSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneRotatorSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Movie scene section that animates each component (X, Y, Z) of an FRotator property */" },
		{ "IncludePath", "Sections/MovieSceneRotatorSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneRotatorSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Movie scene section that animates each component (X, Y, Z) of an FRotator property" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneRotatorSection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneRotatorSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneRotatorSection_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(Rotation, UMovieSceneRotatorSection), STRUCT_OFFSET(UMovieSceneRotatorSection, Rotation), Z_Construct_UScriptStruct_FMovieSceneDoubleChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) }; // 3417982846
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneRotatorSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneRotatorSection_Statics::NewProp_Rotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneRotatorSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneRotatorSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneRotatorSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneRotatorSection_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneRotatorSection, IMovieSceneEntityProvider), false },  // 1280352339
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneRotatorSection_Statics::ClassParams = {
	&UMovieSceneRotatorSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneRotatorSection_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneRotatorSection_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneRotatorSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneRotatorSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneRotatorSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneRotatorSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneRotatorSection.OuterSingleton, Z_Construct_UClass_UMovieSceneRotatorSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneRotatorSection.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneRotatorSection>()
{
	return UMovieSceneRotatorSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneRotatorSection);
UMovieSceneRotatorSection::~UMovieSceneRotatorSection() {}
// End Class UMovieSceneRotatorSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneRotatorSection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneRotatorSection, UMovieSceneRotatorSection::StaticClass, TEXT("UMovieSceneRotatorSection"), &Z_Registration_Info_UClass_UMovieSceneRotatorSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneRotatorSection), 584125761U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneRotatorSection_h_3008511914(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneRotatorSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneRotatorSection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
