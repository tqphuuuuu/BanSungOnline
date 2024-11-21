// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NNE/Public/NNEModelData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNNEModelData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NNE_API UClass* Z_Construct_UClass_UNNEModelData();
NNE_API UClass* Z_Construct_UClass_UNNEModelData_NoRegister();
UPackage* Z_Construct_UPackage__Script_NNE();
// End Cross Module References

// Begin Class UNNEModelData
void UNNEModelData::StaticRegisterNativesUNNEModelData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNNEModelData);
UClass* Z_Construct_UClass_UNNEModelData_NoRegister()
{
	return UNNEModelData::StaticClass();
}
struct Z_Construct_UClass_UNNEModelData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "NNE" },
		{ "Comment", "/**\n * This class represents assets that store neural network model data.\n *\n * Neural network models typically consist of a graph of operations and corresponding parameters as e.g. weights.\n * UNNEModelData assets store such model data as imported e.g. by the UNNEModelDataFactory class.\n * An INNERuntime object retrieved by UE::NNE::GetRuntime<T>(const FString& Name) can be used to create an inferable neural network model.\n */" },
		{ "IncludePath", "NNEModelData.h" },
		{ "ModuleRelativePath", "Public/NNEModelData.h" },
		{ "ToolTip", "This class represents assets that store neural network model data.\n\nNeural network models typically consist of a graph of operations and corresponding parameters as e.g. weights.\nUNNEModelData assets store such model data as imported e.g. by the UNNEModelDataFactory class.\nAn INNERuntime object retrieved by UE::NNE::GetRuntime<T>(const FString& Name) can be used to create an inferable neural network model." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNNEModelData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNNEModelData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NNE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNNEModelData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNNEModelData_Statics::ClassParams = {
	&UNNEModelData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNNEModelData_Statics::Class_MetaDataParams), Z_Construct_UClass_UNNEModelData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNNEModelData()
{
	if (!Z_Registration_Info_UClass_UNNEModelData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNNEModelData.OuterSingleton, Z_Construct_UClass_UNNEModelData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNNEModelData.OuterSingleton;
}
template<> NNE_API UClass* StaticClass<UNNEModelData>()
{
	return UNNEModelData::StaticClass();
}
UNNEModelData::UNNEModelData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNNEModelData);
UNNEModelData::~UNNEModelData() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNNEModelData)
// End Class UNNEModelData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNEModelData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNNEModelData, UNNEModelData::StaticClass, TEXT("UNNEModelData"), &Z_Registration_Info_UClass_UNNEModelData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNNEModelData), 4267159330U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNEModelData_h_2862819487(TEXT("/Script/NNE"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNEModelData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNEModelData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
