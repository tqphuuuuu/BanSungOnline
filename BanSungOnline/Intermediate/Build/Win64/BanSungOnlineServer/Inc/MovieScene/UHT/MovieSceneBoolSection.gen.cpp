// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Sections/MovieSceneBoolSection.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneBoolChannel.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBoolSection() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBoolSection();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBoolSection_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBoolChannel();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Class UMovieSceneBoolSection
void UMovieSceneBoolSection::StaticRegisterNativesUMovieSceneBoolSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneBoolSection);
UClass* Z_Construct_UClass_UMovieSceneBoolSection_NoRegister()
{
	return UMovieSceneBoolSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneBoolSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A single bool section.\n */" },
		{ "IncludePath", "Sections/MovieSceneBoolSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneBoolSection.h" },
		{ "ToolTip", "A single bool section." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Comment", "/** The default value to use when no keys are present - use GetCurve().SetDefaultValue() */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneBoolSection.h" },
		{ "ToolTip", "The default value to use when no keys are present - use GetCurve().SetDefaultValue()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoolCurve_MetaData[] = {
		{ "Comment", "/** Ordered curve data */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneBoolSection.h" },
		{ "ToolTip", "Ordered curve data" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsExternallyInverted_MetaData[] = {
		{ "Comment", "/** True if this section represents a property that is the inversion of the values stored on this channel */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneBoolSection.h" },
		{ "ToolTip", "True if this section represents a property that is the inversion of the values stored on this channel" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static void NewProp_DefaultValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoolCurve;
#if WITH_EDITORONLY_DATA
	static void NewProp_bIsExternallyInverted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExternallyInverted;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneBoolSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMovieSceneBoolSection_Statics::NewProp_DefaultValue_SetBit(void* Obj)
{
	((UMovieSceneBoolSection*)Obj)->DefaultValue_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneBoolSection_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneBoolSection), &Z_Construct_UClass_UMovieSceneBoolSection_Statics::NewProp_DefaultValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneBoolSection_Statics::NewProp_BoolCurve = { "BoolCurve", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneBoolSection, BoolCurve), Z_Construct_UScriptStruct_FMovieSceneBoolChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoolCurve_MetaData), NewProp_BoolCurve_MetaData) }; // 2663502824
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UMovieSceneBoolSection_Statics::NewProp_bIsExternallyInverted_SetBit(void* Obj)
{
	((UMovieSceneBoolSection*)Obj)->bIsExternallyInverted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneBoolSection_Statics::NewProp_bIsExternallyInverted = { "bIsExternallyInverted", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneBoolSection), &Z_Construct_UClass_UMovieSceneBoolSection_Statics::NewProp_bIsExternallyInverted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsExternallyInverted_MetaData), NewProp_bIsExternallyInverted_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneBoolSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneBoolSection_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneBoolSection_Statics::NewProp_BoolCurve,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneBoolSection_Statics::NewProp_bIsExternallyInverted,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBoolSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneBoolSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBoolSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneBoolSection_Statics::ClassParams = {
	&UMovieSceneBoolSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneBoolSection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBoolSection_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBoolSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneBoolSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneBoolSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneBoolSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneBoolSection.OuterSingleton, Z_Construct_UClass_UMovieSceneBoolSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneBoolSection.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneBoolSection>()
{
	return UMovieSceneBoolSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneBoolSection);
UMovieSceneBoolSection::~UMovieSceneBoolSection() {}
#if WITH_EDITORONLY_DATA
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneBoolSection)
#endif // WITH_EDITORONLY_DATA
// End Class UMovieSceneBoolSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneBoolSection, UMovieSceneBoolSection::StaticClass, TEXT("UMovieSceneBoolSection"), &Z_Registration_Info_UClass_UMovieSceneBoolSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneBoolSection), 597047838U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_2563943347(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
