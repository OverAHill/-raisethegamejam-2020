// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaiseTheGameJame2020/Public/TaskTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskTarget() {}
// Cross Module References
	RAISETHEGAMEJAME2020_API UClass* Z_Construct_UClass_UTaskTarget_NoRegister();
	RAISETHEGAMEJAME2020_API UClass* Z_Construct_UClass_UTaskTarget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_RaiseTheGameJame2020();
// End Cross Module References
	void UTaskTarget::StaticRegisterNativesUTaskTarget()
	{
	}
	UClass* Z_Construct_UClass_UTaskTarget_NoRegister()
	{
		return UTaskTarget::StaticClass();
	}
	struct Z_Construct_UClass_UTaskTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTaskTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_RaiseTheGameJame2020,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskTarget_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TaskTarget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTaskTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITaskTarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTaskTarget_Statics::ClassParams = {
		&UTaskTarget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTaskTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTaskTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTaskTarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTaskTarget, 141218913);
	template<> RAISETHEGAMEJAME2020_API UClass* StaticClass<UTaskTarget>()
	{
		return UTaskTarget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTaskTarget(Z_Construct_UClass_UTaskTarget, &UTaskTarget::StaticClass, TEXT("/Script/RaiseTheGameJame2020"), TEXT("UTaskTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskTarget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
