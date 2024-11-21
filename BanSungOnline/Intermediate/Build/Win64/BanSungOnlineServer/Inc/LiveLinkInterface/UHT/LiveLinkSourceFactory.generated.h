// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkSourceFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVELINKINTERFACE_LiveLinkSourceFactory_generated_h
#error "LiveLinkSourceFactory.generated.h already included, missing '#pragma once' in LiveLinkSourceFactory.h"
#endif
#define LIVELINKINTERFACE_LiveLinkSourceFactory_generated_h

#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceFactory_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkSourceFactory(); \
	friend struct Z_Construct_UClass_ULiveLinkSourceFactory_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkSourceFactory, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LiveLinkInterface"), LIVELINKINTERFACE_API) \
	DECLARE_SERIALIZER(ULiveLinkSourceFactory)


#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceFactory_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIVELINKINTERFACE_API ULiveLinkSourceFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULiveLinkSourceFactory(ULiveLinkSourceFactory&&); \
	ULiveLinkSourceFactory(const ULiveLinkSourceFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINKINTERFACE_API, ULiveLinkSourceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkSourceFactory); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkSourceFactory) \
	LIVELINKINTERFACE_API virtual ~ULiveLinkSourceFactory();


#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceFactory_h_25_PROLOG
#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceFactory_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceFactory_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceFactory_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINKINTERFACE_API UClass* StaticClass<class ULiveLinkSourceFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
