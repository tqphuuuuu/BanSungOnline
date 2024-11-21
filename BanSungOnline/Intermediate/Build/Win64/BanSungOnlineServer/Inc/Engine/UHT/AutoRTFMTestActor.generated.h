// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/AutoRTFM/AutoRTFMTestActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AutoRTFMTestActor_generated_h
#error "AutoRTFMTestActor.generated.h already included, missing '#pragma once' in AutoRTFMTestActor.h"
#endif
#define ENGINE_AutoRTFMTestActor_generated_h

#define FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestActor_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAutoRTFMTestActor(); \
	friend struct Z_Construct_UClass_AAutoRTFMTestActor_Statics; \
public: \
	DECLARE_CLASS(AAutoRTFMTestActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AAutoRTFMTestActor)


#define FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestActor_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAutoRTFMTestActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAutoRTFMTestActor(AAutoRTFMTestActor&&); \
	AAutoRTFMTestActor(const AAutoRTFMTestActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAutoRTFMTestActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAutoRTFMTestActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAutoRTFMTestActor) \
	NO_API virtual ~AAutoRTFMTestActor();


#define FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestActor_h_8_PROLOG
#define FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestActor_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestActor_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AAutoRTFMTestActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
