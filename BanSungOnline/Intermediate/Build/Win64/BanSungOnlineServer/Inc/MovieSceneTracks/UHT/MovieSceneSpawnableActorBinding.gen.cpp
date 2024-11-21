// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Bindings/MovieSceneSpawnableActorBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSpawnableActorBinding() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSpawnableBindingBase();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSpawnableActorBinding();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSpawnableActorBinding_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSpawnableActorBindingBase();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSpawnableActorBindingBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneSpawnableActorBindingBase
void UMovieSceneSpawnableActorBindingBase::StaticRegisterNativesUMovieSceneSpawnableActorBindingBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneSpawnableActorBindingBase);
UClass* Z_Construct_UClass_UMovieSceneSpawnableActorBindingBase_NoRegister()
{
	return UMovieSceneSpawnableActorBindingBase::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneSpawnableActorBindingBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The base class for actor-specific spawnable bindings. Contains a default implementation that can handle spawning an Actor from provided Actor class and optional Actor template.\n * Can be overridden in C++ or blueprint to provide an Actor class and to add custom PostSpawnObject behavior such as mesh setup based on an asset.\n * The below UMovieSceneSpawnableActorBinding class implements this base class and replicates the old FMovieSceneSpawnable behavior by using a specified Actor template to spawn an Actor and can be used out of the box.\n */" },
		{ "IncludePath", "Bindings/MovieSceneSpawnableActorBinding.h" },
		{ "ModuleRelativePath", "Public/Bindings/MovieSceneSpawnableActorBinding.h" },
		{ "ToolTip", "The base class for actor-specific spawnable bindings. Contains a default implementation that can handle spawning an Actor from provided Actor class and optional Actor template.\nCan be overridden in C++ or blueprint to provide an Actor class and to add custom PostSpawnObject behavior such as mesh setup based on an asset.\nThe below UMovieSceneSpawnableActorBinding class implements this base class and replicates the old FMovieSceneSpawnable behavior by using a specified Actor template to spawn an Actor and can be used out of the box." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNetAddressableName_MetaData[] = {
		{ "Category", "Spawnable" },
		{ "Comment", "/** When enabled, the actor will be spawned with a unique name so that it can be addressable between clients and servers. */" },
		{ "ModuleRelativePath", "Public/Bindings/MovieSceneSpawnableActorBinding.h" },
		{ "ToolTip", "When enabled, the actor will be spawned with a unique name so that it can be addressable between clients and servers." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[] = {
		{ "Category", "Spawnable" },
		{ "Comment", "/** Name of level to spawn into */" },
		{ "ModuleRelativePath", "Public/Bindings/MovieSceneSpawnableActorBinding.h" },
		{ "ToolTip", "Name of level to spawn into" },
	};
#endif // WITH_METADATA
	static void NewProp_bNetAddressableName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNetAddressableName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LevelName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSpawnableActorBindingBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMovieSceneSpawnableActorBindingBase_Statics::NewProp_bNetAddressableName_SetBit(void* Obj)
{
	((UMovieSceneSpawnableActorBindingBase*)Obj)->bNetAddressableName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSpawnableActorBindingBase_Statics::NewProp_bNetAddressableName = { "bNetAddressableName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneSpawnableActorBindingBase), &Z_Construct_UClass_UMovieSceneSpawnableActorBindingBase_Statics::NewProp_bNetAddressableName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNetAddressableName_MetaData), NewProp_bNetAddressableName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneSpawnableActorBindingBase_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSpawnableActorBindingBase, LevelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelName_MetaData), NewProp_LevelName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneSpawnableActorBindingBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSpawnableActorBindingBase_Statics::NewProp_bNetAddressableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSpawnableActorBindingBase_Statics::NewProp_LevelName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSpawnableActorBindingBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneSpawnableActorBindingBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSpawnableBindingBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSpawnableActorBindingBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSpawnableActorBindingBase_Statics::ClassParams = {
	&UMovieSceneSpawnableActorBindingBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneSpawnableActorBindingBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSpawnableActorBindingBase_Statics::PropPointers),
	0,
	0x002810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSpawnableActorBindingBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneSpawnableActorBindingBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneSpawnableActorBindingBase()
{
	if (!Z_Registration_Info_UClass_UMovieSceneSpawnableActorBindingBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneSpawnableActorBindingBase.OuterSingleton, Z_Construct_UClass_UMovieSceneSpawnableActorBindingBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneSpawnableActorBindingBase.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneSpawnableActorBindingBase>()
{
	return UMovieSceneSpawnableActorBindingBase::StaticClass();
}
UMovieSceneSpawnableActorBindingBase::UMovieSceneSpawnableActorBindingBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSpawnableActorBindingBase);
UMovieSceneSpawnableActorBindingBase::~UMovieSceneSpawnableActorBindingBase() {}
// End Class UMovieSceneSpawnableActorBindingBase

// Begin Class UMovieSceneSpawnableActorBinding
void UMovieSceneSpawnableActorBinding::StaticRegisterNativesUMovieSceneSpawnableActorBinding()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneSpawnableActorBinding);
UClass* Z_Construct_UClass_UMovieSceneSpawnableActorBinding_NoRegister()
{
	return UMovieSceneSpawnableActorBinding::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneSpawnableActorBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* An implementation of UMovieSceneSpawnableActorBindingBase that matches the old FMovieSceneSpawnable spawnable implementation, allowing the spawning \n* of Actors from a UObject template which is serialized inside the Sequence.\n*/" },
		{ "DisplayName", "Spawnable Actor" },
		{ "IncludePath", "Bindings/MovieSceneSpawnableActorBinding.h" },
		{ "ModuleRelativePath", "Public/Bindings/MovieSceneSpawnableActorBinding.h" },
		{ "ToolTip", "* An implementation of UMovieSceneSpawnableActorBindingBase that matches the old FMovieSceneSpawnable spawnable implementation, allowing the spawning\n* of Actors from a UObject template which is serialized inside the Sequence." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorTemplate_MetaData[] = {
		{ "Category", "Spawnable" },
		{ "ModuleRelativePath", "Public/Bindings/MovieSceneSpawnableActorBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorTemplate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSpawnableActorBinding>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneSpawnableActorBinding_Statics::NewProp_ActorTemplate = { "ActorTemplate", nullptr, (EPropertyFlags)0x0124080000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSpawnableActorBinding, ActorTemplate), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorTemplate_MetaData), NewProp_ActorTemplate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneSpawnableActorBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSpawnableActorBinding_Statics::NewProp_ActorTemplate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSpawnableActorBinding_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneSpawnableActorBinding_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSpawnableActorBindingBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSpawnableActorBinding_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSpawnableActorBinding_Statics::ClassParams = {
	&UMovieSceneSpawnableActorBinding::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneSpawnableActorBinding_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSpawnableActorBinding_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSpawnableActorBinding_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneSpawnableActorBinding_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneSpawnableActorBinding()
{
	if (!Z_Registration_Info_UClass_UMovieSceneSpawnableActorBinding.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneSpawnableActorBinding.OuterSingleton, Z_Construct_UClass_UMovieSceneSpawnableActorBinding_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneSpawnableActorBinding.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneSpawnableActorBinding>()
{
	return UMovieSceneSpawnableActorBinding::StaticClass();
}
UMovieSceneSpawnableActorBinding::UMovieSceneSpawnableActorBinding(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSpawnableActorBinding);
UMovieSceneSpawnableActorBinding::~UMovieSceneSpawnableActorBinding() {}
// End Class UMovieSceneSpawnableActorBinding

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Bindings_MovieSceneSpawnableActorBinding_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneSpawnableActorBindingBase, UMovieSceneSpawnableActorBindingBase::StaticClass, TEXT("UMovieSceneSpawnableActorBindingBase"), &Z_Registration_Info_UClass_UMovieSceneSpawnableActorBindingBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneSpawnableActorBindingBase), 1767565659U) },
		{ Z_Construct_UClass_UMovieSceneSpawnableActorBinding, UMovieSceneSpawnableActorBinding::StaticClass, TEXT("UMovieSceneSpawnableActorBinding"), &Z_Registration_Info_UClass_UMovieSceneSpawnableActorBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneSpawnableActorBinding), 2833015526U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Bindings_MovieSceneSpawnableActorBinding_h_3062911306(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Bindings_MovieSceneSpawnableActorBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Bindings_MovieSceneSpawnableActorBinding_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
