// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Decorators/BTDecorator_Loop.h"
#include "Runtime/AIModule/Classes/BehaviorTree/ValueOrBBKey.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_Loop() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_Loop();
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_Loop_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Float();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Int32();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBTDecorator_Loop
void UBTDecorator_Loop::StaticRegisterNativesUBTDecorator_Loop()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_Loop);
UClass* Z_Construct_UClass_UBTDecorator_Loop_NoRegister()
{
	return UBTDecorator_Loop::StaticClass();
}
struct Z_Construct_UClass_UBTDecorator_Loop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Loop decorator node.\n * A decorator node that bases its condition on whether its loop counter has been exceeded.\n */" },
		{ "HideCategories", "Condition" },
		{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_Loop.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Loop.h" },
		{ "ToolTip", "Loop decorator node.\nA decorator node that bases its condition on whether its loop counter has been exceeded." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumLoops_MetaData[] = {
		{ "Category", "Decorator" },
		{ "ClampMax", "255" },
		{ "ClampMin", "1" },
		{ "Comment", "/** number of executions */" },
		{ "EditCondition", "!bInfiniteLoop" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Loop.h" },
		{ "ToolTip", "number of executions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInfiniteLoop_MetaData[] = {
		{ "Category", "Decorator" },
		{ "Comment", "/** infinite loop */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Loop.h" },
		{ "ToolTip", "infinite loop" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfiniteLoopTimeoutTime_MetaData[] = {
		{ "Category", "Decorator" },
		{ "Comment", "/** timeout (when looping infinitely, when we finish a loop we will check whether we have spent this time looping, if we have we will stop looping). A negative value means loop forever. */" },
		{ "EditCondition", "bInfiniteLoop" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Loop.h" },
		{ "ToolTip", "timeout (when looping infinitely, when we finish a loop we will check whether we have spent this time looping, if we have we will stop looping). A negative value means loop forever." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NumLoops;
	static void NewProp_bInfiniteLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInfiniteLoop;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InfiniteLoopTimeoutTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_Loop>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_Loop_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_Loop, NumLoops), Z_Construct_UScriptStruct_FValueOrBBKey_Int32, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumLoops_MetaData), NewProp_NumLoops_MetaData) }; // 3826788361
void Z_Construct_UClass_UBTDecorator_Loop_Statics::NewProp_bInfiniteLoop_SetBit(void* Obj)
{
	((UBTDecorator_Loop*)Obj)->bInfiniteLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTDecorator_Loop_Statics::NewProp_bInfiniteLoop = { "bInfiniteLoop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBTDecorator_Loop), &Z_Construct_UClass_UBTDecorator_Loop_Statics::NewProp_bInfiniteLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInfiniteLoop_MetaData), NewProp_bInfiniteLoop_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_Loop_Statics::NewProp_InfiniteLoopTimeoutTime = { "InfiniteLoopTimeoutTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_Loop, InfiniteLoopTimeoutTime), Z_Construct_UScriptStruct_FValueOrBBKey_Float, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfiniteLoopTimeoutTime_MetaData), NewProp_InfiniteLoopTimeoutTime_MetaData) }; // 4044354920
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_Loop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Loop_Statics::NewProp_NumLoops,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Loop_Statics::NewProp_bInfiniteLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Loop_Statics::NewProp_InfiniteLoopTimeoutTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Loop_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTDecorator_Loop_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Loop_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_Loop_Statics::ClassParams = {
	&UBTDecorator_Loop::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTDecorator_Loop_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Loop_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Loop_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTDecorator_Loop_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTDecorator_Loop()
{
	if (!Z_Registration_Info_UClass_UBTDecorator_Loop.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_Loop.OuterSingleton, Z_Construct_UClass_UBTDecorator_Loop_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTDecorator_Loop.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBTDecorator_Loop>()
{
	return UBTDecorator_Loop::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_Loop);
UBTDecorator_Loop::~UBTDecorator_Loop() {}
// End Class UBTDecorator_Loop

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Loop_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_Loop, UBTDecorator_Loop::StaticClass, TEXT("UBTDecorator_Loop"), &Z_Registration_Info_UClass_UBTDecorator_Loop, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_Loop), 3579039030U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Loop_h_1292702082(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Loop_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Loop_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
