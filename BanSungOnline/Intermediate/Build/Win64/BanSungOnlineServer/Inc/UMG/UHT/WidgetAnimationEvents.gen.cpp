// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationEvents.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetAnimationEvents() {}

// Begin Cross Module References
UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_WidgetAnimationDynamicEvent__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_WidgetAnimationDynamicEvents__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Delegate FOnWidgetAnimationPlaybackStatusChanged
struct Z_Construct_UDelegateFunction_UMG_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationEvents.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnWidgetAnimationPlaybackStatusChanged__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMG_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UMG_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnWidgetAnimationPlaybackStatusChanged_DelegateWrapper(const FMulticastScriptDelegate& OnWidgetAnimationPlaybackStatusChanged)
{
	OnWidgetAnimationPlaybackStatusChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnWidgetAnimationPlaybackStatusChanged

// Begin Delegate FWidgetAnimationDynamicEvent
struct Z_Construct_UDelegateFunction_UMG_WidgetAnimationDynamicEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationEvents.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_WidgetAnimationDynamicEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "WidgetAnimationDynamicEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_WidgetAnimationDynamicEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMG_WidgetAnimationDynamicEvent__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UMG_WidgetAnimationDynamicEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_WidgetAnimationDynamicEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWidgetAnimationDynamicEvent_DelegateWrapper(const FScriptDelegate& WidgetAnimationDynamicEvent)
{
	WidgetAnimationDynamicEvent.ProcessDelegate<UObject>(NULL);
}
// End Delegate FWidgetAnimationDynamicEvent

// Begin Delegate FWidgetAnimationDynamicEvents
struct Z_Construct_UDelegateFunction_UMG_WidgetAnimationDynamicEvents__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationEvents.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_WidgetAnimationDynamicEvents__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "WidgetAnimationDynamicEvents__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_WidgetAnimationDynamicEvents__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMG_WidgetAnimationDynamicEvents__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UMG_WidgetAnimationDynamicEvents__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_WidgetAnimationDynamicEvents__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWidgetAnimationDynamicEvents_DelegateWrapper(const FMulticastScriptDelegate& WidgetAnimationDynamicEvents)
{
	WidgetAnimationDynamicEvents.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FWidgetAnimationDynamicEvents
PRAGMA_ENABLE_DEPRECATION_WARNINGS
