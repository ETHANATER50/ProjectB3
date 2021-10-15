// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTB3_BasePlayerController_generated_h
#error "BasePlayerController.generated.h already included, missing '#pragma once' in BasePlayerController.h"
#endif
#define PROJECTB3_BasePlayerController_generated_h

#define ProjectB3_Source_ProjectB3_BasePlayerController_h_15_SPARSE_DATA
#define ProjectB3_Source_ProjectB3_BasePlayerController_h_15_RPC_WRAPPERS
#define ProjectB3_Source_ProjectB3_BasePlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectB3_Source_ProjectB3_BasePlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasePlayerController(); \
	friend struct Z_Construct_UClass_ABasePlayerController_Statics; \
public: \
	DECLARE_CLASS(ABasePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectB3"), NO_API) \
	DECLARE_SERIALIZER(ABasePlayerController)


#define ProjectB3_Source_ProjectB3_BasePlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABasePlayerController(); \
	friend struct Z_Construct_UClass_ABasePlayerController_Statics; \
public: \
	DECLARE_CLASS(ABasePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectB3"), NO_API) \
	DECLARE_SERIALIZER(ABasePlayerController)


#define ProjectB3_Source_ProjectB3_BasePlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasePlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasePlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePlayerController(ABasePlayerController&&); \
	NO_API ABasePlayerController(const ABasePlayerController&); \
public:


#define ProjectB3_Source_ProjectB3_BasePlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasePlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePlayerController(ABasePlayerController&&); \
	NO_API ABasePlayerController(const ABasePlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasePlayerController)


#define ProjectB3_Source_ProjectB3_BasePlayerController_h_15_PRIVATE_PROPERTY_OFFSET
#define ProjectB3_Source_ProjectB3_BasePlayerController_h_12_PROLOG
#define ProjectB3_Source_ProjectB3_BasePlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectB3_Source_ProjectB3_BasePlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjectB3_Source_ProjectB3_BasePlayerController_h_15_SPARSE_DATA \
	ProjectB3_Source_ProjectB3_BasePlayerController_h_15_RPC_WRAPPERS \
	ProjectB3_Source_ProjectB3_BasePlayerController_h_15_INCLASS \
	ProjectB3_Source_ProjectB3_BasePlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectB3_Source_ProjectB3_BasePlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectB3_Source_ProjectB3_BasePlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjectB3_Source_ProjectB3_BasePlayerController_h_15_SPARSE_DATA \
	ProjectB3_Source_ProjectB3_BasePlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectB3_Source_ProjectB3_BasePlayerController_h_15_INCLASS_NO_PURE_DECLS \
	ProjectB3_Source_ProjectB3_BasePlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTB3_API UClass* StaticClass<class ABasePlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectB3_Source_ProjectB3_BasePlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
