// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementFramework/Public/Elements/Columns/TypedElementFolderColumns.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementFolderColumns() {}

// Begin Cross Module References
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FEditorDataStorageTag();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FFolderTag();
UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

// Begin ScriptStruct FFolderTag
static_assert(std::is_polymorphic<FFolderTag>() == std::is_polymorphic<FEditorDataStorageTag>(), "USTRUCT FFolderTag cannot be polymorphic unless super FEditorDataStorageTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FolderTag;
class UScriptStruct* FFolderTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FolderTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FolderTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFolderTag, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("FolderTag"));
	}
	return Z_Registration_Info_UScriptStruct_FolderTag.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FFolderTag>()
{
	return FFolderTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFolderTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column that signifies this row is for a folder\n */" },
		{ "DisplayName", "Folder" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementFolderColumns.h" },
		{ "ToolTip", "Column that signifies this row is for a folder" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFolderTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFolderTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageTag,
	&NewStructOps,
	"FolderTag",
	nullptr,
	0,
	sizeof(FFolderTag),
	alignof(FFolderTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFolderTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFolderTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFolderTag()
{
	if (!Z_Registration_Info_UScriptStruct_FolderTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FolderTag.InnerSingleton, Z_Construct_UScriptStruct_FFolderTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FolderTag.InnerSingleton;
}
// End ScriptStruct FFolderTag

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementFolderColumns_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFolderTag::StaticStruct, Z_Construct_UScriptStruct_FFolderTag_Statics::NewStructOps, TEXT("FolderTag"), &Z_Registration_Info_UScriptStruct_FolderTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFolderTag), 2068790951U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementFolderColumns_h_2712443329(TEXT("/Script/TypedElementFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementFolderColumns_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementFolderColumns_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
