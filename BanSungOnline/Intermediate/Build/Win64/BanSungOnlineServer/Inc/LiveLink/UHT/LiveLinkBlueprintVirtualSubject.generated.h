// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VirtualSubjects/LiveLinkBlueprintVirtualSubject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLiveLinkBaseFrameData;
struct FLiveLinkBaseStaticData;
#ifdef LIVELINK_LiveLinkBlueprintVirtualSubject_generated_h
#error "LiveLinkBlueprintVirtualSubject.generated.h already included, missing '#pragma once' in LiveLinkBlueprintVirtualSubject.h"
#endif
#define LIVELINK_LiveLinkBlueprintVirtualSubject_generated_h

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_VirtualSubjects_LiveLinkBlueprintVirtualSubject_h_13_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_VirtualSubjects_LiveLinkBlueprintVirtualSubject_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkBlueprintVirtualSubject(); \
	friend struct Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkBlueprintVirtualSubject, ULiveLinkVirtualSubject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LiveLink"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkBlueprintVirtualSubject)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_VirtualSubjects_LiveLinkBlueprintVirtualSubject_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULiveLinkBlueprintVirtualSubject(ULiveLinkBlueprintVirtualSubject&&); \
	ULiveLinkBlueprintVirtualSubject(const ULiveLinkBlueprintVirtualSubject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkBlueprintVirtualSubject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkBlueprintVirtualSubject); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkBlueprintVirtualSubject) \
	NO_API virtual ~ULiveLinkBlueprintVirtualSubject();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_VirtualSubjects_LiveLinkBlueprintVirtualSubject_h_10_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_VirtualSubjects_LiveLinkBlueprintVirtualSubject_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_VirtualSubjects_LiveLinkBlueprintVirtualSubject_h_13_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_VirtualSubjects_LiveLinkBlueprintVirtualSubject_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_VirtualSubjects_LiveLinkBlueprintVirtualSubject_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINK_API UClass* StaticClass<class ULiveLinkBlueprintVirtualSubject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_VirtualSubjects_LiveLinkBlueprintVirtualSubject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
