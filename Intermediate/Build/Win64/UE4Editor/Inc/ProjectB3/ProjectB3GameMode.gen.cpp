// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectB3/ProjectB3GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectB3GameMode() {}
// Cross Module References
	PROJECTB3_API UClass* Z_Construct_UClass_AProjectB3GameMode_NoRegister();
	PROJECTB3_API UClass* Z_Construct_UClass_AProjectB3GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ProjectB3();
// End Cross Module References
	void AProjectB3GameMode::StaticRegisterNativesAProjectB3GameMode()
	{
	}
	UClass* Z_Construct_UClass_AProjectB3GameMode_NoRegister()
	{
		return AProjectB3GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AProjectB3GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_players_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_players;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectB3GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectB3,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectB3GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ProjectB3GameMode.h" },
		{ "ModuleRelativePath", "ProjectB3GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectB3GameMode_Statics::NewProp_players_MetaData[] = {
		{ "Category", "GameMode" },
		{ "ModuleRelativePath", "ProjectB3GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AProjectB3GameMode_Statics::NewProp_players = { "players", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectB3GameMode, players), METADATA_PARAMS(Z_Construct_UClass_AProjectB3GameMode_Statics::NewProp_players_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectB3GameMode_Statics::NewProp_players_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectB3GameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectB3GameMode_Statics::NewProp_players,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectB3GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectB3GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectB3GameMode_Statics::ClassParams = {
		&AProjectB3GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProjectB3GameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AProjectB3GameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AProjectB3GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectB3GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectB3GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjectB3GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectB3GameMode, 2051093499);
	template<> PROJECTB3_API UClass* StaticClass<AProjectB3GameMode>()
	{
		return AProjectB3GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectB3GameMode(Z_Construct_UClass_AProjectB3GameMode, &AProjectB3GameMode::StaticClass, TEXT("/Script/ProjectB3"), TEXT("AProjectB3GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectB3GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
