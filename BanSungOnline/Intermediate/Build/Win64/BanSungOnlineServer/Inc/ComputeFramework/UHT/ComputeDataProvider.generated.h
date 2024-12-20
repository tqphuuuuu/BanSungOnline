// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ComputeFramework/ComputeDataProvider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMPUTEFRAMEWORK_ComputeDataProvider_generated_h
#error "ComputeDataProvider.generated.h already included, missing '#pragma once' in ComputeDataProvider.h"
#endif
#define COMPUTEFRAMEWORK_ComputeDataProvider_generated_h

#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeDataProvider_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComputeDataProvider(); \
	friend struct Z_Construct_UClass_UComputeDataProvider_Statics; \
public: \
	DECLARE_CLASS(UComputeDataProvider, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ComputeFramework"), NO_API) \
	DECLARE_SERIALIZER(UComputeDataProvider)


#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeDataProvider_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComputeDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UComputeDataProvider(UComputeDataProvider&&); \
	UComputeDataProvider(const UComputeDataProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComputeDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComputeDataProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComputeDataProvider) \
	NO_API virtual ~UComputeDataProvider();


#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeDataProvider_h_19_PROLOG
#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeDataProvider_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeDataProvider_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeDataProvider_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPUTEFRAMEWORK_API UClass* StaticClass<class UComputeDataProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeDataProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
