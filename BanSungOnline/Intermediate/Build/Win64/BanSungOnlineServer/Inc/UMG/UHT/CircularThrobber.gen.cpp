// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/CircularThrobber.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCircularThrobber() {}

// Begin Cross Module References
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
UMG_API UClass* Z_Construct_UClass_UCircularThrobber();
UMG_API UClass* Z_Construct_UClass_UCircularThrobber_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UCircularThrobber Function SetNumberOfPieces
struct Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces_Statics
{
	struct CircularThrobber_eventSetNumberOfPieces_Parms
	{
		int32 InNumberOfPieces;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets how many pieces there are. */" },
		{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
		{ "ToolTip", "Sets how many pieces there are." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InNumberOfPieces;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces_Statics::NewProp_InNumberOfPieces = { "InNumberOfPieces", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CircularThrobber_eventSetNumberOfPieces_Parms, InNumberOfPieces), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces_Statics::NewProp_InNumberOfPieces,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCircularThrobber, nullptr, "SetNumberOfPieces", nullptr, nullptr, Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces_Statics::CircularThrobber_eventSetNumberOfPieces_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces_Statics::CircularThrobber_eventSetNumberOfPieces_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCircularThrobber::execSetNumberOfPieces)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InNumberOfPieces);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNumberOfPieces(Z_Param_InNumberOfPieces);
	P_NATIVE_END;
}
// End Class UCircularThrobber Function SetNumberOfPieces

// Begin Class UCircularThrobber Function SetPeriod
struct Z_Construct_UFunction_UCircularThrobber_SetPeriod_Statics
{
	struct CircularThrobber_eventSetPeriod_Parms
	{
		float InPeriod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the amount of time for a full circle (in seconds). */" },
		{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
		{ "ToolTip", "Sets the amount of time for a full circle (in seconds)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InPeriod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCircularThrobber_SetPeriod_Statics::NewProp_InPeriod = { "InPeriod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CircularThrobber_eventSetPeriod_Parms, InPeriod), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCircularThrobber_SetPeriod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCircularThrobber_SetPeriod_Statics::NewProp_InPeriod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularThrobber_SetPeriod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCircularThrobber_SetPeriod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCircularThrobber, nullptr, "SetPeriod", nullptr, nullptr, Z_Construct_UFunction_UCircularThrobber_SetPeriod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularThrobber_SetPeriod_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCircularThrobber_SetPeriod_Statics::CircularThrobber_eventSetPeriod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularThrobber_SetPeriod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCircularThrobber_SetPeriod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCircularThrobber_SetPeriod_Statics::CircularThrobber_eventSetPeriod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCircularThrobber_SetPeriod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCircularThrobber_SetPeriod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCircularThrobber::execSetPeriod)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InPeriod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPeriod(Z_Param_InPeriod);
	P_NATIVE_END;
}
// End Class UCircularThrobber Function SetPeriod

// Begin Class UCircularThrobber Function SetRadius
struct Z_Construct_UFunction_UCircularThrobber_SetRadius_Statics
{
	struct CircularThrobber_eventSetRadius_Parms
	{
		float InRadius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the radius of the circle. */" },
		{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
		{ "ToolTip", "Sets the radius of the circle." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCircularThrobber_SetRadius_Statics::NewProp_InRadius = { "InRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CircularThrobber_eventSetRadius_Parms, InRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCircularThrobber_SetRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCircularThrobber_SetRadius_Statics::NewProp_InRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularThrobber_SetRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCircularThrobber_SetRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCircularThrobber, nullptr, "SetRadius", nullptr, nullptr, Z_Construct_UFunction_UCircularThrobber_SetRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularThrobber_SetRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCircularThrobber_SetRadius_Statics::CircularThrobber_eventSetRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularThrobber_SetRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCircularThrobber_SetRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCircularThrobber_SetRadius_Statics::CircularThrobber_eventSetRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCircularThrobber_SetRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCircularThrobber_SetRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCircularThrobber::execSetRadius)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRadius(Z_Param_InRadius);
	P_NATIVE_END;
}
// End Class UCircularThrobber Function SetRadius

// Begin Class UCircularThrobber
void UCircularThrobber::GetNumberOfPieces_WrapperImpl(const void* Object, void* OutValue)
{
	const UCircularThrobber* Obj = (const UCircularThrobber*)Object;
	int32& Result = *(int32*)OutValue;
	Result = (int32)Obj->GetNumberOfPieces();
}
void UCircularThrobber::SetNumberOfPieces_WrapperImpl(void* Object, const void* InValue)
{
	UCircularThrobber* Obj = (UCircularThrobber*)Object;
	int32& Value = *(int32*)InValue;
	Obj->SetNumberOfPieces(Value);
}
void UCircularThrobber::GetPeriod_WrapperImpl(const void* Object, void* OutValue)
{
	const UCircularThrobber* Obj = (const UCircularThrobber*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetPeriod();
}
void UCircularThrobber::SetPeriod_WrapperImpl(void* Object, const void* InValue)
{
	UCircularThrobber* Obj = (UCircularThrobber*)Object;
	float& Value = *(float*)InValue;
	Obj->SetPeriod(Value);
}
void UCircularThrobber::GetRadius_WrapperImpl(const void* Object, void* OutValue)
{
	const UCircularThrobber* Obj = (const UCircularThrobber*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetRadius();
}
void UCircularThrobber::SetRadius_WrapperImpl(void* Object, const void* InValue)
{
	UCircularThrobber* Obj = (UCircularThrobber*)Object;
	float& Value = *(float*)InValue;
	Obj->SetRadius(Value);
}
void UCircularThrobber::GetImage_WrapperImpl(const void* Object, void* OutValue)
{
	const UCircularThrobber* Obj = (const UCircularThrobber*)Object;
	FSlateBrush& Result = *(FSlateBrush*)OutValue;
	Result = (FSlateBrush)Obj->GetImage();
}
void UCircularThrobber::SetImage_WrapperImpl(void* Object, const void* InValue)
{
	UCircularThrobber* Obj = (UCircularThrobber*)Object;
	FSlateBrush& Value = *(FSlateBrush*)InValue;
	Obj->SetImage(Value);
}
void UCircularThrobber::StaticRegisterNativesUCircularThrobber()
{
	UClass* Class = UCircularThrobber::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetNumberOfPieces", &UCircularThrobber::execSetNumberOfPieces },
		{ "SetPeriod", &UCircularThrobber::execSetPeriod },
		{ "SetRadius", &UCircularThrobber::execSetRadius },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCircularThrobber);
UClass* Z_Construct_UClass_UCircularThrobber_NoRegister()
{
	return UCircularThrobber::StaticClass();
}
struct Z_Construct_UClass_UCircularThrobber_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A throbber widget that orients images in a spinning circle.\n * \n * * No Children\n * * Spinner Progress\n */" },
		{ "IncludePath", "Components/CircularThrobber.h" },
		{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
		{ "ToolTip", "A throbber widget that orients images in a spinning circle.\n\n* No Children\n* Spinner Progress" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPieces_MetaData[] = {
		{ "BlueprintSetter", "SetNumberOfPieces" },
		{ "Category", "Appearance" },
		{ "ClampMax", "25" },
		{ "ClampMin", "1" },
		{ "Comment", "/** How many pieces there are */" },
		{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
		{ "ToolTip", "How many pieces there are" },
		{ "UIMax", "25" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[] = {
		{ "BlueprintSetter", "SetPeriod" },
		{ "Category", "Appearance" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The amount of time for a full circle (in seconds) */" },
		{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
		{ "ToolTip", "The amount of time for a full circle (in seconds)" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "BlueprintSetter", "SetRadius" },
		{ "Category", "Appearance" },
		{ "Comment", "/** The radius of the circle. If the throbber is a child of Canvas Panel, the 'Size to Content' option must be enabled in order to set Radius. */" },
		{ "EditCondition", "bEnableRadius" },
		{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
		{ "ToolTip", "The radius of the circle. If the throbber is a child of Canvas Panel, the 'Size to Content' option must be enabled in order to set Radius." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The throbber image. */" },
		{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
		{ "ToolTip", "The throbber image." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRadius_MetaData[] = {
		{ "Category", "Appearance" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPieces;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Period;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Image;
	static void NewProp_bEnableRadius_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces, "SetNumberOfPieces" }, // 2816189695
		{ &Z_Construct_UFunction_UCircularThrobber_SetPeriod, "SetPeriod" }, // 1711691286
		{ &Z_Construct_UFunction_UCircularThrobber_SetRadius, "SetRadius" }, // 4185309761
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCircularThrobber>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCircularThrobber_Statics::NewProp_NumberOfPieces = { "NumberOfPieces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, &UCircularThrobber::SetNumberOfPieces_WrapperImpl, &UCircularThrobber::GetNumberOfPieces_WrapperImpl, 1, STRUCT_OFFSET(UCircularThrobber, NumberOfPieces), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfPieces_MetaData), NewProp_NumberOfPieces_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCircularThrobber_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UCircularThrobber::SetPeriod_WrapperImpl, &UCircularThrobber::GetPeriod_WrapperImpl, 1, STRUCT_OFFSET(UCircularThrobber, Period), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Period_MetaData), NewProp_Period_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCircularThrobber_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UCircularThrobber::SetRadius_WrapperImpl, &UCircularThrobber::GetRadius_WrapperImpl, 1, STRUCT_OFFSET(UCircularThrobber, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCircularThrobber_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UCircularThrobber::SetImage_WrapperImpl, &UCircularThrobber::GetImage_WrapperImpl, 1, STRUCT_OFFSET(UCircularThrobber, Image), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_MetaData), NewProp_Image_MetaData) }; // 4269649686
void Z_Construct_UClass_UCircularThrobber_Statics::NewProp_bEnableRadius_SetBit(void* Obj)
{
	((UCircularThrobber*)Obj)->bEnableRadius = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCircularThrobber_Statics::NewProp_bEnableRadius = { "bEnableRadius", nullptr, (EPropertyFlags)0x0040000000002001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCircularThrobber), &Z_Construct_UClass_UCircularThrobber_Statics::NewProp_bEnableRadius_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRadius_MetaData), NewProp_bEnableRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCircularThrobber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCircularThrobber_Statics::NewProp_NumberOfPieces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCircularThrobber_Statics::NewProp_Period,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCircularThrobber_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCircularThrobber_Statics::NewProp_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCircularThrobber_Statics::NewProp_bEnableRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCircularThrobber_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCircularThrobber_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCircularThrobber_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCircularThrobber_Statics::ClassParams = {
	&UCircularThrobber::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCircularThrobber_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCircularThrobber_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCircularThrobber_Statics::Class_MetaDataParams), Z_Construct_UClass_UCircularThrobber_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCircularThrobber()
{
	if (!Z_Registration_Info_UClass_UCircularThrobber.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCircularThrobber.OuterSingleton, Z_Construct_UClass_UCircularThrobber_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCircularThrobber.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UCircularThrobber>()
{
	return UCircularThrobber::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCircularThrobber);
UCircularThrobber::~UCircularThrobber() {}
// End Class UCircularThrobber

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCircularThrobber, UCircularThrobber::StaticClass, TEXT("UCircularThrobber"), &Z_Registration_Info_UClass_UCircularThrobber, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCircularThrobber), 3080789578U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h_2563419334(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
