// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DatasmithScene.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATASMITHCONTENT_DatasmithScene_generated_h
#error "DatasmithScene.generated.h already included, missing '#pragma once' in DatasmithScene.h"
#endif
#define DATASMITHCONTENT_DatasmithScene_generated_h

#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithScene_h_23_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDatasmithScene, NO_API)


#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithScene_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithScene(); \
	friend struct Z_Construct_UClass_UDatasmithScene_Statics; \
public: \
	DECLARE_CLASS(UDatasmithScene, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DatasmithContent"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithScene) \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithScene_h_23_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UDatasmithScene*>(this); }


#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithScene_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDatasmithScene(UDatasmithScene&&); \
	UDatasmithScene(const UDatasmithScene&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithScene); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithScene); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDatasmithScene)


#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithScene_h_20_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithScene_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithScene_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithScene_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHCONTENT_API UClass* StaticClass<class UDatasmithScene>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithScene_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
