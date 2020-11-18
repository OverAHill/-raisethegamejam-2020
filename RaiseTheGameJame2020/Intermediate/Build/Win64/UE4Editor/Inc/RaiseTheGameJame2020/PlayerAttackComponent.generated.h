// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef RAISETHEGAMEJAME2020_PlayerAttackComponent_generated_h
#error "PlayerAttackComponent.generated.h already included, missing '#pragma once' in PlayerAttackComponent.h"
#endif
#define RAISETHEGAMEJAME2020_PlayerAttackComponent_generated_h

#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_PlayerAttackComponent_h_16_SPARSE_DATA
#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_PlayerAttackComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSelectTarget); \
	DECLARE_FUNCTION(execAttackTarget); \
	DECLARE_FUNCTION(execOnBoxEndOverlap); \
	DECLARE_FUNCTION(execOnBoxBeginOverlap); \
	DECLARE_FUNCTION(execOnSphereEndOverlap); \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_PlayerAttackComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSelectTarget); \
	DECLARE_FUNCTION(execAttackTarget); \
	DECLARE_FUNCTION(execOnBoxEndOverlap); \
	DECLARE_FUNCTION(execOnBoxBeginOverlap); \
	DECLARE_FUNCTION(execOnSphereEndOverlap); \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_PlayerAttackComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerAttackComponent(); \
	friend struct Z_Construct_UClass_UPlayerAttackComponent_Statics; \
public: \
	DECLARE_CLASS(UPlayerAttackComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RaiseTheGameJame2020"), NO_API) \
	DECLARE_SERIALIZER(UPlayerAttackComponent)


#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_PlayerAttackComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerAttackComponent(); \
	friend struct Z_Construct_UClass_UPlayerAttackComponent_Statics; \
public: \
	DECLARE_CLASS(UPlayerAttackComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RaiseTheGameJame2020"), NO_API) \
	DECLARE_SERIALIZER(UPlayerAttackComponent)


#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_PlayerAttackComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerAttackComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerAttackComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerAttackComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerAttackComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerAttackComponent(UPlayerAttackComponent&&); \
	NO_API UPlayerAttackComponent(const UPlayerAttackComponent&); \
public:


#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_PlayerAttackComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerAttackComponent(UPlayerAttackComponent&&); \
	NO_API UPlayerAttackComponent(const UPlayerAttackComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerAttackComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerAttackComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerAttackComponent)


#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_PlayerAttackComponent_h_16_PRIVATE_PROPERTY_OFFSET
#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_PlayerAttackComponent_h_13_PROLOG
#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_PlayerAttackComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_PlayerAttackComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_PlayerAttackComponent_h_16_SPARSE_DATA \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_PlayerAttackComponent_h_16_RPC_WRAPPERS \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_PlayerAttackComponent_h_16_INCLASS \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_PlayerAttackComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_PlayerAttackComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_PlayerAttackComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_PlayerAttackComponent_h_16_SPARSE_DATA \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_PlayerAttackComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_PlayerAttackComponent_h_16_INCLASS_NO_PURE_DECLS \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_PlayerAttackComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RAISETHEGAMEJAME2020_API UClass* StaticClass<class UPlayerAttackComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_PlayerAttackComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
