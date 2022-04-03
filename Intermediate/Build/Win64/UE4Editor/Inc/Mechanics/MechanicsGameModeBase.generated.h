// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MECHANICS_MechanicsGameModeBase_generated_h
#error "MechanicsGameModeBase.generated.h already included, missing '#pragma once' in MechanicsGameModeBase.h"
#endif
#define MECHANICS_MechanicsGameModeBase_generated_h

#define Mechanics_Source_Mechanics_MechanicsGameModeBase_h_14_SPARSE_DATA
#define Mechanics_Source_Mechanics_MechanicsGameModeBase_h_14_RPC_WRAPPERS
#define Mechanics_Source_Mechanics_MechanicsGameModeBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Mechanics_Source_Mechanics_MechanicsGameModeBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMechanicsGameModeBase(); \
	friend struct Z_Construct_UClass_AMechanicsGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMechanicsGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mechanics"), NO_API) \
	DECLARE_SERIALIZER(AMechanicsGameModeBase)


#define Mechanics_Source_Mechanics_MechanicsGameModeBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMechanicsGameModeBase(); \
	friend struct Z_Construct_UClass_AMechanicsGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMechanicsGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mechanics"), NO_API) \
	DECLARE_SERIALIZER(AMechanicsGameModeBase)


#define Mechanics_Source_Mechanics_MechanicsGameModeBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMechanicsGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMechanicsGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMechanicsGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMechanicsGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMechanicsGameModeBase(AMechanicsGameModeBase&&); \
	NO_API AMechanicsGameModeBase(const AMechanicsGameModeBase&); \
public:


#define Mechanics_Source_Mechanics_MechanicsGameModeBase_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMechanicsGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMechanicsGameModeBase(AMechanicsGameModeBase&&); \
	NO_API AMechanicsGameModeBase(const AMechanicsGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMechanicsGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMechanicsGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMechanicsGameModeBase)


#define Mechanics_Source_Mechanics_MechanicsGameModeBase_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerHUDClass() { return STRUCT_OFFSET(AMechanicsGameModeBase, PlayerHUDClass); } \
	FORCEINLINE static uint32 __PPO__CurrentWidget() { return STRUCT_OFFSET(AMechanicsGameModeBase, CurrentWidget); }


#define Mechanics_Source_Mechanics_MechanicsGameModeBase_h_12_PROLOG
#define Mechanics_Source_Mechanics_MechanicsGameModeBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mechanics_Source_Mechanics_MechanicsGameModeBase_h_14_PRIVATE_PROPERTY_OFFSET \
	Mechanics_Source_Mechanics_MechanicsGameModeBase_h_14_SPARSE_DATA \
	Mechanics_Source_Mechanics_MechanicsGameModeBase_h_14_RPC_WRAPPERS \
	Mechanics_Source_Mechanics_MechanicsGameModeBase_h_14_INCLASS \
	Mechanics_Source_Mechanics_MechanicsGameModeBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mechanics_Source_Mechanics_MechanicsGameModeBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mechanics_Source_Mechanics_MechanicsGameModeBase_h_14_PRIVATE_PROPERTY_OFFSET \
	Mechanics_Source_Mechanics_MechanicsGameModeBase_h_14_SPARSE_DATA \
	Mechanics_Source_Mechanics_MechanicsGameModeBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Mechanics_Source_Mechanics_MechanicsGameModeBase_h_14_INCLASS_NO_PURE_DECLS \
	Mechanics_Source_Mechanics_MechanicsGameModeBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MECHANICS_API UClass* StaticClass<class AMechanicsGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mechanics_Source_Mechanics_MechanicsGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
