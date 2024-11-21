// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementFramework/Tests/Elements/Framework/TypedElementTestColumns.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementTestColumns() {}

// Begin Cross Module References
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FEditorDataStorageColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FEditorDataStorageTag();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTEDSProcessorTests_Linked();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTEDSProcessorTests_PrimaryTag();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTEDSProcessorTests_SecondaryTag();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTEDSProcessorTestsReferenceColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTestColumnA();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTestColumnB();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTestColumnC();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTestColumnD();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTestColumnE();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTestColumnF();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTestColumnG();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTestColumnInt();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTestColumnString();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTestTagColumnA();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTestTagColumnB();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTestTagColumnC();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTestTagColumnD();
UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

// Begin ScriptStruct FTestColumnA
static_assert(std::is_polymorphic<FTestColumnA>() == std::is_polymorphic<FEditorDataStorageColumn>(), "USTRUCT FTestColumnA cannot be polymorphic unless super FEditorDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestColumnA;
class UScriptStruct* FTestColumnA::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestColumnA.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestColumnA.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestColumnA, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TestColumnA"));
	}
	return Z_Registration_Info_UScriptStruct_TestColumnA.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTestColumnA>()
{
	return FTestColumnA::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTestColumnA_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "ColumnA" },
		{ "ModuleRelativePath", "Tests/Elements/Framework/TypedElementTestColumns.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestColumnA>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestColumnA_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageColumn,
	&NewStructOps,
	"TestColumnA",
	nullptr,
	0,
	sizeof(FTestColumnA),
	alignof(FTestColumnA),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestColumnA_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestColumnA_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTestColumnA()
{
	if (!Z_Registration_Info_UScriptStruct_TestColumnA.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestColumnA.InnerSingleton, Z_Construct_UScriptStruct_FTestColumnA_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TestColumnA.InnerSingleton;
}
// End ScriptStruct FTestColumnA

// Begin ScriptStruct FTestColumnB
static_assert(std::is_polymorphic<FTestColumnB>() == std::is_polymorphic<FEditorDataStorageColumn>(), "USTRUCT FTestColumnB cannot be polymorphic unless super FEditorDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestColumnB;
class UScriptStruct* FTestColumnB::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestColumnB.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestColumnB.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestColumnB, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TestColumnB"));
	}
	return Z_Registration_Info_UScriptStruct_TestColumnB.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTestColumnB>()
{
	return FTestColumnB::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTestColumnB_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "ColumnB" },
		{ "ModuleRelativePath", "Tests/Elements/Framework/TypedElementTestColumns.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestColumnB>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestColumnB_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageColumn,
	&NewStructOps,
	"TestColumnB",
	nullptr,
	0,
	sizeof(FTestColumnB),
	alignof(FTestColumnB),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestColumnB_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestColumnB_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTestColumnB()
{
	if (!Z_Registration_Info_UScriptStruct_TestColumnB.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestColumnB.InnerSingleton, Z_Construct_UScriptStruct_FTestColumnB_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TestColumnB.InnerSingleton;
}
// End ScriptStruct FTestColumnB

// Begin ScriptStruct FTestColumnC
static_assert(std::is_polymorphic<FTestColumnC>() == std::is_polymorphic<FEditorDataStorageColumn>(), "USTRUCT FTestColumnC cannot be polymorphic unless super FEditorDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestColumnC;
class UScriptStruct* FTestColumnC::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestColumnC.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestColumnC.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestColumnC, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TestColumnC"));
	}
	return Z_Registration_Info_UScriptStruct_TestColumnC.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTestColumnC>()
{
	return FTestColumnC::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTestColumnC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "ColumnC" },
		{ "ModuleRelativePath", "Tests/Elements/Framework/TypedElementTestColumns.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestColumnC>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestColumnC_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageColumn,
	&NewStructOps,
	"TestColumnC",
	nullptr,
	0,
	sizeof(FTestColumnC),
	alignof(FTestColumnC),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestColumnC_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestColumnC_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTestColumnC()
{
	if (!Z_Registration_Info_UScriptStruct_TestColumnC.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestColumnC.InnerSingleton, Z_Construct_UScriptStruct_FTestColumnC_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TestColumnC.InnerSingleton;
}
// End ScriptStruct FTestColumnC

// Begin ScriptStruct FTestColumnD
static_assert(std::is_polymorphic<FTestColumnD>() == std::is_polymorphic<FEditorDataStorageColumn>(), "USTRUCT FTestColumnD cannot be polymorphic unless super FEditorDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestColumnD;
class UScriptStruct* FTestColumnD::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestColumnD.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestColumnD.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestColumnD, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TestColumnD"));
	}
	return Z_Registration_Info_UScriptStruct_TestColumnD.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTestColumnD>()
{
	return FTestColumnD::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTestColumnD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "ColumnD" },
		{ "ModuleRelativePath", "Tests/Elements/Framework/TypedElementTestColumns.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestColumnD>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestColumnD_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageColumn,
	&NewStructOps,
	"TestColumnD",
	nullptr,
	0,
	sizeof(FTestColumnD),
	alignof(FTestColumnD),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestColumnD_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestColumnD_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTestColumnD()
{
	if (!Z_Registration_Info_UScriptStruct_TestColumnD.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestColumnD.InnerSingleton, Z_Construct_UScriptStruct_FTestColumnD_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TestColumnD.InnerSingleton;
}
// End ScriptStruct FTestColumnD

// Begin ScriptStruct FTestColumnE
static_assert(std::is_polymorphic<FTestColumnE>() == std::is_polymorphic<FEditorDataStorageColumn>(), "USTRUCT FTestColumnE cannot be polymorphic unless super FEditorDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestColumnE;
class UScriptStruct* FTestColumnE::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestColumnE.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestColumnE.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestColumnE, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TestColumnE"));
	}
	return Z_Registration_Info_UScriptStruct_TestColumnE.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTestColumnE>()
{
	return FTestColumnE::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTestColumnE_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "ColumnE" },
		{ "ModuleRelativePath", "Tests/Elements/Framework/TypedElementTestColumns.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestColumnE>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestColumnE_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageColumn,
	&NewStructOps,
	"TestColumnE",
	nullptr,
	0,
	sizeof(FTestColumnE),
	alignof(FTestColumnE),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestColumnE_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestColumnE_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTestColumnE()
{
	if (!Z_Registration_Info_UScriptStruct_TestColumnE.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestColumnE.InnerSingleton, Z_Construct_UScriptStruct_FTestColumnE_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TestColumnE.InnerSingleton;
}
// End ScriptStruct FTestColumnE

// Begin ScriptStruct FTestColumnF
static_assert(std::is_polymorphic<FTestColumnF>() == std::is_polymorphic<FEditorDataStorageColumn>(), "USTRUCT FTestColumnF cannot be polymorphic unless super FEditorDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestColumnF;
class UScriptStruct* FTestColumnF::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestColumnF.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestColumnF.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestColumnF, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TestColumnF"));
	}
	return Z_Registration_Info_UScriptStruct_TestColumnF.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTestColumnF>()
{
	return FTestColumnF::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTestColumnF_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "ColumnF" },
		{ "ModuleRelativePath", "Tests/Elements/Framework/TypedElementTestColumns.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestColumnF>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestColumnF_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageColumn,
	&NewStructOps,
	"TestColumnF",
	nullptr,
	0,
	sizeof(FTestColumnF),
	alignof(FTestColumnF),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestColumnF_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestColumnF_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTestColumnF()
{
	if (!Z_Registration_Info_UScriptStruct_TestColumnF.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestColumnF.InnerSingleton, Z_Construct_UScriptStruct_FTestColumnF_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TestColumnF.InnerSingleton;
}
// End ScriptStruct FTestColumnF

// Begin ScriptStruct FTestColumnG
static_assert(std::is_polymorphic<FTestColumnG>() == std::is_polymorphic<FEditorDataStorageColumn>(), "USTRUCT FTestColumnG cannot be polymorphic unless super FEditorDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestColumnG;
class UScriptStruct* FTestColumnG::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestColumnG.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestColumnG.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestColumnG, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TestColumnG"));
	}
	return Z_Registration_Info_UScriptStruct_TestColumnG.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTestColumnG>()
{
	return FTestColumnG::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTestColumnG_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "ColumnG" },
		{ "ModuleRelativePath", "Tests/Elements/Framework/TypedElementTestColumns.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestColumnG>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestColumnG_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageColumn,
	&NewStructOps,
	"TestColumnG",
	nullptr,
	0,
	sizeof(FTestColumnG),
	alignof(FTestColumnG),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestColumnG_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestColumnG_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTestColumnG()
{
	if (!Z_Registration_Info_UScriptStruct_TestColumnG.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestColumnG.InnerSingleton, Z_Construct_UScriptStruct_FTestColumnG_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TestColumnG.InnerSingleton;
}
// End ScriptStruct FTestColumnG

// Begin ScriptStruct FTestColumnInt
static_assert(std::is_polymorphic<FTestColumnInt>() == std::is_polymorphic<FEditorDataStorageColumn>(), "USTRUCT FTestColumnInt cannot be polymorphic unless super FEditorDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestColumnInt;
class UScriptStruct* FTestColumnInt::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestColumnInt.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestColumnInt.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestColumnInt, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TestColumnInt"));
	}
	return Z_Registration_Info_UScriptStruct_TestColumnInt.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTestColumnInt>()
{
	return FTestColumnInt::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTestColumnInt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "ColumnInt" },
		{ "ModuleRelativePath", "Tests/Elements/Framework/TypedElementTestColumns.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestInt_MetaData[] = {
		{ "ModuleRelativePath", "Tests/Elements/Framework/TypedElementTestColumns.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TestInt;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestColumnInt>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTestColumnInt_Statics::NewProp_TestInt = { "TestInt", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestColumnInt, TestInt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestInt_MetaData), NewProp_TestInt_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTestColumnInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestColumnInt_Statics::NewProp_TestInt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestColumnInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestColumnInt_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageColumn,
	&NewStructOps,
	"TestColumnInt",
	Z_Construct_UScriptStruct_FTestColumnInt_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestColumnInt_Statics::PropPointers),
	sizeof(FTestColumnInt),
	alignof(FTestColumnInt),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestColumnInt_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestColumnInt_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTestColumnInt()
{
	if (!Z_Registration_Info_UScriptStruct_TestColumnInt.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestColumnInt.InnerSingleton, Z_Construct_UScriptStruct_FTestColumnInt_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TestColumnInt.InnerSingleton;
}
// End ScriptStruct FTestColumnInt

// Begin ScriptStruct FTestColumnString
static_assert(std::is_polymorphic<FTestColumnString>() == std::is_polymorphic<FEditorDataStorageColumn>(), "USTRUCT FTestColumnString cannot be polymorphic unless super FEditorDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestColumnString;
class UScriptStruct* FTestColumnString::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestColumnString.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestColumnString.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestColumnString, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TestColumnString"));
	}
	return Z_Registration_Info_UScriptStruct_TestColumnString.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTestColumnString>()
{
	return FTestColumnString::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTestColumnString_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "ColumnString" },
		{ "ModuleRelativePath", "Tests/Elements/Framework/TypedElementTestColumns.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestString_MetaData[] = {
		{ "ModuleRelativePath", "Tests/Elements/Framework/TypedElementTestColumns.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TestString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestColumnString>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTestColumnString_Statics::NewProp_TestString = { "TestString", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestColumnString, TestString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestString_MetaData), NewProp_TestString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTestColumnString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestColumnString_Statics::NewProp_TestString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestColumnString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestColumnString_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageColumn,
	&NewStructOps,
	"TestColumnString",
	Z_Construct_UScriptStruct_FTestColumnString_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestColumnString_Statics::PropPointers),
	sizeof(FTestColumnString),
	alignof(FTestColumnString),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestColumnString_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestColumnString_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTestColumnString()
{
	if (!Z_Registration_Info_UScriptStruct_TestColumnString.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestColumnString.InnerSingleton, Z_Construct_UScriptStruct_FTestColumnString_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TestColumnString.InnerSingleton;
}
// End ScriptStruct FTestColumnString

// Begin ScriptStruct FTestTagColumnA
static_assert(std::is_polymorphic<FTestTagColumnA>() == std::is_polymorphic<FEditorDataStorageTag>(), "USTRUCT FTestTagColumnA cannot be polymorphic unless super FEditorDataStorageTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestTagColumnA;
class UScriptStruct* FTestTagColumnA::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestTagColumnA.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestTagColumnA.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestTagColumnA, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TestTagColumnA"));
	}
	return Z_Registration_Info_UScriptStruct_TestTagColumnA.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTestTagColumnA>()
{
	return FTestTagColumnA::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTestTagColumnA_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "TagA" },
		{ "ModuleRelativePath", "Tests/Elements/Framework/TypedElementTestColumns.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestTagColumnA>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestTagColumnA_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageTag,
	&NewStructOps,
	"TestTagColumnA",
	nullptr,
	0,
	sizeof(FTestTagColumnA),
	alignof(FTestTagColumnA),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTagColumnA_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestTagColumnA_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTestTagColumnA()
{
	if (!Z_Registration_Info_UScriptStruct_TestTagColumnA.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestTagColumnA.InnerSingleton, Z_Construct_UScriptStruct_FTestTagColumnA_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TestTagColumnA.InnerSingleton;
}
// End ScriptStruct FTestTagColumnA

// Begin ScriptStruct FTestTagColumnB
static_assert(std::is_polymorphic<FTestTagColumnB>() == std::is_polymorphic<FEditorDataStorageTag>(), "USTRUCT FTestTagColumnB cannot be polymorphic unless super FEditorDataStorageTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestTagColumnB;
class UScriptStruct* FTestTagColumnB::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestTagColumnB.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestTagColumnB.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestTagColumnB, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TestTagColumnB"));
	}
	return Z_Registration_Info_UScriptStruct_TestTagColumnB.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTestTagColumnB>()
{
	return FTestTagColumnB::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTestTagColumnB_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "TagB" },
		{ "ModuleRelativePath", "Tests/Elements/Framework/TypedElementTestColumns.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestTagColumnB>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestTagColumnB_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageTag,
	&NewStructOps,
	"TestTagColumnB",
	nullptr,
	0,
	sizeof(FTestTagColumnB),
	alignof(FTestTagColumnB),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTagColumnB_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestTagColumnB_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTestTagColumnB()
{
	if (!Z_Registration_Info_UScriptStruct_TestTagColumnB.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestTagColumnB.InnerSingleton, Z_Construct_UScriptStruct_FTestTagColumnB_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TestTagColumnB.InnerSingleton;
}
// End ScriptStruct FTestTagColumnB

// Begin ScriptStruct FTestTagColumnC
static_assert(std::is_polymorphic<FTestTagColumnC>() == std::is_polymorphic<FEditorDataStorageTag>(), "USTRUCT FTestTagColumnC cannot be polymorphic unless super FEditorDataStorageTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestTagColumnC;
class UScriptStruct* FTestTagColumnC::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestTagColumnC.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestTagColumnC.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestTagColumnC, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TestTagColumnC"));
	}
	return Z_Registration_Info_UScriptStruct_TestTagColumnC.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTestTagColumnC>()
{
	return FTestTagColumnC::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTestTagColumnC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "TagC" },
		{ "ModuleRelativePath", "Tests/Elements/Framework/TypedElementTestColumns.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestTagColumnC>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestTagColumnC_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageTag,
	&NewStructOps,
	"TestTagColumnC",
	nullptr,
	0,
	sizeof(FTestTagColumnC),
	alignof(FTestTagColumnC),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTagColumnC_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestTagColumnC_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTestTagColumnC()
{
	if (!Z_Registration_Info_UScriptStruct_TestTagColumnC.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestTagColumnC.InnerSingleton, Z_Construct_UScriptStruct_FTestTagColumnC_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TestTagColumnC.InnerSingleton;
}
// End ScriptStruct FTestTagColumnC

// Begin ScriptStruct FTestTagColumnD
static_assert(std::is_polymorphic<FTestTagColumnD>() == std::is_polymorphic<FEditorDataStorageTag>(), "USTRUCT FTestTagColumnD cannot be polymorphic unless super FEditorDataStorageTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestTagColumnD;
class UScriptStruct* FTestTagColumnD::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestTagColumnD.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestTagColumnD.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestTagColumnD, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TestTagColumnD"));
	}
	return Z_Registration_Info_UScriptStruct_TestTagColumnD.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTestTagColumnD>()
{
	return FTestTagColumnD::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTestTagColumnD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "TagD" },
		{ "ModuleRelativePath", "Tests/Elements/Framework/TypedElementTestColumns.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestTagColumnD>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestTagColumnD_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageTag,
	&NewStructOps,
	"TestTagColumnD",
	nullptr,
	0,
	sizeof(FTestTagColumnD),
	alignof(FTestTagColumnD),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTagColumnD_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestTagColumnD_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTestTagColumnD()
{
	if (!Z_Registration_Info_UScriptStruct_TestTagColumnD.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestTagColumnD.InnerSingleton, Z_Construct_UScriptStruct_FTestTagColumnD_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TestTagColumnD.InnerSingleton;
}
// End ScriptStruct FTestTagColumnD

// Begin ScriptStruct FTEDSProcessorTestsReferenceColumn
static_assert(std::is_polymorphic<FTEDSProcessorTestsReferenceColumn>() == std::is_polymorphic<FEditorDataStorageColumn>(), "USTRUCT FTEDSProcessorTestsReferenceColumn cannot be polymorphic unless super FEditorDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TEDSProcessorTestsReferenceColumn;
class UScriptStruct* FTEDSProcessorTestsReferenceColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TEDSProcessorTestsReferenceColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TEDSProcessorTestsReferenceColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTEDSProcessorTestsReferenceColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TEDSProcessorTestsReferenceColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TEDSProcessorTestsReferenceColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTEDSProcessorTestsReferenceColumn>()
{
	return FTEDSProcessorTestsReferenceColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTEDSProcessorTestsReferenceColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "TestReferenceColumn" },
		{ "ModuleRelativePath", "Tests/Elements/Framework/TypedElementTestColumns.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTEDSProcessorTestsReferenceColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTEDSProcessorTestsReferenceColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageColumn,
	&NewStructOps,
	"TEDSProcessorTestsReferenceColumn",
	nullptr,
	0,
	sizeof(FTEDSProcessorTestsReferenceColumn),
	alignof(FTEDSProcessorTestsReferenceColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTEDSProcessorTestsReferenceColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTEDSProcessorTestsReferenceColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTEDSProcessorTestsReferenceColumn()
{
	if (!Z_Registration_Info_UScriptStruct_TEDSProcessorTestsReferenceColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TEDSProcessorTestsReferenceColumn.InnerSingleton, Z_Construct_UScriptStruct_FTEDSProcessorTestsReferenceColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TEDSProcessorTestsReferenceColumn.InnerSingleton;
}
// End ScriptStruct FTEDSProcessorTestsReferenceColumn

// Begin ScriptStruct FTEDSProcessorTests_PrimaryTag
static_assert(std::is_polymorphic<FTEDSProcessorTests_PrimaryTag>() == std::is_polymorphic<FEditorDataStorageTag>(), "USTRUCT FTEDSProcessorTests_PrimaryTag cannot be polymorphic unless super FEditorDataStorageTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TEDSProcessorTests_PrimaryTag;
class UScriptStruct* FTEDSProcessorTests_PrimaryTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TEDSProcessorTests_PrimaryTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TEDSProcessorTests_PrimaryTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTEDSProcessorTests_PrimaryTag, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TEDSProcessorTests_PrimaryTag"));
	}
	return Z_Registration_Info_UScriptStruct_TEDSProcessorTests_PrimaryTag.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTEDSProcessorTests_PrimaryTag>()
{
	return FTEDSProcessorTests_PrimaryTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTEDSProcessorTests_PrimaryTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "TEDSProcessorTests_PrimaryTag" },
		{ "ModuleRelativePath", "Tests/Elements/Framework/TypedElementTestColumns.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTEDSProcessorTests_PrimaryTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTEDSProcessorTests_PrimaryTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageTag,
	&NewStructOps,
	"TEDSProcessorTests_PrimaryTag",
	nullptr,
	0,
	sizeof(FTEDSProcessorTests_PrimaryTag),
	alignof(FTEDSProcessorTests_PrimaryTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTEDSProcessorTests_PrimaryTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTEDSProcessorTests_PrimaryTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTEDSProcessorTests_PrimaryTag()
{
	if (!Z_Registration_Info_UScriptStruct_TEDSProcessorTests_PrimaryTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TEDSProcessorTests_PrimaryTag.InnerSingleton, Z_Construct_UScriptStruct_FTEDSProcessorTests_PrimaryTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TEDSProcessorTests_PrimaryTag.InnerSingleton;
}
// End ScriptStruct FTEDSProcessorTests_PrimaryTag

// Begin ScriptStruct FTEDSProcessorTests_SecondaryTag
static_assert(std::is_polymorphic<FTEDSProcessorTests_SecondaryTag>() == std::is_polymorphic<FEditorDataStorageTag>(), "USTRUCT FTEDSProcessorTests_SecondaryTag cannot be polymorphic unless super FEditorDataStorageTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TEDSProcessorTests_SecondaryTag;
class UScriptStruct* FTEDSProcessorTests_SecondaryTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TEDSProcessorTests_SecondaryTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TEDSProcessorTests_SecondaryTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTEDSProcessorTests_SecondaryTag, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TEDSProcessorTests_SecondaryTag"));
	}
	return Z_Registration_Info_UScriptStruct_TEDSProcessorTests_SecondaryTag.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTEDSProcessorTests_SecondaryTag>()
{
	return FTEDSProcessorTests_SecondaryTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTEDSProcessorTests_SecondaryTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "TEDSProcessorTestsSecondaryTag" },
		{ "ModuleRelativePath", "Tests/Elements/Framework/TypedElementTestColumns.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTEDSProcessorTests_SecondaryTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTEDSProcessorTests_SecondaryTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageTag,
	&NewStructOps,
	"TEDSProcessorTests_SecondaryTag",
	nullptr,
	0,
	sizeof(FTEDSProcessorTests_SecondaryTag),
	alignof(FTEDSProcessorTests_SecondaryTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTEDSProcessorTests_SecondaryTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTEDSProcessorTests_SecondaryTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTEDSProcessorTests_SecondaryTag()
{
	if (!Z_Registration_Info_UScriptStruct_TEDSProcessorTests_SecondaryTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TEDSProcessorTests_SecondaryTag.InnerSingleton, Z_Construct_UScriptStruct_FTEDSProcessorTests_SecondaryTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TEDSProcessorTests_SecondaryTag.InnerSingleton;
}
// End ScriptStruct FTEDSProcessorTests_SecondaryTag

// Begin ScriptStruct FTEDSProcessorTests_Linked
static_assert(std::is_polymorphic<FTEDSProcessorTests_Linked>() == std::is_polymorphic<FEditorDataStorageTag>(), "USTRUCT FTEDSProcessorTests_Linked cannot be polymorphic unless super FEditorDataStorageTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TEDSProcessorTests_Linked;
class UScriptStruct* FTEDSProcessorTests_Linked::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TEDSProcessorTests_Linked.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TEDSProcessorTests_Linked.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTEDSProcessorTests_Linked, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TEDSProcessorTests_Linked"));
	}
	return Z_Registration_Info_UScriptStruct_TEDSProcessorTests_Linked.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTEDSProcessorTests_Linked>()
{
	return FTEDSProcessorTests_Linked::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTEDSProcessorTests_Linked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "TEDSProcessorTests_Linked" },
		{ "ModuleRelativePath", "Tests/Elements/Framework/TypedElementTestColumns.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTEDSProcessorTests_Linked>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTEDSProcessorTests_Linked_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageTag,
	&NewStructOps,
	"TEDSProcessorTests_Linked",
	nullptr,
	0,
	sizeof(FTEDSProcessorTests_Linked),
	alignof(FTEDSProcessorTests_Linked),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTEDSProcessorTests_Linked_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTEDSProcessorTests_Linked_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTEDSProcessorTests_Linked()
{
	if (!Z_Registration_Info_UScriptStruct_TEDSProcessorTests_Linked.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TEDSProcessorTests_Linked.InnerSingleton, Z_Construct_UScriptStruct_FTEDSProcessorTests_Linked_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TEDSProcessorTests_Linked.InnerSingleton;
}
// End ScriptStruct FTEDSProcessorTests_Linked

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Tests_Elements_Framework_TypedElementTestColumns_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTestColumnA::StaticStruct, Z_Construct_UScriptStruct_FTestColumnA_Statics::NewStructOps, TEXT("TestColumnA"), &Z_Registration_Info_UScriptStruct_TestColumnA, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestColumnA), 1023953685U) },
		{ FTestColumnB::StaticStruct, Z_Construct_UScriptStruct_FTestColumnB_Statics::NewStructOps, TEXT("TestColumnB"), &Z_Registration_Info_UScriptStruct_TestColumnB, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestColumnB), 1243362022U) },
		{ FTestColumnC::StaticStruct, Z_Construct_UScriptStruct_FTestColumnC_Statics::NewStructOps, TEXT("TestColumnC"), &Z_Registration_Info_UScriptStruct_TestColumnC, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestColumnC), 1942380391U) },
		{ FTestColumnD::StaticStruct, Z_Construct_UScriptStruct_FTestColumnD_Statics::NewStructOps, TEXT("TestColumnD"), &Z_Registration_Info_UScriptStruct_TestColumnD, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestColumnD), 3647780538U) },
		{ FTestColumnE::StaticStruct, Z_Construct_UScriptStruct_FTestColumnE_Statics::NewStructOps, TEXT("TestColumnE"), &Z_Registration_Info_UScriptStruct_TestColumnE, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestColumnE), 2792292211U) },
		{ FTestColumnF::StaticStruct, Z_Construct_UScriptStruct_FTestColumnF_Statics::NewStructOps, TEXT("TestColumnF"), &Z_Registration_Info_UScriptStruct_TestColumnF, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestColumnF), 161386256U) },
		{ FTestColumnG::StaticStruct, Z_Construct_UScriptStruct_FTestColumnG_Statics::NewStructOps, TEXT("TestColumnG"), &Z_Registration_Info_UScriptStruct_TestColumnG, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestColumnG), 3587445300U) },
		{ FTestColumnInt::StaticStruct, Z_Construct_UScriptStruct_FTestColumnInt_Statics::NewStructOps, TEXT("TestColumnInt"), &Z_Registration_Info_UScriptStruct_TestColumnInt, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestColumnInt), 2666859390U) },
		{ FTestColumnString::StaticStruct, Z_Construct_UScriptStruct_FTestColumnString_Statics::NewStructOps, TEXT("TestColumnString"), &Z_Registration_Info_UScriptStruct_TestColumnString, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestColumnString), 2757418298U) },
		{ FTestTagColumnA::StaticStruct, Z_Construct_UScriptStruct_FTestTagColumnA_Statics::NewStructOps, TEXT("TestTagColumnA"), &Z_Registration_Info_UScriptStruct_TestTagColumnA, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestTagColumnA), 883791214U) },
		{ FTestTagColumnB::StaticStruct, Z_Construct_UScriptStruct_FTestTagColumnB_Statics::NewStructOps, TEXT("TestTagColumnB"), &Z_Registration_Info_UScriptStruct_TestTagColumnB, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestTagColumnB), 3189397919U) },
		{ FTestTagColumnC::StaticStruct, Z_Construct_UScriptStruct_FTestTagColumnC_Statics::NewStructOps, TEXT("TestTagColumnC"), &Z_Registration_Info_UScriptStruct_TestTagColumnC, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestTagColumnC), 93200328U) },
		{ FTestTagColumnD::StaticStruct, Z_Construct_UScriptStruct_FTestTagColumnD_Statics::NewStructOps, TEXT("TestTagColumnD"), &Z_Registration_Info_UScriptStruct_TestTagColumnD, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestTagColumnD), 3098051296U) },
		{ FTEDSProcessorTestsReferenceColumn::StaticStruct, Z_Construct_UScriptStruct_FTEDSProcessorTestsReferenceColumn_Statics::NewStructOps, TEXT("TEDSProcessorTestsReferenceColumn"), &Z_Registration_Info_UScriptStruct_TEDSProcessorTestsReferenceColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTEDSProcessorTestsReferenceColumn), 2795003664U) },
		{ FTEDSProcessorTests_PrimaryTag::StaticStruct, Z_Construct_UScriptStruct_FTEDSProcessorTests_PrimaryTag_Statics::NewStructOps, TEXT("TEDSProcessorTests_PrimaryTag"), &Z_Registration_Info_UScriptStruct_TEDSProcessorTests_PrimaryTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTEDSProcessorTests_PrimaryTag), 2853354840U) },
		{ FTEDSProcessorTests_SecondaryTag::StaticStruct, Z_Construct_UScriptStruct_FTEDSProcessorTests_SecondaryTag_Statics::NewStructOps, TEXT("TEDSProcessorTests_SecondaryTag"), &Z_Registration_Info_UScriptStruct_TEDSProcessorTests_SecondaryTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTEDSProcessorTests_SecondaryTag), 4291135231U) },
		{ FTEDSProcessorTests_Linked::StaticStruct, Z_Construct_UScriptStruct_FTEDSProcessorTests_Linked_Statics::NewStructOps, TEXT("TEDSProcessorTests_Linked"), &Z_Registration_Info_UScriptStruct_TEDSProcessorTests_Linked, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTEDSProcessorTests_Linked), 3889416686U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Tests_Elements_Framework_TypedElementTestColumns_h_895666563(TEXT("/Script/TypedElementFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Tests_Elements_Framework_TypedElementTestColumns_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Tests_Elements_Framework_TypedElementTestColumns_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
