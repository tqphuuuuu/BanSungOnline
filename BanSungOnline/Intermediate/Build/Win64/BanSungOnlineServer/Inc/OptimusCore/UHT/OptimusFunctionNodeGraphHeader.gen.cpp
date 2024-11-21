// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/OptimusFunctionNodeGraphHeader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusFunctionNodeGraphHeader() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusFunctionNodeGraph_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_FunctionReference_NoRegister();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeader();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeaderArray();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusFunctionReferenceData();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusFunctionReferenceNodeSet();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin ScriptStruct FOptimusFunctionNodeGraphHeader
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusFunctionNodeGraphHeader;
class UScriptStruct* FOptimusFunctionNodeGraphHeader::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusFunctionNodeGraphHeader.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusFunctionNodeGraphHeader.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeader, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusFunctionNodeGraphHeader"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusFunctionNodeGraphHeader.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusFunctionNodeGraphHeader>()
{
	return FOptimusFunctionNodeGraphHeader::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeader_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OptimusFunctionNodeGraphHeader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusFunctionNodeGraphHeader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusFunctionNodeGraphHeader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusFunctionNodeGraphHeader.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GraphPath;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Category;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusFunctionNodeGraphHeader>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeader_Statics::NewProp_GraphPath = { "GraphPath", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusFunctionNodeGraphHeader, GraphPath), Z_Construct_UClass_UOptimusFunctionNodeGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphPath_MetaData), NewProp_GraphPath_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeader_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusFunctionNodeGraphHeader, FunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionName_MetaData), NewProp_FunctionName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeader_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusFunctionNodeGraphHeader, Category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeader_Statics::NewProp_GraphPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeader_Statics::NewProp_FunctionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeader_Statics::NewProp_Category,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeader_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeader_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	&NewStructOps,
	"OptimusFunctionNodeGraphHeader",
	Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeader_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeader_Statics::PropPointers),
	sizeof(FOptimusFunctionNodeGraphHeader),
	alignof(FOptimusFunctionNodeGraphHeader),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeader_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeader_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeader()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusFunctionNodeGraphHeader.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusFunctionNodeGraphHeader.InnerSingleton, Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeader_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusFunctionNodeGraphHeader.InnerSingleton;
}
// End ScriptStruct FOptimusFunctionNodeGraphHeader

// Begin ScriptStruct FOptimusFunctionNodeGraphHeaderArray
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusFunctionNodeGraphHeaderArray;
class UScriptStruct* FOptimusFunctionNodeGraphHeaderArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusFunctionNodeGraphHeaderArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusFunctionNodeGraphHeaderArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeaderArray, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusFunctionNodeGraphHeaderArray"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusFunctionNodeGraphHeaderArray.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusFunctionNodeGraphHeaderArray>()
{
	return FOptimusFunctionNodeGraphHeaderArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeaderArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OptimusFunctionNodeGraphHeader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Headers_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusFunctionNodeGraphHeader.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Headers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Headers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusFunctionNodeGraphHeaderArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeaderArray_Statics::NewProp_Headers_Inner = { "Headers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeader, METADATA_PARAMS(0, nullptr) }; // 3954459436
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeaderArray_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusFunctionNodeGraphHeaderArray, Headers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Headers_MetaData), NewProp_Headers_MetaData) }; // 3954459436
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeaderArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeaderArray_Statics::NewProp_Headers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeaderArray_Statics::NewProp_Headers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeaderArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeaderArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	&NewStructOps,
	"OptimusFunctionNodeGraphHeaderArray",
	Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeaderArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeaderArray_Statics::PropPointers),
	sizeof(FOptimusFunctionNodeGraphHeaderArray),
	alignof(FOptimusFunctionNodeGraphHeaderArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeaderArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeaderArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeaderArray()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusFunctionNodeGraphHeaderArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusFunctionNodeGraphHeaderArray.InnerSingleton, Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeaderArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusFunctionNodeGraphHeaderArray.InnerSingleton;
}
// End ScriptStruct FOptimusFunctionNodeGraphHeaderArray

