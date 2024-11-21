// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HairStrandsCore/Public/GroomCreateFollicleMaskOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomCreateFollicleMaskOptions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomAsset_NoRegister();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomCreateFollicleMaskOptions();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomCreateFollicleMaskOptions_NoRegister();
HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EFollicleMaskChannel();
HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFollicleMaskOptions();
UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References

// Begin Enum EFollicleMaskChannel
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFollicleMaskChannel;
static UEnum* EFollicleMaskChannel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFollicleMaskChannel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFollicleMaskChannel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EFollicleMaskChannel, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EFollicleMaskChannel"));
	}
	return Z_Registration_Info_UEnum_EFollicleMaskChannel.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EFollicleMaskChannel>()
{
	return EFollicleMaskChannel_StaticEnum();
}
struct Z_Construct_UEnum_HairStrandsCore_EFollicleMaskChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "A.DisplatName", "Alpha" },
		{ "A.Name", "EFollicleMaskChannel::A" },
		{ "B.DisplatName", "Blue" },
		{ "B.Name", "EFollicleMaskChannel::B" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** List of channel */" },
		{ "G.DisplatName", "Green" },
		{ "G.Name", "EFollicleMaskChannel::G" },
		{ "ModuleRelativePath", "Public/GroomCreateFollicleMaskOptions.h" },
		{ "R.DisplatName", "Red" },
		{ "R.Name", "EFollicleMaskChannel::R" },
		{ "ToolTip", "List of channel" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFollicleMaskChannel::R", (int64)EFollicleMaskChannel::R },
		{ "EFollicleMaskChannel::G", (int64)EFollicleMaskChannel::G },
		{ "EFollicleMaskChannel::B", (int64)EFollicleMaskChannel::B },
		{ "EFollicleMaskChannel::A", (int64)EFollicleMaskChannel::A },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EFollicleMaskChannel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	"EFollicleMaskChannel",
	"EFollicleMaskChannel",
	Z_Construct_UEnum_HairStrandsCore_EFollicleMaskChannel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EFollicleMaskChannel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EFollicleMaskChannel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HairStrandsCore_EFollicleMaskChannel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HairStrandsCore_EFollicleMaskChannel()
{
	if (!Z_Registration_Info_UEnum_EFollicleMaskChannel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFollicleMaskChannel.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EFollicleMaskChannel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFollicleMaskChannel.InnerSingleton;
}
// End Enum EFollicleMaskChannel

// Begin ScriptStruct FFollicleMaskOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FollicleMaskOptions;
class UScriptStruct* FFollicleMaskOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FollicleMaskOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FollicleMaskOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFollicleMaskOptions, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("FollicleMaskOptions"));
	}
	return Z_Registration_Info_UScriptStruct_FollicleMaskOptions.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FFollicleMaskOptions>()
{
	return FFollicleMaskOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFollicleMaskOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomCreateFollicleMaskOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Groom_MetaData[] = {
		{ "Category", "Groom" },
		{ "Comment", "/** Groom asset */" },
		{ "ModuleRelativePath", "Public/GroomCreateFollicleMaskOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Groom asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[] = {
		{ "Category", "Groom" },
		{ "Comment", "/** Texture channel in which the groom's roots mask will be writtent to. */" },
		{ "ModuleRelativePath", "Public/GroomCreateFollicleMaskOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Texture channel in which the groom's roots mask will be writtent to." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Groom;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Channel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFollicleMaskOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFollicleMaskOptions_Statics::NewProp_Groom = { "Groom", nullptr, (EPropertyFlags)0x0114000000020005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFollicleMaskOptions, Groom), Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Groom_MetaData), NewProp_Groom_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFollicleMaskOptions_Statics::NewProp_Channel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFollicleMaskOptions_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFollicleMaskOptions, Channel), Z_Construct_UEnum_HairStrandsCore_EFollicleMaskChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channel_MetaData), NewProp_Channel_MetaData) }; // 792626233
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFollicleMaskOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFollicleMaskOptions_Statics::NewProp_Groom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFollicleMaskOptions_Statics::NewProp_Channel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFollicleMaskOptions_Statics::NewProp_Channel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFollicleMaskOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFollicleMaskOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	&NewStructOps,
	"FollicleMaskOptions",
	Z_Construct_UScriptStruct_FFollicleMaskOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFollicleMaskOptions_Statics::PropPointers),
	sizeof(FFollicleMaskOptions),
	alignof(FFollicleMaskOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFollicleMaskOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFollicleMaskOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFollicleMaskOptions()
{
	if (!Z_Registration_Info_UScriptStruct_FollicleMaskOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FollicleMaskOptions.InnerSingleton, Z_Construct_UScriptStruct_FFollicleMaskOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FollicleMaskOptions.InnerSingleton;
}
// End ScriptStruct FFollicleMaskOptions

// Begin Class UGroomCreateFollicleMaskOptions
void UGroomCreateFollicleMaskOptions::StaticRegisterNativesUGroomCreateFollicleMaskOptions()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroomCreateFollicleMaskOptions);
UClass* Z_Construct_UClass_UGroomCreateFollicleMaskOptions_NoRegister()
{
	return UGroomCreateFollicleMaskOptions::StaticClass();
}
struct Z_Construct_UClass_UGroomCreateFollicleMaskOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Hidden" },
		{ "IncludePath", "GroomCreateFollicleMaskOptions.h" },
		{ "ModuleRelativePath", "Public/GroomCreateFollicleMaskOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Follicle mask texture resolution. The resolution will be rounded to the closest power of two. */" },
		{ "ModuleRelativePath", "Public/GroomCreateFollicleMaskOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Follicle mask texture resolution. The resolution will be rounded to the closest power of two." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootRadius_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Size of the root in the follicle mask (in pixels) */" },
		{ "ModuleRelativePath", "Public/GroomCreateFollicleMaskOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Size of the root in the follicle mask (in pixels)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grooms_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Grooms which will be use to create the follicle texture */" },
		{ "ModuleRelativePath", "Public/GroomCreateFollicleMaskOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Grooms which will be use to create the follicle texture" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Resolution;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RootRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Grooms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Grooms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroomCreateFollicleMaskOptions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGroomCreateFollicleMaskOptions_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomCreateFollicleMaskOptions, Resolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resolution_MetaData), NewProp_Resolution_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGroomCreateFollicleMaskOptions_Statics::NewProp_RootRadius = { "RootRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomCreateFollicleMaskOptions, RootRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootRadius_MetaData), NewProp_RootRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroomCreateFollicleMaskOptions_Statics::NewProp_Grooms_Inner = { "Grooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFollicleMaskOptions, METADATA_PARAMS(0, nullptr) }; // 2207438887
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomCreateFollicleMaskOptions_Statics::NewProp_Grooms = { "Grooms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomCreateFollicleMaskOptions, Grooms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grooms_MetaData), NewProp_Grooms_MetaData) }; // 2207438887
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroomCreateFollicleMaskOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateFollicleMaskOptions_Statics::NewProp_Resolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateFollicleMaskOptions_Statics::NewProp_RootRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateFollicleMaskOptions_Statics::NewProp_Grooms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateFollicleMaskOptions_Statics::NewProp_Grooms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCreateFollicleMaskOptions_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGroomCreateFollicleMaskOptions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCreateFollicleMaskOptions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroomCreateFollicleMaskOptions_Statics::ClassParams = {
	&UGroomCreateFollicleMaskOptions::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGroomCreateFollicleMaskOptions_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCreateFollicleMaskOptions_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCreateFollicleMaskOptions_Statics::Class_MetaDataParams), Z_Construct_UClass_UGroomCreateFollicleMaskOptions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGroomCreateFollicleMaskOptions()
{
	if (!Z_Registration_Info_UClass_UGroomCreateFollicleMaskOptions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroomCreateFollicleMaskOptions.OuterSingleton, Z_Construct_UClass_UGroomCreateFollicleMaskOptions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGroomCreateFollicleMaskOptions.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UClass* StaticClass<UGroomCreateFollicleMaskOptions>()
{
	return UGroomCreateFollicleMaskOptions::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGroomCreateFollicleMaskOptions);
UGroomCreateFollicleMaskOptions::~UGroomCreateFollicleMaskOptions() {}
// End Class UGroomCreateFollicleMaskOptions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateFollicleMaskOptions_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFollicleMaskChannel_StaticEnum, TEXT("EFollicleMaskChannel"), &Z_Registration_Info_UEnum_EFollicleMaskChannel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 792626233U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFollicleMaskOptions::StaticStruct, Z_Construct_UScriptStruct_FFollicleMaskOptions_Statics::NewStructOps, TEXT("FollicleMaskOptions"), &Z_Registration_Info_UScriptStruct_FollicleMaskOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFollicleMaskOptions), 2207438887U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGroomCreateFollicleMaskOptions, UGroomCreateFollicleMaskOptions::StaticClass, TEXT("UGroomCreateFollicleMaskOptions"), &Z_Registration_Info_UClass_UGroomCreateFollicleMaskOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroomCreateFollicleMaskOptions), 2985738627U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateFollicleMaskOptions_h_1285337949(TEXT("/Script/HairStrandsCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateFollicleMaskOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateFollicleMaskOptions_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateFollicleMaskOptions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateFollicleMaskOptions_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateFollicleMaskOptions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateFollicleMaskOptions_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
