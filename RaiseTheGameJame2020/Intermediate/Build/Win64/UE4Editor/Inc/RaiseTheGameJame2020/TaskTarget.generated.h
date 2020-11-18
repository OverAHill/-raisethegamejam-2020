// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RAISETHEGAMEJAME2020_TaskTarget_generated_h
#error "TaskTarget.generated.h already included, missing '#pragma once' in TaskTarget.h"
#endif
#define RAISETHEGAMEJAME2020_TaskTarget_generated_h

#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_TaskTarget_h_13_SPARSE_DATA
#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_TaskTarget_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetIsAlive); \
	DECLARE_FUNCTION(execSetIsAlive);


#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_TaskTarget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetIsAlive); \
	DECLARE_FUNCTION(execSetIsAlive);


#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_TaskTarget_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RAISETHEGAMEJAME2020_API UTaskTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTaskTarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RAISETHEGAMEJAME2020_API, UTaskTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTaskTarget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	RAISETHEGAMEJAME2020_API UTaskTarget(UTaskTarget&&); \
	RAISETHEGAMEJAME2020_API UTaskTarget(const UTaskTarget&); \
public:


#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_TaskTarget_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RAISETHEGAMEJAME2020_API UTaskTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	RAISETHEGAMEJAME2020_API UTaskTarget(UTaskTarget&&); \
	RAISETHEGAMEJAME2020_API UTaskTarget(const UTaskTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RAISETHEGAMEJAME2020_API, UTaskTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTaskTarget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTaskTarget)


#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_TaskTarget_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTaskTarget(); \
	friend struct Z_Construct_UClass_UTaskTarget_Statics; \
public: \
	DECLARE_CLASS(UTaskTarget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/RaiseTheGameJame2020"), RAISETHEGAMEJAME2020_API) \
	DECLARE_SERIALIZER(UTaskTarget)


#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_TaskTarget_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_TaskTarget_h_13_GENERATED_UINTERFACE_BODY() \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_TaskTarget_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_TaskTarget_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_TaskTarget_h_13_GENERATED_UINTERFACE_BODY() \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_TaskTarget_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_TaskTarget_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITaskTarget() {} \
public: \
	typedef UTaskTarget UClassType; \
	typedef ITaskTarget ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_TaskTarget_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ITaskTarget() {} \
public: \
	typedef UTaskTarget UClassType; \
	typedef ITaskTarget ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_TaskTarget_h_10_PROLOG
#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_TaskTarget_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_TaskTarget_h_13_SPARSE_DATA \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_TaskTarget_h_13_RPC_WRAPPERS \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_TaskTarget_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_TaskTarget_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_TaskTarget_h_13_SPARSE_DATA \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_TaskTarget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_TaskTarget_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RAISETHEGAMEJAME2020_API UClass* StaticClass<class UTaskTarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_TaskTarget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
