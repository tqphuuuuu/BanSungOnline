// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeModule/Private/PropertyFunctions/StateTreeIntPropertyFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeIntPropertyFunctions() {}

// Begin Cross Module References
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeAbsoluteIntPropertyFunction();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeAddIntPropertyFunction();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeDivideIntPropertyFunction();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeIntCombinaisonPropertyFunctionInstanceData();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeInvertIntPropertyFunction();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeMultiplyIntPropertyFunction();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyFunctionCommonBase();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeSingleIntPropertyFunctionInstanceData();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeSubtractIntPropertyFunction();
UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References

// Begin ScriptStruct FStateTreeIntCombinaisonPropertyFunctionInstanceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeIntCombinaisonPropertyFunctionInstanceData;
class UScriptStruct* FStateTreeIntCombinaisonPropertyFunctionInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeIntCombinaisonPropertyFunctionInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeIntCombinaisonPropertyFunctionInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeIntCombinaisonPropertyFunctionInstanceData, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeIntCombinaisonPropertyFunctionInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeIntCombinaisonPropertyFunctionInstanceData.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeIntCombinaisonPropertyFunctionInstanceData>()
{
	return FStateTreeIntCombinaisonPropertyFunctionInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeIntCombinaisonPropertyFunctionInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PropertyFunctions/StateTreeIntPropertyFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/PropertyFunctions/StateTreeIntPropertyFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/PropertyFunctions/StateTreeIntPropertyFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Private/PropertyFunctions/StateTreeIntPropertyFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Left;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Right;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeIntCombinaisonPropertyFunctionInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStateTreeIntCombinaisonPropertyFunctionInstanceData_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeIntCombinaisonPropertyFunctionInstanceData, Left), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Left_MetaData), NewProp_Left_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStateTreeIntCombinaisonPropertyFunctionInstanceData_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeIntCombinaisonPropertyFunctionInstanceData, Right), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Right_MetaData), NewProp_Right_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStateTreeIntCombinaisonPropertyFunctionInstanceData_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeIntCombinaisonPropertyFunctionInstanceData, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeIntCombinaisonPropertyFunctionInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeIntCombinaisonPropertyFunctionInstanceData_Statics::NewProp_Left,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeIntCombinaisonPropertyFunctionInstanceData_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeIntCombinaisonPropertyFunctionInstanceData_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeIntCombinaisonPropertyFunctionInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeIntCombinaisonPropertyFunctionInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeIntCombinaisonPropertyFunctionInstanceData",
	Z_Construct_UScriptStruct_FStateTreeIntCombinaisonPropertyFunctionInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeIntCombinaisonPropertyFunctionInstanceData_Statics::PropPointers),
	sizeof(FStateTreeIntCombinaisonPropertyFunctionInstanceData),
	alignof(FStateTreeIntCombinaisonPropertyFunctionInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeIntCombinaisonPropertyFunctionInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeIntCombinaisonPropertyFunctionInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeIntCombinaisonPropertyFunctionInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeIntCombinaisonPropertyFunctionInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeIntCombinaisonPropertyFunctionInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeIntCombinaisonPropertyFunctionInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeIntCombinaisonPropertyFunctionInstanceData.InnerSingleton;
}
// End ScriptStruct FStateTreeIntCombinaisonPropertyFunctionInstanceData

