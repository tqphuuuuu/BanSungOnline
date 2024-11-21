// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkMovieScene/Public/MovieScene/MovieSceneLiveLinkSection.h"
#include "Runtime/LiveLinkInterface/Public/LiveLinkPresetTypes.h"
#include "Runtime/LiveLinkInterface/Public/LiveLinkRefSkeleton.h"
#include "Runtime/LiveLinkInterface/Public/LiveLinkTypes.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneFloatChannel.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkSection() {}

// Begin Cross Module References
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkFrameData();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkRefSkeleton();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectPreset();
LIVELINKMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkSection();
LIVELINKMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkSection_NoRegister();
LIVELINKMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSection_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
UPackage* Z_Construct_UPackage__Script_LiveLinkMovieScene();
// End Cross Module References

// Begin Class UMovieSceneLiveLinkSection
void UMovieSceneLiveLinkSection::StaticRegisterNativesUMovieSceneLiveLinkSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneLiveLinkSection);
UClass* Z_Construct_UClass_UMovieSceneLiveLinkSection_NoRegister()
{
	return UMovieSceneLiveLinkSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A movie scene section for all live link recorded data\n*/" },
		{ "IncludePath", "MovieScene/MovieSceneLiveLinkSection.h" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A movie scene section for all live link recorded data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubjectPreset_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelMask_MetaData[] = {
		{ "Comment", "// Channels that we may not send to live link or they are sent but not priority (MattH to do).\n" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkSection.h" },
		{ "ToolTip", "Channels that we may not send to live link or they are sent but not priority (MattH to do)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubSections_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemplateToPush_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefSkeleton_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyFloatChannels_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkSection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubjectPreset;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ChannelMask_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChannelMask;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SubSections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SubSections;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SubjectName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TemplateToPush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RefSkeleton;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurveNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveNames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyFloatChannels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyFloatChannels;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneLiveLinkSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_SubjectPreset = { "SubjectPreset", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneLiveLinkSection, SubjectPreset), Z_Construct_UScriptStruct_FLiveLinkSubjectPreset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubjectPreset_MetaData), NewProp_SubjectPreset_MetaData) }; // 2293914654
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_ChannelMask_Inner = { "ChannelMask", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_ChannelMask = { "ChannelMask", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneLiveLinkSection, ChannelMask), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelMask_MetaData), NewProp_ChannelMask_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_SubSections_Inner = { "SubSections", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneLiveLinkSubSection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_SubSections = { "SubSections", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneLiveLinkSection, SubSections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubSections_MetaData), NewProp_SubSections_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneLiveLinkSection, SubjectName_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubjectName_MetaData), NewProp_SubjectName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_TemplateToPush = { "TemplateToPush", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneLiveLinkSection, TemplateToPush_DEPRECATED), Z_Construct_UScriptStruct_FLiveLinkFrameData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemplateToPush_MetaData), NewProp_TemplateToPush_MetaData) }; // 2056396206
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_RefSkeleton = { "RefSkeleton", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneLiveLinkSection, RefSkeleton_DEPRECATED), Z_Construct_UScriptStruct_FLiveLinkRefSkeleton, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefSkeleton_MetaData), NewProp_RefSkeleton_MetaData) }; // 3061382430
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_CurveNames_Inner = { "CurveNames", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_CurveNames = { "CurveNames", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneLiveLinkSection, CurveNames_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveNames_MetaData), NewProp_CurveNames_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_PropertyFloatChannels_Inner = { "PropertyFloatChannels", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(0, nullptr) }; // 139010471
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_PropertyFloatChannels = { "PropertyFloatChannels", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneLiveLinkSection, PropertyFloatChannels_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyFloatChannels_MetaData), NewProp_PropertyFloatChannels_MetaData) }; // 139010471
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_SubjectPreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_ChannelMask_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_ChannelMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_SubSections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_SubSections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_SubjectName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_TemplateToPush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_RefSkeleton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_CurveNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_CurveNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_PropertyFloatChannels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_PropertyFloatChannels,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::ClassParams = {
	&UMovieSceneLiveLinkSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneLiveLinkSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneLiveLinkSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneLiveLinkSection.OuterSingleton, Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneLiveLinkSection.OuterSingleton;
}
template<> LIVELINKMOVIESCENE_API UClass* StaticClass<UMovieSceneLiveLinkSection>()
{
	return UMovieSceneLiveLinkSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneLiveLinkSection);
UMovieSceneLiveLinkSection::~UMovieSceneLiveLinkSection() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneLiveLinkSection)
// End Class UMovieSceneLiveLinkSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneLiveLinkSection, UMovieSceneLiveLinkSection::StaticClass, TEXT("UMovieSceneLiveLinkSection"), &Z_Registration_Info_UClass_UMovieSceneLiveLinkSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneLiveLinkSection), 3462137140U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSection_h_3244565367(TEXT("/Script/LiveLinkMovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
