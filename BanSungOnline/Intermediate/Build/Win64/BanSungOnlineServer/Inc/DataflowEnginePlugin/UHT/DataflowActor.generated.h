// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATAFLOWENGINEPLUGIN_DataflowActor_generated_h
#error "DataflowActor.generated.h already included, missing '#pragma once' in DataflowActor.h"
#endif
#define DATAFLOWENGINEPLUGIN_DataflowActor_generated_h

#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowActor_h_17_INCLASS \
private: \
	static void StaticRegisterNativesADataflowActor(); \
	friend struct Z_Construct_UClass_ADataflowActor_Statics; \
public: \
	DECLARE_CLASS(ADataflowActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DataflowEnginePlugin"), NO_API) \
	DECLARE_SERIALIZER(ADataflowActor)


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowActor_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADataflowActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADataflowActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADataflowActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADataflowActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADataflowActor(ADataflowActor&&); \
	ADataflowActor(const ADataflowActor&); \
public: \
	NO_API virtual ~ADataflowActor();


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowActor_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowActor_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowActor_h_17_INCLASS \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowActor_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAFLOWENGINEPLUGIN_API UClass* StaticClass<class ADataflowActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS