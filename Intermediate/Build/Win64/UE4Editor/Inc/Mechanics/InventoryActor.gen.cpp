// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mechanics/Public/InventoryActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryActor() {}
// Cross Module References
	MECHANICS_API UClass* Z_Construct_UClass_AInventoryActor_NoRegister();
	MECHANICS_API UClass* Z_Construct_UClass_AInventoryActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Mechanics();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MECHANICS_API UClass* Z_Construct_UClass_AItem_NoRegister();
	MECHANICS_API UClass* Z_Construct_UClass_ASword_NoRegister();
	MECHANICS_API UClass* Z_Construct_UClass_APotion_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AInventoryActor::execGetItemSlotAtIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<AItem> *)Z_Param__Result=P_THIS->GetItemSlotAtIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	void AInventoryActor::StaticRegisterNativesAInventoryActor()
	{
		UClass* Class = AInventoryActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetItemSlotAtIndex", &AInventoryActor::execGetItemSlotAtIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AInventoryActor_GetItemSlotAtIndex_Statics
	{
		struct InventoryActor_eventGetItemSlotAtIndex_Parms
		{
			int32 Index;
			TSubclassOf<AItem>  ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AInventoryActor_GetItemSlotAtIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryActor_eventGetItemSlotAtIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AInventoryActor_GetItemSlotAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryActor_eventGetItemSlotAtIndex_Parms, ReturnValue), Z_Construct_UClass_AItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInventoryActor_GetItemSlotAtIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventoryActor_GetItemSlotAtIndex_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventoryActor_GetItemSlotAtIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInventoryActor_GetItemSlotAtIndex_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Item inventory\n" },
		{ "ModuleRelativePath", "Public/InventoryActor.h" },
		{ "ToolTip", "Item inventory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInventoryActor_GetItemSlotAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInventoryActor, nullptr, "GetItemSlotAtIndex", nullptr, nullptr, sizeof(InventoryActor_eventGetItemSlotAtIndex_Parms), Z_Construct_UFunction_AInventoryActor_GetItemSlotAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInventoryActor_GetItemSlotAtIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInventoryActor_GetItemSlotAtIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInventoryActor_GetItemSlotAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInventoryActor_GetItemSlotAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInventoryActor_GetItemSlotAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AInventoryActor_NoRegister()
	{
		return AInventoryActor::StaticClass();
	}
	struct Z_Construct_UClass_AInventoryActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SwordSlots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwordSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SwordSlots;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PotionSlots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PotionSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PotionSlots;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemSlots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemSlots;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInventoryActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mechanics,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AInventoryActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInventoryActor_GetItemSlotAtIndex, "GetItemSlotAtIndex" }, // 2394909339
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventoryActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InventoryActor.h" },
		{ "ModuleRelativePath", "Public/InventoryActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AInventoryActor_Statics::NewProp_SwordSlots_Inner = { "SwordSlots", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASword_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventoryActor_Statics::NewProp_SwordSlots_MetaData[] = {
		{ "Category", "Slots" },
		{ "Comment", "// Slots\n" },
		{ "ModuleRelativePath", "Public/InventoryActor.h" },
		{ "ToolTip", "Slots" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AInventoryActor_Statics::NewProp_SwordSlots = { "SwordSlots", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInventoryActor, SwordSlots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AInventoryActor_Statics::NewProp_SwordSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryActor_Statics::NewProp_SwordSlots_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AInventoryActor_Statics::NewProp_PotionSlots_Inner = { "PotionSlots", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APotion_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventoryActor_Statics::NewProp_PotionSlots_MetaData[] = {
		{ "Category", "Slots" },
		{ "ModuleRelativePath", "Public/InventoryActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AInventoryActor_Statics::NewProp_PotionSlots = { "PotionSlots", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInventoryActor, PotionSlots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AInventoryActor_Statics::NewProp_PotionSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryActor_Statics::NewProp_PotionSlots_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AInventoryActor_Statics::NewProp_ItemSlots_Inner = { "ItemSlots", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventoryActor_Statics::NewProp_ItemSlots_MetaData[] = {
		{ "Category", "Slots" },
		{ "ModuleRelativePath", "Public/InventoryActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AInventoryActor_Statics::NewProp_ItemSlots = { "ItemSlots", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInventoryActor, ItemSlots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AInventoryActor_Statics::NewProp_ItemSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryActor_Statics::NewProp_ItemSlots_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInventoryActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventoryActor_Statics::NewProp_SwordSlots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventoryActor_Statics::NewProp_SwordSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventoryActor_Statics::NewProp_PotionSlots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventoryActor_Statics::NewProp_PotionSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventoryActor_Statics::NewProp_ItemSlots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventoryActor_Statics::NewProp_ItemSlots,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInventoryActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInventoryActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInventoryActor_Statics::ClassParams = {
		&AInventoryActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AInventoryActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInventoryActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInventoryActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInventoryActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInventoryActor, 4101653999);
	template<> MECHANICS_API UClass* StaticClass<AInventoryActor>()
	{
		return AInventoryActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInventoryActor(Z_Construct_UClass_AInventoryActor, &AInventoryActor::StaticClass, TEXT("/Script/Mechanics"), TEXT("AInventoryActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInventoryActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
