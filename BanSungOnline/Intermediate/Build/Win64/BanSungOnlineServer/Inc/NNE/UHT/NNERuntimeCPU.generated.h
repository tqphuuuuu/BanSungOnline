// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NNERuntimeCPU.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NNE_NNERuntimeCPU_generated_h
#error "NNERuntimeCPU.generated.h already included, missing '#pragma once' in NNERuntimeCPU.h"
#endif
#define NNE_NNERuntimeCPU_generated_h

#define FID_Engine_Source_Runtime_NNE_Public_NNERuntimeCPU_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNNERuntimeCPU(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNNERuntimeCPU(UNNERuntimeCPU&&); \
	UNNERuntimeCPU(const UNNERuntimeCPU&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNNERuntimeCPU); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNNERuntimeCPU); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNNERuntimeCPU) \
	NO_API virtual ~UNNERuntimeCPU();


#define FID_Engine_Source_Runtime_NNE_Public_NNERuntimeCPU_h_53_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNNERuntimeCPU(); \
	friend struct Z_Construct_UClass_UNNERuntimeCPU_Statics; \
public: \
	DECLARE_CLASS(UNNERuntimeCPU, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NNE"), NO_API) \
	DECLARE_SERIALIZER(UNNERuntimeCPU)


#define FID_Engine_Source_Runtime_NNE_Public_NNERuntimeCPU_h_53_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_NNE_Public_NNERuntimeCPU_h_53_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_NNE_Public_NNERuntimeCPU_h_53_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_NNE_Public_NNERuntimeCPU_h_53_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INNERuntimeCPU() {} \
public: \
	typedef UNNERuntimeCPU UClassType; \
	typedef INNERuntimeCPU ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_NNE_Public_NNERuntimeCPU_h_50_PROLOG
#define FID_Engine_Source_Runtime_NNE_Public_NNERuntimeCPU_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NNE_Public_NNERuntimeCPU_h_53_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NNE_API UClass* StaticClass<class UNNERuntimeCPU>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NNE_Public_NNERuntimeCPU_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
