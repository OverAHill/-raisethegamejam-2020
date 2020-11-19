// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaiseTheGameJame2020/Public/HideComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHideComponent() {}
// Cross Module References
	RAISETHEGAMEJAME2020_API UClass* Z_Construct_UClass_UHideComponent_NoRegister();
	RAISETHEGAMEJAME2020_API UClass* Z_Construct_UClass_UHideComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_RaiseTheGameJame2020();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHideComponent::execOnActorEnterHideZone)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorEnterHideZone(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void UHideComponent::StaticRegisterNativesUHideComponent()
	{
		UClass* Class = UHideComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnActorEnterHideZone", &UHideComponent::execOnActorEnterHideZone },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHideComponent_OnActorEnterHideZone_Statics
	{
		struct HideComponent_eventOnActorEnterHideZone_Parms
		{
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHideComponent_OnActorEnterHideZone_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HideComponent_eventOnActorEnterHideZone_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHideComponent_OnActorEnterHideZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHideComponent_OnActorEnterHideZone_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHideComponent_OnActorEnterHideZone_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//UFUNCTION()\n//void OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);\n" },
		{ "ModuleRelativePath", "Public/HideComponent.h" },
		{ "ToolTip", "UFUNCTION()\nvoid OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHideComponent_OnActorEnterHideZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHideComponent, nullptr, "OnActorEnterHideZone", nullptr, nullptr, sizeof(HideComponent_eventOnActorEnterHideZone_Parms), Z_Construct_UFunction_UHideComponent_OnActorEnterHideZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHideComponent_OnActorEnterHideZone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHideComponent_OnActorEnterHideZone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHideComponent_OnActorEnterHideZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHideComponent_OnActorEnterHideZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHideComponent_OnActorEnterHideZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHideComponent_NoRegister()
	{
		return UHideComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHideComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxColliderSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxColliderSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaBoxCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AreaBoxCollider;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHideComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RaiseTheGameJame2020,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHideComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHideComponent_OnActorEnterHideZone, "OnActorEnterHideZone" }, // 58543722
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHideComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "HideComponent.h" },
		{ "ModuleRelativePath", "Public/HideComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHideComponent_Statics::NewProp_BoxColliderSize_MetaData[] = {
		{ "Category", "HideComponent" },
		{ "ModuleRelativePath", "Public/HideComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHideComponent_Statics::NewProp_BoxColliderSize = { "BoxColliderSize", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHideComponent, BoxColliderSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UHideComponent_Statics::NewProp_BoxColliderSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHideComponent_Statics::NewProp_BoxColliderSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHideComponent_Statics::NewProp_AreaBoxCollider_MetaData[] = {
		{ "Category", "HideComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HideComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHideComponent_Statics::NewProp_AreaBoxCollider = { "AreaBoxCollider", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHideComponent, AreaBoxCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHideComponent_Statics::NewProp_AreaBoxCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHideComponent_Statics::NewProp_AreaBoxCollider_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHideComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHideComponent_Statics::NewProp_BoxColliderSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHideComponent_Statics::NewProp_AreaBoxCollider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHideComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHideComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHideComponent_Statics::ClassParams = {
		&UHideComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHideComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHideComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHideComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHideComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHideComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHideComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHideComponent, 3710378253);
	template<> RAISETHEGAMEJAME2020_API UClass* StaticClass<UHideComponent>()
	{
		return UHideComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHideComponent(Z_Construct_UClass_UHideComponent, &UHideComponent::StaticClass, TEXT("/Script/RaiseTheGameJame2020"), TEXT("UHideComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHideComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
