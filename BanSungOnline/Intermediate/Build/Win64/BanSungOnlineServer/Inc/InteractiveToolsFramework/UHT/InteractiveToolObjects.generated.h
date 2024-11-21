// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractiveToolObjects.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIVETOOLSFRAMEWORK_InteractiveToolObjects_generated_h
#error "InteractiveToolObjects.generated.h already included, missing '#pragma once' in InteractiveToolObjects.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_InteractiveToolObjects_generated_h

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolObjects_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInternalToolFrameworkActor(); \
	friend struct Z_Construct_UClass_AInternalToolFrameworkActor_Statics; \
public: \
	DECLARE_CLASS(AInternalToolFrameworkActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), INTERACTIVETOOLSFRAMEWORK_API) \
	DECLARE_SERIALIZER(AInternalToolFrameworkActor)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolObjects_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API AInternalToolFrameworkActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AInternalToolFrameworkActor(AInternalToolFrameworkActor&&); \
	AInternalToolFrameworkActor(const AInternalToolFrameworkActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, AInternalToolFrameworkActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInternalToolFrameworkActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInternalToolFrameworkActor) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~AInternalToolFrameworkActor();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolObjects_h_17_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolObjects_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolObjects_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolObjects_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class AInternalToolFrameworkActor>();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolObjects_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UToolFrameworkComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UToolFrameworkComponent(UToolFrameworkComponent&&); \
	UToolFrameworkComponent(const UToolFrameworkComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UToolFrameworkComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolFrameworkComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolFrameworkComponent) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UToolFrameworkComponent();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolObjects_h_45_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUToolFrameworkComponent(); \
	friend struct Z_Construct_UClass_UToolFrameworkComponent_Statics; \
public: \
	DECLARE_CLASS(UToolFrameworkComponent, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), INTERACTIVETOOLSFRAMEWORK_API) \
	DECLARE_SERIALIZER(UToolFrameworkComponent)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolObjects_h_45_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolObjects_h_45_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolObjects_h_45_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolObjects_h_45_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IToolFrameworkComponent() {} \
public: \
	typedef UToolFrameworkComponent UClassType; \
	typedef IToolFrameworkComponent ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolObjects_h_42_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolObjects_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolObjects_h_45_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UToolFrameworkComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolObjects_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
