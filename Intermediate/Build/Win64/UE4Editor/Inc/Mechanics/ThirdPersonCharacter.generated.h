// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MECHANICS_ThirdPersonCharacter_generated_h
#error "ThirdPersonCharacter.generated.h already included, missing '#pragma once' in ThirdPersonCharacter.h"
#endif
#define MECHANICS_ThirdPersonCharacter_generated_h

#define Mechanics_Source_Mechanics_Public_ThirdPersonCharacter_h_50_SPARSE_DATA
#define Mechanics_Source_Mechanics_Public_ThirdPersonCharacter_h_50_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUsePotion); \
	DECLARE_FUNCTION(execGetIsJumping); \
	DECLARE_FUNCTION(execGetIsDodging); \
	DECLARE_FUNCTION(execGetVerticalMove); \
	DECLARE_FUNCTION(execGetHorizontalMove); \
	DECLARE_FUNCTION(execGetIsMovingVertical); \
	DECLARE_FUNCTION(execGetIsRunning);


#define Mechanics_Source_Mechanics_Public_ThirdPersonCharacter_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUsePotion); \
	DECLARE_FUNCTION(execGetIsJumping); \
	DECLARE_FUNCTION(execGetIsDodging); \
	DECLARE_FUNCTION(execGetVerticalMove); \
	DECLARE_FUNCTION(execGetHorizontalMove); \
	DECLARE_FUNCTION(execGetIsMovingVertical); \
	DECLARE_FUNCTION(execGetIsRunning);


#define Mechanics_Source_Mechanics_Public_ThirdPersonCharacter_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThirdPersonCharacter(); \
	friend struct Z_Construct_UClass_AThirdPersonCharacter_Statics; \
