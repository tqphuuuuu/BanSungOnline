// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Private/DataInterfaces/OptimusDataInterfaceSkinWeightsAsVertexMask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusDataInterfaceSkinWeightsAsVertexMask() {}

// Begin Cross Module References
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeformerInstance_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeformerInstanceAccessor_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataProvider();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Class UOptimusSkinWeightsAsVertexMaskDataInterface
void UOptimusSkinWeightsAsVertexMaskDataInterface::StaticRegisterNativesUOptimusSkinWeightsAsVertexMaskDataInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusSkinWeightsAsVertexMaskDataInterface);
UClass* Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface_NoRegister()
{
	return UOptimusSkinWeightsAsVertexMaskDataInterface::StaticClass();
}
struct Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Interface for skeletal data. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceSkinWeightsAsVertexMask.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkinWeightsAsVertexMask.h" },
		{ "ToolTip", "Compute Framework Data Interface for skeletal data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinWeightProfile_MetaData[] = {
		{ "Category", "Data Interface" },
		{ "Comment", "//~ End UComputeDataInterface Interface\n" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkinWeightsAsVertexMask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneNames_MetaData[] = {
		{ "Category", "Data Interface" },
		{ "Comment", "// Weights of selected bones are combined to form a single a vertex weight map \n" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkinWeightsAsVertexMask.h" },
		{ "ToolTip", "Weights of selected bones are combined to form a single a vertex weight map" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpandTowardsRoot_MetaData[] = {
		{ "Category", "Data Interface" },
		{ "Comment", "// Include all bones within the radius by expanding selection towards the root\n" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkinWeightsAsVertexMask.h" },
		{ "ToolTip", "Include all bones within the radius by expanding selection towards the root" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpandTowardsLeaf_MetaData[] = {
		{ "Category", "Data Interface" },
		{ "Comment", "// Include children up to the specified depth\n" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkinWeightsAsVertexMask.h" },
		{ "ToolTip", "Include children up to the specified depth" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugDrawIncludedBones_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkinWeightsAsVertexMask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugDrawColor_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkinWeightsAsVertexMask.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SkinWeightProfile;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExpandTowardsRoot;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExpandTowardsLeaf;
	static void NewProp_bDebugDrawIncludedBones_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugDrawIncludedBones;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugDrawColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusSkinWeightsAsVertexMaskDataInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface_Statics::NewProp_SkinWeightProfile = { "SkinWeightProfile", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusSkinWeightsAsVertexMaskDataInterface, SkinWeightProfile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinWeightProfile_MetaData), NewProp_SkinWeightProfile_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusSkinWeightsAsVertexMaskDataInterface, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneNames_MetaData), NewProp_BoneNames_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface_Statics::NewProp_ExpandTowardsRoot = { "ExpandTowardsRoot", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusSkinWeightsAsVertexMaskDataInterface, ExpandTowardsRoot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpandTowardsRoot_MetaData), NewProp_ExpandTowardsRoot_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface_Statics::NewProp_ExpandTowardsLeaf = { "ExpandTowardsLeaf", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusSkinWeightsAsVertexMaskDataInterface, ExpandTowardsLeaf), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpandTowardsLeaf_MetaData), NewProp_ExpandTowardsLeaf_MetaData) };
void Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface_Statics::NewProp_bDebugDrawIncludedBones_SetBit(void* Obj)
{
	((UOptimusSkinWeightsAsVertexMaskDataInterface*)Obj)->bDebugDrawIncludedBones = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface_Statics::NewProp_bDebugDrawIncludedBones = { "bDebugDrawIncludedBones", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimusSkinWeightsAsVertexMaskDataInterface), &Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface_Statics::NewProp_bDebugDrawIncludedBones_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugDrawIncludedBones_MetaData), NewProp_bDebugDrawIncludedBones_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface_Statics::NewProp_DebugDrawColor = { "DebugDrawColor", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusSkinWeightsAsVertexMaskDataInterface, DebugDrawColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugDrawColor_MetaData), NewProp_DebugDrawColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface_Statics::NewProp_SkinWeightProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface_Statics::NewProp_BoneNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface_Statics::NewProp_BoneNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface_Statics::NewProp_ExpandTowardsRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface_Statics::NewProp_ExpandTowardsLeaf,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface_Statics::NewProp_bDebugDrawIncludedBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface_Statics::NewProp_DebugDrawColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusComputeDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface_Statics::ClassParams = {
	&UOptimusSkinWeightsAsVertexMaskDataInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface_Statics::PropPointers),
	0,
	0x001100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface()
{
	if (!Z_Registration_Info_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusSkinWeightsAsVertexMaskDataInterface>()
{
	return UOptimusSkinWeightsAsVertexMaskDataInterface::StaticClass();
}
UOptimusSkinWeightsAsVertexMaskDataInterface::UOptimusSkinWeightsAsVertexMaskDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusSkinWeightsAsVertexMaskDataInterface);
UOptimusSkinWeightsAsVertexMaskDataInterface::~UOptimusSkinWeightsAsVertexMaskDataInterface() {}
// End Class UOptimusSkinWeightsAsVertexMaskDataInterface

// Begin Class UOptimusSkinWeightsAsVertexMaskDataProvider
void UOptimusSkinWeightsAsVertexMaskDataProvider::StaticRegisterNativesUOptimusSkinWeightsAsVertexMaskDataProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusSkinWeightsAsVertexMaskDataProvider);
UClass* Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataProvider_NoRegister()
{
	return UOptimusSkinWeightsAsVertexMaskDataProvider::StaticClass();
}
struct Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for reading skeletal mesh. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceSkinWeightsAsVertexMask.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkinWeightsAsVertexMask.h" },
		{ "ToolTip", "Compute Framework Data Provider for reading skeletal mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Binding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkinWeightsAsVertexMask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeformerInstance_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkinWeightsAsVertexMask.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeformerInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusSkinWeightsAsVertexMaskDataProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataProvider_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusSkinWeightsAsVertexMaskDataProvider, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataProvider_Statics::NewProp_DeformerInstance = { "DeformerInstance", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusSkinWeightsAsVertexMaskDataProvider, DeformerInstance), Z_Construct_UClass_UOptimusDeformerInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeformerInstance_MetaData), NewProp_DeformerInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataProvider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataProvider_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataProvider_Statics::NewProp_DeformerInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataProvider_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataProvider_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UOptimusDeformerInstanceAccessor_NoRegister, (int32)VTABLE_OFFSET(UOptimusSkinWeightsAsVertexMaskDataProvider, IOptimusDeformerInstanceAccessor), false },  // 1833869264
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataProvider_Statics::ClassParams = {
	&UOptimusSkinWeightsAsVertexMaskDataProvider::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataProvider_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataProvider_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataProvider()
{
	if (!Z_Registration_Info_UClass_UOptimusSkinWeightsAsVertexMaskDataProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusSkinWeightsAsVertexMaskDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusSkinWeightsAsVertexMaskDataProvider.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusSkinWeightsAsVertexMaskDataProvider>()
{
	return UOptimusSkinWeightsAsVertexMaskDataProvider::StaticClass();
}
UOptimusSkinWeightsAsVertexMaskDataProvider::UOptimusSkinWeightsAsVertexMaskDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusSkinWeightsAsVertexMaskDataProvider);
UOptimusSkinWeightsAsVertexMaskDataProvider::~UOptimusSkinWeightsAsVertexMaskDataProvider() {}
// End Class UOptimusSkinWeightsAsVertexMaskDataProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinWeightsAsVertexMask_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface, UOptimusSkinWeightsAsVertexMaskDataInterface::StaticClass, TEXT("UOptimusSkinWeightsAsVertexMaskDataInterface"), &Z_Registration_Info_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusSkinWeightsAsVertexMaskDataInterface), 1486817822U) },
		{ Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataProvider, UOptimusSkinWeightsAsVertexMaskDataProvider::StaticClass, TEXT("UOptimusSkinWeightsAsVertexMaskDataProvider"), &Z_Registration_Info_UClass_UOptimusSkinWeightsAsVertexMaskDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusSkinWeightsAsVertexMaskDataProvider), 2343411707U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinWeightsAsVertexMask_h_812726467(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinWeightsAsVertexMask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinWeightsAsVertexMask_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
