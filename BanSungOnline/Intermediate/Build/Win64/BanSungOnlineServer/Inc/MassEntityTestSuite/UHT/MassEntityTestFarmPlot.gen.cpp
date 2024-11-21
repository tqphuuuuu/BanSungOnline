// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/MassEntityTestSuite/Public/MassEntityTestFarmPlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassEntityTestFarmPlot() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor_NoRegister();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassTag();
MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_AMassEntityTestFarmPlot();
MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_AMassEntityTestFarmPlot_NoRegister();
MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UFarmHarvestTimerExpired();
MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UFarmHarvestTimerExpired_NoRegister();
MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UFarmHarvestTimerSetIcon();
MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UFarmHarvestTimerSetIcon_NoRegister();
MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UFarmHarvestTimerSystem_Crops();
MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UFarmHarvestTimerSystem_Crops_NoRegister();
MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UFarmHarvestTimerSystem_Flowers();
MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UFarmHarvestTimerSystem_Flowers_NoRegister();
MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UFarmProcessorBase();
MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UFarmProcessorBase_NoRegister();
MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UFarmWaterProcessor();
MASSENTITYTESTSUITE_API UClass* Z_Construct_UClass_UFarmWaterProcessor_NoRegister();
MASSENTITYTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FFarmCropFragment();
MASSENTITYTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FFarmFlowerFragment();
MASSENTITYTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FFarmGridCellData();
MASSENTITYTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FFarmJustBecameReadyToHarvestTag();
MASSENTITYTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FFarmReadyToHarvestTag();
MASSENTITYTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FFarmVisualDataRow();
MASSENTITYTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FFarmVisualFragment();
MASSENTITYTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FFarmWaterFragment();
MASSENTITYTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FHarvestTimerFragment();
UPackage* Z_Construct_UPackage__Script_MassEntityTestSuite();
// End Cross Module References

