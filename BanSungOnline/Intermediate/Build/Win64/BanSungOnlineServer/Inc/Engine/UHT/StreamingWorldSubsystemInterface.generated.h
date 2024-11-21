// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Streaming/StreamingWorldSubsystemInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_StreamingWorldSubsystemInterface_generated_h
#error "StreamingWorldSubsystemInterface.generated.h already included, missing '#pragma once' in StreamingWorldSubsystemInterface.h"
#endif
#define ENGINE_StreamingWorldSubsystemInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Streaming_StreamingWorldSubsystemInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStreamingWorldSubsystemInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStreamingWorldSubsystemInterface(UStreamingWorldSubsystemInterface&&); \
	UStreamingWorldSubsystemInterface(const UStreamingWorldSubsystemInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStreamingWorldSubsystemInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreamingWorldSubsystemInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStreamingWorldSubsystemInterface) \
	NO_API virtual ~UStreamingWorldSubsystemInterface();


#define FID_Engine_Source_Runtime_Engine_Public_Streaming_StreamingWorldSubsystemInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUStreamingWorldSubsystemInterface(); \
	friend struct Z_Construct_UClass_UStreamingWorldSubsystemInterface_Statics; \
public: \
	DECLARE_CLASS(UStreamingWorldSubsystemInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStreamingWorldSubsystemInterface)


#define FID_Engine_Source_Runtime_Engine_Public_Streaming_StreamingWorldSubsystemInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_Streaming_StreamingWorldSubsystemInterface_h_12_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_Streaming_StreamingWorldSubsystemInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Streaming_StreamingWorldSubsystemInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IStreamingWorldSubsystemInterface() {} \
public: \
	typedef UStreamingWorldSubsystemInterface UClassType; \
	typedef IStreamingWorldSubsystemInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_Streaming_StreamingWorldSubsystemInterface_h_9_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Streaming_StreamingWorldSubsystemInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Streaming_StreamingWorldSubsystemInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UStreamingWorldSubsystemInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Streaming_StreamingWorldSubsystemInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