// Begin ScriptStruct FOptimusFunctionReferenceNodeSet
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusFunctionReferenceNodeSet;
class UScriptStruct* FOptimusFunctionReferenceNodeSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusFunctionReferenceNodeSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusFunctionReferenceNodeSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusFunctionReferenceNodeSet, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusFunctionReferenceNodeSet"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusFunctionReferenceNodeSet.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusFunctionReferenceNodeSet>()
{
	return FOptimusFunctionReferenceNodeSet::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusFunctionReferenceNodeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OptimusFunctionNodeGraphHeader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusFunctionNodeGraphHeader.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Nodes_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Nodes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusFunctionReferenceNodeSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FOptimusFunctionReferenceNodeSet_Statics::NewProp_Nodes_ElementProp = { "Nodes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOptimusNode_FunctionReference_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FOptimusFunctionReferenceNodeSet_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusFunctionReferenceNodeSet, Nodes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Nodes_MetaData), NewProp_Nodes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusFunctionReferenceNodeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusFunctionReferenceNodeSet_Statics::NewProp_Nodes_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusFunctionReferenceNodeSet_Statics::NewProp_Nodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusFunctionReferenceNodeSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusFunctionReferenceNodeSet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	&NewStructOps,
	"OptimusFunctionReferenceNodeSet",
	Z_Construct_UScriptStruct_FOptimusFunctionReferenceNodeSet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusFunctionReferenceNodeSet_Statics::PropPointers),
	sizeof(FOptimusFunctionReferenceNodeSet),
	alignof(FOptimusFunctionReferenceNodeSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusFunctionReferenceNodeSet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusFunctionReferenceNodeSet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusFunctionReferenceNodeSet()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusFunctionReferenceNodeSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusFunctionReferenceNodeSet.InnerSingleton, Z_Construct_UScriptStruct_FOptimusFunctionReferenceNodeSet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusFunctionReferenceNodeSet.InnerSingleton;
}
// End ScriptStruct FOptimusFunctionReferenceNodeSet

// Begin ScriptStruct FOptimusFunctionReferenceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusFunctionReferenceData;
class UScriptStruct* FOptimusFunctionReferenceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusFunctionReferenceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusFunctionReferenceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusFunctionReferenceData, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusFunctionReferenceData"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusFunctionReferenceData.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusFunctionReferenceData>()
{
	return FOptimusFunctionReferenceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusFunctionReferenceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OptimusFunctionNodeGraphHeader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionReferences_MetaData[] = {
		{ "Comment", "// Group function reference nodes by function node graph path\n// using FSoftObjectPath instead of TSoftObjectPtr such that ExportText(...) is deterministic\n" },
		{ "ModuleRelativePath", "Public/OptimusFunctionNodeGraphHeader.h" },
		{ "ToolTip", "Group function reference nodes by function node graph path\nusing FSoftObjectPath instead of TSoftObjectPtr such that ExportText(...) is deterministic" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FunctionReferences_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FunctionReferences_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FunctionReferences;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusFunctionReferenceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusFunctionReferenceData_Statics::NewProp_FunctionReferences_ValueProp = { "FunctionReferences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FOptimusFunctionReferenceNodeSet, METADATA_PARAMS(0, nullptr) }; // 2925172234
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusFunctionReferenceData_Statics::NewProp_FunctionReferences_Key_KeyProp = { "FunctionReferences_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FOptimusFunctionReferenceData_Statics::NewProp_FunctionReferences = { "FunctionReferences", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusFunctionReferenceData, FunctionReferences), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionReferences_MetaData), NewProp_FunctionReferences_MetaData) }; // 2925172234
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusFunctionReferenceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusFunctionReferenceData_Statics::NewProp_FunctionReferences_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusFunctionReferenceData_Statics::NewProp_FunctionReferences_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusFunctionReferenceData_Statics::NewProp_FunctionReferences,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusFunctionReferenceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusFunctionReferenceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	&NewStructOps,
	"OptimusFunctionReferenceData",
	Z_Construct_UScriptStruct_FOptimusFunctionReferenceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusFunctionReferenceData_Statics::PropPointers),
	sizeof(FOptimusFunctionReferenceData),
	alignof(FOptimusFunctionReferenceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusFunctionReferenceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusFunctionReferenceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusFunctionReferenceData()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusFunctionReferenceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusFunctionReferenceData.InnerSingleton, Z_Construct_UScriptStruct_FOptimusFunctionReferenceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusFunctionReferenceData.InnerSingleton;
}
// End ScriptStruct FOptimusFunctionReferenceData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusFunctionNodeGraphHeader_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOptimusFunctionNodeGraphHeader::StaticStruct, Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeader_Statics::NewStructOps, TEXT("OptimusFunctionNodeGraphHeader"), &Z_Registration_Info_UScriptStruct_OptimusFunctionNodeGraphHeader, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusFunctionNodeGraphHeader), 3954459436U) },
		{ FOptimusFunctionNodeGraphHeaderArray::StaticStruct, Z_Construct_UScriptStruct_FOptimusFunctionNodeGraphHeaderArray_Statics::NewStructOps, TEXT("OptimusFunctionNodeGraphHeaderArray"), &Z_Registration_Info_UScriptStruct_OptimusFunctionNodeGraphHeaderArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusFunctionNodeGraphHeaderArray), 2503968908U) },
		{ FOptimusFunctionReferenceNodeSet::StaticStruct, Z_Construct_UScriptStruct_FOptimusFunctionReferenceNodeSet_Statics::NewStructOps, TEXT("OptimusFunctionReferenceNodeSet"), &Z_Registration_Info_UScriptStruct_OptimusFunctionReferenceNodeSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusFunctionReferenceNodeSet), 2925172234U) },
		{ FOptimusFunctionReferenceData::StaticStruct, Z_Construct_UScriptStruct_FOptimusFunctionReferenceData_Statics::NewStructOps, TEXT("OptimusFunctionReferenceData"), &Z_Registration_Info_UScriptStruct_OptimusFunctionReferenceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusFunctionReferenceData), 1678974462U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusFunctionNodeGraphHeader_h_3644497915(TEXT("/Script/OptimusCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusFunctionNodeGraphHeader_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusFunctionNodeGraphHeader_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
