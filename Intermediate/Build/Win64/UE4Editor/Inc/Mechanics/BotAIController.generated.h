// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef MECHANICS_BotAIController_generated_h
#error "BotAIController.generated.h already included, missing '#pragma once' in BotAIController.h"
#endif
#define MECHANICS_BotAIController_generated_h

#define Mechanics_Source_Mechanics_Public_BotAIController_h_14_SPARSE_DATA
#define Mechanics_Source_Mechanics_Public_BotAIController_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSeePawn);


#define Mechanics_Source_Mechanics_Public_BotAIController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSeePawn);


#define Mechanics_Source_Mechanics_Public_BotAIController_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABotAIController(); \
	friend struct Z_Construct_UClass_ABotAIController_Statics; \
public: \
	DECLARE_CLASS(ABotAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mechanics"), NO_API) \
	DECLARE_SERIALIZER(ABotAIController)


#define Mechanics_Source_Mechanics_Public_BotAIController_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABotAIController(); \
	friend struct Z_Construct_UClass_ABotAIController_Statics; \
public: \
	DECLARE_CLASS(ABotAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mechanics"), NO_API) \
	DECLARE_SERIALIZER(ABotAIController)


#define Mechanics_Source_Mechanics_Public_BotAIController_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABotAIController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABotAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABotAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABotAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABotAIController(ABotAIController&&); \
	NO_API ABotAIController(const ABotAIController&); \
public:


#define Mechanics_Source_Mechanics_Public_BotAIController_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABotAIController(ABotAIController&&); \
	NO_API ABotAIController(const ABotAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABotAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABotAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABotAIController)


#define Mechanics_Source_Mechanics_Public_BotAIController_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PawnSensingComp() { return STRUCT_OFFSET(ABotAIController, PawnSensingComp); } \
	FORCEINLINE static uint32 __PPO__BehaviorTree() { return STRUCT_OFFSET(ABotAIController, BehaviorTree); } \
	FORCEINLINE static uint32 __PPO__BehaviorTreeComp() { return STRUCT_OFFSET(ABotAIController, BehaviorTreeComp); } \
	FORCEINLINE static uint32 __PPO__BlackBoardComp() { return STRUCT_OFFSET(ABotAIController, BlackBoardComp); } \
	FORCEINLINE static uint32 __PPO__bCanAttackSetted() { return STRUCT_OFFSET(ABotAIController, bCanAttackSetted); }


#define Mechanics_Source_Mechanics_Public_BotAIController_h_12_PROLOG
#define Mechanics_Source_Mechanics_Public_BotAIController_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mechanics_Source_Mechanics_Public_BotAIController_h_14_PRIVATE_PROPERTY_OFFSET \
	Mechanics_Source_Mechanics_Public_BotAIController_h_14_SPARSE_DATA \
	Mechanics_Source_Mechanics_Public_BotAIController_h_14_RPC_WRAPPERS \
	Mechanics_Source_Mechanics_Public_BotAIController_h_14_INCLASS \
	Mechanics_Source_Mechanics_Public_BotAIController_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mechanics_Source_Mechanics_Public_BotAIController_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mechanics_Source_Mechanics_Public_BotAIController_h_14_PRIVATE_PROPERTY_OFFSET \
	Mechanics_Source_Mechanics_Public_BotAIController_h_14_SPARSE_DATA \
	Mechanics_Source_Mechanics_Public_BotAIController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Mechanics_Source_Mechanics_Public_BotAIController_h_14_INCLASS_NO_PURE_DECLS \
	Mechanics_Source_Mechanics_Public_BotAIController_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MECHANICS_API UClass* StaticClass<class ABotAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mechanics_Source_Mechanics_Public_BotAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
