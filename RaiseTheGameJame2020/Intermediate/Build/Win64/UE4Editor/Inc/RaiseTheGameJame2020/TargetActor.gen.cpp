// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaiseTheGameJame2020/Public/TargetActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetActor() {}
// Cross Module References
	RAISETHEGAMEJAME2020_API UClass* Z_Construct_UClass_ATargetActor_NoRegister();
	RAISETHEGAMEJAME2020_API UClass* Z_Construct_UClass_ATargetActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RaiseTheGameJame2020();
	RAISETHEGAMEJAME2020_API UClass* Z_Construct_UClass_UTaskTarget_NoRegister();
// End Cross Module References
	void ATargetActor::StaticRegisterNativesATargetActor()
	{
	}
	UClass* Z_Construct_UClass_ATargetActor_NoRegister()
	{
		return ATargetActor::StaticClass();
	}
	struct Z_Construct_UClass_ATargetActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATargetActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RaiseTheGameJame2020,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TargetActor.h" },
		{ "ModuleRelativePath", "Public/TargetActor.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATargetActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTaskTarget_NoRegister, (int32)VTABLE_OFFSET(ATargetActor, ITaskTarget), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATargetActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATargetActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATargetActor_Statics::ClassParams = {
		&ATargetActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATargetActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATargetActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATargetActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATargetActor, 2046876898);
	template<> RAISETHEGAMEJAME2020_API UClass* StaticClass<ATargetActor>()
	{
		return ATargetActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATargetActor(Z_Construct_UClass_ATargetActor, &ATargetActor::StaticClass, TEXT("/Script/RaiseTheGameJame2020"), TEXT("ATargetActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATargetActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
