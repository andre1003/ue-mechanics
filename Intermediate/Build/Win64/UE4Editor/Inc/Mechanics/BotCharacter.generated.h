// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MECHANICS_BotCharacter_generated_h
#error "BotCharacter.generated.h already included, missing '#pragma once' in BotCharacter.h"
#endif
#define MECHANICS_BotCharacter_generated_h

#define Mechanics_Source_Mechanics_Public_BotCharacter_h_11_SPARSE_DATA
#define Mechanics_Source_Mechanics_Public_BotCharacter_h_11_RPC_WRAPPERS
#define Mechanics_Source_Mechanics_Public_BotCharacter_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define Mechanics_Source_Mechanics_Public_BotCharacter_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABotCharacter(); \
	friend struct Z_Construct_UClass_ABotCharacter_Statics; \
public: \
	DECLARE_CLASS(ABotCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mechanics"), NO_API) \
	DECLARE_SERIALIZER(ABotCharacter)


#define Mechanics_Source_Mechanics_Public_BotCharacter_h_11_INCLASS \
private: \
	static void StaticRegisterNativesABotCharacter(); \
	friend struct Z_Construct_UClass_ABotCharacter_Statics; \
public: \
	DECLARE_CLASS(ABotCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mechanics"), NO_API) \
	DECLARE_SERIALIZER(ABotCharacter)


#define Mechanics_Source_Mechanics_Public_BotCharacter_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABotCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABotCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABotCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABotCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABotCharacter(ABotCharacter&&); \
	NO_API ABotCharacter(const ABotCharacter&); \
public:


#define Mechanics_Source_Mechanics_Public_BotCharacter_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABotCharacter(ABotCharacter&&); \
	NO_API ABotCharacter(const ABotCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABotCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABotCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABotCharacter)


#define Mechanics_Source_Mechanics_Public_BotCharacter_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BP_Sword() { return STRUCT_OFFSET(ABotCharacter, BP_Sword); } \
	FORCEINLINE static uint32 __PPO__HealthPoints() { return STRUCT_OFFSET(ABotCharacter, HealthPoints); } \
	FORCEINLINE static uint32 __PPO__Armor() { return STRUCT_OFFSET(ABotCharacter, Armor); } \
	FORCEINLINE static uint32 __PPO__MagicResistance() { return STRUCT_OFFSET(ABotCharacter, MagicResistance); } \
	FORCEINLINE static uint32 __PPO__AnimationBlueprint() { return STRUCT_OFFSET(ABotCharacter, AnimationBlueprint); } \
	FORCEINLINE static uint32 __PPO__DeathAnimation() { return STRUCT_OFFSET(ABotCharacter, DeathAnimation); } \
	FORCEINLINE static uint32 __PPO__HitAnimation() { return STRUCT_OFFSET(ABotCharacter, HitAnimation); } \
	FORCEINLINE static uint32 __PPO__AttackAnimation() { return STRUCT_OFFSET(ABotCharacter, AttackAnimation); } \
	FORCEINLINE static uint32 __PPO__RunAnimation() { return STRUCT_OFFSET(ABotCharacter, RunAnimation); } \
	FORCEINLINE static uint32 __PPO__bIsRunning() { return STRUCT_OFFSET(ABotCharacter, bIsRunning); } \
	FORCEINLINE static uint32 __PPO__bCanAttack() { return STRUCT_OFFSET(ABotCharacter, bCanAttack); }


#define Mechanics_Source_Mechanics_Public_BotCharacter_h_9_PROLOG
#define Mechanics_Source_Mechanics_Public_BotCharacter_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mechanics_Source_Mechanics_Public_BotCharacter_h_11_PRIVATE_PROPERTY_OFFSET \
	Mechanics_Source_Mechanics_Public_BotCharacter_h_11_SPARSE_DATA \
	Mechanics_Source_Mechanics_Public_BotCharacter_h_11_RPC_WRAPPERS \
	Mechanics_Source_Mechanics_Public_BotCharacter_h_11_INCLASS \
	Mechanics_Source_Mechanics_Public_BotCharacter_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mechanics_Source_Mechanics_Public_BotCharacter_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mechanics_Source_Mechanics_Public_BotCharacter_h_11_PRIVATE_PROPERTY_OFFSET \
	Mechanics_Source_Mechanics_Public_BotCharacter_h_11_SPARSE_DATA \
	Mechanics_Source_Mechanics_Public_BotCharacter_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Mechanics_Source_Mechanics_Public_BotCharacter_h_11_INCLASS_NO_PURE_DECLS \
	Mechanics_Source_Mechanics_Public_BotCharacter_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MECHANICS_API UClass* StaticClass<class ABotCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mechanics_Source_Mechanics_Public_BotCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
