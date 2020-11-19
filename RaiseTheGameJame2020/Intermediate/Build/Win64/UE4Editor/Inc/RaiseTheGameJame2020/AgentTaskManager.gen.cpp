// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaiseTheGameJame2020/Public/AgentTaskManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAgentTaskManager() {}
// Cross Module References
	RAISETHEGAMEJAME2020_API UClass* Z_Construct_UClass_UAgentTaskManager_NoRegister();
	RAISETHEGAMEJAME2020_API UClass* Z_Construct_UClass_UAgentTaskManager();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_RaiseTheGameJame2020();
// End Cross Module References
	void UAgentTaskManager::StaticRegisterNativesUAgentTaskManager()
	{
	}
	UClass* Z_Construct_UClass_UAgentTaskManager_NoRegister()
	{
		return UAgentTaskManager::StaticClass();
	}
	struct Z_Construct_UClass_UAgentTaskManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAgentTaskManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RaiseTheGameJame2020,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgentTaskManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AgentTaskManager.h" },
		{ "ModuleRelativePath", "Public/AgentTaskManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAgentTaskManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAgentTaskManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAgentTaskManager_Statics::ClassParams = {
		&UAgentTaskManager::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAgentTaskManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAgentTaskManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAgentTaskManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAgentTaskManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAgentTaskManager, 3894180489);
	template<> RAISETHEGAMEJAME2020_API UClass* StaticClass<UAgentTaskManager>()
	{
		return UAgentTaskManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAgentTaskManager(Z_Construct_UClass_UAgentTaskManager, &UAgentTaskManager::StaticClass, TEXT("/Script/RaiseTheGameJame2020"), TEXT("UAgentTaskManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAgentTaskManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
