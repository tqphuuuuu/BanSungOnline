// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/ToolWidgets/Public/Columns/SlateDelegateColumns.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateDelegateColumns() {}

// Begin Cross Module References
TOOLWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FExternalWidgetSelectionColumn();
TOOLWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetContextMenuColumn();
TOOLWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetDoubleClickedColumn();
TOOLWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetRowScrolledIntoView();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FEditorDataStorageColumn();
UPackage* Z_Construct_UPackage__Script_ToolWidgets();
// End Cross Module References

// Begin ScriptStruct FExternalWidgetSelectionColumn
static_assert(std::is_polymorphic<FExternalWidgetSelectionColumn>() == std::is_polymorphic<FEditorDataStorageColumn>(), "USTRUCT FExternalWidgetSelectionColumn cannot be polymorphic unless super FEditorDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExternalWidgetSelectionColumn;
class UScriptStruct* FExternalWidgetSelectionColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExternalWidgetSelectionColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExternalWidgetSelectionColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExternalWidgetSelectionColumn, (UObject*)Z_Construct_UPackage__Script_ToolWidgets(), TEXT("ExternalWidgetSelectionColumn"));
	}
	return Z_Registration_Info_UScriptStruct_ExternalWidgetSelectionColumn.OuterSingleton;
}
template<> TOOLWIDGETS_API UScriptStruct* StaticStruct<FExternalWidgetSelectionColumn>()
{
	return FExternalWidgetSelectionColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FExternalWidgetSelectionColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column added to a widget row when an external widget manages selection for the widget referenced by the row,\n * such as an owning SListView or STreeView\n */" },
		{ "DisplayName", "Widget with externally managed selection" },
		{ "ModuleRelativePath", "Public/Columns/SlateDelegateColumns.h" },
		{ "ToolTip", "Column added to a widget row when an external widget manages selection for the widget referenced by the row,\nsuch as an owning SListView or STreeView" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExternalWidgetSelectionColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExternalWidgetSelectionColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolWidgets,
	Z_Construct_UScriptStruct_FEditorDataStorageColumn,
	&NewStructOps,
	"ExternalWidgetSelectionColumn",
	nullptr,
	0,
	sizeof(FExternalWidgetSelectionColumn),
	alignof(FExternalWidgetSelectionColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalWidgetSelectionColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FExternalWidgetSelectionColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FExternalWidgetSelectionColumn()
{
	if (!Z_Registration_Info_UScriptStruct_ExternalWidgetSelectionColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExternalWidgetSelectionColumn.InnerSingleton, Z_Construct_UScriptStruct_FExternalWidgetSelectionColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ExternalWidgetSelectionColumn.InnerSingleton;
}
// End ScriptStruct FExternalWidgetSelectionColumn

// Begin ScriptStruct FWidgetContextMenuColumn
static_assert(std::is_polymorphic<FWidgetContextMenuColumn>() == std::is_polymorphic<FEditorDataStorageColumn>(), "USTRUCT FWidgetContextMenuColumn cannot be polymorphic unless super FEditorDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetContextMenuColumn;
class UScriptStruct* FWidgetContextMenuColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetContextMenuColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetContextMenuColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetContextMenuColumn, (UObject*)Z_Construct_UPackage__Script_ToolWidgets(), TEXT("WidgetContextMenuColumn"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetContextMenuColumn.OuterSingleton;
}
template<> TOOLWIDGETS_API UScriptStruct* StaticStruct<FWidgetContextMenuColumn>()
{
	return FWidgetContextMenuColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWidgetContextMenuColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column added to a widget row to allow systems to provide a context menu for the widget\n */" },
		{ "DisplayName", "Widget with context menu" },
		{ "ModuleRelativePath", "Public/Columns/SlateDelegateColumns.h" },
		{ "ToolTip", "Column added to a widget row to allow systems to provide a context menu for the widget" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetContextMenuColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetContextMenuColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolWidgets,
	Z_Construct_UScriptStruct_FEditorDataStorageColumn,
	&NewStructOps,
	"WidgetContextMenuColumn",
	nullptr,
	0,
	sizeof(FWidgetContextMenuColumn),
	alignof(FWidgetContextMenuColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetContextMenuColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWidgetContextMenuColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWidgetContextMenuColumn()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetContextMenuColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetContextMenuColumn.InnerSingleton, Z_Construct_UScriptStruct_FWidgetContextMenuColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WidgetContextMenuColumn.InnerSingleton;
}
// End ScriptStruct FWidgetContextMenuColumn

// Begin ScriptStruct FWidgetRowScrolledIntoView
static_assert(std::is_polymorphic<FWidgetRowScrolledIntoView>() == std::is_polymorphic<FEditorDataStorageColumn>(), "USTRUCT FWidgetRowScrolledIntoView cannot be polymorphic unless super FEditorDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetRowScrolledIntoView;
class UScriptStruct* FWidgetRowScrolledIntoView::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetRowScrolledIntoView.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetRowScrolledIntoView.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetRowScrolledIntoView, (UObject*)Z_Construct_UPackage__Script_ToolWidgets(), TEXT("WidgetRowScrolledIntoView"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetRowScrolledIntoView.OuterSingleton;
}
template<> TOOLWIDGETS_API UScriptStruct* StaticStruct<FWidgetRowScrolledIntoView>()
{
	return FWidgetRowScrolledIntoView::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWidgetRowScrolledIntoView_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column added to a widget row for table views to allow systems to specify behavior when a row is scrolled into view\n */" },
		{ "DisplayName", "Widget with row scrolled into view delegate" },
		{ "ModuleRelativePath", "Public/Columns/SlateDelegateColumns.h" },
		{ "ToolTip", "Column added to a widget row for table views to allow systems to specify behavior when a row is scrolled into view" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetRowScrolledIntoView>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetRowScrolledIntoView_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolWidgets,
	Z_Construct_UScriptStruct_FEditorDataStorageColumn,
	&NewStructOps,
	"WidgetRowScrolledIntoView",
	nullptr,
	0,
	sizeof(FWidgetRowScrolledIntoView),
	alignof(FWidgetRowScrolledIntoView),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetRowScrolledIntoView_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWidgetRowScrolledIntoView_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWidgetRowScrolledIntoView()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetRowScrolledIntoView.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetRowScrolledIntoView.InnerSingleton, Z_Construct_UScriptStruct_FWidgetRowScrolledIntoView_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WidgetRowScrolledIntoView.InnerSingleton;
}
// End ScriptStruct FWidgetRowScrolledIntoView

// Begin ScriptStruct FWidgetDoubleClickedColumn
static_assert(std::is_polymorphic<FWidgetDoubleClickedColumn>() == std::is_polymorphic<FEditorDataStorageColumn>(), "USTRUCT FWidgetDoubleClickedColumn cannot be polymorphic unless super FEditorDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetDoubleClickedColumn;
class UScriptStruct* FWidgetDoubleClickedColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetDoubleClickedColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetDoubleClickedColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetDoubleClickedColumn, (UObject*)Z_Construct_UPackage__Script_ToolWidgets(), TEXT("WidgetDoubleClickedColumn"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetDoubleClickedColumn.OuterSingleton;
}
template<> TOOLWIDGETS_API UScriptStruct* StaticStruct<FWidgetDoubleClickedColumn>()
{
	return FWidgetDoubleClickedColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWidgetDoubleClickedColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column added to a widget row to allow systems to specify behavior when the widget is double clicked\n */" },
		{ "DisplayName", "Widget with item scrolled into view delegate" },
		{ "ModuleRelativePath", "Public/Columns/SlateDelegateColumns.h" },
		{ "ToolTip", "Column added to a widget row to allow systems to specify behavior when the widget is double clicked" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetDoubleClickedColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetDoubleClickedColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolWidgets,
	Z_Construct_UScriptStruct_FEditorDataStorageColumn,
	&NewStructOps,
	"WidgetDoubleClickedColumn",
	nullptr,
	0,
	sizeof(FWidgetDoubleClickedColumn),
	alignof(FWidgetDoubleClickedColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetDoubleClickedColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWidgetDoubleClickedColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWidgetDoubleClickedColumn()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetDoubleClickedColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetDoubleClickedColumn.InnerSingleton, Z_Construct_UScriptStruct_FWidgetDoubleClickedColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WidgetDoubleClickedColumn.InnerSingleton;
}
// End ScriptStruct FWidgetDoubleClickedColumn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolWidgets_Public_Columns_SlateDelegateColumns_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FExternalWidgetSelectionColumn::StaticStruct, Z_Construct_UScriptStruct_FExternalWidgetSelectionColumn_Statics::NewStructOps, TEXT("ExternalWidgetSelectionColumn"), &Z_Registration_Info_UScriptStruct_ExternalWidgetSelectionColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExternalWidgetSelectionColumn), 4139017781U) },
		{ FWidgetContextMenuColumn::StaticStruct, Z_Construct_UScriptStruct_FWidgetContextMenuColumn_Statics::NewStructOps, TEXT("WidgetContextMenuColumn"), &Z_Registration_Info_UScriptStruct_WidgetContextMenuColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetContextMenuColumn), 3235968481U) },
		{ FWidgetRowScrolledIntoView::StaticStruct, Z_Construct_UScriptStruct_FWidgetRowScrolledIntoView_Statics::NewStructOps, TEXT("WidgetRowScrolledIntoView"), &Z_Registration_Info_UScriptStruct_WidgetRowScrolledIntoView, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetRowScrolledIntoView), 2560169270U) },
		{ FWidgetDoubleClickedColumn::StaticStruct, Z_Construct_UScriptStruct_FWidgetDoubleClickedColumn_Statics::NewStructOps, TEXT("WidgetDoubleClickedColumn"), &Z_Registration_Info_UScriptStruct_WidgetDoubleClickedColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetDoubleClickedColumn), 556626377U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolWidgets_Public_Columns_SlateDelegateColumns_h_330372025(TEXT("/Script/ToolWidgets"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolWidgets_Public_Columns_SlateDelegateColumns_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolWidgets_Public_Columns_SlateDelegateColumns_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
