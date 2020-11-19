// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaiseTheGameJame2020/RaiseTheGameJame2020Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRaiseTheGameJame2020Character() {}
// Cross Module References
	RAISETHEGAMEJAME2020_API UClass* Z_Construct_UClass_ARaiseTheGameJame2020Character_NoRegister();
	RAISETHEGAMEJAME2020_API UClass* Z_Construct_UClass_ARaiseTheGameJame2020Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_RaiseTheGameJame2020();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARaiseTheGameJame2020Character::execAGetHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->AGetHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARaiseTheGameJame2020Character::execAUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AUpdate(Z_Param_deltaSeconds);
		P_NATIVE_END;
	}
	void ARaiseTheGameJame2020Character::StaticRegisterNativesARaiseTheGameJame2020Character()
	{
		UClass* Class = ARaiseTheGameJame2020Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AGetHealth", &ARaiseTheGameJame2020Character::execAGetHealth },
			{ "AUpdate", &ARaiseTheGameJame2020Character::execAUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARaiseTheGameJame2020Character_AGetHealth_Statics
	{
		struct RaiseTheGameJame2020Character_eventAGetHealth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARaiseTheGameJame2020Character_AGetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RaiseTheGameJame2020Character_eventAGetHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARaiseTheGameJame2020Character_AGetHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARaiseTheGameJame2020Character_AGetHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARaiseTheGameJame2020Character_AGetHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RaiseTheGameJame2020Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARaiseTheGameJame2020Character_AGetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARaiseTheGameJame2020Character, nullptr, "AGetHealth", nullptr, nullptr, sizeof(RaiseTheGameJame2020Character_eventAGetHealth_Parms), Z_Construct_UFunction_ARaiseTheGameJame2020Character_AGetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARaiseTheGameJame2020Character_AGetHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARaiseTheGameJame2020Character_AGetHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARaiseTheGameJame2020Character_AGetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARaiseTheGameJame2020Character_AGetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARaiseTheGameJame2020Character_AGetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARaiseTheGameJame2020Character_AUpdate_Statics
	{
		struct RaiseTheGameJame2020Character_eventAUpdate_Parms
		{
			float deltaSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARaiseTheGameJame2020Character_AUpdate_Statics::NewProp_deltaSeconds = { "deltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RaiseTheGameJame2020Character_eventAUpdate_Parms, deltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARaiseTheGameJame2020Character_AUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARaiseTheGameJame2020Character_AUpdate_Statics::NewProp_deltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARaiseTheGameJame2020Character_AUpdate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Update\n" },
		{ "ModuleRelativePath", "RaiseTheGameJame2020Character.h" },
		{ "ToolTip", "Update" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARaiseTheGameJame2020Character_AUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARaiseTheGameJame2020Character, nullptr, "AUpdate", nullptr, nullptr, sizeof(RaiseTheGameJame2020Character_eventAUpdate_Parms), Z_Construct_UFunction_ARaiseTheGameJame2020Character_AUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARaiseTheGameJame2020Character_AUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARaiseTheGameJame2020Character_AUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARaiseTheGameJame2020Character_AUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARaiseTheGameJame2020Character_AUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARaiseTheGameJame2020Character_AUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARaiseTheGameJame2020Character_NoRegister()
	{
		return ARaiseTheGameJame2020Character::StaticClass();
	}
	struct Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bToggleBloodlustOn_MetaData[];
#endif
		static void NewProp_bToggleBloodlustOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bToggleBloodlustOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncreaseBloodlust_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IncreaseBloodlust;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecreaseBloodlust_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecreaseBloodlust;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBloodlust_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxBloodlust;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentBloodlust_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentBloodlust;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewindParticleSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RewindParticleSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_RaiseTheGameJame2020,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARaiseTheGameJame2020Character_AGetHealth, "AGetHealth" }, // 2711808230
		{ &Z_Construct_UFunction_ARaiseTheGameJame2020Character_AUpdate, "AUpdate" }, // 1279576794
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RaiseTheGameJame2020Character.h" },
		{ "ModuleRelativePath", "RaiseTheGameJame2020Character.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_bToggleBloodlustOn_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "RaiseTheGameJame2020Character.h" },
	};
#endif
	void Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_bToggleBloodlustOn_SetBit(void* Obj)
	{
		((ARaiseTheGameJame2020Character*)Obj)->bToggleBloodlustOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_bToggleBloodlustOn = { "bToggleBloodlustOn", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARaiseTheGameJame2020Character), &Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_bToggleBloodlustOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_bToggleBloodlustOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_bToggleBloodlustOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_IncreaseBloodlust_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "RaiseTheGameJame2020Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_IncreaseBloodlust = { "IncreaseBloodlust", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaiseTheGameJame2020Character, IncreaseBloodlust), METADATA_PARAMS(Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_IncreaseBloodlust_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_IncreaseBloodlust_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_DecreaseBloodlust_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "RaiseTheGameJame2020Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_DecreaseBloodlust = { "DecreaseBloodlust", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaiseTheGameJame2020Character, DecreaseBloodlust), METADATA_PARAMS(Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_DecreaseBloodlust_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_DecreaseBloodlust_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_MaxBloodlust_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "RaiseTheGameJame2020Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_MaxBloodlust = { "MaxBloodlust", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaiseTheGameJame2020Character, MaxBloodlust), METADATA_PARAMS(Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_MaxBloodlust_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_MaxBloodlust_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_CurrentBloodlust_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "RaiseTheGameJame2020Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_CurrentBloodlust = { "CurrentBloodlust", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaiseTheGameJame2020Character, CurrentBloodlust), METADATA_PARAMS(Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_CurrentBloodlust_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_CurrentBloodlust_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_RewindParticleSystem_MetaData[] = {
		{ "Category", "Time Rewind" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RaiseTheGameJame2020Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_RewindParticleSystem = { "RewindParticleSystem", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaiseTheGameJame2020Character, RewindParticleSystem), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_RewindParticleSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_RewindParticleSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "RaiseTheGameJame2020Character.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaiseTheGameJame2020Character, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "RaiseTheGameJame2020Character.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaiseTheGameJame2020Character, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RaiseTheGameJame2020Character.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaiseTheGameJame2020Character, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RaiseTheGameJame2020Character.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaiseTheGameJame2020Character, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_CameraBoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_bToggleBloodlustOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_IncreaseBloodlust,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_DecreaseBloodlust,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_MaxBloodlust,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_CurrentBloodlust,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_RewindParticleSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::NewProp_CameraBoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARaiseTheGameJame2020Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::ClassParams = {
		&ARaiseTheGameJame2020Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARaiseTheGameJame2020Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARaiseTheGameJame2020Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARaiseTheGameJame2020Character, 262828491);
	template<> RAISETHEGAMEJAME2020_API UClass* StaticClass<ARaiseTheGameJame2020Character>()
	{
		return ARaiseTheGameJame2020Character::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARaiseTheGameJame2020Character(Z_Construct_UClass_ARaiseTheGameJame2020Character, &ARaiseTheGameJame2020Character::StaticClass, TEXT("/Script/RaiseTheGameJame2020"), TEXT("ARaiseTheGameJame2020Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARaiseTheGameJame2020Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
