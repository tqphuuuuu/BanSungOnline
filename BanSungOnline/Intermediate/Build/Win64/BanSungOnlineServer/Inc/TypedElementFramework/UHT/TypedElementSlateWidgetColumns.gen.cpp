// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementFramework/Public/Elements/Columns/TypedElementSlateWidgetColumns.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementSlateWidgetColumns() {}

// Begin Cross Module References
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FDescriptionColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayNameColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FEditorDataStorageColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FEditorDataStorageTag();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColorColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceDeletesRowTag();
UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

// Begin ScriptStruct FTypedElementSlateWidgetReferenceColumn
static_assert(std::is_polymorphic<FTypedElementSlateWidgetReferenceColumn>() == std::is_polymorphic<FEditorDataStorageColumn>(), "USTRUCT FTypedElementSlateWidgetReferenceColumn cannot be polymorphic unless super FEditorDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceColumn;
class UScriptStruct* FTypedElementSlateWidgetReferenceColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementSlateWidgetReferenceColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementSlateWidgetReferenceColumn>()
{
	return FTypedElementSlateWidgetReferenceColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Stores a widget reference in the data storage. At the start of processing any\n * columns that are not pointing to a valid widget will be removed. If the\n * FTypedElementSlateWidgetDeletesRowTag is found then the entire row will\n * be deleted.\n */" },
		{ "DisplayName", "Slate widget reference" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementSlateWidgetColumns.h" },
		{ "ToolTip", "Stores a widget reference in the data storage. At the start of processing any\ncolumns that are not pointing to a valid widget will be removed. If the\nFTypedElementSlateWidgetDeletesRowTag is found then the entire row will\nbe deleted." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementSlateWidgetReferenceColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageColumn,
	&NewStructOps,
	"TypedElementSlateWidgetReferenceColumn",
	nullptr,
	0,
	sizeof(FTypedElementSlateWidgetReferenceColumn),
	alignof(FTypedElementSlateWidgetReferenceColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceColumn()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceColumn.InnerSingleton;
}
// End ScriptStruct FTypedElementSlateWidgetReferenceColumn

// Begin ScriptStruct FTypedElementSlateWidgetReferenceDeletesRowTag
static_assert(std::is_polymorphic<FTypedElementSlateWidgetReferenceDeletesRowTag>() == std::is_polymorphic<FEditorDataStorageTag>(), "USTRUCT FTypedElementSlateWidgetReferenceDeletesRowTag cannot be polymorphic unless super FEditorDataStorageTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceDeletesRowTag;
class UScriptStruct* FTypedElementSlateWidgetReferenceDeletesRowTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceDeletesRowTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceDeletesRowTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceDeletesRowTag, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementSlateWidgetReferenceDeletesRowTag"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceDeletesRowTag.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementSlateWidgetReferenceDeletesRowTag>()
{
	return FTypedElementSlateWidgetReferenceDeletesRowTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceDeletesRowTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Tag to indicate that the entire row needs to be deleted when the widget in\n * FTypedElementSlateWidgetReferenceColumn is no longer valid, otherwise only\n * the column will be removed.\n */" },
		{ "DisplayName", "Slate widget reference deletes row" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementSlateWidgetColumns.h" },
		{ "ToolTip", "Tag to indicate that the entire row needs to be deleted when the widget in\nFTypedElementSlateWidgetReferenceColumn is no longer valid, otherwise only\nthe column will be removed." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementSlateWidgetReferenceDeletesRowTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceDeletesRowTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageTag,
	&NewStructOps,
	"TypedElementSlateWidgetReferenceDeletesRowTag",
	nullptr,
	0,
	sizeof(FTypedElementSlateWidgetReferenceDeletesRowTag),
	alignof(FTypedElementSlateWidgetReferenceDeletesRowTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceDeletesRowTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceDeletesRowTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceDeletesRowTag()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceDeletesRowTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceDeletesRowTag.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceDeletesRowTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceDeletesRowTag.InnerSingleton;
}
// End ScriptStruct FTypedElementSlateWidgetReferenceDeletesRowTag

// Begin ScriptStruct FDisplayNameColumn
static_assert(std::is_polymorphic<FDisplayNameColumn>() == std::is_polymorphic<FEditorDataStorageColumn>(), "USTRUCT FDisplayNameColumn cannot be polymorphic unless super FEditorDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayNameColumn;
class UScriptStruct* FDisplayNameColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayNameColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayNameColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayNameColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("DisplayNameColumn"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayNameColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FDisplayNameColumn>()
{
	return FDisplayNameColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDisplayNameColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A localized display name for this row.\n * \n * This can be used as a dynamic column to specify display names for multiple items in a row.\n */" },
		{ "DisplayName", "Display Name" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementSlateWidgetColumns.h" },
		{ "ToolTip", "A localized display name for this row.\n\nThis can be used as a dynamic column to specify display names for multiple items in a row." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementSlateWidgetColumns.h" },
		{ "Searchable", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayNameColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDisplayNameColumn_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayNameColumn, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayNameColumn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayNameColumn_Statics::NewProp_DisplayName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayNameColumn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayNameColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageColumn,
	&NewStructOps,
	"DisplayNameColumn",
	Z_Construct_UScriptStruct_FDisplayNameColumn_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayNameColumn_Statics::PropPointers),
	sizeof(FDisplayNameColumn),
	alignof(FDisplayNameColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayNameColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDisplayNameColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDisplayNameColumn()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayNameColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayNameColumn.InnerSingleton, Z_Construct_UScriptStruct_FDisplayNameColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DisplayNameColumn.InnerSingleton;
}
// End ScriptStruct FDisplayNameColumn

// Begin ScriptStruct FDescriptionColumn
static_assert(std::is_polymorphic<FDescriptionColumn>() == std::is_polymorphic<FEditorDataStorageColumn>(), "USTRUCT FDescriptionColumn cannot be polymorphic unless super FEditorDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DescriptionColumn;
class UScriptStruct* FDescriptionColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DescriptionColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DescriptionColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDescriptionColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("DescriptionColumn"));
	}
	return Z_Registration_Info_UScriptStruct_DescriptionColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FDescriptionColumn>()
{
	return FDescriptionColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDescriptionColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A localized description for this row.\n * \n * This can be used as a dynamic column to specify descriptions for multiple items in a row.\n */" },
		{ "DisplayName", "Description" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementSlateWidgetColumns.h" },
		{ "ToolTip", "A localized description for this row.\n\nThis can be used as a dynamic column to specify descriptions for multiple items in a row." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementSlateWidgetColumns.h" },
		{ "Searchable", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDescriptionColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDescriptionColumn_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDescriptionColumn, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDescriptionColumn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDescriptionColumn_Statics::NewProp_Description,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDescriptionColumn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDescriptionColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageColumn,
	&NewStructOps,
	"DescriptionColumn",
	Z_Construct_UScriptStruct_FDescriptionColumn_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDescriptionColumn_Statics::PropPointers),
	sizeof(FDescriptionColumn),
	alignof(FDescriptionColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDescriptionColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDescriptionColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDescriptionColumn()
{
	if (!Z_Registration_Info_UScriptStruct_DescriptionColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DescriptionColumn.InnerSingleton, Z_Construct_UScriptStruct_FDescriptionColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DescriptionColumn.InnerSingleton;
}
// End ScriptStruct FDescriptionColumn

// Begin ScriptStruct FSlateColorColumn
static_assert(std::is_polymorphic<FSlateColorColumn>() == std::is_polymorphic<FEditorDataStorageColumn>(), "USTRUCT FSlateColorColumn cannot be polymorphic unless super FEditorDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SlateColorColumn;
class UScriptStruct* FSlateColorColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SlateColorColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SlateColorColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlateColorColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("SlateColorColumn"));
	}
	return Z_Registration_Info_UScriptStruct_SlateColorColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FSlateColorColumn>()
{
	return FSlateColorColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSlateColorColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A color for this row. Can be used by widget rows to determine widget color or non-widget rows to attach a logical color to their data\n * (e.g asset colors)\n */" },
		{ "DisplayName", "Color" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementSlateWidgetColumns.h" },
		{ "ToolTip", "A color for this row. Can be used by widget rows to determine widget color or non-widget rows to attach a logical color to their data\n(e.g asset colors)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementSlateWidgetColumns.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlateColorColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateColorColumn_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlateColorColumn, Color), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) }; // 2024315916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlateColorColumn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateColorColumn_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateColorColumn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlateColorColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageColumn,
	&NewStructOps,
	"SlateColorColumn",
	Z_Construct_UScriptStruct_FSlateColorColumn_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateColorColumn_Statics::PropPointers),
	sizeof(FSlateColorColumn),
	alignof(FSlateColorColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateColorColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSlateColorColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSlateColorColumn()
{
	if (!Z_Registration_Info_UScriptStruct_SlateColorColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SlateColorColumn.InnerSingleton, Z_Construct_UScriptStruct_FSlateColorColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SlateColorColumn.InnerSingleton;
}
// End ScriptStruct FSlateColorColumn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementSlateWidgetColumns_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTypedElementSlateWidgetReferenceColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceColumn_Statics::NewStructOps, TEXT("TypedElementSlateWidgetReferenceColumn"), &Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementSlateWidgetReferenceColumn), 2728404717U) },
		{ FTypedElementSlateWidgetReferenceDeletesRowTag::StaticStruct, Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceDeletesRowTag_Statics::NewStructOps, TEXT("TypedElementSlateWidgetReferenceDeletesRowTag"), &Z_Registration_Info_UScriptStruct_TypedElementSlateWidgetReferenceDeletesRowTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementSlateWidgetReferenceDeletesRowTag), 3814348957U) },
		{ FDisplayNameColumn::StaticStruct, Z_Construct_UScriptStruct_FDisplayNameColumn_Statics::NewStructOps, TEXT("DisplayNameColumn"), &Z_Registration_Info_UScriptStruct_DisplayNameColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayNameColumn), 2170360287U) },
		{ FDescriptionColumn::StaticStruct, Z_Construct_UScriptStruct_FDescriptionColumn_Statics::NewStructOps, TEXT("DescriptionColumn"), &Z_Registration_Info_UScriptStruct_DescriptionColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDescriptionColumn), 2732303573U) },
		{ FSlateColorColumn::StaticStruct, Z_Construct_UScriptStruct_FSlateColorColumn_Statics::NewStructOps, TEXT("SlateColorColumn"), &Z_Registration_Info_UScriptStruct_SlateColorColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSlateColorColumn), 386338005U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementSlateWidgetColumns_h_3764823903(TEXT("/Script/TypedElementFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementSlateWidgetColumns_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementSlateWidgetColumns_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
