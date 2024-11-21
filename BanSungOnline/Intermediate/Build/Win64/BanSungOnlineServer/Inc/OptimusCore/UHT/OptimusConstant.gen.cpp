// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/OptimusConstant.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusConstant() {}

// Begin Cross Module References
OPTIMUSCORE_API UEnum* Z_Construct_UEnum_OptimusCore_EOptimusConstantType();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusConstant();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusConstantContainer();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusConstantDefinition();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusConstantIdentifier();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusConstantIndex();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusKernelConstantContainer();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin ScriptStruct FOptimusConstantIdentifier
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusConstantIdentifier;
class UScriptStruct* FOptimusConstantIdentifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusConstantIdentifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusConstantIdentifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusConstantIdentifier, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusConstantIdentifier"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusConstantIdentifier.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusConstantIdentifier>()
{
	return FOptimusConstantIdentifier::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusConstantIdentifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OptimusConstant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodePath_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusConstant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusConstant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstantName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusConstant.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NodePath;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ConstantName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusConstantIdentifier>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusConstantIdentifier_Statics::NewProp_NodePath = { "NodePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusConstantIdentifier, NodePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodePath_MetaData), NewProp_NodePath_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusConstantIdentifier_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusConstantIdentifier, GroupName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupName_MetaData), NewProp_GroupName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusConstantIdentifier_Statics::NewProp_ConstantName = { "ConstantName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusConstantIdentifier, ConstantName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstantName_MetaData), NewProp_ConstantName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusConstantIdentifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusConstantIdentifier_Statics::NewProp_NodePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusConstantIdentifier_Statics::NewProp_GroupName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusConstantIdentifier_Statics::NewProp_ConstantName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusConstantIdentifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusConstantIdentifier_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	&NewStructOps,
	"OptimusConstantIdentifier",
	Z_Construct_UScriptStruct_FOptimusConstantIdentifier_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusConstantIdentifier_Statics::PropPointers),
	sizeof(FOptimusConstantIdentifier),
	alignof(FOptimusConstantIdentifier),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusConstantIdentifier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusConstantIdentifier_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusConstantIdentifier()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusConstantIdentifier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusConstantIdentifier.InnerSingleton, Z_Construct_UScriptStruct_FOptimusConstantIdentifier_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusConstantIdentifier.InnerSingleton;
}
// End ScriptStruct FOptimusConstantIdentifier

// Begin ScriptStruct FOptimusConstantDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusConstantDefinition;
class UScriptStruct* FOptimusConstantDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusConstantDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusConstantDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusConstantDefinition, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusConstantDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusConstantDefinition.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusConstantDefinition>()
{
	return FOptimusConstantDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusConstantDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OptimusConstant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedConstant_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusConstant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Expression_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusConstant.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReferencedConstant;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Expression;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusConstantDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusConstantDefinition_Statics::NewProp_ReferencedConstant = { "ReferencedConstant", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusConstantDefinition, ReferencedConstant), Z_Construct_UScriptStruct_FOptimusConstantIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencedConstant_MetaData), NewProp_ReferencedConstant_MetaData) }; // 2694224425
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOptimusConstantDefinition_Statics::NewProp_Expression = { "Expression", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusConstantDefinition, Expression), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Expression_MetaData), NewProp_Expression_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusConstantDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusConstantDefinition_Statics::NewProp_ReferencedConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusConstantDefinition_Statics::NewProp_Expression,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusConstantDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusConstantDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	&NewStructOps,
	"OptimusConstantDefinition",
	Z_Construct_UScriptStruct_FOptimusConstantDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusConstantDefinition_Statics::PropPointers),
	sizeof(FOptimusConstantDefinition),
	alignof(FOptimusConstantDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusConstantDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusConstantDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusConstantDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusConstantDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusConstantDefinition.InnerSingleton, Z_Construct_UScriptStruct_FOptimusConstantDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusConstantDefinition.InnerSingleton;
}
// End ScriptStruct FOptimusConstantDefinition

