// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef MECHANICS_Item_generated_h
#error "Item.generated.h already included, missing '#pragma once' in Item.h"
#endif
#define MECHANICS_Item_generated_h

#define Mechanics_Source_Mechanics_Public_Item_h_17_SPARSE_DATA
#define Mechanics_Source_Mechanics_Public_Item_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOverlapInit);


#define Mechanics_Source_Mechanics_Public_Item_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOverlapInit);


#define Mechanics_Source_Mechanics_Public_Item_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mechanics"), NO_API) \
	DECLARE_SERIALIZER(AItem)


#define Mechanics_Source_Mechanics_Public_Item_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mechanics"), NO_API) \
	DECLARE_SERIALIZER(AItem)


#define Mechanics_Source_Mechanics_Public_Item_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public:


#define Mechanics_Source_Mechanics_Public_Item_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItem)


#define Mechanics_Source_Mechanics_Public_Item_h_17_PRIVATE_PROPERTY_OFFSET
#define Mechanics_Source_Mechanics_Public_Item_h_15_PROLOG
#define Mechanics_Source_Mechanics_Public_Item_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mechanics_Source_Mechanics_Public_Item_h_17_PRIVATE_PROPERTY_OFFSET \
	Mechanics_Source_Mechanics_Public_Item_h_17_SPARSE_DATA \
	Mechanics_Source_Mechanics_Public_Item_h_17_RPC_WRAPPERS \
	Mechanics_Source_Mechanics_Public_Item_h_17_INCLASS \
	Mechanics_Source_Mechanics_Public_Item_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mechanics_Source_Mechanics_Public_Item_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mechanics_Source_Mechanics_Public_Item_h_17_PRIVATE_PROPERTY_OFFSET \
	Mechanics_Source_Mechanics_Public_Item_h_17_SPARSE_DATA \
	Mechanics_Source_Mechanics_Public_Item_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Mechanics_Source_Mechanics_Public_Item_h_17_INCLASS_NO_PURE_DECLS \
	Mechanics_Source_Mechanics_Public_Item_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MECHANICS_API UClass* StaticClass<class AItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mechanics_Source_Mechanics_Public_Item_h


#define FOREACH_ENUM_EITEMTYPE(op) \
	op(Sword) \
	op(Potion) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
