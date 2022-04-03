// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MECHANICS_PlayerAnimInstance_generated_h
#error "PlayerAnimInstance.generated.h already included, missing '#pragma once' in PlayerAnimInstance.h"
#endif
#define MECHANICS_PlayerAnimInstance_generated_h

#define Mechanics_Source_Mechanics_Public_PlayerAnimInstance_h_15_SPARSE_DATA
#define Mechanics_Source_Mechanics_Public_PlayerAnimInstance_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetRootMotion);


#define Mechanics_Source_Mechanics_Public_PlayerAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetRootMotion);


#define Mechanics_Source_Mechanics_Public_PlayerAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerAnimInstance(); \
	friend struct Z_Construct_UClass_UPlayerAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UPlayerAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Mechanics"), NO_API) \
	DECLARE_SERIALIZER(UPlayerAnimInstance)


#define Mechanics_Source_Mechanics_Public_PlayerAnimInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerAnimInstance(); \
	friend struct Z_Construct_UClass_UPlayerAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UPlayerAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Mechanics"), NO_API) \
	DECLARE_SERIALIZER(UPlayerAnimInstance)


#define Mechanics_Source_Mechanics_Public_PlayerAnimInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerAnimInstance(UPlayerAnimInstance&&); \
	NO_API UPlayerAnimInstance(const UPlayerAnimInstance&); \
public:


#define Mechanics_Source_Mechanics_Public_PlayerAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerAnimInstance(UPlayerAnimInstance&&); \
	NO_API UPlayerAnimInstance(const UPlayerAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerAnimInstance)


#define Mechanics_Source_Mechanics_Public_PlayerAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET
#define Mechanics_Source_Mechanics_Public_PlayerAnimInstance_h_12_PROLOG
#define Mechanics_Source_Mechanics_Public_PlayerAnimInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mechanics_Source_Mechanics_Public_PlayerAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	Mechanics_Source_Mechanics_Public_PlayerAnimInstance_h_15_SPARSE_DATA \
	Mechanics_Source_Mechanics_Public_PlayerAnimInstance_h_15_RPC_WRAPPERS \
	Mechanics_Source_Mechanics_Public_PlayerAnimInstance_h_15_INCLASS \
	Mechanics_Source_Mechanics_Public_PlayerAnimInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mechanics_Source_Mechanics_Public_PlayerAnimInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mechanics_Source_Mechanics_Public_PlayerAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	Mechanics_Source_Mechanics_Public_PlayerAnimInstance_h_15_SPARSE_DATA \
	Mechanics_Source_Mechanics_Public_PlayerAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Mechanics_Source_Mechanics_Public_PlayerAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
	Mechanics_Source_Mechanics_Public_PlayerAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MECHANICS_API UClass* StaticClass<class UPlayerAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mechanics_Source_Mechanics_Public_PlayerAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
