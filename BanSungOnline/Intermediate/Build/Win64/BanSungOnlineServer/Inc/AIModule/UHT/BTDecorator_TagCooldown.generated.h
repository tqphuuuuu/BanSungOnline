// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Decorators/BTDecorator_TagCooldown.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BTDecorator_TagCooldown_generated_h
#error "BTDecorator_TagCooldown.generated.h already included, missing '#pragma once' in BTDecorator_TagCooldown.h"
#endif
#define AIMODULE_BTDecorator_TagCooldown_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_TagCooldown_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUBTDecorator_TagCooldown(); \
	friend struct Z_Construct_UClass_UBTDecorator_TagCooldown_Statics; \
public: \
	DECLARE_CLASS(UBTDecorator_TagCooldown, UBTDecorator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UBTDecorator_TagCooldown)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_TagCooldown_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTDecorator_TagCooldown(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTDecorator_TagCooldown) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTDecorator_TagCooldown); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTDecorator_TagCooldown); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBTDecorator_TagCooldown(UBTDecorator_TagCooldown&&); \
	UBTDecorator_TagCooldown(const UBTDecorator_TagCooldown&); \
public: \
	AIMODULE_API virtual ~UBTDecorator_TagCooldown();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_TagCooldown_h_21_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_TagCooldown_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_TagCooldown_h_24_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_TagCooldown_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTDecorator_TagCooldown>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_TagCooldown_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
