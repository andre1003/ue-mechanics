// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MECHANICS_Potion_generated_h
#error "Potion.generated.h already included, missing '#pragma once' in Potion.h"
#endif
#define MECHANICS_Potion_generated_h

#define Mechanics_Source_Mechanics_Public_Potion_h_11_SPARSE_DATA
#define Mechanics_Source_Mechanics_Public_Potion_h_11_RPC_WRAPPERS
#define Mechanics_Source_Mechanics_Public_Potion_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define Mechanics_Source_Mechanics_Public_Potion_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPotion(); \
	friend struct Z_Construct_UClass_APotion_Statics; \
public: \
	DECLARE_CLASS(APotion, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mechanics"), NO_API) \
	DECLARE_SERIALIZER(APotion)


#define Mechanics_Source_Mechanics_Public_Potion_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAPotion(); \
	friend struct Z_Construct_UClass_APotion_Statics; \
public: \
	DECLARE_CLASS(APotion, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mechanics"), NO_API) \
	DECLARE_SERIALIZER(APotion)


#define Mechanics_Source_Mechanics_Public_Potion_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APotion(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APotion) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APotion); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APotion); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APotion(APotion&&); \
	NO_API APotion(const APotion&); \
public:


#define Mechanics_Source_Mechanics_Public_Potion_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APotion(APotion&&); \
	NO_API APotion(const APotion&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APotion); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APotion); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APotion)


#define Mechanics_Source_Mechanics_Public_Potion_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HealthPoints() { return STRUCT_OFFSET(APotion, HealthPoints); } \
	FORCEINLINE static uint32 __PPO__ManaPoints() { return STRUCT_OFFSET(APotion, ManaPoints); } \
	FORCEINLINE static uint32 __PPO__StaminaPoints() { return STRUCT_OFFSET(APotion, StaminaPoints); }


#define Mechanics_Source_Mechanics_Public_Potion_h_9_PROLOG
#define Mechanics_Source_Mechanics_Public_Potion_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mechanics_Source_Mechanics_Public_Potion_h_11_PRIVATE_PROPERTY_OFFSET \
	Mechanics_Source_Mechanics_Public_Potion_h_11_SPARSE_DATA \
	Mechanics_Source_Mechanics_Public_Potion_h_11_RPC_WRAPPERS \
	Mechanics_Source_Mechanics_Public_Potion_h_11_INCLASS \
	Mechanics_Source_Mechanics_Public_Potion_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mechanics_Source_Mechanics_Public_Potion_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mechanics_Source_Mechanics_Public_Potion_h_11_PRIVATE_PROPERTY_OFFSET \
	Mechanics_Source_Mechanics_Public_Potion_h_11_SPARSE_DATA \
	Mechanics_Source_Mechanics_Public_Potion_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Mechanics_Source_Mechanics_Public_Potion_h_11_INCLASS_NO_PURE_DECLS \
	Mechanics_Source_Mechanics_Public_Potion_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MECHANICS_API UClass* StaticClass<class APotion>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mechanics_Source_Mechanics_Public_Potion_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
