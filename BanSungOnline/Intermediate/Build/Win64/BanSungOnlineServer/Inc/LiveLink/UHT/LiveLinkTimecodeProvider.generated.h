// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkTimecodeProvider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVELINK_LiveLinkTimecodeProvider_generated_h
#error "LiveLinkTimecodeProvider.generated.h already included, missing '#pragma once' in LiveLinkTimecodeProvider.h"
#endif
#define LIVELINK_LiveLinkTimecodeProvider_generated_h

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkTimecodeProvider(); \
	friend struct Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkTimecodeProvider, UTimecodeProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLink"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkTimecodeProvider) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULiveLinkTimecodeProvider(ULiveLinkTimecodeProvider&&); \
	ULiveLinkTimecodeProvider(const ULiveLinkTimecodeProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkTimecodeProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkTimecodeProvider); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkTimecodeProvider) \
	NO_API virtual ~ULiveLinkTimecodeProvider();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_30_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINK_API UClass* StaticClass<class ULiveLinkTimecodeProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h


#define FOREACH_ENUM_ELIVELINKTIMECODEPROVIDEREVALUATIONTYPE(op) \
	op(ELiveLinkTimecodeProviderEvaluationType::Lerp) \
	op(ELiveLinkTimecodeProviderEvaluationType::Nearest) \
	op(ELiveLinkTimecodeProviderEvaluationType::Latest) 

enum class ELiveLinkTimecodeProviderEvaluationType;
template<> struct TIsUEnumClass<ELiveLinkTimecodeProviderEvaluationType> { enum { Value = true }; };
template<> LIVELINK_API UEnum* StaticEnum<ELiveLinkTimecodeProviderEvaluationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
