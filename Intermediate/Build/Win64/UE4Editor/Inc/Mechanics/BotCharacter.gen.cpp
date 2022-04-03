// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mechanics/Public/BotCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBotCharacter() {}
// Cross Module References
	MECHANICS_API UClass* Z_Construct_UClass_ABotCharacter_NoRegister();
	MECHANICS_API UClass* Z_Construct_UClass_ABotCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Mechanics();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MECHANICS_API UClass* Z_Construct_UClass_ASword_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
// End Cross Module References
	void ABotCharacter::StaticRegisterNativesABotCharacter()
	{
	}
	UClass* Z_Construct_UClass_ABotCharacter_NoRegister()
	{
		return ABotCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ABotCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BP_Sword_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BP_Sword;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Armor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagicResistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MagicResistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AnimationBlueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeathAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeathAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RunAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsRunning_MetaData[];
#endif
		static void NewProp_bIsRunning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRunning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanAttack_MetaData[];
#endif
		static void NewProp_bCanAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanAttack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABotCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Mechanics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BotCharacter.h" },
		{ "ModuleRelativePath", "Public/BotCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotCharacter_Statics::NewProp_BP_Sword_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/BotCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABotCharacter_Statics::NewProp_BP_Sword = { "BP_Sword", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABotCharacter, BP_Sword), Z_Construct_UClass_ASword_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABotCharacter_Statics::NewProp_BP_Sword_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABotCharacter_Statics::NewProp_BP_Sword_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotCharacter_Statics::NewProp_HealthPoints_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/BotCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABotCharacter_Statics::NewProp_HealthPoints = { "HealthPoints", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABotCharacter, HealthPoints), METADATA_PARAMS(Z_Construct_UClass_ABotCharacter_Statics::NewProp_HealthPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABotCharacter_Statics::NewProp_HealthPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotCharacter_Statics::NewProp_Armor_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/BotCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABotCharacter_Statics::NewProp_Armor = { "Armor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABotCharacter, Armor), METADATA_PARAMS(Z_Construct_UClass_ABotCharacter_Statics::NewProp_Armor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABotCharacter_Statics::NewProp_Armor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotCharacter_Statics::NewProp_MagicResistance_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/BotCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABotCharacter_Statics::NewProp_MagicResistance = { "MagicResistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABotCharacter, MagicResistance), METADATA_PARAMS(Z_Construct_UClass_ABotCharacter_Statics::NewProp_MagicResistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABotCharacter_Statics::NewProp_MagicResistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotCharacter_Statics::NewProp_AnimationBlueprint_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/BotCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABotCharacter_Statics::NewProp_AnimationBlueprint = { "AnimationBlueprint", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABotCharacter, AnimationBlueprint), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABotCharacter_Statics::NewProp_AnimationBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABotCharacter_Statics::NewProp_AnimationBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotCharacter_Statics::NewProp_DeathAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/BotCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABotCharacter_Statics::NewProp_DeathAnimation = { "DeathAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABotCharacter, DeathAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABotCharacter_Statics::NewProp_DeathAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABotCharacter_Statics::NewProp_DeathAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotCharacter_Statics::NewProp_HitAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/BotCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABotCharacter_Statics::NewProp_HitAnimation = { "HitAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABotCharacter, HitAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABotCharacter_Statics::NewProp_HitAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABotCharacter_Statics::NewProp_HitAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotCharacter_Statics::NewProp_AttackAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/BotCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABotCharacter_Statics::NewProp_AttackAnimation = { "AttackAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABotCharacter, AttackAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABotCharacter_Statics::NewProp_AttackAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABotCharacter_Statics::NewProp_AttackAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotCharacter_Statics::NewProp_RunAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/BotCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABotCharacter_Statics::NewProp_RunAnimation = { "RunAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABotCharacter, RunAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABotCharacter_Statics::NewProp_RunAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABotCharacter_Statics::NewProp_RunAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotCharacter_Statics::NewProp_bIsRunning_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/BotCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ABotCharacter_Statics::NewProp_bIsRunning_SetBit(void* Obj)
	{
		((ABotCharacter*)Obj)->bIsRunning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABotCharacter_Statics::NewProp_bIsRunning = { "bIsRunning", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABotCharacter), &Z_Construct_UClass_ABotCharacter_Statics::NewProp_bIsRunning_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABotCharacter_Statics::NewProp_bIsRunning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABotCharacter_Statics::NewProp_bIsRunning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotCharacter_Statics::NewProp_bCanAttack_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/BotCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ABotCharacter_Statics::NewProp_bCanAttack_SetBit(void* Obj)
	{
		((ABotCharacter*)Obj)->bCanAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABotCharacter_Statics::NewProp_bCanAttack = { "bCanAttack", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABotCharacter), &Z_Construct_UClass_ABotCharacter_Statics::NewProp_bCanAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABotCharacter_Statics::NewProp_bCanAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABotCharacter_Statics::NewProp_bCanAttack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABotCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABotCharacter_Statics::NewProp_BP_Sword,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABotCharacter_Statics::NewProp_HealthPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABotCharacter_Statics::NewProp_Armor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABotCharacter_Statics::NewProp_MagicResistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABotCharacter_Statics::NewProp_AnimationBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABotCharacter_Statics::NewProp_DeathAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABotCharacter_Statics::NewProp_HitAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABotCharacter_Statics::NewProp_AttackAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABotCharacter_Statics::NewProp_RunAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABotCharacter_Statics::NewProp_bIsRunning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABotCharacter_Statics::NewProp_bCanAttack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABotCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABotCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABotCharacter_Statics::ClassParams = {
		&ABotCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABotCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABotCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABotCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABotCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABotCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABotCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABotCharacter, 3222721967);
	template<> MECHANICS_API UClass* StaticClass<ABotCharacter>()
	{
		return ABotCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABotCharacter(Z_Construct_UClass_ABotCharacter, &ABotCharacter::StaticClass, TEXT("/Script/Mechanics"), TEXT("ABotCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABotCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
