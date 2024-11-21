// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IOptimusAlternativeSelectedObjectProvider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPTIMUSCORE_IOptimusAlternativeSelectedObjectProvider_generated_h
#error "IOptimusAlternativeSelectedObjectProvider.generated.h already included, missing '#pragma once' in IOptimusAlternativeSelectedObjectProvider.h"
#endif
#define OPTIMUSCORE_IOptimusAlternativeSelectedObjectProvider_generated_h

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusAlternativeSelectedObjectProvider_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusAlternativeSelectedObjectProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOptimusAlternativeSelectedObjectProvider(UOptimusAlternativeSelectedObjectProvider&&); \
	UOptimusAlternativeSelectedObjectProvider(const UOptimusAlternativeSelectedObjectProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusAlternativeSelectedObjectProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusAlternativeSelectedObjectProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusAlternativeSelectedObjectProvider) \
	NO_API virtual ~UOptimusAlternativeSelectedObjectProvider();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusAlternativeSelectedObjectProvider_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOptimusAlternativeSelectedObjectProvider(); \
	friend struct Z_Construct_UClass_UOptimusAlternativeSelectedObjectProvider_Statics; \
public: \
	DECLARE_CLASS(UOptimusAlternativeSelectedObjectProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OptimusCore"), NO_API) \
	DECLARE_SERIALIZER(UOptimusAlternativeSelectedObjectProvider)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusAlternativeSelectedObjectProvider_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusAlternativeSelectedObjectProvider_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusAlternativeSelectedObjectProvider_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusAlternativeSelectedObjectProvider_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOptimusAlternativeSelectedObjectProvider() {} \
public: \
	typedef UOptimusAlternativeSelectedObjectProvider UClassType; \
	typedef IOptimusAlternativeSelectedObjectProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusAlternativeSelectedObjectProvider_h_10_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusAlternativeSelectedObjectProvider_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusAlternativeSelectedObjectProvider_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPTIMUSCORE_API UClass* StaticClass<class UOptimusAlternativeSelectedObjectProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusAlternativeSelectedObjectProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
