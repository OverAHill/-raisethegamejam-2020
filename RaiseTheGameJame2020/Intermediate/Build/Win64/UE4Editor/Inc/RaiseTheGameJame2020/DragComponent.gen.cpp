// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RaiseTheGameJame2020/Public/DragComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDragComponent() {}
// Cross Module References
	RAISETHEGAMEJAME2020_API UClass* Z_Construct_UClass_UDragComponent_NoRegister();
	RAISETHEGAMEJAME2020_API UClass* Z_Construct_UClass_UDragComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_RaiseTheGameJame2020();
// End Cross Module References
	void UDragComponent::StaticRegisterNativesUDragComponent()
	{
	}
	UClass* Z_Construct_UClass_UDragComponent_NoRegister()
	{
		return UDragComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDragComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsBeingDragged_MetaData[];
#endif
		static void NewProp_IsBeingDragged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsBeingDragged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDragEnabled_MetaData[];
#endif
		static void NewProp_IsDragEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDragEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDragComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RaiseTheGameJame2020,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DragComponent.h" },
		{ "ModuleRelativePath", "Public/DragComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragComponent_Statics::NewProp_IsBeingDragged_MetaData[] = {
		{ "Category", "DragComponent" },
		{ "ModuleRelativePath", "Public/DragComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDragComponent_Statics::NewProp_IsBeingDragged_SetBit(void* Obj)
	{
		((UDragComponent*)Obj)->IsBeingDragged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDragComponent_Statics::NewProp_IsBeingDragged = { "IsBeingDragged", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDragComponent), &Z_Construct_UClass_UDragComponent_Statics::NewProp_IsBeingDragged_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDragComponent_Statics::NewProp_IsBeingDragged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragComponent_Statics::NewProp_IsBeingDragged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragComponent_Statics::NewProp_IsDragEnabled_MetaData[] = {
		{ "Category", "DragComponent" },
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite)\n//FVector BoxColliderSize;\n" },
		{ "ModuleRelativePath", "Public/DragComponent.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite)\nFVector BoxColliderSize;" },
	};
#endif
	void Z_Construct_UClass_UDragComponent_Statics::NewProp_IsDragEnabled_SetBit(void* Obj)
	{
		((UDragComponent*)Obj)->IsDragEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDragComponent_Statics::NewProp_IsDragEnabled = { "IsDragEnabled", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDragComponent), &Z_Construct_UClass_UDragComponent_Statics::NewProp_IsDragEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDragComponent_Statics::NewProp_IsDragEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragComponent_Statics::NewProp_IsDragEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDragComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragComponent_Statics::NewProp_IsBeingDragged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragComponent_Statics::NewProp_IsDragEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDragComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDragComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDragComponent_Statics::ClassParams = {
		&UDragComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDragComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDragComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDragComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDragComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDragComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDragComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDragComponent, 1343975764);
	template<> RAISETHEGAMEJAME2020_API UClass* StaticClass<UDragComponent>()
	{
		return UDragComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDragComponent(Z_Construct_UClass_UDragComponent, &UDragComponent::StaticClass, TEXT("/Script/RaiseTheGameJame2020"), TEXT("UDragComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDragComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
