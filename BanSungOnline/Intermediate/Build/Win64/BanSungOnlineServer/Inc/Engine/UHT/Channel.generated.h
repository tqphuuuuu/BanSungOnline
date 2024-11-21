// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/Channel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Channel_generated_h
#error "Channel.generated.h already included, missing '#pragma once' in Channel.h"
#endif
#define ENGINE_Channel_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_64_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UChannel, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChannel(); \
	friend struct Z_Construct_UClass_UChannel_Statics; \
public: \
	DECLARE_CLASS(UChannel, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UChannel) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_64_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UChannel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChannel(UChannel&&); \
	UChannel(const UChannel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChannel); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChannel) \
	ENGINE_API virtual ~UChannel();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_61_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_64_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UChannel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
