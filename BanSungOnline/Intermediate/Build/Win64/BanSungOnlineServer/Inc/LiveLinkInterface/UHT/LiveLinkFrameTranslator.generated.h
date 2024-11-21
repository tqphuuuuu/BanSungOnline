// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkFrameTranslator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVELINKINTERFACE_LiveLinkFrameTranslator_generated_h
#error "LiveLinkFrameTranslator.generated.h already included, missing '#pragma once' in LiveLinkFrameTranslator.h"
#endif
#define LIVELINKINTERFACE_LiveLinkFrameTranslator_generated_h

#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkFrameTranslator_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkFrameTranslator(); \
	friend struct Z_Construct_UClass_ULiveLinkFrameTranslator_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkFrameTranslator, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LiveLinkInterface"), LIVELINKINTERFACE_API) \
	DECLARE_SERIALIZER(ULiveLinkFrameTranslator)


#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkFrameTranslator_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIVELINKINTERFACE_API ULiveLinkFrameTranslator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULiveLinkFrameTranslator(ULiveLinkFrameTranslator&&); \
	ULiveLinkFrameTranslator(const ULiveLinkFrameTranslator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINKINTERFACE_API, ULiveLinkFrameTranslator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkFrameTranslator); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkFrameTranslator) \
	LIVELINKINTERFACE_API virtual ~ULiveLinkFrameTranslator();


#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkFrameTranslator_h_39_PROLOG
#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkFrameTranslator_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkFrameTranslator_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkFrameTranslator_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINKINTERFACE_API UClass* StaticClass<class ULiveLinkFrameTranslator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkFrameTranslator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
