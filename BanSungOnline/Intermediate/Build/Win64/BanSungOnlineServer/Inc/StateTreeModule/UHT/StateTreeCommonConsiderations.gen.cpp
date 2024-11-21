// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeModule/Public/Considerations/StateTreeCommonConsiderations.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "StateTreeModule/Public/StateTreeAnyEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeCommonConsiderations() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeAnyEnum();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeConsiderationCommonBase();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeConsiderationResponseCurve();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeConstantConsideration();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeConstantConsiderationInstanceData();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEnumInputConsideration();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEnumInputConsiderationInstanceData();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEnumValueScorePair();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEnumValueScorePairs();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeFloatInputConsideration();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeFloatInputConsiderationInstanceData();
UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References

// Begin ScriptStruct FStateTreeConstantConsiderationInstanceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeConstantConsiderationInstanceData;
class UScriptStruct* FStateTreeConstantConsiderationInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeConstantConsiderationInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeConstantConsiderationInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeConstantConsiderationInstanceData, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeConstantConsiderationInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeConstantConsiderationInstanceData.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeConstantConsiderationInstanceData>()
{
	return FStateTreeConstantConsiderationInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeConstantConsiderationInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Considerations/StateTreeCommonConsiderations.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Constant_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Considerations/StateTreeCommonConsiderations.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Constant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeConstantConsiderationInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStateTreeConstantConsiderationInstanceData_Statics::NewProp_Constant = { "Constant", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeConstantConsiderationInstanceData, Constant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Constant_MetaData), NewProp_Constant_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeConstantConsiderationInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeConstantConsiderationInstanceData_Statics::NewProp_Constant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeConstantConsiderationInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeConstantConsiderationInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeConstantConsiderationInstanceData",
	Z_Construct_UScriptStruct_FStateTreeConstantConsiderationInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeConstantConsiderationInstanceData_Statics::PropPointers),
	sizeof(FStateTreeConstantConsiderationInstanceData),
	alignof(FStateTreeConstantConsiderationInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeConstantConsiderationInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeConstantConsiderationInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeConstantConsiderationInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeConstantConsiderationInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeConstantConsiderationInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeConstantConsiderationInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeConstantConsiderationInstanceData.InnerSingleton;
}
// End ScriptStruct FStateTreeConstantConsiderationInstanceData

