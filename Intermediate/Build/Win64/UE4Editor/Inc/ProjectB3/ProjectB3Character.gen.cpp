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
	PROJECTB3_API UEnum* Z_Construct_UEnum_ProjectB3_CharacterClass();
	UPackage* Z_Construct_UPackage__Script_ProjectB3();
	PROJECTB3_API UScriptStruct* Z_Construct_UScriptStruct_FAttack();
	PROJECTB3_API UClass* Z_Construct_UClass_AProjectB3Character_NoRegister();
	PROJECTB3_API UClass* Z_Construct_UClass_AProjectB3Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	static UEnum* CharacterClass_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProjectB3_CharacterClass, Z_Construct_UPackage__Script_ProjectB3(), TEXT("CharacterClass"));
		}
		return Singleton;
	}
	template<> PROJECTB3_API UEnum* StaticEnum<CharacterClass>()
	{
		return CharacterClass_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_CharacterClass(CharacterClass_StaticEnum, TEXT("/Script/ProjectB3"), TEXT("CharacterClass"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProjectB3_CharacterClass_Hash() { return 1026852785U; }
	UEnum* Z_Construct_UEnum_ProjectB3_CharacterClass()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProjectB3();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("CharacterClass"), 0, Get_Z_Construct_UEnum_ProjectB3_CharacterClass_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CharacterClass::Default", (int64)CharacterClass::Default },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "//enum to differentiate between characters\n" },
				{ "Default.DisplayName", "Mannequin" },
				{ "Default.Name", "CharacterClass::Default" },
				{ "ModuleRelativePath", "ProjectB3Character.h" },
				{ "ToolTip", "enum to differentiate between characters" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProjectB3,
				nullptr,
				"CharacterClass",
				"CharacterClass",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
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
	void AProjectB3Character::StaticRegisterNativesAProjectB3Character()
	{
		UClass* Class = AProjectB3Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "determineDamageCounterValue", &AProjectB3Character::execdetermineDamageCounterValue },
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
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_characterClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_characterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_characterClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isStandardAttacking_MetaData[];
#endif
		static void NewProp_isStandardAttacking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isStandardAttacking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damageCounter;
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AProjectB3Character_Statics::NewProp_characterClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectB3Character_Statics::NewProp_characterClass_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "//field to make class visible and adjustable in blueprints\n" },
		{ "ModuleRelativePath", "ProjectB3Character.h" },
		{ "ToolTip", "field to make class visible and adjustable in blueprints" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AProjectB3Character_Statics::NewProp_characterClass = { "characterClass", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectB3Character, characterClass), Z_Construct_UEnum_ProjectB3_CharacterClass, METADATA_PARAMS(Z_Construct_UClass_AProjectB3Character_Statics::NewProp_characterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectB3Character_Statics::NewProp_characterClass_MetaData)) };
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
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectB3Character_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectB3Character_Statics::NewProp_SideViewCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectB3Character_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectB3Character_Statics::NewProp_isCharging,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectB3Character_Statics::NewProp_hasUsedBasicAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectB3Character_Statics::NewProp_hasUsedForwardAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectB3Character_Statics::NewProp_characterClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectB3Character_Statics::NewProp_characterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectB3Character_Statics::NewProp_isStandardAttacking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectB3Character_Statics::NewProp_damageCounter,
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
	IMPLEMENT_CLASS(AProjectB3Character, 555344152);
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
