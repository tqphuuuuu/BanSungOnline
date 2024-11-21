// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Bindings/MovieSceneReplaceableDirectorBlueprintBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneDynamicBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneReplaceableDirectorBlueprintBinding() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneReplaceableBindingBase();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSpawnableBindingBase_NoRegister();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDynamicBinding();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneReplaceableDirectorBlueprintBinding();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneReplaceableDirectorBlueprintBinding_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneReplaceableDirectorBlueprintBinding
void UMovieSceneReplaceableDirectorBlueprintBinding::StaticRegisterNativesUMovieSceneReplaceableDirectorBlueprintBinding()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneReplaceableDirectorBlueprintBinding);
UClass* Z_Construct_UClass_UMovieSceneReplaceableDirectorBlueprintBinding_NoRegister()
{
	return UMovieSceneReplaceableDirectorBlueprintBinding::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneReplaceableDirectorBlueprintBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n Custom binding type that uses a Director Blueprint endpoint to allow the user to define at runtime how to resolve this binding.\n User can use any desired custom spawnable type as the preview within Sequencer, such as a MovieSceneSpawnableDirectorBlueprintBinding for another endpoint\n for spawning, or a MovieSceneSpawnableActorBinding to spawn from an actor template.\n */" },
		{ "DisplayName", "Replaceable from Director Blueprint" },
		{ "IncludePath", "Bindings/MovieSceneReplaceableDirectorBlueprintBinding.h" },
		{ "ModuleRelativePath", "Public/Bindings/MovieSceneReplaceableDirectorBlueprintBinding.h" },
		{ "ToolTip", "Custom binding type that uses a Director Blueprint endpoint to allow the user to define at runtime how to resolve this binding.\nUser can use any desired custom spawnable type as the preview within Sequencer, such as a MovieSceneSpawnableDirectorBlueprintBinding for another endpoint\nfor spawning, or a MovieSceneSpawnableActorBinding to spawn from an actor template." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicBinding_MetaData[] = {
		{ "Category", "Sequencer" },
		{ "Comment", "// Director Blueprint defined binding info\n" },
		{ "ModuleRelativePath", "Public/Bindings/MovieSceneReplaceableDirectorBlueprintBinding.h" },
		{ "ToolTip", "Director Blueprint defined binding info" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSpawnableType_MetaData[] = {
		{ "Category", "Sequencer" },
		{ "Comment", "// Preview Spawnable Type to use for this replaceable\n" },
		{ "ModuleRelativePath", "Public/Bindings/MovieSceneReplaceableDirectorBlueprintBinding.h" },
		{ "ToolTip", "Preview Spawnable Type to use for this replaceable" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicBinding;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PreviewSpawnableType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneReplaceableDirectorBlueprintBinding>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneReplaceableDirectorBlueprintBinding_Statics::NewProp_DynamicBinding = { "DynamicBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneReplaceableDirectorBlueprintBinding, DynamicBinding), Z_Construct_UScriptStruct_FMovieSceneDynamicBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicBinding_MetaData), NewProp_DynamicBinding_MetaData) }; // 1420086444
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMovieSceneReplaceableDirectorBlueprintBinding_Statics::NewProp_PreviewSpawnableType = { "PreviewSpawnableType", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneReplaceableDirectorBlueprintBinding, PreviewSpawnableType), Z_Construct_UClass_UClass, Z_Construct_UClass_UMovieSceneSpawnableBindingBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewSpawnableType_MetaData), NewProp_PreviewSpawnableType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneReplaceableDirectorBlueprintBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneReplaceableDirectorBlueprintBinding_Statics::NewProp_DynamicBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneReplaceableDirectorBlueprintBinding_Statics::NewProp_PreviewSpawnableType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneReplaceableDirectorBlueprintBinding_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneReplaceableDirectorBlueprintBinding_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneReplaceableBindingBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneReplaceableDirectorBlueprintBinding_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneReplaceableDirectorBlueprintBinding_Statics::ClassParams = {
	&UMovieSceneReplaceableDirectorBlueprintBinding::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneReplaceableDirectorBlueprintBinding_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneReplaceableDirectorBlueprintBinding_Statics::PropPointers),
	0,
	0x00A810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneReplaceableDirectorBlueprintBinding_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneReplaceableDirectorBlueprintBinding_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneReplaceableDirectorBlueprintBinding()
{
	if (!Z_Registration_Info_UClass_UMovieSceneReplaceableDirectorBlueprintBinding.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneReplaceableDirectorBlueprintBinding.OuterSingleton, Z_Construct_UClass_UMovieSceneReplaceableDirectorBlueprintBinding_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneReplaceableDirectorBlueprintBinding.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneReplaceableDirectorBlueprintBinding>()
{
	return UMovieSceneReplaceableDirectorBlueprintBinding::StaticClass();
}
UMovieSceneReplaceableDirectorBlueprintBinding::UMovieSceneReplaceableDirectorBlueprintBinding(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneReplaceableDirectorBlueprintBinding);
UMovieSceneReplaceableDirectorBlueprintBinding::~UMovieSceneReplaceableDirectorBlueprintBinding() {}
// End Class UMovieSceneReplaceableDirectorBlueprintBinding

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Bindings_MovieSceneReplaceableDirectorBlueprintBinding_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneReplaceableDirectorBlueprintBinding, UMovieSceneReplaceableDirectorBlueprintBinding::StaticClass, TEXT("UMovieSceneReplaceableDirectorBlueprintBinding"), &Z_Registration_Info_UClass_UMovieSceneReplaceableDirectorBlueprintBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneReplaceableDirectorBlueprintBinding), 3257910701U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Bindings_MovieSceneReplaceableDirectorBlueprintBinding_h_3285544168(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Bindings_MovieSceneReplaceableDirectorBlueprintBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Bindings_MovieSceneReplaceableDirectorBlueprintBinding_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
