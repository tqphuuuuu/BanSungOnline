// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LiveLinkInterface/Public/Roles/LiveLinkAnimationBlueprintStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkAnimationBlueprintStructs() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimecode();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedSubjectFrame();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransform();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSubjectFrameHandle();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSubjectMetadata();
UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References

// Begin ScriptStruct FSubjectMetadata
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubjectMetadata;
class UScriptStruct* FSubjectMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubjectMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubjectMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubjectMetadata, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("SubjectMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_SubjectMetadata.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FSubjectMetadata>()
{
	return FSubjectMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSubjectMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationBlueprintStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringMetadata_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationBlueprintStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneTimecode_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationBlueprintStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneFramerate_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationBlueprintStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringMetadata_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StringMetadata_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StringMetadata;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SceneTimecode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SceneFramerate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubjectMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_StringMetadata_ValueProp = { "StringMetadata", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_StringMetadata_Key_KeyProp = { "StringMetadata_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_StringMetadata = { "StringMetadata", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubjectMetadata, StringMetadata), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringMetadata_MetaData), NewProp_StringMetadata_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_SceneTimecode = { "SceneTimecode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubjectMetadata, SceneTimecode), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneTimecode_MetaData), NewProp_SceneTimecode_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_SceneFramerate = { "SceneFramerate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubjectMetadata, SceneFramerate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneFramerate_MetaData), NewProp_SceneFramerate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubjectMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_StringMetadata_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_StringMetadata_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_StringMetadata,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_SceneTimecode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_SceneFramerate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubjectMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubjectMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	nullptr,
	&NewStructOps,
	"SubjectMetadata",
	Z_Construct_UScriptStruct_FSubjectMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubjectMetadata_Statics::PropPointers),
	sizeof(FSubjectMetadata),
	alignof(FSubjectMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubjectMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSubjectMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSubjectMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_SubjectMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubjectMetadata.InnerSingleton, Z_Construct_UScriptStruct_FSubjectMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SubjectMetadata.InnerSingleton;
}
// End ScriptStruct FSubjectMetadata

// Begin ScriptStruct FCachedSubjectFrame
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CachedSubjectFrame;
class UScriptStruct* FCachedSubjectFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CachedSubjectFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CachedSubjectFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedSubjectFrame, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("CachedSubjectFrame"));
	}
	return Z_Registration_Info_UScriptStruct_CachedSubjectFrame.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FCachedSubjectFrame>()
{
	return FCachedSubjectFrame::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCachedSubjectFrame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationBlueprintStructs.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedSubjectFrame>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedSubjectFrame_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	nullptr,
	&NewStructOps,
	"CachedSubjectFrame",
	nullptr,
	0,
	sizeof(FCachedSubjectFrame),
	alignof(FCachedSubjectFrame),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedSubjectFrame_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCachedSubjectFrame_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCachedSubjectFrame()
{
	if (!Z_Registration_Info_UScriptStruct_CachedSubjectFrame.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CachedSubjectFrame.InnerSingleton, Z_Construct_UScriptStruct_FCachedSubjectFrame_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CachedSubjectFrame.InnerSingleton;
}
// End ScriptStruct FCachedSubjectFrame

// Begin ScriptStruct FLiveLinkTransform
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkTransform;
class UScriptStruct* FLiveLinkTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkTransform, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkTransform"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkTransform.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkTransform>()
{
	return FLiveLinkTransform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationBlueprintStructs.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	nullptr,
	&NewStructOps,
	"LiveLinkTransform",
	nullptr,
	0,
	sizeof(FLiveLinkTransform),
	alignof(FLiveLinkTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransform()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkTransform.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkTransform.InnerSingleton;
}
// End ScriptStruct FLiveLinkTransform

// Begin ScriptStruct FSubjectFrameHandle
static_assert(std::is_polymorphic<FSubjectFrameHandle>() == std::is_polymorphic<FLiveLinkBaseBlueprintData>(), "USTRUCT FSubjectFrameHandle cannot be polymorphic unless super FLiveLinkBaseBlueprintData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubjectFrameHandle;
class UScriptStruct* FSubjectFrameHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubjectFrameHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubjectFrameHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubjectFrameHandle, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("SubjectFrameHandle"));
	}
	return Z_Registration_Info_UScriptStruct_SubjectFrameHandle.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FSubjectFrameHandle>()
{
	return FSubjectFrameHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSubjectFrameHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationBlueprintStructs.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubjectFrameHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubjectFrameHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData,
	&NewStructOps,
	"SubjectFrameHandle",
	nullptr,
	0,
	sizeof(FSubjectFrameHandle),
	alignof(FSubjectFrameHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubjectFrameHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSubjectFrameHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSubjectFrameHandle()
{
	if (!Z_Registration_Info_UScriptStruct_SubjectFrameHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubjectFrameHandle.InnerSingleton, Z_Construct_UScriptStruct_FSubjectFrameHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SubjectFrameHandle.InnerSingleton;
}
// End ScriptStruct FSubjectFrameHandle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkAnimationBlueprintStructs_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSubjectMetadata::StaticStruct, Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewStructOps, TEXT("SubjectMetadata"), &Z_Registration_Info_UScriptStruct_SubjectMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubjectMetadata), 3676576285U) },
		{ FCachedSubjectFrame::StaticStruct, Z_Construct_UScriptStruct_FCachedSubjectFrame_Statics::NewStructOps, TEXT("CachedSubjectFrame"), &Z_Registration_Info_UScriptStruct_CachedSubjectFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCachedSubjectFrame), 1736932694U) },
		{ FLiveLinkTransform::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkTransform_Statics::NewStructOps, TEXT("LiveLinkTransform"), &Z_Registration_Info_UScriptStruct_LiveLinkTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkTransform), 2132688078U) },
		{ FSubjectFrameHandle::StaticStruct, Z_Construct_UScriptStruct_FSubjectFrameHandle_Statics::NewStructOps, TEXT("SubjectFrameHandle"), &Z_Registration_Info_UScriptStruct_SubjectFrameHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubjectFrameHandle), 759844468U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkAnimationBlueprintStructs_h_4167534738(TEXT("/Script/LiveLinkInterface"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkAnimationBlueprintStructs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkAnimationBlueprintStructs_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
