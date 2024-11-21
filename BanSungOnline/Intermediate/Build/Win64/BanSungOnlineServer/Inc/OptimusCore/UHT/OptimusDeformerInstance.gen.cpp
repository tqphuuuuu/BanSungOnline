// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/OptimusDeformerInstance.h"
#include "ComputeFramework/Public/ComputeFramework/ComputeGraphInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusDeformerInstance() {}

// Begin Cross Module References
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeGraph_NoRegister();
COMPUTEFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FComputeGraphInstance();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector4();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshDeformerInstance();
ENGINE_API UClass* Z_Construct_UClass_UMeshDeformerInstanceSettings();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeformer_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeformerInstance();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeformerInstance_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeformerInstanceSettings();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeformerInstanceSettings_NoRegister();
OPTIMUSCORE_API UEnum* Z_Construct_UEnum_OptimusCore_EOptimusNodeGraphType();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin ScriptStruct FOptimusDeformerInstanceExecInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusDeformerInstanceExecInfo;
class UScriptStruct* FOptimusDeformerInstanceExecInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusDeformerInstanceExecInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusDeformerInstanceExecInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusDeformerInstanceExecInfo"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusDeformerInstanceExecInfo.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusDeformerInstanceExecInfo>()
{
	return FOptimusDeformerInstanceExecInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure with cached state for a single compute graph. */" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "Structure with cached state for a single compute graph." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphName_MetaData[] = {
		{ "Comment", "/** The name of the graph */" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "The name of the graph" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphType_MetaData[] = {
		{ "Comment", "/** The graph type. */" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "The graph type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComputeGraph_MetaData[] = {
		{ "Comment", "/** The ComputeGraph asset. */" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "The ComputeGraph asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComputeGraphInstance_MetaData[] = {
		{ "Comment", "/** The cached state for the ComputeGraph. */" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "The cached state for the ComputeGraph." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_GraphName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GraphType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GraphType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComputeGraph;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComputeGraphInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusDeformerInstanceExecInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::NewProp_GraphName = { "GraphName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusDeformerInstanceExecInfo, GraphName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphName_MetaData), NewProp_GraphName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::NewProp_GraphType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::NewProp_GraphType = { "GraphType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusDeformerInstanceExecInfo, GraphType), Z_Construct_UEnum_OptimusCore_EOptimusNodeGraphType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphType_MetaData), NewProp_GraphType_MetaData) }; // 3482780142
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::NewProp_ComputeGraph = { "ComputeGraph", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusDeformerInstanceExecInfo, ComputeGraph), Z_Construct_UClass_UComputeGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComputeGraph_MetaData), NewProp_ComputeGraph_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::NewProp_ComputeGraphInstance = { "ComputeGraphInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusDeformerInstanceExecInfo, ComputeGraphInstance), Z_Construct_UScriptStruct_FComputeGraphInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComputeGraphInstance_MetaData), NewProp_ComputeGraphInstance_MetaData) }; // 2864353280
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::NewProp_GraphName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::NewProp_GraphType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::NewProp_GraphType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::NewProp_ComputeGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::NewProp_ComputeGraphInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	&NewStructOps,
	"OptimusDeformerInstanceExecInfo",
	Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::PropPointers),
	sizeof(FOptimusDeformerInstanceExecInfo),
	alignof(FOptimusDeformerInstanceExecInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusDeformerInstanceExecInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusDeformerInstanceExecInfo.InnerSingleton, Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusDeformerInstanceExecInfo.InnerSingleton;
}
// End ScriptStruct FOptimusDeformerInstanceExecInfo

// Begin ScriptStruct FOptimusDeformerInstanceComponentBinding
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusDeformerInstanceComponentBinding;
class UScriptStruct* FOptimusDeformerInstanceComponentBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusDeformerInstanceComponentBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusDeformerInstanceComponentBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusDeformerInstanceComponentBinding"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusDeformerInstanceComponentBinding.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusDeformerInstanceComponentBinding>()
{
	return FOptimusDeformerInstanceComponentBinding::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Defines a binding between a component provider in the graph and an actor component in the component hierarchy on\n *  the actor whose deformable component we're bound to.\n */" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "Defines a binding between a component provider in the graph and an actor component in the component hierarchy on\nthe actor whose deformable component we're bound to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProviderName_MetaData[] = {
		{ "Category", "Deformer" },
		{ "Comment", "/** Binding name on deformer graph. */" },
		{ "DisplayName", "Binding" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "Binding name on deformer graph." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[] = {
		{ "Category", "Deformer" },
		{ "Comment", "/** Component name to bind. This should be sanitized before storage. */" },
		{ "DisplayName", "Component" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "Component name to bind. This should be sanitized before storage." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ProviderName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusDeformerInstanceComponentBinding>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics::NewProp_ProviderName = { "ProviderName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusDeformerInstanceComponentBinding, ProviderName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProviderName_MetaData), NewProp_ProviderName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusDeformerInstanceComponentBinding, ComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentName_MetaData), NewProp_ComponentName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics::NewProp_ProviderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics::NewProp_ComponentName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	&NewStructOps,
	"OptimusDeformerInstanceComponentBinding",
	Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics::PropPointers),
	sizeof(FOptimusDeformerInstanceComponentBinding),
	alignof(FOptimusDeformerInstanceComponentBinding),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusDeformerInstanceComponentBinding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusDeformerInstanceComponentBinding.InnerSingleton, Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusDeformerInstanceComponentBinding.InnerSingleton;
}
// End ScriptStruct FOptimusDeformerInstanceComponentBinding

// Begin Class UOptimusDeformerInstanceSettings
void UOptimusDeformerInstanceSettings::StaticRegisterNativesUOptimusDeformerInstanceSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusDeformerInstanceSettings);
UClass* Z_Construct_UClass_UOptimusDeformerInstanceSettings_NoRegister()
{
	return UOptimusDeformerInstanceSettings::StaticClass();
}
struct Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OptimusDeformerInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Deformer_MetaData[] = {
		{ "Comment", "/** Stored weak pointer to a deformer. This is only required by the details customization for resolving binding class types. */" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "Stored weak pointer to a deformer. This is only required by the details customization for resolving binding class types." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[] = {
		{ "Category", "Deformer|DeformerSettings" },
		{ "Comment", "/** Array of binding descriptions. This is fixed and used by GetComponentBindings() to resolve final bindings for a given context. */" },
		{ "DisplayName", "Component Bindings" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "Array of binding descriptions. This is fixed and used by GetComponentBindings() to resolve final bindings for a given context." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Deformer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bindings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bindings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusDeformerInstanceSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::NewProp_Deformer = { "Deformer", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusDeformerInstanceSettings, Deformer), Z_Construct_UClass_UOptimusDeformer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Deformer_MetaData), NewProp_Deformer_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::NewProp_Bindings_Inner = { "Bindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding, METADATA_PARAMS(0, nullptr) }; // 541533560
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0040000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusDeformerInstanceSettings, Bindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bindings_MetaData), NewProp_Bindings_MetaData) }; // 541533560
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::NewProp_Deformer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::NewProp_Bindings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::NewProp_Bindings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshDeformerInstanceSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::ClassParams = {
	&UOptimusDeformerInstanceSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusDeformerInstanceSettings()
{
	if (!Z_Registration_Info_UClass_UOptimusDeformerInstanceSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusDeformerInstanceSettings.OuterSingleton, Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusDeformerInstanceSettings.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusDeformerInstanceSettings>()
{
	return UOptimusDeformerInstanceSettings::StaticClass();
}
UOptimusDeformerInstanceSettings::UOptimusDeformerInstanceSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusDeformerInstanceSettings);
UOptimusDeformerInstanceSettings::~UOptimusDeformerInstanceSettings() {}
// End Class UOptimusDeformerInstanceSettings

// Begin Class UOptimusDeformerInstance Function EnqueueTriggerGraph
struct Z_Construct_UFunction_UOptimusDeformerInstance_EnqueueTriggerGraph_Statics
{
	struct OptimusDeformerInstance_eventEnqueueTriggerGraph_Parms
	{
		FName InTriggerGraphName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deformer" },
		{ "Comment", "/** Trigger a named trigger graph to run on the next tick */" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "Trigger a named trigger graph to run on the next tick" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InTriggerGraphName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_EnqueueTriggerGraph_Statics::NewProp_InTriggerGraphName = { "InTriggerGraphName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventEnqueueTriggerGraph_Parms, InTriggerGraphName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOptimusDeformerInstance_EnqueueTriggerGraph_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OptimusDeformerInstance_eventEnqueueTriggerGraph_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_EnqueueTriggerGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusDeformerInstance_eventEnqueueTriggerGraph_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_EnqueueTriggerGraph_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformerInstance_EnqueueTriggerGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_EnqueueTriggerGraph_Statics::NewProp_InTriggerGraphName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_EnqueueTriggerGraph_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_EnqueueTriggerGraph_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformerInstance_EnqueueTriggerGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformerInstance, nullptr, "EnqueueTriggerGraph", nullptr, nullptr, Z_Construct_UFunction_UOptimusDeformerInstance_EnqueueTriggerGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_EnqueueTriggerGraph_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_EnqueueTriggerGraph_Statics::OptimusDeformerInstance_eventEnqueueTriggerGraph_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_EnqueueTriggerGraph_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusDeformerInstance_EnqueueTriggerGraph_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_EnqueueTriggerGraph_Statics::OptimusDeformerInstance_eventEnqueueTriggerGraph_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusDeformerInstance_EnqueueTriggerGraph()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformerInstance_EnqueueTriggerGraph_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusDeformerInstance::execEnqueueTriggerGraph)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InTriggerGraphName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->EnqueueTriggerGraph(Z_Param_InTriggerGraphName);
	P_NATIVE_END;
}
// End Class UOptimusDeformerInstance Function EnqueueTriggerGraph

// Begin Class UOptimusDeformerInstance Function SetBoolArrayVariable
struct Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolArrayVariable_Statics
{
	struct OptimusDeformerInstance_eventSetBoolArrayVariable_Parms
	{
		FName InVariableName;
		TArray<bool> InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deformer" },
		{ "DisplayName", "Set Variable (Boolean Array)" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolArrayVariable_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetBoolArrayVariable_Parms, InVariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolArrayVariable_Statics::NewProp_InValue_Inner = { "InValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolArrayVariable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetBoolArrayVariable_Parms, InValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolArrayVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OptimusDeformerInstance_eventSetBoolArrayVariable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolArrayVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusDeformerInstance_eventSetBoolArrayVariable_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolArrayVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolArrayVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolArrayVariable_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolArrayVariable_Statics::NewProp_InValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolArrayVariable_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolArrayVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolArrayVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolArrayVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformerInstance, nullptr, "SetBoolArrayVariable", nullptr, nullptr, Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolArrayVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolArrayVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolArrayVariable_Statics::OptimusDeformerInstance_eventSetBoolArrayVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolArrayVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolArrayVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolArrayVariable_Statics::OptimusDeformerInstance_eventSetBoolArrayVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolArrayVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolArrayVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusDeformerInstance::execSetBoolArrayVariable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
	P_GET_TARRAY_REF(bool,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetBoolArrayVariable(Z_Param_InVariableName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// End Class UOptimusDeformerInstance Function SetBoolArrayVariable

// Begin Class UOptimusDeformerInstance Function SetBoolVariable
struct Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics
{
	struct OptimusDeformerInstance_eventSetBoolVariable_Parms
	{
		FName InVariableName;
		bool InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deformer" },
		{ "Comment", "/** Set the value of a boolean variable. */" },
		{ "DisplayName", "Set Variable (Boolean)" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "Set the value of a boolean variable." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
	static void NewProp_InValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetBoolVariable_Parms, InVariableName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::NewProp_InValue_SetBit(void* Obj)
{
	((OptimusDeformerInstance_eventSetBoolVariable_Parms*)Obj)->InValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusDeformerInstance_eventSetBoolVariable_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OptimusDeformerInstance_eventSetBoolVariable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusDeformerInstance_eventSetBoolVariable_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformerInstance, nullptr, "SetBoolVariable", nullptr, nullptr, Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::OptimusDeformerInstance_eventSetBoolVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::OptimusDeformerInstance_eventSetBoolVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusDeformerInstance::execSetBoolVariable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
	P_GET_UBOOL(Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetBoolVariable(Z_Param_InVariableName,Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UOptimusDeformerInstance Function SetBoolVariable

// Begin Class UOptimusDeformerInstance Function SetFloatArrayVariable
struct Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatArrayVariable_Statics
{
	struct OptimusDeformerInstance_eventSetFloatArrayVariable_Parms
	{
		FName InVariableName;
		TArray<double> InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deformer" },
		{ "DisplayName", "Set Variable (Float Array)" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_InValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatArrayVariable_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetFloatArrayVariable_Parms, InVariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatArrayVariable_Statics::NewProp_InValue_Inner = { "InValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatArrayVariable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetFloatArrayVariable_Parms, InValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatArrayVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OptimusDeformerInstance_eventSetFloatArrayVariable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatArrayVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusDeformerInstance_eventSetFloatArrayVariable_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatArrayVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatArrayVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatArrayVariable_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatArrayVariable_Statics::NewProp_InValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatArrayVariable_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatArrayVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatArrayVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatArrayVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformerInstance, nullptr, "SetFloatArrayVariable", nullptr, nullptr, Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatArrayVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatArrayVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatArrayVariable_Statics::OptimusDeformerInstance_eventSetFloatArrayVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatArrayVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatArrayVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatArrayVariable_Statics::OptimusDeformerInstance_eventSetFloatArrayVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatArrayVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatArrayVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusDeformerInstance::execSetFloatArrayVariable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
	P_GET_TARRAY_REF(double,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetFloatArrayVariable(Z_Param_InVariableName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// End Class UOptimusDeformerInstance Function SetFloatArrayVariable

// Begin Class UOptimusDeformerInstance Function SetFloatVariable
struct Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable_Statics
{
	struct OptimusDeformerInstance_eventSetFloatVariable_Parms
	{
		FName InVariableName;
		double InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deformer" },
		{ "DisplayName", "Set Variable (Float)" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetFloatVariable_Parms, InVariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetFloatVariable_Parms, InValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OptimusDeformerInstance_eventSetFloatVariable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusDeformerInstance_eventSetFloatVariable_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformerInstance, nullptr, "SetFloatVariable", nullptr, nullptr, Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable_Statics::OptimusDeformerInstance_eventSetFloatVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable_Statics::OptimusDeformerInstance_eventSetFloatVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusDeformerInstance::execSetFloatVariable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetFloatVariable(Z_Param_InVariableName,Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UOptimusDeformerInstance Function SetFloatVariable

// Begin Class UOptimusDeformerInstance Function SetInt2ArrayVariable
struct Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2ArrayVariable_Statics
{
	struct OptimusDeformerInstance_eventSetInt2ArrayVariable_Parms
	{
		FName InVariableName;
		TArray<FIntPoint> InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deformer" },
		{ "DisplayName", "Set Variable (Integer2 Array)" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2ArrayVariable_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetInt2ArrayVariable_Parms, InVariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2ArrayVariable_Statics::NewProp_InValue_Inner = { "InValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2ArrayVariable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetInt2ArrayVariable_Parms, InValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2ArrayVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OptimusDeformerInstance_eventSetInt2ArrayVariable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2ArrayVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusDeformerInstance_eventSetInt2ArrayVariable_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2ArrayVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2ArrayVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2ArrayVariable_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2ArrayVariable_Statics::NewProp_InValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2ArrayVariable_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2ArrayVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2ArrayVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2ArrayVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformerInstance, nullptr, "SetInt2ArrayVariable", nullptr, nullptr, Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2ArrayVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2ArrayVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2ArrayVariable_Statics::OptimusDeformerInstance_eventSetInt2ArrayVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2ArrayVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2ArrayVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2ArrayVariable_Statics::OptimusDeformerInstance_eventSetInt2ArrayVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2ArrayVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2ArrayVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusDeformerInstance::execSetInt2ArrayVariable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
	P_GET_TARRAY_REF(FIntPoint,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetInt2ArrayVariable(Z_Param_InVariableName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// End Class UOptimusDeformerInstance Function SetInt2ArrayVariable

// Begin Class UOptimusDeformerInstance Function SetInt2Variable
struct Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2Variable_Statics
{
	struct OptimusDeformerInstance_eventSetInt2Variable_Parms
	{
		FName InVariableName;
		FIntPoint InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deformer" },
		{ "DisplayName", "Set Variable (Integer2)" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2Variable_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetInt2Variable_Parms, InVariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2Variable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetInt2Variable_Parms, InValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2Variable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OptimusDeformerInstance_eventSetInt2Variable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2Variable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusDeformerInstance_eventSetInt2Variable_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2Variable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2Variable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2Variable_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2Variable_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2Variable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2Variable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2Variable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformerInstance, nullptr, "SetInt2Variable", nullptr, nullptr, Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2Variable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2Variable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2Variable_Statics::OptimusDeformerInstance_eventSetInt2Variable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2Variable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2Variable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2Variable_Statics::OptimusDeformerInstance_eventSetInt2Variable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2Variable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2Variable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusDeformerInstance::execSetInt2Variable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetInt2Variable(Z_Param_InVariableName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// End Class UOptimusDeformerInstance Function SetInt2Variable

// Begin Class UOptimusDeformerInstance Function SetInt3ArrayVariable
struct Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3ArrayVariable_Statics
{
	struct OptimusDeformerInstance_eventSetInt3ArrayVariable_Parms
	{
		FName InVariableName;
		TArray<FIntVector> InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deformer" },
		{ "DisplayName", "Set Variable (Integer3 Array)" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3ArrayVariable_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetInt3ArrayVariable_Parms, InVariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3ArrayVariable_Statics::NewProp_InValue_Inner = { "InValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3ArrayVariable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetInt3ArrayVariable_Parms, InValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3ArrayVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OptimusDeformerInstance_eventSetInt3ArrayVariable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3ArrayVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusDeformerInstance_eventSetInt3ArrayVariable_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3ArrayVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3ArrayVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3ArrayVariable_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3ArrayVariable_Statics::NewProp_InValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3ArrayVariable_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3ArrayVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3ArrayVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3ArrayVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformerInstance, nullptr, "SetInt3ArrayVariable", nullptr, nullptr, Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3ArrayVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3ArrayVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3ArrayVariable_Statics::OptimusDeformerInstance_eventSetInt3ArrayVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3ArrayVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3ArrayVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3ArrayVariable_Statics::OptimusDeformerInstance_eventSetInt3ArrayVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3ArrayVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3ArrayVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusDeformerInstance::execSetInt3ArrayVariable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
	P_GET_TARRAY_REF(FIntVector,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetInt3ArrayVariable(Z_Param_InVariableName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// End Class UOptimusDeformerInstance Function SetInt3ArrayVariable

// Begin Class UOptimusDeformerInstance Function SetInt3Variable
struct Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3Variable_Statics
{
	struct OptimusDeformerInstance_eventSetInt3Variable_Parms
	{
		FName InVariableName;
		FIntVector InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deformer" },
		{ "DisplayName", "Set Variable (Integer3)" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3Variable_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetInt3Variable_Parms, InVariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3Variable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetInt3Variable_Parms, InValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3Variable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OptimusDeformerInstance_eventSetInt3Variable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3Variable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusDeformerInstance_eventSetInt3Variable_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3Variable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3Variable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3Variable_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3Variable_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3Variable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3Variable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3Variable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformerInstance, nullptr, "SetInt3Variable", nullptr, nullptr, Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3Variable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3Variable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3Variable_Statics::OptimusDeformerInstance_eventSetInt3Variable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3Variable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3Variable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3Variable_Statics::OptimusDeformerInstance_eventSetInt3Variable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3Variable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3Variable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusDeformerInstance::execSetInt3Variable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
	P_GET_STRUCT_REF(FIntVector,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetInt3Variable(Z_Param_InVariableName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// End Class UOptimusDeformerInstance Function SetInt3Variable

// Begin Class UOptimusDeformerInstance Function SetInt4ArrayVariable
struct Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4ArrayVariable_Statics
{
	struct OptimusDeformerInstance_eventSetInt4ArrayVariable_Parms
	{
		FName InVariableName;
		TArray<FIntVector4> InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deformer" },
		{ "DisplayName", "Set Variable (Integer4 Array)" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4ArrayVariable_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetInt4ArrayVariable_Parms, InVariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4ArrayVariable_Statics::NewProp_InValue_Inner = { "InValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4ArrayVariable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetInt4ArrayVariable_Parms, InValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4ArrayVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OptimusDeformerInstance_eventSetInt4ArrayVariable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4ArrayVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusDeformerInstance_eventSetInt4ArrayVariable_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4ArrayVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4ArrayVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4ArrayVariable_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4ArrayVariable_Statics::NewProp_InValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4ArrayVariable_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4ArrayVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4ArrayVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4ArrayVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformerInstance, nullptr, "SetInt4ArrayVariable", nullptr, nullptr, Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4ArrayVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4ArrayVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4ArrayVariable_Statics::OptimusDeformerInstance_eventSetInt4ArrayVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4ArrayVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4ArrayVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4ArrayVariable_Statics::OptimusDeformerInstance_eventSetInt4ArrayVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4ArrayVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4ArrayVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusDeformerInstance::execSetInt4ArrayVariable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
	P_GET_TARRAY_REF(FIntVector4,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetInt4ArrayVariable(Z_Param_InVariableName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// End Class UOptimusDeformerInstance Function SetInt4ArrayVariable

// Begin Class UOptimusDeformerInstance Function SetInt4Variable
struct Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4Variable_Statics
{
	struct OptimusDeformerInstance_eventSetInt4Variable_Parms
	{
		FName InVariableName;
		FIntVector4 InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deformer" },
		{ "DisplayName", "Set Variable (Integer4)" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4Variable_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetInt4Variable_Parms, InVariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4Variable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetInt4Variable_Parms, InValue), Z_Construct_UScriptStruct_FIntVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4Variable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OptimusDeformerInstance_eventSetInt4Variable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4Variable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusDeformerInstance_eventSetInt4Variable_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4Variable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4Variable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4Variable_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4Variable_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4Variable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4Variable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4Variable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformerInstance, nullptr, "SetInt4Variable", nullptr, nullptr, Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4Variable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4Variable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4Variable_Statics::OptimusDeformerInstance_eventSetInt4Variable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4Variable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4Variable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4Variable_Statics::OptimusDeformerInstance_eventSetInt4Variable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4Variable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4Variable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusDeformerInstance::execSetInt4Variable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
	P_GET_STRUCT_REF(FIntVector4,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetInt4Variable(Z_Param_InVariableName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// End Class UOptimusDeformerInstance Function SetInt4Variable

// Begin Class UOptimusDeformerInstance Function SetIntArrayVariable
struct Z_Construct_UFunction_UOptimusDeformerInstance_SetIntArrayVariable_Statics
{
	struct OptimusDeformerInstance_eventSetIntArrayVariable_Parms
	{
		FName InVariableName;
		TArray<int32> InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deformer" },
		{ "DisplayName", "Set Variable (Integer Array)" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetIntArrayVariable_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetIntArrayVariable_Parms, InVariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetIntArrayVariable_Statics::NewProp_InValue_Inner = { "InValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetIntArrayVariable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetIntArrayVariable_Parms, InValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UOptimusDeformerInstance_SetIntArrayVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OptimusDeformerInstance_eventSetIntArrayVariable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetIntArrayVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusDeformerInstance_eventSetIntArrayVariable_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_SetIntArrayVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformerInstance_SetIntArrayVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetIntArrayVariable_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetIntArrayVariable_Statics::NewProp_InValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetIntArrayVariable_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetIntArrayVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetIntArrayVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformerInstance_SetIntArrayVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformerInstance, nullptr, "SetIntArrayVariable", nullptr, nullptr, Z_Construct_UFunction_UOptimusDeformerInstance_SetIntArrayVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetIntArrayVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetIntArrayVariable_Statics::OptimusDeformerInstance_eventSetIntArrayVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetIntArrayVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusDeformerInstance_SetIntArrayVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetIntArrayVariable_Statics::OptimusDeformerInstance_eventSetIntArrayVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusDeformerInstance_SetIntArrayVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformerInstance_SetIntArrayVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusDeformerInstance::execSetIntArrayVariable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
	P_GET_TARRAY_REF(int32,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetIntArrayVariable(Z_Param_InVariableName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// End Class UOptimusDeformerInstance Function SetIntArrayVariable

// Begin Class UOptimusDeformerInstance Function SetIntVariable
struct Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable_Statics
{
	struct OptimusDeformerInstance_eventSetIntVariable_Parms
	{
		FName InVariableName;
		int32 InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deformer" },
		{ "Comment", "/** Set the value of an integer variable. */" },
		{ "DisplayName", "Set Variable (Integer)" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "Set the value of an integer variable." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetIntVariable_Parms, InVariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetIntVariable_Parms, InValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OptimusDeformerInstance_eventSetIntVariable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusDeformerInstance_eventSetIntVariable_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformerInstance, nullptr, "SetIntVariable", nullptr, nullptr, Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable_Statics::OptimusDeformerInstance_eventSetIntVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable_Statics::OptimusDeformerInstance_eventSetIntVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusDeformerInstance::execSetIntVariable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetIntVariable(Z_Param_InVariableName,Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UOptimusDeformerInstance Function SetIntVariable

// Begin Class UOptimusDeformerInstance Function SetLinearColorArrayVariable
struct Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorArrayVariable_Statics
{
	struct OptimusDeformerInstance_eventSetLinearColorArrayVariable_Parms
	{
		FName InVariableName;
		TArray<FLinearColor> InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deformer" },
		{ "DisplayName", "Set Variable (LinearColor Array)" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorArrayVariable_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetLinearColorArrayVariable_Parms, InVariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorArrayVariable_Statics::NewProp_InValue_Inner = { "InValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorArrayVariable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetLinearColorArrayVariable_Parms, InValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorArrayVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OptimusDeformerInstance_eventSetLinearColorArrayVariable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorArrayVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusDeformerInstance_eventSetLinearColorArrayVariable_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorArrayVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorArrayVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorArrayVariable_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorArrayVariable_Statics::NewProp_InValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorArrayVariable_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorArrayVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorArrayVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorArrayVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformerInstance, nullptr, "SetLinearColorArrayVariable", nullptr, nullptr, Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorArrayVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorArrayVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorArrayVariable_Statics::OptimusDeformerInstance_eventSetLinearColorArrayVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorArrayVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorArrayVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorArrayVariable_Statics::OptimusDeformerInstance_eventSetLinearColorArrayVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorArrayVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorArrayVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusDeformerInstance::execSetLinearColorArrayVariable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
	P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetLinearColorArrayVariable(Z_Param_InVariableName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// End Class UOptimusDeformerInstance Function SetLinearColorArrayVariable

// Begin Class UOptimusDeformerInstance Function SetLinearColorVariable
struct Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorVariable_Statics
{
	struct OptimusDeformerInstance_eventSetLinearColorVariable_Parms
	{
		FName InVariableName;
		FLinearColor InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deformer" },
		{ "DisplayName", "Set Variable (LinearColor)" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorVariable_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetLinearColorVariable_Parms, InVariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorVariable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetLinearColorVariable_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OptimusDeformerInstance_eventSetLinearColorVariable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusDeformerInstance_eventSetLinearColorVariable_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorVariable_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorVariable_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformerInstance, nullptr, "SetLinearColorVariable", nullptr, nullptr, Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorVariable_Statics::OptimusDeformerInstance_eventSetLinearColorVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorVariable_Statics::OptimusDeformerInstance_eventSetLinearColorVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusDeformerInstance::execSetLinearColorVariable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetLinearColorVariable(Z_Param_InVariableName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// End Class UOptimusDeformerInstance Function SetLinearColorVariable

// Begin Class UOptimusDeformerInstance Function SetNameArrayVariable
struct Z_Construct_UFunction_UOptimusDeformerInstance_SetNameArrayVariable_Statics
{
	struct OptimusDeformerInstance_eventSetNameArrayVariable_Parms
	{
		FName InVariableName;
		TArray<FName> InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deformer" },
		{ "DisplayName", "Set Variable (Name Array)" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetNameArrayVariable_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetNameArrayVariable_Parms, InVariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetNameArrayVariable_Statics::NewProp_InValue_Inner = { "InValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetNameArrayVariable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetNameArrayVariable_Parms, InValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UOptimusDeformerInstance_SetNameArrayVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OptimusDeformerInstance_eventSetNameArrayVariable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetNameArrayVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusDeformerInstance_eventSetNameArrayVariable_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_SetNameArrayVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformerInstance_SetNameArrayVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetNameArrayVariable_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetNameArrayVariable_Statics::NewProp_InValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetNameArrayVariable_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetNameArrayVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetNameArrayVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformerInstance_SetNameArrayVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformerInstance, nullptr, "SetNameArrayVariable", nullptr, nullptr, Z_Construct_UFunction_UOptimusDeformerInstance_SetNameArrayVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetNameArrayVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetNameArrayVariable_Statics::OptimusDeformerInstance_eventSetNameArrayVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetNameArrayVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusDeformerInstance_SetNameArrayVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetNameArrayVariable_Statics::OptimusDeformerInstance_eventSetNameArrayVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusDeformerInstance_SetNameArrayVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformerInstance_SetNameArrayVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusDeformerInstance::execSetNameArrayVariable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
	P_GET_TARRAY_REF(FName,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetNameArrayVariable(Z_Param_InVariableName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// End Class UOptimusDeformerInstance Function SetNameArrayVariable

// Begin Class UOptimusDeformerInstance Function SetNameVariable
struct Z_Construct_UFunction_UOptimusDeformerInstance_SetNameVariable_Statics
{
	struct OptimusDeformerInstance_eventSetNameVariable_Parms
	{
		FName InVariableName;
		FName InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deformer" },
		{ "DisplayName", "Set Variable (Name)" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetNameVariable_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetNameVariable_Parms, InVariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetNameVariable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetNameVariable_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UOptimusDeformerInstance_SetNameVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OptimusDeformerInstance_eventSetNameVariable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetNameVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusDeformerInstance_eventSetNameVariable_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_SetNameVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformerInstance_SetNameVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetNameVariable_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetNameVariable_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetNameVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetNameVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformerInstance_SetNameVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformerInstance, nullptr, "SetNameVariable", nullptr, nullptr, Z_Construct_UFunction_UOptimusDeformerInstance_SetNameVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetNameVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetNameVariable_Statics::OptimusDeformerInstance_eventSetNameVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetNameVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusDeformerInstance_SetNameVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetNameVariable_Statics::OptimusDeformerInstance_eventSetNameVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusDeformerInstance_SetNameVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformerInstance_SetNameVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusDeformerInstance::execSetNameVariable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetNameVariable(Z_Param_InVariableName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// End Class UOptimusDeformerInstance Function SetNameVariable

// Begin Class UOptimusDeformerInstance Function SetQuatArrayVariable
struct Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatArrayVariable_Statics
{
	struct OptimusDeformerInstance_eventSetQuatArrayVariable_Parms
	{
		FName InVariableName;
		TArray<FQuat> InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deformer" },
		{ "DisplayName", "Set Variable (Quat Array)" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatArrayVariable_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetQuatArrayVariable_Parms, InVariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatArrayVariable_Statics::NewProp_InValue_Inner = { "InValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatArrayVariable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetQuatArrayVariable_Parms, InValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatArrayVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OptimusDeformerInstance_eventSetQuatArrayVariable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatArrayVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusDeformerInstance_eventSetQuatArrayVariable_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatArrayVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatArrayVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatArrayVariable_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatArrayVariable_Statics::NewProp_InValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatArrayVariable_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatArrayVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatArrayVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatArrayVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformerInstance, nullptr, "SetQuatArrayVariable", nullptr, nullptr, Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatArrayVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatArrayVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatArrayVariable_Statics::OptimusDeformerInstance_eventSetQuatArrayVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatArrayVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatArrayVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatArrayVariable_Statics::OptimusDeformerInstance_eventSetQuatArrayVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatArrayVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatArrayVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusDeformerInstance::execSetQuatArrayVariable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
	P_GET_TARRAY_REF(FQuat,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetQuatArrayVariable(Z_Param_InVariableName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// End Class UOptimusDeformerInstance Function SetQuatArrayVariable

// Begin Class UOptimusDeformerInstance Function SetQuatVariable
struct Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatVariable_Statics
{
	struct OptimusDeformerInstance_eventSetQuatVariable_Parms
	{
		FName InVariableName;
		FQuat InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deformer" },
		{ "DisplayName", "Set Variable (Quat)" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatVariable_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetQuatVariable_Parms, InVariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatVariable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetQuatVariable_Parms, InValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OptimusDeformerInstance_eventSetQuatVariable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusDeformerInstance_eventSetQuatVariable_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatVariable_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatVariable_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformerInstance, nullptr, "SetQuatVariable", nullptr, nullptr, Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatVariable_Statics::OptimusDeformerInstance_eventSetQuatVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatVariable_Statics::OptimusDeformerInstance_eventSetQuatVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusDeformerInstance::execSetQuatVariable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetQuatVariable(Z_Param_InVariableName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// End Class UOptimusDeformerInstance Function SetQuatVariable

// Begin Class UOptimusDeformerInstance Function SetRotatorArrayVariable
struct Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorArrayVariable_Statics
{
	struct OptimusDeformerInstance_eventSetRotatorArrayVariable_Parms
	{
		FName InVariableName;
		TArray<FRotator> InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deformer" },
		{ "DisplayName", "Set Variable (Rotator Array)" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorArrayVariable_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetRotatorArrayVariable_Parms, InVariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorArrayVariable_Statics::NewProp_InValue_Inner = { "InValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorArrayVariable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetRotatorArrayVariable_Parms, InValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorArrayVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OptimusDeformerInstance_eventSetRotatorArrayVariable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorArrayVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusDeformerInstance_eventSetRotatorArrayVariable_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorArrayVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorArrayVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorArrayVariable_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorArrayVariable_Statics::NewProp_InValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorArrayVariable_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorArrayVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorArrayVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorArrayVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformerInstance, nullptr, "SetRotatorArrayVariable", nullptr, nullptr, Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorArrayVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorArrayVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorArrayVariable_Statics::OptimusDeformerInstance_eventSetRotatorArrayVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorArrayVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorArrayVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorArrayVariable_Statics::OptimusDeformerInstance_eventSetRotatorArrayVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorArrayVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorArrayVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusDeformerInstance::execSetRotatorArrayVariable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
	P_GET_TARRAY_REF(FRotator,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetRotatorArrayVariable(Z_Param_InVariableName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// End Class UOptimusDeformerInstance Function SetRotatorArrayVariable

// Begin Class UOptimusDeformerInstance Function SetRotatorVariable
struct Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorVariable_Statics
{
	struct OptimusDeformerInstance_eventSetRotatorVariable_Parms
	{
		FName InVariableName;
		FRotator InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deformer" },
		{ "DisplayName", "Set Variable (Rotator)" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorVariable_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetRotatorVariable_Parms, InVariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorVariable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetRotatorVariable_Parms, InValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OptimusDeformerInstance_eventSetRotatorVariable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusDeformerInstance_eventSetRotatorVariable_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorVariable_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorVariable_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformerInstance, nullptr, "SetRotatorVariable", nullptr, nullptr, Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorVariable_Statics::OptimusDeformerInstance_eventSetRotatorVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorVariable_Statics::OptimusDeformerInstance_eventSetRotatorVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusDeformerInstance::execSetRotatorVariable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetRotatorVariable(Z_Param_InVariableName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// End Class UOptimusDeformerInstance Function SetRotatorVariable

// Begin Class UOptimusDeformerInstance Function SetTransformArrayVariable
struct Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformArrayVariable_Statics
{
	struct OptimusDeformerInstance_eventSetTransformArrayVariable_Parms
	{
		FName InVariableName;
		TArray<FTransform> InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deformer" },
		{ "DisplayName", "Set Variable (Transform Array)" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformArrayVariable_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetTransformArrayVariable_Parms, InVariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformArrayVariable_Statics::NewProp_InValue_Inner = { "InValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformArrayVariable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetTransformArrayVariable_Parms, InValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformArrayVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OptimusDeformerInstance_eventSetTransformArrayVariable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformArrayVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusDeformerInstance_eventSetTransformArrayVariable_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformArrayVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformArrayVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformArrayVariable_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformArrayVariable_Statics::NewProp_InValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformArrayVariable_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformArrayVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformArrayVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformArrayVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformerInstance, nullptr, "SetTransformArrayVariable", nullptr, nullptr, Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformArrayVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformArrayVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformArrayVariable_Statics::OptimusDeformerInstance_eventSetTransformArrayVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformArrayVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformArrayVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformArrayVariable_Statics::OptimusDeformerInstance_eventSetTransformArrayVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformArrayVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformArrayVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusDeformerInstance::execSetTransformArrayVariable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
	P_GET_TARRAY_REF(FTransform,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetTransformArrayVariable(Z_Param_InVariableName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// End Class UOptimusDeformerInstance Function SetTransformArrayVariable

// Begin Class UOptimusDeformerInstance Function SetTransformVariable
struct Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics
{
	struct OptimusDeformerInstance_eventSetTransformVariable_Parms
	{
		FName InVariableName;
		FTransform InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deformer" },
		{ "Comment", "/** Set the value of a transform variable. */" },
		{ "DisplayName", "Set Variable (Transform)" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "Set the value of a transform variable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetTransformVariable_Parms, InVariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetTransformVariable_Parms, InValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OptimusDeformerInstance_eventSetTransformVariable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusDeformerInstance_eventSetTransformVariable_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformerInstance, nullptr, "SetTransformVariable", nullptr, nullptr, Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::OptimusDeformerInstance_eventSetTransformVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::OptimusDeformerInstance_eventSetTransformVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusDeformerInstance::execSetTransformVariable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetTransformVariable(Z_Param_InVariableName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// End Class UOptimusDeformerInstance Function SetTransformVariable

// Begin Class UOptimusDeformerInstance Function SetVector2ArrayVariable
struct Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2ArrayVariable_Statics
{
	struct OptimusDeformerInstance_eventSetVector2ArrayVariable_Parms
	{
		FName InVariableName;
		TArray<FVector2D> InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deformer" },
		{ "DisplayName", "Set Variable (Vector2 Array)" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2ArrayVariable_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetVector2ArrayVariable_Parms, InVariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2ArrayVariable_Statics::NewProp_InValue_Inner = { "InValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2ArrayVariable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetVector2ArrayVariable_Parms, InValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2ArrayVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OptimusDeformerInstance_eventSetVector2ArrayVariable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2ArrayVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusDeformerInstance_eventSetVector2ArrayVariable_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2ArrayVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2ArrayVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2ArrayVariable_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2ArrayVariable_Statics::NewProp_InValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2ArrayVariable_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2ArrayVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2ArrayVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2ArrayVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformerInstance, nullptr, "SetVector2ArrayVariable", nullptr, nullptr, Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2ArrayVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2ArrayVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2ArrayVariable_Statics::OptimusDeformerInstance_eventSetVector2ArrayVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2ArrayVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2ArrayVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2ArrayVariable_Statics::OptimusDeformerInstance_eventSetVector2ArrayVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2ArrayVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2ArrayVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusDeformerInstance::execSetVector2ArrayVariable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetVector2ArrayVariable(Z_Param_InVariableName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// End Class UOptimusDeformerInstance Function SetVector2ArrayVariable

// Begin Class UOptimusDeformerInstance Function SetVector2Variable
struct Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2Variable_Statics
{
	struct OptimusDeformerInstance_eventSetVector2Variable_Parms
	{
		FName InVariableName;
		FVector2D InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deformer" },
		{ "DisplayName", "Set Variable (Vector2)" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2Variable_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetVector2Variable_Parms, InVariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2Variable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetVector2Variable_Parms, InValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2Variable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OptimusDeformerInstance_eventSetVector2Variable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2Variable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusDeformerInstance_eventSetVector2Variable_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2Variable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2Variable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2Variable_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2Variable_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2Variable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2Variable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2Variable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformerInstance, nullptr, "SetVector2Variable", nullptr, nullptr, Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2Variable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2Variable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2Variable_Statics::OptimusDeformerInstance_eventSetVector2Variable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2Variable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2Variable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2Variable_Statics::OptimusDeformerInstance_eventSetVector2Variable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2Variable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2Variable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusDeformerInstance::execSetVector2Variable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetVector2Variable(Z_Param_InVariableName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// End Class UOptimusDeformerInstance Function SetVector2Variable

// Begin Class UOptimusDeformerInstance Function SetVector4ArrayVariable
struct Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4ArrayVariable_Statics
{
	struct OptimusDeformerInstance_eventSetVector4ArrayVariable_Parms
	{
		FName InVariableName;
		TArray<FVector4> InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deformer" },
		{ "DisplayName", "Set Variable (Vector4 Array)" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4ArrayVariable_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetVector4ArrayVariable_Parms, InVariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4ArrayVariable_Statics::NewProp_InValue_Inner = { "InValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4ArrayVariable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetVector4ArrayVariable_Parms, InValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4ArrayVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OptimusDeformerInstance_eventSetVector4ArrayVariable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4ArrayVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusDeformerInstance_eventSetVector4ArrayVariable_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4ArrayVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4ArrayVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4ArrayVariable_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4ArrayVariable_Statics::NewProp_InValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4ArrayVariable_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4ArrayVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4ArrayVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4ArrayVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformerInstance, nullptr, "SetVector4ArrayVariable", nullptr, nullptr, Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4ArrayVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4ArrayVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4ArrayVariable_Statics::OptimusDeformerInstance_eventSetVector4ArrayVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4ArrayVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4ArrayVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4ArrayVariable_Statics::OptimusDeformerInstance_eventSetVector4ArrayVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4ArrayVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4ArrayVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusDeformerInstance::execSetVector4ArrayVariable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
	P_GET_TARRAY_REF(FVector4,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetVector4ArrayVariable(Z_Param_InVariableName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// End Class UOptimusDeformerInstance Function SetVector4ArrayVariable

// Begin Class UOptimusDeformerInstance Function SetVector4Variable
struct Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics
{
	struct OptimusDeformerInstance_eventSetVector4Variable_Parms
	{
		FName InVariableName;
		FVector4 InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deformer" },
		{ "DisplayName", "Set Variable (Vector4)" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetVector4Variable_Parms, InVariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetVector4Variable_Parms, InValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OptimusDeformerInstance_eventSetVector4Variable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusDeformerInstance_eventSetVector4Variable_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformerInstance, nullptr, "SetVector4Variable", nullptr, nullptr, Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::OptimusDeformerInstance_eventSetVector4Variable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::OptimusDeformerInstance_eventSetVector4Variable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusDeformerInstance::execSetVector4Variable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
	P_GET_STRUCT_REF(FVector4,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetVector4Variable(Z_Param_InVariableName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// End Class UOptimusDeformerInstance Function SetVector4Variable

// Begin Class UOptimusDeformerInstance Function SetVectorArrayVariable
struct Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorArrayVariable_Statics
{
	struct OptimusDeformerInstance_eventSetVectorArrayVariable_Parms
	{
		FName InVariableName;
		TArray<FVector> InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deformer" },
		{ "DisplayName", "Set Variable (Vector Array)" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorArrayVariable_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetVectorArrayVariable_Parms, InVariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorArrayVariable_Statics::NewProp_InValue_Inner = { "InValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorArrayVariable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetVectorArrayVariable_Parms, InValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorArrayVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OptimusDeformerInstance_eventSetVectorArrayVariable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorArrayVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusDeformerInstance_eventSetVectorArrayVariable_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorArrayVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorArrayVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorArrayVariable_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorArrayVariable_Statics::NewProp_InValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorArrayVariable_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorArrayVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorArrayVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorArrayVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformerInstance, nullptr, "SetVectorArrayVariable", nullptr, nullptr, Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorArrayVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorArrayVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorArrayVariable_Statics::OptimusDeformerInstance_eventSetVectorArrayVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorArrayVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorArrayVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorArrayVariable_Statics::OptimusDeformerInstance_eventSetVectorArrayVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorArrayVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorArrayVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusDeformerInstance::execSetVectorArrayVariable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetVectorArrayVariable(Z_Param_InVariableName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// End Class UOptimusDeformerInstance Function SetVectorArrayVariable

// Begin Class UOptimusDeformerInstance Function SetVectorVariable
struct Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics
{
	struct OptimusDeformerInstance_eventSetVectorVariable_Parms
	{
		FName InVariableName;
		FVector InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deformer" },
		{ "DisplayName", "Set Variable (Vector)" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetVectorVariable_Parms, InVariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformerInstance_eventSetVectorVariable_Parms, InValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OptimusDeformerInstance_eventSetVectorVariable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OptimusDeformerInstance_eventSetVectorVariable_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformerInstance, nullptr, "SetVectorVariable", nullptr, nullptr, Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::OptimusDeformerInstance_eventSetVectorVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::OptimusDeformerInstance_eventSetVectorVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusDeformerInstance::execSetVectorVariable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetVectorVariable(Z_Param_InVariableName,Z_Param_Out_InValue);
	P_NATIVE_END;
}
// End Class UOptimusDeformerInstance Function SetVectorVariable

// Begin Class UOptimusDeformerInstance
void UOptimusDeformerInstance::StaticRegisterNativesUOptimusDeformerInstance()
{
	UClass* Class = UOptimusDeformerInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnqueueTriggerGraph", &UOptimusDeformerInstance::execEnqueueTriggerGraph },
		{ "SetBoolArrayVariable", &UOptimusDeformerInstance::execSetBoolArrayVariable },
		{ "SetBoolVariable", &UOptimusDeformerInstance::execSetBoolVariable },
		{ "SetFloatArrayVariable", &UOptimusDeformerInstance::execSetFloatArrayVariable },
		{ "SetFloatVariable", &UOptimusDeformerInstance::execSetFloatVariable },
		{ "SetInt2ArrayVariable", &UOptimusDeformerInstance::execSetInt2ArrayVariable },
		{ "SetInt2Variable", &UOptimusDeformerInstance::execSetInt2Variable },
		{ "SetInt3ArrayVariable", &UOptimusDeformerInstance::execSetInt3ArrayVariable },
		{ "SetInt3Variable", &UOptimusDeformerInstance::execSetInt3Variable },
		{ "SetInt4ArrayVariable", &UOptimusDeformerInstance::execSetInt4ArrayVariable },
		{ "SetInt4Variable", &UOptimusDeformerInstance::execSetInt4Variable },
		{ "SetIntArrayVariable", &UOptimusDeformerInstance::execSetIntArrayVariable },
		{ "SetIntVariable", &UOptimusDeformerInstance::execSetIntVariable },
		{ "SetLinearColorArrayVariable", &UOptimusDeformerInstance::execSetLinearColorArrayVariable },
		{ "SetLinearColorVariable", &UOptimusDeformerInstance::execSetLinearColorVariable },
		{ "SetNameArrayVariable", &UOptimusDeformerInstance::execSetNameArrayVariable },
		{ "SetNameVariable", &UOptimusDeformerInstance::execSetNameVariable },
		{ "SetQuatArrayVariable", &UOptimusDeformerInstance::execSetQuatArrayVariable },
		{ "SetQuatVariable", &UOptimusDeformerInstance::execSetQuatVariable },
		{ "SetRotatorArrayVariable", &UOptimusDeformerInstance::execSetRotatorArrayVariable },
		{ "SetRotatorVariable", &UOptimusDeformerInstance::execSetRotatorVariable },
		{ "SetTransformArrayVariable", &UOptimusDeformerInstance::execSetTransformArrayVariable },
		{ "SetTransformVariable", &UOptimusDeformerInstance::execSetTransformVariable },
		{ "SetVector2ArrayVariable", &UOptimusDeformerInstance::execSetVector2ArrayVariable },
		{ "SetVector2Variable", &UOptimusDeformerInstance::execSetVector2Variable },
		{ "SetVector4ArrayVariable", &UOptimusDeformerInstance::execSetVector4ArrayVariable },
		{ "SetVector4Variable", &UOptimusDeformerInstance::execSetVector4Variable },
		{ "SetVectorArrayVariable", &UOptimusDeformerInstance::execSetVectorArrayVariable },
		{ "SetVectorVariable", &UOptimusDeformerInstance::execSetVectorVariable },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusDeformerInstance);
UClass* Z_Construct_UClass_UOptimusDeformerInstance_NoRegister()
{
	return UOptimusDeformerInstance::StaticClass();
}
struct Z_Construct_UClass_UOptimusDeformerInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Class representing an instance of an Optimus Mesh Deformer, used in a OptimusDeformerDynamicInstanceManager\n * It contains the per instance deformer variable state and local state for each of the graphs in the deformer.\n */" },
		{ "IncludePath", "OptimusDeformerInstance.h" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "Class representing an instance of an Optimus Mesh Deformer, used in a OptimusDeformerDynamicInstanceManager\nIt contains the per instance deformer variable state and local state for each of the graphs in the deformer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Comment", "/** The Mesh Component that owns this Mesh Deformer Instance. */" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "The Mesh Component that owns this Mesh Deformer Instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceSettings_MetaData[] = {
		{ "Comment", "/** The settings for this Mesh Deformer Instance. */" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "The settings for this Mesh Deformer Instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComputeGraphExecInfos_MetaData[] = {
		{ "Comment", "/** An array of state. One for each graph owned by the deformer. */" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "An array of state. One for each graph owned by the deformer." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_InstanceSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComputeGraphExecInfos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ComputeGraphExecInfos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOptimusDeformerInstance_EnqueueTriggerGraph, "EnqueueTriggerGraph" }, // 471088236
		{ &Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolArrayVariable, "SetBoolArrayVariable" }, // 1527140354
		{ &Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable, "SetBoolVariable" }, // 2333137219
		{ &Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatArrayVariable, "SetFloatArrayVariable" }, // 129941580
		{ &Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable, "SetFloatVariable" }, // 369675737
		{ &Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2ArrayVariable, "SetInt2ArrayVariable" }, // 2372641717
		{ &Z_Construct_UFunction_UOptimusDeformerInstance_SetInt2Variable, "SetInt2Variable" }, // 2903835240
		{ &Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3ArrayVariable, "SetInt3ArrayVariable" }, // 2425037686
		{ &Z_Construct_UFunction_UOptimusDeformerInstance_SetInt3Variable, "SetInt3Variable" }, // 4098803104
		{ &Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4ArrayVariable, "SetInt4ArrayVariable" }, // 1622616799
		{ &Z_Construct_UFunction_UOptimusDeformerInstance_SetInt4Variable, "SetInt4Variable" }, // 3467923922
		{ &Z_Construct_UFunction_UOptimusDeformerInstance_SetIntArrayVariable, "SetIntArrayVariable" }, // 1944718870
		{ &Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable, "SetIntVariable" }, // 4069022176
		{ &Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorArrayVariable, "SetLinearColorArrayVariable" }, // 27571225
		{ &Z_Construct_UFunction_UOptimusDeformerInstance_SetLinearColorVariable, "SetLinearColorVariable" }, // 3169955544
		{ &Z_Construct_UFunction_UOptimusDeformerInstance_SetNameArrayVariable, "SetNameArrayVariable" }, // 2006397401
		{ &Z_Construct_UFunction_UOptimusDeformerInstance_SetNameVariable, "SetNameVariable" }, // 707320925
		{ &Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatArrayVariable, "SetQuatArrayVariable" }, // 1965293161
		{ &Z_Construct_UFunction_UOptimusDeformerInstance_SetQuatVariable, "SetQuatVariable" }, // 2151385258
		{ &Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorArrayVariable, "SetRotatorArrayVariable" }, // 3050607702
		{ &Z_Construct_UFunction_UOptimusDeformerInstance_SetRotatorVariable, "SetRotatorVariable" }, // 1556378050
		{ &Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformArrayVariable, "SetTransformArrayVariable" }, // 909641660
		{ &Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable, "SetTransformVariable" }, // 4108253488
		{ &Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2ArrayVariable, "SetVector2ArrayVariable" }, // 3086408338
		{ &Z_Construct_UFunction_UOptimusDeformerInstance_SetVector2Variable, "SetVector2Variable" }, // 2722063625
		{ &Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4ArrayVariable, "SetVector4ArrayVariable" }, // 1340566350
		{ &Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable, "SetVector4Variable" }, // 1367652076
		{ &Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorArrayVariable, "SetVectorArrayVariable" }, // 204249621
		{ &Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable, "SetVectorVariable" }, // 1339822418
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusDeformerInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOptimusDeformerInstance_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusDeformerInstance, MeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOptimusDeformerInstance_Statics::NewProp_InstanceSettings = { "InstanceSettings", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusDeformerInstance, InstanceSettings), Z_Construct_UClass_UOptimusDeformerInstanceSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceSettings_MetaData), NewProp_InstanceSettings_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusDeformerInstance_Statics::NewProp_ComputeGraphExecInfos_Inner = { "ComputeGraphExecInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo, METADATA_PARAMS(0, nullptr) }; // 3874234635
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusDeformerInstance_Statics::NewProp_ComputeGraphExecInfos = { "ComputeGraphExecInfos", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusDeformerInstance, ComputeGraphExecInfos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComputeGraphExecInfos_MetaData), NewProp_ComputeGraphExecInfos_MetaData) }; // 3874234635
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusDeformerInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformerInstance_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformerInstance_Statics::NewProp_InstanceSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformerInstance_Statics::NewProp_ComputeGraphExecInfos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformerInstance_Statics::NewProp_ComputeGraphExecInfos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformerInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusDeformerInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshDeformerInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformerInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusDeformerInstance_Statics::ClassParams = {
	&UOptimusDeformerInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOptimusDeformerInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformerInstance_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformerInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusDeformerInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusDeformerInstance()
{
	if (!Z_Registration_Info_UClass_UOptimusDeformerInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusDeformerInstance.OuterSingleton, Z_Construct_UClass_UOptimusDeformerInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusDeformerInstance.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusDeformerInstance>()
{
	return UOptimusDeformerInstance::StaticClass();
}
UOptimusDeformerInstance::UOptimusDeformerInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusDeformerInstance);
UOptimusDeformerInstance::~UOptimusDeformerInstance() {}
// End Class UOptimusDeformerInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOptimusDeformerInstanceExecInfo::StaticStruct, Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::NewStructOps, TEXT("OptimusDeformerInstanceExecInfo"), &Z_Registration_Info_UScriptStruct_OptimusDeformerInstanceExecInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusDeformerInstanceExecInfo), 3874234635U) },
		{ FOptimusDeformerInstanceComponentBinding::StaticStruct, Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics::NewStructOps, TEXT("OptimusDeformerInstanceComponentBinding"), &Z_Registration_Info_UScriptStruct_OptimusDeformerInstanceComponentBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusDeformerInstanceComponentBinding), 541533560U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusDeformerInstanceSettings, UOptimusDeformerInstanceSettings::StaticClass, TEXT("UOptimusDeformerInstanceSettings"), &Z_Registration_Info_UClass_UOptimusDeformerInstanceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusDeformerInstanceSettings), 4027810616U) },
		{ Z_Construct_UClass_UOptimusDeformerInstance, UOptimusDeformerInstance::StaticClass, TEXT("UOptimusDeformerInstance"), &Z_Registration_Info_UClass_UOptimusDeformerInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusDeformerInstance), 746811909U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_792510786(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
