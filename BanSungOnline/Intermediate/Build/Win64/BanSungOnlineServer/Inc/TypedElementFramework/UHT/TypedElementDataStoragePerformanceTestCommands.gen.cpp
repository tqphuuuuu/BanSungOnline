// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementFramework/Tests/Elements/Framework/TypedElementDataStoragePerformanceTestCommands.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementDataStoragePerformanceTestCommands() {}

// Begin Cross Module References
TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UEditorDataStorageFactory();
TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTest_PingPongBetweenPhaseFactory();
TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTest_PingPongBetweenPhaseFactory_NoRegister();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FEditorDataStorageColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTest_PingPongDurPhys();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTest_PingPongPostPhys();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTest_PingPongPrePhys();
UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

// Begin ScriptStruct FTest_PingPongPrePhys
static_assert(std::is_polymorphic<FTest_PingPongPrePhys>() == std::is_polymorphic<FEditorDataStorageColumn>(), "USTRUCT FTest_PingPongPrePhys cannot be polymorphic unless super FEditorDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Test_PingPongPrePhys;
class UScriptStruct* FTest_PingPongPrePhys::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Test_PingPongPrePhys.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Test_PingPongPrePhys.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTest_PingPongPrePhys, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("Test_PingPongPrePhys"));
	}
	return Z_Registration_Info_UScriptStruct_Test_PingPongPrePhys.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTest_PingPongPrePhys>()
{
	return FTest_PingPongPrePhys::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTest_PingPongPrePhys_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Column to represent that a row is selected\n */" },
		{ "DisplayName", "" },
		{ "ModuleRelativePath", "Tests/Elements/Framework/TypedElementDataStoragePerformanceTestCommands.h" },
		{ "ToolTip", "Column to represent that a row is selected" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Tests/Elements/Framework/TypedElementDataStoragePerformanceTestCommands.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTest_PingPongPrePhys>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FTest_PingPongPrePhys_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTest_PingPongPrePhys, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTest_PingPongPrePhys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTest_PingPongPrePhys_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTest_PingPongPrePhys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTest_PingPongPrePhys_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageColumn,
	&NewStructOps,
	"Test_PingPongPrePhys",
	Z_Construct_UScriptStruct_FTest_PingPongPrePhys_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTest_PingPongPrePhys_Statics::PropPointers),
	sizeof(FTest_PingPongPrePhys),
	alignof(FTest_PingPongPrePhys),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTest_PingPongPrePhys_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTest_PingPongPrePhys_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTest_PingPongPrePhys()
{
	if (!Z_Registration_Info_UScriptStruct_Test_PingPongPrePhys.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Test_PingPongPrePhys.InnerSingleton, Z_Construct_UScriptStruct_FTest_PingPongPrePhys_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Test_PingPongPrePhys.InnerSingleton;
}
// End ScriptStruct FTest_PingPongPrePhys

// Begin ScriptStruct FTest_PingPongDurPhys
static_assert(std::is_polymorphic<FTest_PingPongDurPhys>() == std::is_polymorphic<FEditorDataStorageColumn>(), "USTRUCT FTest_PingPongDurPhys cannot be polymorphic unless super FEditorDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Test_PingPongDurPhys;
class UScriptStruct* FTest_PingPongDurPhys::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Test_PingPongDurPhys.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Test_PingPongDurPhys.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTest_PingPongDurPhys, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("Test_PingPongDurPhys"));
	}
	return Z_Registration_Info_UScriptStruct_Test_PingPongDurPhys.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTest_PingPongDurPhys>()
{
	return FTest_PingPongDurPhys::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTest_PingPongDurPhys_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "" },
		{ "ModuleRelativePath", "Tests/Elements/Framework/TypedElementDataStoragePerformanceTestCommands.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Tests/Elements/Framework/TypedElementDataStoragePerformanceTestCommands.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTest_PingPongDurPhys>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FTest_PingPongDurPhys_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTest_PingPongDurPhys, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTest_PingPongDurPhys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTest_PingPongDurPhys_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTest_PingPongDurPhys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTest_PingPongDurPhys_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageColumn,
	&NewStructOps,
	"Test_PingPongDurPhys",
	Z_Construct_UScriptStruct_FTest_PingPongDurPhys_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTest_PingPongDurPhys_Statics::PropPointers),
	sizeof(FTest_PingPongDurPhys),
	alignof(FTest_PingPongDurPhys),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTest_PingPongDurPhys_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTest_PingPongDurPhys_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTest_PingPongDurPhys()
{
	if (!Z_Registration_Info_UScriptStruct_Test_PingPongDurPhys.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Test_PingPongDurPhys.InnerSingleton, Z_Construct_UScriptStruct_FTest_PingPongDurPhys_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Test_PingPongDurPhys.InnerSingleton;
}
// End ScriptStruct FTest_PingPongDurPhys

// Begin ScriptStruct FTest_PingPongPostPhys
static_assert(std::is_polymorphic<FTest_PingPongPostPhys>() == std::is_polymorphic<FEditorDataStorageColumn>(), "USTRUCT FTest_PingPongPostPhys cannot be polymorphic unless super FEditorDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Test_PingPongPostPhys;
class UScriptStruct* FTest_PingPongPostPhys::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Test_PingPongPostPhys.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Test_PingPongPostPhys.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTest_PingPongPostPhys, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("Test_PingPongPostPhys"));
	}
	return Z_Registration_Info_UScriptStruct_Test_PingPongPostPhys.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTest_PingPongPostPhys>()
{
	return FTest_PingPongPostPhys::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTest_PingPongPostPhys_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "" },
		{ "ModuleRelativePath", "Tests/Elements/Framework/TypedElementDataStoragePerformanceTestCommands.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Tests/Elements/Framework/TypedElementDataStoragePerformanceTestCommands.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTest_PingPongPostPhys>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FTest_PingPongPostPhys_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTest_PingPongPostPhys, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTest_PingPongPostPhys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTest_PingPongPostPhys_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTest_PingPongPostPhys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTest_PingPongPostPhys_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FEditorDataStorageColumn,
	&NewStructOps,
	"Test_PingPongPostPhys",
	Z_Construct_UScriptStruct_FTest_PingPongPostPhys_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTest_PingPongPostPhys_Statics::PropPointers),
	sizeof(FTest_PingPongPostPhys),
	alignof(FTest_PingPongPostPhys),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTest_PingPongPostPhys_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTest_PingPongPostPhys_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTest_PingPongPostPhys()
{
	if (!Z_Registration_Info_UScriptStruct_Test_PingPongPostPhys.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Test_PingPongPostPhys.InnerSingleton, Z_Construct_UScriptStruct_FTest_PingPongPostPhys_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Test_PingPongPostPhys.InnerSingleton;
}
// End ScriptStruct FTest_PingPongPostPhys

// Begin Class UTest_PingPongBetweenPhaseFactory
void UTest_PingPongBetweenPhaseFactory::StaticRegisterNativesUTest_PingPongBetweenPhaseFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTest_PingPongBetweenPhaseFactory);
UClass* Z_Construct_UClass_UTest_PingPongBetweenPhaseFactory_NoRegister()
{
	return UTest_PingPongBetweenPhaseFactory::StaticClass();
}
struct Z_Construct_UClass_UTest_PingPongBetweenPhaseFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The heads up transform display provides at a glance view in a scene outliner row of abnormal transform characteristics, including:\n *\x09\x09""1. Non-uniform scale\n *\x09\x09""2. Negative scaling on X, Y, or Z axis\n *\x09\x09""3. Unnormalized rotation\n */" },
		{ "IncludePath", "Tests/Elements/Framework/TypedElementDataStoragePerformanceTestCommands.h" },
		{ "ModuleRelativePath", "Tests/Elements/Framework/TypedElementDataStoragePerformanceTestCommands.h" },
		{ "ToolTip", "The heads up transform display provides at a glance view in a scene outliner row of abnormal transform characteristics, including:\n            1. Non-uniform scale\n            2. Negative scaling on X, Y, or Z axis\n            3. Unnormalized rotation" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTest_PingPongBetweenPhaseFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTest_PingPongBetweenPhaseFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorDataStorageFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTest_PingPongBetweenPhaseFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTest_PingPongBetweenPhaseFactory_Statics::ClassParams = {
	&UTest_PingPongBetweenPhaseFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTest_PingPongBetweenPhaseFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UTest_PingPongBetweenPhaseFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTest_PingPongBetweenPhaseFactory()
{
	if (!Z_Registration_Info_UClass_UTest_PingPongBetweenPhaseFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTest_PingPongBetweenPhaseFactory.OuterSingleton, Z_Construct_UClass_UTest_PingPongBetweenPhaseFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTest_PingPongBetweenPhaseFactory.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UClass* StaticClass<UTest_PingPongBetweenPhaseFactory>()
{
	return UTest_PingPongBetweenPhaseFactory::StaticClass();
}
UTest_PingPongBetweenPhaseFactory::UTest_PingPongBetweenPhaseFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTest_PingPongBetweenPhaseFactory);
// End Class UTest_PingPongBetweenPhaseFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Tests_Elements_Framework_TypedElementDataStoragePerformanceTestCommands_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTest_PingPongPrePhys::StaticStruct, Z_Construct_UScriptStruct_FTest_PingPongPrePhys_Statics::NewStructOps, TEXT("Test_PingPongPrePhys"), &Z_Registration_Info_UScriptStruct_Test_PingPongPrePhys, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTest_PingPongPrePhys), 3174473544U) },
		{ FTest_PingPongDurPhys::StaticStruct, Z_Construct_UScriptStruct_FTest_PingPongDurPhys_Statics::NewStructOps, TEXT("Test_PingPongDurPhys"), &Z_Registration_Info_UScriptStruct_Test_PingPongDurPhys, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTest_PingPongDurPhys), 2957670727U) },
		{ FTest_PingPongPostPhys::StaticStruct, Z_Construct_UScriptStruct_FTest_PingPongPostPhys_Statics::NewStructOps, TEXT("Test_PingPongPostPhys"), &Z_Registration_Info_UScriptStruct_Test_PingPongPostPhys, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTest_PingPongPostPhys), 4089701136U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTest_PingPongBetweenPhaseFactory, UTest_PingPongBetweenPhaseFactory::StaticClass, TEXT("UTest_PingPongBetweenPhaseFactory"), &Z_Registration_Info_UClass_UTest_PingPongBetweenPhaseFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTest_PingPongBetweenPhaseFactory), 93571457U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Tests_Elements_Framework_TypedElementDataStoragePerformanceTestCommands_h_830359738(TEXT("/Script/TypedElementFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Tests_Elements_Framework_TypedElementDataStoragePerformanceTestCommands_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Tests_Elements_Framework_TypedElementDataStoragePerformanceTestCommands_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Tests_Elements_Framework_TypedElementDataStoragePerformanceTestCommands_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Tests_Elements_Framework_TypedElementDataStoragePerformanceTestCommands_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
