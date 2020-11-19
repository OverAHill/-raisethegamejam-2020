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
#ifdef RAISETHEGAMEJAME2020_DetectionZone_generated_h
#error "DetectionZone.generated.h already included, missing '#pragma once' in DetectionZone.h"
#endif
#define RAISETHEGAMEJAME2020_DetectionZone_generated_h

#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_DetectionZone_h_14_SPARSE_DATA
#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_DetectionZone_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleOverlap);


#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_DetectionZone_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleOverlap);


#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_DetectionZone_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADetectionZone(); \
	friend struct Z_Construct_UClass_ADetectionZone_Statics; \
public: \
	DECLARE_CLASS(ADetectionZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RaiseTheGameJame2020"), NO_API) \
	DECLARE_SERIALIZER(ADetectionZone)


#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_DetectionZone_h_14_INCLASS \
private: \
	static void StaticRegisterNativesADetectionZone(); \
	friend struct Z_Construct_UClass_ADetectionZone_Statics; \
public: \
	DECLARE_CLASS(ADetectionZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RaiseTheGameJame2020"), NO_API) \
	DECLARE_SERIALIZER(ADetectionZone)


#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_DetectionZone_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADetectionZone(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADetectionZone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADetectionZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADetectionZone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADetectionZone(ADetectionZone&&); \
	NO_API ADetectionZone(const ADetectionZone&); \
public:


#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_DetectionZone_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADetectionZone(ADetectionZone&&); \
	NO_API ADetectionZone(const ADetectionZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADetectionZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADetectionZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADetectionZone)


#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_DetectionZone_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OverlapComp() { return STRUCT_OFFSET(ADetectionZone, OverlapComp); }


#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_DetectionZone_h_11_PROLOG
#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_DetectionZone_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_DetectionZone_h_14_PRIVATE_PROPERTY_OFFSET \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_DetectionZone_h_14_SPARSE_DATA \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_DetectionZone_h_14_RPC_WRAPPERS \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_DetectionZone_h_14_INCLASS \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_DetectionZone_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_DetectionZone_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_DetectionZone_h_14_PRIVATE_PROPERTY_OFFSET \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_DetectionZone_h_14_SPARSE_DATA \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_DetectionZone_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_DetectionZone_h_14_INCLASS_NO_PURE_DECLS \
	RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_DetectionZone_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RAISETHEGAMEJAME2020_API UClass* StaticClass<class ADetectionZone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RaiseTheGameJame2020_Source_RaiseTheGameJame2020_Public_DetectionZone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
