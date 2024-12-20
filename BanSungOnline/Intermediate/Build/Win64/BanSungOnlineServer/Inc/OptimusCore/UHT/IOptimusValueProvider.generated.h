// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IOptimusValueProvider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPTIMUSCORE_IOptimusValueProvider_generated_h
#error "IOptimusValueProvider.generated.h already included, missing '#pragma once' in IOptimusValueProvider.h"
#endif
#define OPTIMUSCORE_IOptimusValueProvider_generated_h

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusValueProvider_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusValueProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOptimusValueProvider(UOptimusValueProvider&&); \
	UOptimusValueProvider(const UOptimusValueProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusValueProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusValueProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusValueProvider) \
	NO_API virtual ~UOptimusValueProvider();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusValueProvider_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOptimusValueProvider(); \
	friend struct Z_Construct_UClass_UOptimusValueProvider_Statics; \
public: \
	DECLARE_CLASS(UOptimusValueProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OptimusCore"), NO_API) \
	DECLARE_SERIALIZER(UOptimusValueProvider)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusValueProvider_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusValueProvider_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusValueProvider_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusValueProvider_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOptimusValueProvider() {} \
public: \
	typedef UOptimusValueProvider UClassType; \
	typedef IOptimusValueProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusValueProvider_h_13_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusValueProvider_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusValueProvider_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPTIMUSCORE_API UClass* StaticClass<class UOptimusValueProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusValueProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
