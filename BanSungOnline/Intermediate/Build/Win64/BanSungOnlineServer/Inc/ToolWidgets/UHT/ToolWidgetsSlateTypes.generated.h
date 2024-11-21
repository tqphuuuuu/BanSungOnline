// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToolWidgetsSlateTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOOLWIDGETS_ToolWidgetsSlateTypes_generated_h
#error "ToolWidgetsSlateTypes.generated.h already included, missing '#pragma once' in ToolWidgetsSlateTypes.h"
#endif
#define TOOLWIDGETS_ToolWidgetsSlateTypes_generated_h

#define FID_Engine_Source_Developer_ToolWidgets_Public_ToolWidgetsSlateTypes_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActionButtonStyle_Statics; \
	TOOLWIDGETS_API static class UScriptStruct* StaticStruct(); \
	typedef FSlateWidgetStyle Super;


template<> TOOLWIDGETS_API UScriptStruct* StaticStruct<struct FActionButtonStyle>();

#if WITH_EDITOR
#define FID_Engine_Source_Developer_ToolWidgets_Public_ToolWidgetsSlateTypes_h_143_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execGetActionButtonTypeNames);
#else // WITH_EDITOR
#define FID_Engine_Source_Developer_ToolWidgets_Public_ToolWidgetsSlateTypes_h_143_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Developer_ToolWidgets_Public_ToolWidgetsSlateTypes_h_143_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToolSlateWidgetTypesFunctionLibrary(); \
	friend struct Z_Construct_UClass_UToolSlateWidgetTypesFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UToolSlateWidgetTypesFunctionLibrary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolWidgets"), TOOLWIDGETS_API) \
	DECLARE_SERIALIZER(UToolSlateWidgetTypesFunctionLibrary)


#define FID_Engine_Source_Developer_ToolWidgets_Public_ToolWidgetsSlateTypes_h_143_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TOOLWIDGETS_API UToolSlateWidgetTypesFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UToolSlateWidgetTypesFunctionLibrary(UToolSlateWidgetTypesFunctionLibrary&&); \
	UToolSlateWidgetTypesFunctionLibrary(const UToolSlateWidgetTypesFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TOOLWIDGETS_API, UToolSlateWidgetTypesFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolSlateWidgetTypesFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolSlateWidgetTypesFunctionLibrary) \
	TOOLWIDGETS_API virtual ~UToolSlateWidgetTypesFunctionLibrary();


#define FID_Engine_Source_Developer_ToolWidgets_Public_ToolWidgetsSlateTypes_h_139_PROLOG
#define FID_Engine_Source_Developer_ToolWidgets_Public_ToolWidgetsSlateTypes_h_143_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_ToolWidgets_Public_ToolWidgetsSlateTypes_h_143_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Source_Developer_ToolWidgets_Public_ToolWidgetsSlateTypes_h_143_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_ToolWidgets_Public_ToolWidgetsSlateTypes_h_143_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOOLWIDGETS_API UClass* StaticClass<class UToolSlateWidgetTypesFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_ToolWidgets_Public_ToolWidgetsSlateTypes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