// Begin Enum EOptimusConstantType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOptimusConstantType;
static UEnum* EOptimusConstantType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOptimusConstantType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOptimusConstantType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OptimusCore_EOptimusConstantType, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("EOptimusConstantType"));
	}
	return Z_Registration_Info_UEnum_EOptimusConstantType.OuterSingleton;
}
template<> OPTIMUSCORE_API UEnum* StaticEnum<EOptimusConstantType>()
{
	return EOptimusConstantType_StaticEnum();
}
struct Z_Construct_UEnum_OptimusCore_EOptimusConstantType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Input.Name", "EOptimusConstantType::Input" },
		{ "ModuleRelativePath", "Public/OptimusConstant.h" },
		{ "Output.Name", "EOptimusConstantType::Output" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOptimusConstantType::Input", (int64)EOptimusConstantType::Input },
		{ "EOptimusConstantType::Output", (int64)EOptimusConstantType::Output },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OptimusCore_EOptimusConstantType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	"EOptimusConstantType",
	"EOptimusConstantType",
	Z_Construct_UEnum_OptimusCore_EOptimusConstantType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusConstantType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusConstantType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OptimusCore_EOptimusConstantType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OptimusCore_EOptimusConstantType()
{
	if (!Z_Registration_Info_UEnum_EOptimusConstantType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOptimusConstantType.InnerSingleton, Z_Construct_UEnum_OptimusCore_EOptimusConstantType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOptimusConstantType.InnerSingleton;
}
// End Enum EOptimusConstantType

// Begin ScriptStruct FOptimusConstant
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusConstant;
class UScriptStruct* FOptimusConstant::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusConstant.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusConstant.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusConstant, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusConstant"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusConstant.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusConstant>()
{
	return FOptimusConstant::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusConstant_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OptimusConstant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusConstant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Definition_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusConstant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentBindingIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusConstant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusConstant.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Definition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ComponentBindingIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusConstant>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusConstant_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusConstant, Identifier), Z_Construct_UScriptStruct_FOptimusConstantIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Identifier_MetaData), NewProp_Identifier_MetaData) }; // 2694224425
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusConstant_Statics::NewProp_Definition = { "Definition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusConstant, Definition), Z_Construct_UScriptStruct_FOptimusConstantDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Definition_MetaData), NewProp_Definition_MetaData) }; // 733931392
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOptimusConstant_Statics::NewProp_ComponentBindingIndex = { "ComponentBindingIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusConstant, ComponentBindingIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentBindingIndex_MetaData), NewProp_ComponentBindingIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOptimusConstant_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOptimusConstant_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusConstant, Type), Z_Construct_UEnum_OptimusCore_EOptimusConstantType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 3068188759
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusConstant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusConstant_Statics::NewProp_Identifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusConstant_Statics::NewProp_Definition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusConstant_Statics::NewProp_ComponentBindingIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusConstant_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusConstant_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusConstant_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusConstant_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	&NewStructOps,
	"OptimusConstant",
	Z_Construct_UScriptStruct_FOptimusConstant_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusConstant_Statics::PropPointers),
	sizeof(FOptimusConstant),
	alignof(FOptimusConstant),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusConstant_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusConstant_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusConstant()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusConstant.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusConstant.InnerSingleton, Z_Construct_UScriptStruct_FOptimusConstant_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusConstant.InnerSingleton;
}
// End ScriptStruct FOptimusConstant

