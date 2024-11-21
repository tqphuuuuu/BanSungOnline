// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Private/Nodes/OptimusNode_GraphTerminal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNode_GraphTerminal() {}

// Begin Cross Module References
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusAlternativeSelectedObjectProvider_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_GraphTerminal();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_GraphTerminal_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodePin_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodePinRouter_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNonCollapsibleNode_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNonCopyableNode_NoRegister();
OPTIMUSCORE_API UEnum* Z_Construct_UEnum_OptimusCore_EOptimusTerminalType();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Enum EOptimusTerminalType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOptimusTerminalType;
static UEnum* EOptimusTerminalType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOptimusTerminalType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOptimusTerminalType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OptimusCore_EOptimusTerminalType, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("EOptimusTerminalType"));
	}
	return Z_Registration_Info_UEnum_EOptimusTerminalType.OuterSingleton;
}
template<> OPTIMUSCORE_API UEnum* StaticEnum<EOptimusTerminalType>()
{
	return EOptimusTerminalType_StaticEnum();
}
struct Z_Construct_UEnum_OptimusCore_EOptimusTerminalType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Entry.Name", "EOptimusTerminalType::Entry" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_GraphTerminal.h" },
		{ "Return.Name", "EOptimusTerminalType::Return" },
		{ "Unknown.Name", "EOptimusTerminalType::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOptimusTerminalType::Unknown", (int64)EOptimusTerminalType::Unknown },
		{ "EOptimusTerminalType::Entry", (int64)EOptimusTerminalType::Entry },
		{ "EOptimusTerminalType::Return", (int64)EOptimusTerminalType::Return },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OptimusCore_EOptimusTerminalType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	"EOptimusTerminalType",
	"EOptimusTerminalType",
	Z_Construct_UEnum_OptimusCore_EOptimusTerminalType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusTerminalType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusTerminalType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OptimusCore_EOptimusTerminalType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OptimusCore_EOptimusTerminalType()
{
	if (!Z_Registration_Info_UEnum_EOptimusTerminalType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOptimusTerminalType.InnerSingleton, Z_Construct_UEnum_OptimusCore_EOptimusTerminalType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOptimusTerminalType.InnerSingleton;
}
// End Enum EOptimusTerminalType

// Begin Class UOptimusNode_GraphTerminal
void UOptimusNode_GraphTerminal::StaticRegisterNativesUOptimusNode_GraphTerminal()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNode_GraphTerminal);
UClass* Z_Construct_UClass_UOptimusNode_GraphTerminal_NoRegister()
{
	return UOptimusNode_GraphTerminal::StaticClass();
}
struct Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/OptimusNode_GraphTerminal.h" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_GraphTerminal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TerminalType_MetaData[] = {
		{ "Comment", "/** Indicates whether this is an entry or a return terminal node */" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_GraphTerminal.h" },
		{ "ToolTip", "Indicates whether this is an entry or a return terminal node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultComponentPin_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_GraphTerminal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TerminalType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TerminalType;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_DefaultComponentPin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNode_GraphTerminal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::NewProp_TerminalType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::NewProp_TerminalType = { "TerminalType", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_GraphTerminal, TerminalType), Z_Construct_UEnum_OptimusCore_EOptimusTerminalType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TerminalType_MetaData), NewProp_TerminalType_MetaData) }; // 4162058696
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::NewProp_DefaultComponentPin = { "DefaultComponentPin", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_GraphTerminal, DefaultComponentPin), Z_Construct_UClass_UOptimusNodePin_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultComponentPin_MetaData), NewProp_DefaultComponentPin_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::NewProp_TerminalType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::NewProp_TerminalType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::NewProp_DefaultComponentPin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusNode,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UOptimusNodePinRouter_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_GraphTerminal, IOptimusNodePinRouter), false },  // 1815845889
	{ Z_Construct_UClass_UOptimusAlternativeSelectedObjectProvider_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_GraphTerminal, IOptimusAlternativeSelectedObjectProvider), false },  // 1902408556
	{ Z_Construct_UClass_UOptimusNonCollapsibleNode_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_GraphTerminal, IOptimusNonCollapsibleNode), false },  // 335131968
	{ Z_Construct_UClass_UOptimusNonCopyableNode_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_GraphTerminal, IOptimusNonCopyableNode), false },  // 2138744222
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::ClassParams = {
	&UOptimusNode_GraphTerminal::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x010000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusNode_GraphTerminal()
{
	if (!Z_Registration_Info_UClass_UOptimusNode_GraphTerminal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNode_GraphTerminal.OuterSingleton, Z_Construct_UClass_UOptimusNode_GraphTerminal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusNode_GraphTerminal.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNode_GraphTerminal>()
{
	return UOptimusNode_GraphTerminal::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNode_GraphTerminal);
UOptimusNode_GraphTerminal::~UOptimusNode_GraphTerminal() {}
// End Class UOptimusNode_GraphTerminal

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GraphTerminal_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOptimusTerminalType_StaticEnum, TEXT("EOptimusTerminalType"), &Z_Registration_Info_UEnum_EOptimusTerminalType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4162058696U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNode_GraphTerminal, UOptimusNode_GraphTerminal::StaticClass, TEXT("UOptimusNode_GraphTerminal"), &Z_Registration_Info_UClass_UOptimusNode_GraphTerminal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNode_GraphTerminal), 3267832912U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GraphTerminal_h_333467955(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GraphTerminal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GraphTerminal_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GraphTerminal_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GraphTerminal_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
