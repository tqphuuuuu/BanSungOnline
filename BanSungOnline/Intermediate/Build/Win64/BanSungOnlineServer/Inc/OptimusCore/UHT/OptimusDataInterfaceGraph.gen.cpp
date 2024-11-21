// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Private/DataInterfaces/OptimusDataInterfaceGraph.h"
#include "ComputeFramework/Public/ComputeFramework/ShaderParamTypeDefinition.h"
#include "OptimusCore/Public/OptimusValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusDataInterfaceGraph() {}

// Begin Cross Module References
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataInterface();
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
COMPUTEFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FShaderValueContainer();
COMPUTEFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FShaderValueTypeHandle();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeformerInstance_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeformerInstanceAccessor_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusGraphDataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusGraphDataInterface_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusGraphDataProvider();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusGraphDataProvider_NoRegister();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusGraphVariableDescription();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusValueIdentifier();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin ScriptStruct FOptimusGraphVariableDescription
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusGraphVariableDescription;
class UScriptStruct* FOptimusGraphVariableDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusGraphVariableDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusGraphVariableDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusGraphVariableDescription, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusGraphVariableDescription"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusGraphVariableDescription.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusGraphVariableDescription>()
{
	return FOptimusGraphVariableDescription::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueType_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueId_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Comment", "// Deprecated \n" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use ShaderValue instead" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceGraph.h" },
		{ "ToolTip", "Deprecated" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShaderValue_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Values are now store on the deformer instance" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceObject_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Node-Value mapping is now handled by deformer instance directly" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceGraph.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ValueType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ValueId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShaderValue;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SourceObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusGraphVariableDescription>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusGraphVariableDescription, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_ValueType = { "ValueType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusGraphVariableDescription, ValueType), Z_Construct_UScriptStruct_FShaderValueTypeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueType_MetaData), NewProp_ValueType_MetaData) }; // 3692120632
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_ValueId = { "ValueId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusGraphVariableDescription, ValueId), Z_Construct_UScriptStruct_FOptimusValueIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueId_MetaData), NewProp_ValueId_MetaData) }; // 454645837
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusGraphVariableDescription, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusGraphVariableDescription, Value_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_ShaderValue = { "ShaderValue", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusGraphVariableDescription, ShaderValue_DEPRECATED), Z_Construct_UScriptStruct_FShaderValueContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShaderValue_MetaData), NewProp_ShaderValue_MetaData) }; // 1837131788
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_SourceObject = { "SourceObject", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusGraphVariableDescription, SourceObject_DEPRECATED), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceObject_MetaData), NewProp_SourceObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_ValueType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_ValueId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_ShaderValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_SourceObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	&NewStructOps,
	"OptimusGraphVariableDescription",
	Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::PropPointers),
	sizeof(FOptimusGraphVariableDescription),
	alignof(FOptimusGraphVariableDescription),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusGraphVariableDescription()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusGraphVariableDescription.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusGraphVariableDescription.InnerSingleton, Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusGraphVariableDescription.InnerSingleton;
}
// End ScriptStruct FOptimusGraphVariableDescription

