// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NNERuntimeNPU.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NNE_NNERuntimeNPU_generated_h
#error "NNERuntimeNPU.generated.h already included, missing '#pragma once' in NNERuntimeNPU.h"
#endif
#define NNE_NNERuntimeNPU_generated_h

#define FID_Engine_Source_Runtime_NNE_Public_NNERuntimeNPU_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNNERuntimeNPU(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNNERuntimeNPU(UNNERuntimeNPU&&); \
	UNNERuntimeNPU(const UNNERuntimeNPU&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNNERuntimeNPU); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNNERuntimeNPU); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNNERuntimeNPU) \
	NO_API virtual ~UNNERuntimeNPU();


#define FID_Engine_Source_Runtime_NNE_Public_NNERuntimeNPU_h_53_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNNERuntimeNPU(); \
	friend struct Z_Construct_UClass_UNNERuntimeNPU_Statics; \
public: \
	DECLARE_CLASS(UNNERuntimeNPU, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NNE"), NO_API) \
	DECLARE_SERIALIZER(UNNERuntimeNPU)


#define FID_Engine_Source_Runtime_NNE_Public_NNERuntimeNPU_h_53_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_NNE_Public_NNERuntimeNPU_h_53_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_NNE_Public_NNERuntimeNPU_h_53_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_NNE_Public_NNERuntimeNPU_h_53_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INNERuntimeNPU() {} \
public: \
	typedef UNNERuntimeNPU UClassType; \
	typedef INNERuntimeNPU ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_NNE_Public_NNERuntimeNPU_h_50_PROLOG
#define FID_Engine_Source_Runtime_NNE_Public_NNERuntimeNPU_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NNE_Public_NNERuntimeNPU_h_53_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NNE_API UClass* StaticClass<class UNNERuntimeNPU>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NNE_Public_NNERuntimeNPU_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
