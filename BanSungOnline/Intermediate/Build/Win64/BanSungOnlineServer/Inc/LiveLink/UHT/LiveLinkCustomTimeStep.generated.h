// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkCustomTimeStep.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVELINK_LiveLinkCustomTimeStep_generated_h
#error "LiveLinkCustomTimeStep.generated.h already included, missing '#pragma once' in LiveLinkCustomTimeStep.h"
#endif
#define LIVELINK_LiveLinkCustomTimeStep_generated_h

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkCustomTimeStep_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkCustomTimeStep(); \
	friend struct Z_Construct_UClass_ULiveLinkCustomTimeStep_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkCustomTimeStep, UGenlockedCustomTimeStep, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLink"), LIVELINK_API) \
	DECLARE_SERIALIZER(ULiveLinkCustomTimeStep)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkCustomTimeStep_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIVELINK_API ULiveLinkCustomTimeStep(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULiveLinkCustomTimeStep(ULiveLinkCustomTimeStep&&); \
	ULiveLinkCustomTimeStep(const ULiveLinkCustomTimeStep&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINK_API, ULiveLinkCustomTimeStep); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkCustomTimeStep); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkCustomTimeStep) \
	LIVELINK_API virtual ~ULiveLinkCustomTimeStep();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkCustomTimeStep_h_35_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkCustomTimeStep_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkCustomTimeStep_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkCustomTimeStep_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINK_API UClass* StaticClass<class ULiveLinkCustomTimeStep>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkCustomTimeStep_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
