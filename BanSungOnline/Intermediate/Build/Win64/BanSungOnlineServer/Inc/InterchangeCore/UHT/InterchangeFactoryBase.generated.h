// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeFactoryBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef INTERCHANGECORE_InterchangeFactoryBase_generated_h
#error "InterchangeFactoryBase.generated.h already included, missing '#pragma once' in InterchangeFactoryBase.h"
#endif
#define INTERCHANGECORE_InterchangeFactoryBase_generated_h

#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeFactoryBase_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFactoryClass);


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeFactoryBase_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeFactoryBase(); \
	friend struct Z_Construct_UClass_UInterchangeFactoryBase_Statics; \
public: \
	DECLARE_CLASS(UInterchangeFactoryBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InterchangeCore"), INTERCHANGECORE_API) \
	DECLARE_SERIALIZER(UInterchangeFactoryBase)


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeFactoryBase_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGECORE_API UInterchangeFactoryBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeFactoryBase(UInterchangeFactoryBase&&); \
	UInterchangeFactoryBase(const UInterchangeFactoryBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGECORE_API, UInterchangeFactoryBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeFactoryBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeFactoryBase) \
	INTERCHANGECORE_API virtual ~UInterchangeFactoryBase();


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeFactoryBase_h_64_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeFactoryBase_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeFactoryBase_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeFactoryBase_h_67_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeFactoryBase_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGECORE_API UClass* StaticClass<class UInterchangeFactoryBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeFactoryBase_h


#define FOREACH_ENUM_EINTERCHANGEFACTORYASSETTYPE(op) \
	op(EInterchangeFactoryAssetType::None) \
	op(EInterchangeFactoryAssetType::Textures) \
	op(EInterchangeFactoryAssetType::Materials) \
	op(EInterchangeFactoryAssetType::Meshes) \
	op(EInterchangeFactoryAssetType::Animations) \
	op(EInterchangeFactoryAssetType::Physics) 

enum class EInterchangeFactoryAssetType : uint8;
template<> struct TIsUEnumClass<EInterchangeFactoryAssetType> { enum { Value = true }; };
template<> INTERCHANGECORE_API UEnum* StaticEnum<EInterchangeFactoryAssetType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
