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
	DEFINE_FUNCTION(ITaskTarget::execGetIsAlive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsAlive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITaskTarget::execSetIsAlive)
	{
		P_GET_UBOOL(Z_Param_state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsAlive(Z_Param_state);
		P_NATIVE_END;
	}
	void UTaskTarget::StaticRegisterNativesUTaskTarget()
	{
		UClass* Class = UTaskTarget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIsAlive", &ITaskTarget::execGetIsAlive },
			{ "SetIsAlive", &ITaskTarget::execSetIsAlive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTaskTarget_GetIsAlive_Statics
	{
		struct TaskTarget_eventGetIsAlive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTaskTarget_GetIsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TaskTarget_eventGetIsAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTaskTarget_GetIsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TaskTarget_eventGetIsAlive_Parms), &Z_Construct_UFunction_UTaskTarget_GetIsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskTarget_GetIsAlive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskTarget_GetIsAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskTarget_GetIsAlive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TaskTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskTarget_GetIsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskTarget, nullptr, "GetIsAlive", nullptr, nullptr, sizeof(TaskTarget_eventGetIsAlive_Parms), Z_Construct_UFunction_UTaskTarget_GetIsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskTarget_GetIsAlive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTaskTarget_GetIsAlive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskTarget_GetIsAlive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTaskTarget_GetIsAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTaskTarget_GetIsAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTaskTarget_SetIsAlive_Statics
	{
		struct TaskTarget_eventSetIsAlive_Parms
		{
			bool state;
		};
		static void NewProp_state_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTaskTarget_SetIsAlive_Statics::NewProp_state_SetBit(void* Obj)
	{
		((TaskTarget_eventSetIsAlive_Parms*)Obj)->state = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTaskTarget_SetIsAlive_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TaskTarget_eventSetIsAlive_Parms), &Z_Construct_UFunction_UTaskTarget_SetIsAlive_Statics::NewProp_state_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskTarget_SetIsAlive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskTarget_SetIsAlive_Statics::NewProp_state,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTaskTarget_SetIsAlive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TaskTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskTarget_SetIsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskTarget, nullptr, "SetIsAlive", nullptr, nullptr, sizeof(TaskTarget_eventSetIsAlive_Parms), Z_Construct_UFunction_UTaskTarget_SetIsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskTarget_SetIsAlive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTaskTarget_SetIsAlive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskTarget_SetIsAlive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTaskTarget_SetIsAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTaskTarget_SetIsAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTaskTarget_NoRegister()
	{
		return UTaskTarget::StaticClass();
	}
	struct Z_Construct_UClass_UTaskTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_UTaskTarget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTaskTarget_GetIsAlive, "GetIsAlive" }, // 3346917899
		{ &Z_Construct_UFunction_UTaskTarget_SetIsAlive, "SetIsAlive" }, // 290372738
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UTaskTarget, 87663698);
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
