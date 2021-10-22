// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTB3_BaseGameInstance_generated_h
#error "BaseGameInstance.generated.h already included, missing '#pragma once' in BaseGameInstance.h"
#endif
#define PROJECTB3_BaseGameInstance_generated_h

#define ProjectB3_Source_ProjectB3_BaseGameInstance_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerDetails_Statics; \
	PROJECTB3_API static class UScriptStruct* StaticStruct();


template<> PROJECTB3_API UScriptStruct* StaticStruct<struct FPlayerDetails>();

#define ProjectB3_Source_ProjectB3_BaseGameInstance_h_32_SPARSE_DATA
#define ProjectB3_Source_ProjectB3_BaseGameInstance_h_32_RPC_WRAPPERS
#define ProjectB3_Source_ProjectB3_BaseGameInstance_h_32_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectB3_Source_ProjectB3_BaseGameInstance_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseGameInstance(); \
	friend struct Z_Construct_UClass_UBaseGameInstance_Statics; \
public: \
	DECLARE_CLASS(UBaseGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ProjectB3"), NO_API) \
	DECLARE_SERIALIZER(UBaseGameInstance)


#define ProjectB3_Source_ProjectB3_BaseGameInstance_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUBaseGameInstance(); \
	friend struct Z_Construct_UClass_UBaseGameInstance_Statics; \
public: \
	DECLARE_CLASS(UBaseGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ProjectB3"), NO_API) \
	DECLARE_SERIALIZER(UBaseGameInstance)


#define ProjectB3_Source_ProjectB3_BaseGameInstance_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseGameInstance(UBaseGameInstance&&); \
	NO_API UBaseGameInstance(const UBaseGameInstance&); \
public:


#define ProjectB3_Source_ProjectB3_BaseGameInstance_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseGameInstance(UBaseGameInstance&&); \
	NO_API UBaseGameInstance(const UBaseGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseGameInstance)


#define ProjectB3_Source_ProjectB3_BaseGameInstance_h_32_PRIVATE_PROPERTY_OFFSET
#define ProjectB3_Source_ProjectB3_BaseGameInstance_h_29_PROLOG
#define ProjectB3_Source_ProjectB3_BaseGameInstance_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectB3_Source_ProjectB3_BaseGameInstance_h_32_PRIVATE_PROPERTY_OFFSET \
	ProjectB3_Source_ProjectB3_BaseGameInstance_h_32_SPARSE_DATA \
	ProjectB3_Source_ProjectB3_BaseGameInstance_h_32_RPC_WRAPPERS \
	ProjectB3_Source_ProjectB3_BaseGameInstance_h_32_INCLASS \
	ProjectB3_Source_ProjectB3_BaseGameInstance_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectB3_Source_ProjectB3_BaseGameInstance_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectB3_Source_ProjectB3_BaseGameInstance_h_32_PRIVATE_PROPERTY_OFFSET \
	ProjectB3_Source_ProjectB3_BaseGameInstance_h_32_SPARSE_DATA \
	ProjectB3_Source_ProjectB3_BaseGameInstance_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectB3_Source_ProjectB3_BaseGameInstance_h_32_INCLASS_NO_PURE_DECLS \
	ProjectB3_Source_ProjectB3_BaseGameInstance_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTB3_API UClass* StaticClass<class UBaseGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectB3_Source_ProjectB3_BaseGameInstance_h


#define FOREACH_ENUM_CHARACTERCLASS(op) \
	op(CharacterClass::VE_Default) \
	op(CharacterClass::VE_Default2) 

enum class CharacterClass : uint8;
template<> PROJECTB3_API UEnum* StaticEnum<CharacterClass>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
