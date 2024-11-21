// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Roles/LiveLinkLightRole.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVELINKINTERFACE_LiveLinkLightRole_generated_h
#error "LiveLinkLightRole.generated.h already included, missing '#pragma once' in LiveLinkLightRole.h"
#endif
#define LIVELINKINTERFACE_LiveLinkLightRole_generated_h

#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLightRole_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkLightRole(); \
	friend struct Z_Construct_UClass_ULiveLinkLightRole_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkLightRole, ULiveLinkTransformRole, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkInterface"), LIVELINKINTERFACE_API) \
	DECLARE_SERIALIZER(ULiveLinkLightRole)


#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLightRole_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIVELINKINTERFACE_API ULiveLinkLightRole(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULiveLinkLightRole(ULiveLinkLightRole&&); \
	ULiveLinkLightRole(const ULiveLinkLightRole&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINKINTERFACE_API, ULiveLinkLightRole); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkLightRole); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkLightRole) \
	LIVELINKINTERFACE_API virtual ~ULiveLinkLightRole();


#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLightRole_h_19_PROLOG
#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLightRole_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLightRole_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLightRole_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINKINTERFACE_API UClass* StaticClass<class ULiveLinkLightRole>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLightRole_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
