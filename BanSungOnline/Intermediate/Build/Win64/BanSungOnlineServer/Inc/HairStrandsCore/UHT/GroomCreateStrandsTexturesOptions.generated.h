// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GroomCreateStrandsTexturesOptions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HAIRSTRANDSCORE_GroomCreateStrandsTexturesOptions_generated_h
#error "GroomCreateStrandsTexturesOptions.generated.h already included, missing '#pragma once' in GroomCreateStrandsTexturesOptions.h"
#endif
#define HAIRSTRANDSCORE_GroomCreateStrandsTexturesOptions_generated_h

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateStrandsTexturesOptions_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUGroomCreateStrandsTexturesOptions(); \
	friend struct Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics; \
public: \
	DECLARE_CLASS(UGroomCreateStrandsTexturesOptions, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HairStrandsCore"), NO_API) \
	DECLARE_SERIALIZER(UGroomCreateStrandsTexturesOptions) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateStrandsTexturesOptions_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGroomCreateStrandsTexturesOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGroomCreateStrandsTexturesOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGroomCreateStrandsTexturesOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGroomCreateStrandsTexturesOptions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGroomCreateStrandsTexturesOptions(UGroomCreateStrandsTexturesOptions&&); \
	UGroomCreateStrandsTexturesOptions(const UGroomCreateStrandsTexturesOptions&); \
public: \
	NO_API virtual ~UGroomCreateStrandsTexturesOptions();


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateStrandsTexturesOptions_h_29_PROLOG
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateStrandsTexturesOptions_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateStrandsTexturesOptions_h_32_INCLASS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateStrandsTexturesOptions_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HAIRSTRANDSCORE_API UClass* StaticClass<class UGroomCreateStrandsTexturesOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateStrandsTexturesOptions_h


#define FOREACH_ENUM_ESTRANDSTEXTURESTRACETYPE(op) \
	op(EStrandsTexturesTraceType::TraceInside) \
	op(EStrandsTexturesTraceType::TraceOuside) \
	op(EStrandsTexturesTraceType::TraceBidirectional) 

enum class EStrandsTexturesTraceType : uint8;
template<> struct TIsUEnumClass<EStrandsTexturesTraceType> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EStrandsTexturesTraceType>();

#define FOREACH_ENUM_ESTRANDSTEXTURESMESHTYPE(op) \
	op(EStrandsTexturesMeshType::Static) \
	op(EStrandsTexturesMeshType::Skeletal) 

enum class EStrandsTexturesMeshType : uint8;
template<> struct TIsUEnumClass<EStrandsTexturesMeshType> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EStrandsTexturesMeshType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
