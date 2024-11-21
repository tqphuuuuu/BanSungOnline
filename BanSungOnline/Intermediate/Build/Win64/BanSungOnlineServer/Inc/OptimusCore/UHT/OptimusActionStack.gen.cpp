// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Public/OptimusActionStack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusActionStack() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusActionStack();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusActionStack_NoRegister();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Class UOptimusActionStack
void UOptimusActionStack::StaticRegisterNativesUOptimusActionStack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusActionStack);
UClass* Z_Construct_UClass_UOptimusActionStack_NoRegister()
{
	return UOptimusActionStack::StaticClass();
}
struct Z_Construct_UClass_UOptimusActionStack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Base action class\n" },
		{ "IncludePath", "OptimusActionStack.h" },
		{ "ModuleRelativePath", "Public/OptimusActionStack.h" },
		{ "ToolTip", "Base action class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransactedActionIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusActionStack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TransactedActionIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusActionStack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOptimusActionStack_Statics::NewProp_TransactedActionIndex = { "TransactedActionIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusActionStack, TransactedActionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransactedActionIndex_MetaData), NewProp_TransactedActionIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusActionStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusActionStack_Statics::NewProp_TransactedActionIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusActionStack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusActionStack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusActionStack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusActionStack_Statics::ClassParams = {
	&UOptimusActionStack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusActionStack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusActionStack_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusActionStack_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusActionStack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusActionStack()
{
	if (!Z_Registration_Info_UClass_UOptimusActionStack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusActionStack.OuterSingleton, Z_Construct_UClass_UOptimusActionStack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusActionStack.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusActionStack>()
{
	return UOptimusActionStack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusActionStack);
UOptimusActionStack::~UOptimusActionStack() {}
// End Class UOptimusActionStack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusActionStack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusActionStack, UOptimusActionStack::StaticClass, TEXT("UOptimusActionStack"), &Z_Registration_Info_UClass_UOptimusActionStack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusActionStack), 3558191681U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusActionStack_h_3579932487(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusActionStack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusActionStack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
