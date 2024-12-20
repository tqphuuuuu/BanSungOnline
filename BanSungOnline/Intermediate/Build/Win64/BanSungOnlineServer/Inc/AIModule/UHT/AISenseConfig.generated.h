// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AISenseConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AISenseConfig_generated_h
#error "AISenseConfig.generated.h already included, missing '#pragma once' in AISenseConfig.h"
#endif
#define AIMODULE_AISenseConfig_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAISenseConfig(); \
	friend struct Z_Construct_UClass_UAISenseConfig_Statics; \
public: \
	DECLARE_CLASS(UAISenseConfig, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UAISenseConfig) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAISenseConfig(UAISenseConfig&&); \
	UAISenseConfig(const UAISenseConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAISenseConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISenseConfig); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISenseConfig) \
	AIMODULE_API virtual ~UAISenseConfig();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h_17_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAISenseConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
