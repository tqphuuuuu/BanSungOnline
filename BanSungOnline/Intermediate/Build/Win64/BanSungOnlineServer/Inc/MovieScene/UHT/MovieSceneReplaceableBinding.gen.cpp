// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Bindings/MovieSceneReplaceableBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneReplaceableBinding() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCustomBinding();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneReplaceableBindingBase();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneReplaceableBindingBase_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSpawnableBindingBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Class UMovieSceneReplaceableBindingBase
void UMovieSceneReplaceableBindingBase::StaticRegisterNativesUMovieSceneReplaceableBindingBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneReplaceableBindingBase);
UClass* Z_Construct_UClass_UMovieSceneReplaceableBindingBase_NoRegister()
{
	return UMovieSceneReplaceableBindingBase::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneReplaceableBindingBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The base class for custom replaceable bindings. A replaceable binding uses an internal custom spawnable at editor time to produce a preview object,\n * while in editor will use some other mechanism to dynamically bind an object to the track. Different replaceable types can choose different combinations\n * of how to create a spawnable for preview vs. how to dynamically bind an object at runtime.\n * UMovieSceneReplaceableActorBinding as an example is the simplest type of replaceable binding and provides no method for binding at runtime and relies on the LevelSequenceActor's Binding Override \n * mechanism to bind an actor at runtime.\n */" },
		{ "IncludePath", "Bindings/MovieSceneReplaceableBinding.h" },
		{ "ModuleRelativePath", "Public/Bindings/MovieSceneReplaceableBinding.h" },
		{ "ToolTip", "The base class for custom replaceable bindings. A replaceable binding uses an internal custom spawnable at editor time to produce a preview object,\nwhile in editor will use some other mechanism to dynamically bind an object to the track. Different replaceable types can choose different combinations\nof how to create a spawnable for preview vs. how to dynamically bind an object at runtime.\nUMovieSceneReplaceableActorBinding as an example is the simplest type of replaceable binding and provides no method for binding at runtime and relies on the LevelSequenceActor's Binding Override\nmechanism to bind an actor at runtime." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSpawnable_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// Optional Editor-only preview object\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Bindings/MovieSceneReplaceableBinding.h" },
		{ "ToolTip", "Optional Editor-only preview object" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewSpawnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneReplaceableBindingBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneReplaceableBindingBase_Statics::NewProp_PreviewSpawnable = { "PreviewSpawnable", nullptr, (EPropertyFlags)0x01160008000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneReplaceableBindingBase, PreviewSpawnable), Z_Construct_UClass_UMovieSceneSpawnableBindingBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewSpawnable_MetaData), NewProp_PreviewSpawnable_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneReplaceableBindingBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneReplaceableBindingBase_Statics::NewProp_PreviewSpawnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneReplaceableBindingBase_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UMovieSceneReplaceableBindingBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneCustomBinding,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneReplaceableBindingBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneReplaceableBindingBase_Statics::ClassParams = {
	&UMovieSceneReplaceableBindingBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UMovieSceneReplaceableBindingBase_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneReplaceableBindingBase_Statics::PropPointers), 0),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneReplaceableBindingBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneReplaceableBindingBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneReplaceableBindingBase()
{
	if (!Z_Registration_Info_UClass_UMovieSceneReplaceableBindingBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneReplaceableBindingBase.OuterSingleton, Z_Construct_UClass_UMovieSceneReplaceableBindingBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneReplaceableBindingBase.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneReplaceableBindingBase>()
{
	return UMovieSceneReplaceableBindingBase::StaticClass();
}
UMovieSceneReplaceableBindingBase::UMovieSceneReplaceableBindingBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneReplaceableBindingBase);
UMovieSceneReplaceableBindingBase::~UMovieSceneReplaceableBindingBase() {}
// End Class UMovieSceneReplaceableBindingBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneReplaceableBinding_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneReplaceableBindingBase, UMovieSceneReplaceableBindingBase::StaticClass, TEXT("UMovieSceneReplaceableBindingBase"), &Z_Registration_Info_UClass_UMovieSceneReplaceableBindingBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneReplaceableBindingBase), 121295481U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneReplaceableBinding_h_2372905313(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneReplaceableBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneReplaceableBinding_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
