// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectB3/ProjectB3Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectB3Character() {}
// Cross Module References
	PROJECTB3_API UScriptStruct* Z_Construct_UScriptStruct_FAttack();
	UPackage* Z_Construct_UPackage__Script_ProjectB3();
	PROJECTB3_API UClass* Z_Construct_UClass_AProjectB3Character_NoRegister();
	PROJECTB3_API UClass* Z_Construct_UClass_AProjectB3Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FAttack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROJECTB3_API uint32 Get_Z_Construct_UScriptStruct_FAttack_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttack, Z_Construct_UPackage__Script_ProjectB3(), TEXT("Attack"), sizeof(FAttack), Get_Z_Construct_UScriptStruct_FAttack_Hash());
	}
	return Singleton;
}
template<> PROJECTB3_API UScriptStruct* StaticStruct<FAttack>()
{
	return FAttack::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAttack(FAttack::StaticStruct, TEXT("/Script/ProjectB3"), TEXT("Attack"), false, nullptr, nullptr);
static struct FScriptStruct_ProjectB3_StaticRegisterNativesFAttack
{
	FScriptStruct_ProjectB3_StaticRegisterNativesFAttack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Attack")),new UScriptStruct::TCppStructOps<FAttack>);
	}
} ScriptStruct_ProjectB3_StaticRegisterNativesFAttack;
	struct Z_Construct_UScriptStruct_FAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttack_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjectB3Character.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttack>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttack_Statics::NewProp_damage_MetaData[] = {
		{ "ModuleRelativePath", "ProjectB3Character.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAttack_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttack, damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttack_Statics::NewProp_damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttack_Statics::NewProp_damage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttack_Statics::NewProp_damage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectB3,
		nullptr,
		&NewStructOps,
		"Attack",
		sizeof(FAttack),
		alignof(FAttack),
		Z_Construct_UScriptStruct_FAttack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAttack_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ProjectB3();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Attack"), sizeof(FAttack), Get_Z_Construct_UScriptStruct_FAttack_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAttack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAttack_Hash() { return 1777456902U; }
	DEFINE_FUNCTION(AProjectB3Character::execforwardSmash)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->forwardSmash();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProjectB3Character::execforwardAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->forwardAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProjectB3Character::execstandardAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->standardAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProjectB3Character::execresetDamageCounter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->resetDamageCounter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProjectB3Character::execdetermineDamageCounterValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_damage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->determineDamageCounterValue(Z_Param_damage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProjectB3Character::execMoveRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight(Z_Param_Val);
		P_NATIVE_END;
	}
	void AProjectB3Character::StaticRegisterNativesAProjectB3Character()
	{
		UClass* Class = AProjectB3Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "determineDamageCounterValue", &AProjectB3Character::execdetermineDamageCounterValue },
			{ "forwardAttack", &AProjectB3Character::execforwardAttack },
			{ "forwardSmash", &AProjectB3Character::execforwardSmash },
			{ "MoveRight", &AProjectB3Character::execMoveRight },
			{ "resetDamageCounter", &AProjectB3Character::execresetDamageCounter },
			{ "standardAttack", &AProjectB3Character::execstandardAttack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AProjectB3Character_determineDamageCounterValue_Statics
	{
		struct ProjectB3Character_eventdetermineDamageCounterValue_Parms
		{
			float damage;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damage;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectB3Character_determineDamageCounterValue_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjectB3Character_eventdetermineDamageCounterValue_Parms, damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectB3Character_determineDamageCounterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjectB3Character_eventdetermineDamageCounterValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectB3Character_determineDamageCounterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectB3Character_determineDamageCounterValue_Statics::NewProp_damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectB3Character_determineDamageCounterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectB3Character_determineDamageCounterValue_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//add or subtract damage (add is hurt, subtract is heal)\n" },
		{ "ModuleRelativePath", "ProjectB3Character.h" },
		{ "ToolTip", "add or subtract damage (add is hurt, subtract is heal)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectB3Character_determineDamageCounterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectB3Character, nullptr, "determineDamageCounterValue", nullptr, nullptr, sizeof(ProjectB3Character_eventdetermineDamageCounterValue_Parms), Z_Construct_UFunction_AProjectB3Character_determineDamageCounterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectB3Character_determineDamageCounterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjectB3Character_determineDamageCounterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectB3Character_determineDamageCounterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjectB3Character_determineDamageCounterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProjectB3Character_determineDamageCounterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProjectB3Character_forwardAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectB3Character_forwardAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjectB3Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectB3Character_forwardAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectB3Character, nullptr, "forwardAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjectB3Character_forwardAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectB3Character_forwardAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjectB3Character_forwardAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProjectB3Character_forwardAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProjectB3Character_forwardSmash_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectB3Character_forwardSmash_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjectB3Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectB3Character_forwardSmash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectB3Character, nullptr, "forwardSmash", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjectB3Character_forwardSmash_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectB3Character_forwardSmash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjectB3Character_forwardSmash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProjectB3Character_forwardSmash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProjectB3Character_MoveRight_Statics
	{
		struct ProjectB3Character_eventMoveRight_Parms
		{
			float Val;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectB3Character_MoveRight_Statics::NewProp_Val = { "Val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjectB3Character_eventMoveRight_Parms, Val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectB3Character_MoveRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectB3Character_MoveRight_Statics::NewProp_Val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectB3Character_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called for side to side input */" },
		{ "ModuleRelativePath", "ProjectB3Character.h" },
		{ "ToolTip", "Called for side to side input" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectB3Character_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectB3Character, nullptr, "MoveRight", nullptr, nullptr, sizeof(ProjectB3Character_eventMoveRight_Parms), Z_Construct_UFunction_AProjectB3Character_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectB3Character_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjectB3Character_MoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectB3Character_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjectB3Character_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProjectB3Character_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProjectB3Character_resetDamageCounter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectB3Character_resetDamageCounter_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//reset damage to 0\n" },
		{ "ModuleRelativePath", "ProjectB3Character.h" },
		{ "ToolTip", "reset damage to 0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectB3Character_resetDamageCounter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectB3Character, nullptr, "resetDamageCounter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjectB3Character_resetDamageCounter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectB3Character_resetDamageCounter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjectB3Character_resetDamageCounter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProjectB3Character_resetDamageCounter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProjectB3Character_standardAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectB3Character_standardAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjectB3Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectB3Character_standardAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectB3Character, nullptr, "standardAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjectB3Character_standardAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectB3Character_standardAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjectB3Character_standardAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProjectB3Character_standardAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AProjectB3Character_NoRegister()
	{
		return AProjectB3Character::StaticClass();
	}
	struct Z_Construct_UClass_AProjectB3Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SideViewCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SideViewCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isCharging_MetaData[];
#endif
		static void NewProp_isCharging_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isCharging;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasUsedBasicAttack_MetaData[];
#endif
		static void NewProp_hasUsedBasicAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasUsedBasicAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasUsedForwardAttack_MetaData[];
#endif
		static void NewProp_hasUsedForwardAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasUsedForwardAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isStandardAttacking_MetaData[];
#endif
		static void NewProp_isStandardAttacking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isStandardAttacking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damageCounter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_playerNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectB3Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectB3,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AProjectB3Character_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AProjectB3Character_determineDamageCounterValue, "determineDamageCounterValue" }, // 4144050473
		{ &Z_Construct_UFunction_AProjectB3Character_forwardAttack, "forwardAttack" }, // 1874199290
		{ &Z_Construct_UFunction_AProjectB3Character_forwardSmash, "forwardSmash" }, // 3122525901
		{ &Z_Construct_UFunction_AProjectB3Character_MoveRight, "MoveRight" }, // 2616473805
		{ &Z_Construct_UFunction_AProjectB3Character_resetDamageCounter, "resetDamageCounter" }, // 1847457008
		{ &Z_Construct_UFunction_AProjectB3Character_standardAttack, "standardAttack" }, // 4285733229
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectB3Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ProjectB3Character.h" },
		{ "ModuleRelativePath", "ProjectB3Character.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectB3Character_Statics::NewProp_SideViewCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Side view camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProjectB3Character.h" },
		{ "ToolTip", "Side view camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectB3Character_Statics::NewProp_SideViewCameraComponent = { "SideViewCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectB3Character, SideViewCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectB3Character_Statics::NewProp_SideViewCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectB3Character_Statics::NewProp_SideViewCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectB3Character_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera beside the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProjectB3Character.h" },
		{ "ToolTip", "Camera boom positioning the camera beside the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectB3Character_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectB3Character, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectB3Character_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectB3Character_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectB3Character_Statics::NewProp_isCharging_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "//boolean used to denote charging an attack\n" },
		{ "ModuleRelativePath", "ProjectB3Character.h" },
		{ "ToolTip", "boolean used to denote charging an attack" },
	};
#endif
	void Z_Construct_UClass_AProjectB3Character_Statics::NewProp_isCharging_SetBit(void* Obj)
	{
		((AProjectB3Character*)Obj)->isCharging = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProjectB3Character_Statics::NewProp_isCharging = { "isCharging", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProjectB3Character), &Z_Construct_UClass_AProjectB3Character_Statics::NewProp_isCharging_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProjectB3Character_Statics::NewProp_isCharging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectB3Character_Statics::NewProp_isCharging_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectB3Character_Statics::NewProp_hasUsedBasicAttack_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "ProjectB3Character.h" },
	};
#endif
	void Z_Construct_UClass_AProjectB3Character_Statics::NewProp_hasUsedBasicAttack_SetBit(void* Obj)
	{
		((AProjectB3Character*)Obj)->hasUsedBasicAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProjectB3Character_Statics::NewProp_hasUsedBasicAttack = { "hasUsedBasicAttack", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProjectB3Character), &Z_Construct_UClass_AProjectB3Character_Statics::NewProp_hasUsedBasicAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProjectB3Character_Statics::NewProp_hasUsedBasicAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectB3Character_Statics::NewProp_hasUsedBasicAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectB3Character_Statics::NewProp_hasUsedForwardAttack_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "ProjectB3Character.h" },
	};
#endif
	void Z_Construct_UClass_AProjectB3Character_Statics::NewProp_hasUsedForwardAttack_SetBit(void* Obj)
	{
		((AProjectB3Character*)Obj)->hasUsedForwardAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProjectB3Character_Statics::NewProp_hasUsedForwardAttack = { "hasUsedForwardAttack", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProjectB3Character), &Z_Construct_UClass_AProjectB3Character_Statics::NewProp_hasUsedForwardAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProjectB3Character_Statics::NewProp_hasUsedForwardAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectB3Character_Statics::NewProp_hasUsedForwardAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectB3Character_Statics::NewProp_isStandardAttacking_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "//boolean to trigger standard attacks\n" },
		{ "ModuleRelativePath", "ProjectB3Character.h" },
		{ "ToolTip", "boolean to trigger standard attacks" },
	};
#endif
	void Z_Construct_UClass_AProjectB3Character_Statics::NewProp_isStandardAttacking_SetBit(void* Obj)
	{
		((AProjectB3Character*)Obj)->isStandardAttacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProjectB3Character_Statics::NewProp_isStandardAttacking = { "isStandardAttacking", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProjectB3Character), &Z_Construct_UClass_AProjectB3Character_Statics::NewProp_isStandardAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProjectB3Character_Statics::NewProp_isStandardAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectB3Character_Statics::NewProp_isStandardAttacking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectB3Character_Statics::NewProp_damageCounter_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "//field to store and make visible the amount of damage a character has taken\n" },
		{ "ModuleRelativePath", "ProjectB3Character.h" },
		{ "ToolTip", "field to store and make visible the amount of damage a character has taken" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectB3Character_Statics::NewProp_damageCounter = { "damageCounter", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectB3Character, damageCounter), METADATA_PARAMS(Z_Construct_UClass_AProjectB3Character_Statics::NewProp_damageCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectB3Character_Statics::NewProp_damageCounter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectB3Character_Statics::NewProp_playerNumber_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "ProjectB3Character.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AProjectB3Character_Statics::NewProp_playerNumber = { "playerNumber", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectB3Character, playerNumber), METADATA_PARAMS(Z_Construct_UClass_AProjectB3Character_Statics::NewProp_playerNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectB3Character_Statics::NewProp_playerNumber_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectB3Character_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectB3Character_Statics::NewProp_SideViewCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectB3Character_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectB3Character_Statics::NewProp_isCharging,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectB3Character_Statics::NewProp_hasUsedBasicAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectB3Character_Statics::NewProp_hasUsedForwardAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectB3Character_Statics::NewProp_isStandardAttacking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectB3Character_Statics::NewProp_damageCounter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectB3Character_Statics::NewProp_playerNumber,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectB3Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectB3Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectB3Character_Statics::ClassParams = {
		&AProjectB3Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AProjectB3Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AProjectB3Character_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProjectB3Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectB3Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectB3Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjectB3Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectB3Character, 2898021101);
	template<> PROJECTB3_API UClass* StaticClass<AProjectB3Character>()
	{
		return AProjectB3Character::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectB3Character(Z_Construct_UClass_AProjectB3Character, &AProjectB3Character::StaticClass, TEXT("/Script/ProjectB3"), TEXT("AProjectB3Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectB3Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