public: \
	DECLARE_CLASS(AThirdPersonCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mechanics"), NO_API) \
	DECLARE_SERIALIZER(AThirdPersonCharacter)


#define Mechanics_Source_Mechanics_Public_ThirdPersonCharacter_h_50_INCLASS \
private: \
	static void StaticRegisterNativesAThirdPersonCharacter(); \
	friend struct Z_Construct_UClass_AThirdPersonCharacter_Statics; \
public: \
	DECLARE_CLASS(AThirdPersonCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mechanics"), NO_API) \
	DECLARE_SERIALIZER(AThirdPersonCharacter)


#define Mechanics_Source_Mechanics_Public_ThirdPersonCharacter_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AThirdPersonCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AThirdPersonCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThirdPersonCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThirdPersonCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThirdPersonCharacter(AThirdPersonCharacter&&); \
	NO_API AThirdPersonCharacter(const AThirdPersonCharacter&); \
public:


#define Mechanics_Source_Mechanics_Public_ThirdPersonCharacter_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThirdPersonCharacter(AThirdPersonCharacter&&); \
	NO_API AThirdPersonCharacter(const AThirdPersonCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThirdPersonCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThirdPersonCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AThirdPersonCharacter)


#define Mechanics_Source_Mechanics_Public_ThirdPersonCharacter_h_50_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__IsRunning() { return STRUCT_OFFSET(AThirdPersonCharacter, IsRunning); } \
	FORCEINLINE static uint32 __PPO__IsJumping() { return STRUCT_OFFSET(AThirdPersonCharacter, IsJumping); } \
	FORCEINLINE static uint32 __PPO__bIsMovingVertical() { return STRUCT_OFFSET(AThirdPersonCharacter, bIsMovingVertical); } \
	FORCEINLINE static uint32 __PPO__bIsMovingHorizontal() { return STRUCT_OFFSET(AThirdPersonCharacter, bIsMovingHorizontal); } \
	FORCEINLINE static uint32 __PPO__HorizontalMove() { return STRUCT_OFFSET(AThirdPersonCharacter, HorizontalMove); } \
	FORCEINLINE static uint32 __PPO__VerticalMove() { return STRUCT_OFFSET(AThirdPersonCharacter, VerticalMove); } \
	FORCEINLINE static uint32 __PPO__IsDodging() { return STRUCT_OFFSET(AThirdPersonCharacter, IsDodging); } \
	FORCEINLINE static uint32 __PPO__CanRun() { return STRUCT_OFFSET(AThirdPersonCharacter, CanRun); } \
	FORCEINLINE static uint32 __PPO__CanAttack() { return STRUCT_OFFSET(AThirdPersonCharacter, CanAttack); } \
	FORCEINLINE static uint32 __PPO__IsAttacking() { return STRUCT_OFFSET(AThirdPersonCharacter, IsAttacking); } \
	FORCEINLINE static uint32 __PPO__EAttackCounter() { return STRUCT_OFFSET(AThirdPersonCharacter, EAttackCounter); } \
	FORCEINLINE static uint32 __PPO__BasicAttackClicks() { return STRUCT_OFFSET(AThirdPersonCharacter, BasicAttackClicks); } \
	FORCEINLINE static uint32 __PPO__HeavyAttackClicks() { return STRUCT_OFFSET(AThirdPersonCharacter, HeavyAttackClicks); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AThirdPersonCharacter, Camera); } \
	FORCEINLINE static uint32 __PPO__SpringArmCamera() { return STRUCT_OFFSET(AThirdPersonCharacter, SpringArmCamera); } \
	FORCEINLINE static uint32 __PPO__bUseWorldLocation() { return STRUCT_OFFSET(AThirdPersonCharacter, bUseWorldLocation); } \
	FORCEINLINE static uint32 __PPO__BoomWorldLocation() { return STRUCT_OFFSET(AThirdPersonCharacter, BoomWorldLocation); } \
	FORCEINLINE static uint32 __PPO__BoomWorldRotation() { return STRUCT_OFFSET(AThirdPersonCharacter, BoomWorldRotation); } \
	FORCEINLINE static uint32 __PPO__PlayerStatus() { return STRUCT_OFFSET(AThirdPersonCharacter, PlayerStatus); } \
	FORCEINLINE static uint32 __PPO__WalkStatus() { return STRUCT_OFFSET(AThirdPersonCharacter, WalkStatus); } \
	FORCEINLINE static uint32 __PPO__BP_Sword() { return STRUCT_OFFSET(AThirdPersonCharacter, BP_Sword); } \
	FORCEINLINE static uint32 __PPO__bIsSwordSheathed() { return STRUCT_OFFSET(AThirdPersonCharacter, bIsSwordSheathed); } \
	FORCEINLINE static uint32 __PPO__BP_Inventory() { return STRUCT_OFFSET(AThirdPersonCharacter, BP_Inventory); } \
	FORCEINLINE static uint32 __PPO__InventoryIndex() { return STRUCT_OFFSET(AThirdPersonCharacter, InventoryIndex); } \
	FORCEINLINE static uint32 __PPO__InventoryUIClass() { return STRUCT_OFFSET(AThirdPersonCharacter, InventoryUIClass); } \
	FORCEINLINE static uint32 __PPO__CurrentWidget() { return STRUCT_OFFSET(AThirdPersonCharacter, CurrentWidget); } \
	FORCEINLINE static uint32 __PPO__bIsInventoryOpen() { return STRUCT_OFFSET(AThirdPersonCharacter, bIsInventoryOpen); } \
	FORCEINLINE static uint32 __PPO__DeathAnimation() { return STRUCT_OFFSET(AThirdPersonCharacter, DeathAnimation); } \
	FORCEINLINE static uint32 __PPO__HealthPoints() { return STRUCT_OFFSET(AThirdPersonCharacter, HealthPoints); } \
	FORCEINLINE static uint32 __PPO__ManaPoints() { return STRUCT_OFFSET(AThirdPersonCharacter, ManaPoints); } \
	FORCEINLINE static uint32 __PPO__StaminaPoints() { return STRUCT_OFFSET(AThirdPersonCharacter, StaminaPoints); }


#define Mechanics_Source_Mechanics_Public_ThirdPersonCharacter_h_48_PROLOG
#define Mechanics_Source_Mechanics_Public_ThirdPersonCharacter_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mechanics_Source_Mechanics_Public_ThirdPersonCharacter_h_50_PRIVATE_PROPERTY_OFFSET \
	Mechanics_Source_Mechanics_Public_ThirdPersonCharacter_h_50_SPARSE_DATA \
	Mechanics_Source_Mechanics_Public_ThirdPersonCharacter_h_50_RPC_WRAPPERS \
	Mechanics_Source_Mechanics_Public_ThirdPersonCharacter_h_50_INCLASS \
	Mechanics_Source_Mechanics_Public_ThirdPersonCharacter_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mechanics_Source_Mechanics_Public_ThirdPersonCharacter_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mechanics_Source_Mechanics_Public_ThirdPersonCharacter_h_50_PRIVATE_PROPERTY_OFFSET \
	Mechanics_Source_Mechanics_Public_ThirdPersonCharacter_h_50_SPARSE_DATA \
	Mechanics_Source_Mechanics_Public_ThirdPersonCharacter_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	Mechanics_Source_Mechanics_Public_ThirdPersonCharacter_h_50_INCLASS_NO_PURE_DECLS \
	Mechanics_Source_Mechanics_Public_ThirdPersonCharacter_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MECHANICS_API UClass* StaticClass<class AThirdPersonCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mechanics_Source_Mechanics_Public_ThirdPersonCharacter_h


#define FOREACH_ENUM_EWALK(op) \
	op(WalkingForward) \
	op(WalkingBackward) \
	op(WalkingRight) \
	op(WalkingLeft) \
	op(CrouchingForward) \
	op(CrouchingBackward) \
	op(CrouchingRight) \
	op(CrouchingLeft) \
	op(NoWalk) 
#define FOREACH_ENUM_EATTACK(op) \
	op(None) \
	op(BasicAttack1) \
	op(BasicAttack2) \
	op(BasicAttack3) \
	op(HeavyAttack1) 
#define FOREACH_ENUM_EPLAYERSTATUS(op) \
	op(Idle) \
	op(Walking) \
	op(Running) \
	op(Jumping) \
	op(Crouching) \
	op(Dodging) \
	op(Sheath) \
	op(Withdraw) \
	op(NoAnim) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
