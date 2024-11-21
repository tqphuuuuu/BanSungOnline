// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldMetricsCore/Public/WorldMetricCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldMetricCollection() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_WorldMetricsCore();
WORLDMETRICSCORE_API UClass* Z_Construct_UClass_UWorldMetricInterface_NoRegister();
WORLDMETRICSCORE_API UClass* Z_Construct_UClass_UWorldMetricsSubsystem_NoRegister();
WORLDMETRICSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldMetricCollection();
// End Cross Module References

// Begin ScriptStruct FWorldMetricCollection
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldMetricCollection;
class UScriptStruct* FWorldMetricCollection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldMetricCollection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldMetricCollection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldMetricCollection, (UObject*)Z_Construct_UPackage__Script_WorldMetricsCore(), TEXT("WorldMetricCollection"));
	}
	return Z_Registration_Info_UScriptStruct_WorldMetricCollection.OuterSingleton;
}
template<> WORLDMETRICSCORE_API UScriptStruct* StaticStruct<FWorldMetricCollection>()
{
	return FWorldMetricCollection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWorldMetricCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * World metric's collection\n\n * A class representing a collection of world metrics. This class allows instantiating and running an arbitrary set of\n * metrics together. The collection observes one instance of per metric class and depends on the World Metric's\n * Subsystem to run the metrics. For this reason, the collection requires initialization. Users are responsible for\n * ensuring both their lifetime and that of the World Metric's Subsystem in their world object.\n */" },
		{ "ModuleRelativePath", "Public/WorldMetricCollection.h" },
		{ "ToolTip", "World metric's collection\n\nA class representing a collection of world metrics. This class allows instantiating and running an arbitrary set of\nmetrics together. The collection observes one instance of per metric class and depends on the World Metric's\nSubsystem to run the metrics. For this reason, the collection requires initialization. Users are responsible for\nensuring both their lifetime and that of the World Metric's Subsystem in their world object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Metrics_MetaData[] = {
		{ "Comment", "/* List of metrics objects.*/" },
		{ "ModuleRelativePath", "Public/WorldMetricCollection.h" },
		{ "ToolTip", "List of metrics objects." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Subsystem_MetaData[] = {
		{ "Comment", "/* World Metric's Subsystem provided by the outer object. */" },
		{ "ModuleRelativePath", "Public/WorldMetricCollection.h" },
		{ "ToolTip", "World Metric's Subsystem provided by the outer object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[] = {
		{ "Comment", "/* Flag indicating whether the contained metrics are enabled and running in the World Metric's Subsystem. */" },
		{ "ModuleRelativePath", "Public/WorldMetricCollection.h" },
		{ "ToolTip", "Flag indicating whether the contained metrics are enabled and running in the World Metric's Subsystem." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Metrics_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Metrics;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Subsystem;
	static void NewProp_bIsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldMetricCollection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWorldMetricCollection_Statics::NewProp_Metrics_Inner = { "Metrics", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWorldMetricInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWorldMetricCollection_Statics::NewProp_Metrics = { "Metrics", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldMetricCollection, Metrics), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Metrics_MetaData), NewProp_Metrics_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FWorldMetricCollection_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldMetricCollection, Subsystem), Z_Construct_UClass_UWorldMetricsSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Subsystem_MetaData), NewProp_Subsystem_MetaData) };
void Z_Construct_UScriptStruct_FWorldMetricCollection_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
{
	((FWorldMetricCollection*)Obj)->bIsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWorldMetricCollection_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FWorldMetricCollection), &Z_Construct_UScriptStruct_FWorldMetricCollection_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEnabled_MetaData), NewProp_bIsEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldMetricCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldMetricCollection_Statics::NewProp_Metrics_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldMetricCollection_Statics::NewProp_Metrics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldMetricCollection_Statics::NewProp_Subsystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldMetricCollection_Statics::NewProp_bIsEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldMetricCollection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldMetricCollection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WorldMetricsCore,
	nullptr,
	&NewStructOps,
	"WorldMetricCollection",
	Z_Construct_UScriptStruct_FWorldMetricCollection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldMetricCollection_Statics::PropPointers),
	sizeof(FWorldMetricCollection),
	alignof(FWorldMetricCollection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldMetricCollection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWorldMetricCollection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWorldMetricCollection()
{
	if (!Z_Registration_Info_UScriptStruct_WorldMetricCollection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldMetricCollection.InnerSingleton, Z_Construct_UScriptStruct_FWorldMetricCollection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WorldMetricCollection.InnerSingleton;
}
// End ScriptStruct FWorldMetricCollection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricCollection_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWorldMetricCollection::StaticStruct, Z_Construct_UScriptStruct_FWorldMetricCollection_Statics::NewStructOps, TEXT("WorldMetricCollection"), &Z_Registration_Info_UScriptStruct_WorldMetricCollection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldMetricCollection), 2086536363U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricCollection_h_2916833977(TEXT("/Script/WorldMetricsCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricCollection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricCollection_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
