// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Private/Nodes/OptimusNode_CustomComputeKernel.h"
#include "OptimusCore/Public/OptimusBindingTypes.h"
#include "OptimusCore/Public/OptimusExecutionDomain.h"
#include "OptimusCore/Public/OptimusShaderText.h"
#include "OptimusCore/Public/OptimusValidatedName.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNode_CustomComputeKernel() {}

// Begin Cross Module References
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeSource_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusExecutionDomainProvider_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_ComputeKernelBase();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_CustomComputeKernel();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_CustomComputeKernel_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeAdderPinProvider_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusParameterBindingProvider_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusShaderTextProvider_NoRegister();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimus_ShaderBinding();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusExecutionDomain();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusParameterBinding();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusParameterBindingArray();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusShaderText();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusValidatedName();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin ScriptStruct FOptimusSecondaryInputBindingsGroup
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusSecondaryInputBindingsGroup;
class UScriptStruct* FOptimusSecondaryInputBindingsGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusSecondaryInputBindingsGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusSecondaryInputBindingsGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusSecondaryInputBindingsGroup"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusSecondaryInputBindingsGroup.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusSecondaryInputBindingsGroup>()
{
	return FOptimusSecondaryInputBindingsGroup::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_CustomComputeKernel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_CustomComputeKernel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BindingArray_MetaData[] = {
		{ "AllowParameters", "" },
		{ "Category", "Group" },
		{ "DisplayName", "Bindings" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_CustomComputeKernel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroupName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BindingArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusSecondaryInputBindingsGroup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusSecondaryInputBindingsGroup, GroupName), Z_Construct_UScriptStruct_FOptimusValidatedName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupName_MetaData), NewProp_GroupName_MetaData) }; // 603411049
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup_Statics::NewProp_BindingArray = { "BindingArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusSecondaryInputBindingsGroup, BindingArray), Z_Construct_UScriptStruct_FOptimusParameterBindingArray, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BindingArray_MetaData), NewProp_BindingArray_MetaData) }; // 380112210
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup_Statics::NewProp_GroupName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup_Statics::NewProp_BindingArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	&NewStructOps,
	"OptimusSecondaryInputBindingsGroup",
	Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup_Statics::PropPointers),
	sizeof(FOptimusSecondaryInputBindingsGroup),
	alignof(FOptimusSecondaryInputBindingsGroup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusSecondaryInputBindingsGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusSecondaryInputBindingsGroup.InnerSingleton, Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptimusSecondaryInputBindingsGroup.InnerSingleton;
}
// End ScriptStruct FOptimusSecondaryInputBindingsGroup

