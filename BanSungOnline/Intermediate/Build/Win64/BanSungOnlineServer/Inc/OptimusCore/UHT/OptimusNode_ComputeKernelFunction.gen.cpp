// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Private/Nodes/OptimusNode_ComputeKernelFunction.h"
#include "OptimusCore/Public/OptimusBindingTypes.h"
#include "OptimusCore/Public/OptimusExecutionDomain.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNode_ComputeKernelFunction() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_ComputeKernelBase();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_ComputeKernelFunction();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_ComputeKernelFunction_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass_NoRegister();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusExecutionDomain();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusParameterBinding();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Class UOptimusNode_ComputeKernelFunctionGeneratorClass
void UOptimusNode_ComputeKernelFunctionGeneratorClass::StaticRegisterNativesUOptimusNode_ComputeKernelFunctionGeneratorClass()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNode_ComputeKernelFunctionGeneratorClass);
UClass* Z_Construct_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass_NoRegister()
{
	return UOptimusNode_ComputeKernelFunctionGeneratorClass::StaticClass();
}
struct Z_Construct_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/OptimusNode_ComputeKernelFunction.h" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ComputeKernelFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ComputeKernelFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KernelName_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ComputeKernelFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionDomain_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ComputeKernelFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupSize_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ComputeKernelFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputBindings_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ComputeKernelFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputBindings_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ComputeKernelFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShaderSource_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ComputeKernelFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Category;
	static const UECodeGen_Private::FNamePropertyParams NewProp_KernelName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecutionDomain;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroupSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputBindings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputBindings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputBindings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputBindings;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ShaderSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNode_ComputeKernelFunctionGeneratorClass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_ComputeKernelFunctionGeneratorClass, Category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass_Statics::NewProp_KernelName = { "KernelName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_ComputeKernelFunctionGeneratorClass, KernelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KernelName_MetaData), NewProp_KernelName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass_Statics::NewProp_ExecutionDomain = { "ExecutionDomain", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_ComputeKernelFunctionGeneratorClass, ExecutionDomain), Z_Construct_UScriptStruct_FOptimusExecutionDomain, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionDomain_MetaData), NewProp_ExecutionDomain_MetaData) }; // 3137940066
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass_Statics::NewProp_GroupSize = { "GroupSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_ComputeKernelFunctionGeneratorClass, GroupSize), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupSize_MetaData), NewProp_GroupSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass_Statics::NewProp_InputBindings_Inner = { "InputBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOptimusParameterBinding, METADATA_PARAMS(0, nullptr) }; // 1701427389
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass_Statics::NewProp_InputBindings = { "InputBindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_ComputeKernelFunctionGeneratorClass, InputBindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputBindings_MetaData), NewProp_InputBindings_MetaData) }; // 1701427389
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass_Statics::NewProp_OutputBindings_Inner = { "OutputBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOptimusParameterBinding, METADATA_PARAMS(0, nullptr) }; // 1701427389
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass_Statics::NewProp_OutputBindings = { "OutputBindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_ComputeKernelFunctionGeneratorClass, OutputBindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputBindings_MetaData), NewProp_OutputBindings_MetaData) }; // 1701427389
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass_Statics::NewProp_ShaderSource = { "ShaderSource", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_ComputeKernelFunctionGeneratorClass, ShaderSource), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShaderSource_MetaData), NewProp_ShaderSource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass_Statics::NewProp_KernelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass_Statics::NewProp_ExecutionDomain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass_Statics::NewProp_GroupSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass_Statics::NewProp_InputBindings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass_Statics::NewProp_InputBindings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass_Statics::NewProp_OutputBindings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass_Statics::NewProp_OutputBindings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass_Statics::NewProp_ShaderSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UClass,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass_Statics::ClassParams = {
	&UOptimusNode_ComputeKernelFunctionGeneratorClass::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass()
{
	if (!Z_Registration_Info_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass.OuterSingleton, Z_Construct_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNode_ComputeKernelFunctionGeneratorClass>()
{
	return UOptimusNode_ComputeKernelFunctionGeneratorClass::StaticClass();
}
UOptimusNode_ComputeKernelFunctionGeneratorClass::UOptimusNode_ComputeKernelFunctionGeneratorClass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNode_ComputeKernelFunctionGeneratorClass);
UOptimusNode_ComputeKernelFunctionGeneratorClass::~UOptimusNode_ComputeKernelFunctionGeneratorClass() {}
// End Class UOptimusNode_ComputeKernelFunctionGeneratorClass

// Begin Class UOptimusNode_ComputeKernelFunction
void UOptimusNode_ComputeKernelFunction::StaticRegisterNativesUOptimusNode_ComputeKernelFunction()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNode_ComputeKernelFunction);
UClass* Z_Construct_UClass_UOptimusNode_ComputeKernelFunction_NoRegister()
{
	return UOptimusNode_ComputeKernelFunction::StaticClass();
}
struct Z_Construct_UClass_UOptimusNode_ComputeKernelFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nodes/OptimusNode_ComputeKernelFunction.h" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ComputeKernelFunction.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNode_ComputeKernelFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusNode_ComputeKernelFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusNode_ComputeKernelBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_ComputeKernelFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNode_ComputeKernelFunction_Statics::ClassParams = {
	&UOptimusNode_ComputeKernelFunction::StaticClass,
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
	0x011000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_ComputeKernelFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusNode_ComputeKernelFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusNode_ComputeKernelFunction()
{
	if (!Z_Registration_Info_UClass_UOptimusNode_ComputeKernelFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNode_ComputeKernelFunction.OuterSingleton, Z_Construct_UClass_UOptimusNode_ComputeKernelFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusNode_ComputeKernelFunction.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNode_ComputeKernelFunction>()
{
	return UOptimusNode_ComputeKernelFunction::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNode_ComputeKernelFunction);
UOptimusNode_ComputeKernelFunction::~UOptimusNode_ComputeKernelFunction() {}
// End Class UOptimusNode_ComputeKernelFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ComputeKernelFunction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass, UOptimusNode_ComputeKernelFunctionGeneratorClass::StaticClass, TEXT("UOptimusNode_ComputeKernelFunctionGeneratorClass"), &Z_Registration_Info_UClass_UOptimusNode_ComputeKernelFunctionGeneratorClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNode_ComputeKernelFunctionGeneratorClass), 2982819057U) },
		{ Z_Construct_UClass_UOptimusNode_ComputeKernelFunction, UOptimusNode_ComputeKernelFunction::StaticClass, TEXT("UOptimusNode_ComputeKernelFunction"), &Z_Registration_Info_UClass_UOptimusNode_ComputeKernelFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNode_ComputeKernelFunction), 1666039569U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ComputeKernelFunction_h_3444208022(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ComputeKernelFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ComputeKernelFunction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
