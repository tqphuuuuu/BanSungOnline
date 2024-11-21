// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LiveLinkInterface/Public/LiveLinkVirtualSubject.h"
#include "Runtime/LiveLinkInterface/Public/LiveLinkTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkVirtualSubject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFrameTranslator_NoRegister();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkRole_NoRegister();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkVirtualSubject();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkVirtualSubject_NoRegister();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectName();
UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References

// Begin Class ULiveLinkVirtualSubject
void ULiveLinkVirtualSubject::StaticRegisterNativesULiveLinkVirtualSubject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkVirtualSubject);
UClass* Z_Construct_UClass_ULiveLinkVirtualSubject_NoRegister()
{
	return ULiveLinkVirtualSubject::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkVirtualSubject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// A Virtual subject is made up of one or more real subjects from a source\n" },
		{ "IncludePath", "LiveLinkVirtualSubject.h" },
		{ "ModuleRelativePath", "Public/LiveLinkVirtualSubject.h" },
		{ "ToolTip", "A Virtual subject is made up of one or more real subjects from a source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[] = {
		{ "Comment", "/** The role the subject was build with. */" },
		{ "ModuleRelativePath", "Public/LiveLinkVirtualSubject.h" },
		{ "ToolTip", "The role the subject was build with." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Subjects_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Names of the real subjects to combine into a virtual subject */" },
		{ "ModuleRelativePath", "Public/LiveLinkVirtualSubject.h" },
		{ "ToolTip", "Names of the real subjects to combine into a virtual subject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameTranslators_Inner_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** List of available translator the subject can use. */" },
		{ "DisplayName", "Translators" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkVirtualSubject.h" },
		{ "ToolTip", "List of available translator the subject can use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameTranslators_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** List of available translator the subject can use. */" },
		{ "DisplayName", "Translators" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkVirtualSubject.h" },
		{ "ToolTip", "List of available translator the subject can use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRebroadcastSubject_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** If enabled, rebroadcast this subject */" },
		{ "ModuleRelativePath", "Public/LiveLinkVirtualSubject.h" },
		{ "ToolTip", "If enabled, rebroadcast this subject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Role;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Subjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Subjects;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FrameTranslators_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FrameTranslators;
	static void NewProp_bRebroadcastSubject_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRebroadcastSubject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkVirtualSubject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkVirtualSubject, Role), Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkRole_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Role_MetaData), NewProp_Role_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_Subjects_Inner = { "Subjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(0, nullptr) }; // 463217522
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_Subjects = { "Subjects", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkVirtualSubject, Subjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Subjects_MetaData), NewProp_Subjects_MetaData) }; // 463217522
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_FrameTranslators_Inner = { "FrameTranslators", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULiveLinkFrameTranslator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameTranslators_Inner_MetaData), NewProp_FrameTranslators_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_FrameTranslators = { "FrameTranslators", nullptr, (EPropertyFlags)0x0124088000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkVirtualSubject, FrameTranslators), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameTranslators_MetaData), NewProp_FrameTranslators_MetaData) };
void Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_bRebroadcastSubject_SetBit(void* Obj)
{
	((ULiveLinkVirtualSubject*)Obj)->bRebroadcastSubject = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_bRebroadcastSubject = { "bRebroadcastSubject", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULiveLinkVirtualSubject), &Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_bRebroadcastSubject_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRebroadcastSubject_MetaData), NewProp_bRebroadcastSubject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_Role,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_Subjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_Subjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_FrameTranslators_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_FrameTranslators,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_bRebroadcastSubject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::ClassParams = {
	&ULiveLinkVirtualSubject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::PropPointers),
	0,
	0x008800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkVirtualSubject()
{
	if (!Z_Registration_Info_UClass_ULiveLinkVirtualSubject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkVirtualSubject.OuterSingleton, Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkVirtualSubject.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkVirtualSubject>()
{
	return ULiveLinkVirtualSubject::StaticClass();
}
ULiveLinkVirtualSubject::ULiveLinkVirtualSubject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkVirtualSubject);
ULiveLinkVirtualSubject::~ULiveLinkVirtualSubject() {}
// End Class ULiveLinkVirtualSubject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkVirtualSubject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkVirtualSubject, ULiveLinkVirtualSubject::StaticClass, TEXT("ULiveLinkVirtualSubject"), &Z_Registration_Info_UClass_ULiveLinkVirtualSubject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkVirtualSubject), 117676964U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkVirtualSubject_h_2651679350(TEXT("/Script/LiveLinkInterface"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkVirtualSubject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkVirtualSubject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