// Begin Class UOptimusNode_CustomComputeKernel
void UOptimusNode_CustomComputeKernel::StaticRegisterNativesUOptimusNode_CustomComputeKernel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNode_CustomComputeKernel);
UClass* Z_Construct_UClass_UOptimusNode_CustomComputeKernel_NoRegister()
{
	return UOptimusNode_CustomComputeKernel::StaticClass();
}
struct Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/OptimusNode_CustomComputeKernel.h" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_CustomComputeKernel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// FIXME: Use drop-down with a preset list + allow custom entry.\n" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_CustomComputeKernel.h" },
		{ "ToolTip", "FIXME: Use drop-down with a preset list + allow custom entry." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KernelName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of kernel. This is also used as the entry point function name in generated code. */" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_CustomComputeKernel.h" },
		{ "ToolTip", "Name of kernel. This is also used as the entry point function name in generated code." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionDomain_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The execution domain that this kernel operates on. The size of the domain is governed by\n\x09 *  the component binding that flows into the primary input group of this kernel.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_CustomComputeKernel.h" },
		{ "ToolTip", "The execution domain that this kernel operates on. The size of the domain is governed by\nthe component binding that flows into the primary input group of this kernel." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupSize_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** \n\x09 * Number of threads in a thread group. \n\x09 * Thread groups have 3 dimensions. \n\x09 * It's better to have the total threads (X*Y*Z) be a value divisible by 32. \n\x09 */" },
		{ "Min", "1" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_CustomComputeKernel.h" },
		{ "ToolTip", "Number of threads in a thread group.\nThread groups have 3 dimensions.\nIt's better to have the total threads (X*Y*Z) be a value divisible by 32." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_CustomComputeKernel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputBindings_MetaData[] = {
		{ "Comment", "/** Input bindings. Each one is a function that should be connected to an implementation in a data interface. */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_CustomComputeKernel.h" },
		{ "ToolTip", "Input bindings. Each one is a function that should be connected to an implementation in a data interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputBindings_MetaData[] = {
		{ "Comment", "/** Output bindings. Each one is a function that should be connected to an implementation in a data interface. */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_CustomComputeKernel.h" },
		{ "ToolTip", "Output bindings. Each one is a function that should be connected to an implementation in a data interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputBindingArray_MetaData[] = {
		{ "AllowParameters", "" },
		{ "Category", "Primary Bindings" },
		{ "Comment", "/** Input bindings. Each one is a function that should be connected to an implementation in a data interface. */" },
		{ "DisplayName", "Input Bindings" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_CustomComputeKernel.h" },
		{ "ToolTip", "Input bindings. Each one is a function that should be connected to an implementation in a data interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputBindingArray_MetaData[] = {
		{ "Category", "Primary Bindings" },
		{ "Comment", "/** Output bindings. Each one is a function that should be connected to an implementation in a data interface. */" },
		{ "DisplayName", "Output Bindings" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_CustomComputeKernel.h" },
		{ "ToolTip", "Output bindings. Each one is a function that should be connected to an implementation in a data interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryInputBindingGroups_MetaData[] = {
		{ "Category", "Secondary Input Bindings Groups" },
		{ "Comment", "/** Secondary bindings.*/" },
		{ "DisplayName", "Secondary Input Bindings" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_CustomComputeKernel.h" },
		{ "ToolTip", "Secondary bindings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalSources_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Additional source includes. */" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_CustomComputeKernel.h" },
		{ "ToolTip", "Additional source includes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShaderSource_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** \n\x09 * The kernel source code. \n\x09 * If the code contains more than just the kernel entry function, then place the kernel entry function inside a KERNEL {} block.\n\x09 */" },
		{ "DisplayName", "Kernel Source" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_CustomComputeKernel.h" },
		{ "ToolTip", "The kernel source code.\nIf the code contains more than just the kernel entry function, then place the kernel entry function inside a KERNEL {} block." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Category;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KernelName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecutionDomain;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroupSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputBindings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputBindings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputBindings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputBindings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputBindingArray;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputBindingArray;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryInputBindingGroups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SecondaryInputBindingGroups;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AdditionalSources_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalSources;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShaderSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNode_CustomComputeKernel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_CustomComputeKernel, Category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_KernelName = { "KernelName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_CustomComputeKernel, KernelName), Z_Construct_UScriptStruct_FOptimusValidatedName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KernelName_MetaData), NewProp_KernelName_MetaData) }; // 603411049
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_ExecutionDomain = { "ExecutionDomain", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_CustomComputeKernel, ExecutionDomain), Z_Construct_UScriptStruct_FOptimusExecutionDomain, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionDomain_MetaData), NewProp_ExecutionDomain_MetaData) }; // 3137940066
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_GroupSize = { "GroupSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_CustomComputeKernel, GroupSize), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupSize_MetaData), NewProp_GroupSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_Parameters_Inner = { "Parameters", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOptimus_ShaderBinding, METADATA_PARAMS(0, nullptr) }; // 1759345302
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_CustomComputeKernel, Parameters_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 1759345302
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_InputBindings_Inner = { "InputBindings", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOptimusParameterBinding, METADATA_PARAMS(0, nullptr) }; // 1701427389
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_InputBindings = { "InputBindings", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_CustomComputeKernel, InputBindings_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputBindings_MetaData), NewProp_InputBindings_MetaData) }; // 1701427389
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_OutputBindings_Inner = { "OutputBindings", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOptimusParameterBinding, METADATA_PARAMS(0, nullptr) }; // 1701427389
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_OutputBindings = { "OutputBindings", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_CustomComputeKernel, OutputBindings_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputBindings_MetaData), NewProp_OutputBindings_MetaData) }; // 1701427389
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_InputBindingArray = { "InputBindingArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_CustomComputeKernel, InputBindingArray), Z_Construct_UScriptStruct_FOptimusParameterBindingArray, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputBindingArray_MetaData), NewProp_InputBindingArray_MetaData) }; // 380112210
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_OutputBindingArray = { "OutputBindingArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_CustomComputeKernel, OutputBindingArray), Z_Construct_UScriptStruct_FOptimusParameterBindingArray, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputBindingArray_MetaData), NewProp_OutputBindingArray_MetaData) }; // 380112210
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_SecondaryInputBindingGroups_Inner = { "SecondaryInputBindingGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup, METADATA_PARAMS(0, nullptr) }; // 2079926113
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_SecondaryInputBindingGroups = { "SecondaryInputBindingGroups", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_CustomComputeKernel, SecondaryInputBindingGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryInputBindingGroups_MetaData), NewProp_SecondaryInputBindingGroups_MetaData) }; // 2079926113
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_AdditionalSources_Inner = { "AdditionalSources", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UComputeSource_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_AdditionalSources = { "AdditionalSources", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_CustomComputeKernel, AdditionalSources), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalSources_MetaData), NewProp_AdditionalSources_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_ShaderSource = { "ShaderSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_CustomComputeKernel, ShaderSource), Z_Construct_UScriptStruct_FOptimusShaderText, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShaderSource_MetaData), NewProp_ShaderSource_MetaData) }; // 3653390132
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_KernelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_ExecutionDomain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_GroupSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_Parameters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_InputBindings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_InputBindings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_OutputBindings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_OutputBindings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_InputBindingArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_OutputBindingArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_SecondaryInputBindingGroups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_SecondaryInputBindingGroups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_AdditionalSources_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_AdditionalSources,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_ShaderSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusNode_ComputeKernelBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UOptimusShaderTextProvider_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_CustomComputeKernel, IOptimusShaderTextProvider), false },  // 3448967477
	{ Z_Construct_UClass_UOptimusParameterBindingProvider_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_CustomComputeKernel, IOptimusParameterBindingProvider), false },  // 658361310
	{ Z_Construct_UClass_UOptimusNodeAdderPinProvider_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_CustomComputeKernel, IOptimusNodeAdderPinProvider), false },  // 3861201956
	{ Z_Construct_UClass_UOptimusExecutionDomainProvider_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_CustomComputeKernel, IOptimusExecutionDomainProvider), false },  // 2242621882
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::ClassParams = {
	&UOptimusNode_CustomComputeKernel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusNode_CustomComputeKernel()
{
	if (!Z_Registration_Info_UClass_UOptimusNode_CustomComputeKernel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNode_CustomComputeKernel.OuterSingleton, Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusNode_CustomComputeKernel.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNode_CustomComputeKernel>()
{
	return UOptimusNode_CustomComputeKernel::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNode_CustomComputeKernel);
UOptimusNode_CustomComputeKernel::~UOptimusNode_CustomComputeKernel() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UOptimusNode_CustomComputeKernel)
// End Class UOptimusNode_CustomComputeKernel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_CustomComputeKernel_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOptimusSecondaryInputBindingsGroup::StaticStruct, Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup_Statics::NewStructOps, TEXT("OptimusSecondaryInputBindingsGroup"), &Z_Registration_Info_UScriptStruct_OptimusSecondaryInputBindingsGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusSecondaryInputBindingsGroup), 2079926113U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNode_CustomComputeKernel, UOptimusNode_CustomComputeKernel::StaticClass, TEXT("UOptimusNode_CustomComputeKernel"), &Z_Registration_Info_UClass_UOptimusNode_CustomComputeKernel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNode_CustomComputeKernel), 177854261U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_CustomComputeKernel_h_3791953516(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_CustomComputeKernel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_CustomComputeKernel_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_CustomComputeKernel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_CustomComputeKernel_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
