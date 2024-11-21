// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/FontFace.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_FontFace_generated_h
#error "FontFace.generated.h already included, missing '#pragma once' in FontFace.h"
#endif
#define ENGINE_FontFace_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFontFacePlatformRasterizationOverrides_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FFontFacePlatformRasterizationOverrides>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_41_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UFontFace, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFontFace(); \
	friend struct Z_Construct_UClass_UFontFace_Statics; \
public: \
	DECLARE_CLASS(UFontFace, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UFontFace) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_41_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UFontFace*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFontFace(UFontFace&&); \
	UFontFace(const UFontFace&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UFontFace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFontFace); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFontFace) \
	ENGINE_API virtual ~UFontFace();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_38_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UFontFace>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
