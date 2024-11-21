// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Public/OnlineAccountStoredCredentials.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineAccountStoredCredentials() {}

// Begin Cross Module References
ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineAccountStoredCredentials();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin ScriptStruct FOnlineAccountStoredCredentials
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OnlineAccountStoredCredentials;
class UScriptStruct* FOnlineAccountStoredCredentials::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OnlineAccountStoredCredentials.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OnlineAccountStoredCredentials.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnlineAccountStoredCredentials, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("OnlineAccountStoredCredentials"));
	}
	return Z_Registration_Info_UScriptStruct_OnlineAccountStoredCredentials.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<FOnlineAccountStoredCredentials>()
{
	return FOnlineAccountStoredCredentials::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOnlineAccountStoredCredentials_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Stores online account login credentials (for editor config data).\n * @note ONLY use this in trusted environments (like a local config file) and NOT for anything that requires actual security/strong encryption.\n * @see FOnlineAccountCredentials.\n */" },
		{ "ModuleRelativePath", "Public/OnlineAccountStoredCredentials.h" },
		{ "ToolTip", "Stores online account login credentials (for editor config data).\n@note ONLY use this in trusted environments (like a local config file) and NOT for anything that requires actual security/strong encryption.\n@see FOnlineAccountCredentials." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "Logins" },
		{ "DisplayName", "User Id" },
		{ "ModuleRelativePath", "Public/OnlineAccountStoredCredentials.h" },
		{ "Tooltip", "Id of the user logging in (email, display name, facebook id, etc)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[] = {
		{ "Category", "Logins" },
		{ "DisplayName", "Password" },
		{ "ModuleRelativePath", "Public/OnlineAccountStoredCredentials.h" },
		{ "PasswordField", "TRUE" },
		{ "Tooltip", "Credentials of the user logging in (password or auth token)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Logins" },
		{ "DisplayName", "Type" },
		{ "ModuleRelativePath", "Public/OnlineAccountStoredCredentials.h" },
		{ "Tooltip", "Type of account. Needed to identity the auth method to use (epic, internal, facebook, etc)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TokenBytes_MetaData[] = {
		{ "Comment", "/** Token stored as an array of bytes, encrypted */" },
		{ "ModuleRelativePath", "Public/OnlineAccountStoredCredentials.h" },
		{ "ToolTip", "Token stored as an array of bytes, encrypted" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Token;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TokenBytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TokenBytes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnlineAccountStoredCredentials>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineAccountStoredCredentials_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOnlineAccountStoredCredentials, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineAccountStoredCredentials_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOnlineAccountStoredCredentials, Token), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Token_MetaData), NewProp_Token_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineAccountStoredCredentials_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOnlineAccountStoredCredentials, Type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOnlineAccountStoredCredentials_Statics::NewProp_TokenBytes_Inner = { "TokenBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOnlineAccountStoredCredentials_Statics::NewProp_TokenBytes = { "TokenBytes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOnlineAccountStoredCredentials, TokenBytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TokenBytes_MetaData), NewProp_TokenBytes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnlineAccountStoredCredentials_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountStoredCredentials_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountStoredCredentials_Statics::NewProp_Token,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountStoredCredentials_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountStoredCredentials_Statics::NewProp_TokenBytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountStoredCredentials_Statics::NewProp_TokenBytes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountStoredCredentials_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnlineAccountStoredCredentials_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	nullptr,
	&NewStructOps,
	"OnlineAccountStoredCredentials",
	Z_Construct_UScriptStruct_FOnlineAccountStoredCredentials_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountStoredCredentials_Statics::PropPointers),
	sizeof(FOnlineAccountStoredCredentials),
	alignof(FOnlineAccountStoredCredentials),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountStoredCredentials_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOnlineAccountStoredCredentials_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOnlineAccountStoredCredentials()
{
	if (!Z_Registration_Info_UScriptStruct_OnlineAccountStoredCredentials.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OnlineAccountStoredCredentials.InnerSingleton, Z_Construct_UScriptStruct_FOnlineAccountStoredCredentials_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OnlineAccountStoredCredentials.InnerSingleton;
}
// End ScriptStruct FOnlineAccountStoredCredentials

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineAccountStoredCredentials_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOnlineAccountStoredCredentials::StaticStruct, Z_Construct_UScriptStruct_FOnlineAccountStoredCredentials_Statics::NewStructOps, TEXT("OnlineAccountStoredCredentials"), &Z_Registration_Info_UScriptStruct_OnlineAccountStoredCredentials, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOnlineAccountStoredCredentials), 2915264944U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineAccountStoredCredentials_h_172813263(TEXT("/Script/OnlineSubsystemUtils"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineAccountStoredCredentials_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineAccountStoredCredentials_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
