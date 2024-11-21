// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Public/LiveLinkDrivenComponent.h"
#include "Runtime/LiveLinkInterface/Public/LiveLinkTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkDrivenComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
LIVELINK_API UClass* Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent();
LIVELINK_API UClass* Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_NoRegister();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectName();
UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References

// Begin Class UDEPRECATED_LiveLinkDrivenComponent
void UDEPRECATED_LiveLinkDrivenComponent::StaticRegisterNativesUDEPRECATED_LiveLinkDrivenComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_LiveLinkDrivenComponent);
UClass* Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_NoRegister()
{
	return UDEPRECATED_LiveLinkDrivenComponent::StaticClass();
}
struct Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "LiveLink" },
		{ "Comment", "/** A component that applies data from Live Link to the owning actor */" },
		{ "IncludePath", "LiveLinkDrivenComponent.h" },
		{ "ModuleRelativePath", "Public/LiveLinkDrivenComponent.h" },
		{ "ToolTip", "A component that applies data from Live Link to the owning actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[] = {
		{ "Category", "Live Link" },
		{ "Comment", "// The name of the live link subject to take data from\n" },
		{ "ModuleRelativePath", "Public/LiveLinkDrivenComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The name of the live link subject to take data from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorTransformBone_MetaData[] = {
		{ "Category", "Live Link" },
		{ "Comment", "// The name of the bone to drive the actors transform with (if None then we will take the first bone)\n" },
		{ "ModuleRelativePath", "Public/LiveLinkDrivenComponent.h" },
		{ "ToolTip", "The name of the bone to drive the actors transform with (if None then we will take the first bone)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bModifyActorTransform_MetaData[] = {
		{ "Category", "Live Link" },
		{ "Comment", "// Should the actors transform be driven by live link\n" },
		{ "ModuleRelativePath", "Public/LiveLinkDrivenComponent.h" },
		{ "ToolTip", "Should the actors transform be driven by live link" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetRelativeLocation_MetaData[] = {
		{ "Category", "Live Link" },
		{ "Comment", "// Should the transform from live link be treated as relative or world space\n" },
		{ "ModuleRelativePath", "Public/LiveLinkDrivenComponent.h" },
		{ "ToolTip", "Should the transform from live link be treated as relative or world space" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubjectName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActorTransformBone;
	static void NewProp_bModifyActorTransform_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bModifyActorTransform;
	static void NewProp_bSetRelativeLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetRelativeLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_LiveLinkDrivenComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDEPRECATED_LiveLinkDrivenComponent, SubjectName), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubjectName_MetaData), NewProp_SubjectName_MetaData) }; // 463217522
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_ActorTransformBone = { "ActorTransformBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDEPRECATED_LiveLinkDrivenComponent, ActorTransformBone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorTransformBone_MetaData), NewProp_ActorTransformBone_MetaData) };
void Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_bModifyActorTransform_SetBit(void* Obj)
{
	((UDEPRECATED_LiveLinkDrivenComponent*)Obj)->bModifyActorTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_bModifyActorTransform = { "bModifyActorTransform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDEPRECATED_LiveLinkDrivenComponent), &Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_bModifyActorTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bModifyActorTransform_MetaData), NewProp_bModifyActorTransform_MetaData) };
void Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_bSetRelativeLocation_SetBit(void* Obj)
{
	((UDEPRECATED_LiveLinkDrivenComponent*)Obj)->bSetRelativeLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_bSetRelativeLocation = { "bSetRelativeLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDEPRECATED_LiveLinkDrivenComponent), &Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_bSetRelativeLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetRelativeLocation_MetaData), NewProp_bSetRelativeLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_SubjectName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_ActorTransformBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_bModifyActorTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::NewProp_bSetRelativeLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::ClassParams = {
	&UDEPRECATED_LiveLinkDrivenComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::PropPointers),
	0,
	0x02B002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent()
{
	if (!Z_Registration_Info_UClass_UDEPRECATED_LiveLinkDrivenComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_LiveLinkDrivenComponent.OuterSingleton, Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDEPRECATED_LiveLinkDrivenComponent.OuterSingleton;
}
template<> LIVELINK_API UClass* StaticClass<UDEPRECATED_LiveLinkDrivenComponent>()
{
	return UDEPRECATED_LiveLinkDrivenComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_LiveLinkDrivenComponent);
UDEPRECATED_LiveLinkDrivenComponent::~UDEPRECATED_LiveLinkDrivenComponent() {}
// End Class UDEPRECATED_LiveLinkDrivenComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkDrivenComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_LiveLinkDrivenComponent, UDEPRECATED_LiveLinkDrivenComponent::StaticClass, TEXT("UDEPRECATED_LiveLinkDrivenComponent"), &Z_Registration_Info_UClass_UDEPRECATED_LiveLinkDrivenComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_LiveLinkDrivenComponent), 2274349054U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkDrivenComponent_h_594455402(TEXT("/Script/LiveLink"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkDrivenComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkDrivenComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
