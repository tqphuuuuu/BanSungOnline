// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IOptimusExecutionDomainProvider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPTIMUSCORE_IOptimusExecutionDomainProvider_generated_h
#error "IOptimusExecutionDomainProvider.generated.h already included, missing '#pragma once' in IOptimusExecutionDomainProvider.h"
#endif
#define OPTIMUSCORE_IOptimusExecutionDomainProvider_generated_h

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusExecutionDomainProvider_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusExecutionDomainProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOptimusExecutionDomainProvider(UOptimusExecutionDomainProvider&&); \
	UOptimusExecutionDomainProvider(const UOptimusExecutionDomainProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusExecutionDomainProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusExecutionDomainProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusExecutionDomainProvider) \
	NO_API virtual ~UOptimusExecutionDomainProvider();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusExecutionDomainProvider_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOptimusExecutionDomainProvider(); \
	friend struct Z_Construct_UClass_UOptimusExecutionDomainProvider_Statics; \
public: \
	DECLARE_CLASS(UOptimusExecutionDomainProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OptimusCore"), NO_API) \
	DECLARE_SERIALIZER(UOptimusExecutionDomainProvider)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusExecutionDomainProvider_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusExecutionDomainProvider_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusExecutionDomainProvider_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusExecutionDomainProvider_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOptimusExecutionDomainProvider() {} \
public: \
	typedef UOptimusExecutionDomainProvider UClassType; \
	typedef IOptimusExecutionDomainProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusExecutionDomainProvider_h_11_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusExecutionDomainProvider_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusExecutionDomainProvider_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPTIMUSCORE_API UClass* StaticClass<class UOptimusExecutionDomainProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusExecutionDomainProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
