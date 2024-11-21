// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Public/VirtualSubjects/LiveLinkBlueprintVirtualSubject.h"
#include "Runtime/LiveLinkInterface/Public/LiveLinkTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkBlueprintVirtualSubject() {}

// Begin Cross Module References
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject();
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_NoRegister();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkVirtualSubject();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseFrameData();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseStaticData();
UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References

// Begin Class ULiveLinkBlueprintVirtualSubject Function OnInitialize
static const FName NAME_ULiveLinkBlueprintVirtualSubject_OnInitialize = FName(TEXT("OnInitialize"));
void ULiveLinkBlueprintVirtualSubject::OnInitialize()
{
	UFunction* Func = FindFunctionChecked(NAME_ULiveLinkBlueprintVirtualSubject_OnInitialize);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnInitialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/VirtualSubjects/LiveLinkBlueprintVirtualSubject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject, nullptr, "OnInitialize", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnInitialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnInitialize_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnInitialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnInitialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ULiveLinkBlueprintVirtualSubject Function OnInitialize

// Begin Class ULiveLinkBlueprintVirtualSubject Function OnUpdate
static const FName NAME_ULiveLinkBlueprintVirtualSubject_OnUpdate = FName(TEXT("OnUpdate"));
void ULiveLinkBlueprintVirtualSubject::OnUpdate()
{
	UFunction* Func = FindFunctionChecked(NAME_ULiveLinkBlueprintVirtualSubject_OnUpdate);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/VirtualSubjects/LiveLinkBlueprintVirtualSubject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject, nullptr, "OnUpdate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnUpdate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ULiveLinkBlueprintVirtualSubject Function OnUpdate

// Begin Class ULiveLinkBlueprintVirtualSubject Function UpdateVirtualSubjectFrameData_Internal
struct Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics
{
	struct LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectFrameData_Internal_Parms
	{
		FLiveLinkBaseFrameData InStruct;
		bool bInShouldStampCurrentTime;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AllowAbstract", "false" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "LiveLink" },
		{ "CustomStructureParam", "InStruct" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/VirtualSubjects/LiveLinkBlueprintVirtualSubject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InStruct;
	static void NewProp_bInShouldStampCurrentTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInShouldStampCurrentTime;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::NewProp_InStruct = { "InStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectFrameData_Internal_Parms, InStruct), Z_Construct_UScriptStruct_FLiveLinkBaseFrameData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InStruct_MetaData), NewProp_InStruct_MetaData) }; // 4110352794
void Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::NewProp_bInShouldStampCurrentTime_SetBit(void* Obj)
{
	((LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectFrameData_Internal_Parms*)Obj)->bInShouldStampCurrentTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::NewProp_bInShouldStampCurrentTime = { "bInShouldStampCurrentTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectFrameData_Internal_Parms), &Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::NewProp_bInShouldStampCurrentTime_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectFrameData_Internal_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectFrameData_Internal_Parms), &Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::NewProp_InStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::NewProp_bInShouldStampCurrentTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject, nullptr, "UpdateVirtualSubjectFrameData_Internal", nullptr, nullptr, Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectFrameData_Internal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectFrameData_Internal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ULiveLinkBlueprintVirtualSubject Function UpdateVirtualSubjectFrameData_Internal

// Begin Class ULiveLinkBlueprintVirtualSubject Function UpdateVirtualSubjectStaticData_Internal
struct Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics
{
	struct LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectStaticData_Internal_Parms
	{
		FLiveLinkBaseStaticData InStruct;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AllowAbstract", "false" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "LiveLink" },
		{ "CustomStructureParam", "InStruct" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/VirtualSubjects/LiveLinkBlueprintVirtualSubject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InStruct;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::NewProp_InStruct = { "InStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectStaticData_Internal_Parms, InStruct), Z_Construct_UScriptStruct_FLiveLinkBaseStaticData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InStruct_MetaData), NewProp_InStruct_MetaData) }; // 1502209157
void Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectStaticData_Internal_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectStaticData_Internal_Parms), &Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::NewProp_InStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject, nullptr, "UpdateVirtualSubjectStaticData_Internal", nullptr, nullptr, Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectStaticData_Internal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectStaticData_Internal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ULiveLinkBlueprintVirtualSubject Function UpdateVirtualSubjectStaticData_Internal

// Begin Class ULiveLinkBlueprintVirtualSubject
void ULiveLinkBlueprintVirtualSubject::StaticRegisterNativesULiveLinkBlueprintVirtualSubject()
{
	UClass* Class = ULiveLinkBlueprintVirtualSubject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateVirtualSubjectFrameData_Internal", &ULiveLinkBlueprintVirtualSubject::execUpdateVirtualSubjectFrameData_Internal },
		{ "UpdateVirtualSubjectStaticData_Internal", &ULiveLinkBlueprintVirtualSubject::execUpdateVirtualSubjectStaticData_Internal },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkBlueprintVirtualSubject);
UClass* Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_NoRegister()
{
	return ULiveLinkBlueprintVirtualSubject::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Base class for creating virtual subjects in Blueprints\n" },
		{ "IncludePath", "VirtualSubjects/LiveLinkBlueprintVirtualSubject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VirtualSubjects/LiveLinkBlueprintVirtualSubject.h" },
		{ "ToolTip", "Base class for creating virtual subjects in Blueprints" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnInitialize, "OnInitialize" }, // 2613124812
		{ &Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnUpdate, "OnUpdate" }, // 1987230652
		{ &Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal, "UpdateVirtualSubjectFrameData_Internal" }, // 3089567167
		{ &Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal, "UpdateVirtualSubjectStaticData_Internal" }, // 192527714
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkBlueprintVirtualSubject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkVirtualSubject,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_Statics::ClassParams = {
	&ULiveLinkBlueprintVirtualSubject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject()
{
	if (!Z_Registration_Info_UClass_ULiveLinkBlueprintVirtualSubject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkBlueprintVirtualSubject.OuterSingleton, Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkBlueprintVirtualSubject.OuterSingleton;
}
template<> LIVELINK_API UClass* StaticClass<ULiveLinkBlueprintVirtualSubject>()
{
	return ULiveLinkBlueprintVirtualSubject::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkBlueprintVirtualSubject);
ULiveLinkBlueprintVirtualSubject::~ULiveLinkBlueprintVirtualSubject() {}
// End Class ULiveLinkBlueprintVirtualSubject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_VirtualSubjects_LiveLinkBlueprintVirtualSubject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject, ULiveLinkBlueprintVirtualSubject::StaticClass, TEXT("ULiveLinkBlueprintVirtualSubject"), &Z_Registration_Info_UClass_ULiveLinkBlueprintVirtualSubject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkBlueprintVirtualSubject), 66835657U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_VirtualSubjects_LiveLinkBlueprintVirtualSubject_h_1843544428(TEXT("/Script/LiveLink"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_VirtualSubjects_LiveLinkBlueprintVirtualSubject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_VirtualSubjects_LiveLinkBlueprintVirtualSubject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
