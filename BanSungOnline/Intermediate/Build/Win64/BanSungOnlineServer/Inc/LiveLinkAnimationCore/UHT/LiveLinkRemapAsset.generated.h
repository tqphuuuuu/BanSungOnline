// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkRemapAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
#ifdef LIVELINKANIMATIONCORE_LiveLinkRemapAsset_generated_h
#error "LiveLinkRemapAsset.generated.h already included, missing '#pragma once' in LiveLinkRemapAsset.h"
#endif
#define LIVELINKANIMATIONCORE_LiveLinkRemapAsset_generated_h

#define FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkRemapAsset_h_28_RPC_WRAPPERS \
	LIVELINKANIMATIONCORE_API virtual void RemapCurveElements_Implementation(TMap<FName,float>& CurveItems) const; \
	LIVELINKANIMATIONCORE_API virtual FName GetRemappedCurveName_Implementation(FName CurveName) const; \
	LIVELINKANIMATIONCORE_API virtual FName GetRemappedBoneName_Implementation(FName BoneName) const; \
	DECLARE_FUNCTION(execRemapCurveElements); \
	DECLARE_FUNCTION(execGetRemappedCurveName); \
	DECLARE_FUNCTION(execGetRemappedBoneName);


#define FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkRemapAsset_h_28_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkRemapAsset_h_28_INCLASS \
private: \
	static void StaticRegisterNativesULiveLinkRemapAsset(); \
	friend struct Z_Construct_UClass_ULiveLinkRemapAsset_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkRemapAsset, ULiveLinkRetargetAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkAnimationCore"), LIVELINKANIMATIONCORE_API) \
	DECLARE_SERIALIZER(ULiveLinkRemapAsset)


#define FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkRemapAsset_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIVELINKANIMATIONCORE_API ULiveLinkRemapAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkRemapAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINKANIMATIONCORE_API, ULiveLinkRemapAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkRemapAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULiveLinkRemapAsset(ULiveLinkRemapAsset&&); \
	ULiveLinkRemapAsset(const ULiveLinkRemapAsset&); \
public:


#define FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkRemapAsset_h_25_PROLOG
#define FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkRemapAsset_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkRemapAsset_h_28_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkRemapAsset_h_28_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkRemapAsset_h_28_INCLASS \
	FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkRemapAsset_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINKANIMATIONCORE_API UClass* StaticClass<class ULiveLinkRemapAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkRemapAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
