// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTree.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STATETREEMODULE_StateTree_generated_h
#error "StateTree.generated.h already included, missing '#pragma once' in StateTree.h"
#endif
#define STATETREEMODULE_StateTree_generated_h

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTree_h_101_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UStateTree, NO_API)


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTree_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateTree(); \
	friend struct Z_Construct_UClass_UStateTree_Statics; \
public: \
	DECLARE_CLASS(UStateTree, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StateTreeModule"), NO_API) \
	DECLARE_SERIALIZER(UStateTree) \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTree_h_101_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTree_h_101_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStateTree(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStateTree(UStateTree&&); \
	UStateTree(const UStateTree&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateTree); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTree); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateTree) \
	NO_API virtual ~UStateTree();


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTree_h_98_PROLOG
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTree_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTree_h_101_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTree_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STATETREEMODULE_API UClass* StaticClass<class UStateTree>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTree_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
