// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DatasmithImportOptions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATASMITHCONTENT_DatasmithImportOptions_generated_h
#error "DatasmithImportOptions.generated.h already included, missing '#pragma once' in DatasmithImportOptions.h"
#endif
#define DATASMITHCONTENT_DatasmithImportOptions_generated_h

#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_113_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDatasmithAssetImportOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<struct FDatasmithAssetImportOptions>();

#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_122_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<struct FDatasmithStaticMeshImportOptions>();

#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_160_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDatasmithReimportOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<struct FDatasmithReimportOptions>();

#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_177_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDatasmithImportBaseOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<struct FDatasmithImportBaseOptions>();

#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_224_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDatasmithTessellationOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<struct FDatasmithTessellationOptions>();

#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_316_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDatasmithRetessellationOptions_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FDatasmithTessellationOptions Super;


template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<struct FDatasmithRetessellationOptions>();

#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_349_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UDatasmithOptionsBase, NO_API)


#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_349_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithOptionsBase(); \
	friend struct Z_Construct_UClass_UDatasmithOptionsBase_Statics; \
public: \
	DECLARE_CLASS(UDatasmithOptionsBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DatasmithContent"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithOptionsBase) \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_349_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_349_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithOptionsBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDatasmithOptionsBase(UDatasmithOptionsBase&&); \
	UDatasmithOptionsBase(const UDatasmithOptionsBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithOptionsBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithOptionsBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithOptionsBase) \
	NO_API virtual ~UDatasmithOptionsBase();


#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_346_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_349_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_349_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_349_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHCONTENT_API UClass* StaticClass<class UDatasmithOptionsBase>();

#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_359_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithCommonTessellationOptions(); \
	friend struct Z_Construct_UClass_UDatasmithCommonTessellationOptions_Statics; \
public: \
	DECLARE_CLASS(UDatasmithCommonTessellationOptions, UDatasmithOptionsBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DatasmithContent"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithCommonTessellationOptions) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_359_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithCommonTessellationOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDatasmithCommonTessellationOptions(UDatasmithCommonTessellationOptions&&); \
	UDatasmithCommonTessellationOptions(const UDatasmithCommonTessellationOptions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithCommonTessellationOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithCommonTessellationOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithCommonTessellationOptions) \
	NO_API virtual ~UDatasmithCommonTessellationOptions();


#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_356_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_359_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_359_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_359_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHCONTENT_API UClass* StaticClass<class UDatasmithCommonTessellationOptions>();

#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_369_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithImportOptions(); \
	friend struct Z_Construct_UClass_UDatasmithImportOptions_Statics; \
public: \
	DECLARE_CLASS(UDatasmithImportOptions, UDatasmithOptionsBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DatasmithContent"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithImportOptions) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_369_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithImportOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithImportOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithImportOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithImportOptions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDatasmithImportOptions(UDatasmithImportOptions&&); \
	UDatasmithImportOptions(const UDatasmithImportOptions&); \
public: \
	NO_API virtual ~UDatasmithImportOptions();


#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_366_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_369_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_369_INCLASS \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h_369_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHCONTENT_API UClass* StaticClass<class UDatasmithImportOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportOptions_h


#define FOREACH_ENUM_EDATASMITHIMPORTSEARCHPACKAGEPOLICY(op) \
	op(EDatasmithImportSearchPackagePolicy::Current) \
	op(EDatasmithImportSearchPackagePolicy::All) 

enum class EDatasmithImportSearchPackagePolicy : uint8;
template<> struct TIsUEnumClass<EDatasmithImportSearchPackagePolicy> { enum { Value = true }; };
template<> DATASMITHCONTENT_API UEnum* StaticEnum<EDatasmithImportSearchPackagePolicy>();

#define FOREACH_ENUM_EDATASMITHIMPORTASSETCONFLICTPOLICY(op) \
	op(EDatasmithImportAssetConflictPolicy::Replace) \
	op(EDatasmithImportAssetConflictPolicy::Update) \
	op(EDatasmithImportAssetConflictPolicy::Use) \
	op(EDatasmithImportAssetConflictPolicy::Ignore) 

enum class EDatasmithImportAssetConflictPolicy : uint8;
template<> struct TIsUEnumClass<EDatasmithImportAssetConflictPolicy> { enum { Value = true }; };
template<> DATASMITHCONTENT_API UEnum* StaticEnum<EDatasmithImportAssetConflictPolicy>();

#define FOREACH_ENUM_EDATASMITHIMPORTACTORPOLICY(op) \
	op(EDatasmithImportActorPolicy::Update) \
	op(EDatasmithImportActorPolicy::Full) \
	op(EDatasmithImportActorPolicy::Ignore) 

enum class EDatasmithImportActorPolicy : uint8;
template<> struct TIsUEnumClass<EDatasmithImportActorPolicy> { enum { Value = true }; };
template<> DATASMITHCONTENT_API UEnum* StaticEnum<EDatasmithImportActorPolicy>();

#define FOREACH_ENUM_EDATASMITHIMPORTMATERIALQUALITY(op) \
	op(EDatasmithImportMaterialQuality::UseNoFresnelCurves) \
	op(EDatasmithImportMaterialQuality::UseSimplifierFresnelCurves) \
	op(EDatasmithImportMaterialQuality::UseRealFresnelCurves) 

enum class EDatasmithImportMaterialQuality : uint8;
template<> struct TIsUEnumClass<EDatasmithImportMaterialQuality> { enum { Value = true }; };
template<> DATASMITHCONTENT_API UEnum* StaticEnum<EDatasmithImportMaterialQuality>();

#define FOREACH_ENUM_EDATASMITHIMPORTLIGHTMAPMIN(op) \
	op(EDatasmithImportLightmapMin::LIGHTMAP_16) \
	op(EDatasmithImportLightmapMin::LIGHTMAP_32) \
	op(EDatasmithImportLightmapMin::LIGHTMAP_64) \
	op(EDatasmithImportLightmapMin::LIGHTMAP_128) \
	op(EDatasmithImportLightmapMin::LIGHTMAP_256) \
	op(EDatasmithImportLightmapMin::LIGHTMAP_512) 

enum class EDatasmithImportLightmapMin : uint8;
template<> struct TIsUEnumClass<EDatasmithImportLightmapMin> { enum { Value = true }; };
template<> DATASMITHCONTENT_API UEnum* StaticEnum<EDatasmithImportLightmapMin>();

#define FOREACH_ENUM_EDATASMITHIMPORTLIGHTMAPMAX(op) \
	op(EDatasmithImportLightmapMax::LIGHTMAP_64) \
	op(EDatasmithImportLightmapMax::LIGHTMAP_128) \
	op(EDatasmithImportLightmapMax::LIGHTMAP_256) \
	op(EDatasmithImportLightmapMax::LIGHTMAP_512) \
	op(EDatasmithImportLightmapMax::LIGHTMAP_1024) \
	op(EDatasmithImportLightmapMax::LIGHTMAP_2048) \
	op(EDatasmithImportLightmapMax::LIGHTMAP_4096) 

enum class EDatasmithImportLightmapMax : uint8;
template<> struct TIsUEnumClass<EDatasmithImportLightmapMax> { enum { Value = true }; };
template<> DATASMITHCONTENT_API UEnum* StaticEnum<EDatasmithImportLightmapMax>();

#define FOREACH_ENUM_EDATASMITHIMPORTSCENE(op) \
	op(EDatasmithImportScene::NewLevel) \
	op(EDatasmithImportScene::CurrentLevel) \
	op(EDatasmithImportScene::AssetsOnly) 

enum class EDatasmithImportScene : uint8;
template<> struct TIsUEnumClass<EDatasmithImportScene> { enum { Value = true }; };
template<> DATASMITHCONTENT_API UEnum* StaticEnum<EDatasmithImportScene>();

#define FOREACH_ENUM_EDATASMITHCADSTITCHINGTECHNIQUE(op) \
	op(EDatasmithCADStitchingTechnique::StitchingNone) \
	op(EDatasmithCADStitchingTechnique::StitchingHeal) \
	op(EDatasmithCADStitchingTechnique::StitchingSew) 

enum class EDatasmithCADStitchingTechnique : uint8;
template<> struct TIsUEnumClass<EDatasmithCADStitchingTechnique> { enum { Value = true }; };
template<> DATASMITHCONTENT_API UEnum* StaticEnum<EDatasmithCADStitchingTechnique>();

#define FOREACH_ENUM_EDATASMITHCADRETESSELLATIONRULE(op) \
	op(EDatasmithCADRetessellationRule::All) \
	op(EDatasmithCADRetessellationRule::SkipDeletedSurfaces) 

enum class EDatasmithCADRetessellationRule : uint8;
template<> struct TIsUEnumClass<EDatasmithCADRetessellationRule> { enum { Value = true }; };
template<> DATASMITHCONTENT_API UEnum* StaticEnum<EDatasmithCADRetessellationRule>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
