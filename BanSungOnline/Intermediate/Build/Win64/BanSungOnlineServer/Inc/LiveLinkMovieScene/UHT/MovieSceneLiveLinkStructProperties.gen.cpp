// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkMovieScene/Public/MovieScene/MovieSceneLiveLinkStructProperties.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneBoolChannel.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneByteChannel.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneFloatChannel.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneIntegerChannel.h"
#include "Runtime/MovieSceneTracks/Public/Channels/MovieSceneStringChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkStructProperties() {}

// Begin Cross Module References
LIVELINKMOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkPropertyData();
LIVELINKMOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubSectionData();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBoolChannel();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneByteChannel();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneIntegerChannel();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneStringChannel();
UPackage* Z_Construct_UPackage__Script_LiveLinkMovieScene();
// End Cross Module References

// Begin ScriptStruct FLiveLinkPropertyData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkPropertyData;
class UScriptStruct* FLiveLinkPropertyData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkPropertyData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkPropertyData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkPropertyData, (UObject*)Z_Construct_UPackage__Script_LiveLinkMovieScene(), TEXT("LiveLinkPropertyData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkPropertyData.OuterSingleton;
}
template<> LIVELINKMOVIESCENE_API UScriptStruct* StaticStruct<FLiveLinkPropertyData>()
{
	return FLiveLinkPropertyData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkStructProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkStructProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatChannel_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkStructProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringChannel_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkStructProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntegerChannel_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkStructProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoolChannel_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkStructProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ByteChannel_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkStructProperties.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloatChannel_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatChannel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StringChannel_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StringChannel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IntegerChannel_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IntegerChannel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoolChannel_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoolChannel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ByteChannel_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ByteChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkPropertyData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkPropertyData, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_FloatChannel_Inner = { "FloatChannel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(0, nullptr) }; // 139010471
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_FloatChannel = { "FloatChannel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkPropertyData, FloatChannel), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatChannel_MetaData), NewProp_FloatChannel_MetaData) }; // 139010471
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_StringChannel_Inner = { "StringChannel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneStringChannel, METADATA_PARAMS(0, nullptr) }; // 377388920
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_StringChannel = { "StringChannel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkPropertyData, StringChannel), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringChannel_MetaData), NewProp_StringChannel_MetaData) }; // 377388920
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_IntegerChannel_Inner = { "IntegerChannel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneIntegerChannel, METADATA_PARAMS(0, nullptr) }; // 1761246084
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_IntegerChannel = { "IntegerChannel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkPropertyData, IntegerChannel), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntegerChannel_MetaData), NewProp_IntegerChannel_MetaData) }; // 1761246084
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_BoolChannel_Inner = { "BoolChannel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneBoolChannel, METADATA_PARAMS(0, nullptr) }; // 2663502824
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_BoolChannel = { "BoolChannel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkPropertyData, BoolChannel), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoolChannel_MetaData), NewProp_BoolChannel_MetaData) }; // 2663502824
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_ByteChannel_Inner = { "ByteChannel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneByteChannel, METADATA_PARAMS(0, nullptr) }; // 3544508773
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_ByteChannel = { "ByteChannel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkPropertyData, ByteChannel), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ByteChannel_MetaData), NewProp_ByteChannel_MetaData) }; // 3544508773
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_FloatChannel_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_FloatChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_StringChannel_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_StringChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_IntegerChannel_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_IntegerChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_BoolChannel_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_BoolChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_ByteChannel_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_ByteChannel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMovieScene,
	nullptr,
	&NewStructOps,
	"LiveLinkPropertyData",
	Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::PropPointers),
	sizeof(FLiveLinkPropertyData),
	alignof(FLiveLinkPropertyData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkPropertyData()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkPropertyData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkPropertyData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkPropertyData.InnerSingleton;
}
// End ScriptStruct FLiveLinkPropertyData

// Begin ScriptStruct FLiveLinkSubSectionData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkSubSectionData;
class UScriptStruct* FLiveLinkSubSectionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkSubSectionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkSubSectionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSubSectionData, (UObject*)Z_Construct_UPackage__Script_LiveLinkMovieScene(), TEXT("LiveLinkSubSectionData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkSubSectionData.OuterSingleton;
}
template<> LIVELINKMOVIESCENE_API UScriptStruct* StaticStruct<FLiveLinkSubSectionData>()
{
	return FLiveLinkSubSectionData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkStructProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkStructProperties.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Properties_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Properties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSubSectionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::NewProp_Properties_Inner = { "Properties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLiveLinkPropertyData, METADATA_PARAMS(0, nullptr) }; // 1454750243
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkSubSectionData, Properties), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Properties_MetaData), NewProp_Properties_MetaData) }; // 1454750243
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::NewProp_Properties_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::NewProp_Properties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMovieScene,
	nullptr,
	&NewStructOps,
	"LiveLinkSubSectionData",
	Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::PropPointers),
	sizeof(FLiveLinkSubSectionData),
	alignof(FLiveLinkSubSectionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubSectionData()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkSubSectionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkSubSectionData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkSubSectionData.InnerSingleton;
}
// End ScriptStruct FLiveLinkSubSectionData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkStructProperties_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLiveLinkPropertyData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewStructOps, TEXT("LiveLinkPropertyData"), &Z_Registration_Info_UScriptStruct_LiveLinkPropertyData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkPropertyData), 1454750243U) },
		{ FLiveLinkSubSectionData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::NewStructOps, TEXT("LiveLinkSubSectionData"), &Z_Registration_Info_UScriptStruct_LiveLinkSubSectionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkSubSectionData), 971134315U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkStructProperties_h_2465524486(TEXT("/Script/LiveLinkMovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkStructProperties_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkStructProperties_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
