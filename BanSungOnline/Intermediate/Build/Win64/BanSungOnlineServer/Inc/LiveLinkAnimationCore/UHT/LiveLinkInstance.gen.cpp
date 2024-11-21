// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LiveLinkAnimationCore/Public/LiveLinkInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/LiveLinkAnimationCore/Public/AnimNode_LiveLinkPose.h"
#include "Runtime/LiveLinkInterface/Public/LiveLinkTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkInstance() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy();
LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkInstance();
LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkInstance_NoRegister();
LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister();
LIVELINKANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose();
LIVELINKANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkInstanceProxy();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectName();
UPackage* Z_Construct_UPackage__Script_LiveLinkAnimationCore();
// End Cross Module References

// Begin ScriptStruct FLiveLinkInstanceProxy
static_assert(std::is_polymorphic<FLiveLinkInstanceProxy>() == std::is_polymorphic<FAnimInstanceProxy>(), "USTRUCT FLiveLinkInstanceProxy cannot be polymorphic unless super FAnimInstanceProxy is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkInstanceProxy;
class UScriptStruct* FLiveLinkInstanceProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkInstanceProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkInstanceProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkInstanceProxy, (UObject*)Z_Construct_UPackage__Script_LiveLinkAnimationCore(), TEXT("LiveLinkInstanceProxy"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkInstanceProxy.OuterSingleton;
}
template<> LIVELINKANIMATIONCORE_API UScriptStruct* StaticStruct<FLiveLinkInstanceProxy>()
{
	return FLiveLinkInstanceProxy::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Proxy override for this UAnimInstance-derived class */" },
		{ "ModuleRelativePath", "Public/LiveLinkInstance.h" },
		{ "ToolTip", "Proxy override for this UAnimInstance-derived class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseNode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LiveLinkInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoseNode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkInstanceProxy>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::NewProp_PoseNode = { "PoseNode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkInstanceProxy, PoseNode), Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseNode_MetaData), NewProp_PoseNode_MetaData) }; // 3358103791
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::NewProp_PoseNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkAnimationCore,
	Z_Construct_UScriptStruct_FAnimInstanceProxy,
	&NewStructOps,
	"LiveLinkInstanceProxy",
	Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::PropPointers),
	sizeof(FLiveLinkInstanceProxy),
	alignof(FLiveLinkInstanceProxy),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkInstanceProxy()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkInstanceProxy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkInstanceProxy.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkInstanceProxy.InnerSingleton;
}
// End ScriptStruct FLiveLinkInstanceProxy

