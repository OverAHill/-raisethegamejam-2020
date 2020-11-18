// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaiseTheGameJame2020/Public/PathfinderComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathfinderComponent() {}
// Cross Module References
	RAISETHEGAMEJAME2020_API UClass* Z_Construct_UClass_UPathfinderComponent_NoRegister();
	RAISETHEGAMEJAME2020_API UClass* Z_Construct_UClass_UPathfinderComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_RaiseTheGameJame2020();
// End Cross Module References
	void UPathfinderComponent::StaticRegisterNativesUPathfinderComponent()
	{
	}
	UClass* Z_Construct_UClass_UPathfinderComponent_NoRegister()
	{
		return UPathfinderComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPathfinderComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPathfinderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RaiseTheGameJame2020,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathfinderComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PathfinderComponent.h" },
		{ "ModuleRelativePath", "Public/PathfinderComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPathfinderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPathfinderComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPathfinderComponent_Statics::ClassParams = {
		&UPathfinderComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPathfinderComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPathfinderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPathfinderComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPathfinderComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPathfinderComponent, 3551056725);
	template<> RAISETHEGAMEJAME2020_API UClass* StaticClass<UPathfinderComponent>()
	{
		return UPathfinderComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPathfinderComponent(Z_Construct_UClass_UPathfinderComponent, &UPathfinderComponent::StaticClass, TEXT("/Script/RaiseTheGameJame2020"), TEXT("UPathfinderComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPathfinderComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
