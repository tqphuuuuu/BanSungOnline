// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConstraintsActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONSTRAINTS_ConstraintsActor_generated_h
#error "ConstraintsActor.generated.h already included, missing '#pragma once' in ConstraintsActor.h"
#endif
#define CONSTRAINTS_ConstraintsActor_generated_h

#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAConstraintsActor(); \
	friend struct Z_Construct_UClass_AConstraintsActor_Statics; \
public: \
	DECLARE_CLASS(AConstraintsActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Constraints"), CONSTRAINTS_API) \
	DECLARE_SERIALIZER(AConstraintsActor)


#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AConstraintsActor(AConstraintsActor&&); \
	AConstraintsActor(const AConstraintsActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONSTRAINTS_API, AConstraintsActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AConstraintsActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AConstraintsActor)


#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsActor_h_15_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsActor_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONSTRAINTS_API UClass* StaticClass<class AConstraintsActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
