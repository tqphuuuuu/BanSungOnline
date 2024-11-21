// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseGeneratedNavLinksProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_BaseGeneratedNavLinksProxy_generated_h
#error "BaseGeneratedNavLinksProxy.generated.h already included, missing '#pragma once' in BaseGeneratedNavLinksProxy.h"
#endif
#define NAVIGATIONSYSTEM_BaseGeneratedNavLinksProxy_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Public_BaseGeneratedNavLinksProxy_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUBaseGeneratedNavLinksProxy(); \
	friend struct Z_Construct_UClass_UBaseGeneratedNavLinksProxy_Statics; \
public: \
	DECLARE_CLASS(UBaseGeneratedNavLinksProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NAVIGATIONSYSTEM_API) \
	DECLARE_SERIALIZER(UBaseGeneratedNavLinksProxy) \
	virtual UObject* _getUObject() const override { return const_cast<UBaseGeneratedNavLinksProxy*>(this); }


#define FID_Engine_Source_Runtime_NavigationSystem_Public_BaseGeneratedNavLinksProxy_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API UBaseGeneratedNavLinksProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseGeneratedNavLinksProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, UBaseGeneratedNavLinksProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseGeneratedNavLinksProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBaseGeneratedNavLinksProxy(UBaseGeneratedNavLinksProxy&&); \
	UBaseGeneratedNavLinksProxy(const UBaseGeneratedNavLinksProxy&); \
public: \
	NAVIGATIONSYSTEM_API virtual ~UBaseGeneratedNavLinksProxy();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_BaseGeneratedNavLinksProxy_h_16_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_BaseGeneratedNavLinksProxy_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_BaseGeneratedNavLinksProxy_h_19_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_BaseGeneratedNavLinksProxy_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UBaseGeneratedNavLinksProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_BaseGeneratedNavLinksProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