// Begin ScriptStruct FFarmVisualDataRow
static_assert(std::is_polymorphic<FFarmVisualDataRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FFarmVisualDataRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FarmVisualDataRow;
class UScriptStruct* FFarmVisualDataRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FarmVisualDataRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FarmVisualDataRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFarmVisualDataRow, (UObject*)Z_Construct_UPackage__Script_MassEntityTestSuite(), TEXT("FarmVisualDataRow"));
	}
	return Z_Registration_Info_UScriptStruct_FarmVisualDataRow.OuterSingleton;
}
template<> MASSENTITYTESTSUITE_API UScriptStruct* StaticStruct<FFarmVisualDataRow>()
{
	return FFarmVisualDataRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFarmVisualDataRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Farm" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialOverride_MetaData[] = {
		{ "Category", "Farm" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFarmVisualDataRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFarmVisualDataRow_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFarmVisualDataRow, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFarmVisualDataRow_Statics::NewProp_MaterialOverride = { "MaterialOverride", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFarmVisualDataRow, MaterialOverride), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialOverride_MetaData), NewProp_MaterialOverride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFarmVisualDataRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFarmVisualDataRow_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFarmVisualDataRow_Statics::NewProp_MaterialOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFarmVisualDataRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFarmVisualDataRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"FarmVisualDataRow",
	Z_Construct_UScriptStruct_FFarmVisualDataRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFarmVisualDataRow_Statics::PropPointers),
	sizeof(FFarmVisualDataRow),
	alignof(FFarmVisualDataRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFarmVisualDataRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFarmVisualDataRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFarmVisualDataRow()
{
	if (!Z_Registration_Info_UScriptStruct_FarmVisualDataRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FarmVisualDataRow.InnerSingleton, Z_Construct_UScriptStruct_FFarmVisualDataRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FarmVisualDataRow.InnerSingleton;
}
// End ScriptStruct FFarmVisualDataRow

// Begin ScriptStruct FFarmJustBecameReadyToHarvestTag
static_assert(std::is_polymorphic<FFarmJustBecameReadyToHarvestTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FFarmJustBecameReadyToHarvestTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FarmJustBecameReadyToHarvestTag;
class UScriptStruct* FFarmJustBecameReadyToHarvestTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FarmJustBecameReadyToHarvestTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FarmJustBecameReadyToHarvestTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFarmJustBecameReadyToHarvestTag, (UObject*)Z_Construct_UPackage__Script_MassEntityTestSuite(), TEXT("FarmJustBecameReadyToHarvestTag"));
	}
	return Z_Registration_Info_UScriptStruct_FarmJustBecameReadyToHarvestTag.OuterSingleton;
}
template<> MASSENTITYTESTSUITE_API UScriptStruct* StaticStruct<FFarmJustBecameReadyToHarvestTag>()
{
	return FFarmJustBecameReadyToHarvestTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFarmJustBecameReadyToHarvestTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFarmJustBecameReadyToHarvestTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFarmJustBecameReadyToHarvestTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"FarmJustBecameReadyToHarvestTag",
	nullptr,
	0,
	sizeof(FFarmJustBecameReadyToHarvestTag),
	alignof(FFarmJustBecameReadyToHarvestTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFarmJustBecameReadyToHarvestTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFarmJustBecameReadyToHarvestTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFarmJustBecameReadyToHarvestTag()
{
	if (!Z_Registration_Info_UScriptStruct_FarmJustBecameReadyToHarvestTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FarmJustBecameReadyToHarvestTag.InnerSingleton, Z_Construct_UScriptStruct_FFarmJustBecameReadyToHarvestTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FarmJustBecameReadyToHarvestTag.InnerSingleton;
}
// End ScriptStruct FFarmJustBecameReadyToHarvestTag

// Begin ScriptStruct FFarmReadyToHarvestTag
static_assert(std::is_polymorphic<FFarmReadyToHarvestTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FFarmReadyToHarvestTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FarmReadyToHarvestTag;
class UScriptStruct* FFarmReadyToHarvestTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FarmReadyToHarvestTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FarmReadyToHarvestTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFarmReadyToHarvestTag, (UObject*)Z_Construct_UPackage__Script_MassEntityTestSuite(), TEXT("FarmReadyToHarvestTag"));
	}
	return Z_Registration_Info_UScriptStruct_FarmReadyToHarvestTag.OuterSingleton;
}
template<> MASSENTITYTESTSUITE_API UScriptStruct* StaticStruct<FFarmReadyToHarvestTag>()
{
	return FFarmReadyToHarvestTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFarmReadyToHarvestTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFarmReadyToHarvestTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFarmReadyToHarvestTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"FarmReadyToHarvestTag",
	nullptr,
	0,
	sizeof(FFarmReadyToHarvestTag),
	alignof(FFarmReadyToHarvestTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFarmReadyToHarvestTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFarmReadyToHarvestTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFarmReadyToHarvestTag()
{
	if (!Z_Registration_Info_UScriptStruct_FarmReadyToHarvestTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FarmReadyToHarvestTag.InnerSingleton, Z_Construct_UScriptStruct_FFarmReadyToHarvestTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FarmReadyToHarvestTag.InnerSingleton;
}
// End ScriptStruct FFarmReadyToHarvestTag

// Begin ScriptStruct FFarmGridCellData
static_assert(std::is_polymorphic<FFarmGridCellData>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FFarmGridCellData cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FarmGridCellData;
class UScriptStruct* FFarmGridCellData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FarmGridCellData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FarmGridCellData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFarmGridCellData, (UObject*)Z_Construct_UPackage__Script_MassEntityTestSuite(), TEXT("FarmGridCellData"));
	}
	return Z_Registration_Info_UScriptStruct_FarmGridCellData.OuterSingleton;
}
template<> MASSENTITYTESTSUITE_API UScriptStruct* StaticStruct<FFarmGridCellData>()
{
	return FFarmGridCellData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFarmGridCellData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFarmGridCellData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFarmGridCellData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"FarmGridCellData",
	nullptr,
	0,
	sizeof(FFarmGridCellData),
	alignof(FFarmGridCellData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFarmGridCellData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFarmGridCellData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFarmGridCellData()
{
	if (!Z_Registration_Info_UScriptStruct_FarmGridCellData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FarmGridCellData.InnerSingleton, Z_Construct_UScriptStruct_FFarmGridCellData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FarmGridCellData.InnerSingleton;
}
// End ScriptStruct FFarmGridCellData

// Begin ScriptStruct FFarmWaterFragment
static_assert(std::is_polymorphic<FFarmWaterFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FFarmWaterFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FarmWaterFragment;
class UScriptStruct* FFarmWaterFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FarmWaterFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FarmWaterFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFarmWaterFragment, (UObject*)Z_Construct_UPackage__Script_MassEntityTestSuite(), TEXT("FarmWaterFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FarmWaterFragment.OuterSingleton;
}
template<> MASSENTITYTESTSUITE_API UScriptStruct* StaticStruct<FFarmWaterFragment>()
{
	return FFarmWaterFragment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFarmWaterFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFarmWaterFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFarmWaterFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"FarmWaterFragment",
	nullptr,
	0,
	sizeof(FFarmWaterFragment),
	alignof(FFarmWaterFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFarmWaterFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFarmWaterFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFarmWaterFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FarmWaterFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FarmWaterFragment.InnerSingleton, Z_Construct_UScriptStruct_FFarmWaterFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FarmWaterFragment.InnerSingleton;
}
// End ScriptStruct FFarmWaterFragment

// Begin ScriptStruct FFarmFlowerFragment
static_assert(std::is_polymorphic<FFarmFlowerFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FFarmFlowerFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FarmFlowerFragment;
class UScriptStruct* FFarmFlowerFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FarmFlowerFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FarmFlowerFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFarmFlowerFragment, (UObject*)Z_Construct_UPackage__Script_MassEntityTestSuite(), TEXT("FarmFlowerFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FarmFlowerFragment.OuterSingleton;
}
template<> MASSENTITYTESTSUITE_API UScriptStruct* StaticStruct<FFarmFlowerFragment>()
{
	return FFarmFlowerFragment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFarmFlowerFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFarmFlowerFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFarmFlowerFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"FarmFlowerFragment",
	nullptr,
	0,
	sizeof(FFarmFlowerFragment),
	alignof(FFarmFlowerFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFarmFlowerFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFarmFlowerFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFarmFlowerFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FarmFlowerFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FarmFlowerFragment.InnerSingleton, Z_Construct_UScriptStruct_FFarmFlowerFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FarmFlowerFragment.InnerSingleton;
}
// End ScriptStruct FFarmFlowerFragment

// Begin ScriptStruct FFarmCropFragment
static_assert(std::is_polymorphic<FFarmCropFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FFarmCropFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FarmCropFragment;
class UScriptStruct* FFarmCropFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FarmCropFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FarmCropFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFarmCropFragment, (UObject*)Z_Construct_UPackage__Script_MassEntityTestSuite(), TEXT("FarmCropFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FarmCropFragment.OuterSingleton;
}
template<> MASSENTITYTESTSUITE_API UScriptStruct* StaticStruct<FFarmCropFragment>()
{
	return FFarmCropFragment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFarmCropFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFarmCropFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFarmCropFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"FarmCropFragment",
	nullptr,
	0,
	sizeof(FFarmCropFragment),
	alignof(FFarmCropFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFarmCropFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFarmCropFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFarmCropFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FarmCropFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FarmCropFragment.InnerSingleton, Z_Construct_UScriptStruct_FFarmCropFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FarmCropFragment.InnerSingleton;
}
// End ScriptStruct FFarmCropFragment

// Begin ScriptStruct FFarmVisualFragment
static_assert(std::is_polymorphic<FFarmVisualFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FFarmVisualFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FarmVisualFragment;
class UScriptStruct* FFarmVisualFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FarmVisualFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FarmVisualFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFarmVisualFragment, (UObject*)Z_Construct_UPackage__Script_MassEntityTestSuite(), TEXT("FarmVisualFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FarmVisualFragment.OuterSingleton;
}
template<> MASSENTITYTESTSUITE_API UScriptStruct* StaticStruct<FFarmVisualFragment>()
{
	return FFarmVisualFragment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFarmVisualFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFarmVisualFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFarmVisualFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"FarmVisualFragment",
	nullptr,
	0,
	sizeof(FFarmVisualFragment),
	alignof(FFarmVisualFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFarmVisualFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFarmVisualFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFarmVisualFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FarmVisualFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FarmVisualFragment.InnerSingleton, Z_Construct_UScriptStruct_FFarmVisualFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FarmVisualFragment.InnerSingleton;
}
// End ScriptStruct FFarmVisualFragment

// Begin ScriptStruct FHarvestTimerFragment
static_assert(std::is_polymorphic<FHarvestTimerFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FHarvestTimerFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HarvestTimerFragment;
class UScriptStruct* FHarvestTimerFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HarvestTimerFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HarvestTimerFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHarvestTimerFragment, (UObject*)Z_Construct_UPackage__Script_MassEntityTestSuite(), TEXT("HarvestTimerFragment"));
	}
	return Z_Registration_Info_UScriptStruct_HarvestTimerFragment.OuterSingleton;
}
template<> MASSENTITYTESTSUITE_API UScriptStruct* StaticStruct<FHarvestTimerFragment>()
{
	return FHarvestTimerFragment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHarvestTimerFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHarvestTimerFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHarvestTimerFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"HarvestTimerFragment",
	nullptr,
	0,
	sizeof(FHarvestTimerFragment),
	alignof(FHarvestTimerFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHarvestTimerFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHarvestTimerFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHarvestTimerFragment()
{
	if (!Z_Registration_Info_UScriptStruct_HarvestTimerFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HarvestTimerFragment.InnerSingleton, Z_Construct_UScriptStruct_FHarvestTimerFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HarvestTimerFragment.InnerSingleton;
}
// End ScriptStruct FHarvestTimerFragment

// Begin Class UFarmProcessorBase
void UFarmProcessorBase::StaticRegisterNativesUFarmProcessorBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFarmProcessorBase);
UClass* Z_Construct_UClass_UFarmProcessorBase_NoRegister()
{
	return UFarmProcessorBase::StaticClass();
}
struct Z_Construct_UClass_UFarmProcessorBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "MassEntityTestFarmPlot.h" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFarmProcessorBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFarmProcessorBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFarmProcessorBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFarmProcessorBase_Statics::ClassParams = {
	&UFarmProcessorBase::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x400030A7u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFarmProcessorBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UFarmProcessorBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFarmProcessorBase()
{
	if (!Z_Registration_Info_UClass_UFarmProcessorBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFarmProcessorBase.OuterSingleton, Z_Construct_UClass_UFarmProcessorBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFarmProcessorBase.OuterSingleton;
}
template<> MASSENTITYTESTSUITE_API UClass* StaticClass<UFarmProcessorBase>()
{
	return UFarmProcessorBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFarmProcessorBase);
UFarmProcessorBase::~UFarmProcessorBase() {}
// End Class UFarmProcessorBase

// Begin Class UFarmWaterProcessor
void UFarmWaterProcessor::StaticRegisterNativesUFarmWaterProcessor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFarmWaterProcessor);
UClass* Z_Construct_UClass_UFarmWaterProcessor_NoRegister()
{
	return UFarmWaterProcessor::StaticClass();
}
struct Z_Construct_UClass_UFarmWaterProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "MassEntityTestFarmPlot.h" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFarmWaterProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFarmWaterProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFarmProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFarmWaterProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFarmWaterProcessor_Statics::ClassParams = {
	&UFarmWaterProcessor::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x400030A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFarmWaterProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UFarmWaterProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFarmWaterProcessor()
{
	if (!Z_Registration_Info_UClass_UFarmWaterProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFarmWaterProcessor.OuterSingleton, Z_Construct_UClass_UFarmWaterProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFarmWaterProcessor.OuterSingleton;
}
template<> MASSENTITYTESTSUITE_API UClass* StaticClass<UFarmWaterProcessor>()
{
	return UFarmWaterProcessor::StaticClass();
}
UFarmWaterProcessor::UFarmWaterProcessor() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFarmWaterProcessor);
UFarmWaterProcessor::~UFarmWaterProcessor() {}
// End Class UFarmWaterProcessor

// Begin Class UFarmHarvestTimerSystem_Flowers
void UFarmHarvestTimerSystem_Flowers::StaticRegisterNativesUFarmHarvestTimerSystem_Flowers()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFarmHarvestTimerSystem_Flowers);
UClass* Z_Construct_UClass_UFarmHarvestTimerSystem_Flowers_NoRegister()
{
	return UFarmHarvestTimerSystem_Flowers::StaticClass();
}
struct Z_Construct_UClass_UFarmHarvestTimerSystem_Flowers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "MassEntityTestFarmPlot.h" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFarmHarvestTimerSystem_Flowers>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFarmHarvestTimerSystem_Flowers_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFarmProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFarmHarvestTimerSystem_Flowers_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFarmHarvestTimerSystem_Flowers_Statics::ClassParams = {
	&UFarmHarvestTimerSystem_Flowers::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x400030A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFarmHarvestTimerSystem_Flowers_Statics::Class_MetaDataParams), Z_Construct_UClass_UFarmHarvestTimerSystem_Flowers_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFarmHarvestTimerSystem_Flowers()
{
	if (!Z_Registration_Info_UClass_UFarmHarvestTimerSystem_Flowers.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFarmHarvestTimerSystem_Flowers.OuterSingleton, Z_Construct_UClass_UFarmHarvestTimerSystem_Flowers_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFarmHarvestTimerSystem_Flowers.OuterSingleton;
}
template<> MASSENTITYTESTSUITE_API UClass* StaticClass<UFarmHarvestTimerSystem_Flowers>()
{
	return UFarmHarvestTimerSystem_Flowers::StaticClass();
}
UFarmHarvestTimerSystem_Flowers::UFarmHarvestTimerSystem_Flowers() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFarmHarvestTimerSystem_Flowers);
UFarmHarvestTimerSystem_Flowers::~UFarmHarvestTimerSystem_Flowers() {}
// End Class UFarmHarvestTimerSystem_Flowers

// Begin Class UFarmHarvestTimerSystem_Crops
void UFarmHarvestTimerSystem_Crops::StaticRegisterNativesUFarmHarvestTimerSystem_Crops()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFarmHarvestTimerSystem_Crops);
UClass* Z_Construct_UClass_UFarmHarvestTimerSystem_Crops_NoRegister()
{
	return UFarmHarvestTimerSystem_Crops::StaticClass();
}
struct Z_Construct_UClass_UFarmHarvestTimerSystem_Crops_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "MassEntityTestFarmPlot.h" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFarmHarvestTimerSystem_Crops>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFarmHarvestTimerSystem_Crops_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFarmProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFarmHarvestTimerSystem_Crops_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFarmHarvestTimerSystem_Crops_Statics::ClassParams = {
	&UFarmHarvestTimerSystem_Crops::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x400030A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFarmHarvestTimerSystem_Crops_Statics::Class_MetaDataParams), Z_Construct_UClass_UFarmHarvestTimerSystem_Crops_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFarmHarvestTimerSystem_Crops()
{
	if (!Z_Registration_Info_UClass_UFarmHarvestTimerSystem_Crops.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFarmHarvestTimerSystem_Crops.OuterSingleton, Z_Construct_UClass_UFarmHarvestTimerSystem_Crops_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFarmHarvestTimerSystem_Crops.OuterSingleton;
}
template<> MASSENTITYTESTSUITE_API UClass* StaticClass<UFarmHarvestTimerSystem_Crops>()
{
	return UFarmHarvestTimerSystem_Crops::StaticClass();
}
UFarmHarvestTimerSystem_Crops::UFarmHarvestTimerSystem_Crops() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFarmHarvestTimerSystem_Crops);
UFarmHarvestTimerSystem_Crops::~UFarmHarvestTimerSystem_Crops() {}
// End Class UFarmHarvestTimerSystem_Crops

// Begin Class UFarmHarvestTimerExpired
void UFarmHarvestTimerExpired::StaticRegisterNativesUFarmHarvestTimerExpired()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFarmHarvestTimerExpired);
UClass* Z_Construct_UClass_UFarmHarvestTimerExpired_NoRegister()
{
	return UFarmHarvestTimerExpired::StaticClass();
}
struct Z_Construct_UClass_UFarmHarvestTimerExpired_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "MassEntityTestFarmPlot.h" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFarmHarvestTimerExpired>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFarmHarvestTimerExpired_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFarmProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFarmHarvestTimerExpired_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFarmHarvestTimerExpired_Statics::ClassParams = {
	&UFarmHarvestTimerExpired::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x400030A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFarmHarvestTimerExpired_Statics::Class_MetaDataParams), Z_Construct_UClass_UFarmHarvestTimerExpired_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFarmHarvestTimerExpired()
{
	if (!Z_Registration_Info_UClass_UFarmHarvestTimerExpired.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFarmHarvestTimerExpired.OuterSingleton, Z_Construct_UClass_UFarmHarvestTimerExpired_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFarmHarvestTimerExpired.OuterSingleton;
}
template<> MASSENTITYTESTSUITE_API UClass* StaticClass<UFarmHarvestTimerExpired>()
{
	return UFarmHarvestTimerExpired::StaticClass();
}
UFarmHarvestTimerExpired::UFarmHarvestTimerExpired() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFarmHarvestTimerExpired);
UFarmHarvestTimerExpired::~UFarmHarvestTimerExpired() {}
// End Class UFarmHarvestTimerExpired

// Begin Class UFarmHarvestTimerSetIcon
void UFarmHarvestTimerSetIcon::StaticRegisterNativesUFarmHarvestTimerSetIcon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFarmHarvestTimerSetIcon);
UClass* Z_Construct_UClass_UFarmHarvestTimerSetIcon_NoRegister()
{
	return UFarmHarvestTimerSetIcon::StaticClass();
}
struct Z_Construct_UClass_UFarmHarvestTimerSetIcon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "MassEntityTestFarmPlot.h" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HarvestIconISMC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HarvestIconISMC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFarmHarvestTimerSetIcon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFarmHarvestTimerSetIcon_Statics::NewProp_HarvestIconISMC = { "HarvestIconISMC", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFarmHarvestTimerSetIcon, HarvestIconISMC), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HarvestIconISMC_MetaData), NewProp_HarvestIconISMC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFarmHarvestTimerSetIcon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFarmHarvestTimerSetIcon_Statics::NewProp_HarvestIconISMC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFarmHarvestTimerSetIcon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFarmHarvestTimerSetIcon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFarmProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFarmHarvestTimerSetIcon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFarmHarvestTimerSetIcon_Statics::ClassParams = {
	&UFarmHarvestTimerSetIcon::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFarmHarvestTimerSetIcon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFarmHarvestTimerSetIcon_Statics::PropPointers),
	0,
	0x408030A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFarmHarvestTimerSetIcon_Statics::Class_MetaDataParams), Z_Construct_UClass_UFarmHarvestTimerSetIcon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFarmHarvestTimerSetIcon()
{
	if (!Z_Registration_Info_UClass_UFarmHarvestTimerSetIcon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFarmHarvestTimerSetIcon.OuterSingleton, Z_Construct_UClass_UFarmHarvestTimerSetIcon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFarmHarvestTimerSetIcon.OuterSingleton;
}
template<> MASSENTITYTESTSUITE_API UClass* StaticClass<UFarmHarvestTimerSetIcon>()
{
	return UFarmHarvestTimerSetIcon::StaticClass();
}
UFarmHarvestTimerSetIcon::UFarmHarvestTimerSetIcon() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFarmHarvestTimerSetIcon);
UFarmHarvestTimerSetIcon::~UFarmHarvestTimerSetIcon() {}
// End Class UFarmHarvestTimerSetIcon

// Begin Class AMassEntityTestFarmPlot
void AMassEntityTestFarmPlot::StaticRegisterNativesAMassEntityTestFarmPlot()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMassEntityTestFarmPlot);
UClass* Z_Construct_UClass_AMassEntityTestFarmPlot_NoRegister()
{
	return AMassEntityTestFarmPlot::StaticClass();
}
struct Z_Construct_UClass_AMassEntityTestFarmPlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "MassEntityTestFarmPlot.h" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridCellWidth_MetaData[] = {
		{ "Category", "Farm" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridCellHeight_MetaData[] = {
		{ "Category", "Farm" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HarvestIconScale_MetaData[] = {
		{ "Category", "Farm" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisualDataTable_MetaData[] = {
		{ "Category", "Farm" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisualDataISMCs_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerFrameSystems_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerSecondSystems_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestDataFlowerIndicies_MetaData[] = {
		{ "Category", "Farm" },
		{ "Comment", "// Indices into VisualDataTable for flowers\n" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
		{ "ToolTip", "Indices into VisualDataTable for flowers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestDataCropIndicies_MetaData[] = {
		{ "Category", "Farm" },
		{ "Comment", "// Indices into VisualDataTable for crops\n" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
		{ "ToolTip", "Indices into VisualDataTable for crops" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisualNearCullDistance_MetaData[] = {
		{ "Category", "Farm" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisualFarCullDistance_MetaData[] = {
		{ "Category", "Farm" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconNearCullDistance_MetaData[] = {
		{ "Category", "Farm" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconFarCullDistance_MetaData[] = {
		{ "Category", "Farm" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HarvestIconISMC_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Farm" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MassEntityTestFarmPlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GridCellWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GridCellHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HarvestIconScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VisualDataTable_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VisualDataTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VisualDataISMCs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VisualDataISMCs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PerFrameSystems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PerFrameSystems;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PerSecondSystems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PerSecondSystems;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_TestDataFlowerIndicies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TestDataFlowerIndicies;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_TestDataCropIndicies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TestDataCropIndicies;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_VisualNearCullDistance;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_VisualFarCullDistance;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_IconNearCullDistance;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_IconFarCullDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HarvestIconISMC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMassEntityTestFarmPlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_GridCellWidth = { "GridCellWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassEntityTestFarmPlot, GridCellWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridCellWidth_MetaData), NewProp_GridCellWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_GridCellHeight = { "GridCellHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassEntityTestFarmPlot, GridCellHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridCellHeight_MetaData), NewProp_GridCellHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_HarvestIconScale = { "HarvestIconScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassEntityTestFarmPlot, HarvestIconScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HarvestIconScale_MetaData), NewProp_HarvestIconScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_VisualDataTable_Inner = { "VisualDataTable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFarmVisualDataRow, METADATA_PARAMS(0, nullptr) }; // 1300275435
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_VisualDataTable = { "VisualDataTable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassEntityTestFarmPlot, VisualDataTable), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisualDataTable_MetaData), NewProp_VisualDataTable_MetaData) }; // 1300275435
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_VisualDataISMCs_Inner = { "VisualDataISMCs", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_VisualDataISMCs = { "VisualDataISMCs", nullptr, (EPropertyFlags)0x0114008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassEntityTestFarmPlot, VisualDataISMCs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisualDataISMCs_MetaData), NewProp_VisualDataISMCs_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_PerFrameSystems_Inner = { "PerFrameSystems", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMassProcessor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_PerFrameSystems = { "PerFrameSystems", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassEntityTestFarmPlot, PerFrameSystems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerFrameSystems_MetaData), NewProp_PerFrameSystems_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_PerSecondSystems_Inner = { "PerSecondSystems", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMassProcessor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_PerSecondSystems = { "PerSecondSystems", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassEntityTestFarmPlot, PerSecondSystems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerSecondSystems_MetaData), NewProp_PerSecondSystems_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_TestDataFlowerIndicies_Inner = { "TestDataFlowerIndicies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_TestDataFlowerIndicies = { "TestDataFlowerIndicies", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassEntityTestFarmPlot, TestDataFlowerIndicies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestDataFlowerIndicies_MetaData), NewProp_TestDataFlowerIndicies_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_TestDataCropIndicies_Inner = { "TestDataCropIndicies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_TestDataCropIndicies = { "TestDataCropIndicies", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassEntityTestFarmPlot, TestDataCropIndicies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestDataCropIndicies_MetaData), NewProp_TestDataCropIndicies_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_VisualNearCullDistance = { "VisualNearCullDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassEntityTestFarmPlot, VisualNearCullDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisualNearCullDistance_MetaData), NewProp_VisualNearCullDistance_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_VisualFarCullDistance = { "VisualFarCullDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassEntityTestFarmPlot, VisualFarCullDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisualFarCullDistance_MetaData), NewProp_VisualFarCullDistance_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_IconNearCullDistance = { "IconNearCullDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassEntityTestFarmPlot, IconNearCullDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconNearCullDistance_MetaData), NewProp_IconNearCullDistance_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_IconFarCullDistance = { "IconFarCullDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassEntityTestFarmPlot, IconFarCullDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconFarCullDistance_MetaData), NewProp_IconFarCullDistance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_HarvestIconISMC = { "HarvestIconISMC", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassEntityTestFarmPlot, HarvestIconISMC), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HarvestIconISMC_MetaData), NewProp_HarvestIconISMC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_GridCellWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_GridCellHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_HarvestIconScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_VisualDataTable_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_VisualDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_VisualDataISMCs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_VisualDataISMCs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_PerFrameSystems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_PerFrameSystems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_PerSecondSystems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_PerSecondSystems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_TestDataFlowerIndicies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_TestDataFlowerIndicies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_TestDataCropIndicies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_TestDataCropIndicies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_VisualNearCullDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_VisualFarCullDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_IconNearCullDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_IconFarCullDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::NewProp_HarvestIconISMC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntityTestSuite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::ClassParams = {
	&AMassEntityTestFarmPlot::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::Class_MetaDataParams), Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMassEntityTestFarmPlot()
{
	if (!Z_Registration_Info_UClass_AMassEntityTestFarmPlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMassEntityTestFarmPlot.OuterSingleton, Z_Construct_UClass_AMassEntityTestFarmPlot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMassEntityTestFarmPlot.OuterSingleton;
}
template<> MASSENTITYTESTSUITE_API UClass* StaticClass<AMassEntityTestFarmPlot>()
{
	return AMassEntityTestFarmPlot::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMassEntityTestFarmPlot);
AMassEntityTestFarmPlot::~AMassEntityTestFarmPlot() {}
// End Class AMassEntityTestFarmPlot

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFarmVisualDataRow::StaticStruct, Z_Construct_UScriptStruct_FFarmVisualDataRow_Statics::NewStructOps, TEXT("FarmVisualDataRow"), &Z_Registration_Info_UScriptStruct_FarmVisualDataRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFarmVisualDataRow), 1300275435U) },
		{ FFarmJustBecameReadyToHarvestTag::StaticStruct, Z_Construct_UScriptStruct_FFarmJustBecameReadyToHarvestTag_Statics::NewStructOps, TEXT("FarmJustBecameReadyToHarvestTag"), &Z_Registration_Info_UScriptStruct_FarmJustBecameReadyToHarvestTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFarmJustBecameReadyToHarvestTag), 3536470003U) },
		{ FFarmReadyToHarvestTag::StaticStruct, Z_Construct_UScriptStruct_FFarmReadyToHarvestTag_Statics::NewStructOps, TEXT("FarmReadyToHarvestTag"), &Z_Registration_Info_UScriptStruct_FarmReadyToHarvestTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFarmReadyToHarvestTag), 1228304402U) },
		{ FFarmGridCellData::StaticStruct, Z_Construct_UScriptStruct_FFarmGridCellData_Statics::NewStructOps, TEXT("FarmGridCellData"), &Z_Registration_Info_UScriptStruct_FarmGridCellData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFarmGridCellData), 2457853734U) },
		{ FFarmWaterFragment::StaticStruct, Z_Construct_UScriptStruct_FFarmWaterFragment_Statics::NewStructOps, TEXT("FarmWaterFragment"), &Z_Registration_Info_UScriptStruct_FarmWaterFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFarmWaterFragment), 2238365983U) },
		{ FFarmFlowerFragment::StaticStruct, Z_Construct_UScriptStruct_FFarmFlowerFragment_Statics::NewStructOps, TEXT("FarmFlowerFragment"), &Z_Registration_Info_UScriptStruct_FarmFlowerFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFarmFlowerFragment), 3663164249U) },
		{ FFarmCropFragment::StaticStruct, Z_Construct_UScriptStruct_FFarmCropFragment_Statics::NewStructOps, TEXT("FarmCropFragment"), &Z_Registration_Info_UScriptStruct_FarmCropFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFarmCropFragment), 4067623344U) },
		{ FFarmVisualFragment::StaticStruct, Z_Construct_UScriptStruct_FFarmVisualFragment_Statics::NewStructOps, TEXT("FarmVisualFragment"), &Z_Registration_Info_UScriptStruct_FarmVisualFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFarmVisualFragment), 3129116802U) },
		{ FHarvestTimerFragment::StaticStruct, Z_Construct_UScriptStruct_FHarvestTimerFragment_Statics::NewStructOps, TEXT("HarvestTimerFragment"), &Z_Registration_Info_UScriptStruct_HarvestTimerFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHarvestTimerFragment), 1476933749U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFarmProcessorBase, UFarmProcessorBase::StaticClass, TEXT("UFarmProcessorBase"), &Z_Registration_Info_UClass_UFarmProcessorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFarmProcessorBase), 385281483U) },
		{ Z_Construct_UClass_UFarmWaterProcessor, UFarmWaterProcessor::StaticClass, TEXT("UFarmWaterProcessor"), &Z_Registration_Info_UClass_UFarmWaterProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFarmWaterProcessor), 585387626U) },
		{ Z_Construct_UClass_UFarmHarvestTimerSystem_Flowers, UFarmHarvestTimerSystem_Flowers::StaticClass, TEXT("UFarmHarvestTimerSystem_Flowers"), &Z_Registration_Info_UClass_UFarmHarvestTimerSystem_Flowers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFarmHarvestTimerSystem_Flowers), 380712029U) },
		{ Z_Construct_UClass_UFarmHarvestTimerSystem_Crops, UFarmHarvestTimerSystem_Crops::StaticClass, TEXT("UFarmHarvestTimerSystem_Crops"), &Z_Registration_Info_UClass_UFarmHarvestTimerSystem_Crops, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFarmHarvestTimerSystem_Crops), 2613933345U) },
		{ Z_Construct_UClass_UFarmHarvestTimerExpired, UFarmHarvestTimerExpired::StaticClass, TEXT("UFarmHarvestTimerExpired"), &Z_Registration_Info_UClass_UFarmHarvestTimerExpired, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFarmHarvestTimerExpired), 725918418U) },
		{ Z_Construct_UClass_UFarmHarvestTimerSetIcon, UFarmHarvestTimerSetIcon::StaticClass, TEXT("UFarmHarvestTimerSetIcon"), &Z_Registration_Info_UClass_UFarmHarvestTimerSetIcon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFarmHarvestTimerSetIcon), 5505946U) },
		{ Z_Construct_UClass_AMassEntityTestFarmPlot, AMassEntityTestFarmPlot::StaticClass, TEXT("AMassEntityTestFarmPlot"), &Z_Registration_Info_UClass_AMassEntityTestFarmPlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMassEntityTestFarmPlot), 3620785299U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_2011137069(TEXT("/Script/MassEntityTestSuite"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_MassEntityTestSuite_Public_MassEntityTestFarmPlot_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
