// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectB3/HitBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitBox() {}
// Cross Module References
	PROJECTB3_API UEnum* Z_Construct_UEnum_ProjectB3_EHitboxEnum();
	UPackage* Z_Construct_UPackage__Script_ProjectB3();
	PROJECTB3_API UClass* Z_Construct_UClass_AHitBox_NoRegister();
	PROJECTB3_API UClass* Z_Construct_UClass_AHitBox();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* EHitboxEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProjectB3_EHitboxEnum, Z_Construct_UPackage__Script_ProjectB3(), TEXT("EHitboxEnum"));
		}
		return Singleton;
	}
	template<> PROJECTB3_API UEnum* StaticEnum<EHitboxEnum>()
	{
		return EHitboxEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHitboxEnum(EHitboxEnum_StaticEnum, TEXT("/Script/ProjectB3"), TEXT("EHitboxEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProjectB3_EHitboxEnum_Hash() { return 810355096U; }
	UEnum* Z_Construct_UEnum_ProjectB3_EHitboxEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProjectB3();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHitboxEnum"), 0, Get_Z_Construct_UEnum_ProjectB3_EHitboxEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHitboxEnum::Strike", (int64)EHitboxEnum::Strike },
				{ "EHitboxEnum::Hurtbox", (int64)EHitboxEnum::Hurtbox },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Hurtbox.DisplayName", "Hurtbox" },
				{ "Hurtbox.Name", "EHitboxEnum::Hurtbox" },
				{ "ModuleRelativePath", "HitBox.h" },
				{ "Strike.DisplayName", "Strike" },
				{ "Strike.Name", "EHitboxEnum::Strike" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProjectB3,
				nullptr,
				"EHitboxEnum",
				"EHitboxEnum",
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
	void AHitBox::StaticRegisterNativesAHitBox()
	{
	}
	UClass* Z_Construct_UClass_AHitBox_NoRegister()
	{
		return AHitBox::StaticClass();
	}
	struct Z_Construct_UClass_AHitBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitboxDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_hitboxDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitboxLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hitboxLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_launchAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_launchAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damageMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_launchMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_launchMultiplier;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_hitboxType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitboxType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_hitboxType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHitBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectB3,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitBox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HitBox.h" },
		{ "ModuleRelativePath", "HitBox.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitBox_Statics::NewProp_hitboxDamage_MetaData[] = {
		{ "Category", "Hitbox" },
		{ "Comment", "//how much damage this hitbox will do\n" },
		{ "ModuleRelativePath", "HitBox.h" },
		{ "ToolTip", "how much damage this hitbox will do" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHitBox_Statics::NewProp_hitboxDamage = { "hitboxDamage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitBox, hitboxDamage), METADATA_PARAMS(Z_Construct_UClass_AHitBox_Statics::NewProp_hitboxDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitBox_Statics::NewProp_hitboxDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitBox_Statics::NewProp_hitboxLocation_MetaData[] = {
		{ "Category", "Hitbox" },
		{ "Comment", "//where the hitbox will spawn\n" },
		{ "ModuleRelativePath", "HitBox.h" },
		{ "ToolTip", "where the hitbox will spawn" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHitBox_Statics::NewProp_hitboxLocation = { "hitboxLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitBox, hitboxLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AHitBox_Statics::NewProp_hitboxLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitBox_Statics::NewProp_hitboxLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitBox_Statics::NewProp_launchAmount_MetaData[] = {
		{ "Category", "Hitbox" },
		{ "ModuleRelativePath", "HitBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHitBox_Statics::NewProp_launchAmount = { "launchAmount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitBox, launchAmount), METADATA_PARAMS(Z_Construct_UClass_AHitBox_Statics::NewProp_launchAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitBox_Statics::NewProp_launchAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitBox_Statics::NewProp_damageMultiplier_MetaData[] = {
		{ "Category", "Hitbox" },
		{ "ModuleRelativePath", "HitBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHitBox_Statics::NewProp_damageMultiplier = { "damageMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitBox, damageMultiplier), METADATA_PARAMS(Z_Construct_UClass_AHitBox_Statics::NewProp_damageMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitBox_Statics::NewProp_damageMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitBox_Statics::NewProp_launchMultiplier_MetaData[] = {
		{ "Category", "Hitbox" },
		{ "ModuleRelativePath", "HitBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHitBox_Statics::NewProp_launchMultiplier = { "launchMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitBox, launchMultiplier), METADATA_PARAMS(Z_Construct_UClass_AHitBox_Statics::NewProp_launchMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitBox_Statics::NewProp_launchMultiplier_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHitBox_Statics::NewProp_hitboxType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitBox_Statics::NewProp_hitboxType_MetaData[] = {
		{ "Category", "Hitbox" },
		{ "Comment", "//type of hitbox\n" },
		{ "ModuleRelativePath", "HitBox.h" },
		{ "ToolTip", "type of hitbox" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AHitBox_Statics::NewProp_hitboxType = { "hitboxType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitBox, hitboxType), Z_Construct_UEnum_ProjectB3_EHitboxEnum, METADATA_PARAMS(Z_Construct_UClass_AHitBox_Statics::NewProp_hitboxType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitBox_Statics::NewProp_hitboxType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHitBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitBox_Statics::NewProp_hitboxDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitBox_Statics::NewProp_hitboxLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitBox_Statics::NewProp_launchAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitBox_Statics::NewProp_damageMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitBox_Statics::NewProp_launchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitBox_Statics::NewProp_hitboxType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitBox_Statics::NewProp_hitboxType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHitBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHitBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHitBox_Statics::ClassParams = {
		&AHitBox::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHitBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHitBox_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHitBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHitBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHitBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHitBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHitBox, 1686311895);
	template<> PROJECTB3_API UClass* StaticClass<AHitBox>()
	{
		return AHitBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHitBox(Z_Construct_UClass_AHitBox, &AHitBox::StaticClass, TEXT("/Script/ProjectB3"), TEXT("AHitBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHitBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
