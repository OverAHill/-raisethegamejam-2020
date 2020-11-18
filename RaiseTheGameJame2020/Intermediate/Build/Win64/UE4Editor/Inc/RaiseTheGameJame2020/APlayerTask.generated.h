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
#ifdef RAISETHEGAMEJAME2020_APlayerTask_generated_h
#error "APlayerTask.generated.h already included, missing '#pragma once' in APlayerTask.h"
#endif
#define RAISETHEGAMEJAME2020_APlayerTask_generated_h

#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_APlayerTask_h_13_SPARSE_DATA
#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_APlayerTask_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTaskExitOverlapEnd); \
	DECLARE_FUNCTION(execOnTaskExitOverlapBegin); \
	DECLARE_FUNCTION(execOnTaskEntryOverlapEnd); \
	DECLARE_FUNCTION(execOnTaskEntryOverlapBegin);


#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_APlayerTask_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTaskExitOverlapEnd); \
	DECLARE_FUNCTION(execOnTaskExitOverlapBegin); \
	DECLARE_FUNCTION(execOnTaskEntryOverlapEnd); \
	DECLARE_FUNCTION(execOnTaskEntryOverlapBegin);


#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_APlayerTask_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAPlayerTask(); \
	friend struct Z_Construct_UClass_AAPlayerTask_Statics; \
public: \
	DECLARE_CLASS(AAPlayerTask, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RaiseTheGameJame2020"), NO_API) \
	DECLARE_SERIALIZER(AAPlayerTask)


#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_APlayerTask_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAAPlayerTask(); \
	friend struct Z_Construct_UClass_AAPlayerTask_Statics; \
public: \
	DECLARE_CLASS(AAPlayerTask, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RaiseTheGameJame2020"), NO_API) \
	DECLARE_SERIALIZER(AAPlayerTask)


#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_APlayerTask_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAPlayerTask(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAPlayerTask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAPlayerTask); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAPlayerTask); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAPlayerTask(AAPlayerTask&&); \
	NO_API AAPlayerTask(const AAPlayerTask&); \
public:


#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_APlayerTask_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAPlayerTask(AAPlayerTask&&); \
	NO_API AAPlayerTask(const AAPlayerTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAPlayerTask); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAPlayerTask); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAPlayerTask)


#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_APlayerTask_h_13_PRIVATE_PROPERTY_OFFSET
#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_APlayerTask_h_10_PROLOG
#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_APlayerTask_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_APlayerTask_h_13_PRIVATE_PROPERTY_OFFSET \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_APlayerTask_h_13_SPARSE_DATA \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_APlayerTask_h_13_RPC_WRAPPERS \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_APlayerTask_h_13_INCLASS \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_APlayerTask_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_APlayerTask_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_APlayerTask_h_13_PRIVATE_PROPERTY_OFFSET \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_APlayerTask_h_13_SPARSE_DATA \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_APlayerTask_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_APlayerTask_h_13_INCLASS_NO_PURE_DECLS \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_APlayerTask_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RAISETHEGAMEJAME2020_API UClass* StaticClass<class AAPlayerTask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_APlayerTask_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
