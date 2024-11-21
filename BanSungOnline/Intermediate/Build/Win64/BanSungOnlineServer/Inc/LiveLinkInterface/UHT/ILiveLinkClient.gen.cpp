// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LiveLinkInterface/Public/ILiveLinkClient.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeILiveLinkClient() {}

// Begin Cross Module References
LIVELINKINTERFACE_API UEnum* Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSubjectState();
UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References

// Begin Enum ELiveLinkSubjectState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELiveLinkSubjectState;
static UEnum* ELiveLinkSubjectState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELiveLinkSubjectState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELiveLinkSubjectState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSubjectState, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("ELiveLinkSubjectState"));
	}
	return Z_Registration_Info_UEnum_ELiveLinkSubjectState.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UEnum* StaticEnum<ELiveLinkSubjectState>()
{
	return ELiveLinkSubjectState_StaticEnum();
}
struct Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSubjectState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Describes the state of a live link subject */" },
		{ "Connected.Comment", "/** The input is connected. */" },
		{ "Connected.Name", "ELiveLinkSubjectState::Connected" },
		{ "Connected.ToolTip", "The input is connected." },
		{ "Disconnected.Comment", "/** The input is not connected. */" },
		{ "Disconnected.Name", "ELiveLinkSubjectState::Disconnected" },
		{ "Disconnected.ToolTip", "The input is not connected." },
		{ "InvalidOrDisabled.Comment", "/** The subject is invalid or disabled */" },
		{ "InvalidOrDisabled.Name", "ELiveLinkSubjectState::InvalidOrDisabled" },
		{ "InvalidOrDisabled.ToolTip", "The subject is invalid or disabled" },
		{ "ModuleRelativePath", "Public/ILiveLinkClient.h" },
		{ "ToolTip", "Describes the state of a live link subject" },
		{ "Unknown.Comment", "/** The state of the subject is unknown. e.g. It cannot be queried */" },
		{ "Unknown.Name", "ELiveLinkSubjectState::Unknown" },
		{ "Unknown.ToolTip", "The state of the subject is unknown. e.g. It cannot be queried" },
		{ "Unresponsive.Comment", "/** The input is connected but no data is available. */" },
		{ "Unresponsive.Name", "ELiveLinkSubjectState::Unresponsive" },
		{ "Unresponsive.ToolTip", "The input is connected but no data is available." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELiveLinkSubjectState::Connected", (int64)ELiveLinkSubjectState::Connected },
		{ "ELiveLinkSubjectState::Unresponsive", (int64)ELiveLinkSubjectState::Unresponsive },
		{ "ELiveLinkSubjectState::Disconnected", (int64)ELiveLinkSubjectState::Disconnected },
		{ "ELiveLinkSubjectState::InvalidOrDisabled", (int64)ELiveLinkSubjectState::InvalidOrDisabled },
		{ "ELiveLinkSubjectState::Unknown", (int64)ELiveLinkSubjectState::Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSubjectState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	nullptr,
	"ELiveLinkSubjectState",
	"ELiveLinkSubjectState",
	Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSubjectState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSubjectState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSubjectState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSubjectState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSubjectState()
{
	if (!Z_Registration_Info_UEnum_ELiveLinkSubjectState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELiveLinkSubjectState.InnerSingleton, Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSubjectState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELiveLinkSubjectState.InnerSingleton;
}
// End Enum ELiveLinkSubjectState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_ILiveLinkClient_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELiveLinkSubjectState_StaticEnum, TEXT("ELiveLinkSubjectState"), &Z_Registration_Info_UEnum_ELiveLinkSubjectState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3336212929U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_ILiveLinkClient_h_3545669668(TEXT("/Script/LiveLinkInterface"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_ILiveLinkClient_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_ILiveLinkClient_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
