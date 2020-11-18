// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaiseTheGameJame2020/Public/AgentTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAgentTask() {}
// Cross Module References
	RAISETHEGAMEJAME2020_API UClass* Z_Construct_UClass_UAgentTask_NoRegister();
	RAISETHEGAMEJAME2020_API UClass* Z_Construct_UClass_UAgentTask();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_RaiseTheGameJame2020();
// End Cross Module References
	void UAgentTask::StaticRegisterNativesUAgentTask()
	{
	}
	UClass* Z_Construct_UClass_UAgentTask_NoRegister()
	{
		return UAgentTask::StaticClass();
	}
	struct Z_Construct_UClass_UAgentTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAgentTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_RaiseTheGameJame2020,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAgentTask_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgentTask.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAgentTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAgentTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAgentTask_Statics::ClassParams = {
		&UAgentTask::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAgentTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAgentTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAgentTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAgentTask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAgentTask, 3783012870);
	template<> RAISETHEGAMEJAME2020_API UClass* StaticClass<UAgentTask>()
	{
		return UAgentTask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAgentTask(Z_Construct_UClass_UAgentTask, &UAgentTask::StaticClass, TEXT("/Script/RaiseTheGameJame2020"), TEXT("UAgentTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAgentTask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
