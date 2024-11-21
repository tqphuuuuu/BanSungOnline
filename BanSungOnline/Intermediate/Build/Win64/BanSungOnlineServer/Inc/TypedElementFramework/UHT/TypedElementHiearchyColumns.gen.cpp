// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementFramework/Public/Elements/Columns/TypedElementHiearchyColumns.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementHiearchyColumns() {}

// Begin Cross Module References
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FEditorDataStorageColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowParentColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUnresolvedTableRowParentColumn();
UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

// Begin ScriptStruct FTableRowParentColumn
static_assert(std::is_polymorphic<FTableRowParentColumn>() == std::is_polymorphic<FEditorDataStorageColumn>(), "USTRUCT FTableRowParentColumn cannot be polymorphic unless super FEditorDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TableRowParentColumn;
class UScriptStruct* FTableRowParentColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TableRowParentColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TableRowParentColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTableRowParentColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TableRowParentColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TableRowParentColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTableRowParentColumn>()
{
	return FTableRowParentColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTableRowParentColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A reference to the direct hierarchical parent of this row.\n */" },
		{ "DisplayName", "Parent" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementHiearchyColumns.h" },
		{ "ToolTip", "A reference to the direct hierarchical parent of this row." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTableRowParentColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTableRowParentColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageColumn,
	&NewStructOps,
	"TableRowParentColumn",
	nullptr,
	0,
	sizeof(FTableRowParentColumn),
	alignof(FTableRowParentColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableRowParentColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTableRowParentColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTableRowParentColumn()
{
	if (!Z_Registration_Info_UScriptStruct_TableRowParentColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TableRowParentColumn.InnerSingleton, Z_Construct_UScriptStruct_FTableRowParentColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TableRowParentColumn.InnerSingleton;
}
// End ScriptStruct FTableRowParentColumn

// Begin ScriptStruct FUnresolvedTableRowParentColumn
static_assert(std::is_polymorphic<FUnresolvedTableRowParentColumn>() == std::is_polymorphic<FEditorDataStorageColumn>(), "USTRUCT FUnresolvedTableRowParentColumn cannot be polymorphic unless super FEditorDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UnresolvedTableRowParentColumn;
class UScriptStruct* FUnresolvedTableRowParentColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UnresolvedTableRowParentColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UnresolvedTableRowParentColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUnresolvedTableRowParentColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("UnresolvedTableRowParentColumn"));
	}
	return Z_Registration_Info_UScriptStruct_UnresolvedTableRowParentColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FUnresolvedTableRowParentColumn>()
{
	return FUnresolvedTableRowParentColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUnresolvedTableRowParentColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A reference to the direct hierarchical parent of this row which has not been resolved yet. The stored value will\n * be used to attempt to find the indexed row. This column can not be used to find rows that are not indexed.\n */" },
		{ "DisplayName", "Parent (Unresolved)" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementHiearchyColumns.h" },
		{ "ToolTip", "A reference to the direct hierarchical parent of this row which has not been resolved yet. The stored value will\nbe used to attempt to find the indexed row. This column can not be used to find rows that are not indexed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentIdHash_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementHiearchyColumns.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_ParentIdHash;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUnresolvedTableRowParentColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FUnresolvedTableRowParentColumn_Statics::NewProp_ParentIdHash = { "ParentIdHash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUnresolvedTableRowParentColumn, ParentIdHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentIdHash_MetaData), NewProp_ParentIdHash_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUnresolvedTableRowParentColumn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnresolvedTableRowParentColumn_Statics::NewProp_ParentIdHash,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnresolvedTableRowParentColumn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUnresolvedTableRowParentColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageColumn,
	&NewStructOps,
	"UnresolvedTableRowParentColumn",
	Z_Construct_UScriptStruct_FUnresolvedTableRowParentColumn_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnresolvedTableRowParentColumn_Statics::PropPointers),
	sizeof(FUnresolvedTableRowParentColumn),
	alignof(FUnresolvedTableRowParentColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnresolvedTableRowParentColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUnresolvedTableRowParentColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUnresolvedTableRowParentColumn()
{
	if (!Z_Registration_Info_UScriptStruct_UnresolvedTableRowParentColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UnresolvedTableRowParentColumn.InnerSingleton, Z_Construct_UScriptStruct_FUnresolvedTableRowParentColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UnresolvedTableRowParentColumn.InnerSingleton;
}
// End ScriptStruct FUnresolvedTableRowParentColumn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementHiearchyColumns_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTableRowParentColumn::StaticStruct, Z_Construct_UScriptStruct_FTableRowParentColumn_Statics::NewStructOps, TEXT("TableRowParentColumn"), &Z_Registration_Info_UScriptStruct_TableRowParentColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTableRowParentColumn), 1644736839U) },
		{ FUnresolvedTableRowParentColumn::StaticStruct, Z_Construct_UScriptStruct_FUnresolvedTableRowParentColumn_Statics::NewStructOps, TEXT("UnresolvedTableRowParentColumn"), &Z_Registration_Info_UScriptStruct_UnresolvedTableRowParentColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUnresolvedTableRowParentColumn), 2657273220U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementHiearchyColumns_h_2317829594(TEXT("/Script/TypedElementFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementHiearchyColumns_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementHiearchyColumns_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
