// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTB3_ProjectB3Character_generated_h
#error "ProjectB3Character.generated.h already included, missing '#pragma once' in ProjectB3Character.h"
#endif
#define PROJECTB3_ProjectB3Character_generated_h

#define ProjectB3_Source_ProjectB3_ProjectB3Character_h_10_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAttack_Statics; \
	PROJECTB3_API static class UScriptStruct* StaticStruct();


template<> PROJECTB3_API UScriptStruct* StaticStruct<struct FAttack>();

#define ProjectB3_Source_ProjectB3_ProjectB3Character_h_19_SPARSE_DATA
#define ProjectB3_Source_ProjectB3_ProjectB3Character_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(exechandleLaunch); \
	DECLARE_FUNCTION(execforwardSmash); \
	DECLARE_FUNCTION(execforwardAttack); \
	DECLARE_FUNCTION(execstandardAttackDone); \
	DECLARE_FUNCTION(execstandardAttack); \
	DECLARE_FUNCTION(execresetDamageCounter); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execMoveRight);


#define ProjectB3_Source_ProjectB3_ProjectB3Character_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(exechandleLaunch); \
	DECLARE_FUNCTION(execforwardSmash); \
	DECLARE_FUNCTION(execforwardAttack); \
	DECLARE_FUNCTION(execstandardAttackDone); \
	DECLARE_FUNCTION(execstandardAttack); \
	DECLARE_FUNCTION(execresetDamageCounter); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execMoveRight);


#define ProjectB3_Source_ProjectB3_ProjectB3Character_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectB3Character(); \
	friend struct Z_Construct_UClass_AProjectB3Character_Statics; \
public: \
	DECLARE_CLASS(AProjectB3Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectB3"), NO_API) \
	DECLARE_SERIALIZER(AProjectB3Character)


#define ProjectB3_Source_ProjectB3_ProjectB3Character_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAProjectB3Character(); \
	friend struct Z_Construct_UClass_AProjectB3Character_Statics; \
public: \
	DECLARE_CLASS(AProjectB3Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectB3"), NO_API) \
	DECLARE_SERIALIZER(AProjectB3Character)


#define ProjectB3_Source_ProjectB3_ProjectB3Character_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectB3Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectB3Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectB3Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectB3Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectB3Character(AProjectB3Character&&); \
	NO_API AProjectB3Character(const AProjectB3Character&); \
public:


#define ProjectB3_Source_ProjectB3_ProjectB3Character_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectB3Character(AProjectB3Character&&); \
	NO_API AProjectB3Character(const AProjectB3Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectB3Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectB3Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectB3Character)


#define ProjectB3_Source_ProjectB3_ProjectB3Character_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(AProjectB3Character, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AProjectB3Character, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__isCharging() { return STRUCT_OFFSET(AProjectB3Character, isCharging); } \
	FORCEINLINE static uint32 __PPO__chargeTime() { return STRUCT_OFFSET(AProjectB3Character, chargeTime); } \
	FORCEINLINE static uint32 __PPO__hasUsedBasicAttack() { return STRUCT_OFFSET(AProjectB3Character, hasUsedBasicAttack); } \
	FORCEINLINE static uint32 __PPO__hasUsedForwardAttack() { return STRUCT_OFFSET(AProjectB3Character, hasUsedForwardAttack); } \
	FORCEINLINE static uint32 __PPO__isFacingRight() { return STRUCT_OFFSET(AProjectB3Character, isFacingRight); } \
	FORCEINLINE static uint32 __PPO__playerNumber() { return STRUCT_OFFSET(AProjectB3Character, playerNumber); } \
	FORCEINLINE static uint32 __PPO__isStandardAttacking() { return STRUCT_OFFSET(AProjectB3Character, isStandardAttacking); } \
	FORCEINLINE static uint32 __PPO__damageCounter() { return STRUCT_OFFSET(AProjectB3Character, damageCounter); }


#define ProjectB3_Source_ProjectB3_ProjectB3Character_h_16_PROLOG
#define ProjectB3_Source_ProjectB3_ProjectB3Character_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectB3_Source_ProjectB3_ProjectB3Character_h_19_PRIVATE_PROPERTY_OFFSET \
	ProjectB3_Source_ProjectB3_ProjectB3Character_h_19_SPARSE_DATA \
	ProjectB3_Source_ProjectB3_ProjectB3Character_h_19_RPC_WRAPPERS \
	ProjectB3_Source_ProjectB3_ProjectB3Character_h_19_INCLASS \
	ProjectB3_Source_ProjectB3_ProjectB3Character_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectB3_Source_ProjectB3_ProjectB3Character_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectB3_Source_ProjectB3_ProjectB3Character_h_19_PRIVATE_PROPERTY_OFFSET \
	ProjectB3_Source_ProjectB3_ProjectB3Character_h_19_SPARSE_DATA \
	ProjectB3_Source_ProjectB3_ProjectB3Character_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectB3_Source_ProjectB3_ProjectB3Character_h_19_INCLASS_NO_PURE_DECLS \
	ProjectB3_Source_ProjectB3_ProjectB3Character_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTB3_API UClass* StaticClass<class AProjectB3Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectB3_Source_ProjectB3_ProjectB3Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
