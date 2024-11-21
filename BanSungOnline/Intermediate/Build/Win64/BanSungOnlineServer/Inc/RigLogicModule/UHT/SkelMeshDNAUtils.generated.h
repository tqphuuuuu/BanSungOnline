// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SkelMeshDNAUtils.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGLOGICMODULE_SkelMeshDNAUtils_generated_h
#error "SkelMeshDNAUtils.generated.h already included, missing '#pragma once' in SkelMeshDNAUtils.h"
#endif
#define RIGLOGICMODULE_SkelMeshDNAUtils_generated_h

#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_SkelMeshDNAUtils_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUSkelMeshDNAUtils(); \
	friend struct Z_Construct_UClass_USkelMeshDNAUtils_Statics; \
public: \
	DECLARE_CLASS(USkelMeshDNAUtils, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/RigLogicModule"), NO_API) \
	DECLARE_SERIALIZER(USkelMeshDNAUtils)


#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_SkelMeshDNAUtils_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkelMeshDNAUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkelMeshDNAUtils) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkelMeshDNAUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkelMeshDNAUtils); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USkelMeshDNAUtils(USkelMeshDNAUtils&&); \
	USkelMeshDNAUtils(const USkelMeshDNAUtils&); \
public: \
	NO_API virtual ~USkelMeshDNAUtils();


#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_SkelMeshDNAUtils_h_26_PROLOG
#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_SkelMeshDNAUtils_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_SkelMeshDNAUtils_h_29_INCLASS \
	FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_SkelMeshDNAUtils_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIGLOGICMODULE_API UClass* StaticClass<class USkelMeshDNAUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_SkelMeshDNAUtils_h


#define FOREACH_ENUM_ELODUPDATEOPTION(op) \
	op(ELodUpdateOption::LOD0Only) \
	op(ELodUpdateOption::LOD1AndHigher) \
	op(ELodUpdateOption::All) 

enum class ELodUpdateOption : uint8;
template<> struct TIsUEnumClass<ELodUpdateOption> { enum { Value = true }; };
template<> RIGLOGICMODULE_API UEnum* StaticEnum<ELodUpdateOption>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
