// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MassEntity/Public/MassObserverRegistry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassObserverRegistry() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
MASSENTITY_API UClass* Z_Construct_UClass_UMassObserverRegistry();
MASSENTITY_API UClass* Z_Construct_UClass_UMassObserverRegistry_NoRegister();
MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor_NoRegister();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassEntityObserverClassesMap();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassProcessorClassCollection();
UPackage* Z_Construct_UPackage__Script_MassEntity();
// End Cross Module References

// Begin ScriptStruct FMassProcessorClassCollection
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassProcessorClassCollection;
class UScriptStruct* FMassProcessorClassCollection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassProcessorClassCollection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassProcessorClassCollection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassProcessorClassCollection, (UObject*)Z_Construct_UPackage__Script_MassEntity(), TEXT("MassProcessorClassCollection"));
	}
	return Z_Registration_Info_UScriptStruct_MassProcessorClassCollection.OuterSingleton;
}
template<> MASSENTITY_API UScriptStruct* StaticStruct<FMassProcessorClassCollection>()
{
	return FMassProcessorClassCollection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassProcessorClassCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A wrapper type for a TArray to support having map-of-arrays UPROPERTY members in FMassEntityObserverClassesMap\n */" },
		{ "ModuleRelativePath", "Public/MassObserverRegistry.h" },
		{ "ToolTip", "A wrapper type for a TArray to support having map-of-arrays UPROPERTY members in FMassEntityObserverClassesMap" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassCollection_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassObserverRegistry.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClassCollection_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ClassCollection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassProcessorClassCollection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMassProcessorClassCollection_Statics::NewProp_ClassCollection_Inner = { "ClassCollection", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UMassProcessor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMassProcessorClassCollection_Statics::NewProp_ClassCollection = { "ClassCollection", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassProcessorClassCollection, ClassCollection), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassCollection_MetaData), NewProp_ClassCollection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassProcessorClassCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassProcessorClassCollection_Statics::NewProp_ClassCollection_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassProcessorClassCollection_Statics::NewProp_ClassCollection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassProcessorClassCollection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassProcessorClassCollection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
	nullptr,
	&NewStructOps,
	"MassProcessorClassCollection",
	Z_Construct_UScriptStruct_FMassProcessorClassCollection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassProcessorClassCollection_Statics::PropPointers),
	sizeof(FMassProcessorClassCollection),
	alignof(FMassProcessorClassCollection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassProcessorClassCollection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassProcessorClassCollection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassProcessorClassCollection()
{
	if (!Z_Registration_Info_UScriptStruct_MassProcessorClassCollection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassProcessorClassCollection.InnerSingleton, Z_Construct_UScriptStruct_FMassProcessorClassCollection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassProcessorClassCollection.InnerSingleton;
}
// End ScriptStruct FMassProcessorClassCollection

// Begin ScriptStruct FMassEntityObserverClassesMap
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassEntityObserverClassesMap;
class UScriptStruct* FMassEntityObserverClassesMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassEntityObserverClassesMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassEntityObserverClassesMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassEntityObserverClassesMap, (UObject*)Z_Construct_UPackage__Script_MassEntity(), TEXT("MassEntityObserverClassesMap"));
	}
	return Z_Registration_Info_UScriptStruct_MassEntityObserverClassesMap.OuterSingleton;
}
template<> MASSENTITY_API UScriptStruct* StaticStruct<FMassEntityObserverClassesMap>()
{
	return FMassEntityObserverClassesMap::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A wrapper type for a TMap to support having array-of-maps UPROPERTY members in UMassObserverRegistry\n */" },
		{ "ModuleRelativePath", "Public/MassObserverRegistry.h" },
		{ "ToolTip", "A wrapper type for a TMap to support having array-of-maps UPROPERTY members in UMassObserverRegistry" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassObserverRegistry.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Container_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Container;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassEntityObserverClassesMap>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics::NewProp_Container_ValueProp = { "Container", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMassProcessorClassCollection, METADATA_PARAMS(0, nullptr) }; // 765920280
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics::NewProp_Container_Key_KeyProp = { "Container_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassEntityObserverClassesMap, Container), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Container_MetaData), NewProp_Container_MetaData) }; // 765920280
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics::NewProp_Container_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics::NewProp_Container_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics::NewProp_Container,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
	nullptr,
	&NewStructOps,
	"MassEntityObserverClassesMap",
	Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics::PropPointers),
	sizeof(FMassEntityObserverClassesMap),
	alignof(FMassEntityObserverClassesMap),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassEntityObserverClassesMap()
{
	if (!Z_Registration_Info_UScriptStruct_MassEntityObserverClassesMap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassEntityObserverClassesMap.InnerSingleton, Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MassEntityObserverClassesMap.InnerSingleton;
}
// End ScriptStruct FMassEntityObserverClassesMap

// Begin Class UMassObserverRegistry
void UMassObserverRegistry::StaticRegisterNativesUMassObserverRegistry()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassObserverRegistry);
UClass* Z_Construct_UClass_UMassObserverRegistry_NoRegister()
{
	return UMassObserverRegistry::StaticClass();
}
struct Z_Construct_UClass_UMassObserverRegistry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassObserverRegistry.h" },
		{ "ModuleRelativePath", "Public/MassObserverRegistry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FragmentObservers_MetaData[] = {
		{ "ArraySizeEnum", "/Script/MassEntity.EMassObservedOperation" },
		{ "ModuleRelativePath", "Public/MassObserverRegistry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagObservers_MetaData[] = {
		{ "ArraySizeEnum", "/Script/MassEntity.EMassObservedOperation" },
		{ "ModuleRelativePath", "Public/MassObserverRegistry.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FragmentObservers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagObservers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassObserverRegistry>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassObserverRegistry_Statics::NewProp_FragmentObservers = { "FragmentObservers", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(FragmentObservers, UMassObserverRegistry), STRUCT_OFFSET(UMassObserverRegistry, FragmentObservers), Z_Construct_UScriptStruct_FMassEntityObserverClassesMap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FragmentObservers_MetaData), NewProp_FragmentObservers_MetaData) }; // 2052817324
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassObserverRegistry_Statics::NewProp_TagObservers = { "TagObservers", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(TagObservers, UMassObserverRegistry), STRUCT_OFFSET(UMassObserverRegistry, TagObservers), Z_Construct_UScriptStruct_FMassEntityObserverClassesMap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagObservers_MetaData), NewProp_TagObservers_MetaData) }; // 2052817324
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassObserverRegistry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassObserverRegistry_Statics::NewProp_FragmentObservers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassObserverRegistry_Statics::NewProp_TagObservers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassObserverRegistry_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMassObserverRegistry_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassObserverRegistry_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassObserverRegistry_Statics::ClassParams = {
	&UMassObserverRegistry::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassObserverRegistry_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassObserverRegistry_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassObserverRegistry_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassObserverRegistry_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassObserverRegistry()
{
	if (!Z_Registration_Info_UClass_UMassObserverRegistry.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassObserverRegistry.OuterSingleton, Z_Construct_UClass_UMassObserverRegistry_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassObserverRegistry.OuterSingleton;
}
template<> MASSENTITY_API UClass* StaticClass<UMassObserverRegistry>()
{
	return UMassObserverRegistry::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassObserverRegistry);
UMassObserverRegistry::~UMassObserverRegistry() {}
// End Class UMassObserverRegistry

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassObserverRegistry_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassProcessorClassCollection::StaticStruct, Z_Construct_UScriptStruct_FMassProcessorClassCollection_Statics::NewStructOps, TEXT("MassProcessorClassCollection"), &Z_Registration_Info_UScriptStruct_MassProcessorClassCollection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassProcessorClassCollection), 765920280U) },
		{ FMassEntityObserverClassesMap::StaticStruct, Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics::NewStructOps, TEXT("MassEntityObserverClassesMap"), &Z_Registration_Info_UScriptStruct_MassEntityObserverClassesMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassEntityObserverClassesMap), 2052817324U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassObserverRegistry, UMassObserverRegistry::StaticClass, TEXT("UMassObserverRegistry"), &Z_Registration_Info_UClass_UMassObserverRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassObserverRegistry), 2497732065U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassObserverRegistry_h_3292728420(TEXT("/Script/MassEntity"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassObserverRegistry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassObserverRegistry_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassObserverRegistry_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MassEntity_Public_MassObserverRegistry_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
