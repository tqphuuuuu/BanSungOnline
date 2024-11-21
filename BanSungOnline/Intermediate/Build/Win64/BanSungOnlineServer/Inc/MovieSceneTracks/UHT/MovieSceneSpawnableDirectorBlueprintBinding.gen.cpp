// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Bindings/MovieSceneSpawnableDirectorBlueprintBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneDynamicBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSpawnableDirectorBlueprintBinding() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSpawnableBindingBase();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDynamicBinding();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSpawnableDirectorBlueprintBinding();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSpawnableDirectorBlueprintBinding_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneSpawnableDirectorBlueprintBinding
void UMovieSceneSpawnableDirectorBlueprintBinding::StaticRegisterNativesUMovieSceneSpawnableDirectorBlueprintBinding()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneSpawnableDirectorBlueprintBinding);
UClass* Z_Construct_UClass_UMovieSceneSpawnableDirectorBlueprintBinding_NoRegister()
{
	return UMovieSceneSpawnableDirectorBlueprintBinding::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneSpawnableDirectorBlueprintBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n Custom binding type that uses a Director Blueprint endpoint to allow the user to define how to spawn an actor for this binding.\n */" },
		{ "IncludePath", "Bindings/MovieSceneSpawnableDirectorBlueprintBinding.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Bindings/MovieSceneSpawnableDirectorBlueprintBinding.h" },
		{ "ToolTip", "Custom binding type that uses a Director Blueprint endpoint to allow the user to define how to spawn an actor for this binding." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicBinding_MetaData[] = {
		{ "Category", "Sequencer" },
		{ "Comment", "// Director Blueprint defined binding info\n" },
		{ "ModuleRelativePath", "Public/Bindings/MovieSceneSpawnableDirectorBlueprintBinding.h" },
		{ "ToolTip", "Director Blueprint defined binding info" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicBinding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSpawnableDirectorBlueprintBinding>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSpawnableDirectorBlueprintBinding_Statics::NewProp_DynamicBinding = { "DynamicBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSpawnableDirectorBlueprintBinding, DynamicBinding), Z_Construct_UScriptStruct_FMovieSceneDynamicBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicBinding_MetaData), NewProp_DynamicBinding_MetaData) }; // 1420086444
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneSpawnableDirectorBlueprintBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSpawnableDirectorBlueprintBinding_Statics::NewProp_DynamicBinding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSpawnableDirectorBlueprintBinding_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneSpawnableDirectorBlueprintBinding_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSpawnableBindingBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSpawnableDirectorBlueprintBinding_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSpawnableDirectorBlueprintBinding_Statics::ClassParams = {
	&UMovieSceneSpawnableDirectorBlueprintBinding::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneSpawnableDirectorBlueprintBinding_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSpawnableDirectorBlueprintBinding_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSpawnableDirectorBlueprintBinding_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneSpawnableDirectorBlueprintBinding_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneSpawnableDirectorBlueprintBinding()
{
	if (!Z_Registration_Info_UClass_UMovieSceneSpawnableDirectorBlueprintBinding.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneSpawnableDirectorBlueprintBinding.OuterSingleton, Z_Construct_UClass_UMovieSceneSpawnableDirectorBlueprintBinding_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneSpawnableDirectorBlueprintBinding.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneSpawnableDirectorBlueprintBinding>()
{
	return UMovieSceneSpawnableDirectorBlueprintBinding::StaticClass();
}
UMovieSceneSpawnableDirectorBlueprintBinding::UMovieSceneSpawnableDirectorBlueprintBinding(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSpawnableDirectorBlueprintBinding);
UMovieSceneSpawnableDirectorBlueprintBinding::~UMovieSceneSpawnableDirectorBlueprintBinding() {}
// End Class UMovieSceneSpawnableDirectorBlueprintBinding

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Bindings_MovieSceneSpawnableDirectorBlueprintBinding_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneSpawnableDirectorBlueprintBinding, UMovieSceneSpawnableDirectorBlueprintBinding::StaticClass, TEXT("UMovieSceneSpawnableDirectorBlueprintBinding"), &Z_Registration_Info_UClass_UMovieSceneSpawnableDirectorBlueprintBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneSpawnableDirectorBlueprintBinding), 551004952U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Bindings_MovieSceneSpawnableDirectorBlueprintBinding_h_2364401118(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Bindings_MovieSceneSpawnableDirectorBlueprintBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Bindings_MovieSceneSpawnableDirectorBlueprintBinding_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
