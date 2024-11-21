// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IOptimusDeformerInstanceAccessor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPTIMUSCORE_IOptimusDeformerInstanceAccessor_generated_h
#error "IOptimusDeformerInstanceAccessor.generated.h already included, missing '#pragma once' in IOptimusDeformerInstanceAccessor.h"
#endif
#define OPTIMUSCORE_IOptimusDeformerInstanceAccessor_generated_h

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeformerInstanceAccessor_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusDeformerInstanceAccessor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOptimusDeformerInstanceAccessor(UOptimusDeformerInstanceAccessor&&); \
	UOptimusDeformerInstanceAccessor(const UOptimusDeformerInstanceAccessor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusDeformerInstanceAccessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusDeformerInstanceAccessor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusDeformerInstanceAccessor) \
	NO_API virtual ~UOptimusDeformerInstanceAccessor();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeformerInstanceAccessor_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOptimusDeformerInstanceAccessor(); \
	friend struct Z_Construct_UClass_UOptimusDeformerInstanceAccessor_Statics; \
public: \
	DECLARE_CLASS(UOptimusDeformerInstanceAccessor, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OptimusCore"), NO_API) \
	DECLARE_SERIALIZER(UOptimusDeformerInstanceAccessor)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeformerInstanceAccessor_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeformerInstanceAccessor_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeformerInstanceAccessor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeformerInstanceAccessor_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOptimusDeformerInstanceAccessor() {} \
public: \
	typedef UOptimusDeformerInstanceAccessor UClassType; \
	typedef IOptimusDeformerInstanceAccessor ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeformerInstanceAccessor_h_12_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeformerInstanceAccessor_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeformerInstanceAccessor_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPTIMUSCORE_API UClass* StaticClass<class UOptimusDeformerInstanceAccessor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeformerInstanceAccessor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
