// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AItem;
#ifdef MECHANICS_InventoryActor_generated_h
#error "InventoryActor.generated.h already included, missing '#pragma once' in InventoryActor.h"
#endif
#define MECHANICS_InventoryActor_generated_h

#define Mechanics_Source_Mechanics_Public_InventoryActor_h_11_SPARSE_DATA
#define Mechanics_Source_Mechanics_Public_InventoryActor_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetItemSlotAtIndex);


#define Mechanics_Source_Mechanics_Public_InventoryActor_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetItemSlotAtIndex);


#define Mechanics_Source_Mechanics_Public_InventoryActor_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInventoryActor(); \
	friend struct Z_Construct_UClass_AInventoryActor_Statics; \
public: \
	DECLARE_CLASS(AInventoryActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mechanics"), NO_API) \
	DECLARE_SERIALIZER(AInventoryActor)


#define Mechanics_Source_Mechanics_Public_InventoryActor_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAInventoryActor(); \
	friend struct Z_Construct_UClass_AInventoryActor_Statics; \
public: \
	DECLARE_CLASS(AInventoryActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mechanics"), NO_API) \
	DECLARE_SERIALIZER(AInventoryActor)


#define Mechanics_Source_Mechanics_Public_InventoryActor_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInventoryActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInventoryActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInventoryActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInventoryActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInventoryActor(AInventoryActor&&); \
	NO_API AInventoryActor(const AInventoryActor&); \
public:


#define Mechanics_Source_Mechanics_Public_InventoryActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInventoryActor(AInventoryActor&&); \
	NO_API AInventoryActor(const AInventoryActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInventoryActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInventoryActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInventoryActor)


#define Mechanics_Source_Mechanics_Public_InventoryActor_h_11_PRIVATE_PROPERTY_OFFSET
#define Mechanics_Source_Mechanics_Public_InventoryActor_h_9_PROLOG
#define Mechanics_Source_Mechanics_Public_InventoryActor_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mechanics_Source_Mechanics_Public_InventoryActor_h_11_PRIVATE_PROPERTY_OFFSET \
	Mechanics_Source_Mechanics_Public_InventoryActor_h_11_SPARSE_DATA \
	Mechanics_Source_Mechanics_Public_InventoryActor_h_11_RPC_WRAPPERS \
	Mechanics_Source_Mechanics_Public_InventoryActor_h_11_INCLASS \
	Mechanics_Source_Mechanics_Public_InventoryActor_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mechanics_Source_Mechanics_Public_InventoryActor_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mechanics_Source_Mechanics_Public_InventoryActor_h_11_PRIVATE_PROPERTY_OFFSET \
	Mechanics_Source_Mechanics_Public_InventoryActor_h_11_SPARSE_DATA \
	Mechanics_Source_Mechanics_Public_InventoryActor_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Mechanics_Source_Mechanics_Public_InventoryActor_h_11_INCLASS_NO_PURE_DECLS \
	Mechanics_Source_Mechanics_Public_InventoryActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MECHANICS_API UClass* StaticClass<class AInventoryActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mechanics_Source_Mechanics_Public_InventoryActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
