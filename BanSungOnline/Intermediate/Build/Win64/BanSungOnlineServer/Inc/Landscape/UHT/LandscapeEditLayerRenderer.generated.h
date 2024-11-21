// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeEditLayerRenderer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_LandscapeEditLayerRenderer_generated_h
#error "LandscapeEditLayerRenderer.generated.h already included, missing '#pragma once' in LandscapeEditLayerRenderer.h"
#endif
#define LANDSCAPE_LandscapeEditLayerRenderer_generated_h

#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeEditLayerRenderer_h_801_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULandscapeEditLayerRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULandscapeEditLayerRenderer(ULandscapeEditLayerRenderer&&); \
	ULandscapeEditLayerRenderer(const ULandscapeEditLayerRenderer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULandscapeEditLayerRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeEditLayerRenderer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeEditLayerRenderer) \
	NO_API virtual ~ULandscapeEditLayerRenderer();


#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeEditLayerRenderer_h_801_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULandscapeEditLayerRenderer(); \
	friend struct Z_Construct_UClass_ULandscapeEditLayerRenderer_Statics; \
public: \
	DECLARE_CLASS(ULandscapeEditLayerRenderer, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Landscape"), NO_API) \
	DECLARE_SERIALIZER(ULandscapeEditLayerRenderer)


#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeEditLayerRenderer_h_801_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Landscape_Public_LandscapeEditLayerRenderer_h_801_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Landscape_Public_LandscapeEditLayerRenderer_h_801_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeEditLayerRenderer_h_801_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILandscapeEditLayerRenderer() {} \
public: \
	typedef ULandscapeEditLayerRenderer UClassType; \
	typedef ILandscapeEditLayerRenderer ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeEditLayerRenderer_h_797_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeEditLayerRenderer_h_812_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Public_LandscapeEditLayerRenderer_h_801_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ULandscapeEditLayerRenderer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Public_LandscapeEditLayerRenderer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
