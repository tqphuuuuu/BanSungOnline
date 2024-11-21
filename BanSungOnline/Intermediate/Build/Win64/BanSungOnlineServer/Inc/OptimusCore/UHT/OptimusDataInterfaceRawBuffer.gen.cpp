// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusCore/Private/DataInterfaces/OptimusDataInterfaceRawBuffer.h"
#include "ComputeFramework/Public/ComputeFramework/ShaderParamTypeDefinition.h"
#include "OptimusCore/Public/OptimusConstant.h"
#include "OptimusCore/Public/OptimusDataDomain.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusDataInterfaceRawBuffer() {}

// Begin Cross Module References
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
COMPUTEFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FShaderValueTypeHandle();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentSourceBinding_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusImplicitPersistentBufferDataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusImplicitPersistentBufferDataInterface_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusImplicitPersistentBufferDataProvider();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusImplicitPersistentBufferDataProvider_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusPersistentBufferDataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusPersistentBufferDataInterface_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusPersistentBufferDataProvider();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusPersistentBufferDataProvider_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusPersistentBufferProvider_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusRawBufferDataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusRawBufferDataInterface_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusRawBufferDataProvider();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusRawBufferDataProvider_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusTransientBufferDataInterface();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusTransientBufferDataInterface_NoRegister();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusTransientBufferDataProvider();
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusTransientBufferDataProvider_NoRegister();
OPTIMUSCORE_API UEnum* Z_Construct_UEnum_OptimusCore_EOptimusBufferWriteType();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusConstantIdentifier();
OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDataDomain();
UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

