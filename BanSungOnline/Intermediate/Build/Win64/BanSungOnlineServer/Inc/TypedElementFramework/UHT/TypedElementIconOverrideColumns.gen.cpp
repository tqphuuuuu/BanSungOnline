// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementFramework/Public/Elements/Columns/TypedElementIconOverrideColumns.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementIconOverrideColumns() {}

// Begin Cross Module References
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FEditorDataStorageColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementIconOverrideColumn();
UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

// Begin ScriptStruct FTypedElementIconOverrideColumn
static_assert(std::is_polymorphic<FTypedElementIconOverrideColumn>() == std::is_polymorphic<FEditorDataStorageColumn>(), "USTRUCT FTypedElementIconOverrideColumn cannot be polymorphic unless super FEditorDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementIconOverrideColumn;
class UScriptStruct* FTypedElementIconOverrideColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementIconOverrideColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementIconOverrideColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementIconOverrideColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementIconOverrideColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementIconOverrideColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementIconOverrideColumn>()
{
	return FTypedElementIconOverrideColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementIconOverrideColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * When present this column overrides any icon that would normally be used to represent the row.\n */" },
		{ "DisplayName", "Icon override" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementIconOverrideColumns.h" },
		{ "ToolTip", "When present this column overrides any icon that would normally be used to represent the row." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconName_MetaData[] = {
		{ "Comment", "/** Name of the replacement icon. */" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementIconOverrideColumns.h" },
		{ "ToolTip", "Name of the replacement icon." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_IconName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementIconOverrideColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTypedElementIconOverrideColumn_Statics::NewProp_IconName = { "IconName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTypedElementIconOverrideColumn, IconName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconName_MetaData), NewProp_IconName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTypedElementIconOverrideColumn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypedElementIconOverrideColumn_Statics::NewProp_IconName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementIconOverrideColumn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementIconOverrideColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageColumn,
	&NewStructOps,
	"TypedElementIconOverrideColumn",
	Z_Construct_UScriptStruct_FTypedElementIconOverrideColumn_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementIconOverrideColumn_Statics::PropPointers),
	sizeof(FTypedElementIconOverrideColumn),
	alignof(FTypedElementIconOverrideColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementIconOverrideColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementIconOverrideColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementIconOverrideColumn()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementIconOverrideColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementIconOverrideColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementIconOverrideColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementIconOverrideColumn.InnerSingleton;
}
// End ScriptStruct FTypedElementIconOverrideColumn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementIconOverrideColumns_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTypedElementIconOverrideColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementIconOverrideColumn_Statics::NewStructOps, TEXT("TypedElementIconOverrideColumn"), &Z_Registration_Info_UScriptStruct_TypedElementIconOverrideColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementIconOverrideColumn), 4139311745U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementIconOverrideColumns_h_758878539(TEXT("/Script/TypedElementFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementIconOverrideColumns_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementIconOverrideColumns_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
