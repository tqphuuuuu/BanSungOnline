// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundBuilderBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IMetaSoundDocumentInterface;
class UObject;
enum class EMetaSoundBuilderResult : uint8;
enum class EMetasoundFrontendVertexAccessType : int32;
struct FMetaSoundBuilderNodeInputHandle;
struct FMetaSoundBuilderNodeOutputHandle;
struct FMetaSoundBuilderOptions;
struct FMetasoundFrontendClassName;
struct FMetasoundFrontendLiteral;
struct FMetasoundFrontendVersion;
struct FMetaSoundNodeHandle;
#ifdef METASOUNDENGINE_MetasoundBuilderBase_generated_h
#error "MetasoundBuilderBase.generated.h already included, missing '#pragma once' in MetasoundBuilderBase.h"
#endif
#define METASOUNDENGINE_MetasoundBuilderBase_generated_h

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderBase_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMetasoundFrontendVertexHandle Super;


template<> METASOUNDENGINE_API UScriptStruct* StaticStruct<struct FMetaSoundBuilderNodeInputHandle>();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderBase_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMetasoundFrontendVertexHandle Super;


template<> METASOUNDENGINE_API UScriptStruct* StaticStruct<struct FMetaSoundBuilderNodeOutputHandle>();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderBase_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMetaSoundNodeHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> METASOUNDENGINE_API UScriptStruct* StaticStruct<struct FMetaSoundNodeHandle>();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderBase_h_87_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> METASOUNDENGINE_API UScriptStruct* StaticStruct<struct FMetaSoundBuilderOptions>();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderBase_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBuildNewMetaSound); \
	DECLARE_FUNCTION(execBuildAndOverwriteMetaSound); \
	DECLARE_FUNCTION(execBuild); \
	DECLARE_FUNCTION(execSetGraphOutputName); \
	DECLARE_FUNCTION(execSetGraphOutputDataType); \
	DECLARE_FUNCTION(execSetGraphOutputAccessType); \
	DECLARE_FUNCTION(execSetGraphInputName); \
	DECLARE_FUNCTION(execSetGraphInputDefault); \
	DECLARE_FUNCTION(execSetGraphInputDataType); \
	DECLARE_FUNCTION(execSetGraphInputAccessType); \
	DECLARE_FUNCTION(execSetNodeInputDefault); \
	DECLARE_FUNCTION(execRemoveUnusedDependencies); \
	DECLARE_FUNCTION(execRemoveNodeInputDefault); \
	DECLARE_FUNCTION(execRemoveNode); \
	DECLARE_FUNCTION(execRemoveInterface); \
	DECLARE_FUNCTION(execRemoveGraphOutput); \
	DECLARE_FUNCTION(execRemoveGraphInput); \
	DECLARE_FUNCTION(execConvertToPreset); \
	DECLARE_FUNCTION(execConvertFromPreset); \
	DECLARE_FUNCTION(execIsPreset); \
	DECLARE_FUNCTION(execNodeOutputIsConnected); \
	DECLARE_FUNCTION(execNodeInputIsConnected); \
	DECLARE_FUNCTION(execNodesAreConnected); \
	DECLARE_FUNCTION(execInterfaceIsDeclared); \
	DECLARE_FUNCTION(execGetReferencedPresetAsset); \
	DECLARE_FUNCTION(execGetNodeOutputIsConstructorPin); \
	DECLARE_FUNCTION(execGetNodeOutputData); \
	DECLARE_FUNCTION(execGetNodeInputIsConstructorPin); \
	DECLARE_FUNCTION(execGetNodeInputClassDefault); \
	DECLARE_FUNCTION(execGetNodeInputDefault); \
	DECLARE_FUNCTION(execGetNodeInputData); \
	DECLARE_FUNCTION(execGetRootGraphClassName); \
	DECLARE_FUNCTION(execFindNodeClassVersion); \
	DECLARE_FUNCTION(execFindNodeOutputParent); \
	DECLARE_FUNCTION(execFindNodeInputParent); \
	DECLARE_FUNCTION(execFindInterfaceOutputNodes); \
	DECLARE_FUNCTION(execFindInterfaceInputNodes); \
	DECLARE_FUNCTION(execFindNodeOutputsByDataType); \
	DECLARE_FUNCTION(execFindNodeOutputs); \
	DECLARE_FUNCTION(execFindNodeOutputByName); \
	DECLARE_FUNCTION(execFindNodeInputsByDataType); \
	DECLARE_FUNCTION(execFindNodeInputs); \
	DECLARE_FUNCTION(execFindNodeInputByName); \
	DECLARE_FUNCTION(execFindGraphOutputNode); \
	DECLARE_FUNCTION(execFindGraphInputNode); \
	DECLARE_FUNCTION(execDisconnectNodesByInterfaceBindings); \
	DECLARE_FUNCTION(execDisconnectNodeOutput); \
	DECLARE_FUNCTION(execDisconnectNodeInput); \
	DECLARE_FUNCTION(execDisconnectNodes); \
	DECLARE_FUNCTION(execContainsNodeOutput); \
	DECLARE_FUNCTION(execContainsNodeInput); \
	DECLARE_FUNCTION(execContainsNode); \
	DECLARE_FUNCTION(execConnectNodeInputToGraphInput); \
	DECLARE_FUNCTION(execConnectNodeOutputToGraphOutput); \
	DECLARE_FUNCTION(execConnectNodeInputsToMatchingGraphInterfaceInputs); \
	DECLARE_FUNCTION(execConnectNodeOutputsToMatchingGraphInterfaceOutputs); \
	DECLARE_FUNCTION(execConnectNodesByInterfaceBindings); \
	DECLARE_FUNCTION(execConnectNodes); \
	DECLARE_FUNCTION(execAddNodeByClassName); \
	DECLARE_FUNCTION(execAddNode); \
	DECLARE_FUNCTION(execAddInterface); \
	DECLARE_FUNCTION(execAddGraphOutputNode); \
	DECLARE_FUNCTION(execAddGraphInputNode);


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderBase_h_122_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaSoundBuilderBase(); \
	friend struct Z_Construct_UClass_UMetaSoundBuilderBase_Statics; \
public: \
	DECLARE_CLASS(UMetaSoundBuilderBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MetasoundEngine"), NO_API) \
	DECLARE_SERIALIZER(UMetaSoundBuilderBase)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderBase_h_122_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaSoundBuilderBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMetaSoundBuilderBase(UMetaSoundBuilderBase&&); \
	UMetaSoundBuilderBase(const UMetaSoundBuilderBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaSoundBuilderBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundBuilderBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaSoundBuilderBase) \
	NO_API virtual ~UMetaSoundBuilderBase();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderBase_h_119_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderBase_h_122_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderBase_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderBase_h_122_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderBase_h_122_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> METASOUNDENGINE_API UClass* StaticClass<class UMetaSoundBuilderBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderBase_h


#define FOREACH_ENUM_EMETASOUNDBUILDERRESULT(op) \
	op(EMetaSoundBuilderResult::Succeeded) \
	op(EMetaSoundBuilderResult::Failed) 

enum class EMetaSoundBuilderResult : uint8;
template<> struct TIsUEnumClass<EMetaSoundBuilderResult> { enum { Value = true }; };
template<> METASOUNDENGINE_API UEnum* StaticEnum<EMetaSoundBuilderResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