// Begin ScriptStruct FOptimusConstantIndex
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusConstantIndex;
class UScriptStruct* FOptimusConstantIndex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusConstantIndex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusConstantIndex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusConstantIndex, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusConstantIndex"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusConstantIndex.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusConstantIndex>()
{
	return FOptimusConstantIndex::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusConstantIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OptimusConstant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KernelIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusConstant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusConstant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstantIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusConstant.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_KernelIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConstantIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusConstantIndex>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOptimusConstantIndex_Statics::NewProp_KernelIndex = { "KernelIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusConstantIndex, KernelIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KernelIndex_MetaData), NewProp_KernelIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOptimusConstantIndex_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOptimusConstantIndex_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusConstantIndex, Type), Z_Construct_UEnum_OptimusCore_EOptimusConstantType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 3068188759
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOptimusConstantIndex_Statics::NewProp_ConstantIndex = { "ConstantIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusConstantIndex, ConstantIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstantIndex_MetaData), NewProp_ConstantIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusConstantIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusConstantIndex_Statics::NewProp_KernelIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusConstantIndex_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusConstantIndex_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusConstantIndex_Statics::NewProp_ConstantIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusConstantIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusConstantIndex_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	&NewStructOps,
	"OptimusConstantIndex",
	Z_Construct_UScriptStruct_FOptimusConstantIndex_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusConstantIndex_Statics::PropPointers),
	sizeof(FOptimusConstantIndex),
	alignof(FOptimusConstantIndex),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusConstantIndex_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusConstantIndex_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusConstantIndex()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusConstantIndex.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusConstantIndex.InnerSingleton, Z_Construct_UScriptStruct_FOptimusConstantIndex_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusConstantIndex.InnerSingleton;
}
// End ScriptStruct FOptimusConstantIndex

// Begin ScriptStruct FOptimusKernelConstantContainer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusKernelConstantContainer;
class UScriptStruct* FOptimusKernelConstantContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusKernelConstantContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusKernelConstantContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusKernelConstantContainer, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusKernelConstantContainer"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusKernelConstantContainer.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusKernelConstantContainer>()
{
	return FOptimusKernelConstantContainer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusKernelConstantContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OptimusConstant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputConstants_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusConstant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputConstants_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusConstant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupNameToBindingIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusConstant.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputConstants_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputConstants;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputConstants_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputConstants;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GroupNameToBindingIndex_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GroupNameToBindingIndex_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GroupNameToBindingIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusKernelConstantContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusKernelConstantContainer_Statics::NewProp_InputConstants_Inner = { "InputConstants", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOptimusConstant, METADATA_PARAMS(0, nullptr) }; // 611911579
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOptimusKernelConstantContainer_Statics::NewProp_InputConstants = { "InputConstants", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusKernelConstantContainer, InputConstants), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputConstants_MetaData), NewProp_InputConstants_MetaData) }; // 611911579
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusKernelConstantContainer_Statics::NewProp_OutputConstants_Inner = { "OutputConstants", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOptimusConstant, METADATA_PARAMS(0, nullptr) }; // 611911579
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOptimusKernelConstantContainer_Statics::NewProp_OutputConstants = { "OutputConstants", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusKernelConstantContainer, OutputConstants), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputConstants_MetaData), NewProp_OutputConstants_MetaData) }; // 611911579
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOptimusKernelConstantContainer_Statics::NewProp_GroupNameToBindingIndex_ValueProp = { "GroupNameToBindingIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusKernelConstantContainer_Statics::NewProp_GroupNameToBindingIndex_Key_KeyProp = { "GroupNameToBindingIndex_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FOptimusKernelConstantContainer_Statics::NewProp_GroupNameToBindingIndex = { "GroupNameToBindingIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusKernelConstantContainer, GroupNameToBindingIndex), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupNameToBindingIndex_MetaData), NewProp_GroupNameToBindingIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusKernelConstantContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusKernelConstantContainer_Statics::NewProp_InputConstants_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusKernelConstantContainer_Statics::NewProp_InputConstants,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusKernelConstantContainer_Statics::NewProp_OutputConstants_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusKernelConstantContainer_Statics::NewProp_OutputConstants,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusKernelConstantContainer_Statics::NewProp_GroupNameToBindingIndex_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusKernelConstantContainer_Statics::NewProp_GroupNameToBindingIndex_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusKernelConstantContainer_Statics::NewProp_GroupNameToBindingIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusKernelConstantContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusKernelConstantContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	&NewStructOps,
	"OptimusKernelConstantContainer",
	Z_Construct_UScriptStruct_FOptimusKernelConstantContainer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusKernelConstantContainer_Statics::PropPointers),
	sizeof(FOptimusKernelConstantContainer),
	alignof(FOptimusKernelConstantContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusKernelConstantContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusKernelConstantContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusKernelConstantContainer()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusKernelConstantContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusKernelConstantContainer.InnerSingleton, Z_Construct_UScriptStruct_FOptimusKernelConstantContainer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusKernelConstantContainer.InnerSingleton;
}
// End ScriptStruct FOptimusKernelConstantContainer

// Begin ScriptStruct FOptimusConstantContainer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusConstantContainer;
class UScriptStruct* FOptimusConstantContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusConstantContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusConstantContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusConstantContainer, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusConstantContainer"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusConstantContainer.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusConstantContainer>()
{
	return FOptimusConstantContainer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusConstantContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OptimusConstant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KernelContainers_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusConstant.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_KernelContainers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_KernelContainers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusConstantContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusConstantContainer_Statics::NewProp_KernelContainers_Inner = { "KernelContainers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOptimusKernelConstantContainer, METADATA_PARAMS(0, nullptr) }; // 3620194076
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOptimusConstantContainer_Statics::NewProp_KernelContainers = { "KernelContainers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusConstantContainer, KernelContainers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KernelContainers_MetaData), NewProp_KernelContainers_MetaData) }; // 3620194076
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusConstantContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusConstantContainer_Statics::NewProp_KernelContainers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusConstantContainer_Statics::NewProp_KernelContainers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusConstantContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusConstantContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	&NewStructOps,
	"OptimusConstantContainer",
	Z_Construct_UScriptStruct_FOptimusConstantContainer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusConstantContainer_Statics::PropPointers),
	sizeof(FOptimusConstantContainer),
	alignof(FOptimusConstantContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusConstantContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusConstantContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusConstantContainer()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusConstantContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusConstantContainer.InnerSingleton, Z_Construct_UScriptStruct_FOptimusConstantContainer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusConstantContainer.InnerSingleton;
}
// End ScriptStruct FOptimusConstantContainer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusConstant_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOptimusConstantType_StaticEnum, TEXT("EOptimusConstantType"), &Z_Registration_Info_UEnum_EOptimusConstantType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3068188759U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOptimusConstantIdentifier::StaticStruct, Z_Construct_UScriptStruct_FOptimusConstantIdentifier_Statics::NewStructOps, TEXT("OptimusConstantIdentifier"), &Z_Registration_Info_UScriptStruct_OptimusConstantIdentifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusConstantIdentifier), 2694224425U) },
		{ FOptimusConstantDefinition::StaticStruct, Z_Construct_UScriptStruct_FOptimusConstantDefinition_Statics::NewStructOps, TEXT("OptimusConstantDefinition"), &Z_Registration_Info_UScriptStruct_OptimusConstantDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusConstantDefinition), 733931392U) },
		{ FOptimusConstant::StaticStruct, Z_Construct_UScriptStruct_FOptimusConstant_Statics::NewStructOps, TEXT("OptimusConstant"), &Z_Registration_Info_UScriptStruct_OptimusConstant, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusConstant), 611911579U) },
		{ FOptimusConstantIndex::StaticStruct, Z_Construct_UScriptStruct_FOptimusConstantIndex_Statics::NewStructOps, TEXT("OptimusConstantIndex"), &Z_Registration_Info_UScriptStruct_OptimusConstantIndex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusConstantIndex), 3900972138U) },
		{ FOptimusKernelConstantContainer::StaticStruct, Z_Construct_UScriptStruct_FOptimusKernelConstantContainer_Statics::NewStructOps, TEXT("OptimusKernelConstantContainer"), &Z_Registration_Info_UScriptStruct_OptimusKernelConstantContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusKernelConstantContainer), 3620194076U) },
		{ FOptimusConstantContainer::StaticStruct, Z_Construct_UScriptStruct_FOptimusConstantContainer_Statics::NewStructOps, TEXT("OptimusConstantContainer"), &Z_Registration_Info_UScriptStruct_OptimusConstantContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusConstantContainer), 14968000U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusConstant_h_4046153255(TEXT("/Script/OptimusCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusConstant_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusConstant_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusConstant_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusConstant_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
