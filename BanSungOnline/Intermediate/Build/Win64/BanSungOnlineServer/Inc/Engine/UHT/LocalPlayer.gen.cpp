// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalPlayer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer();
ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPlayer();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAspectRatioAxisConstraint();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ULocalPlayer
void ULocalPlayer::StaticRegisterNativesULocalPlayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULocalPlayer);
UClass* Z_Construct_UClass_ULocalPlayer_NoRegister()
{
	return ULocalPlayer::StaticClass();
}
struct Z_Construct_UClass_ULocalPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""Each player that is active on the current client/listen server has a LocalPlayer.\n *\x09It stays active across maps, and there may be several spawned in the case of splitscreen/coop.\n *\x09There will be 0 spawned on dedicated servers.\n */" },
		{ "IncludePath", "Engine/LocalPlayer.h" },
		{ "ModuleRelativePath", "Classes/Engine/LocalPlayer.h" },
		{ "ToolTip", "Each player that is active on the current client/listen server has a LocalPlayer.\nIt stays active across maps, and there may be several spawned in the case of splitscreen/coop.\nThere will be 0 spawned on dedicated servers." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewportClient_MetaData[] = {
		{ "Comment", "/** The primary viewport containing this player's view. */" },
		{ "ModuleRelativePath", "Classes/Engine/LocalPlayer.h" },
		{ "ToolTip", "The primary viewport containing this player's view." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AspectRatioAxisConstraint_MetaData[] = {
		{ "Comment", "/** How to constrain perspective viewport FOV */" },
		{ "ModuleRelativePath", "Classes/Engine/LocalPlayer.h" },
		{ "ToolTip", "How to constrain perspective viewport FOV" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingLevelPlayerControllerClass_MetaData[] = {
		{ "Comment", "/** The class of PlayerController to spawn for players logging in. */" },
		{ "ModuleRelativePath", "Classes/Engine/LocalPlayer.h" },
		{ "ToolTip", "The class of PlayerController to spawn for players logging in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSentSplitJoin_MetaData[] = {
		{ "Category", "LocalPlayer" },
		{ "Comment", "/** set when we've sent a split join request */" },
		{ "ModuleRelativePath", "Classes/Engine/LocalPlayer.h" },
		{ "ToolTip", "set when we've sent a split join request" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerId_MetaData[] = {
		{ "Comment", "/** The controller ID which this player accepts input from. */" },
		{ "ModuleRelativePath", "Classes/Engine/LocalPlayer.h" },
		{ "ToolTip", "The controller ID which this player accepts input from." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewportClient;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AspectRatioAxisConstraint;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PendingLevelPlayerControllerClass;
	static void NewProp_bSentSplitJoin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSentSplitJoin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULocalPlayer_Statics::NewProp_ViewportClient = { "ViewportClient", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalPlayer, ViewportClient), Z_Construct_UClass_UGameViewportClient_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewportClient_MetaData), NewProp_ViewportClient_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULocalPlayer_Statics::NewProp_AspectRatioAxisConstraint = { "AspectRatioAxisConstraint", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalPlayer, AspectRatioAxisConstraint), Z_Construct_UEnum_Engine_EAspectRatioAxisConstraint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AspectRatioAxisConstraint_MetaData), NewProp_AspectRatioAxisConstraint_MetaData) }; // 707974947
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULocalPlayer_Statics::NewProp_PendingLevelPlayerControllerClass = { "PendingLevelPlayerControllerClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalPlayer, PendingLevelPlayerControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingLevelPlayerControllerClass_MetaData), NewProp_PendingLevelPlayerControllerClass_MetaData) };
void Z_Construct_UClass_ULocalPlayer_Statics::NewProp_bSentSplitJoin_SetBit(void* Obj)
{
	((ULocalPlayer*)Obj)->bSentSplitJoin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULocalPlayer_Statics::NewProp_bSentSplitJoin = { "bSentSplitJoin", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ULocalPlayer), &Z_Construct_UClass_ULocalPlayer_Statics::NewProp_bSentSplitJoin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSentSplitJoin_MetaData), NewProp_bSentSplitJoin_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULocalPlayer_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalPlayer, ControllerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerId_MetaData), NewProp_ControllerId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULocalPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalPlayer_Statics::NewProp_ViewportClient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalPlayer_Statics::NewProp_AspectRatioAxisConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalPlayer_Statics::NewProp_PendingLevelPlayerControllerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalPlayer_Statics::NewProp_bSentSplitJoin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalPlayer_Statics::NewProp_ControllerId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULocalPlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULocalPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPlayer,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULocalPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULocalPlayer_Statics::ClassParams = {
	&ULocalPlayer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULocalPlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULocalPlayer_Statics::PropPointers),
	0,
	0x000800ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULocalPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_ULocalPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULocalPlayer()
{
	if (!Z_Registration_Info_UClass_ULocalPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocalPlayer.OuterSingleton, Z_Construct_UClass_ULocalPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULocalPlayer.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ULocalPlayer>()
{
	return ULocalPlayer::StaticClass();
}
ULocalPlayer::~ULocalPlayer() {}
// End Class ULocalPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULocalPlayer, ULocalPlayer::StaticClass, TEXT("ULocalPlayer"), &Z_Registration_Info_UClass_ULocalPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocalPlayer), 1318181935U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_2384017991(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS