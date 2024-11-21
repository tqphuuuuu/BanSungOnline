// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LiveLinkInterface/Public/Roles/LiveLinkBasicTypes.h"
#include "Runtime/LiveLinkInterface/Public/LiveLinkTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkBasicTypes() {}

// Begin Cross Module References
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseFrameData();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseStaticData();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData();
UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References

// Begin ScriptStruct FLiveLinkBasicBlueprintData
static_assert(std::is_polymorphic<FLiveLinkBasicBlueprintData>() == std::is_polymorphic<FLiveLinkBaseBlueprintData>(), "USTRUCT FLiveLinkBasicBlueprintData cannot be polymorphic unless super FLiveLinkBaseBlueprintData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkBasicBlueprintData;
class UScriptStruct* FLiveLinkBasicBlueprintData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkBasicBlueprintData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkBasicBlueprintData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkBasicBlueprintData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkBasicBlueprintData.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkBasicBlueprintData>()
{
	return FLiveLinkBasicBlueprintData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Facility structure to handle base data in blueprint\n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkBasicTypes.h" },
		{ "ToolTip", "Facility structure to handle base data in blueprint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticData_MetaData[] = {
		{ "Category", "Base Data" },
		{ "Comment", "// Static data that should not change every frame\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkBasicTypes.h" },
		{ "ToolTip", "Static data that should not change every frame" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameData_MetaData[] = {
		{ "Category", "Base Data" },
		{ "Comment", "// Dynamic data that can change every frame\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkBasicTypes.h" },
		{ "ToolTip", "Dynamic data that can change every frame" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkBasicBlueprintData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::NewProp_StaticData = { "StaticData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkBasicBlueprintData, StaticData), Z_Construct_UScriptStruct_FLiveLinkBaseStaticData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticData_MetaData), NewProp_StaticData_MetaData) }; // 1502209157
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::NewProp_FrameData = { "FrameData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkBasicBlueprintData, FrameData), Z_Construct_UScriptStruct_FLiveLinkBaseFrameData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameData_MetaData), NewProp_FrameData_MetaData) }; // 4110352794
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::NewProp_StaticData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::NewProp_FrameData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData,
	&NewStructOps,
	"LiveLinkBasicBlueprintData",
	Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::PropPointers),
	sizeof(FLiveLinkBasicBlueprintData),
	alignof(FLiveLinkBasicBlueprintData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkBasicBlueprintData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkBasicBlueprintData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkBasicBlueprintData.InnerSingleton;
}
// End ScriptStruct FLiveLinkBasicBlueprintData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkBasicTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLiveLinkBasicBlueprintData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::NewStructOps, TEXT("LiveLinkBasicBlueprintData"), &Z_Registration_Info_UScriptStruct_LiveLinkBasicBlueprintData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkBasicBlueprintData), 1575802775U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkBasicTypes_h_1651681121(TEXT("/Script/LiveLinkInterface"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkBasicTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkBasicTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
