// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementFramework/Public/Elements/Columns/TypedElementUIColumns.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementUIColumns() {}

// Begin Cross Module References
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FEditorDataStorageTag();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FHideRowFromUITag();
UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

// Begin ScriptStruct FHideRowFromUITag
static_assert(std::is_polymorphic<FHideRowFromUITag>() == std::is_polymorphic<FEditorDataStorageTag>(), "USTRUCT FHideRowFromUITag cannot be polymorphic unless super FEditorDataStorageTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HideRowFromUITag;
class UScriptStruct* FHideRowFromUITag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HideRowFromUITag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HideRowFromUITag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHideRowFromUITag, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("HideRowFromUITag"));
	}
	return Z_Registration_Info_UScriptStruct_HideRowFromUITag.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FHideRowFromUITag>()
{
	return FHideRowFromUITag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHideRowFromUITag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Tag to indicate that this row should not show up in any TEDS UI that displays rows (e.g table viewer)\n */" },
		{ "DisplayName", "Hide row from UI" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementUIColumns.h" },
		{ "ToolTip", "Tag to indicate that this row should not show up in any TEDS UI that displays rows (e.g table viewer)" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHideRowFromUITag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHideRowFromUITag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageTag,
	&NewStructOps,
	"HideRowFromUITag",
	nullptr,
	0,
	sizeof(FHideRowFromUITag),
	alignof(FHideRowFromUITag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHideRowFromUITag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHideRowFromUITag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHideRowFromUITag()
{
	if (!Z_Registration_Info_UScriptStruct_HideRowFromUITag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HideRowFromUITag.InnerSingleton, Z_Construct_UScriptStruct_FHideRowFromUITag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HideRowFromUITag.InnerSingleton;
}
// End ScriptStruct FHideRowFromUITag

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementUIColumns_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHideRowFromUITag::StaticStruct, Z_Construct_UScriptStruct_FHideRowFromUITag_Statics::NewStructOps, TEXT("HideRowFromUITag"), &Z_Registration_Info_UScriptStruct_HideRowFromUITag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHideRowFromUITag), 2704509085U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementUIColumns_h_1502451977(TEXT("/Script/TypedElementFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementUIColumns_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementUIColumns_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