// Begin Class UOptimusGraphDataInterface
void UOptimusGraphDataInterface::StaticRegisterNativesUOptimusGraphDataInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusGraphDataInterface);
UClass* Z_Construct_UClass_UOptimusGraphDataInterface_NoRegister()
{
	return UOptimusGraphDataInterface::StaticClass();
}
struct Z_Construct_UClass_UOptimusGraphDataInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Interface used for marshaling compute graph parameters and variables. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceGraph.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceGraph.h" },
		{ "ToolTip", "Compute Framework Data Interface used for marshaling compute graph parameters and variables." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variables_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterBufferSize_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceGraph.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Variables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Variables;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParameterBufferSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusGraphDataInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusGraphDataInterface_Statics::NewProp_Variables_Inner = { "Variables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOptimusGraphVariableDescription, METADATA_PARAMS(0, nullptr) }; // 3048649628
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusGraphDataInterface_Statics::NewProp_Variables = { "Variables", nullptr, (EPropertyFlags)0x0040000000000010, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusGraphDataInterface, Variables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variables_MetaData), NewProp_Variables_MetaData) }; // 3048649628
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOptimusGraphDataInterface_Statics::NewProp_ParameterBufferSize = { "ParameterBufferSize", nullptr, (EPropertyFlags)0x0040000000000010, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusGraphDataInterface, ParameterBufferSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterBufferSize_MetaData), NewProp_ParameterBufferSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusGraphDataInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusGraphDataInterface_Statics::NewProp_Variables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusGraphDataInterface_Statics::NewProp_Variables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusGraphDataInterface_Statics::NewProp_ParameterBufferSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGraphDataInterface_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusGraphDataInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UComputeDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGraphDataInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusGraphDataInterface_Statics::ClassParams = {
	&UOptimusGraphDataInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusGraphDataInterface_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGraphDataInterface_Statics::PropPointers),
	0,
	0x000100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGraphDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusGraphDataInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusGraphDataInterface()
{
	if (!Z_Registration_Info_UClass_UOptimusGraphDataInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusGraphDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusGraphDataInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusGraphDataInterface.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusGraphDataInterface>()
{
	return UOptimusGraphDataInterface::StaticClass();
}
UOptimusGraphDataInterface::UOptimusGraphDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusGraphDataInterface);
UOptimusGraphDataInterface::~UOptimusGraphDataInterface() {}
// End Class UOptimusGraphDataInterface

// Begin Class UOptimusGraphDataProvider
void UOptimusGraphDataProvider::StaticRegisterNativesUOptimusGraphDataProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusGraphDataProvider);
UClass* Z_Construct_UClass_UOptimusGraphDataProvider_NoRegister()
{
	return UOptimusGraphDataProvider::StaticClass();
}
struct Z_Construct_UClass_UOptimusGraphDataProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for marshaling compute graph parameters and variables. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceGraph.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceGraph.h" },
		{ "ToolTip", "Compute Framework Data Provider for marshaling compute graph parameters and variables." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Binding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variables_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeformerInstance_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceGraph.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Variables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Variables;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeformerInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusGraphDataProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusGraphDataProvider_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusGraphDataProvider, MeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusGraphDataProvider_Statics::NewProp_Variables_Inner = { "Variables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOptimusGraphVariableDescription, METADATA_PARAMS(0, nullptr) }; // 3048649628
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusGraphDataProvider_Statics::NewProp_Variables = { "Variables", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusGraphDataProvider, Variables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variables_MetaData), NewProp_Variables_MetaData) }; // 3048649628
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusGraphDataProvider_Statics::NewProp_DeformerInstance = { "DeformerInstance", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusGraphDataProvider, DeformerInstance), Z_Construct_UClass_UOptimusDeformerInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeformerInstance_MetaData), NewProp_DeformerInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusGraphDataProvider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusGraphDataProvider_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusGraphDataProvider_Statics::NewProp_Variables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusGraphDataProvider_Statics::NewProp_Variables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusGraphDataProvider_Statics::NewProp_DeformerInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGraphDataProvider_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusGraphDataProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGraphDataProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOptimusGraphDataProvider_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UOptimusDeformerInstanceAccessor_NoRegister, (int32)VTABLE_OFFSET(UOptimusGraphDataProvider, IOptimusDeformerInstanceAccessor), false },  // 1833869264
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusGraphDataProvider_Statics::ClassParams = {
	&UOptimusGraphDataProvider::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusGraphDataProvider_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGraphDataProvider_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGraphDataProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusGraphDataProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusGraphDataProvider()
{
	if (!Z_Registration_Info_UClass_UOptimusGraphDataProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusGraphDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusGraphDataProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusGraphDataProvider.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusGraphDataProvider>()
{
	return UOptimusGraphDataProvider::StaticClass();
}
UOptimusGraphDataProvider::UOptimusGraphDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusGraphDataProvider);
UOptimusGraphDataProvider::~UOptimusGraphDataProvider() {}
// End Class UOptimusGraphDataProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceGraph_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOptimusGraphVariableDescription::StaticStruct, Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewStructOps, TEXT("OptimusGraphVariableDescription"), &Z_Registration_Info_UScriptStruct_OptimusGraphVariableDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusGraphVariableDescription), 3048649628U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusGraphDataInterface, UOptimusGraphDataInterface::StaticClass, TEXT("UOptimusGraphDataInterface"), &Z_Registration_Info_UClass_UOptimusGraphDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusGraphDataInterface), 1717032251U) },
		{ Z_Construct_UClass_UOptimusGraphDataProvider, UOptimusGraphDataProvider::StaticClass, TEXT("UOptimusGraphDataProvider"), &Z_Registration_Info_UClass_UOptimusGraphDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusGraphDataProvider), 3857455057U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceGraph_h_3960227921(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceGraph_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceGraph_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceGraph_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
