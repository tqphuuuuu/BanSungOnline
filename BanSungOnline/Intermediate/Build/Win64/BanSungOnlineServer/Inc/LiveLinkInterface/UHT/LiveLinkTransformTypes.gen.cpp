// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LiveLinkInterface/Public/Roles/LiveLinkTransformTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkTransformTypes() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseFrameData();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseStaticData();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransformFrameData();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransformStaticData();
UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References

// Begin ScriptStruct FLiveLinkTransformStaticData
static_assert(std::is_polymorphic<FLiveLinkTransformStaticData>() == std::is_polymorphic<FLiveLinkBaseStaticData>(), "USTRUCT FLiveLinkTransformStaticData cannot be polymorphic unless super FLiveLinkBaseStaticData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkTransformStaticData;
class UScriptStruct* FLiveLinkTransformStaticData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkTransformStaticData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkTransformStaticData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkTransformStaticData, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkTransformStaticData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkTransformStaticData.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkTransformStaticData>()
{
	return FLiveLinkTransformStaticData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Static data for Transform data. \n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkTransformTypes.h" },
		{ "ToolTip", "Static data for Transform data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLocationSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Whether location in frame data should be used\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkTransformTypes.h" },
		{ "ToolTip", "Whether location in frame data should be used" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRotationSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Whether rotation in frame data should be used\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkTransformTypes.h" },
		{ "ToolTip", "Whether rotation in frame data should be used" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsScaleSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Whether scale in frame data should be used\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkTransformTypes.h" },
		{ "ToolTip", "Whether scale in frame data should be used" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsLocationSupported_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLocationSupported;
	static void NewProp_bIsRotationSupported_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRotationSupported;
	static void NewProp_bIsScaleSupported_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsScaleSupported;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkTransformStaticData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsLocationSupported_SetBit(void* Obj)
{
	((FLiveLinkTransformStaticData*)Obj)->bIsLocationSupported = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsLocationSupported = { "bIsLocationSupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLiveLinkTransformStaticData), &Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsLocationSupported_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLocationSupported_MetaData), NewProp_bIsLocationSupported_MetaData) };
void Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsRotationSupported_SetBit(void* Obj)
{
	((FLiveLinkTransformStaticData*)Obj)->bIsRotationSupported = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsRotationSupported = { "bIsRotationSupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLiveLinkTransformStaticData), &Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsRotationSupported_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRotationSupported_MetaData), NewProp_bIsRotationSupported_MetaData) };
void Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsScaleSupported_SetBit(void* Obj)
{
	((FLiveLinkTransformStaticData*)Obj)->bIsScaleSupported = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsScaleSupported = { "bIsScaleSupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLiveLinkTransformStaticData), &Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsScaleSupported_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsScaleSupported_MetaData), NewProp_bIsScaleSupported_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsLocationSupported,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsRotationSupported,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsScaleSupported,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	Z_Construct_UScriptStruct_FLiveLinkBaseStaticData,
	&NewStructOps,
	"LiveLinkTransformStaticData",
	Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::PropPointers),
	sizeof(FLiveLinkTransformStaticData),
	alignof(FLiveLinkTransformStaticData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransformStaticData()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkTransformStaticData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkTransformStaticData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkTransformStaticData.InnerSingleton;
}
// End ScriptStruct FLiveLinkTransformStaticData

// Begin ScriptStruct FLiveLinkTransformFrameData
static_assert(std::is_polymorphic<FLiveLinkTransformFrameData>() == std::is_polymorphic<FLiveLinkBaseFrameData>(), "USTRUCT FLiveLinkTransformFrameData cannot be polymorphic unless super FLiveLinkBaseFrameData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkTransformFrameData;
class UScriptStruct* FLiveLinkTransformFrameData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkTransformFrameData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkTransformFrameData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkTransformFrameData, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkTransformFrameData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkTransformFrameData.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkTransformFrameData>()
{
	return FLiveLinkTransformFrameData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Dynamic data for Transform \n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkTransformTypes.h" },
		{ "ToolTip", "Dynamic data for Transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "// Transform of the frame\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkTransformTypes.h" },
		{ "ToolTip", "Transform of the frame" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkTransformFrameData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkTransformFrameData, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	Z_Construct_UScriptStruct_FLiveLinkBaseFrameData,
	&NewStructOps,
	"LiveLinkTransformFrameData",
	Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::PropPointers),
	sizeof(FLiveLinkTransformFrameData),
	alignof(FLiveLinkTransformFrameData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransformFrameData()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkTransformFrameData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkTransformFrameData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkTransformFrameData.InnerSingleton;
}
// End ScriptStruct FLiveLinkTransformFrameData

// Begin ScriptStruct FLiveLinkTransformBlueprintData
static_assert(std::is_polymorphic<FLiveLinkTransformBlueprintData>() == std::is_polymorphic<FLiveLinkBaseBlueprintData>(), "USTRUCT FLiveLinkTransformBlueprintData cannot be polymorphic unless super FLiveLinkBaseBlueprintData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkTransformBlueprintData;
class UScriptStruct* FLiveLinkTransformBlueprintData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkTransformBlueprintData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkTransformBlueprintData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkTransformBlueprintData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkTransformBlueprintData.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkTransformBlueprintData>()
{
	return FLiveLinkTransformBlueprintData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Facility structure to handle transform data in blueprint\n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkTransformTypes.h" },
		{ "ToolTip", "Facility structure to handle transform data in blueprint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticData_MetaData[] = {
		{ "Category", "Transform Data" },
		{ "Comment", "// Static data that should not change every frame\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkTransformTypes.h" },
		{ "ToolTip", "Static data that should not change every frame" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameData_MetaData[] = {
		{ "Category", "Transform Data" },
		{ "Comment", "// Dynamic data that can change every frame\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkTransformTypes.h" },
		{ "ToolTip", "Dynamic data that can change every frame" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkTransformBlueprintData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::NewProp_StaticData = { "StaticData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkTransformBlueprintData, StaticData), Z_Construct_UScriptStruct_FLiveLinkTransformStaticData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticData_MetaData), NewProp_StaticData_MetaData) }; // 1992597755
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::NewProp_FrameData = { "FrameData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkTransformBlueprintData, FrameData), Z_Construct_UScriptStruct_FLiveLinkTransformFrameData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameData_MetaData), NewProp_FrameData_MetaData) }; // 566819563
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::NewProp_StaticData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::NewProp_FrameData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData,
	&NewStructOps,
	"LiveLinkTransformBlueprintData",
	Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::PropPointers),
	sizeof(FLiveLinkTransformBlueprintData),
	alignof(FLiveLinkTransformBlueprintData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkTransformBlueprintData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkTransformBlueprintData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkTransformBlueprintData.InnerSingleton;
}
// End ScriptStruct FLiveLinkTransformBlueprintData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkTransformTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLiveLinkTransformStaticData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewStructOps, TEXT("LiveLinkTransformStaticData"), &Z_Registration_Info_UScriptStruct_LiveLinkTransformStaticData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkTransformStaticData), 1992597755U) },
		{ FLiveLinkTransformFrameData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::NewStructOps, TEXT("LiveLinkTransformFrameData"), &Z_Registration_Info_UScriptStruct_LiveLinkTransformFrameData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkTransformFrameData), 566819563U) },
		{ FLiveLinkTransformBlueprintData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::NewStructOps, TEXT("LiveLinkTransformBlueprintData"), &Z_Registration_Info_UScriptStruct_LiveLinkTransformBlueprintData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkTransformBlueprintData), 3837359536U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkTransformTypes_h_2749559671(TEXT("/Script/LiveLinkInterface"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkTransformTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkTransformTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
