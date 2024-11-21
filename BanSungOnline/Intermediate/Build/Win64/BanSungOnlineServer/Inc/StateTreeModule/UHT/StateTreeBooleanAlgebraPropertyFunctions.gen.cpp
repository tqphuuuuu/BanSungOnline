// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeModule/Private/PropertyFunctions/StateTreeBooleanAlgebraPropertyFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeBooleanAlgebraPropertyFunctions() {}

// Begin Cross Module References
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeBooleanAndPropertyFunction();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeBooleanNotOperationPropertyFunctionInstanceData();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeBooleanNotPropertyFunction();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeBooleanOrPropertyFunction();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeBooleanXOrPropertyFunction();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyFunctionCommonBase();
UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References

// Begin ScriptStruct FStateTreeBooleanOperationPropertyFunctionInstanceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeBooleanOperationPropertyFunctionInstanceData;
class UScriptStruct* FStateTreeBooleanOperationPropertyFunctionInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeBooleanOperationPropertyFunctionInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeBooleanOperationPropertyFunctionInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeBooleanOperationPropertyFunctionInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeBooleanOperationPropertyFunctionInstanceData.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeBooleanOperationPropertyFunctionInstanceData>()
{
	return FStateTreeBooleanOperationPropertyFunctionInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PropertyFunctions/StateTreeBooleanAlgebraPropertyFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLeft_MetaData[] = {
		{ "Category", "Param" },
		{ "ModuleRelativePath", "Private/PropertyFunctions/StateTreeBooleanAlgebraPropertyFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRight_MetaData[] = {
		{ "Category", "Param" },
		{ "ModuleRelativePath", "Private/PropertyFunctions/StateTreeBooleanAlgebraPropertyFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResult_MetaData[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Private/PropertyFunctions/StateTreeBooleanAlgebraPropertyFunctions.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bLeft_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeft;
	static void NewProp_bRight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRight;
	static void NewProp_bResult_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeBooleanOperationPropertyFunctionInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData_Statics::NewProp_bLeft_SetBit(void* Obj)
{
	((FStateTreeBooleanOperationPropertyFunctionInstanceData*)Obj)->bLeft = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData_Statics::NewProp_bLeft = { "bLeft", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStateTreeBooleanOperationPropertyFunctionInstanceData), &Z_Construct_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData_Statics::NewProp_bLeft_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLeft_MetaData), NewProp_bLeft_MetaData) };
void Z_Construct_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData_Statics::NewProp_bRight_SetBit(void* Obj)
{
	((FStateTreeBooleanOperationPropertyFunctionInstanceData*)Obj)->bRight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData_Statics::NewProp_bRight = { "bRight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStateTreeBooleanOperationPropertyFunctionInstanceData), &Z_Construct_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData_Statics::NewProp_bRight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRight_MetaData), NewProp_bRight_MetaData) };
void Z_Construct_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData_Statics::NewProp_bResult_SetBit(void* Obj)
{
	((FStateTreeBooleanOperationPropertyFunctionInstanceData*)Obj)->bResult = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData_Statics::NewProp_bResult = { "bResult", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStateTreeBooleanOperationPropertyFunctionInstanceData), &Z_Construct_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData_Statics::NewProp_bResult_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResult_MetaData), NewProp_bResult_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData_Statics::NewProp_bLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData_Statics::NewProp_bRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData_Statics::NewProp_bResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeBooleanOperationPropertyFunctionInstanceData",
	Z_Construct_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData_Statics::PropPointers),
	sizeof(FStateTreeBooleanOperationPropertyFunctionInstanceData),
	alignof(FStateTreeBooleanOperationPropertyFunctionInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeBooleanOperationPropertyFunctionInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeBooleanOperationPropertyFunctionInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeBooleanOperationPropertyFunctionInstanceData.InnerSingleton;
}
// End ScriptStruct FStateTreeBooleanOperationPropertyFunctionInstanceData

// Begin ScriptStruct FStateTreeBooleanAndPropertyFunction
static_assert(std::is_polymorphic<FStateTreeBooleanAndPropertyFunction>() == std::is_polymorphic<FStateTreePropertyFunctionCommonBase>(), "USTRUCT FStateTreeBooleanAndPropertyFunction cannot be polymorphic unless super FStateTreePropertyFunctionCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeBooleanAndPropertyFunction;
class UScriptStruct* FStateTreeBooleanAndPropertyFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeBooleanAndPropertyFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeBooleanAndPropertyFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeBooleanAndPropertyFunction, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeBooleanAndPropertyFunction"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeBooleanAndPropertyFunction.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeBooleanAndPropertyFunction>()
{
	return FStateTreeBooleanAndPropertyFunction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeBooleanAndPropertyFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Logic" },
		{ "Comment", "/**\n * Performs 'And' operation on two booleans.\n */" },
		{ "DisplayName", "And" },
		{ "ModuleRelativePath", "Private/PropertyFunctions/StateTreeBooleanAlgebraPropertyFunctions.h" },
		{ "ToolTip", "Performs 'And' operation on two booleans." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeBooleanAndPropertyFunction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeBooleanAndPropertyFunction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	Z_Construct_UScriptStruct_FStateTreePropertyFunctionCommonBase,
	&NewStructOps,
	"StateTreeBooleanAndPropertyFunction",
	nullptr,
	0,
	sizeof(FStateTreeBooleanAndPropertyFunction),
	alignof(FStateTreeBooleanAndPropertyFunction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBooleanAndPropertyFunction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeBooleanAndPropertyFunction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeBooleanAndPropertyFunction()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeBooleanAndPropertyFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeBooleanAndPropertyFunction.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeBooleanAndPropertyFunction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeBooleanAndPropertyFunction.InnerSingleton;
}
// End ScriptStruct FStateTreeBooleanAndPropertyFunction

// Begin ScriptStruct FStateTreeBooleanOrPropertyFunction
static_assert(std::is_polymorphic<FStateTreeBooleanOrPropertyFunction>() == std::is_polymorphic<FStateTreePropertyFunctionCommonBase>(), "USTRUCT FStateTreeBooleanOrPropertyFunction cannot be polymorphic unless super FStateTreePropertyFunctionCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeBooleanOrPropertyFunction;
class UScriptStruct* FStateTreeBooleanOrPropertyFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeBooleanOrPropertyFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeBooleanOrPropertyFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeBooleanOrPropertyFunction, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeBooleanOrPropertyFunction"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeBooleanOrPropertyFunction.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeBooleanOrPropertyFunction>()
{
	return FStateTreeBooleanOrPropertyFunction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeBooleanOrPropertyFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Logic" },
		{ "Comment", "/**\n * Performs 'Or' operation on two booleans.\n */" },
		{ "DisplayName", "Or" },
		{ "ModuleRelativePath", "Private/PropertyFunctions/StateTreeBooleanAlgebraPropertyFunctions.h" },
		{ "ToolTip", "Performs 'Or' operation on two booleans." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeBooleanOrPropertyFunction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeBooleanOrPropertyFunction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	Z_Construct_UScriptStruct_FStateTreePropertyFunctionCommonBase,
	&NewStructOps,
	"StateTreeBooleanOrPropertyFunction",
	nullptr,
	0,
	sizeof(FStateTreeBooleanOrPropertyFunction),
	alignof(FStateTreeBooleanOrPropertyFunction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBooleanOrPropertyFunction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeBooleanOrPropertyFunction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeBooleanOrPropertyFunction()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeBooleanOrPropertyFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeBooleanOrPropertyFunction.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeBooleanOrPropertyFunction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeBooleanOrPropertyFunction.InnerSingleton;
}
// End ScriptStruct FStateTreeBooleanOrPropertyFunction

// Begin ScriptStruct FStateTreeBooleanXOrPropertyFunction
static_assert(std::is_polymorphic<FStateTreeBooleanXOrPropertyFunction>() == std::is_polymorphic<FStateTreePropertyFunctionCommonBase>(), "USTRUCT FStateTreeBooleanXOrPropertyFunction cannot be polymorphic unless super FStateTreePropertyFunctionCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeBooleanXOrPropertyFunction;
class UScriptStruct* FStateTreeBooleanXOrPropertyFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeBooleanXOrPropertyFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeBooleanXOrPropertyFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeBooleanXOrPropertyFunction, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeBooleanXOrPropertyFunction"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeBooleanXOrPropertyFunction.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeBooleanXOrPropertyFunction>()
{
	return FStateTreeBooleanXOrPropertyFunction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeBooleanXOrPropertyFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Logic" },
		{ "Comment", "/**\n * Performs 'Exclusive Or' operation on two booleans.\n */" },
		{ "DisplayName", "XOr" },
		{ "ModuleRelativePath", "Private/PropertyFunctions/StateTreeBooleanAlgebraPropertyFunctions.h" },
		{ "ToolTip", "Performs 'Exclusive Or' operation on two booleans." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeBooleanXOrPropertyFunction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeBooleanXOrPropertyFunction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	Z_Construct_UScriptStruct_FStateTreePropertyFunctionCommonBase,
	&NewStructOps,
	"StateTreeBooleanXOrPropertyFunction",
	nullptr,
	0,
	sizeof(FStateTreeBooleanXOrPropertyFunction),
	alignof(FStateTreeBooleanXOrPropertyFunction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBooleanXOrPropertyFunction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeBooleanXOrPropertyFunction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeBooleanXOrPropertyFunction()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeBooleanXOrPropertyFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeBooleanXOrPropertyFunction.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeBooleanXOrPropertyFunction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeBooleanXOrPropertyFunction.InnerSingleton;
}
// End ScriptStruct FStateTreeBooleanXOrPropertyFunction

// Begin ScriptStruct FStateTreeBooleanNotOperationPropertyFunctionInstanceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeBooleanNotOperationPropertyFunctionInstanceData;
class UScriptStruct* FStateTreeBooleanNotOperationPropertyFunctionInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeBooleanNotOperationPropertyFunctionInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeBooleanNotOperationPropertyFunctionInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeBooleanNotOperationPropertyFunctionInstanceData, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeBooleanNotOperationPropertyFunctionInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeBooleanNotOperationPropertyFunctionInstanceData.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeBooleanNotOperationPropertyFunctionInstanceData>()
{
	return FStateTreeBooleanNotOperationPropertyFunctionInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeBooleanNotOperationPropertyFunctionInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PropertyFunctions/StateTreeBooleanAlgebraPropertyFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInput_MetaData[] = {
		{ "Category", "Param" },
		{ "ModuleRelativePath", "Private/PropertyFunctions/StateTreeBooleanAlgebraPropertyFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResult_MetaData[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Private/PropertyFunctions/StateTreeBooleanAlgebraPropertyFunctions.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInput;
	static void NewProp_bResult_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeBooleanNotOperationPropertyFunctionInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FStateTreeBooleanNotOperationPropertyFunctionInstanceData_Statics::NewProp_bInput_SetBit(void* Obj)
{
	((FStateTreeBooleanNotOperationPropertyFunctionInstanceData*)Obj)->bInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStateTreeBooleanNotOperationPropertyFunctionInstanceData_Statics::NewProp_bInput = { "bInput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStateTreeBooleanNotOperationPropertyFunctionInstanceData), &Z_Construct_UScriptStruct_FStateTreeBooleanNotOperationPropertyFunctionInstanceData_Statics::NewProp_bInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInput_MetaData), NewProp_bInput_MetaData) };
void Z_Construct_UScriptStruct_FStateTreeBooleanNotOperationPropertyFunctionInstanceData_Statics::NewProp_bResult_SetBit(void* Obj)
{
	((FStateTreeBooleanNotOperationPropertyFunctionInstanceData*)Obj)->bResult = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStateTreeBooleanNotOperationPropertyFunctionInstanceData_Statics::NewProp_bResult = { "bResult", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStateTreeBooleanNotOperationPropertyFunctionInstanceData), &Z_Construct_UScriptStruct_FStateTreeBooleanNotOperationPropertyFunctionInstanceData_Statics::NewProp_bResult_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResult_MetaData), NewProp_bResult_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeBooleanNotOperationPropertyFunctionInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeBooleanNotOperationPropertyFunctionInstanceData_Statics::NewProp_bInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeBooleanNotOperationPropertyFunctionInstanceData_Statics::NewProp_bResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBooleanNotOperationPropertyFunctionInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeBooleanNotOperationPropertyFunctionInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeBooleanNotOperationPropertyFunctionInstanceData",
	Z_Construct_UScriptStruct_FStateTreeBooleanNotOperationPropertyFunctionInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBooleanNotOperationPropertyFunctionInstanceData_Statics::PropPointers),
	sizeof(FStateTreeBooleanNotOperationPropertyFunctionInstanceData),
	alignof(FStateTreeBooleanNotOperationPropertyFunctionInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBooleanNotOperationPropertyFunctionInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeBooleanNotOperationPropertyFunctionInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeBooleanNotOperationPropertyFunctionInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeBooleanNotOperationPropertyFunctionInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeBooleanNotOperationPropertyFunctionInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeBooleanNotOperationPropertyFunctionInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeBooleanNotOperationPropertyFunctionInstanceData.InnerSingleton;
}
// End ScriptStruct FStateTreeBooleanNotOperationPropertyFunctionInstanceData

// Begin ScriptStruct FStateTreeBooleanNotPropertyFunction
static_assert(std::is_polymorphic<FStateTreeBooleanNotPropertyFunction>() == std::is_polymorphic<FStateTreePropertyFunctionCommonBase>(), "USTRUCT FStateTreeBooleanNotPropertyFunction cannot be polymorphic unless super FStateTreePropertyFunctionCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeBooleanNotPropertyFunction;
class UScriptStruct* FStateTreeBooleanNotPropertyFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeBooleanNotPropertyFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeBooleanNotPropertyFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeBooleanNotPropertyFunction, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeBooleanNotPropertyFunction"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeBooleanNotPropertyFunction.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeBooleanNotPropertyFunction>()
{
	return FStateTreeBooleanNotPropertyFunction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeBooleanNotPropertyFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Logic" },
		{ "Comment", "/**\n * Performs 'Not' operation on a boolean.\n */" },
		{ "DisplayName", "Not" },
		{ "ModuleRelativePath", "Private/PropertyFunctions/StateTreeBooleanAlgebraPropertyFunctions.h" },
		{ "ToolTip", "Performs 'Not' operation on a boolean." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeBooleanNotPropertyFunction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeBooleanNotPropertyFunction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	Z_Construct_UScriptStruct_FStateTreePropertyFunctionCommonBase,
	&NewStructOps,
	"StateTreeBooleanNotPropertyFunction",
	nullptr,
	0,
	sizeof(FStateTreeBooleanNotPropertyFunction),
	alignof(FStateTreeBooleanNotPropertyFunction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBooleanNotPropertyFunction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeBooleanNotPropertyFunction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeBooleanNotPropertyFunction()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeBooleanNotPropertyFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeBooleanNotPropertyFunction.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeBooleanNotPropertyFunction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeBooleanNotPropertyFunction.InnerSingleton;
}
// End ScriptStruct FStateTreeBooleanNotPropertyFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Private_PropertyFunctions_StateTreeBooleanAlgebraPropertyFunctions_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStateTreeBooleanOperationPropertyFunctionInstanceData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData_Statics::NewStructOps, TEXT("StateTreeBooleanOperationPropertyFunctionInstanceData"), &Z_Registration_Info_UScriptStruct_StateTreeBooleanOperationPropertyFunctionInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeBooleanOperationPropertyFunctionInstanceData), 1974716910U) },
		{ FStateTreeBooleanAndPropertyFunction::StaticStruct, Z_Construct_UScriptStruct_FStateTreeBooleanAndPropertyFunction_Statics::NewStructOps, TEXT("StateTreeBooleanAndPropertyFunction"), &Z_Registration_Info_UScriptStruct_StateTreeBooleanAndPropertyFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeBooleanAndPropertyFunction), 71088575U) },
		{ FStateTreeBooleanOrPropertyFunction::StaticStruct, Z_Construct_UScriptStruct_FStateTreeBooleanOrPropertyFunction_Statics::NewStructOps, TEXT("StateTreeBooleanOrPropertyFunction"), &Z_Registration_Info_UScriptStruct_StateTreeBooleanOrPropertyFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeBooleanOrPropertyFunction), 3207464252U) },
		{ FStateTreeBooleanXOrPropertyFunction::StaticStruct, Z_Construct_UScriptStruct_FStateTreeBooleanXOrPropertyFunction_Statics::NewStructOps, TEXT("StateTreeBooleanXOrPropertyFunction"), &Z_Registration_Info_UScriptStruct_StateTreeBooleanXOrPropertyFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeBooleanXOrPropertyFunction), 969848050U) },
		{ FStateTreeBooleanNotOperationPropertyFunctionInstanceData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeBooleanNotOperationPropertyFunctionInstanceData_Statics::NewStructOps, TEXT("StateTreeBooleanNotOperationPropertyFunctionInstanceData"), &Z_Registration_Info_UScriptStruct_StateTreeBooleanNotOperationPropertyFunctionInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeBooleanNotOperationPropertyFunctionInstanceData), 3511708948U) },
		{ FStateTreeBooleanNotPropertyFunction::StaticStruct, Z_Construct_UScriptStruct_FStateTreeBooleanNotPropertyFunction_Statics::NewStructOps, TEXT("StateTreeBooleanNotPropertyFunction"), &Z_Registration_Info_UScriptStruct_StateTreeBooleanNotPropertyFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeBooleanNotPropertyFunction), 3889733509U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Private_PropertyFunctions_StateTreeBooleanAlgebraPropertyFunctions_h_1671215633(TEXT("/Script/StateTreeModule"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Private_PropertyFunctions_StateTreeBooleanAlgebraPropertyFunctions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Private_PropertyFunctions_StateTreeBooleanAlgebraPropertyFunctions_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
