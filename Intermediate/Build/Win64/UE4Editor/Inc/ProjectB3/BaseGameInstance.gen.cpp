// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectB3/BaseGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseGameInstance() {}
// Cross Module References
	PROJECTB3_API UEnum* Z_Construct_UEnum_ProjectB3_CharacterClass();
	UPackage* Z_Construct_UPackage__Script_ProjectB3();
	PROJECTB3_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerDetails();
	PROJECTB3_API UClass* Z_Construct_UClass_UBaseGameInstance_NoRegister();
	PROJECTB3_API UClass* Z_Construct_UClass_UBaseGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
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
	uint32 Get_Z_Construct_UEnum_ProjectB3_CharacterClass_Hash() { return 3458993094U; }
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
				{ "CharacterClass::VE_Default", (int64)CharacterClass::VE_Default },
				{ "CharacterClass::VE_Default2", (int64)CharacterClass::VE_Default2 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "//enum to differentiate between characters\n" },
				{ "ModuleRelativePath", "BaseGameInstance.h" },
				{ "ToolTip", "enum to differentiate between characters" },
				{ "VE_Default.DisplayName", "Mannequin" },
				{ "VE_Default.Name", "CharacterClass::VE_Default" },
				{ "VE_Default2.DisplayName", "Mannequin 2" },
				{ "VE_Default2.Name", "CharacterClass::VE_Default2" },
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
class UScriptStruct* FPlayerDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROJECTB3_API uint32 Get_Z_Construct_UScriptStruct_FPlayerDetails_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerDetails, Z_Construct_UPackage__Script_ProjectB3(), TEXT("PlayerDetails"), sizeof(FPlayerDetails), Get_Z_Construct_UScriptStruct_FPlayerDetails_Hash());
	}
	return Singleton;
}
template<> PROJECTB3_API UScriptStruct* StaticStruct<FPlayerDetails>()
{
	return FPlayerDetails::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerDetails(FPlayerDetails::StaticStruct, TEXT("/Script/ProjectB3"), TEXT("PlayerDetails"), false, nullptr, nullptr);
static struct FScriptStruct_ProjectB3_StaticRegisterNativesFPlayerDetails
{
	FScriptStruct_ProjectB3_StaticRegisterNativesFPlayerDetails()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlayerDetails")),new UScriptStruct::TCppStructOps<FPlayerDetails>);
	}
} ScriptStruct_ProjectB3_StaticRegisterNativesFPlayerDetails;
	struct Z_Construct_UScriptStruct_FPlayerDetails_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_characterClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_characterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_characterClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "BaseGameInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerDetails>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerDetails_Statics::NewProp_playerName_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "BaseGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerDetails_Statics::NewProp_playerName = { "playerName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerDetails, playerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerDetails_Statics::NewProp_playerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerDetails_Statics::NewProp_playerName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlayerDetails_Statics::NewProp_characterClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerDetails_Statics::NewProp_characterClass_MetaData[] = {
		{ "Category", "Player References" },
		{ "ModuleRelativePath", "BaseGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlayerDetails_Statics::NewProp_characterClass = { "characterClass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerDetails, characterClass), Z_Construct_UEnum_ProjectB3_CharacterClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerDetails_Statics::NewProp_characterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerDetails_Statics::NewProp_characterClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerDetails_Statics::NewProp_playerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerDetails_Statics::NewProp_characterClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerDetails_Statics::NewProp_characterClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectB3,
		nullptr,
		&NewStructOps,
		"PlayerDetails",
		sizeof(FPlayerDetails),
		alignof(FPlayerDetails),
		Z_Construct_UScriptStruct_FPlayerDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerDetails_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerDetails_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerDetails_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ProjectB3();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerDetails"), sizeof(FPlayerDetails), Get_Z_Construct_UScriptStruct_FPlayerDetails_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerDetails_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerDetails_Hash() { return 3374410642U; }
	void UBaseGameInstance::StaticRegisterNativesUBaseGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UBaseGameInstance_NoRegister()
	{
		return UBaseGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UBaseGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_numPlayers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_players_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_players_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_players;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectB3,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseGameInstance.h" },
		{ "ModuleRelativePath", "BaseGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_numPlayers_MetaData[] = {
		{ "Category", "Player References" },
		{ "ModuleRelativePath", "BaseGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_numPlayers = { "numPlayers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseGameInstance, numPlayers), METADATA_PARAMS(Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_numPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_numPlayers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_players_Inner = { "players", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPlayerDetails, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_players_MetaData[] = {
		{ "Category", "Player References" },
		{ "Comment", "//array of players\n" },
		{ "ModuleRelativePath", "BaseGameInstance.h" },
		{ "ToolTip", "array of players" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_players = { "players", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseGameInstance, players), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_players_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_players_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_numPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_players_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_players,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseGameInstance_Statics::ClassParams = {
		&UBaseGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseGameInstance, 1431821760);
	template<> PROJECTB3_API UClass* StaticClass<UBaseGameInstance>()
	{
		return UBaseGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseGameInstance(Z_Construct_UClass_UBaseGameInstance, &UBaseGameInstance::StaticClass, TEXT("/Script/ProjectB3"), TEXT("UBaseGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
