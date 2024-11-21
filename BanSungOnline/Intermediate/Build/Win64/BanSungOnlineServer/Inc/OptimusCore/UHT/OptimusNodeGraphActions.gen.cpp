// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Private/Actions/OptimusNodeGraphActions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNodeGraphActions() {}

// Begin Cross Module References
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusAction();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddGraph();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddLink();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddNode();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddNodePair();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveLink();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveNodePair();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_ConnectAdderPin();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_DuplicateNode();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_PackageKernelFunction();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveGraph();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveLink();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveNode();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveNodePair();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RenameGraph();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_UnpackageKernelFunction();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin ScriptStruct FOptimusNodeGraphAction_AddGraph
static_assert(std::is_polymorphic<FOptimusNodeGraphAction_AddGraph>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusNodeGraphAction_AddGraph cannot be polymorphic unless super FOptimusAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddGraph;
class UScriptStruct* FOptimusNodeGraphAction_AddGraph::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddGraph.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddGraph.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddGraph, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeGraphAction_AddGraph"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddGraph.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeGraphAction_AddGraph>()
{
	return FOptimusNodeGraphAction_AddGraph::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeGraphActions.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeGraphAction_AddGraph>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddGraph_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	Z_Construct_UScriptStruct_FOptimusAction,
	&NewStructOps,
	"OptimusNodeGraphAction_AddGraph",
	nullptr,
	0,
	sizeof(FOptimusNodeGraphAction_AddGraph),
	alignof(FOptimusNodeGraphAction_AddGraph),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddGraph_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddGraph_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddGraph()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddGraph.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddGraph.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddGraph_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddGraph.InnerSingleton;
}
// End ScriptStruct FOptimusNodeGraphAction_AddGraph

// Begin ScriptStruct FOptimusNodeGraphAction_RemoveGraph
static_assert(std::is_polymorphic<FOptimusNodeGraphAction_RemoveGraph>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusNodeGraphAction_RemoveGraph cannot be polymorphic unless super FOptimusAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveGraph;
class UScriptStruct* FOptimusNodeGraphAction_RemoveGraph::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveGraph.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveGraph.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveGraph, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeGraphAction_RemoveGraph"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveGraph.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeGraphAction_RemoveGraph>()
{
	return FOptimusNodeGraphAction_RemoveGraph::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeGraphActions.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeGraphAction_RemoveGraph>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveGraph_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	Z_Construct_UScriptStruct_FOptimusAction,
	&NewStructOps,
	"OptimusNodeGraphAction_RemoveGraph",
	nullptr,
	0,
	sizeof(FOptimusNodeGraphAction_RemoveGraph),
	alignof(FOptimusNodeGraphAction_RemoveGraph),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveGraph_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveGraph_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveGraph()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveGraph.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveGraph.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveGraph_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveGraph.InnerSingleton;
}
// End ScriptStruct FOptimusNodeGraphAction_RemoveGraph

// Begin ScriptStruct FOptimusNodeGraphAction_RenameGraph
static_assert(std::is_polymorphic<FOptimusNodeGraphAction_RenameGraph>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusNodeGraphAction_RenameGraph cannot be polymorphic unless super FOptimusAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RenameGraph;
class UScriptStruct* FOptimusNodeGraphAction_RenameGraph::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RenameGraph.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RenameGraph.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RenameGraph, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeGraphAction_RenameGraph"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RenameGraph.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeGraphAction_RenameGraph>()
{
	return FOptimusNodeGraphAction_RenameGraph::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RenameGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeGraphActions.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeGraphAction_RenameGraph>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RenameGraph_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	Z_Construct_UScriptStruct_FOptimusAction,
	&NewStructOps,
	"OptimusNodeGraphAction_RenameGraph",
	nullptr,
	0,
	sizeof(FOptimusNodeGraphAction_RenameGraph),
	alignof(FOptimusNodeGraphAction_RenameGraph),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RenameGraph_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RenameGraph_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RenameGraph()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RenameGraph.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RenameGraph.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RenameGraph_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RenameGraph.InnerSingleton;
}
// End ScriptStruct FOptimusNodeGraphAction_RenameGraph

// Begin ScriptStruct FOptimusNodeGraphAction_AddNode
static_assert(std::is_polymorphic<FOptimusNodeGraphAction_AddNode>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusNodeGraphAction_AddNode cannot be polymorphic unless super FOptimusAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddNode;
class UScriptStruct* FOptimusNodeGraphAction_AddNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddNode, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeGraphAction_AddNode"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddNode.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeGraphAction_AddNode>()
{
	return FOptimusNodeGraphAction_AddNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeGraphActions.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeGraphAction_AddNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	Z_Construct_UScriptStruct_FOptimusAction,
	&NewStructOps,
	"OptimusNodeGraphAction_AddNode",
	nullptr,
	0,
	sizeof(FOptimusNodeGraphAction_AddNode),
	alignof(FOptimusNodeGraphAction_AddNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddNode()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddNode.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddNode.InnerSingleton;
}
// End ScriptStruct FOptimusNodeGraphAction_AddNode

// Begin ScriptStruct FOptimusNodeGraphAction_DuplicateNode
static_assert(std::is_polymorphic<FOptimusNodeGraphAction_DuplicateNode>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusNodeGraphAction_DuplicateNode cannot be polymorphic unless super FOptimusAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_DuplicateNode;
class UScriptStruct* FOptimusNodeGraphAction_DuplicateNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_DuplicateNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_DuplicateNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_DuplicateNode, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeGraphAction_DuplicateNode"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_DuplicateNode.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeGraphAction_DuplicateNode>()
{
	return FOptimusNodeGraphAction_DuplicateNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusNodeGraphAction_DuplicateNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeGraphActions.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeGraphAction_DuplicateNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeGraphAction_DuplicateNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	Z_Construct_UScriptStruct_FOptimusAction,
	&NewStructOps,
	"OptimusNodeGraphAction_DuplicateNode",
	nullptr,
	0,
	sizeof(FOptimusNodeGraphAction_DuplicateNode),
	alignof(FOptimusNodeGraphAction_DuplicateNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_DuplicateNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusNodeGraphAction_DuplicateNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_DuplicateNode()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_DuplicateNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_DuplicateNode.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_DuplicateNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_DuplicateNode.InnerSingleton;
}
// End ScriptStruct FOptimusNodeGraphAction_DuplicateNode

// Begin ScriptStruct FOptimusNodeGraphAction_RemoveNode
static_assert(std::is_polymorphic<FOptimusNodeGraphAction_RemoveNode>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusNodeGraphAction_RemoveNode cannot be polymorphic unless super FOptimusAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveNode;
class UScriptStruct* FOptimusNodeGraphAction_RemoveNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveNode, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeGraphAction_RemoveNode"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveNode.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeGraphAction_RemoveNode>()
{
	return FOptimusNodeGraphAction_RemoveNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeGraphActions.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeGraphAction_RemoveNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	Z_Construct_UScriptStruct_FOptimusAction,
	&NewStructOps,
	"OptimusNodeGraphAction_RemoveNode",
	nullptr,
	0,
	sizeof(FOptimusNodeGraphAction_RemoveNode),
	alignof(FOptimusNodeGraphAction_RemoveNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveNode()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveNode.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveNode.InnerSingleton;
}
// End ScriptStruct FOptimusNodeGraphAction_RemoveNode

// Begin ScriptStruct FOptimusNodeGraphAction_AddRemoveNodePair
static_assert(std::is_polymorphic<FOptimusNodeGraphAction_AddRemoveNodePair>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusNodeGraphAction_AddRemoveNodePair cannot be polymorphic unless super FOptimusAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddRemoveNodePair;
class UScriptStruct* FOptimusNodeGraphAction_AddRemoveNodePair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddRemoveNodePair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddRemoveNodePair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveNodePair, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeGraphAction_AddRemoveNodePair"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddRemoveNodePair.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeGraphAction_AddRemoveNodePair>()
{
	return FOptimusNodeGraphAction_AddRemoveNodePair::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveNodePair_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// A base action for adding/removing node pairs.\n" },
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeGraphActions.h" },
		{ "ToolTip", "A base action for adding/removing node pairs." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeGraphAction_AddRemoveNodePair>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveNodePair_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	Z_Construct_UScriptStruct_FOptimusAction,
	&NewStructOps,
	"OptimusNodeGraphAction_AddRemoveNodePair",
	nullptr,
	0,
	sizeof(FOptimusNodeGraphAction_AddRemoveNodePair),
	alignof(FOptimusNodeGraphAction_AddRemoveNodePair),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveNodePair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveNodePair_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveNodePair()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddRemoveNodePair.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddRemoveNodePair.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveNodePair_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddRemoveNodePair.InnerSingleton;
}
// End ScriptStruct FOptimusNodeGraphAction_AddRemoveNodePair

// Begin ScriptStruct FOptimusNodeGraphAction_AddNodePair
static_assert(std::is_polymorphic<FOptimusNodeGraphAction_AddNodePair>() == std::is_polymorphic<FOptimusNodeGraphAction_AddRemoveNodePair>(), "USTRUCT FOptimusNodeGraphAction_AddNodePair cannot be polymorphic unless super FOptimusNodeGraphAction_AddRemoveNodePair is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddNodePair;
class UScriptStruct* FOptimusNodeGraphAction_AddNodePair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddNodePair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddNodePair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddNodePair, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeGraphAction_AddNodePair"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddNodePair.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeGraphAction_AddNodePair>()
{
	return FOptimusNodeGraphAction_AddNodePair::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddNodePair_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeGraphActions.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeGraphAction_AddNodePair>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddNodePair_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveNodePair,
	&NewStructOps,
	"OptimusNodeGraphAction_AddNodePair",
	nullptr,
	0,
	sizeof(FOptimusNodeGraphAction_AddNodePair),
	alignof(FOptimusNodeGraphAction_AddNodePair),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddNodePair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddNodePair_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddNodePair()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddNodePair.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddNodePair.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddNodePair_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddNodePair.InnerSingleton;
}
// End ScriptStruct FOptimusNodeGraphAction_AddNodePair

// Begin ScriptStruct FOptimusNodeGraphAction_RemoveNodePair
static_assert(std::is_polymorphic<FOptimusNodeGraphAction_RemoveNodePair>() == std::is_polymorphic<FOptimusNodeGraphAction_AddRemoveNodePair>(), "USTRUCT FOptimusNodeGraphAction_RemoveNodePair cannot be polymorphic unless super FOptimusNodeGraphAction_AddRemoveNodePair is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveNodePair;
class UScriptStruct* FOptimusNodeGraphAction_RemoveNodePair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveNodePair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveNodePair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveNodePair, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeGraphAction_RemoveNodePair"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveNodePair.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeGraphAction_RemoveNodePair>()
{
	return FOptimusNodeGraphAction_RemoveNodePair::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveNodePair_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeGraphActions.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeGraphAction_RemoveNodePair>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveNodePair_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveNodePair,
	&NewStructOps,
	"OptimusNodeGraphAction_RemoveNodePair",
	nullptr,
	0,
	sizeof(FOptimusNodeGraphAction_RemoveNodePair),
	alignof(FOptimusNodeGraphAction_RemoveNodePair),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveNodePair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveNodePair_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveNodePair()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveNodePair.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveNodePair.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveNodePair_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveNodePair.InnerSingleton;
}
// End ScriptStruct FOptimusNodeGraphAction_RemoveNodePair

// Begin ScriptStruct FOptimusNodeGraphAction_AddRemoveLink
static_assert(std::is_polymorphic<FOptimusNodeGraphAction_AddRemoveLink>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusNodeGraphAction_AddRemoveLink cannot be polymorphic unless super FOptimusAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddRemoveLink;
class UScriptStruct* FOptimusNodeGraphAction_AddRemoveLink::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddRemoveLink.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddRemoveLink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveLink, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeGraphAction_AddRemoveLink"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddRemoveLink.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeGraphAction_AddRemoveLink>()
{
	return FOptimusNodeGraphAction_AddRemoveLink::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveLink_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// A base action for adding/removing nodes.\n" },
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeGraphActions.h" },
		{ "ToolTip", "A base action for adding/removing nodes." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeGraphAction_AddRemoveLink>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveLink_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	Z_Construct_UScriptStruct_FOptimusAction,
	&NewStructOps,
	"OptimusNodeGraphAction_AddRemoveLink",
	nullptr,
	0,
	sizeof(FOptimusNodeGraphAction_AddRemoveLink),
	alignof(FOptimusNodeGraphAction_AddRemoveLink),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveLink_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveLink_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveLink()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddRemoveLink.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddRemoveLink.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveLink_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddRemoveLink.InnerSingleton;
}
// End ScriptStruct FOptimusNodeGraphAction_AddRemoveLink

// Begin ScriptStruct FOptimusNodeGraphAction_AddLink
static_assert(std::is_polymorphic<FOptimusNodeGraphAction_AddLink>() == std::is_polymorphic<FOptimusNodeGraphAction_AddRemoveLink>(), "USTRUCT FOptimusNodeGraphAction_AddLink cannot be polymorphic unless super FOptimusNodeGraphAction_AddRemoveLink is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddLink;
class UScriptStruct* FOptimusNodeGraphAction_AddLink::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddLink.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddLink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddLink, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeGraphAction_AddLink"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddLink.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeGraphAction_AddLink>()
{
	return FOptimusNodeGraphAction_AddLink::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddLink_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeGraphActions.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeGraphAction_AddLink>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddLink_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveLink,
	&NewStructOps,
	"OptimusNodeGraphAction_AddLink",
	nullptr,
	0,
	sizeof(FOptimusNodeGraphAction_AddLink),
	alignof(FOptimusNodeGraphAction_AddLink),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddLink_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddLink_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddLink()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddLink.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddLink.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddLink_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddLink.InnerSingleton;
}
// End ScriptStruct FOptimusNodeGraphAction_AddLink

// Begin ScriptStruct FOptimusNodeGraphAction_RemoveLink
static_assert(std::is_polymorphic<FOptimusNodeGraphAction_RemoveLink>() == std::is_polymorphic<FOptimusNodeGraphAction_AddRemoveLink>(), "USTRUCT FOptimusNodeGraphAction_RemoveLink cannot be polymorphic unless super FOptimusNodeGraphAction_AddRemoveLink is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveLink;
class UScriptStruct* FOptimusNodeGraphAction_RemoveLink::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveLink.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveLink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveLink, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeGraphAction_RemoveLink"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveLink.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeGraphAction_RemoveLink>()
{
	return FOptimusNodeGraphAction_RemoveLink::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveLink_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeGraphActions.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeGraphAction_RemoveLink>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveLink_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveLink,
	&NewStructOps,
	"OptimusNodeGraphAction_RemoveLink",
	nullptr,
	0,
	sizeof(FOptimusNodeGraphAction_RemoveLink),
	alignof(FOptimusNodeGraphAction_RemoveLink),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveLink_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveLink_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveLink()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveLink.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveLink.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveLink_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveLink.InnerSingleton;
}
// End ScriptStruct FOptimusNodeGraphAction_RemoveLink

// Begin ScriptStruct FOptimusNodeGraphAction_ConnectAdderPin
static_assert(std::is_polymorphic<FOptimusNodeGraphAction_ConnectAdderPin>() == std::is_polymorphic<FOptimusNodeGraphAction_AddRemoveLink>(), "USTRUCT FOptimusNodeGraphAction_ConnectAdderPin cannot be polymorphic unless super FOptimusNodeGraphAction_AddRemoveLink is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_ConnectAdderPin;
class UScriptStruct* FOptimusNodeGraphAction_ConnectAdderPin::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_ConnectAdderPin.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_ConnectAdderPin.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_ConnectAdderPin, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeGraphAction_ConnectAdderPin"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_ConnectAdderPin.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeGraphAction_ConnectAdderPin>()
{
	return FOptimusNodeGraphAction_ConnectAdderPin::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusNodeGraphAction_ConnectAdderPin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeGraphActions.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeGraphAction_ConnectAdderPin>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeGraphAction_ConnectAdderPin_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveLink,
	&NewStructOps,
	"OptimusNodeGraphAction_ConnectAdderPin",
	nullptr,
	0,
	sizeof(FOptimusNodeGraphAction_ConnectAdderPin),
	alignof(FOptimusNodeGraphAction_ConnectAdderPin),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_ConnectAdderPin_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusNodeGraphAction_ConnectAdderPin_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_ConnectAdderPin()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_ConnectAdderPin.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_ConnectAdderPin.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_ConnectAdderPin_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_ConnectAdderPin.InnerSingleton;
}
// End ScriptStruct FOptimusNodeGraphAction_ConnectAdderPin

// Begin ScriptStruct FOptimusNodeGraphAction_PackageKernelFunction
static_assert(std::is_polymorphic<FOptimusNodeGraphAction_PackageKernelFunction>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusNodeGraphAction_PackageKernelFunction cannot be polymorphic unless super FOptimusAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_PackageKernelFunction;
class UScriptStruct* FOptimusNodeGraphAction_PackageKernelFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_PackageKernelFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_PackageKernelFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_PackageKernelFunction, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeGraphAction_PackageKernelFunction"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_PackageKernelFunction.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeGraphAction_PackageKernelFunction>()
{
	return FOptimusNodeGraphAction_PackageKernelFunction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusNodeGraphAction_PackageKernelFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeGraphActions.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeGraphAction_PackageKernelFunction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeGraphAction_PackageKernelFunction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	Z_Construct_UScriptStruct_FOptimusAction,
	&NewStructOps,
	"OptimusNodeGraphAction_PackageKernelFunction",
	nullptr,
	0,
	sizeof(FOptimusNodeGraphAction_PackageKernelFunction),
	alignof(FOptimusNodeGraphAction_PackageKernelFunction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_PackageKernelFunction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusNodeGraphAction_PackageKernelFunction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_PackageKernelFunction()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_PackageKernelFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_PackageKernelFunction.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_PackageKernelFunction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_PackageKernelFunction.InnerSingleton;
}
// End ScriptStruct FOptimusNodeGraphAction_PackageKernelFunction

// Begin ScriptStruct FOptimusNodeGraphAction_UnpackageKernelFunction
static_assert(std::is_polymorphic<FOptimusNodeGraphAction_UnpackageKernelFunction>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusNodeGraphAction_UnpackageKernelFunction cannot be polymorphic unless super FOptimusAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_UnpackageKernelFunction;
class UScriptStruct* FOptimusNodeGraphAction_UnpackageKernelFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_UnpackageKernelFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_UnpackageKernelFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_UnpackageKernelFunction, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeGraphAction_UnpackageKernelFunction"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_UnpackageKernelFunction.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeGraphAction_UnpackageKernelFunction>()
{
	return FOptimusNodeGraphAction_UnpackageKernelFunction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusNodeGraphAction_UnpackageKernelFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeGraphActions.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeGraphAction_UnpackageKernelFunction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeGraphAction_UnpackageKernelFunction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	Z_Construct_UScriptStruct_FOptimusAction,
	&NewStructOps,
	"OptimusNodeGraphAction_UnpackageKernelFunction",
	nullptr,
	0,
	sizeof(FOptimusNodeGraphAction_UnpackageKernelFunction),
	alignof(FOptimusNodeGraphAction_UnpackageKernelFunction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_UnpackageKernelFunction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusNodeGraphAction_UnpackageKernelFunction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_UnpackageKernelFunction()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_UnpackageKernelFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_UnpackageKernelFunction.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_UnpackageKernelFunction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_UnpackageKernelFunction.InnerSingleton;
}
// End ScriptStruct FOptimusNodeGraphAction_UnpackageKernelFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Actions_OptimusNodeGraphActions_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOptimusNodeGraphAction_AddGraph::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddGraph_Statics::NewStructOps, TEXT("OptimusNodeGraphAction_AddGraph"), &Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddGraph, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeGraphAction_AddGraph), 1300082351U) },
		{ FOptimusNodeGraphAction_RemoveGraph::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveGraph_Statics::NewStructOps, TEXT("OptimusNodeGraphAction_RemoveGraph"), &Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveGraph, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeGraphAction_RemoveGraph), 1790265208U) },
		{ FOptimusNodeGraphAction_RenameGraph::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RenameGraph_Statics::NewStructOps, TEXT("OptimusNodeGraphAction_RenameGraph"), &Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RenameGraph, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeGraphAction_RenameGraph), 523459544U) },
		{ FOptimusNodeGraphAction_AddNode::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddNode_Statics::NewStructOps, TEXT("OptimusNodeGraphAction_AddNode"), &Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeGraphAction_AddNode), 2058079342U) },
		{ FOptimusNodeGraphAction_DuplicateNode::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_DuplicateNode_Statics::NewStructOps, TEXT("OptimusNodeGraphAction_DuplicateNode"), &Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_DuplicateNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeGraphAction_DuplicateNode), 2712105174U) },
		{ FOptimusNodeGraphAction_RemoveNode::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveNode_Statics::NewStructOps, TEXT("OptimusNodeGraphAction_RemoveNode"), &Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeGraphAction_RemoveNode), 121773909U) },
		{ FOptimusNodeGraphAction_AddRemoveNodePair::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveNodePair_Statics::NewStructOps, TEXT("OptimusNodeGraphAction_AddRemoveNodePair"), &Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddRemoveNodePair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeGraphAction_AddRemoveNodePair), 1998846574U) },
		{ FOptimusNodeGraphAction_AddNodePair::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddNodePair_Statics::NewStructOps, TEXT("OptimusNodeGraphAction_AddNodePair"), &Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddNodePair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeGraphAction_AddNodePair), 3988648932U) },
		{ FOptimusNodeGraphAction_RemoveNodePair::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveNodePair_Statics::NewStructOps, TEXT("OptimusNodeGraphAction_RemoveNodePair"), &Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveNodePair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeGraphAction_RemoveNodePair), 2278855959U) },
		{ FOptimusNodeGraphAction_AddRemoveLink::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveLink_Statics::NewStructOps, TEXT("OptimusNodeGraphAction_AddRemoveLink"), &Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddRemoveLink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeGraphAction_AddRemoveLink), 3873598243U) },
		{ FOptimusNodeGraphAction_AddLink::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddLink_Statics::NewStructOps, TEXT("OptimusNodeGraphAction_AddLink"), &Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddLink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeGraphAction_AddLink), 3906277931U) },
		{ FOptimusNodeGraphAction_RemoveLink::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveLink_Statics::NewStructOps, TEXT("OptimusNodeGraphAction_RemoveLink"), &Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveLink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeGraphAction_RemoveLink), 2230575374U) },
		{ FOptimusNodeGraphAction_ConnectAdderPin::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_ConnectAdderPin_Statics::NewStructOps, TEXT("OptimusNodeGraphAction_ConnectAdderPin"), &Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_ConnectAdderPin, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeGraphAction_ConnectAdderPin), 1907758816U) },
		{ FOptimusNodeGraphAction_PackageKernelFunction::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_PackageKernelFunction_Statics::NewStructOps, TEXT("OptimusNodeGraphAction_PackageKernelFunction"), &Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_PackageKernelFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeGraphAction_PackageKernelFunction), 3814329532U) },
		{ FOptimusNodeGraphAction_UnpackageKernelFunction::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_UnpackageKernelFunction_Statics::NewStructOps, TEXT("OptimusNodeGraphAction_UnpackageKernelFunction"), &Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_UnpackageKernelFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeGraphAction_UnpackageKernelFunction), 163140117U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Actions_OptimusNodeGraphActions_h_2285626663(TEXT("/Script/OptimusCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Actions_OptimusNodeGraphActions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Actions_OptimusNodeGraphActions_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
