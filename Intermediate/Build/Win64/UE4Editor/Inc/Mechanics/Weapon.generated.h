// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef MECHANICS_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define MECHANICS_Weapon_generated_h

#define Mechanics_Source_Mechanics_Public_Weapon_h_14_SPARSE_DATA
#define Mechanics_Source_Mechanics_Public_Weapon_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOverlapEnd); \
	DECLARE_FUNCTION(execOverlapInit);


#define Mechanics_Source_Mechanics_Public_Weapon_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOverlapEnd); \
	DECLARE_FUNCTION(execOverlapInit);


#define Mechanics_Source_Mechanics_Public_Weapon_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mechanics"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define Mechanics_Source_Mechanics_Public_Weapon_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mechanics"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define Mechanics_Source_Mechanics_Public_Weapon_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public:


#define Mechanics_Source_Mechanics_Public_Weapon_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon)


#define Mechanics_Source_Mechanics_Public_Weapon_h_14_PRIVATE_PROPERTY_OFFSET
#define Mechanics_Source_Mechanics_Public_Weapon_h_12_PROLOG
#define Mechanics_Source_Mechanics_Public_Weapon_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mechanics_Source_Mechanics_Public_Weapon_h_14_PRIVATE_PROPERTY_OFFSET \
	Mechanics_Source_Mechanics_Public_Weapon_h_14_SPARSE_DATA \
	Mechanics_Source_Mechanics_Public_Weapon_h_14_RPC_WRAPPERS \
	Mechanics_Source_Mechanics_Public_Weapon_h_14_INCLASS \
	Mechanics_Source_Mechanics_Public_Weapon_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mechanics_Source_Mechanics_Public_Weapon_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mechanics_Source_Mechanics_Public_Weapon_h_14_PRIVATE_PROPERTY_OFFSET \
	Mechanics_Source_Mechanics_Public_Weapon_h_14_SPARSE_DATA \
	Mechanics_Source_Mechanics_Public_Weapon_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Mechanics_Source_Mechanics_Public_Weapon_h_14_INCLASS_NO_PURE_DECLS \
	Mechanics_Source_Mechanics_Public_Weapon_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MECHANICS_API UClass* StaticClass<class AWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mechanics_Source_Mechanics_Public_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
