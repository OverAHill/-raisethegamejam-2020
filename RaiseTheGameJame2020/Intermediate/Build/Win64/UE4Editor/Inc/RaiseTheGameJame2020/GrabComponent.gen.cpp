// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaiseTheGameJame2020/Public/GrabComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrabComponent() {}
// Cross Module References
	RAISETHEGAMEJAME2020_API UClass* Z_Construct_UClass_UGrabComponent_NoRegister();
	RAISETHEGAMEJAME2020_API UClass* Z_Construct_UClass_UGrabComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_RaiseTheGameJame2020();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGrabComponent::execOnLeaveGrabZone)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLeaveGrabZone(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrabComponent::execOnEnterGrabZone)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnterGrabZone(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void UGrabComponent::StaticRegisterNativesUGrabComponent()
	{
		UClass* Class = UGrabComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEnterGrabZone", &UGrabComponent::execOnEnterGrabZone },
			{ "OnLeaveGrabZone", &UGrabComponent::execOnLeaveGrabZone },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGrabComponent_OnEnterGrabZone_Statics
	{
		struct GrabComponent_eventOnEnterGrabZone_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabComponent_OnEnterGrabZone_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabComponent_eventOnEnterGrabZone_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabComponent_OnEnterGrabZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabComponent_OnEnterGrabZone_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabComponent_OnEnterGrabZone_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//UFUNCTION()\n//void OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);\n" },
		{ "ModuleRelativePath", "Public/GrabComponent.h" },
		{ "ToolTip", "UFUNCTION()\nvoid OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabComponent_OnEnterGrabZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabComponent, nullptr, "OnEnterGrabZone", nullptr, nullptr, sizeof(GrabComponent_eventOnEnterGrabZone_Parms), Z_Construct_UFunction_UGrabComponent_OnEnterGrabZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabComponent_OnEnterGrabZone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabComponent_OnEnterGrabZone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabComponent_OnEnterGrabZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabComponent_OnEnterGrabZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabComponent_OnEnterGrabZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabComponent_OnLeaveGrabZone_Statics
	{
		struct GrabComponent_eventOnLeaveGrabZone_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabComponent_OnLeaveGrabZone_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabComponent_eventOnLeaveGrabZone_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabComponent_OnLeaveGrabZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabComponent_OnLeaveGrabZone_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabComponent_OnLeaveGrabZone_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//UFUNCTION()\n//void OnBoxEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);\n" },
		{ "ModuleRelativePath", "Public/GrabComponent.h" },
		{ "ToolTip", "UFUNCTION()\nvoid OnBoxEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabComponent_OnLeaveGrabZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabComponent, nullptr, "OnLeaveGrabZone", nullptr, nullptr, sizeof(GrabComponent_eventOnLeaveGrabZone_Parms), Z_Construct_UFunction_UGrabComponent_OnLeaveGrabZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabComponent_OnLeaveGrabZone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabComponent_OnLeaveGrabZone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabComponent_OnLeaveGrabZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabComponent_OnLeaveGrabZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabComponent_OnLeaveGrabZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGrabComponent_NoRegister()
	{
		return UGrabComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGrabComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrabComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RaiseTheGameJame2020,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGrabComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGrabComponent_OnEnterGrabZone, "OnEnterGrabZone" }, // 1648853470
		{ &Z_Construct_UFunction_UGrabComponent_OnLeaveGrabZone, "OnLeaveGrabZone" }, // 2720816137
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "GrabComponent.h" },
		{ "ModuleRelativePath", "Public/GrabComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrabComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrabComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGrabComponent_Statics::ClassParams = {
		&UGrabComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGrabComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGrabComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGrabComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGrabComponent, 1020221015);
	template<> RAISETHEGAMEJAME2020_API UClass* StaticClass<UGrabComponent>()
	{
		return UGrabComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGrabComponent(Z_Construct_UClass_UGrabComponent, &UGrabComponent::StaticClass, TEXT("/Script/RaiseTheGameJame2020"), TEXT("UGrabComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrabComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
