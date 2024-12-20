// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/DamageType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DamageType_generated_h
#error "DamageType.generated.h already included, missing '#pragma once' in DamageType.h"
#endif
#define ENGINE_DamageType_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DamageType_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUDamageType(); \
	friend struct Z_Construct_UClass_UDamageType_Statics; \
public: \
	DECLARE_CLASS(UDamageType, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UDamageType)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DamageType_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDamageType(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDamageType) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDamageType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageType); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDamageType(UDamageType&&); \
	UDamageType(const UDamageType&); \
public: \
	ENGINE_API virtual ~UDamageType();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DamageType_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DamageType_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DamageType_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DamageType_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDamageType>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DamageType_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