// Begin Enum EOptimusBufferWriteType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOptimusBufferWriteType;
static UEnum* EOptimusBufferWriteType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOptimusBufferWriteType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOptimusBufferWriteType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OptimusCore_EOptimusBufferWriteType, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("EOptimusBufferWriteType"));
	}
	return Z_Registration_Info_UEnum_EOptimusBufferWriteType.OuterSingleton;
}
template<> OPTIMUSCORE_API UEnum* StaticEnum<EOptimusBufferWriteType>()
{
	return EOptimusBufferWriteType_StaticEnum();
}
struct Z_Construct_UEnum_OptimusCore_EOptimusBufferWriteType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Write to buffer operation types. */" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EOptimusBufferWriteType::Count" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
		{ "ToolTip", "Write to buffer operation types." },
		{ "Write.Name", "EOptimusBufferWriteType::Write" },
		{ "Write.ToolTip", "Write the value to resource buffer." },
		{ "WriteAtomicAdd.Name", "EOptimusBufferWriteType::WriteAtomicAdd" },
		{ "WriteAtomicAdd.ToolTip", "AtomicAdd the value to the value in the resource buffer." },
		{ "WriteAtomicMax.Name", "EOptimusBufferWriteType::WriteAtomicMax" },
		{ "WriteAtomicMax.ToolTip", "AtomicMax the value with the value in the resource buffer." },
		{ "WriteAtomicMin.Name", "EOptimusBufferWriteType::WriteAtomicMin" },
		{ "WriteAtomicMin.ToolTip", "AtomicMin the value with the value in the resource buffer." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOptimusBufferWriteType::Write", (int64)EOptimusBufferWriteType::Write },
		{ "EOptimusBufferWriteType::WriteAtomicAdd", (int64)EOptimusBufferWriteType::WriteAtomicAdd },
		{ "EOptimusBufferWriteType::WriteAtomicMin", (int64)EOptimusBufferWriteType::WriteAtomicMin },
		{ "EOptimusBufferWriteType::WriteAtomicMax", (int64)EOptimusBufferWriteType::WriteAtomicMax },
		{ "EOptimusBufferWriteType::Count", (int64)EOptimusBufferWriteType::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OptimusCore_EOptimusBufferWriteType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OptimusCore,
	nullptr,
	"EOptimusBufferWriteType",
	"EOptimusBufferWriteType",
	Z_Construct_UEnum_OptimusCore_EOptimusBufferWriteType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusBufferWriteType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusBufferWriteType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OptimusCore_EOptimusBufferWriteType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OptimusCore_EOptimusBufferWriteType()
{
	if (!Z_Registration_Info_UEnum_EOptimusBufferWriteType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOptimusBufferWriteType.InnerSingleton, Z_Construct_UEnum_OptimusCore_EOptimusBufferWriteType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOptimusBufferWriteType.InnerSingleton;
}
// End Enum EOptimusBufferWriteType

// Begin Class UOptimusRawBufferDataInterface
void UOptimusRawBufferDataInterface::StaticRegisterNativesUOptimusRawBufferDataInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusRawBufferDataInterface);
UClass* Z_Construct_UClass_UOptimusRawBufferDataInterface_NoRegister()
{
	return UOptimusRawBufferDataInterface::StaticClass();
}
struct Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueType_MetaData[] = {
		{ "Comment", "/** The value type we should be allocating elements for */" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
		{ "ToolTip", "The value type we should be allocating elements for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataDomain_MetaData[] = {
		{ "Comment", "/** The data domain this buffer covers */" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
		{ "ToolTip", "The data domain this buffer covers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentSourceBinding_MetaData[] = {
		{ "Comment", "/** The component source to query component domain validity and sizing */" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
		{ "ToolTip", "The component source to query component domain validity and sizing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DomainConstantIdentifier_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ValueType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataDomain;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ComponentSourceBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DomainConstantIdentifier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusRawBufferDataInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::NewProp_ValueType = { "ValueType", nullptr, (EPropertyFlags)0x0010000000000010, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusRawBufferDataInterface, ValueType), Z_Construct_UScriptStruct_FShaderValueTypeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueType_MetaData), NewProp_ValueType_MetaData) }; // 3692120632
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::NewProp_DataDomain = { "DataDomain", nullptr, (EPropertyFlags)0x0010000000000010, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusRawBufferDataInterface, DataDomain), Z_Construct_UScriptStruct_FOptimusDataDomain, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataDomain_MetaData), NewProp_DataDomain_MetaData) }; // 3408120871
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::NewProp_ComponentSourceBinding = { "ComponentSourceBinding", nullptr, (EPropertyFlags)0x0014000000000010, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusRawBufferDataInterface, ComponentSourceBinding), Z_Construct_UClass_UOptimusComponentSourceBinding_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentSourceBinding_MetaData), NewProp_ComponentSourceBinding_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::NewProp_DomainConstantIdentifier = { "DomainConstantIdentifier", nullptr, (EPropertyFlags)0x0010000020000010, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusRawBufferDataInterface, DomainConstantIdentifier_DEPRECATED), Z_Construct_UScriptStruct_FOptimusConstantIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DomainConstantIdentifier_MetaData), NewProp_DomainConstantIdentifier_MetaData) }; // 2694224425
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::NewProp_ValueType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::NewProp_DataDomain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::NewProp_ComponentSourceBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::NewProp_DomainConstantIdentifier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusComputeDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::ClassParams = {
	&UOptimusRawBufferDataInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::PropPointers),
	0,
	0x001100A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusRawBufferDataInterface()
{
	if (!Z_Registration_Info_UClass_UOptimusRawBufferDataInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusRawBufferDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusRawBufferDataInterface.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusRawBufferDataInterface>()
{
	return UOptimusRawBufferDataInterface::StaticClass();
}
UOptimusRawBufferDataInterface::UOptimusRawBufferDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusRawBufferDataInterface);
UOptimusRawBufferDataInterface::~UOptimusRawBufferDataInterface() {}
// End Class UOptimusRawBufferDataInterface

// Begin Class UOptimusTransientBufferDataInterface
void UOptimusTransientBufferDataInterface::StaticRegisterNativesUOptimusTransientBufferDataInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusTransientBufferDataInterface);
UClass* Z_Construct_UClass_UOptimusTransientBufferDataInterface_NoRegister()
{
	return UOptimusTransientBufferDataInterface::StaticClass();
}
struct Z_Construct_UClass_UOptimusTransientBufferDataInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Interface for a transient buffer. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
		{ "ToolTip", "Compute Framework Data Interface for a transient buffer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bZeroInitForAtomicWrites_MetaData[] = {
		{ "Comment", "//~ End UComputeDataInterface Interface\n" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bZeroInitForAtomicWrites_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bZeroInitForAtomicWrites;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusTransientBufferDataInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UOptimusTransientBufferDataInterface_Statics::NewProp_bZeroInitForAtomicWrites_SetBit(void* Obj)
{
	((UOptimusTransientBufferDataInterface*)Obj)->bZeroInitForAtomicWrites = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimusTransientBufferDataInterface_Statics::NewProp_bZeroInitForAtomicWrites = { "bZeroInitForAtomicWrites", nullptr, (EPropertyFlags)0x0010000000000010, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimusTransientBufferDataInterface), &Z_Construct_UClass_UOptimusTransientBufferDataInterface_Statics::NewProp_bZeroInitForAtomicWrites_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bZeroInitForAtomicWrites_MetaData), NewProp_bZeroInitForAtomicWrites_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusTransientBufferDataInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusTransientBufferDataInterface_Statics::NewProp_bZeroInitForAtomicWrites,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusTransientBufferDataInterface_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusTransientBufferDataInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusRawBufferDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusTransientBufferDataInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusTransientBufferDataInterface_Statics::ClassParams = {
	&UOptimusTransientBufferDataInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusTransientBufferDataInterface_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusTransientBufferDataInterface_Statics::PropPointers),
	0,
	0x001100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusTransientBufferDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusTransientBufferDataInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusTransientBufferDataInterface()
{
	if (!Z_Registration_Info_UClass_UOptimusTransientBufferDataInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusTransientBufferDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusTransientBufferDataInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusTransientBufferDataInterface.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusTransientBufferDataInterface>()
{
	return UOptimusTransientBufferDataInterface::StaticClass();
}
UOptimusTransientBufferDataInterface::UOptimusTransientBufferDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusTransientBufferDataInterface);
UOptimusTransientBufferDataInterface::~UOptimusTransientBufferDataInterface() {}
// End Class UOptimusTransientBufferDataInterface

// Begin Class UOptimusImplicitPersistentBufferDataInterface
void UOptimusImplicitPersistentBufferDataInterface::StaticRegisterNativesUOptimusImplicitPersistentBufferDataInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusImplicitPersistentBufferDataInterface);
UClass* Z_Construct_UClass_UOptimusImplicitPersistentBufferDataInterface_NoRegister()
{
	return UOptimusImplicitPersistentBufferDataInterface::StaticClass();
}
struct Z_Construct_UClass_UOptimusImplicitPersistentBufferDataInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Interface for a implicit persistent buffer. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
		{ "ToolTip", "Compute Framework Data Interface for a implicit persistent buffer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bZeroInitForAtomicWrites_MetaData[] = {
		{ "Comment", "//~ End UComputeDataInterface Interface\n" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bZeroInitForAtomicWrites_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bZeroInitForAtomicWrites;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusImplicitPersistentBufferDataInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UOptimusImplicitPersistentBufferDataInterface_Statics::NewProp_bZeroInitForAtomicWrites_SetBit(void* Obj)
{
	((UOptimusImplicitPersistentBufferDataInterface*)Obj)->bZeroInitForAtomicWrites = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimusImplicitPersistentBufferDataInterface_Statics::NewProp_bZeroInitForAtomicWrites = { "bZeroInitForAtomicWrites", nullptr, (EPropertyFlags)0x0010000000000010, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptimusImplicitPersistentBufferDataInterface), &Z_Construct_UClass_UOptimusImplicitPersistentBufferDataInterface_Statics::NewProp_bZeroInitForAtomicWrites_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bZeroInitForAtomicWrites_MetaData), NewProp_bZeroInitForAtomicWrites_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusImplicitPersistentBufferDataInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusImplicitPersistentBufferDataInterface_Statics::NewProp_bZeroInitForAtomicWrites,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusImplicitPersistentBufferDataInterface_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusImplicitPersistentBufferDataInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusRawBufferDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusImplicitPersistentBufferDataInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusImplicitPersistentBufferDataInterface_Statics::ClassParams = {
	&UOptimusImplicitPersistentBufferDataInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusImplicitPersistentBufferDataInterface_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusImplicitPersistentBufferDataInterface_Statics::PropPointers),
	0,
	0x001100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusImplicitPersistentBufferDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusImplicitPersistentBufferDataInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusImplicitPersistentBufferDataInterface()
{
	if (!Z_Registration_Info_UClass_UOptimusImplicitPersistentBufferDataInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusImplicitPersistentBufferDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusImplicitPersistentBufferDataInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusImplicitPersistentBufferDataInterface.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusImplicitPersistentBufferDataInterface>()
{
	return UOptimusImplicitPersistentBufferDataInterface::StaticClass();
}
UOptimusImplicitPersistentBufferDataInterface::UOptimusImplicitPersistentBufferDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusImplicitPersistentBufferDataInterface);
UOptimusImplicitPersistentBufferDataInterface::~UOptimusImplicitPersistentBufferDataInterface() {}
// End Class UOptimusImplicitPersistentBufferDataInterface

// Begin Class UOptimusPersistentBufferDataInterface
void UOptimusPersistentBufferDataInterface::StaticRegisterNativesUOptimusPersistentBufferDataInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusPersistentBufferDataInterface);
UClass* Z_Construct_UClass_UOptimusPersistentBufferDataInterface_NoRegister()
{
	return UOptimusPersistentBufferDataInterface::StaticClass();
}
struct Z_Construct_UClass_UOptimusPersistentBufferDataInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Interface for a transient buffer. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
		{ "ToolTip", "Compute Framework Data Interface for a transient buffer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResourceName_MetaData[] = {
		{ "Comment", "//~ End UComputeDataInterface Interface\n" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ResourceName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusPersistentBufferDataInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOptimusPersistentBufferDataInterface_Statics::NewProp_ResourceName = { "ResourceName", nullptr, (EPropertyFlags)0x0010000000000010, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusPersistentBufferDataInterface, ResourceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResourceName_MetaData), NewProp_ResourceName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusPersistentBufferDataInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusPersistentBufferDataInterface_Statics::NewProp_ResourceName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusPersistentBufferDataInterface_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptimusPersistentBufferDataInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusRawBufferDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusPersistentBufferDataInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusPersistentBufferDataInterface_Statics::ClassParams = {
	&UOptimusPersistentBufferDataInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptimusPersistentBufferDataInterface_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusPersistentBufferDataInterface_Statics::PropPointers),
	0,
	0x001100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusPersistentBufferDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusPersistentBufferDataInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusPersistentBufferDataInterface()
{
	if (!Z_Registration_Info_UClass_UOptimusPersistentBufferDataInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusPersistentBufferDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusPersistentBufferDataInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusPersistentBufferDataInterface.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusPersistentBufferDataInterface>()
{
	return UOptimusPersistentBufferDataInterface::StaticClass();
}
UOptimusPersistentBufferDataInterface::UOptimusPersistentBufferDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusPersistentBufferDataInterface);
UOptimusPersistentBufferDataInterface::~UOptimusPersistentBufferDataInterface() {}
// End Class UOptimusPersistentBufferDataInterface

// Begin Class UOptimusRawBufferDataProvider
void UOptimusRawBufferDataProvider::StaticRegisterNativesUOptimusRawBufferDataProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusRawBufferDataProvider);
UClass* Z_Construct_UClass_UOptimusRawBufferDataProvider_NoRegister()
{
	return UOptimusRawBufferDataProvider::StaticClass();
}
struct Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Compute Framework Data Provider for a transient buffer. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
		{ "ToolTip", "Compute Framework Data Provider for a transient buffer." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusRawBufferDataProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::ClassParams = {
	&UOptimusRawBufferDataProvider::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusRawBufferDataProvider()
{
	if (!Z_Registration_Info_UClass_UOptimusRawBufferDataProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusRawBufferDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusRawBufferDataProvider.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusRawBufferDataProvider>()
{
	return UOptimusRawBufferDataProvider::StaticClass();
}
UOptimusRawBufferDataProvider::UOptimusRawBufferDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusRawBufferDataProvider);
UOptimusRawBufferDataProvider::~UOptimusRawBufferDataProvider() {}
// End Class UOptimusRawBufferDataProvider

// Begin Class UOptimusTransientBufferDataProvider
void UOptimusTransientBufferDataProvider::StaticRegisterNativesUOptimusTransientBufferDataProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusTransientBufferDataProvider);
UClass* Z_Construct_UClass_UOptimusTransientBufferDataProvider_NoRegister()
{
	return UOptimusTransientBufferDataProvider::StaticClass();
}
struct Z_Construct_UClass_UOptimusTransientBufferDataProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for a transient buffer. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
		{ "ToolTip", "Compute Framework Data Provider for a transient buffer." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusTransientBufferDataProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusTransientBufferDataProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusRawBufferDataProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusTransientBufferDataProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusTransientBufferDataProvider_Statics::ClassParams = {
	&UOptimusTransientBufferDataProvider::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusTransientBufferDataProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusTransientBufferDataProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusTransientBufferDataProvider()
{
	if (!Z_Registration_Info_UClass_UOptimusTransientBufferDataProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusTransientBufferDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusTransientBufferDataProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusTransientBufferDataProvider.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusTransientBufferDataProvider>()
{
	return UOptimusTransientBufferDataProvider::StaticClass();
}
UOptimusTransientBufferDataProvider::UOptimusTransientBufferDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusTransientBufferDataProvider);
UOptimusTransientBufferDataProvider::~UOptimusTransientBufferDataProvider() {}
// End Class UOptimusTransientBufferDataProvider

// Begin Class UOptimusImplicitPersistentBufferDataProvider
void UOptimusImplicitPersistentBufferDataProvider::StaticRegisterNativesUOptimusImplicitPersistentBufferDataProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusImplicitPersistentBufferDataProvider);
UClass* Z_Construct_UClass_UOptimusImplicitPersistentBufferDataProvider_NoRegister()
{
	return UOptimusImplicitPersistentBufferDataProvider::StaticClass();
}
struct Z_Construct_UClass_UOptimusImplicitPersistentBufferDataProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for a transient buffer. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
		{ "ToolTip", "Compute Framework Data Provider for a transient buffer." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusImplicitPersistentBufferDataProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusImplicitPersistentBufferDataProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusRawBufferDataProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusImplicitPersistentBufferDataProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOptimusImplicitPersistentBufferDataProvider_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UOptimusPersistentBufferProvider_NoRegister, (int32)VTABLE_OFFSET(UOptimusImplicitPersistentBufferDataProvider, IOptimusPersistentBufferProvider), false },  // 3109941449
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusImplicitPersistentBufferDataProvider_Statics::ClassParams = {
	&UOptimusImplicitPersistentBufferDataProvider::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusImplicitPersistentBufferDataProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusImplicitPersistentBufferDataProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusImplicitPersistentBufferDataProvider()
{
	if (!Z_Registration_Info_UClass_UOptimusImplicitPersistentBufferDataProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusImplicitPersistentBufferDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusImplicitPersistentBufferDataProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusImplicitPersistentBufferDataProvider.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusImplicitPersistentBufferDataProvider>()
{
	return UOptimusImplicitPersistentBufferDataProvider::StaticClass();
}
UOptimusImplicitPersistentBufferDataProvider::UOptimusImplicitPersistentBufferDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusImplicitPersistentBufferDataProvider);
UOptimusImplicitPersistentBufferDataProvider::~UOptimusImplicitPersistentBufferDataProvider() {}
// End Class UOptimusImplicitPersistentBufferDataProvider

// Begin Class UOptimusPersistentBufferDataProvider
void UOptimusPersistentBufferDataProvider::StaticRegisterNativesUOptimusPersistentBufferDataProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusPersistentBufferDataProvider);
UClass* Z_Construct_UClass_UOptimusPersistentBufferDataProvider_NoRegister()
{
	return UOptimusPersistentBufferDataProvider::StaticClass();
}
struct Z_Construct_UClass_UOptimusPersistentBufferDataProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for a transient buffer. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
		{ "ToolTip", "Compute Framework Data Provider for a transient buffer." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusPersistentBufferDataProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOptimusPersistentBufferDataProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOptimusRawBufferDataProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusPersistentBufferDataProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOptimusPersistentBufferDataProvider_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UOptimusPersistentBufferProvider_NoRegister, (int32)VTABLE_OFFSET(UOptimusPersistentBufferDataProvider, IOptimusPersistentBufferProvider), false },  // 3109941449
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusPersistentBufferDataProvider_Statics::ClassParams = {
	&UOptimusPersistentBufferDataProvider::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusPersistentBufferDataProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusPersistentBufferDataProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptimusPersistentBufferDataProvider()
{
	if (!Z_Registration_Info_UClass_UOptimusPersistentBufferDataProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusPersistentBufferDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusPersistentBufferDataProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptimusPersistentBufferDataProvider.OuterSingleton;
}
template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusPersistentBufferDataProvider>()
{
	return UOptimusPersistentBufferDataProvider::StaticClass();
}
UOptimusPersistentBufferDataProvider::UOptimusPersistentBufferDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusPersistentBufferDataProvider);
UOptimusPersistentBufferDataProvider::~UOptimusPersistentBufferDataProvider() {}
// End Class UOptimusPersistentBufferDataProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceRawBuffer_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOptimusBufferWriteType_StaticEnum, TEXT("EOptimusBufferWriteType"), &Z_Registration_Info_UEnum_EOptimusBufferWriteType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4054972063U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusRawBufferDataInterface, UOptimusRawBufferDataInterface::StaticClass, TEXT("UOptimusRawBufferDataInterface"), &Z_Registration_Info_UClass_UOptimusRawBufferDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusRawBufferDataInterface), 2087660724U) },
		{ Z_Construct_UClass_UOptimusTransientBufferDataInterface, UOptimusTransientBufferDataInterface::StaticClass, TEXT("UOptimusTransientBufferDataInterface"), &Z_Registration_Info_UClass_UOptimusTransientBufferDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusTransientBufferDataInterface), 2743076253U) },
		{ Z_Construct_UClass_UOptimusImplicitPersistentBufferDataInterface, UOptimusImplicitPersistentBufferDataInterface::StaticClass, TEXT("UOptimusImplicitPersistentBufferDataInterface"), &Z_Registration_Info_UClass_UOptimusImplicitPersistentBufferDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusImplicitPersistentBufferDataInterface), 3248916789U) },
		{ Z_Construct_UClass_UOptimusPersistentBufferDataInterface, UOptimusPersistentBufferDataInterface::StaticClass, TEXT("UOptimusPersistentBufferDataInterface"), &Z_Registration_Info_UClass_UOptimusPersistentBufferDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusPersistentBufferDataInterface), 1421170295U) },
		{ Z_Construct_UClass_UOptimusRawBufferDataProvider, UOptimusRawBufferDataProvider::StaticClass, TEXT("UOptimusRawBufferDataProvider"), &Z_Registration_Info_UClass_UOptimusRawBufferDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusRawBufferDataProvider), 2482990376U) },
		{ Z_Construct_UClass_UOptimusTransientBufferDataProvider, UOptimusTransientBufferDataProvider::StaticClass, TEXT("UOptimusTransientBufferDataProvider"), &Z_Registration_Info_UClass_UOptimusTransientBufferDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusTransientBufferDataProvider), 395287135U) },
		{ Z_Construct_UClass_UOptimusImplicitPersistentBufferDataProvider, UOptimusImplicitPersistentBufferDataProvider::StaticClass, TEXT("UOptimusImplicitPersistentBufferDataProvider"), &Z_Registration_Info_UClass_UOptimusImplicitPersistentBufferDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusImplicitPersistentBufferDataProvider), 2114898248U) },
		{ Z_Construct_UClass_UOptimusPersistentBufferDataProvider, UOptimusPersistentBufferDataProvider::StaticClass, TEXT("UOptimusPersistentBufferDataProvider"), &Z_Registration_Info_UClass_UOptimusPersistentBufferDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusPersistentBufferDataProvider), 2458264521U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceRawBuffer_h_3437646686(TEXT("/Script/OptimusCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceRawBuffer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceRawBuffer_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceRawBuffer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceRawBuffer_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
