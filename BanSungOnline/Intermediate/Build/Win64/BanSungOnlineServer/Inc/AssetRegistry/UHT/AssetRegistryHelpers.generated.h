// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetRegistry/AssetRegistryHelpers.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IAssetRegistry;
class UObject;
enum class EAssetRegistrySortOrder : uint8;
struct FARFilter;
struct FAssetData;
struct FSoftObjectPath;
struct FTagAndValue;
#ifdef ASSETREGISTRY_AssetRegistryHelpers_generated_h
#error "AssetRegistryHelpers.generated.h already included, missing '#pragma once' in AssetRegistryHelpers.h"
#endif
#define ASSETREGISTRY_AssetRegistryHelpers_generated_h

#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTagAndValue_Statics; \
	ASSETREGISTRY_API static class UScriptStruct* StaticStruct();


template<> ASSETREGISTRY_API UScriptStruct* StaticStruct<struct FTagAndValue>();

#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_125_DELEGATE \
static ASSETREGISTRY_API bool FSortingPredicate_DelegateWrapper(const FScriptDelegate& SortingPredicate, FAssetData const& Left, FAssetData const& Right);


#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSortByAssetName); \
	DECLARE_FUNCTION(execSortByPredicate); \
	DECLARE_FUNCTION(execFindAssetNativeClass); \
	DECLARE_FUNCTION(execGetBlueprintAssets); \
	DECLARE_FUNCTION(execSetFilterTagsAndValues); \
	DECLARE_FUNCTION(execGetTagValue); \
	DECLARE_FUNCTION(execGetExportTextName); \
	DECLARE_FUNCTION(execIsAssetLoaded); \
	DECLARE_FUNCTION(execGetAsset); \
	DECLARE_FUNCTION(execGetClass); \
	DECLARE_FUNCTION(execToSoftObjectPath); \
	DECLARE_FUNCTION(execGetFullName); \
	DECLARE_FUNCTION(execIsRedirector); \
	DECLARE_FUNCTION(execIsUAsset); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execCreateAssetData); \
	DECLARE_FUNCTION(execGetAssetRegistry);


#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetRegistryHelpers(); \
	friend struct Z_Construct_UClass_UAssetRegistryHelpers_Statics; \
public: \
	DECLARE_CLASS(UAssetRegistryHelpers, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AssetRegistry"), NO_API) \
	DECLARE_SERIALIZER(UAssetRegistryHelpers)


#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetRegistryHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAssetRegistryHelpers(UAssetRegistryHelpers&&); \
	UAssetRegistryHelpers(const UAssetRegistryHelpers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetRegistryHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetRegistryHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetRegistryHelpers) \
	NO_API virtual ~UAssetRegistryHelpers();


#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_50_PROLOG
#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_53_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSETREGISTRY_API UClass* StaticClass<class UAssetRegistryHelpers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h


#define FOREACH_ENUM_EASSETREGISTRYSORTORDER(op) \
	op(EAssetRegistrySortOrder::Ascending) \
	op(EAssetRegistrySortOrder::Descending) 

enum class EAssetRegistrySortOrder : uint8;
template<> struct TIsUEnumClass<EAssetRegistrySortOrder> { enum { Value = true }; };
template<> ASSETREGISTRY_API UEnum* StaticEnum<EAssetRegistrySortOrder>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
