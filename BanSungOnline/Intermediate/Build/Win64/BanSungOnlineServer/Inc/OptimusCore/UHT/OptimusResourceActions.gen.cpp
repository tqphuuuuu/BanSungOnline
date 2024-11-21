// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Private/Actions/OptimusResourceActions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusResourceActions() {}

// Begin Cross Module References
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusAction();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusResourceAction_AddResource();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusResourceAction_RemoveResource();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusResourceAction_RenameResource();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusResourceAction_SetDataDomain();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusResourceAction_SetDataType();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin ScriptStruct FOptimusResourceAction_AddResource
static_assert(std::is_polymorphic<FOptimusResourceAction_AddResource>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusResourceAction_AddResource cannot be polymorphic unless super FOptimusAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusResourceAction_AddResource;
class UScriptStruct* FOptimusResourceAction_AddResource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusResourceAction_AddResource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusResourceAction_AddResource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusResourceAction_AddResource, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusResourceAction_AddResource"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusResourceAction_AddResource.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusResourceAction_AddResource>()
{
	return FOptimusResourceAction_AddResource::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusResourceAction_AddResource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusResourceActions.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusResourceAction_AddResource>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusResourceAction_AddResource_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	Z_Construct_UScriptStruct_FOptimusAction,
	&NewStructOps,
	"OptimusResourceAction_AddResource",
	nullptr,
	0,
	sizeof(FOptimusResourceAction_AddResource),
	alignof(FOptimusResourceAction_AddResource),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusResourceAction_AddResource_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusResourceAction_AddResource_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusResourceAction_AddResource()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusResourceAction_AddResource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusResourceAction_AddResource.InnerSingleton, Z_Construct_UScriptStruct_FOptimusResourceAction_AddResource_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusResourceAction_AddResource.InnerSingleton;
}
// End ScriptStruct FOptimusResourceAction_AddResource

// Begin ScriptStruct FOptimusResourceAction_RemoveResource
static_assert(std::is_polymorphic<FOptimusResourceAction_RemoveResource>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusResourceAction_RemoveResource cannot be polymorphic unless super FOptimusAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusResourceAction_RemoveResource;
class UScriptStruct* FOptimusResourceAction_RemoveResource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusResourceAction_RemoveResource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusResourceAction_RemoveResource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusResourceAction_RemoveResource, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusResourceAction_RemoveResource"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusResourceAction_RemoveResource.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusResourceAction_RemoveResource>()
{
	return FOptimusResourceAction_RemoveResource::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusResourceAction_RemoveResource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusResourceActions.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusResourceAction_RemoveResource>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusResourceAction_RemoveResource_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	Z_Construct_UScriptStruct_FOptimusAction,
	&NewStructOps,
	"OptimusResourceAction_RemoveResource",
	nullptr,
	0,
	sizeof(FOptimusResourceAction_RemoveResource),
	alignof(FOptimusResourceAction_RemoveResource),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusResourceAction_RemoveResource_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusResourceAction_RemoveResource_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusResourceAction_RemoveResource()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusResourceAction_RemoveResource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusResourceAction_RemoveResource.InnerSingleton, Z_Construct_UScriptStruct_FOptimusResourceAction_RemoveResource_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusResourceAction_RemoveResource.InnerSingleton;
}
// End ScriptStruct FOptimusResourceAction_RemoveResource

// Begin ScriptStruct FOptimusResourceAction_RenameResource
static_assert(std::is_polymorphic<FOptimusResourceAction_RenameResource>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusResourceAction_RenameResource cannot be polymorphic unless super FOptimusAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusResourceAction_RenameResource;
class UScriptStruct* FOptimusResourceAction_RenameResource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusResourceAction_RenameResource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusResourceAction_RenameResource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusResourceAction_RenameResource, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusResourceAction_RenameResource"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusResourceAction_RenameResource.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusResourceAction_RenameResource>()
{
	return FOptimusResourceAction_RenameResource::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusResourceAction_RenameResource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusResourceActions.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusResourceAction_RenameResource>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusResourceAction_RenameResource_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	Z_Construct_UScriptStruct_FOptimusAction,
	&NewStructOps,
	"OptimusResourceAction_RenameResource",
	nullptr,
	0,
	sizeof(FOptimusResourceAction_RenameResource),
	alignof(FOptimusResourceAction_RenameResource),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusResourceAction_RenameResource_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusResourceAction_RenameResource_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusResourceAction_RenameResource()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusResourceAction_RenameResource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusResourceAction_RenameResource.InnerSingleton, Z_Construct_UScriptStruct_FOptimusResourceAction_RenameResource_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusResourceAction_RenameResource.InnerSingleton;
}
// End ScriptStruct FOptimusResourceAction_RenameResource

// Begin ScriptStruct FOptimusResourceAction_SetDataType
static_assert(std::is_polymorphic<FOptimusResourceAction_SetDataType>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusResourceAction_SetDataType cannot be polymorphic unless super FOptimusAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusResourceAction_SetDataType;
class UScriptStruct* FOptimusResourceAction_SetDataType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusResourceAction_SetDataType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusResourceAction_SetDataType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusResourceAction_SetDataType, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusResourceAction_SetDataType"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusResourceAction_SetDataType.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusResourceAction_SetDataType>()
{
	return FOptimusResourceAction_SetDataType::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusResourceAction_SetDataType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusResourceActions.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusResourceAction_SetDataType>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusResourceAction_SetDataType_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	Z_Construct_UScriptStruct_FOptimusAction,
	&NewStructOps,
	"OptimusResourceAction_SetDataType",
	nullptr,
	0,
	sizeof(FOptimusResourceAction_SetDataType),
	alignof(FOptimusResourceAction_SetDataType),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusResourceAction_SetDataType_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusResourceAction_SetDataType_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusResourceAction_SetDataType()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusResourceAction_SetDataType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusResourceAction_SetDataType.InnerSingleton, Z_Construct_UScriptStruct_FOptimusResourceAction_SetDataType_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusResourceAction_SetDataType.InnerSingleton;
}
// End ScriptStruct FOptimusResourceAction_SetDataType

// Begin ScriptStruct FOptimusResourceAction_SetDataDomain
static_assert(std::is_polymorphic<FOptimusResourceAction_SetDataDomain>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusResourceAction_SetDataDomain cannot be polymorphic unless super FOptimusAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusResourceAction_SetDataDomain;
class UScriptStruct* FOptimusResourceAction_SetDataDomain::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusResourceAction_SetDataDomain.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusResourceAction_SetDataDomain.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusResourceAction_SetDataDomain, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusResourceAction_SetDataDomain"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusResourceAction_SetDataDomain.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusResourceAction_SetDataDomain>()
{
	return FOptimusResourceAction_SetDataDomain::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusResourceAction_SetDataDomain_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusResourceActions.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusResourceAction_SetDataDomain>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusResourceAction_SetDataDomain_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	Z_Construct_UScriptStruct_FOptimusAction,
	&NewStructOps,
	"OptimusResourceAction_SetDataDomain",
	nullptr,
	0,
	sizeof(FOptimusResourceAction_SetDataDomain),
	alignof(FOptimusResourceAction_SetDataDomain),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusResourceAction_SetDataDomain_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusResourceAction_SetDataDomain_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusResourceAction_SetDataDomain()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusResourceAction_SetDataDomain.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusResourceAction_SetDataDomain.InnerSingleton, Z_Construct_UScriptStruct_FOptimusResourceAction_SetDataDomain_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusResourceAction_SetDataDomain.InnerSingleton;
}
// End ScriptStruct FOptimusResourceAction_SetDataDomain

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Actions_OptimusResourceActions_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOptimusResourceAction_AddResource::StaticStruct, Z_Construct_UScriptStruct_FOptimusResourceAction_AddResource_Statics::NewStructOps, TEXT("OptimusResourceAction_AddResource"), &Z_Registration_Info_UScriptStruct_OptimusResourceAction_AddResource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusResourceAction_AddResource), 1188764781U) },
		{ FOptimusResourceAction_RemoveResource::StaticStruct, Z_Construct_UScriptStruct_FOptimusResourceAction_RemoveResource_Statics::NewStructOps, TEXT("OptimusResourceAction_RemoveResource"), &Z_Registration_Info_UScriptStruct_OptimusResourceAction_RemoveResource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusResourceAction_RemoveResource), 3842101821U) },
		{ FOptimusResourceAction_RenameResource::StaticStruct, Z_Construct_UScriptStruct_FOptimusResourceAction_RenameResource_Statics::NewStructOps, TEXT("OptimusResourceAction_RenameResource"), &Z_Registration_Info_UScriptStruct_OptimusResourceAction_RenameResource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusResourceAction_RenameResource), 2778675252U) },
		{ FOptimusResourceAction_SetDataType::StaticStruct, Z_Construct_UScriptStruct_FOptimusResourceAction_SetDataType_Statics::NewStructOps, TEXT("OptimusResourceAction_SetDataType"), &Z_Registration_Info_UScriptStruct_OptimusResourceAction_SetDataType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusResourceAction_SetDataType), 3676136094U) },
		{ FOptimusResourceAction_SetDataDomain::StaticStruct, Z_Construct_UScriptStruct_FOptimusResourceAction_SetDataDomain_Statics::NewStructOps, TEXT("OptimusResourceAction_SetDataDomain"), &Z_Registration_Info_UScriptStruct_OptimusResourceAction_SetDataDomain, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusResourceAction_SetDataDomain), 2107287821U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Actions_OptimusResourceActions_h_3257505880(TEXT("/Script/OptimusCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Actions_OptimusResourceActions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Actions_OptimusResourceActions_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