// Begin ScriptStruct FStateTreeConstantConsideration
static_assert(std::is_polymorphic<FStateTreeConstantConsideration>() == std::is_polymorphic<FStateTreeConsiderationCommonBase>(), "USTRUCT FStateTreeConstantConsideration cannot be polymorphic unless super FStateTreeConsiderationCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeConstantConsideration;
class UScriptStruct* FStateTreeConstantConsideration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeConstantConsideration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeConstantConsideration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeConstantConsideration, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeConstantConsideration"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeConstantConsideration.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeConstantConsideration>()
{
	return FStateTreeConstantConsideration::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeConstantConsideration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Consideration using a constant as its score.\n */" },
		{ "DisplayName", "Constant" },
		{ "ModuleRelativePath", "Public/Considerations/StateTreeCommonConsiderations.h" },
		{ "ToolTip", "Consideration using a constant as its score." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeConstantConsideration>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeConstantConsideration_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	Z_Construct_UScriptStruct_FStateTreeConsiderationCommonBase,
	&NewStructOps,
	"StateTreeConstantConsideration",
	nullptr,
	0,
	sizeof(FStateTreeConstantConsideration),
	alignof(FStateTreeConstantConsideration),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeConstantConsideration_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeConstantConsideration_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeConstantConsideration()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeConstantConsideration.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeConstantConsideration.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeConstantConsideration_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeConstantConsideration.InnerSingleton;
}
// End ScriptStruct FStateTreeConstantConsideration

// Begin ScriptStruct FStateTreeConsiderationResponseCurve
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeConsiderationResponseCurve;
class UScriptStruct* FStateTreeConsiderationResponseCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeConsiderationResponseCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeConsiderationResponseCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeConsiderationResponseCurve, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeConsiderationResponseCurve"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeConsiderationResponseCurve.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeConsiderationResponseCurve>()
{
	return FStateTreeConsiderationResponseCurve::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeConsiderationResponseCurve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Considerations/StateTreeCommonConsiderations.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveInfo_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/* Curve used to output the final score for the Consideration. */" },
		{ "DisplayName", "Curve" },
		{ "ModuleRelativePath", "Public/Considerations/StateTreeCommonConsiderations.h" },
		{ "ToolTip", "Curve used to output the final score for the Consideration." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurveInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeConsiderationResponseCurve>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeConsiderationResponseCurve_Statics::NewProp_CurveInfo = { "CurveInfo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeConsiderationResponseCurve, CurveInfo), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveInfo_MetaData), NewProp_CurveInfo_MetaData) }; // 1495033350
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeConsiderationResponseCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeConsiderationResponseCurve_Statics::NewProp_CurveInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeConsiderationResponseCurve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeConsiderationResponseCurve_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeConsiderationResponseCurve",
	Z_Construct_UScriptStruct_FStateTreeConsiderationResponseCurve_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeConsiderationResponseCurve_Statics::PropPointers),
	sizeof(FStateTreeConsiderationResponseCurve),
	alignof(FStateTreeConsiderationResponseCurve),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeConsiderationResponseCurve_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeConsiderationResponseCurve_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeConsiderationResponseCurve()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeConsiderationResponseCurve.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeConsiderationResponseCurve.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeConsiderationResponseCurve_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeConsiderationResponseCurve.InnerSingleton;
}
// End ScriptStruct FStateTreeConsiderationResponseCurve

// Begin ScriptStruct FStateTreeFloatInputConsiderationInstanceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeFloatInputConsiderationInstanceData;
class UScriptStruct* FStateTreeFloatInputConsiderationInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeFloatInputConsiderationInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeFloatInputConsiderationInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeFloatInputConsiderationInstanceData, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeFloatInputConsiderationInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeFloatInputConsiderationInstanceData.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeFloatInputConsiderationInstanceData>()
{
	return FStateTreeFloatInputConsiderationInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeFloatInputConsiderationInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Considerations/StateTreeCommonConsiderations.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Considerations/StateTreeCommonConsiderations.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interval_MetaData[] = {
		{ "Category", "Parameter" },
		{ "DisplayName", "InputRange" },
		{ "ModuleRelativePath", "Public/Considerations/StateTreeCommonConsiderations.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Input;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Interval;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeFloatInputConsiderationInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStateTreeFloatInputConsiderationInstanceData_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeFloatInputConsiderationInstanceData, Input), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeFloatInputConsiderationInstanceData_Statics::NewProp_Interval = { "Interval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeFloatInputConsiderationInstanceData, Interval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interval_MetaData), NewProp_Interval_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeFloatInputConsiderationInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeFloatInputConsiderationInstanceData_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeFloatInputConsiderationInstanceData_Statics::NewProp_Interval,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeFloatInputConsiderationInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeFloatInputConsiderationInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeFloatInputConsiderationInstanceData",
	Z_Construct_UScriptStruct_FStateTreeFloatInputConsiderationInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeFloatInputConsiderationInstanceData_Statics::PropPointers),
	sizeof(FStateTreeFloatInputConsiderationInstanceData),
	alignof(FStateTreeFloatInputConsiderationInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeFloatInputConsiderationInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeFloatInputConsiderationInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeFloatInputConsiderationInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeFloatInputConsiderationInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeFloatInputConsiderationInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeFloatInputConsiderationInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeFloatInputConsiderationInstanceData.InnerSingleton;
}
// End ScriptStruct FStateTreeFloatInputConsiderationInstanceData

// Begin ScriptStruct FStateTreeFloatInputConsideration
static_assert(std::is_polymorphic<FStateTreeFloatInputConsideration>() == std::is_polymorphic<FStateTreeConsiderationCommonBase>(), "USTRUCT FStateTreeFloatInputConsideration cannot be polymorphic unless super FStateTreeConsiderationCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeFloatInputConsideration;
class UScriptStruct* FStateTreeFloatInputConsideration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeFloatInputConsideration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeFloatInputConsideration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeFloatInputConsideration, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeFloatInputConsideration"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeFloatInputConsideration.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeFloatInputConsideration>()
{
	return FStateTreeFloatInputConsideration::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeFloatInputConsideration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Consideration using a Float as input to the response curve.\n */" },
		{ "DisplayName", "Float Input" },
		{ "ModuleRelativePath", "Public/Considerations/StateTreeCommonConsiderations.h" },
		{ "ToolTip", "Consideration using a Float as input to the response curve." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseCurve_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Considerations/StateTreeCommonConsiderations.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResponseCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeFloatInputConsideration>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeFloatInputConsideration_Statics::NewProp_ResponseCurve = { "ResponseCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeFloatInputConsideration, ResponseCurve), Z_Construct_UScriptStruct_FStateTreeConsiderationResponseCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseCurve_MetaData), NewProp_ResponseCurve_MetaData) }; // 2902269319
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeFloatInputConsideration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeFloatInputConsideration_Statics::NewProp_ResponseCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeFloatInputConsideration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeFloatInputConsideration_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	Z_Construct_UScriptStruct_FStateTreeConsiderationCommonBase,
	&NewStructOps,
	"StateTreeFloatInputConsideration",
	Z_Construct_UScriptStruct_FStateTreeFloatInputConsideration_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeFloatInputConsideration_Statics::PropPointers),
	sizeof(FStateTreeFloatInputConsideration),
	alignof(FStateTreeFloatInputConsideration),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeFloatInputConsideration_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeFloatInputConsideration_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeFloatInputConsideration()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeFloatInputConsideration.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeFloatInputConsideration.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeFloatInputConsideration_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeFloatInputConsideration.InnerSingleton;
}
// End ScriptStruct FStateTreeFloatInputConsideration

// Begin ScriptStruct FStateTreeEnumValueScorePair
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeEnumValueScorePair;
class UScriptStruct* FStateTreeEnumValueScorePair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeEnumValueScorePair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeEnumValueScorePair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeEnumValueScorePair, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeEnumValueScorePair"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeEnumValueScorePair.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeEnumValueScorePair>()
{
	return FStateTreeEnumValueScorePair::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeEnumValueScorePair_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Considerations/StateTreeCommonConsiderations.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnumName_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Considerations/StateTreeCommonConsiderations.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnumValue_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Considerations/StateTreeCommonConsiderations.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Considerations/StateTreeCommonConsiderations.h" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_EnumName;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_EnumValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Score;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeEnumValueScorePair>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStateTreeEnumValueScorePair_Statics::NewProp_EnumName = { "EnumName", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeEnumValueScorePair, EnumName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnumName_MetaData), NewProp_EnumName_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FStateTreeEnumValueScorePair_Statics::NewProp_EnumValue = { "EnumValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeEnumValueScorePair, EnumValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnumValue_MetaData), NewProp_EnumValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStateTreeEnumValueScorePair_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeEnumValueScorePair, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeEnumValueScorePair_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEnumValueScorePair_Statics::NewProp_EnumName,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEnumValueScorePair_Statics::NewProp_EnumValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEnumValueScorePair_Statics::NewProp_Score,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEnumValueScorePair_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeEnumValueScorePair_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeEnumValueScorePair",
	Z_Construct_UScriptStruct_FStateTreeEnumValueScorePair_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEnumValueScorePair_Statics::PropPointers),
	sizeof(FStateTreeEnumValueScorePair),
	alignof(FStateTreeEnumValueScorePair),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEnumValueScorePair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeEnumValueScorePair_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEnumValueScorePair()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeEnumValueScorePair.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeEnumValueScorePair.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeEnumValueScorePair_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeEnumValueScorePair.InnerSingleton;
}
// End ScriptStruct FStateTreeEnumValueScorePair

// Begin ScriptStruct FStateTreeEnumValueScorePairs
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeEnumValueScorePairs;
class UScriptStruct* FStateTreeEnumValueScorePairs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeEnumValueScorePairs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeEnumValueScorePairs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeEnumValueScorePairs, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeEnumValueScorePairs"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeEnumValueScorePairs.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeEnumValueScorePairs>()
{
	return FStateTreeEnumValueScorePairs::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeEnumValueScorePairs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Considerations/StateTreeCommonConsiderations.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Considerations/StateTreeCommonConsiderations.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "EnumValueScorePairs" },
		{ "ModuleRelativePath", "Public/Considerations/StateTreeCommonConsiderations.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Enum;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeEnumValueScorePairs>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreeEnumValueScorePairs_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0114000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeEnumValueScorePairs, Enum), Z_Construct_UClass_UEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enum_MetaData), NewProp_Enum_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeEnumValueScorePairs_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreeEnumValueScorePair, METADATA_PARAMS(0, nullptr) }; // 504623145
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreeEnumValueScorePairs_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeEnumValueScorePairs, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 504623145
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeEnumValueScorePairs_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEnumValueScorePairs_Statics::NewProp_Enum,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEnumValueScorePairs_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEnumValueScorePairs_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEnumValueScorePairs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeEnumValueScorePairs_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeEnumValueScorePairs",
	Z_Construct_UScriptStruct_FStateTreeEnumValueScorePairs_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEnumValueScorePairs_Statics::PropPointers),
	sizeof(FStateTreeEnumValueScorePairs),
	alignof(FStateTreeEnumValueScorePairs),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEnumValueScorePairs_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeEnumValueScorePairs_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEnumValueScorePairs()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeEnumValueScorePairs.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeEnumValueScorePairs.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeEnumValueScorePairs_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeEnumValueScorePairs.InnerSingleton;
}
// End ScriptStruct FStateTreeEnumValueScorePairs

// Begin ScriptStruct FStateTreeEnumInputConsiderationInstanceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeEnumInputConsiderationInstanceData;
class UScriptStruct* FStateTreeEnumInputConsiderationInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeEnumInputConsiderationInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeEnumInputConsiderationInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeEnumInputConsiderationInstanceData, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeEnumInputConsiderationInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeEnumInputConsiderationInstanceData.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeEnumInputConsiderationInstanceData>()
{
	return FStateTreeEnumInputConsiderationInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeEnumInputConsiderationInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Considerations/StateTreeCommonConsiderations.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "AllowAnyBinding", "" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Considerations/StateTreeCommonConsiderations.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeEnumInputConsiderationInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeEnumInputConsiderationInstanceData_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeEnumInputConsiderationInstanceData, Input), Z_Construct_UScriptStruct_FStateTreeAnyEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2033272328
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeEnumInputConsiderationInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEnumInputConsiderationInstanceData_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEnumInputConsiderationInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeEnumInputConsiderationInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	nullptr,
	&NewStructOps,
	"StateTreeEnumInputConsiderationInstanceData",
	Z_Construct_UScriptStruct_FStateTreeEnumInputConsiderationInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEnumInputConsiderationInstanceData_Statics::PropPointers),
	sizeof(FStateTreeEnumInputConsiderationInstanceData),
	alignof(FStateTreeEnumInputConsiderationInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEnumInputConsiderationInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeEnumInputConsiderationInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEnumInputConsiderationInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeEnumInputConsiderationInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeEnumInputConsiderationInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeEnumInputConsiderationInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeEnumInputConsiderationInstanceData.InnerSingleton;
}
// End ScriptStruct FStateTreeEnumInputConsiderationInstanceData

// Begin ScriptStruct FStateTreeEnumInputConsideration
static_assert(std::is_polymorphic<FStateTreeEnumInputConsideration>() == std::is_polymorphic<FStateTreeConsiderationCommonBase>(), "USTRUCT FStateTreeEnumInputConsideration cannot be polymorphic unless super FStateTreeConsiderationCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeEnumInputConsideration;
class UScriptStruct* FStateTreeEnumInputConsideration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeEnumInputConsideration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeEnumInputConsideration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeEnumInputConsideration, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeEnumInputConsideration"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeEnumInputConsideration.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeEnumInputConsideration>()
{
	return FStateTreeEnumInputConsideration::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeEnumInputConsideration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "Enum Input" },
		{ "ModuleRelativePath", "Public/Considerations/StateTreeCommonConsiderations.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnumValueScorePairs_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//~ End FStateTreeConsiderationBase Interface\n" },
		{ "ModuleRelativePath", "Public/Considerations/StateTreeCommonConsiderations.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnumValueScorePairs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeEnumInputConsideration>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeEnumInputConsideration_Statics::NewProp_EnumValueScorePairs = { "EnumValueScorePairs", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeEnumInputConsideration, EnumValueScorePairs), Z_Construct_UScriptStruct_FStateTreeEnumValueScorePairs, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnumValueScorePairs_MetaData), NewProp_EnumValueScorePairs_MetaData) }; // 203821683
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeEnumInputConsideration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEnumInputConsideration_Statics::NewProp_EnumValueScorePairs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEnumInputConsideration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeEnumInputConsideration_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	Z_Construct_UScriptStruct_FStateTreeConsiderationCommonBase,
	&NewStructOps,
	"StateTreeEnumInputConsideration",
	Z_Construct_UScriptStruct_FStateTreeEnumInputConsideration_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEnumInputConsideration_Statics::PropPointers),
	sizeof(FStateTreeEnumInputConsideration),
	alignof(FStateTreeEnumInputConsideration),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEnumInputConsideration_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeEnumInputConsideration_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEnumInputConsideration()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeEnumInputConsideration.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeEnumInputConsideration.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeEnumInputConsideration_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeEnumInputConsideration.InnerSingleton;
}
// End ScriptStruct FStateTreeEnumInputConsideration

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Considerations_StateTreeCommonConsiderations_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStateTreeConstantConsiderationInstanceData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeConstantConsiderationInstanceData_Statics::NewStructOps, TEXT("StateTreeConstantConsiderationInstanceData"), &Z_Registration_Info_UScriptStruct_StateTreeConstantConsiderationInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeConstantConsiderationInstanceData), 3574660698U) },
		{ FStateTreeConstantConsideration::StaticStruct, Z_Construct_UScriptStruct_FStateTreeConstantConsideration_Statics::NewStructOps, TEXT("StateTreeConstantConsideration"), &Z_Registration_Info_UScriptStruct_StateTreeConstantConsideration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeConstantConsideration), 776386647U) },
		{ FStateTreeConsiderationResponseCurve::StaticStruct, Z_Construct_UScriptStruct_FStateTreeConsiderationResponseCurve_Statics::NewStructOps, TEXT("StateTreeConsiderationResponseCurve"), &Z_Registration_Info_UScriptStruct_StateTreeConsiderationResponseCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeConsiderationResponseCurve), 2902269319U) },
		{ FStateTreeFloatInputConsiderationInstanceData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeFloatInputConsiderationInstanceData_Statics::NewStructOps, TEXT("StateTreeFloatInputConsiderationInstanceData"), &Z_Registration_Info_UScriptStruct_StateTreeFloatInputConsiderationInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeFloatInputConsiderationInstanceData), 3524328231U) },
		{ FStateTreeFloatInputConsideration::StaticStruct, Z_Construct_UScriptStruct_FStateTreeFloatInputConsideration_Statics::NewStructOps, TEXT("StateTreeFloatInputConsideration"), &Z_Registration_Info_UScriptStruct_StateTreeFloatInputConsideration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeFloatInputConsideration), 2944533990U) },
		{ FStateTreeEnumValueScorePair::StaticStruct, Z_Construct_UScriptStruct_FStateTreeEnumValueScorePair_Statics::NewStructOps, TEXT("StateTreeEnumValueScorePair"), &Z_Registration_Info_UScriptStruct_StateTreeEnumValueScorePair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeEnumValueScorePair), 504623145U) },
		{ FStateTreeEnumValueScorePairs::StaticStruct, Z_Construct_UScriptStruct_FStateTreeEnumValueScorePairs_Statics::NewStructOps, TEXT("StateTreeEnumValueScorePairs"), &Z_Registration_Info_UScriptStruct_StateTreeEnumValueScorePairs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeEnumValueScorePairs), 203821683U) },
		{ FStateTreeEnumInputConsiderationInstanceData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeEnumInputConsiderationInstanceData_Statics::NewStructOps, TEXT("StateTreeEnumInputConsiderationInstanceData"), &Z_Registration_Info_UScriptStruct_StateTreeEnumInputConsiderationInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeEnumInputConsiderationInstanceData), 1949151882U) },
		{ FStateTreeEnumInputConsideration::StaticStruct, Z_Construct_UScriptStruct_FStateTreeEnumInputConsideration_Statics::NewStructOps, TEXT("StateTreeEnumInputConsideration"), &Z_Registration_Info_UScriptStruct_StateTreeEnumInputConsideration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeEnumInputConsideration), 1486675759U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Considerations_StateTreeCommonConsiderations_h_3592150346(TEXT("/Script/StateTreeModule"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Considerations_StateTreeCommonConsiderations_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Considerations_StateTreeCommonConsiderations_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