// Begin ScriptStruct FStateTreeAddIntPropertyFunction
static_assert(std::is_polymorphic<FStateTreeAddIntPropertyFunction>() == std::is_polymorphic<FStateTreePropertyFunctionCommonBase>(), "USTRUCT FStateTreeAddIntPropertyFunction cannot be polymorphic unless super FStateTreePropertyFunctionCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeAddIntPropertyFunction;
class UScriptStruct* FStateTreeAddIntPropertyFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeAddIntPropertyFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeAddIntPropertyFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeAddIntPropertyFunction, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeAddIntPropertyFunction"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeAddIntPropertyFunction.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeAddIntPropertyFunction>()
{
	return FStateTreeAddIntPropertyFunction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeAddIntPropertyFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Math|Integer" },
		{ "Comment", "/**\n * Add two ints.\n */" },
		{ "DisplayName", "Add" },
		{ "ModuleRelativePath", "Private/PropertyFunctions/StateTreeIntPropertyFunctions.h" },
		{ "ToolTip", "Add two ints." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeAddIntPropertyFunction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeAddIntPropertyFunction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	Z_Construct_UScriptStruct_FStateTreePropertyFunctionCommonBase,
	&NewStructOps,
	"StateTreeAddIntPropertyFunction",
	nullptr,
	0,
	sizeof(FStateTreeAddIntPropertyFunction),
	alignof(FStateTreeAddIntPropertyFunction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeAddIntPropertyFunction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeAddIntPropertyFunction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeAddIntPropertyFunction()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeAddIntPropertyFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeAddIntPropertyFunction.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeAddIntPropertyFunction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeAddIntPropertyFunction.InnerSingleton;
}
// End ScriptStruct FStateTreeAddIntPropertyFunction

// Begin ScriptStruct FStateTreeSubtractIntPropertyFunction
static_assert(std::is_polymorphic<FStateTreeSubtractIntPropertyFunction>() == std::is_polymorphic<FStateTreePropertyFunctionCommonBase>(), "USTRUCT FStateTreeSubtractIntPropertyFunction cannot be polymorphic unless super FStateTreePropertyFunctionCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeSubtractIntPropertyFunction;
class UScriptStruct* FStateTreeSubtractIntPropertyFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeSubtractIntPropertyFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeSubtractIntPropertyFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeSubtractIntPropertyFunction, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeSubtractIntPropertyFunction"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeSubtractIntPropertyFunction.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeSubtractIntPropertyFunction>()
{
	return FStateTreeSubtractIntPropertyFunction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeSubtractIntPropertyFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Math|Integer" },
		{ "Comment", "/**\n * Subtract right int from left int.\n */" },
		{ "DisplayName", "Subtract" },
		{ "ModuleRelativePath", "Private/PropertyFunctions/StateTreeIntPropertyFunctions.h" },
		{ "ToolTip", "Subtract right int from left int." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeSubtractIntPropertyFunction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeSubtractIntPropertyFunction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	Z_Construct_UScriptStruct_FStateTreePropertyFunctionCommonBase,
	&NewStructOps,
	"StateTreeSubtractIntPropertyFunction",
	nullptr,
	0,
	sizeof(FStateTreeSubtractIntPropertyFunction),
	alignof(FStateTreeSubtractIntPropertyFunction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeSubtractIntPropertyFunction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeSubtractIntPropertyFunction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeSubtractIntPropertyFunction()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeSubtractIntPropertyFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeSubtractIntPropertyFunction.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeSubtractIntPropertyFunction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeSubtractIntPropertyFunction.InnerSingleton;
}
// End ScriptStruct FStateTreeSubtractIntPropertyFunction

// Begin ScriptStruct FStateTreeMultiplyIntPropertyFunction
static_assert(std::is_polymorphic<FStateTreeMultiplyIntPropertyFunction>() == std::is_polymorphic<FStateTreePropertyFunctionCommonBase>(), "USTRUCT FStateTreeMultiplyIntPropertyFunction cannot be polymorphic unless super FStateTreePropertyFunctionCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeMultiplyIntPropertyFunction;
class UScriptStruct* FStateTreeMultiplyIntPropertyFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeMultiplyIntPropertyFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeMultiplyIntPropertyFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeMultiplyIntPropertyFunction, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeMultiplyIntPropertyFunction"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeMultiplyIntPropertyFunction.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeMultiplyIntPropertyFunction>()
{
	return FStateTreeMultiplyIntPropertyFunction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeMultiplyIntPropertyFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Math|Integer" },
		{ "Comment", "/**\n * Multiply the two given ints.\n */" },
		{ "DisplayName", "Multiply" },
		{ "ModuleRelativePath", "Private/PropertyFunctions/StateTreeIntPropertyFunctions.h" },
		{ "ToolTip", "Multiply the two given ints." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeMultiplyIntPropertyFunction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeMultiplyIntPropertyFunction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	Z_Construct_UScriptStruct_FStateTreePropertyFunctionCommonBase,
	&NewStructOps,
	"StateTreeMultiplyIntPropertyFunction",
	nullptr,
	0,
	sizeof(FStateTreeMultiplyIntPropertyFunction),
	alignof(FStateTreeMultiplyIntPropertyFunction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeMultiplyIntPropertyFunction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeMultiplyIntPropertyFunction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeMultiplyIntPropertyFunction()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeMultiplyIntPropertyFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeMultiplyIntPropertyFunction.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeMultiplyIntPropertyFunction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeMultiplyIntPropertyFunction.InnerSingleton;
}
// End ScriptStruct FStateTreeMultiplyIntPropertyFunction

// Begin ScriptStruct FStateTreeDivideIntPropertyFunction
static_assert(std::is_polymorphic<FStateTreeDivideIntPropertyFunction>() == std::is_polymorphic<FStateTreePropertyFunctionCommonBase>(), "USTRUCT FStateTreeDivideIntPropertyFunction cannot be polymorphic unless super FStateTreePropertyFunctionCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeDivideIntPropertyFunction;
class UScriptStruct* FStateTreeDivideIntPropertyFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeDivideIntPropertyFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeDivideIntPropertyFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeDivideIntPropertyFunction, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeDivideIntPropertyFunction"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeDivideIntPropertyFunction.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeDivideIntPropertyFunction>()
{
	return FStateTreeDivideIntPropertyFunction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeDivideIntPropertyFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Math|Integer" },
		{ "Comment", "/**\n * Divide left int by right int.\n */" },
		{ "DisplayName", "Divide" },
		{ "ModuleRelativePath", "Private/PropertyFunctions/StateTreeIntPropertyFunctions.h" },
		{ "ToolTip", "Divide left int by right int." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeDivideIntPropertyFunction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeDivideIntPropertyFunction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	Z_Construct_UScriptStruct_FStateTreePropertyFunctionCommonBase,
	&NewStructOps,
	"StateTreeDivideIntPropertyFunction",
	nullptr,
	0,
	sizeof(FStateTreeDivideIntPropertyFunction),
	alignof(FStateTreeDivideIntPropertyFunction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeDivideIntPropertyFunction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeDivideIntPropertyFunction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeDivideIntPropertyFunction()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeDivideIntPropertyFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeDivideIntPropertyFunction.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeDivideIntPropertyFunction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeDivideIntPropertyFunction.InnerSingleton;
}
// End ScriptStruct FStateTreeDivideIntPropertyFunction

// Begin ScriptStruct FStateTreeSingleIntPropertyFunctionInstanceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeSingleIntPropertyFunctionInstanceData;
class UScriptStruct* FStateTreeSingleIntPropertyFunctionInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeSingleIntPropertyFunctionInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeSingleIntPropertyFunctionInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeSingleIntPropertyFunctionInstanceData, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeSingleIntPropertyFunctionInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeSingleIntPropertyFunctionInstanceData.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeSingleIntPropertyFunctionInstanceData>()
{
	return FStateTreeSingleIntPropertyFunctionInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeSingleIntPropertyFunctionInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PropertyFunctions/StateTreeIntPropertyFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/PropertyFunctions/StateTreeIntPropertyFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Private/PropertyFunctions/StateTreeIntPropertyFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Input;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeSingleIntPropertyFunctionInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStateTreeSingleIntPropertyFunctionInstanceData_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeSingleIntPropertyFunctionInstanceData, Input), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStateTreeSingleIntPropertyFunctionInstanceData_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeSingleIntPropertyFunctionInstanceData, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeSingleIntPropertyFunctionInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeSingleIntPropertyFunctionInstanceData_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeSingleIntPropertyFunctionInstanceData_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeSingleIntPropertyFunctionInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeSingleIntPropertyFunctionInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeSingleIntPropertyFunctionInstanceData",
	Z_Construct_UScriptStruct_FStateTreeSingleIntPropertyFunctionInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeSingleIntPropertyFunctionInstanceData_Statics::PropPointers),
	sizeof(FStateTreeSingleIntPropertyFunctionInstanceData),
	alignof(FStateTreeSingleIntPropertyFunctionInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeSingleIntPropertyFunctionInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeSingleIntPropertyFunctionInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeSingleIntPropertyFunctionInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeSingleIntPropertyFunctionInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeSingleIntPropertyFunctionInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeSingleIntPropertyFunctionInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeSingleIntPropertyFunctionInstanceData.InnerSingleton;
}
// End ScriptStruct FStateTreeSingleIntPropertyFunctionInstanceData

// Begin ScriptStruct FStateTreeInvertIntPropertyFunction
static_assert(std::is_polymorphic<FStateTreeInvertIntPropertyFunction>() == std::is_polymorphic<FStateTreePropertyFunctionCommonBase>(), "USTRUCT FStateTreeInvertIntPropertyFunction cannot be polymorphic unless super FStateTreePropertyFunctionCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeInvertIntPropertyFunction;
class UScriptStruct* FStateTreeInvertIntPropertyFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeInvertIntPropertyFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeInvertIntPropertyFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeInvertIntPropertyFunction, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeInvertIntPropertyFunction"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeInvertIntPropertyFunction.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeInvertIntPropertyFunction>()
{
	return FStateTreeInvertIntPropertyFunction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeInvertIntPropertyFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Math|Integer" },
		{ "Comment", "/**\n * Invert the given int.\n */" },
		{ "DisplayName", "Invert" },
		{ "ModuleRelativePath", "Private/PropertyFunctions/StateTreeIntPropertyFunctions.h" },
		{ "ToolTip", "Invert the given int." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeInvertIntPropertyFunction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeInvertIntPropertyFunction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	Z_Construct_UScriptStruct_FStateTreePropertyFunctionCommonBase,
	&NewStructOps,
	"StateTreeInvertIntPropertyFunction",
	nullptr,
	0,
	sizeof(FStateTreeInvertIntPropertyFunction),
	alignof(FStateTreeInvertIntPropertyFunction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeInvertIntPropertyFunction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeInvertIntPropertyFunction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeInvertIntPropertyFunction()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeInvertIntPropertyFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeInvertIntPropertyFunction.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeInvertIntPropertyFunction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeInvertIntPropertyFunction.InnerSingleton;
}
// End ScriptStruct FStateTreeInvertIntPropertyFunction

// Begin ScriptStruct FStateTreeAbsoluteIntPropertyFunction
static_assert(std::is_polymorphic<FStateTreeAbsoluteIntPropertyFunction>() == std::is_polymorphic<FStateTreePropertyFunctionCommonBase>(), "USTRUCT FStateTreeAbsoluteIntPropertyFunction cannot be polymorphic unless super FStateTreePropertyFunctionCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeAbsoluteIntPropertyFunction;
class UScriptStruct* FStateTreeAbsoluteIntPropertyFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeAbsoluteIntPropertyFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeAbsoluteIntPropertyFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeAbsoluteIntPropertyFunction, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeAbsoluteIntPropertyFunction"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeAbsoluteIntPropertyFunction.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeAbsoluteIntPropertyFunction>()
{
	return FStateTreeAbsoluteIntPropertyFunction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeAbsoluteIntPropertyFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Math|Integer" },
		{ "Comment", "/**\n * Gives the absolute value of the given int.\n */" },
		{ "DisplayName", "Absolute" },
		{ "ModuleRelativePath", "Private/PropertyFunctions/StateTreeIntPropertyFunctions.h" },
		{ "ToolTip", "Gives the absolute value of the given int." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeAbsoluteIntPropertyFunction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeAbsoluteIntPropertyFunction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	Z_Construct_UScriptStruct_FStateTreePropertyFunctionCommonBase,
	&NewStructOps,
	"StateTreeAbsoluteIntPropertyFunction",
	nullptr,
	0,
	sizeof(FStateTreeAbsoluteIntPropertyFunction),
	alignof(FStateTreeAbsoluteIntPropertyFunction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeAbsoluteIntPropertyFunction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeAbsoluteIntPropertyFunction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeAbsoluteIntPropertyFunction()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeAbsoluteIntPropertyFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeAbsoluteIntPropertyFunction.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeAbsoluteIntPropertyFunction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeAbsoluteIntPropertyFunction.InnerSingleton;
}
// End ScriptStruct FStateTreeAbsoluteIntPropertyFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Private_PropertyFunctions_StateTreeIntPropertyFunctions_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStateTreeIntCombinaisonPropertyFunctionInstanceData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeIntCombinaisonPropertyFunctionInstanceData_Statics::NewStructOps, TEXT("StateTreeIntCombinaisonPropertyFunctionInstanceData"), &Z_Registration_Info_UScriptStruct_StateTreeIntCombinaisonPropertyFunctionInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeIntCombinaisonPropertyFunctionInstanceData), 2003756729U) },
		{ FStateTreeAddIntPropertyFunction::StaticStruct, Z_Construct_UScriptStruct_FStateTreeAddIntPropertyFunction_Statics::NewStructOps, TEXT("StateTreeAddIntPropertyFunction"), &Z_Registration_Info_UScriptStruct_StateTreeAddIntPropertyFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeAddIntPropertyFunction), 2049208101U) },
		{ FStateTreeSubtractIntPropertyFunction::StaticStruct, Z_Construct_UScriptStruct_FStateTreeSubtractIntPropertyFunction_Statics::NewStructOps, TEXT("StateTreeSubtractIntPropertyFunction"), &Z_Registration_Info_UScriptStruct_StateTreeSubtractIntPropertyFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeSubtractIntPropertyFunction), 2931070880U) },
		{ FStateTreeMultiplyIntPropertyFunction::StaticStruct, Z_Construct_UScriptStruct_FStateTreeMultiplyIntPropertyFunction_Statics::NewStructOps, TEXT("StateTreeMultiplyIntPropertyFunction"), &Z_Registration_Info_UScriptStruct_StateTreeMultiplyIntPropertyFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeMultiplyIntPropertyFunction), 4275480451U) },
		{ FStateTreeDivideIntPropertyFunction::StaticStruct, Z_Construct_UScriptStruct_FStateTreeDivideIntPropertyFunction_Statics::NewStructOps, TEXT("StateTreeDivideIntPropertyFunction"), &Z_Registration_Info_UScriptStruct_StateTreeDivideIntPropertyFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeDivideIntPropertyFunction), 2087846363U) },
		{ FStateTreeSingleIntPropertyFunctionInstanceData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeSingleIntPropertyFunctionInstanceData_Statics::NewStructOps, TEXT("StateTreeSingleIntPropertyFunctionInstanceData"), &Z_Registration_Info_UScriptStruct_StateTreeSingleIntPropertyFunctionInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeSingleIntPropertyFunctionInstanceData), 957902091U) },
		{ FStateTreeInvertIntPropertyFunction::StaticStruct, Z_Construct_UScriptStruct_FStateTreeInvertIntPropertyFunction_Statics::NewStructOps, TEXT("StateTreeInvertIntPropertyFunction"), &Z_Registration_Info_UScriptStruct_StateTreeInvertIntPropertyFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeInvertIntPropertyFunction), 4293089239U) },
		{ FStateTreeAbsoluteIntPropertyFunction::StaticStruct, Z_Construct_UScriptStruct_FStateTreeAbsoluteIntPropertyFunction_Statics::NewStructOps, TEXT("StateTreeAbsoluteIntPropertyFunction"), &Z_Registration_Info_UScriptStruct_StateTreeAbsoluteIntPropertyFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeAbsoluteIntPropertyFunction), 3739800328U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Private_PropertyFunctions_StateTreeIntPropertyFunctions_h_741474766(TEXT("/Script/StateTreeModule"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Private_PropertyFunctions_StateTreeIntPropertyFunctions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Private_PropertyFunctions_StateTreeIntPropertyFunctions_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
