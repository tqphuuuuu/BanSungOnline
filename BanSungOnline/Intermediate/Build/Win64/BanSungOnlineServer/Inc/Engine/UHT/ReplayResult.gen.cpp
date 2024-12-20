// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Net/ReplayResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplayResult() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EReplayResult();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EReplayResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EReplayResult;
static UEnum* EReplayResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EReplayResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EReplayResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EReplayResult, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EReplayResult"));
	}
	return Z_Registration_Info_UEnum_EReplayResult.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EReplayResult>()
{
	return EReplayResult_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EReplayResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ConnectionClosed.Name", "EReplayResult::ConnectionClosed" },
		{ "Corrupt.Name", "EReplayResult::Corrupt" },
		{ "GameSpecific.Name", "EReplayResult::GameSpecific" },
		{ "InitConnect.Name", "EReplayResult::InitConnect" },
		{ "LoadMap.Name", "EReplayResult::LoadMap" },
		{ "MissingArchive.Name", "EReplayResult::MissingArchive" },
		{ "ModuleRelativePath", "Public/Net/ReplayResult.h" },
		{ "ReplayNotFound.Name", "EReplayResult::ReplayNotFound" },
		{ "Serialization.Name", "EReplayResult::Serialization" },
		{ "StreamerError.Name", "EReplayResult::StreamerError" },
		{ "Success.Name", "EReplayResult::Success" },
		{ "Unknown.Name", "EReplayResult::Unknown" },
		{ "UnsupportedCheckpoint.Name", "EReplayResult::UnsupportedCheckpoint" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EReplayResult::Success", (int64)EReplayResult::Success },
		{ "EReplayResult::ReplayNotFound", (int64)EReplayResult::ReplayNotFound },
		{ "EReplayResult::Corrupt", (int64)EReplayResult::Corrupt },
		{ "EReplayResult::UnsupportedCheckpoint", (int64)EReplayResult::UnsupportedCheckpoint },
		{ "EReplayResult::GameSpecific", (int64)EReplayResult::GameSpecific },
		{ "EReplayResult::InitConnect", (int64)EReplayResult::InitConnect },
		{ "EReplayResult::LoadMap", (int64)EReplayResult::LoadMap },
		{ "EReplayResult::Serialization", (int64)EReplayResult::Serialization },
		{ "EReplayResult::StreamerError", (int64)EReplayResult::StreamerError },
		{ "EReplayResult::ConnectionClosed", (int64)EReplayResult::ConnectionClosed },
		{ "EReplayResult::MissingArchive", (int64)EReplayResult::MissingArchive },
		{ "EReplayResult::Unknown", (int64)EReplayResult::Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EReplayResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EReplayResult",
	"EReplayResult",
	Z_Construct_UEnum_Engine_EReplayResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EReplayResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EReplayResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EReplayResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EReplayResult()
{
	if (!Z_Registration_Info_UEnum_EReplayResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EReplayResult.InnerSingleton, Z_Construct_UEnum_Engine_EReplayResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EReplayResult.InnerSingleton;
}
// End Enum EReplayResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_ReplayResult_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EReplayResult_StaticEnum, TEXT("EReplayResult"), &Z_Registration_Info_UEnum_EReplayResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4134289421U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_ReplayResult_h_2483542074(TEXT("/Script/Engine"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_ReplayResult_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_ReplayResult_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
