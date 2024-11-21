// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Bindings/MovieSceneSpawnableBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSpawnableBinding() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCustomBinding();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSpawnableBindingBase();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSpawnableBindingBase_NoRegister();
MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_ESpawnOwnership();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Class UMovieSceneSpawnableBindingBase
void UMovieSceneSpawnableBindingBase::StaticRegisterNativesUMovieSceneSpawnableBindingBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneSpawnableBindingBase);
UClass* Z_Construct_UClass_UMovieSceneSpawnableBindingBase_NoRegister()
{
	return UMovieSceneSpawnableBindingBase::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneSpawnableBindingBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The base class for custom spawnable bindings. A spawnable binding will spawn an object upon resolution or return a cached previously spawned object.\n * UMovieSceneSpawnableActorBinding is the reimplementation of previous FMovieSceneSpawnable features and spawns an actor based on a saved template and actor class.\n * Otherwise, projects are free to implement their own Spawnable bindings by overriding this class. \n * In doing so, they could choose to just override GetSpawnObjectClass, PostSpawnObject, and PreDestroyObject for example to do custom post-spawn setup on a character mesh,\n * or they could choose to fully override SpawnObject and DestroySpawnedObject and do their own custom logic for spawning completely.\n */" },
		{ "IncludePath", "Bindings/MovieSceneSpawnableBinding.h" },
		{ "ModuleRelativePath", "Public/Bindings/MovieSceneSpawnableBinding.h" },
		{ "ToolTip", "The base class for custom spawnable bindings. A spawnable binding will spawn an object upon resolution or return a cached previously spawned object.\nUMovieSceneSpawnableActorBinding is the reimplementation of previous FMovieSceneSpawnable features and spawns an actor based on a saved template and actor class.\nOtherwise, projects are free to implement their own Spawnable bindings by overriding this class.\nIn doing so, they could choose to just override GetSpawnObjectClass, PostSpawnObject, and PreDestroyObject for example to do custom post-spawn setup on a character mesh,\nor they could choose to fully override SpawnObject and DestroySpawnedObject and do their own custom logic for spawning completely." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnOwnership_MetaData[] = {
		{ "Category", "Spawnable" },
		{ "Comment", "/*\n\x09* The spawn ownership setting for this spawnable, allowing spawnables to potentially outlast the lifetime of their sub sequence or sequence altogether.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Bindings/MovieSceneSpawnableBinding.h" },
		{ "ToolTip", "* The spawn ownership setting for this spawnable, allowing spawnables to potentially outlast the lifetime of their sub sequence or sequence altogether." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bContinuouslyRespawn_MetaData[] = {
		{ "Category", "Spawnable" },
		{ "Comment", "/** When enabled, this spawnable will always be respawned if it gets destroyed externally. When disabled, this object will only ever be spawned once for each binding lifetime section even if destroyed externally. */" },
		{ "ModuleRelativePath", "Public/Bindings/MovieSceneSpawnableBinding.h" },
		{ "ToolTip", "When enabled, this spawnable will always be respawned if it gets destroyed externally. When disabled, this object will only ever be spawned once for each binding lifetime section even if destroyed externally." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpawnOwnership_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SpawnOwnership;
	static void NewProp_bContinuouslyRespawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bContinuouslyRespawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSpawnableBindingBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneSpawnableBindingBase_Statics::NewProp_SpawnOwnership_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneSpawnableBindingBase_Statics::NewProp_SpawnOwnership = { "SpawnOwnership", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSpawnableBindingBase, SpawnOwnership), Z_Construct_UEnum_MovieScene_ESpawnOwnership, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnOwnership_MetaData), NewProp_SpawnOwnership_MetaData) }; // 3307093682
void Z_Construct_UClass_UMovieSceneSpawnableBindingBase_Statics::NewProp_bContinuouslyRespawn_SetBit(void* Obj)
{
	((UMovieSceneSpawnableBindingBase*)Obj)->bContinuouslyRespawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSpawnableBindingBase_Statics::NewProp_bContinuouslyRespawn = { "bContinuouslyRespawn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneSpawnableBindingBase), &Z_Construct_UClass_UMovieSceneSpawnableBindingBase_Statics::NewProp_bContinuouslyRespawn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bContinuouslyRespawn_MetaData), NewProp_bContinuouslyRespawn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneSpawnableBindingBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSpawnableBindingBase_Statics::NewProp_SpawnOwnership_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSpawnableBindingBase_Statics::NewProp_SpawnOwnership,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSpawnableBindingBase_Statics::NewProp_bContinuouslyRespawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSpawnableBindingBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneSpawnableBindingBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneCustomBinding,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSpawnableBindingBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSpawnableBindingBase_Statics::ClassParams = {
	&UMovieSceneSpawnableBindingBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneSpawnableBindingBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSpawnableBindingBase_Statics::PropPointers),
	0,
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSpawnableBindingBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneSpawnableBindingBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneSpawnableBindingBase()
{
	if (!Z_Registration_Info_UClass_UMovieSceneSpawnableBindingBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneSpawnableBindingBase.OuterSingleton, Z_Construct_UClass_UMovieSceneSpawnableBindingBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneSpawnableBindingBase.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneSpawnableBindingBase>()
{
	return UMovieSceneSpawnableBindingBase::StaticClass();
}
UMovieSceneSpawnableBindingBase::UMovieSceneSpawnableBindingBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSpawnableBindingBase);
UMovieSceneSpawnableBindingBase::~UMovieSceneSpawnableBindingBase() {}
// End Class UMovieSceneSpawnableBindingBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneSpawnableBinding_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneSpawnableBindingBase, UMovieSceneSpawnableBindingBase::StaticClass, TEXT("UMovieSceneSpawnableBindingBase"), &Z_Registration_Info_UClass_UMovieSceneSpawnableBindingBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneSpawnableBindingBase), 779654976U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneSpawnableBinding_h_1504713703(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneSpawnableBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Bindings_MovieSceneSpawnableBinding_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
