// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/DefaultPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DefaultPawn_generated_h
#error "DefaultPawn.generated.h already included, missing '#pragma once' in DefaultPawn.h"
#endif
#define ENGINE_DefaultPawn_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPawn_h_27_RPC_WRAPPERS \
	DECLARE_FUNCTION(execLookUpAtRate); \
	DECLARE_FUNCTION(execTurnAtRate); \
	DECLARE_FUNCTION(execMoveUp_World); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPawn_h_27_INCLASS \
private: \
	static void StaticRegisterNativesADefaultPawn(); \
	friend struct Z_Construct_UClass_ADefaultPawn_Statics; \
public: \
	DECLARE_CLASS(ADefaultPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ADefaultPawn)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPawn_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ADefaultPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADefaultPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ADefaultPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefaultPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADefaultPawn(ADefaultPawn&&); \
	ADefaultPawn(const ADefaultPawn&); \
public: \
	ENGINE_API virtual ~ADefaultPawn();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPawn_h_24_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPawn_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPawn_h_27_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPawn_h_27_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPawn_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ADefaultPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
