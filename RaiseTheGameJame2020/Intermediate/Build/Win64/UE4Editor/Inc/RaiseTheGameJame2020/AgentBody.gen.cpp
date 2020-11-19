// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaiseTheGameJame2020/Public/AgentBody.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAgentBody() {}
// Cross Module References
	RAISETHEGAMEJAME2020_API UClass* Z_Construct_UClass_AAgentBody_NoRegister();
	RAISETHEGAMEJAME2020_API UClass* Z_Construct_UClass_AAgentBody();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RaiseTheGameJame2020();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AAgentBody::StaticRegisterNativesAAgentBody()
	{
	}
	UClass* Z_Construct_UClass_AAgentBody_NoRegister()
	{
		return AAgentBody::StaticClass();
	}
	struct Z_Construct_UClass_AAgentBody_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actionLocations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_actionLocations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_actionLocations_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAgentBody_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RaiseTheGameJame2020,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgentBody_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AgentBody.h" },
		{ "ModuleRelativePath", "Public/AgentBody.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgentBody_Statics::NewProp_actionLocations_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AgentBody.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAgentBody_Statics::NewProp_actionLocations = { "actionLocations", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAgentBody, actionLocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAgentBody_Statics::NewProp_actionLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAgentBody_Statics::NewProp_actionLocations_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAgentBody_Statics::NewProp_actionLocations_Inner = { "actionLocations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAgentBody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgentBody_Statics::NewProp_actionLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgentBody_Statics::NewProp_actionLocations_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAgentBody_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAgentBody>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAgentBody_Statics::ClassParams = {
		&AAgentBody::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAgentBody_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAgentBody_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAgentBody_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAgentBody_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAgentBody()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAgentBody_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAgentBody, 3012645774);
	template<> RAISETHEGAMEJAME2020_API UClass* StaticClass<AAgentBody>()
	{
		return AAgentBody::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAgentBody(Z_Construct_UClass_AAgentBody, &AAgentBody::StaticClass, TEXT("/Script/RaiseTheGameJame2020"), TEXT("AAgentBody"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAgentBody);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
