// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LiveLinkInterface/Public/ILiveLinkSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeILiveLinkSource() {}

// Begin Cross Module References
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSourceHandle();
UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References

// Begin ScriptStruct FLiveLinkSourceHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkSourceHandle;
class UScriptStruct* FLiveLinkSourceHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkSourceHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkSourceHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSourceHandle, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkSourceHandle"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkSourceHandle.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkSourceHandle>()
{
	return FLiveLinkSourceHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkSourceHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A Blueprint handle to a specific LiveLink Source\n" },
		{ "ModuleRelativePath", "Public/ILiveLinkSource.h" },
		{ "ToolTip", "A Blueprint handle to a specific LiveLink Source" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSourceHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkSourceHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	nullptr,
	&NewStructOps,
	"LiveLinkSourceHandle",
	nullptr,
	0,
	sizeof(FLiveLinkSourceHandle),
	alignof(FLiveLinkSourceHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkSourceHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSourceHandle()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkSourceHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkSourceHandle.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkSourceHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkSourceHandle.InnerSingleton;
}
// End ScriptStruct FLiveLinkSourceHandle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_ILiveLinkSource_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLiveLinkSourceHandle::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkSourceHandle_Statics::NewStructOps, TEXT("LiveLinkSourceHandle"), &Z_Registration_Info_UScriptStruct_LiveLinkSourceHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkSourceHandle), 3639505588U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_ILiveLinkSource_h_1689134194(TEXT("/Script/LiveLinkInterface"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_ILiveLinkSource_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_ILiveLinkSource_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
