// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IOptimusOutputBufferWriter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPTIMUSCORE_IOptimusOutputBufferWriter_generated_h
#error "IOptimusOutputBufferWriter.generated.h already included, missing '#pragma once' in IOptimusOutputBufferWriter.h"
#endif
#define OPTIMUSCORE_IOptimusOutputBufferWriter_generated_h

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusOutputBufferWriter_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusOutputBufferWriter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOptimusOutputBufferWriter(UOptimusOutputBufferWriter&&); \
	UOptimusOutputBufferWriter(const UOptimusOutputBufferWriter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusOutputBufferWriter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusOutputBufferWriter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusOutputBufferWriter) \
	NO_API virtual ~UOptimusOutputBufferWriter();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusOutputBufferWriter_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOptimusOutputBufferWriter(); \
	friend struct Z_Construct_UClass_UOptimusOutputBufferWriter_Statics; \
public: \
	DECLARE_CLASS(UOptimusOutputBufferWriter, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OptimusCore"), NO_API) \
	DECLARE_SERIALIZER(UOptimusOutputBufferWriter)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusOutputBufferWriter_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusOutputBufferWriter_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusOutputBufferWriter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusOutputBufferWriter_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOptimusOutputBufferWriter() {} \
public: \
	typedef UOptimusOutputBufferWriter UClassType; \
	typedef IOptimusOutputBufferWriter ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusOutputBufferWriter_h_12_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusOutputBufferWriter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusOutputBufferWriter_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPTIMUSCORE_API UClass* StaticClass<class UOptimusOutputBufferWriter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusOutputBufferWriter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