// Begin Class ULiveLinkInstance Function EnableLiveLinkEvaluation
struct Z_Construct_UFunction_ULiveLinkInstance_EnableLiveLinkEvaluation_Statics
{
	struct LiveLinkInstance_eventEnableLiveLinkEvaluation_Parms
	{
		bool bDoEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation|Live Link" },
		{ "ModuleRelativePath", "Public/LiveLinkInstance.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bDoEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULiveLinkInstance_EnableLiveLinkEvaluation_Statics::NewProp_bDoEnable_SetBit(void* Obj)
{
	((LiveLinkInstance_eventEnableLiveLinkEvaluation_Parms*)Obj)->bDoEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkInstance_EnableLiveLinkEvaluation_Statics::NewProp_bDoEnable = { "bDoEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LiveLinkInstance_eventEnableLiveLinkEvaluation_Parms), &Z_Construct_UFunction_ULiveLinkInstance_EnableLiveLinkEvaluation_Statics::NewProp_bDoEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkInstance_EnableLiveLinkEvaluation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkInstance_EnableLiveLinkEvaluation_Statics::NewProp_bDoEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkInstance_EnableLiveLinkEvaluation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkInstance_EnableLiveLinkEvaluation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkInstance, nullptr, "EnableLiveLinkEvaluation", nullptr, nullptr, Z_Construct_UFunction_ULiveLinkInstance_EnableLiveLinkEvaluation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkInstance_EnableLiveLinkEvaluation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULiveLinkInstance_EnableLiveLinkEvaluation_Statics::LiveLinkInstance_eventEnableLiveLinkEvaluation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkInstance_EnableLiveLinkEvaluation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULiveLinkInstance_EnableLiveLinkEvaluation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULiveLinkInstance_EnableLiveLinkEvaluation_Statics::LiveLinkInstance_eventEnableLiveLinkEvaluation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULiveLinkInstance_EnableLiveLinkEvaluation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkInstance_EnableLiveLinkEvaluation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULiveLinkInstance::execEnableLiveLinkEvaluation)
{
	P_GET_UBOOL(Z_Param_bDoEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableLiveLinkEvaluation(Z_Param_bDoEnable);
	P_NATIVE_END;
}
// End Class ULiveLinkInstance Function EnableLiveLinkEvaluation

// Begin Class ULiveLinkInstance Function SetRetargetAsset
struct Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset_Statics
{
	struct LiveLinkInstance_eventSetRetargetAsset_Parms
	{
		TSubclassOf<ULiveLinkRetargetAsset> RetargetAsset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation|Live Link" },
		{ "ModuleRelativePath", "Public/LiveLinkInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_RetargetAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset_Statics::NewProp_RetargetAsset = { "RetargetAsset", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkInstance_eventSetRetargetAsset_Parms, RetargetAsset), Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset_Statics::NewProp_RetargetAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkInstance, nullptr, "SetRetargetAsset", nullptr, nullptr, Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset_Statics::LiveLinkInstance_eventSetRetargetAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset_Statics::LiveLinkInstance_eventSetRetargetAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULiveLinkInstance::execSetRetargetAsset)
{
	P_GET_OBJECT(UClass,Z_Param_RetargetAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRetargetAsset(Z_Param_RetargetAsset);
	P_NATIVE_END;
}
// End Class ULiveLinkInstance Function SetRetargetAsset

// Begin Class ULiveLinkInstance Function SetSubject
struct Z_Construct_UFunction_ULiveLinkInstance_SetSubject_Statics
{
	struct LiveLinkInstance_eventSetSubject_Parms
	{
		FLiveLinkSubjectName SubjectName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation|Live Link" },
		{ "ModuleRelativePath", "Public/LiveLinkInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubjectName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkInstance_SetSubject_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkInstance_eventSetSubject_Parms, SubjectName), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(0, nullptr) }; // 463217522
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkInstance_SetSubject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkInstance_SetSubject_Statics::NewProp_SubjectName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkInstance_SetSubject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkInstance_SetSubject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkInstance, nullptr, "SetSubject", nullptr, nullptr, Z_Construct_UFunction_ULiveLinkInstance_SetSubject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkInstance_SetSubject_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULiveLinkInstance_SetSubject_Statics::LiveLinkInstance_eventSetSubject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkInstance_SetSubject_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULiveLinkInstance_SetSubject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULiveLinkInstance_SetSubject_Statics::LiveLinkInstance_eventSetSubject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULiveLinkInstance_SetSubject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkInstance_SetSubject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULiveLinkInstance::execSetSubject)
{
	P_GET_STRUCT(FLiveLinkSubjectName,Z_Param_SubjectName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSubject(Z_Param_SubjectName);
	P_NATIVE_END;
}
// End Class ULiveLinkInstance Function SetSubject

// Begin Class ULiveLinkInstance
void ULiveLinkInstance::StaticRegisterNativesULiveLinkInstance()
{
	UClass* Class = ULiveLinkInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnableLiveLinkEvaluation", &ULiveLinkInstance::execEnableLiveLinkEvaluation },
		{ "SetRetargetAsset", &ULiveLinkInstance::execSetRetargetAsset },
		{ "SetSubject", &ULiveLinkInstance::execSetSubject },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkInstance);
UClass* Z_Construct_UClass_ULiveLinkInstance_NoRegister()
{
	return ULiveLinkInstance::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "LiveLinkInstance.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/LiveLinkInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRetargetAsset_MetaData[] = {
		{ "Comment", "// Cache for GC\n" },
		{ "ModuleRelativePath", "Public/LiveLinkInstance.h" },
		{ "ToolTip", "Cache for GC" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentRetargetAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULiveLinkInstance_EnableLiveLinkEvaluation, "EnableLiveLinkEvaluation" }, // 35260697
		{ &Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset, "SetRetargetAsset" }, // 1579815059
		{ &Z_Construct_UFunction_ULiveLinkInstance_SetSubject, "SetSubject" }, // 184295940
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULiveLinkInstance_Statics::NewProp_CurrentRetargetAsset = { "CurrentRetargetAsset", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkInstance, CurrentRetargetAsset), Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRetargetAsset_MetaData), NewProp_CurrentRetargetAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkInstance_Statics::NewProp_CurrentRetargetAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULiveLinkInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkAnimationCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkInstance_Statics::ClassParams = {
	&ULiveLinkInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULiveLinkInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkInstance_Statics::PropPointers),
	0,
	0x008800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkInstance()
{
	if (!Z_Registration_Info_UClass_ULiveLinkInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkInstance.OuterSingleton, Z_Construct_UClass_ULiveLinkInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkInstance.OuterSingleton;
}
template<> LIVELINKANIMATIONCORE_API UClass* StaticClass<ULiveLinkInstance>()
{
	return ULiveLinkInstance::StaticClass();
}
ULiveLinkInstance::ULiveLinkInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkInstance);
ULiveLinkInstance::~ULiveLinkInstance() {}
// End Class ULiveLinkInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLiveLinkInstanceProxy::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::NewStructOps, TEXT("LiveLinkInstanceProxy"), &Z_Registration_Info_UScriptStruct_LiveLinkInstanceProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkInstanceProxy), 61489420U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkInstance, ULiveLinkInstance::StaticClass, TEXT("ULiveLinkInstance"), &Z_Registration_Info_UClass_ULiveLinkInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkInstance), 3415522493U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_3858674560(TEXT("/Script/LiveLinkAnimationCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
