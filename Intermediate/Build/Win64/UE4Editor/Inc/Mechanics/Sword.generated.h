// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef MECHANICS_Sword_generated_h
#error "Sword.generated.h already included, missing '#pragma once' in Sword.h"
#endif
#define MECHANICS_Sword_generated_h

#define Mechanics_Source_Mechanics_Public_Sword_h_14_SPARSE_DATA
#define Mechanics_Source_Mechanics_Public_Sword_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAttack);


#define Mechanics_Source_Mechanics_Public_Sword_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAttack);


#define Mechanics_Source_Mechanics_Public_Sword_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASword(); \
	friend struct Z_Construct_UClass_ASword_Statics; \
public: \
	DECLARE_CLASS(ASword, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mechanics"), NO_API) \
	DECLARE_SERIALIZER(ASword)


#define Mechanics_Source_Mechanics_Public_Sword_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASword(); \
	friend struct Z_Construct_UClass_ASword_Statics; \
public: \
	DECLARE_CLASS(ASword, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mechanics"), NO_API) \
	DECLARE_SERIALIZER(ASword)


#define Mechanics_Source_Mechanics_Public_Sword_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASword(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASword) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASword); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASword); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASword(ASword&&); \
	NO_API ASword(const ASword&); \
public:


#define Mechanics_Source_Mechanics_Public_Sword_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASword(ASword&&); \
	NO_API ASword(const ASword&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASword); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASword); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASword)


#define Mechanics_Source_Mechanics_Public_Sword_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BaseDamage() { return STRUCT_OFFSET(ASword, BaseDamage); } \
	FORCEINLINE static uint32 __PPO__PhysicalDamage() { return STRUCT_OFFSET(ASword, PhysicalDamage); } \
	FORCEINLINE static uint32 __PPO__MagicalDamage() { return STRUCT_OFFSET(ASword, MagicalDamage); } \
	FORCEINLINE static uint32 __PPO__CriticalPercent() { return STRUCT_OFFSET(ASword, CriticalPercent); } \
	FORCEINLINE static uint32 __PPO__CriticalMultiplier() { return STRUCT_OFFSET(ASword, CriticalMultiplier); } \
	FORCEINLINE static uint32 __PPO__ManaCost() { return STRUCT_OFFSET(ASword, ManaCost); } \
	FORCEINLINE static uint32 __PPO__StaminaCost() { return STRUCT_OFFSET(ASword, StaminaCost); }


#define Mechanics_Source_Mechanics_Public_Sword_h_12_PROLOG
#define Mechanics_Source_Mechanics_Public_Sword_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mechanics_Source_Mechanics_Public_Sword_h_14_PRIVATE_PROPERTY_OFFSET \
	Mechanics_Source_Mechanics_Public_Sword_h_14_SPARSE_DATA \
	Mechanics_Source_Mechanics_Public_Sword_h_14_RPC_WRAPPERS \
	Mechanics_Source_Mechanics_Public_Sword_h_14_INCLASS \
	Mechanics_Source_Mechanics_Public_Sword_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mechanics_Source_Mechanics_Public_Sword_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mechanics_Source_Mechanics_Public_Sword_h_14_PRIVATE_PROPERTY_OFFSET \
	Mechanics_Source_Mechanics_Public_Sword_h_14_SPARSE_DATA \
	Mechanics_Source_Mechanics_Public_Sword_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Mechanics_Source_Mechanics_Public_Sword_h_14_INCLASS_NO_PURE_DECLS \
	Mechanics_Source_Mechanics_Public_Sword_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MECHANICS_API UClass* StaticClass<class ASword>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mechanics_Source_Mechanics_Public_Sword_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
