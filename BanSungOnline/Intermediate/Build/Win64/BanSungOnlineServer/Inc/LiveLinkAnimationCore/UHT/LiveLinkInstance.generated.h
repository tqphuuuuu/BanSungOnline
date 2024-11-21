// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULiveLinkRetargetAsset;
struct FLiveLinkSubjectName;
#ifdef LIVELINKANIMATIONCORE_LiveLinkInstance_generated_h
#error "LiveLinkInstance.generated.h already included, missing '#pragma once' in LiveLinkInstance.h"
#endif
#define LIVELINKANIMATIONCORE_LiveLinkInstance_generated_h

#define FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics; \
	LIVELINKANIMATIONCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimInstanceProxy Super;


template<> LIVELINKANIMATIONCORE_API UScriptStruct* StaticStruct<struct FLiveLinkInstanceProxy>();

#define FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEnableLiveLinkEvaluation); \
	DECLARE_FUNCTION(execSetRetargetAsset); \
	DECLARE_FUNCTION(execSetSubject);


#define FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkInstance(); \
	friend struct Z_Construct_UClass_ULiveLinkInstance_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LiveLinkAnimationCore"), LIVELINKANIMATIONCORE_API) \
	DECLARE_SERIALIZER(ULiveLinkInstance)


#define FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIVELINKANIMATIONCORE_API ULiveLinkInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULiveLinkInstance(ULiveLinkInstance&&); \
	ULiveLinkInstance(const ULiveLinkInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINKANIMATIONCORE_API, ULiveLinkInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkInstance) \
	LIVELINKANIMATIONCORE_API virtual ~ULiveLinkInstance();


#define FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_40_PROLOG
#define FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINKANIMATIONCORE_API UClass* StaticClass<class ULiveLinkInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
