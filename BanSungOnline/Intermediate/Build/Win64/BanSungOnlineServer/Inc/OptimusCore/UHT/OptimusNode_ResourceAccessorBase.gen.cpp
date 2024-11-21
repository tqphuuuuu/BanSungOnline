// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Private/Nodes/OptimusNode_ResourceAccessorBase.h"
#include "OptimusCore/Public/OptimusDataDomain.h"
#include "OptimusCore/Public/OptimusDataType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNode_ResourceAccessorBase() {}

// Begin Cross Module References
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentBindingProvider_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDataInterfaceProvider_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_ResourceAccessorBase();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNonCollapsibleNode_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusPinMutabilityDefiner_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusResourceDescription_NoRegister();
OPTIMUSCORE_API UEnum* Z_Construct_UEnum_OptimusCore_EOptimusBufferWriteType();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDataDomain();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDataTypeRef();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin ScriptStruct FOptimusNode_ResourceAccessorBase_DuplicationInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNode_ResourceAccessorBase_DuplicationInfo;
class UScriptStruct* FOptimusNode_ResourceAccessorBase_DuplicationInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNode_ResourceAccessorBase_DuplicationInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNode_ResourceAccessorBase_DuplicationInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNode_ResourceAccessorBase_DuplicationInfo"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNode_ResourceAccessorBase_DuplicationInfo.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNode_ResourceAccessorBase_DuplicationInfo>()
{
	return FOptimusNode_ResourceAccessorBase_DuplicationInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ResourceAccessorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResourceName_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ResourceAccessorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ResourceAccessorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataDomain_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ResourceAccessorBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ResourceName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataDomain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNode_ResourceAccessorBase_DuplicationInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::NewProp_ResourceName = { "ResourceName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusNode_ResourceAccessorBase_DuplicationInfo, ResourceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResourceName_MetaData), NewProp_ResourceName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusNode_ResourceAccessorBase_DuplicationInfo, DataType), Z_Construct_UScriptStruct_FOptimusDataTypeRef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataType_MetaData), NewProp_DataType_MetaData) }; // 1626052194
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::NewProp_DataDomain = { "DataDomain", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusNode_ResourceAccessorBase_DuplicationInfo, DataDomain), Z_Construct_UScriptStruct_FOptimusDataDomain, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataDomain_MetaData), NewProp_DataDomain_MetaData) }; // 3408120871
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::NewProp_ResourceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::NewProp_DataDomain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	&NewStructOps,
	"OptimusNode_ResourceAccessorBase_DuplicationInfo",
	Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::PropPointers),
	sizeof(FOptimusNode_ResourceAccessorBase_DuplicationInfo),
	alignof(FOptimusNode_ResourceAccessorBase_DuplicationInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNode_ResourceAccessorBase_DuplicationInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNode_ResourceAccessorBase_DuplicationInfo.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusNode_ResourceAccessorBase_DuplicationInfo.InnerSingleton;
}
// End ScriptStruct FOptimusNode_ResourceAccessorBase_DuplicationInfo

// Begin Class UOptimusNode_ResourceAccessorBase
void UOptimusNode_ResourceAccessorBase::StaticRegisterNativesUOptimusNode_ResourceAccessorBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNode_ResourceAccessorBase);
UClass* Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_NoRegister()
{
	return UOptimusNode_ResourceAccessorBase::StaticClass();
}
struct Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/OptimusNode_ResourceAccessorBase.h" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ResourceAccessorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResourceDesc_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ResourceAccessorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WriteType_MetaData[] = {
		{ "Comment", "/** Logical operation when writing to the resource. */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ResourceAccessorBase.h" },
		{ "ToolTip", "Logical operation when writing to the resource." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DuplicationInfo_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ResourceAccessorBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ResourceDesc;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WriteType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WriteType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DuplicationInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNode_ResourceAccessorBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::NewProp_ResourceDesc = { "ResourceDesc", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_ResourceAccessorBase, ResourceDesc), Z_Construct_UClass_UOptimusResourceDescription_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResourceDesc_MetaData), NewProp_ResourceDesc_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::NewProp_WriteType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::NewProp_WriteType = { "WriteType", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_ResourceAccessorBase, WriteType_DEPRECATED), Z_Construct_UEnum_OptimusCore_EOptimusBufferWriteType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WriteType_MetaData), NewProp_WriteType_MetaData) }; // 4054972063
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::NewProp_DuplicationInfo = { "DuplicationInfo", nullptr, (EPropertyFlags)0x0020080000200000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_ResourceAccessorBase, DuplicationInfo), Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DuplicationInfo_MetaData), NewProp_DuplicationInfo_MetaData) }; // 3208875521
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::NewProp_ResourceDesc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::NewProp_WriteType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::NewProp_WriteType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::NewProp_DuplicationInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusNode,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UOptimusDataInterfaceProvider_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_ResourceAccessorBase, IOptimusDataInterfaceProvider), false },  // 250041116
	{ Z_Construct_UClass_UOptimusComponentBindingProvider_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_ResourceAccessorBase, IOptimusComponentBindingProvider), false },  // 2322815117
	{ Z_Construct_UClass_UOptimusPinMutabilityDefiner_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_ResourceAccessorBase, IOptimusPinMutabilityDefiner), false },  // 3934412691
	{ Z_Construct_UClass_UOptimusNonCollapsibleNode_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_ResourceAccessorBase, IOptimusNonCollapsibleNode), false },  // 335131968
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::ClassParams = {
	&UOptimusNode_ResourceAccessorBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusNode_ResourceAccessorBase()
{
	if (!Z_Registration_Info_UClass_UOptimusNode_ResourceAccessorBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNode_ResourceAccessorBase.OuterSingleton, Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusNode_ResourceAccessorBase.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNode_ResourceAccessorBase>()
{
	return UOptimusNode_ResourceAccessorBase::StaticClass();
}
UOptimusNode_ResourceAccessorBase::UOptimusNode_ResourceAccessorBase() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNode_ResourceAccessorBase);
UOptimusNode_ResourceAccessorBase::~UOptimusNode_ResourceAccessorBase() {}
// End Class UOptimusNode_ResourceAccessorBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ResourceAccessorBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOptimusNode_ResourceAccessorBase_DuplicationInfo::StaticStruct, Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::NewStructOps, TEXT("OptimusNode_ResourceAccessorBase_DuplicationInfo"), &Z_Registration_Info_UScriptStruct_OptimusNode_ResourceAccessorBase_DuplicationInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNode_ResourceAccessorBase_DuplicationInfo), 3208875521U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNode_ResourceAccessorBase, UOptimusNode_ResourceAccessorBase::StaticClass, TEXT("UOptimusNode_ResourceAccessorBase"), &Z_Registration_Info_UClass_UOptimusNode_ResourceAccessorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNode_ResourceAccessorBase), 1864217399U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ResourceAccessorBase_h_2021049700(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ResourceAccessorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ResourceAccessorBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ResourceAccessorBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ResourceAccessorBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
