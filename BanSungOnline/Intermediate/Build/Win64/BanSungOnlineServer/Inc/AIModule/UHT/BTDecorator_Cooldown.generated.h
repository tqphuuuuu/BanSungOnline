// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Decorators/BTDecorator_Cooldown.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BTDecorator_Cooldown_generated_h
#error "BTDecorator_Cooldown.generated.h already included, missing '#pragma once' in BTDecorator_Cooldown.h"
#endif
#define AIMODULE_BTDecorator_Cooldown_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Cooldown_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUBTDecorator_Cooldown(); \
	friend struct Z_Construct_UClass_UBTDecorator_Cooldown_Statics; \
public: \
	DECLARE_CLASS(UBTDecorator_Cooldown, UBTDecorator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UBTDecorator_Cooldown)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Cooldown_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTDecorator_Cooldown(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTDecorator_Cooldown) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTDecorator_Cooldown); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTDecorator_Cooldown); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBTDecorator_Cooldown(UBTDecorator_Cooldown&&); \
	UBTDecorator_Cooldown(const UBTDecorator_Cooldown&); \
public: \
	AIMODULE_API virtual ~UBTDecorator_Cooldown();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Cooldown_h_21_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Cooldown_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Cooldown_h_24_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Cooldown_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTDecorator_Cooldown>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Cooldown_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
