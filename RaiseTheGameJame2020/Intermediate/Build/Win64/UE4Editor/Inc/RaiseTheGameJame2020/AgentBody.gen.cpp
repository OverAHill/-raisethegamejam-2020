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
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAgentBody_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAgentBody>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAgentBody_Statics::ClassParams = {
		&AAgentBody::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(AAgentBody, 1410187108);
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
