// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/GameFramework/CharacterNetworkSerializationPackedBitsNetSerializer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterNetworkSerializationPackedBitsNetSerializer() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FCharacterNetworkSerializationPackedBitsNetSerializerConfig
static_assert(std::is_polymorphic<FCharacterNetworkSerializationPackedBitsNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FCharacterNetworkSerializationPackedBitsNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterNetworkSerializationPackedBitsNetSerializerConfig;
class UScriptStruct* FCharacterNetworkSerializationPackedBitsNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterNetworkSerializationPackedBitsNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterNetworkSerializationPackedBitsNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CharacterNetworkSerializationPackedBitsNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterNetworkSerializationPackedBitsNetSerializerConfig.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCharacterNetworkSerializationPackedBitsNetSerializerConfig>()
{
	return FCharacterNetworkSerializationPackedBitsNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFramework/CharacterNetworkSerializationPackedBitsNetSerializer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAllowedDataBits_MetaData[] = {
		{ "Comment", "// Value used to sanity check incoming data so that we do not over-allocate dynamic memory\n" },
		{ "ModuleRelativePath", "Public/GameFramework/CharacterNetworkSerializationPackedBitsNetSerializer.h" },
		{ "ToolTip", "Value used to sanity check incoming data so that we do not over-allocate dynamic memory" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxAllowedDataBits;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterNetworkSerializationPackedBitsNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig_Statics::NewProp_MaxAllowedDataBits = { "MaxAllowedDataBits", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterNetworkSerializationPackedBitsNetSerializerConfig, MaxAllowedDataBits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAllowedDataBits_MetaData), NewProp_MaxAllowedDataBits_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig_Statics::NewProp_MaxAllowedDataBits,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"CharacterNetworkSerializationPackedBitsNetSerializerConfig",
	Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig_Statics::PropPointers),
	sizeof(FCharacterNetworkSerializationPackedBitsNetSerializerConfig),
	alignof(FCharacterNetworkSerializationPackedBitsNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterNetworkSerializationPackedBitsNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterNetworkSerializationPackedBitsNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CharacterNetworkSerializationPackedBitsNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FCharacterNetworkSerializationPackedBitsNetSerializerConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_GameFramework_CharacterNetworkSerializationPackedBitsNetSerializer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCharacterNetworkSerializationPackedBitsNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig_Statics::NewStructOps, TEXT("CharacterNetworkSerializationPackedBitsNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_CharacterNetworkSerializationPackedBitsNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterNetworkSerializationPackedBitsNetSerializerConfig), 4216228369U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_GameFramework_CharacterNetworkSerializationPackedBitsNetSerializer_h_4238203046(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_GameFramework_CharacterNetworkSerializationPackedBitsNetSerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_GameFramework_CharacterNetworkSerializationPackedBitsNetSerializer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
