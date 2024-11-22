// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GenlockedCustomTimeStep.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TIMEMANAGEMENT_GenlockedCustomTimeStep_generated_h
#error "GenlockedCustomTimeStep.generated.h already included, missing '#pragma once' in GenlockedCustomTimeStep.h"
#endif
#define TIMEMANAGEMENT_GenlockedCustomTimeStep_generated_h

#define FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedCustomTimeStep_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenlockedCustomTimeStep(); \
	friend struct Z_Construct_UClass_UGenlockedCustomTimeStep_Statics; \
public: \
	DECLARE_CLASS(UGenlockedCustomTimeStep, UFixedFrameRateCustomTimeStep, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TimeManagement"), TIMEMANAGEMENT_API) \
	DECLARE_SERIALIZER(UGenlockedCustomTimeStep)


#define FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedCustomTimeStep_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TIMEMANAGEMENT_API UGenlockedCustomTimeStep(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGenlockedCustomTimeStep(UGenlockedCustomTimeStep&&); \
	UGenlockedCustomTimeStep(const UGenlockedCustomTimeStep&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TIMEMANAGEMENT_API, UGenlockedCustomTimeStep); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenlockedCustomTimeStep); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenlockedCustomTimeStep) \
	TIMEMANAGEMENT_API virtual ~UGenlockedCustomTimeStep();


#define FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedCustomTimeStep_h_20_PROLOG
#define FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedCustomTimeStep_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedCustomTimeStep_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedCustomTimeStep_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TIMEMANAGEMENT_API UClass* StaticClass<class UGenlockedCustomTimeStep>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedCustomTimeStep_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS