// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/Serialization/VectorNetSerializers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVectorNetSerializers() {}

// Begin Cross Module References
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FVector3dNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FVector3fNetSerializerConfig();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FVectorNetSerializerConfig();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin ScriptStruct FVectorNetSerializerConfig
static_assert(std::is_polymorphic<FVectorNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FVectorNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VectorNetSerializerConfig;
class UScriptStruct* FVectorNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VectorNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VectorNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVectorNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("VectorNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_VectorNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FVectorNetSerializerConfig>()
{
	return FVectorNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVectorNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/VectorNetSerializers.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVectorNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVectorNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"VectorNetSerializerConfig",
	nullptr,
	0,
	sizeof(FVectorNetSerializerConfig),
	alignof(FVectorNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVectorNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVectorNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_VectorNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VectorNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FVectorNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VectorNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FVectorNetSerializerConfig

// Begin ScriptStruct FVector3fNetSerializerConfig
static_assert(std::is_polymorphic<FVector3fNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FVector3fNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Vector3fNetSerializerConfig;
class UScriptStruct* FVector3fNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Vector3fNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Vector3fNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVector3fNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("Vector3fNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_Vector3fNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FVector3fNetSerializerConfig>()
{
	return FVector3fNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVector3fNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/VectorNetSerializers.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVector3fNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector3fNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"Vector3fNetSerializerConfig",
	nullptr,
	0,
	sizeof(FVector3fNetSerializerConfig),
	alignof(FVector3fNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector3fNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVector3fNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVector3fNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_Vector3fNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Vector3fNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FVector3fNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Vector3fNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FVector3fNetSerializerConfig

// Begin ScriptStruct FVector3dNetSerializerConfig
static_assert(std::is_polymorphic<FVector3dNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FVector3dNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Vector3dNetSerializerConfig;
class UScriptStruct* FVector3dNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Vector3dNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Vector3dNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVector3dNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("Vector3dNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_Vector3dNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FVector3dNetSerializerConfig>()
{
	return FVector3dNetSerializerConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVector3dNetSerializerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/VectorNetSerializers.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVector3dNetSerializerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector3dNetSerializerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FNetSerializerConfig,
	&NewStructOps,
	"Vector3dNetSerializerConfig",
	nullptr,
	0,
	sizeof(FVector3dNetSerializerConfig),
	alignof(FVector3dNetSerializerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector3dNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVector3dNetSerializerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVector3dNetSerializerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_Vector3dNetSerializerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Vector3dNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FVector3dNetSerializerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Vector3dNetSerializerConfig.InnerSingleton;
}
// End ScriptStruct FVector3dNetSerializerConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_VectorNetSerializers_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVectorNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FVectorNetSerializerConfig_Statics::NewStructOps, TEXT("VectorNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_VectorNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVectorNetSerializerConfig), 262580896U) },
		{ FVector3fNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FVector3fNetSerializerConfig_Statics::NewStructOps, TEXT("Vector3fNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_Vector3fNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVector3fNetSerializerConfig), 2248829801U) },
		{ FVector3dNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FVector3dNetSerializerConfig_Statics::NewStructOps, TEXT("Vector3dNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_Vector3dNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVector3dNetSerializerConfig), 3138581708U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_VectorNetSerializers_h_4201193463(TEXT("/Script/IrisCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_VectorNetSerializers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_VectorNetSerializers_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS