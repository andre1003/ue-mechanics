// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mechanics/Public/BotAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBotAIController() {}
// Cross Module References
	MECHANICS_API UClass* Z_Construct_UClass_ABotAIController_NoRegister();
	MECHANICS_API UClass* Z_Construct_UClass_ABotAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_Mechanics();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABotAIController::execOnSeePawn)
	{
		P_GET_OBJECT(APawn,Z_Param_SensedPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSeePawn(Z_Param_SensedPawn);
		P_NATIVE_END;
	}
	void ABotAIController::StaticRegisterNativesABotAIController()
	{
		UClass* Class = ABotAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSeePawn", &ABotAIController::execOnSeePawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABotAIController_OnSeePawn_Statics
	{
		struct BotAIController_eventOnSeePawn_Parms
		{
			APawn* SensedPawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SensedPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABotAIController_OnSeePawn_Statics::NewProp_SensedPawn = { "SensedPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BotAIController_eventOnSeePawn_Parms, SensedPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABotAIController_OnSeePawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABotAIController_OnSeePawn_Statics::NewProp_SensedPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABotAIController_OnSeePawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BotAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABotAIController_OnSeePawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABotAIController, nullptr, "OnSeePawn", nullptr, nullptr, sizeof(BotAIController_eventOnSeePawn_Parms), Z_Construct_UFunction_ABotAIController_OnSeePawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABotAIController_OnSeePawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABotAIController_OnSeePawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABotAIController_OnSeePawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABotAIController_OnSeePawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABotAIController_OnSeePawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABotAIController_NoRegister()
	{
		return ABotAIController::StaticClass();
	}
	struct Z_Construct_UClass_ABotAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnSensingComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnSensingComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackBoardComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlackBoardComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanAttackSetted_MetaData[];
#endif
		static void NewProp_bCanAttackSetted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanAttackSetted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABotAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Mechanics,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABotAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABotAIController_OnSeePawn, "OnSeePawn" }, // 2884751699
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BotAIController.h" },
		{ "ModuleRelativePath", "Public/BotAIController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotAIController_Statics::NewProp_PawnSensingComp_MetaData[] = {
		{ "Category", "BotAIController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BotAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABotAIController_Statics::NewProp_PawnSensingComp = { "PawnSensingComp", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABotAIController, PawnSensingComp), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABotAIController_Statics::NewProp_PawnSensingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABotAIController_Statics::NewProp_PawnSensingComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotAIController_Statics::NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "BotAIController" },
		{ "ModuleRelativePath", "Public/BotAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABotAIController_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABotAIController, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABotAIController_Statics::NewProp_BehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABotAIController_Statics::NewProp_BehaviorTree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotAIController_Statics::NewProp_BehaviorTreeComp_MetaData[] = {
		{ "Category", "BotAIController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BotAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABotAIController_Statics::NewProp_BehaviorTreeComp = { "BehaviorTreeComp", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABotAIController, BehaviorTreeComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABotAIController_Statics::NewProp_BehaviorTreeComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABotAIController_Statics::NewProp_BehaviorTreeComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotAIController_Statics::NewProp_BlackBoardComp_MetaData[] = {
		{ "Category", "BotAIController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BotAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABotAIController_Statics::NewProp_BlackBoardComp = { "BlackBoardComp", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABotAIController, BlackBoardComp), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABotAIController_Statics::NewProp_BlackBoardComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABotAIController_Statics::NewProp_BlackBoardComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotAIController_Statics::NewProp_bCanAttackSetted_MetaData[] = {
		{ "Category", "BotAIController" },
		{ "ModuleRelativePath", "Public/BotAIController.h" },
	};
#endif
	void Z_Construct_UClass_ABotAIController_Statics::NewProp_bCanAttackSetted_SetBit(void* Obj)
	{
		((ABotAIController*)Obj)->bCanAttackSetted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABotAIController_Statics::NewProp_bCanAttackSetted = { "bCanAttackSetted", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABotAIController), &Z_Construct_UClass_ABotAIController_Statics::NewProp_bCanAttackSetted_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABotAIController_Statics::NewProp_bCanAttackSetted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABotAIController_Statics::NewProp_bCanAttackSetted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABotAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABotAIController_Statics::NewProp_PawnSensingComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABotAIController_Statics::NewProp_BehaviorTree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABotAIController_Statics::NewProp_BehaviorTreeComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABotAIController_Statics::NewProp_BlackBoardComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABotAIController_Statics::NewProp_bCanAttackSetted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABotAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABotAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABotAIController_Statics::ClassParams = {
		&ABotAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABotAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABotAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABotAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABotAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABotAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABotAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABotAIController, 2810982975);
	template<> MECHANICS_API UClass* StaticClass<ABotAIController>()
	{
		return ABotAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABotAIController(Z_Construct_UClass_ABotAIController, &ABotAIController::StaticClass, TEXT("/Script/Mechanics"), TEXT("ABotAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABotAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
