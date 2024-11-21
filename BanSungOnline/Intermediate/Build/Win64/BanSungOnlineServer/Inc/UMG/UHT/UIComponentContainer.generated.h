// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Extensions/UIComponentContainer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_UIComponentContainer_generated_h
#error "UIComponentContainer.generated.h already included, missing '#pragma once' in UIComponentContainer.h"
#endif
#define UMG_UIComponentContainer_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentContainer_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUIComponentTarget_Statics; \
	UMG_API static class UScriptStruct* StaticStruct();


template<> UMG_API UScriptStruct* StaticStruct<struct FUIComponentTarget>();

#define FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentContainer_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIComponentContainer(); \
	friend struct Z_Construct_UClass_UUIComponentContainer_Statics; \
public: \
	DECLARE_CLASS(UUIComponentContainer, UUserWidgetExtension, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UUIComponentContainer)


#define FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentContainer_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUIComponentContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUIComponentContainer(UUIComponentContainer&&); \
	UUIComponentContainer(const UUIComponentContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIComponentContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIComponentContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIComponentContainer) \
	NO_API virtual ~UUIComponentContainer();


#define FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentContainer_h_47_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentContainer_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentContainer_h_50_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentContainer_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UUIComponentContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
