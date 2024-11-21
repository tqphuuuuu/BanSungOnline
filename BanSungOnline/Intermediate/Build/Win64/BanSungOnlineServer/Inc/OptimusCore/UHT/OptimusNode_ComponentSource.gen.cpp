// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Private/Nodes/OptimusNode_ComponentSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNode_ComponentSource() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentBindingProvider_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentSource_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentSourceBinding_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_ComponentSource();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_ComponentSource_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNonCollapsibleNode_NoRegister();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNode_ComponentSource_DuplicationInfo();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin ScriptStruct FOptimusNode_ComponentSource_DuplicationInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNode_ComponentSource_DuplicationInfo;
class UScriptStruct* FOptimusNode_ComponentSource_DuplicationInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNode_ComponentSource_DuplicationInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNode_ComponentSource_DuplicationInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNode_ComponentSource_DuplicationInfo, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNode_ComponentSource_DuplicationInfo"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNode_ComponentSource_DuplicationInfo.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNode_ComponentSource_DuplicationInfo>()
{
	return FOptimusNode_ComponentSource_DuplicationInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusNode_ComponentSource_DuplicationInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ComponentSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BindingName_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ComponentSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentType_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ComponentSource.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BindingName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ComponentType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNode_ComponentSource_DuplicationInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusNode_ComponentSource_DuplicationInfo_Statics::NewProp_BindingName = { "BindingName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusNode_ComponentSource_DuplicationInfo, BindingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BindingName_MetaData), NewProp_BindingName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FOptimusNode_ComponentSource_DuplicationInfo_Statics::NewProp_ComponentType = { "ComponentType", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusNode_ComponentSource_DuplicationInfo, ComponentType), Z_Construct_UClass_UClass, Z_Construct_UClass_UOptimusComponentSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentType_MetaData), NewProp_ComponentType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusNode_ComponentSource_DuplicationInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusNode_ComponentSource_DuplicationInfo_Statics::NewProp_BindingName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusNode_ComponentSource_DuplicationInfo_Statics::NewProp_ComponentType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNode_ComponentSource_DuplicationInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNode_ComponentSource_DuplicationInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	&NewStructOps,
	"OptimusNode_ComponentSource_DuplicationInfo",
	Z_Construct_UScriptStruct_FOptimusNode_ComponentSource_DuplicationInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNode_ComponentSource_DuplicationInfo_Statics::PropPointers),
	sizeof(FOptimusNode_ComponentSource_DuplicationInfo),
	alignof(FOptimusNode_ComponentSource_DuplicationInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNode_ComponentSource_DuplicationInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusNode_ComponentSource_DuplicationInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusNode_ComponentSource_DuplicationInfo()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNode_ComponentSource_DuplicationInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNode_ComponentSource_DuplicationInfo.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNode_ComponentSource_DuplicationInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusNode_ComponentSource_DuplicationInfo.InnerSingleton;
}
// End ScriptStruct FOptimusNode_ComponentSource_DuplicationInfo

// Begin Class UOptimusNode_ComponentSource
void UOptimusNode_ComponentSource::StaticRegisterNativesUOptimusNode_ComponentSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNode_ComponentSource);
UClass* Z_Construct_UClass_UOptimusNode_ComponentSource_NoRegister()
{
	return UOptimusNode_ComponentSource::StaticClass();
}
struct Z_Construct_UClass_UOptimusNode_ComponentSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/OptimusNode_ComponentSource.h" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ComponentSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Binding_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ComponentSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DuplicationInfo_MetaData[] = {
		{ "Comment", "// Duplication data across graphs/assets\n" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ComponentSource.h" },
		{ "ToolTip", "Duplication data across graphs/assets" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Binding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DuplicationInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNode_ComponentSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusNode_ComponentSource_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_ComponentSource, Binding), Z_Construct_UClass_UOptimusComponentSourceBinding_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Binding_MetaData), NewProp_Binding_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNode_ComponentSource_Statics::NewProp_DuplicationInfo = { "DuplicationInfo", nullptr, (EPropertyFlags)0x0040000000200000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_ComponentSource, DuplicationInfo), Z_Construct_UScriptStruct_FOptimusNode_ComponentSource_DuplicationInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DuplicationInfo_MetaData), NewProp_DuplicationInfo_MetaData) }; // 3013338042
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusNode_ComponentSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_ComponentSource_Statics::NewProp_Binding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_ComponentSource_Statics::NewProp_DuplicationInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_ComponentSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusNode_ComponentSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusNode,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_ComponentSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOptimusNode_ComponentSource_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UOptimusComponentBindingProvider_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_ComponentSource, IOptimusComponentBindingProvider), false },  // 2322815117
	{ Z_Construct_UClass_UOptimusNonCollapsibleNode_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_ComponentSource, IOptimusNonCollapsibleNode), false },  // 335131968
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNode_ComponentSource_Statics::ClassParams = {
	&UOptimusNode_ComponentSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusNode_ComponentSource_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_ComponentSource_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x010000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_ComponentSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusNode_ComponentSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusNode_ComponentSource()
{
	if (!Z_Registration_Info_UClass_UOptimusNode_ComponentSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNode_ComponentSource.OuterSingleton, Z_Construct_UClass_UOptimusNode_ComponentSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusNode_ComponentSource.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNode_ComponentSource>()
{
	return UOptimusNode_ComponentSource::StaticClass();
}
UOptimusNode_ComponentSource::UOptimusNode_ComponentSource() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNode_ComponentSource);
UOptimusNode_ComponentSource::~UOptimusNode_ComponentSource() {}
// End Class UOptimusNode_ComponentSource

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ComponentSource_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOptimusNode_ComponentSource_DuplicationInfo::StaticStruct, Z_Construct_UScriptStruct_FOptimusNode_ComponentSource_DuplicationInfo_Statics::NewStructOps, TEXT("OptimusNode_ComponentSource_DuplicationInfo"), &Z_Registration_Info_UScriptStruct_OptimusNode_ComponentSource_DuplicationInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNode_ComponentSource_DuplicationInfo), 3013338042U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNode_ComponentSource, UOptimusNode_ComponentSource::StaticClass, TEXT("UOptimusNode_ComponentSource"), &Z_Registration_Info_UClass_UOptimusNode_ComponentSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNode_ComponentSource), 3790318475U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ComponentSource_h_830280191(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ComponentSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ComponentSource_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ComponentSource_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ComponentSource_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
