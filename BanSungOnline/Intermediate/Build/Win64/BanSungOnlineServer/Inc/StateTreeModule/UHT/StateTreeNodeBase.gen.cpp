// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeModule/Public/StateTreeNodeBase.h"
#include "StateTreeModule/Public/StateTreeIndexTypes.h"
#include "StateTreeModule/Public/StateTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeNodeBase() {}

// Begin Cross Module References
STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeNodeFormatting();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeDataHandle();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeIndex16();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeNodeBase();
UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References

// Begin Enum EStateTreeNodeFormatting
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeNodeFormatting;
static UEnum* EStateTreeNodeFormatting_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStateTreeNodeFormatting.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStateTreeNodeFormatting.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeNodeFormatting, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeNodeFormatting"));
	}
	return Z_Registration_Info_UEnum_EStateTreeNodeFormatting.OuterSingleton;
}
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeNodeFormatting>()
{
	return EStateTreeNodeFormatting_StaticEnum();
}
struct Z_Construct_UEnum_StateTreeModule_EStateTreeNodeFormatting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Enum describing in what format a text is expected to be returned.\n *\n * - Normal text should be used for values\n * - Bold text should generally be used for actions, like name a of a task \"<b>Play Animation</> {AnimName}\".\n * - Subdued should be generally used for secondary/structural information, like \"{Left} <s>equals</> {Right}\".\n */" },
		{ "ModuleRelativePath", "Public/StateTreeNodeBase.h" },
		{ "RichText.Comment", "/**\n\x09 * The returned text can contain following right text formatting (no nesting)\n\x09 *\x09- <b>Bold</> (bolder font is used)\n\x09 *\x09- <s>Subdued</> (normal font with lighter color) */" },
		{ "RichText.Name", "RichText" },
		{ "RichText.ToolTip", "The returned text can contain following right text formatting (no nesting)\n     - <b>Bold</> (bolder font is used)\n     - <s>Subdued</> (normal font with lighter color)" },
		{ "Text.Comment", "/** The text should be unformatted */" },
		{ "Text.Name", "Text" },
		{ "Text.ToolTip", "The text should be unformatted" },
		{ "ToolTip", "Enum describing in what format a text is expected to be returned.\n\n- Normal text should be used for values\n- Bold text should generally be used for actions, like name a of a task \"<b>Play Animation</> {AnimName}\".\n- Subdued should be generally used for secondary/structural information, like \"{Left} <s>equals</> {Right}\"." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "RichText", (int64)RichText },
		{ "Text", (int64)Text },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeNodeFormatting_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	"EStateTreeNodeFormatting",
	"EStateTreeNodeFormatting",
	Z_Construct_UEnum_StateTreeModule_EStateTreeNodeFormatting_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeNodeFormatting_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeNodeFormatting_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreeNodeFormatting_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeNodeFormatting()
{
	if (!Z_Registration_Info_UEnum_EStateTreeNodeFormatting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeNodeFormatting.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeNodeFormatting_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStateTreeNodeFormatting.InnerSingleton;
}
// End Enum EStateTreeNodeFormatting

// Begin ScriptStruct FStateTreeNodeBase
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeNodeBase;
class UScriptStruct* FStateTreeNodeBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeNodeBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeNodeBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeNodeBase, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeNodeBase"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeNodeBase.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeNodeBase>()
{
	return FStateTreeNodeBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base struct of StateTree Conditions, Considerations, Evaluators, and Tasks.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeNodeBase.h" },
		{ "ToolTip", "Base struct of StateTree Conditions, Considerations, Evaluators, and Tasks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "/** Name of the node. */" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/StateTreeNodeBase.h" },
		{ "ToolTip", "Name of the node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BindingsBatch_MetaData[] = {
		{ "Comment", "/** Property binding copy batch handle. */" },
		{ "ModuleRelativePath", "Public/StateTreeNodeBase.h" },
		{ "ToolTip", "Property binding copy batch handle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceTemplateIndex_MetaData[] = {
		{ "Comment", "/** Index of template instance data for the node. Can point to Shared or Default instance data in StateTree depending on node type. */" },
		{ "ModuleRelativePath", "Public/StateTreeNodeBase.h" },
		{ "ToolTip", "Index of template instance data for the node. Can point to Shared or Default instance data in StateTree depending on node type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceDataHandle_MetaData[] = {
		{ "Comment", "/** Data handle to access the instance data. */" },
		{ "ModuleRelativePath", "Public/StateTreeNodeBase.h" },
		{ "ToolTip", "Data handle to access the instance data." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataViewIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeNodeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeNodeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInstanceIsObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeNodeBase.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BindingsBatch;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceTemplateIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceDataHandle;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataViewIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceIndex;
	static void NewProp_bInstanceIsObject_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInstanceIsObject;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeNodeBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeNodeBase, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_BindingsBatch = { "BindingsBatch", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeNodeBase, BindingsBatch), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BindingsBatch_MetaData), NewProp_BindingsBatch_MetaData) }; // 2905844030
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_InstanceTemplateIndex = { "InstanceTemplateIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeNodeBase, InstanceTemplateIndex), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceTemplateIndex_MetaData), NewProp_InstanceTemplateIndex_MetaData) }; // 2905844030
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_InstanceDataHandle = { "InstanceDataHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeNodeBase, InstanceDataHandle), Z_Construct_UScriptStruct_FStateTreeDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceDataHandle_MetaData), NewProp_InstanceDataHandle_MetaData) }; // 3876109322
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_DataViewIndex = { "DataViewIndex", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeNodeBase, DataViewIndex_DEPRECATED), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataViewIndex_MetaData), NewProp_DataViewIndex_MetaData) }; // 2905844030
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeNodeBase, InstanceIndex_DEPRECATED), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceIndex_MetaData), NewProp_InstanceIndex_MetaData) }; // 2905844030
void Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_bInstanceIsObject_SetBit(void* Obj)
{
	((FStateTreeNodeBase*)Obj)->bInstanceIsObject_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_bInstanceIsObject = { "bInstanceIsObject", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FStateTreeNodeBase), &Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_bInstanceIsObject_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInstanceIsObject_MetaData), NewProp_bInstanceIsObject_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_BindingsBatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_InstanceTemplateIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_InstanceDataHandle,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_DataViewIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_InstanceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_bInstanceIsObject,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeNodeBase",
	Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::PropPointers),
	sizeof(FStateTreeNodeBase),
	alignof(FStateTreeNodeBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeNodeBase()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeNodeBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeNodeBase.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeNodeBase.InnerSingleton;
}
// End ScriptStruct FStateTreeNodeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeNodeBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EStateTreeNodeFormatting_StaticEnum, TEXT("EStateTreeNodeFormatting"), &Z_Registration_Info_UEnum_EStateTreeNodeFormatting, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3287387911U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStateTreeNodeBase::StaticStruct, Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewStructOps, TEXT("StateTreeNodeBase"), &Z_Registration_Info_UScriptStruct_StateTreeNodeBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeNodeBase), 1460619206U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeNodeBase_h_2999663380(TEXT("/Script/StateTreeModule"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeNodeBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeNodeBase_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeNodeBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeNodeBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
