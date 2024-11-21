// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneTimeWarpChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTimeWarpChannel() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene_NoRegister();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDoubleChannel();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimeWarpChannel();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneTimeWarpChannel
static_assert(std::is_polymorphic<FMovieSceneTimeWarpChannel>() == std::is_polymorphic<FMovieSceneDoubleChannel>(), "USTRUCT FMovieSceneTimeWarpChannel cannot be polymorphic unless super FMovieSceneDoubleChannel is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpChannel;
class UScriptStruct* FMovieSceneTimeWarpChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTimeWarpChannel, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTimeWarpChannel"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpChannel.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTimeWarpChannel>()
{
	return FMovieSceneTimeWarpChannel::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneTimeWarpChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneTimeWarpChannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneTimeWarpChannel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTimeWarpChannel>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneTimeWarpChannel_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0114000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneTimeWarpChannel, Owner), Z_Construct_UClass_UMovieScene_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTimeWarpChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTimeWarpChannel_Statics::NewProp_Owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimeWarpChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTimeWarpChannel_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	Z_Construct_UScriptStruct_FMovieSceneDoubleChannel,
	&NewStructOps,
	"MovieSceneTimeWarpChannel",
	Z_Construct_UScriptStruct_FMovieSceneTimeWarpChannel_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimeWarpChannel_Statics::PropPointers),
	sizeof(FMovieSceneTimeWarpChannel),
	alignof(FMovieSceneTimeWarpChannel),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimeWarpChannel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneTimeWarpChannel_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimeWarpChannel()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpChannel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpChannel.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneTimeWarpChannel_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpChannel.InnerSingleton;
}
// End ScriptStruct FMovieSceneTimeWarpChannel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneTimeWarpChannel_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneTimeWarpChannel::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneTimeWarpChannel_Statics::NewStructOps, TEXT("MovieSceneTimeWarpChannel"), &Z_Registration_Info_UScriptStruct_MovieSceneTimeWarpChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneTimeWarpChannel), 4220439532U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneTimeWarpChannel_h_3913572439(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneTimeWarpChannel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneTimeWarpChannel_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
