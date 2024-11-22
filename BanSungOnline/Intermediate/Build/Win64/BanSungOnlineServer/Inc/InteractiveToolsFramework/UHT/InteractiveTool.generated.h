// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractiveTool.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIVETOOLSFRAMEWORK_InteractiveTool_generated_h
#error "InteractiveTool.generated.h already included, missing '#pragma once' in InteractiveTool.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_InteractiveTool_generated_h

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_244_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractiveToolPropertySet(); \
	friend struct Z_Construct_UClass_UInteractiveToolPropertySet_Statics; \
public: \
	DECLARE_CLASS(UInteractiveToolPropertySet, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), INTERACTIVETOOLSFRAMEWORK_API) \
	DECLARE_SERIALIZER(UInteractiveToolPropertySet)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_244_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UInteractiveToolPropertySet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteractiveToolPropertySet(UInteractiveToolPropertySet&&); \
	UInteractiveToolPropertySet(const UInteractiveToolPropertySet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UInteractiveToolPropertySet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractiveToolPropertySet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractiveToolPropertySet) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UInteractiveToolPropertySet();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_241_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_244_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_244_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_244_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UInteractiveToolPropertySet>();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_351_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractiveTool(); \
	friend struct Z_Construct_UClass_UInteractiveTool_Statics; \
public: \
	DECLARE_CLASS(UInteractiveTool, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), INTERACTIVETOOLSFRAMEWORK_API) \
	DECLARE_SERIALIZER(UInteractiveTool) \
	virtual UObject* _getUObject() const override { return const_cast<UInteractiveTool*>(this); }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_351_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteractiveTool(UInteractiveTool&&); \
	UInteractiveTool(const UInteractiveTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UInteractiveTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractiveTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractiveTool) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UInteractiveTool();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_348_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_351_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_351_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_351_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UInteractiveTool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h


#define FOREACH_ENUM_ETOOLSHUTDOWNTYPE(op) \
	op(EToolShutdownType::Completed) \
	op(EToolShutdownType::Accept) \
	op(EToolShutdownType::Cancel) 

enum class EToolShutdownType : uint8;
template<> struct TIsUEnumClass<EToolShutdownType> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EToolShutdownType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS