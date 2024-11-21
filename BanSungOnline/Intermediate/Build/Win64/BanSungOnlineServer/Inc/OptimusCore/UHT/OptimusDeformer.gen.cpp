// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/OptimusDeformer.h"
#include "OptimusCore/Public/OptimusValue.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusDeformer() {}

// Begin Cross Module References
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshDeformer();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusActionStack_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentSourceBinding_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentSourceBindingContainer();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentSourceBindingContainer_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeGraph_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeformer();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeformer_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeFunctionLibraryOwner_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeGraph_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeGraphCollectionOwner_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusPathResolver_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusResourceContainer();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusResourceContainer_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusResourceDescription_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusVariableContainer();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusVariableContainer_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusVariableDescription_NoRegister();
OPTIMUSCORE_API UEnum* Z_Construct_UEnum_OptimusCore_EOptimusDeformerStatus();
OPTIMUSCORE_API UEnum* Z_Construct_UEnum_OptimusCore_EOptimusNodeGraphType();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusComputeGraphInfo();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDataInterfacePropertyOverrideInfo();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusValueDescription();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusValueIdentifier();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Enum EOptimusDeformerStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOptimusDeformerStatus;
static UEnum* EOptimusDeformerStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOptimusDeformerStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOptimusDeformerStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OptimusCore_EOptimusDeformerStatus, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("EOptimusDeformerStatus"));
	}
	return Z_Registration_Info_UEnum_EOptimusDeformerStatus.OuterSingleton;
}
template<> OPTIMUSCORE_API UEnum* StaticEnum<EOptimusDeformerStatus>()
{
	return EOptimusDeformerStatus_StaticEnum();
}
struct Z_Construct_UEnum_OptimusCore_EOptimusDeformerStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Compiled.Name", "EOptimusDeformerStatus::Compiled" },
		{ "CompiledWithWarnings.Comment", "// Compiled, no warnings, no errors\n" },
		{ "CompiledWithWarnings.Name", "EOptimusDeformerStatus::CompiledWithWarnings" },
		{ "CompiledWithWarnings.ToolTip", "Compiled, no warnings, no errors" },
		{ "HasErrors.Comment", "// Graph has been modified, needs recompilation\n" },
		{ "HasErrors.Name", "EOptimusDeformerStatus::HasErrors" },
		{ "HasErrors.ToolTip", "Graph has been modified, needs recompilation" },
		{ "Modified.Comment", "// Compiled, has warnings\n" },
		{ "Modified.Name", "EOptimusDeformerStatus::Modified" },
		{ "Modified.ToolTip", "Compiled, has warnings" },
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOptimusDeformerStatus::Compiled", (int64)EOptimusDeformerStatus::Compiled },
		{ "EOptimusDeformerStatus::CompiledWithWarnings", (int64)EOptimusDeformerStatus::CompiledWithWarnings },
		{ "EOptimusDeformerStatus::Modified", (int64)EOptimusDeformerStatus::Modified },
		{ "EOptimusDeformerStatus::HasErrors", (int64)EOptimusDeformerStatus::HasErrors },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OptimusCore_EOptimusDeformerStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	"EOptimusDeformerStatus",
	"EOptimusDeformerStatus",
	Z_Construct_UEnum_OptimusCore_EOptimusDeformerStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusDeformerStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusDeformerStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OptimusCore_EOptimusDeformerStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OptimusCore_EOptimusDeformerStatus()
{
	if (!Z_Registration_Info_UEnum_EOptimusDeformerStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOptimusDeformerStatus.InnerSingleton, Z_Construct_UEnum_OptimusCore_EOptimusDeformerStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOptimusDeformerStatus.InnerSingleton;
}
// End Enum EOptimusDeformerStatus

// Begin ScriptStruct FOptimusComputeGraphInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusComputeGraphInfo;
class UScriptStruct* FOptimusComputeGraphInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusComputeGraphInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusComputeGraphInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusComputeGraphInfo, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusComputeGraphInfo"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusComputeGraphInfo.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusComputeGraphInfo>()
{
	return FOptimusComputeGraphInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphType_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComputeGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GraphType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GraphType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GraphName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComputeGraph;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusComputeGraphInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::NewProp_GraphType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::NewProp_GraphType = { "GraphType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusComputeGraphInfo, GraphType), Z_Construct_UEnum_OptimusCore_EOptimusNodeGraphType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphType_MetaData), NewProp_GraphType_MetaData) }; // 3482780142
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::NewProp_GraphName = { "GraphName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusComputeGraphInfo, GraphName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphName_MetaData), NewProp_GraphName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::NewProp_ComputeGraph = { "ComputeGraph", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusComputeGraphInfo, ComputeGraph), Z_Construct_UClass_UOptimusComputeGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComputeGraph_MetaData), NewProp_ComputeGraph_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::NewProp_GraphType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::NewProp_GraphType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::NewProp_GraphName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::NewProp_ComputeGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	&NewStructOps,
	"OptimusComputeGraphInfo",
	Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::PropPointers),
	sizeof(FOptimusComputeGraphInfo),
	alignof(FOptimusComputeGraphInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusComputeGraphInfo()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusComputeGraphInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusComputeGraphInfo.InnerSingleton, Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusComputeGraphInfo.InnerSingleton;
}
// End ScriptStruct FOptimusComputeGraphInfo

// Begin Class UOptimusComponentSourceBindingContainer
void UOptimusComponentSourceBindingContainer::StaticRegisterNativesUOptimusComponentSourceBindingContainer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusComponentSourceBindingContainer);
UClass* Z_Construct_UClass_UOptimusComponentSourceBindingContainer_NoRegister()
{
	return UOptimusComponentSourceBindingContainer::StaticClass();
}
struct Z_Construct_UClass_UOptimusComponentSourceBindingContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** A container class that owns component source bindings. This is used to ensure we don't end up\n  * with a namespace clash between graphs, variables, bindings and resources.\n  */" },
		{ "IncludePath", "OptimusDeformer.h" },
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
		{ "ToolTip", "A container class that owns component source bindings. This is used to ensure we don't end up\nwith a namespace clash between graphs, variables, bindings and resources." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bindings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bindings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusComponentSourceBindingContainer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusComponentSourceBindingContainer_Statics::NewProp_Bindings_Inner = { "Bindings", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOptimusComponentSourceBinding_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusComponentSourceBindingContainer_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusComponentSourceBindingContainer, Bindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bindings_MetaData), NewProp_Bindings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusComponentSourceBindingContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusComponentSourceBindingContainer_Statics::NewProp_Bindings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusComponentSourceBindingContainer_Statics::NewProp_Bindings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusComponentSourceBindingContainer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusComponentSourceBindingContainer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusComponentSourceBindingContainer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusComponentSourceBindingContainer_Statics::ClassParams = {
	&UOptimusComponentSourceBindingContainer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusComponentSourceBindingContainer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusComponentSourceBindingContainer_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusComponentSourceBindingContainer_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusComponentSourceBindingContainer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusComponentSourceBindingContainer()
{
	if (!Z_Registration_Info_UClass_UOptimusComponentSourceBindingContainer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusComponentSourceBindingContainer.OuterSingleton, Z_Construct_UClass_UOptimusComponentSourceBindingContainer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusComponentSourceBindingContainer.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusComponentSourceBindingContainer>()
{
	return UOptimusComponentSourceBindingContainer::StaticClass();
}
UOptimusComponentSourceBindingContainer::UOptimusComponentSourceBindingContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusComponentSourceBindingContainer);
UOptimusComponentSourceBindingContainer::~UOptimusComponentSourceBindingContainer() {}
// End Class UOptimusComponentSourceBindingContainer

// Begin Class UOptimusVariableContainer
void UOptimusVariableContainer::StaticRegisterNativesUOptimusVariableContainer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusVariableContainer);
UClass* Z_Construct_UClass_UOptimusVariableContainer_NoRegister()
{
	return UOptimusVariableContainer::StaticClass();
}
struct Z_Construct_UClass_UOptimusVariableContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** A container class that owns variable descriptors. This is used to ensure we don't end up\n  * with a namespace clash between graphs, variables and resources.\n  */" },
		{ "IncludePath", "OptimusDeformer.h" },
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
		{ "ToolTip", "A container class that owns variable descriptors. This is used to ensure we don't end up\nwith a namespace clash between graphs, variables and resources." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Descriptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Descriptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Descriptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusVariableContainer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusVariableContainer_Statics::NewProp_Descriptions_Inner = { "Descriptions", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOptimusVariableDescription_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusVariableContainer_Statics::NewProp_Descriptions = { "Descriptions", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusVariableContainer, Descriptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Descriptions_MetaData), NewProp_Descriptions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusVariableContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusVariableContainer_Statics::NewProp_Descriptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusVariableContainer_Statics::NewProp_Descriptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusVariableContainer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusVariableContainer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusVariableContainer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusVariableContainer_Statics::ClassParams = {
	&UOptimusVariableContainer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusVariableContainer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusVariableContainer_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusVariableContainer_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusVariableContainer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusVariableContainer()
{
	if (!Z_Registration_Info_UClass_UOptimusVariableContainer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusVariableContainer.OuterSingleton, Z_Construct_UClass_UOptimusVariableContainer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusVariableContainer.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusVariableContainer>()
{
	return UOptimusVariableContainer::StaticClass();
}
UOptimusVariableContainer::UOptimusVariableContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusVariableContainer);
UOptimusVariableContainer::~UOptimusVariableContainer() {}
// End Class UOptimusVariableContainer

// Begin Class UOptimusResourceContainer
void UOptimusResourceContainer::StaticRegisterNativesUOptimusResourceContainer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusResourceContainer);
UClass* Z_Construct_UClass_UOptimusResourceContainer_NoRegister()
{
	return UOptimusResourceContainer::StaticClass();
}
struct Z_Construct_UClass_UOptimusResourceContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** A container class that owns resource descriptors. This is used to ensure we don't end up\n  * with a namespace clash between graphs, variables and resources.\n  */" },
		{ "IncludePath", "OptimusDeformer.h" },
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
		{ "ToolTip", "A container class that owns resource descriptors. This is used to ensure we don't end up\nwith a namespace clash between graphs, variables and resources." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Descriptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Descriptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Descriptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusResourceContainer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusResourceContainer_Statics::NewProp_Descriptions_Inner = { "Descriptions", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOptimusResourceDescription_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusResourceContainer_Statics::NewProp_Descriptions = { "Descriptions", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusResourceContainer, Descriptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Descriptions_MetaData), NewProp_Descriptions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusResourceContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusResourceContainer_Statics::NewProp_Descriptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusResourceContainer_Statics::NewProp_Descriptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusResourceContainer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusResourceContainer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusResourceContainer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusResourceContainer_Statics::ClassParams = {
	&UOptimusResourceContainer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusResourceContainer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusResourceContainer_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusResourceContainer_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusResourceContainer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusResourceContainer()
{
	if (!Z_Registration_Info_UClass_UOptimusResourceContainer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusResourceContainer.OuterSingleton, Z_Construct_UClass_UOptimusResourceContainer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusResourceContainer.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusResourceContainer>()
{
	return UOptimusResourceContainer::StaticClass();
}
UOptimusResourceContainer::UOptimusResourceContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusResourceContainer);
UOptimusResourceContainer::~UOptimusResourceContainer() {}
// End Class UOptimusResourceContainer

// Begin Class UOptimusDeformer Function GetComponentBindings
struct Z_Construct_UFunction_UOptimusDeformer_GetComponentBindings_Statics
{
	struct OptimusDeformer_eventGetComponentBindings_Parms
	{
		TArray<UOptimusComponentSourceBinding*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusDeformer_GetComponentBindings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOptimusComponentSourceBinding_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOptimusDeformer_GetComponentBindings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformer_eventGetComponentBindings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformer_GetComponentBindings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformer_GetComponentBindings_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformer_GetComponentBindings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformer_GetComponentBindings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformer_GetComponentBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformer, nullptr, "GetComponentBindings", nullptr, nullptr, Z_Construct_UFunction_UOptimusDeformer_GetComponentBindings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformer_GetComponentBindings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusDeformer_GetComponentBindings_Statics::OptimusDeformer_eventGetComponentBindings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformer_GetComponentBindings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusDeformer_GetComponentBindings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusDeformer_GetComponentBindings_Statics::OptimusDeformer_eventGetComponentBindings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusDeformer_GetComponentBindings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformer_GetComponentBindings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusDeformer::execGetComponentBindings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UOptimusComponentSourceBinding*>*)Z_Param__Result=P_THIS->GetComponentBindings();
	P_NATIVE_END;
}
// End Class UOptimusDeformer Function GetComponentBindings

// Begin Class UOptimusDeformer Function GetPrimaryComponentBinding
struct Z_Construct_UFunction_UOptimusDeformer_GetPrimaryComponentBinding_Statics
{
	struct OptimusDeformer_eventGetPrimaryComponentBinding_Parms
	{
		UOptimusComponentSourceBinding* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusDeformer_GetPrimaryComponentBinding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformer_eventGetPrimaryComponentBinding_Parms, ReturnValue), Z_Construct_UClass_UOptimusComponentSourceBinding_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformer_GetPrimaryComponentBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformer_GetPrimaryComponentBinding_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformer_GetPrimaryComponentBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformer_GetPrimaryComponentBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformer, nullptr, "GetPrimaryComponentBinding", nullptr, nullptr, Z_Construct_UFunction_UOptimusDeformer_GetPrimaryComponentBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformer_GetPrimaryComponentBinding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusDeformer_GetPrimaryComponentBinding_Statics::OptimusDeformer_eventGetPrimaryComponentBinding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformer_GetPrimaryComponentBinding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusDeformer_GetPrimaryComponentBinding_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusDeformer_GetPrimaryComponentBinding_Statics::OptimusDeformer_eventGetPrimaryComponentBinding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusDeformer_GetPrimaryComponentBinding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformer_GetPrimaryComponentBinding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusDeformer::execGetPrimaryComponentBinding)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOptimusComponentSourceBinding**)Z_Param__Result=P_THIS->GetPrimaryComponentBinding();
	P_NATIVE_END;
}
// End Class UOptimusDeformer Function GetPrimaryComponentBinding

// Begin Class UOptimusDeformer Function GetResources
struct Z_Construct_UFunction_UOptimusDeformer_GetResources_Statics
{
	struct OptimusDeformer_eventGetResources_Parms
	{
		TArray<UOptimusResourceDescription*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusDeformer_GetResources_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOptimusResourceDescription_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOptimusDeformer_GetResources_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformer_eventGetResources_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformer_GetResources_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformer_GetResources_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformer_GetResources_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformer_GetResources_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformer_GetResources_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformer, nullptr, "GetResources", nullptr, nullptr, Z_Construct_UFunction_UOptimusDeformer_GetResources_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformer_GetResources_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusDeformer_GetResources_Statics::OptimusDeformer_eventGetResources_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformer_GetResources_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusDeformer_GetResources_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusDeformer_GetResources_Statics::OptimusDeformer_eventGetResources_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusDeformer_GetResources()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformer_GetResources_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusDeformer::execGetResources)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UOptimusResourceDescription*>*)Z_Param__Result=P_THIS->GetResources();
	P_NATIVE_END;
}
// End Class UOptimusDeformer Function GetResources

// Begin Class UOptimusDeformer Function GetVariables
struct Z_Construct_UFunction_UOptimusDeformer_GetVariables_Statics
{
	struct OptimusDeformer_eventGetVariables_Parms
	{
		TArray<UOptimusVariableDescription*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusDeformer_GetVariables_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOptimusVariableDescription_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOptimusDeformer_GetVariables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptimusDeformer_eventGetVariables_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformer_GetVariables_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformer_GetVariables_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformer_GetVariables_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformer_GetVariables_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformer_GetVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformer, nullptr, "GetVariables", nullptr, nullptr, Z_Construct_UFunction_UOptimusDeformer_GetVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformer_GetVariables_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptimusDeformer_GetVariables_Statics::OptimusDeformer_eventGetVariables_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformer_GetVariables_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptimusDeformer_GetVariables_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptimusDeformer_GetVariables_Statics::OptimusDeformer_eventGetVariables_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptimusDeformer_GetVariables()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformer_GetVariables_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptimusDeformer::execGetVariables)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UOptimusVariableDescription*>*)Z_Param__Result=P_THIS->GetVariables();
	P_NATIVE_END;
}
// End Class UOptimusDeformer Function GetVariables

// Begin Class UOptimusDeformer
void UOptimusDeformer::StaticRegisterNativesUOptimusDeformer()
{
	UClass* Class = UOptimusDeformer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetComponentBindings", &UOptimusDeformer::execGetComponentBindings },
		{ "GetPrimaryComponentBinding", &UOptimusDeformer::execGetPrimaryComponentBinding },
		{ "GetResources", &UOptimusDeformer::execGetResources },
		{ "GetVariables", &UOptimusDeformer::execGetVariables },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusDeformer);
UClass* Z_Construct_UClass_UOptimusDeformer_NoRegister()
{
	return UOptimusDeformer::StaticClass();
}
struct Z_Construct_UClass_UOptimusDeformer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n  * A Deformer Graph is an asset that is used to create and control custom deformations on \n  * skeletal meshes.\n  */" },
		{ "IncludePath", "OptimusDeformer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
		{ "ToolTip", "A Deformer Graph is an asset that is used to create and control custom deformations on\nskeletal meshes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComputeGraphs_MetaData[] = {
		{ "Comment", "// The compute graphs to execute.\n" },
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
		{ "ToolTip", "The compute graphs to execute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataInterfacePropertyOverrideMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionStack_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Graphs_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variables_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resources_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComputeGraphs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ComputeGraphs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataInterfacePropertyOverrideMap_ValueProp;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_DataInterfacePropertyOverrideMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DataInterfacePropertyOverrideMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ValueMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ValueMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ValueMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionStack;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Status_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Graphs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Graphs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bindings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variables;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Resources;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOptimusDeformer_GetComponentBindings, "GetComponentBindings" }, // 1463946781
		{ &Z_Construct_UFunction_UOptimusDeformer_GetPrimaryComponentBinding, "GetPrimaryComponentBinding" }, // 330659180
		{ &Z_Construct_UFunction_UOptimusDeformer_GetResources, "GetResources" }, // 2058754463
		{ &Z_Construct_UFunction_UOptimusDeformer_GetVariables, "GetVariables" }, // 2449465154
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusDeformer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusDeformer, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_ComputeGraphs_Inner = { "ComputeGraphs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOptimusComputeGraphInfo, METADATA_PARAMS(0, nullptr) }; // 1776490083
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_ComputeGraphs = { "ComputeGraphs", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusDeformer, ComputeGraphs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComputeGraphs_MetaData), NewProp_ComputeGraphs_MetaData) }; // 1776490083
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_DataInterfacePropertyOverrideMap_ValueProp = { "DataInterfacePropertyOverrideMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FOptimusDataInterfacePropertyOverrideInfo, METADATA_PARAMS(0, nullptr) }; // 3435661004
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_DataInterfacePropertyOverrideMap_Key_KeyProp = { "DataInterfacePropertyOverrideMap_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UComputeDataInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_DataInterfacePropertyOverrideMap = { "DataInterfacePropertyOverrideMap", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusDeformer, DataInterfacePropertyOverrideMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataInterfacePropertyOverrideMap_MetaData), NewProp_DataInterfacePropertyOverrideMap_MetaData) }; // 3435661004
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_ValueMap_ValueProp = { "ValueMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FOptimusValueDescription, METADATA_PARAMS(0, nullptr) }; // 2902388104
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_ValueMap_Key_KeyProp = { "ValueMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOptimusValueIdentifier, METADATA_PARAMS(0, nullptr) }; // 454645837
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_ValueMap = { "ValueMap", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusDeformer, ValueMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueMap_MetaData), NewProp_ValueMap_MetaData) }; // 454645837 2902388104
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_ActionStack = { "ActionStack", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusDeformer, ActionStack), Z_Construct_UClass_UOptimusActionStack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionStack_MetaData), NewProp_ActionStack_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusDeformer, Status), Z_Construct_UEnum_OptimusCore_EOptimusDeformerStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Status_MetaData), NewProp_Status_MetaData) }; // 1131268297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Graphs_Inner = { "Graphs", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOptimusNodeGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Graphs = { "Graphs", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusDeformer, Graphs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Graphs_MetaData), NewProp_Graphs_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusDeformer, Bindings), Z_Construct_UClass_UOptimusComponentSourceBindingContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bindings_MetaData), NewProp_Bindings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Variables = { "Variables", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusDeformer, Variables), Z_Construct_UClass_UOptimusVariableContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variables_MetaData), NewProp_Variables_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Resources = { "Resources", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusDeformer, Resources), Z_Construct_UClass_UOptimusResourceContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resources_MetaData), NewProp_Resources_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusDeformer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_ComputeGraphs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_ComputeGraphs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_DataInterfacePropertyOverrideMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_DataInterfacePropertyOverrideMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_DataInterfacePropertyOverrideMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_ValueMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_ValueMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_ValueMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_ActionStack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Status_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Graphs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Graphs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Bindings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Variables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Resources,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusDeformer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshDeformer,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOptimusDeformer_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister, (int32)VTABLE_OFFSET(UOptimusDeformer, IInterface_PreviewMeshProvider), false },  // 1431543565
	{ Z_Construct_UClass_UOptimusPathResolver_NoRegister, (int32)VTABLE_OFFSET(UOptimusDeformer, IOptimusPathResolver), false },  // 172514543
	{ Z_Construct_UClass_UOptimusNodeGraphCollectionOwner_NoRegister, (int32)VTABLE_OFFSET(UOptimusDeformer, IOptimusNodeGraphCollectionOwner), false },  // 1130611942
	{ Z_Construct_UClass_UOptimusNodeFunctionLibraryOwner_NoRegister, (int32)VTABLE_OFFSET(UOptimusDeformer, IOptimusNodeFunctionLibraryOwner), false },  // 817524197
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusDeformer_Statics::ClassParams = {
	&UOptimusDeformer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOptimusDeformer_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformer_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformer_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusDeformer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusDeformer()
{
	if (!Z_Registration_Info_UClass_UOptimusDeformer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusDeformer.OuterSingleton, Z_Construct_UClass_UOptimusDeformer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusDeformer.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusDeformer>()
{
	return UOptimusDeformer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusDeformer);
UOptimusDeformer::~UOptimusDeformer() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UOptimusDeformer)
// End Class UOptimusDeformer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformer_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOptimusDeformerStatus_StaticEnum, TEXT("EOptimusDeformerStatus"), &Z_Registration_Info_UEnum_EOptimusDeformerStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1131268297U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOptimusComputeGraphInfo::StaticStruct, Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::NewStructOps, TEXT("OptimusComputeGraphInfo"), &Z_Registration_Info_UScriptStruct_OptimusComputeGraphInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusComputeGraphInfo), 1776490083U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusComponentSourceBindingContainer, UOptimusComponentSourceBindingContainer::StaticClass, TEXT("UOptimusComponentSourceBindingContainer"), &Z_Registration_Info_UClass_UOptimusComponentSourceBindingContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusComponentSourceBindingContainer), 1596531723U) },
		{ Z_Construct_UClass_UOptimusVariableContainer, UOptimusVariableContainer::StaticClass, TEXT("UOptimusVariableContainer"), &Z_Registration_Info_UClass_UOptimusVariableContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusVariableContainer), 1695603335U) },
		{ Z_Construct_UClass_UOptimusResourceContainer, UOptimusResourceContainer::StaticClass, TEXT("UOptimusResourceContainer"), &Z_Registration_Info_UClass_UOptimusResourceContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusResourceContainer), 2134709114U) },
		{ Z_Construct_UClass_UOptimusDeformer, UOptimusDeformer::StaticClass, TEXT("UOptimusDeformer"), &Z_Registration_Info_UClass_UOptimusDeformer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusDeformer), 2002302694U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformer_h_2582853962(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformer_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformer_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformer_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
