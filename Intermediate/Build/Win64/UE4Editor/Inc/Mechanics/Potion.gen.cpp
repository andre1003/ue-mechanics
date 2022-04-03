// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mechanics/Public/Potion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePotion() {}
// Cross Module References
	MECHANICS_API UClass* Z_Construct_UClass_APotion_NoRegister();
	MECHANICS_API UClass* Z_Construct_UClass_APotion();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Mechanics();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void APotion::StaticRegisterNativesAPotion()
	{
	}
	UClass* Z_Construct_UClass_APotion_NoRegister()
	{
		return APotion::StaticClass();
	}
	struct Z_Construct_UClass_APotion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManaPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ManaPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaminaPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StaminaPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSprite_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemSprite;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APotion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mechanics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APotion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Potion.h" },
		{ "ModuleRelativePath", "Public/Potion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APotion_Statics::NewProp_HealthPoints_MetaData[] = {
		{ "Category", "PotionSettings" },
		{ "ModuleRelativePath", "Public/Potion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APotion_Statics::NewProp_HealthPoints = { "HealthPoints", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APotion, HealthPoints), METADATA_PARAMS(Z_Construct_UClass_APotion_Statics::NewProp_HealthPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APotion_Statics::NewProp_HealthPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APotion_Statics::NewProp_ManaPoints_MetaData[] = {
		{ "Category", "PotionSettings" },
		{ "ModuleRelativePath", "Public/Potion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APotion_Statics::NewProp_ManaPoints = { "ManaPoints", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APotion, ManaPoints), METADATA_PARAMS(Z_Construct_UClass_APotion_Statics::NewProp_ManaPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APotion_Statics::NewProp_ManaPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APotion_Statics::NewProp_StaminaPoints_MetaData[] = {
		{ "Category", "PotionSettings" },
		{ "ModuleRelativePath", "Public/Potion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APotion_Statics::NewProp_StaminaPoints = { "StaminaPoints", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APotion, StaminaPoints), METADATA_PARAMS(Z_Construct_UClass_APotion_Statics::NewProp_StaminaPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APotion_Statics::NewProp_StaminaPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APotion_Statics::NewProp_ItemSprite_MetaData[] = {
		{ "Category", "InventoryImage" },
		{ "ModuleRelativePath", "Public/Potion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APotion_Statics::NewProp_ItemSprite = { "ItemSprite", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APotion, ItemSprite), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APotion_Statics::NewProp_ItemSprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APotion_Statics::NewProp_ItemSprite_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APotion_Statics::NewProp_HealthPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APotion_Statics::NewProp_ManaPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APotion_Statics::NewProp_StaminaPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APotion_Statics::NewProp_ItemSprite,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APotion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APotion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APotion_Statics::ClassParams = {
		&APotion::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APotion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APotion_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APotion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APotion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APotion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APotion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APotion, 613972210);
	template<> MECHANICS_API UClass* StaticClass<APotion>()
	{
		return APotion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APotion(Z_Construct_UClass_APotion, &APotion::StaticClass, TEXT("/Script/Mechanics"), TEXT("APotion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APotion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
