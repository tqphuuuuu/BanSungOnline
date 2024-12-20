// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassObserverProcessor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSENTITY_MassObserverProcessor_generated_h
#error "MassObserverProcessor.generated.h already included, missing '#pragma once' in MassObserverProcessor.h"
#endif
#define MASSENTITY_MassObserverProcessor_generated_h

#define FID_Engine_Source_Runtime_MassEntity_Public_MassObserverProcessor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassObserverProcessor(); \
	friend struct Z_Construct_UClass_UMassObserverProcessor_Statics; \
public: \
	DECLARE_CLASS(UMassObserverProcessor, UMassProcessor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassEntity"), NO_API) \
	DECLARE_SERIALIZER(UMassObserverProcessor)


#define FID_Engine_Source_Runtime_MassEntity_Public_MassObserverProcessor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMassObserverProcessor(UMassObserverProcessor&&); \
	UMassObserverProcessor(const UMassObserverProcessor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassObserverProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassObserverProcessor); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMassObserverProcessor) \
	NO_API virtual ~UMassObserverProcessor();


#define FID_Engine_Source_Runtime_MassEntity_Public_MassObserverProcessor_h_9_PROLOG
#define FID_Engine_Source_Runtime_MassEntity_Public_MassObserverProcessor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MassEntity_Public_MassObserverProcessor_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MassEntity_Public_MassObserverProcessor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASSENTITY_API UClass* StaticClass<class UMassObserverProcessor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MassEntity_Public_MassObserverProcessor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
