// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTB3_HitBox_generated_h
#error "HitBox.generated.h already included, missing '#pragma once' in HitBox.h"
#endif
#define PROJECTB3_HitBox_generated_h

#define ProjectB3_Source_ProjectB3_HitBox_h_18_SPARSE_DATA
#define ProjectB3_Source_ProjectB3_HitBox_h_18_RPC_WRAPPERS
#define ProjectB3_Source_ProjectB3_HitBox_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectB3_Source_ProjectB3_HitBox_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHitBox(); \
	friend struct Z_Construct_UClass_AHitBox_Statics; \
public: \
	DECLARE_CLASS(AHitBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectB3"), NO_API) \
	DECLARE_SERIALIZER(AHitBox)


#define ProjectB3_Source_ProjectB3_HitBox_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAHitBox(); \
	friend struct Z_Construct_UClass_AHitBox_Statics; \
public: \
	DECLARE_CLASS(AHitBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectB3"), NO_API) \
	DECLARE_SERIALIZER(AHitBox)


#define ProjectB3_Source_ProjectB3_HitBox_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHitBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHitBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHitBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHitBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHitBox(AHitBox&&); \
	NO_API AHitBox(const AHitBox&); \
public:


#define ProjectB3_Source_ProjectB3_HitBox_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHitBox(AHitBox&&); \
	NO_API AHitBox(const AHitBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHitBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHitBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHitBox)


#define ProjectB3_Source_ProjectB3_HitBox_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__hitboxDamage() { return STRUCT_OFFSET(AHitBox, hitboxDamage); } \
	FORCEINLINE static uint32 __PPO__hitboxLocation() { return STRUCT_OFFSET(AHitBox, hitboxLocation); } \
	FORCEINLINE static uint32 __PPO__launchAmount() { return STRUCT_OFFSET(AHitBox, launchAmount); } \
	FORCEINLINE static uint32 __PPO__damageMultiplier() { return STRUCT_OFFSET(AHitBox, damageMultiplier); } \
	FORCEINLINE static uint32 __PPO__launchMultiplier() { return STRUCT_OFFSET(AHitBox, launchMultiplier); } \
	FORCEINLINE static uint32 __PPO__hitboxType() { return STRUCT_OFFSET(AHitBox, hitboxType); }


#define ProjectB3_Source_ProjectB3_HitBox_h_15_PROLOG
#define ProjectB3_Source_ProjectB3_HitBox_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectB3_Source_ProjectB3_HitBox_h_18_PRIVATE_PROPERTY_OFFSET \
	ProjectB3_Source_ProjectB3_HitBox_h_18_SPARSE_DATA \
	ProjectB3_Source_ProjectB3_HitBox_h_18_RPC_WRAPPERS \
	ProjectB3_Source_ProjectB3_HitBox_h_18_INCLASS \
	ProjectB3_Source_ProjectB3_HitBox_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectB3_Source_ProjectB3_HitBox_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectB3_Source_ProjectB3_HitBox_h_18_PRIVATE_PROPERTY_OFFSET \
	ProjectB3_Source_ProjectB3_HitBox_h_18_SPARSE_DATA \
	ProjectB3_Source_ProjectB3_HitBox_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectB3_Source_ProjectB3_HitBox_h_18_INCLASS_NO_PURE_DECLS \
	ProjectB3_Source_ProjectB3_HitBox_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTB3_API UClass* StaticClass<class AHitBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectB3_Source_ProjectB3_HitBox_h


#define FOREACH_ENUM_EHITBOXENUM(op) \
	op(EHitboxEnum::Strike) \
	op(EHitboxEnum::Hurtbox) 

enum class EHitboxEnum : uint8;
template<> PROJECTB3_API UEnum* StaticEnum<EHitboxEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
