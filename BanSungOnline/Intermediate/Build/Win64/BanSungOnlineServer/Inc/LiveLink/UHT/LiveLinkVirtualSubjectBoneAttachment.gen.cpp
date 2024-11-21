// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Public/LiveLinkVirtualSubjectBoneAttachment.h"
#include "Runtime/LiveLinkInterface/Public/LiveLinkTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkVirtualSubjectBoneAttachment() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
LIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectName();
UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References

// Begin ScriptStruct FLiveLinkVirtualSubjectBoneAttachment
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkVirtualSubjectBoneAttachment;
class UScriptStruct* FLiveLinkVirtualSubjectBoneAttachment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkVirtualSubjectBoneAttachment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkVirtualSubjectBoneAttachment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment, (UObject*)Z_Construct_UPackage__Script_LiveLink(), TEXT("LiveLinkVirtualSubjectBoneAttachment"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkVirtualSubjectBoneAttachment.OuterSingleton;
}
template<> LIVELINK_API UScriptStruct* StaticStruct<FLiveLinkVirtualSubjectBoneAttachment>()
{
	return FLiveLinkVirtualSubjectBoneAttachment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A bone attachment used by the virtual subjects to attach 2 subjects together by specifying a child and parent bone.\n */" },
		{ "ModuleRelativePath", "Public/LiveLinkVirtualSubjectBoneAttachment.h" },
		{ "ToolTip", "A bone attachment used by the virtual subjects to attach 2 subjects together by specifying a child and parent bone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentSubject_MetaData[] = {
		{ "Category", "Live Link" },
		{ "Comment", "/** Subject that the child subject will be attached to. */" },
		{ "DisplayName", "Parent" },
		{ "ModuleRelativePath", "Public/LiveLinkVirtualSubjectBoneAttachment.h" },
		{ "ToolTip", "Subject that the child subject will be attached to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentBone_MetaData[] = {
		{ "Category", "Live Link" },
		{ "Comment", "/** Name of the bone in the parent subject that will serve as a parent to the child bone of the child subject. */" },
		{ "ModuleRelativePath", "Public/LiveLinkVirtualSubjectBoneAttachment.h" },
		{ "ToolTip", "Name of the bone in the parent subject that will serve as a parent to the child bone of the child subject." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildSubject_MetaData[] = {
		{ "Category", "Live Link" },
		{ "Comment", "/** Subject that will be attached to the parent. */" },
		{ "DisplayName", "Child" },
		{ "ModuleRelativePath", "Public/LiveLinkVirtualSubjectBoneAttachment.h" },
		{ "ToolTip", "Subject that will be attached to the parent." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildBone_MetaData[] = {
		{ "Category", "Live Link" },
		{ "Comment", "/** Bone that will be attached to the parent bone.  */" },
		{ "ModuleRelativePath", "Public/LiveLinkVirtualSubjectBoneAttachment.h" },
		{ "ToolTip", "Bone that will be attached to the parent bone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[] = {
		{ "Category", "Live Link" },
		{ "Comment", "/** Location of the component relative to its parent */" },
		{ "Delta", "1.0" },
		{ "LinearDeltaSensitivity", "1" },
		{ "ModuleRelativePath", "Public/LiveLinkVirtualSubjectBoneAttachment.h" },
		{ "ToolTip", "Location of the component relative to its parent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[] = {
		{ "Category", "Live Link" },
		{ "Comment", "/** Rotation of the component relative to its parent */" },
		{ "Delta", "1.0" },
		{ "LinearDeltaSensitivity", "1" },
		{ "ModuleRelativePath", "Public/LiveLinkVirtualSubjectBoneAttachment.h" },
		{ "ToolTip", "Rotation of the component relative to its parent" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentSubject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParentBone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChildSubject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ChildBone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkVirtualSubjectBoneAttachment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment_Statics::NewProp_ParentSubject = { "ParentSubject", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkVirtualSubjectBoneAttachment, ParentSubject), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentSubject_MetaData), NewProp_ParentSubject_MetaData) }; // 463217522
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment_Statics::NewProp_ParentBone = { "ParentBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkVirtualSubjectBoneAttachment, ParentBone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentBone_MetaData), NewProp_ParentBone_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment_Statics::NewProp_ChildSubject = { "ChildSubject", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkVirtualSubjectBoneAttachment, ChildSubject), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildSubject_MetaData), NewProp_ChildSubject_MetaData) }; // 463217522
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment_Statics::NewProp_ChildBone = { "ChildBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkVirtualSubjectBoneAttachment, ChildBone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildBone_MetaData), NewProp_ChildBone_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkVirtualSubjectBoneAttachment, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationOffset_MetaData), NewProp_LocationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkVirtualSubjectBoneAttachment, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffset_MetaData), NewProp_RotationOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment_Statics::NewProp_ParentSubject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment_Statics::NewProp_ParentBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment_Statics::NewProp_ChildSubject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment_Statics::NewProp_ChildBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment_Statics::NewProp_LocationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment_Statics::NewProp_RotationOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	nullptr,
	&NewStructOps,
	"LiveLinkVirtualSubjectBoneAttachment",
	Z_Construct_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment_Statics::PropPointers),
	sizeof(FLiveLinkVirtualSubjectBoneAttachment),
	alignof(FLiveLinkVirtualSubjectBoneAttachment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkVirtualSubjectBoneAttachment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkVirtualSubjectBoneAttachment.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkVirtualSubjectBoneAttachment.InnerSingleton;
}
// End ScriptStruct FLiveLinkVirtualSubjectBoneAttachment

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkVirtualSubjectBoneAttachment_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLiveLinkVirtualSubjectBoneAttachment::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment_Statics::NewStructOps, TEXT("LiveLinkVirtualSubjectBoneAttachment"), &Z_Registration_Info_UScriptStruct_LiveLinkVirtualSubjectBoneAttachment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkVirtualSubjectBoneAttachment), 4045455323U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkVirtualSubjectBoneAttachment_h_2211723071(TEXT("/Script/LiveLink"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkVirtualSubjectBoneAttachment_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkVirtualSubjectBoneAttachment_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
