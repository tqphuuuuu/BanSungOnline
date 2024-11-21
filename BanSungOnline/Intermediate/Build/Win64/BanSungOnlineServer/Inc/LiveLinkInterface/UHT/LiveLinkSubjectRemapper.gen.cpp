// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LiveLinkInterface/Public/LiveLinkSubjectRemapper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkSubjectRemapper() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSubjectRemapper();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSubjectRemapper_NoRegister();
UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References

// Begin Class ULiveLinkSubjectRemapper
void ULiveLinkSubjectRemapper::StaticRegisterNativesULiveLinkSubjectRemapper()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkSubjectRemapper);
UClass* Z_Construct_UClass_ULiveLinkSubjectRemapper_NoRegister()
{
	return ULiveLinkSubjectRemapper::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkSubjectRemapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Class used to remap livelink subjects without having to rely on animation blueprints. */" },
		{ "IncludePath", "LiveLinkSubjectRemapper.h" },
		{ "ModuleRelativePath", "Public/LiveLinkSubjectRemapper.h" },
		{ "ToolTip", "Class used to remap livelink subjects without having to rely on animation blueprints." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneNameMap_MetaData[] = {
		{ "Category", "Remapper" },
		{ "Comment", "/** Name mapping between source bone name and transformed bone name */" },
		{ "ModuleRelativePath", "Public/LiveLinkSubjectRemapper.h" },
		{ "ToolTip", "Name mapping between source bone name and transformed bone name" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNameMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNameMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BoneNameMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkSubjectRemapper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULiveLinkSubjectRemapper_Statics::NewProp_BoneNameMap_ValueProp = { "BoneNameMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULiveLinkSubjectRemapper_Statics::NewProp_BoneNameMap_Key_KeyProp = { "BoneNameMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULiveLinkSubjectRemapper_Statics::NewProp_BoneNameMap = { "BoneNameMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkSubjectRemapper, BoneNameMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneNameMap_MetaData), NewProp_BoneNameMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkSubjectRemapper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSubjectRemapper_Statics::NewProp_BoneNameMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSubjectRemapper_Statics::NewProp_BoneNameMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSubjectRemapper_Statics::NewProp_BoneNameMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSubjectRemapper_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULiveLinkSubjectRemapper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSubjectRemapper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkSubjectRemapper_Statics::ClassParams = {
	&ULiveLinkSubjectRemapper::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULiveLinkSubjectRemapper_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSubjectRemapper_Statics::PropPointers),
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSubjectRemapper_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkSubjectRemapper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkSubjectRemapper()
{
	if (!Z_Registration_Info_UClass_ULiveLinkSubjectRemapper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkSubjectRemapper.OuterSingleton, Z_Construct_UClass_ULiveLinkSubjectRemapper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkSubjectRemapper.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkSubjectRemapper>()
{
	return ULiveLinkSubjectRemapper::StaticClass();
}
ULiveLinkSubjectRemapper::ULiveLinkSubjectRemapper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkSubjectRemapper);
ULiveLinkSubjectRemapper::~ULiveLinkSubjectRemapper() {}
// End Class ULiveLinkSubjectRemapper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectRemapper_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkSubjectRemapper, ULiveLinkSubjectRemapper::StaticClass, TEXT("ULiveLinkSubjectRemapper"), &Z_Registration_Info_UClass_ULiveLinkSubjectRemapper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkSubjectRemapper), 198103208U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectRemapper_h_71869430(TEXT("/Script/LiveLinkInterface"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectRemapper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectRemapper_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
