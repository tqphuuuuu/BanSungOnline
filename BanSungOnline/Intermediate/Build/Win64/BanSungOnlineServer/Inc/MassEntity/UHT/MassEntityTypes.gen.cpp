// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MassEntity/Public/MassEntityTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassEntityTypes() {}

// Begin Cross Module References
MASSENTITY_API UEnum* Z_Construct_UEnum_MassEntity_EMassObservedOperation();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassChunkFragment();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassConstSharedFragment();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassEntityHandle();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassSharedFragment();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassTag();
UPackage* Z_Construct_UPackage__Script_MassEntity();
// End Cross Module References

// Begin ScriptStruct FMassFragment
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassFragment;
class UScriptStruct* FMassFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassFragment, (UObject*)Z_Construct_UPackage__Script_MassEntity(), TEXT("MassFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassFragment.OuterSingleton;
}
template<> MASSENTITY_API UScriptStruct* StaticStruct<FMassFragment>()
{
	return FMassFragment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// This is the base class for all lightweight fragments\n" },
		{ "ModuleRelativePath", "Public/MassEntityTypes.h" },
		{ "ToolTip", "This is the base class for all lightweight fragments" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
	nullptr,
	&NewStructOps,
	"MassFragment",
	nullptr,
	0,
	sizeof(FMassFragment),
	alignof(FMassFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassFragment()
{
	if (!Z_Registration_Info_UScriptStruct_MassFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassFragment.InnerSingleton;
}
// End ScriptStruct FMassFragment

// Begin ScriptStruct FMassTag
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTag;
class UScriptStruct* FMassTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTag, (UObject*)Z_Construct_UPackage__Script_MassEntity(), TEXT("MassTag"));
	}
	return Z_Registration_Info_UScriptStruct_MassTag.OuterSingleton;
}
template<> MASSENTITY_API UScriptStruct* StaticStruct<FMassTag>()
{
	return FMassTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// This is the base class for types that will only be tested for presence/absence, i.e. Tags.\n// Subclasses should never contain any member properties.\n" },
		{ "ModuleRelativePath", "Public/MassEntityTypes.h" },
		{ "ToolTip", "This is the base class for types that will only be tested for presence/absence, i.e. Tags.\nSubclasses should never contain any member properties." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
	nullptr,
	&NewStructOps,
	"MassTag",
	nullptr,
	0,
	sizeof(FMassTag),
	alignof(FMassTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTag()
{
	if (!Z_Registration_Info_UScriptStruct_MassTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTag.InnerSingleton, Z_Construct_UScriptStruct_FMassTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassTag.InnerSingleton;
}
// End ScriptStruct FMassTag

// Begin ScriptStruct FMassChunkFragment
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassChunkFragment;
class UScriptStruct* FMassChunkFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassChunkFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassChunkFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassChunkFragment, (UObject*)Z_Construct_UPackage__Script_MassEntity(), TEXT("MassChunkFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassChunkFragment.OuterSingleton;
}
template<> MASSENTITY_API UScriptStruct* StaticStruct<FMassChunkFragment>()
{
	return FMassChunkFragment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassChunkFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassEntityTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassChunkFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassChunkFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
	nullptr,
	&NewStructOps,
	"MassChunkFragment",
	nullptr,
	0,
	sizeof(FMassChunkFragment),
	alignof(FMassChunkFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassChunkFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassChunkFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassChunkFragment()
{
	if (!Z_Registration_Info_UScriptStruct_MassChunkFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassChunkFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassChunkFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassChunkFragment.InnerSingleton;
}
// End ScriptStruct FMassChunkFragment

// Begin ScriptStruct FMassSharedFragment
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassSharedFragment;
class UScriptStruct* FMassSharedFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassSharedFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassSharedFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassSharedFragment, (UObject*)Z_Construct_UPackage__Script_MassEntity(), TEXT("MassSharedFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassSharedFragment.OuterSingleton;
}
template<> MASSENTITY_API UScriptStruct* StaticStruct<FMassSharedFragment>()
{
	return FMassSharedFragment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassSharedFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassEntityTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassSharedFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassSharedFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
	nullptr,
	&NewStructOps,
	"MassSharedFragment",
	nullptr,
	0,
	sizeof(FMassSharedFragment),
	alignof(FMassSharedFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSharedFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassSharedFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassSharedFragment()
{
	if (!Z_Registration_Info_UScriptStruct_MassSharedFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassSharedFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassSharedFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassSharedFragment.InnerSingleton;
}
// End ScriptStruct FMassSharedFragment

// Begin ScriptStruct FMassConstSharedFragment
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassConstSharedFragment;
class UScriptStruct* FMassConstSharedFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassConstSharedFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassConstSharedFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassConstSharedFragment, (UObject*)Z_Construct_UPackage__Script_MassEntity(), TEXT("MassConstSharedFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassConstSharedFragment.OuterSingleton;
}
template<> MASSENTITY_API UScriptStruct* StaticStruct<FMassConstSharedFragment>()
{
	return FMassConstSharedFragment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassConstSharedFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassEntityTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassConstSharedFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassConstSharedFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
	nullptr,
	&NewStructOps,
	"MassConstSharedFragment",
	nullptr,
	0,
	sizeof(FMassConstSharedFragment),
	alignof(FMassConstSharedFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassConstSharedFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassConstSharedFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassConstSharedFragment()
{
	if (!Z_Registration_Info_UScriptStruct_MassConstSharedFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassConstSharedFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassConstSharedFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassConstSharedFragment.InnerSingleton;
}
// End ScriptStruct FMassConstSharedFragment

// Begin ScriptStruct FMassEntityHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassEntityHandle;
class UScriptStruct* FMassEntityHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassEntityHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassEntityHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassEntityHandle, (UObject*)Z_Construct_UPackage__Script_MassEntity(), TEXT("MassEntityHandle"));
	}
	return Z_Registration_Info_UScriptStruct_MassEntityHandle.OuterSingleton;
}
template<> MASSENTITY_API UScriptStruct* StaticStruct<FMassEntityHandle>()
{
	return FMassEntityHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassEntityHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// A handle to a lightweight entity.  An entity is used in conjunction with the FMassEntityManager\n// for the current world and can contain lightweight fragments.\n" },
		{ "ModuleRelativePath", "Public/MassEntityTypes.h" },
		{ "ToolTip", "A handle to a lightweight entity.  An entity is used in conjunction with the FMassEntityManager\nfor the current world and can contain lightweight fragments." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "Category", "Mass|Debug" },
		{ "ModuleRelativePath", "Public/MassEntityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SerialNumber_MetaData[] = {
		{ "Category", "Mass|Debug" },
		{ "ModuleRelativePath", "Public/MassEntityTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SerialNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassEntityHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMassEntityHandle_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassEntityHandle, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMassEntityHandle_Statics::NewProp_SerialNumber = { "SerialNumber", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassEntityHandle, SerialNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SerialNumber_MetaData), NewProp_SerialNumber_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassEntityHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassEntityHandle_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassEntityHandle_Statics::NewProp_SerialNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntityHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassEntityHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
	nullptr,
	&NewStructOps,
	"MassEntityHandle",
	Z_Construct_UScriptStruct_FMassEntityHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntityHandle_Statics::PropPointers),
	sizeof(FMassEntityHandle),
	alignof(FMassEntityHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntityHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassEntityHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassEntityHandle()
{
	if (!Z_Registration_Info_UScriptStruct_MassEntityHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassEntityHandle.InnerSingleton, Z_Construct_UScriptStruct_FMassEntityHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassEntityHandle.InnerSingleton;
}
// End ScriptStruct FMassEntityHandle

// Begin Enum EMassObservedOperation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMassObservedOperation;
static UEnum* EMassObservedOperation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMassObservedOperation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMassObservedOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassEntity_EMassObservedOperation, (UObject*)Z_Construct_UPackage__Script_MassEntity(), TEXT("EMassObservedOperation"));
	}
	return Z_Registration_Info_UEnum_EMassObservedOperation.OuterSingleton;
}
template<> MASSENTITY_API UEnum* StaticEnum<EMassObservedOperation>()
{
	return EMassObservedOperation_StaticEnum();
}
struct Z_Construct_UEnum_MassEntity_EMassObservedOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Add.Name", "EMassObservedOperation::Add" },
		{ "MAX.Comment", "// @todo Keeping this here as a indication of design intent. For now we handle entity destruction like removal, but \n// there might be computationally expensive cases where we might want to avoid for soon-to-be-dead entities. \n// Destroy,\n// @todo another planned supported operation type\n// Touch,\n" },
		{ "MAX.Name", "EMassObservedOperation::MAX" },
		{ "MAX.ToolTip", "@todo Keeping this here as a indication of design intent. For now we handle entity destruction like removal, but\nthere might be computationally expensive cases where we might want to avoid for soon-to-be-dead entities.\nDestroy,\n@todo another planned supported operation type\nTouch," },
		{ "ModuleRelativePath", "Public/MassEntityTypes.h" },
		{ "Remove.Name", "EMassObservedOperation::Remove" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMassObservedOperation::Add", (int64)EMassObservedOperation::Add },
		{ "EMassObservedOperation::Remove", (int64)EMassObservedOperation::Remove },
		{ "EMassObservedOperation::MAX", (int64)EMassObservedOperation::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassEntity_EMassObservedOperation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MassEntity,
	nullptr,
	"EMassObservedOperation",
	"EMassObservedOperation",
	Z_Construct_UEnum_MassEntity_EMassObservedOperation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MassEntity_EMassObservedOperation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MassEntity_EMassObservedOperation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MassEntity_EMassObservedOperation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MassEntity_EMassObservedOperation()
{
	if (!Z_Registration_Info_UEnum_EMassObservedOperation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMassObservedOperation.InnerSingleton, Z_Construct_UEnum_MassEntity_EMassObservedOperation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMassObservedOperation.InnerSingleton;
}
// End Enum EMassObservedOperation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassEntityTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMassObservedOperation_StaticEnum, TEXT("EMassObservedOperation"), &Z_Registration_Info_UEnum_EMassObservedOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2703906959U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassFragment::StaticStruct, Z_Construct_UScriptStruct_FMassFragment_Statics::NewStructOps, TEXT("MassFragment"), &Z_Registration_Info_UScriptStruct_MassFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassFragment), 2890138042U) },
		{ FMassTag::StaticStruct, Z_Construct_UScriptStruct_FMassTag_Statics::NewStructOps, TEXT("MassTag"), &Z_Registration_Info_UScriptStruct_MassTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTag), 2801329513U) },
		{ FMassChunkFragment::StaticStruct, Z_Construct_UScriptStruct_FMassChunkFragment_Statics::NewStructOps, TEXT("MassChunkFragment"), &Z_Registration_Info_UScriptStruct_MassChunkFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassChunkFragment), 4006899788U) },
		{ FMassSharedFragment::StaticStruct, Z_Construct_UScriptStruct_FMassSharedFragment_Statics::NewStructOps, TEXT("MassSharedFragment"), &Z_Registration_Info_UScriptStruct_MassSharedFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassSharedFragment), 2633078602U) },
		{ FMassConstSharedFragment::StaticStruct, Z_Construct_UScriptStruct_FMassConstSharedFragment_Statics::NewStructOps, TEXT("MassConstSharedFragment"), &Z_Registration_Info_UScriptStruct_MassConstSharedFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassConstSharedFragment), 3913946698U) },
		{ FMassEntityHandle::StaticStruct, Z_Construct_UScriptStruct_FMassEntityHandle_Statics::NewStructOps, TEXT("MassEntityHandle"), &Z_Registration_Info_UScriptStruct_MassEntityHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassEntityHandle), 1338153741U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassEntityTypes_h_3586609766(TEXT("/Script/MassEntity"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassEntityTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassEntityTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassEntityTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassEntityTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
