// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Extensions/UIComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_UIComponent_generated_h
#error "UIComponent.generated.h already included, missing '#pragma once' in UIComponent.h"
#endif
#define UMG_UIComponent_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIComponent(); \
	friend struct Z_Construct_UClass_UUIComponent_Statics; \
public: \
	DECLARE_CLASS(UUIComponent, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UUIComponent)


#define FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponent_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UUIComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUIComponent(UUIComponent&&); \
	UUIComponent(const UUIComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UUIComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIComponent) \
	UMG_API virtual ~UUIComponent();


#define FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponent_h_16_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UUIComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
