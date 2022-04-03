// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mechanics/Public/ThirdPersonCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThirdPersonCharacter() {}
// Cross Module References
	MECHANICS_API UEnum* Z_Construct_UEnum_Mechanics_EWalk();
	UPackage* Z_Construct_UPackage__Script_Mechanics();
	MECHANICS_API UEnum* Z_Construct_UEnum_Mechanics_EAttack();
	MECHANICS_API UEnum* Z_Construct_UEnum_Mechanics_EPlayerStatus();
	MECHANICS_API UClass* Z_Construct_UClass_AThirdPersonCharacter_NoRegister();
	MECHANICS_API UClass* Z_Construct_UClass_AThirdPersonCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MECHANICS_API UClass* Z_Construct_UClass_ASword_NoRegister();
	MECHANICS_API UClass* Z_Construct_UClass_AInventoryActor_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
// End Cross Module References
	static UEnum* EWalk_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Mechanics_EWalk, Z_Construct_UPackage__Script_Mechanics(), TEXT("EWalk"));
		}
		return Singleton;
	}
	template<> MECHANICS_API UEnum* StaticEnum<EWalk>()
	{
		return EWalk_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWalk(EWalk_StaticEnum, TEXT("/Script/Mechanics"), TEXT("EWalk"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Mechanics_EWalk_Hash() { return 2873365329U; }
	UEnum* Z_Construct_UEnum_Mechanics_EWalk()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Mechanics();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWalk"), 0, Get_Z_Construct_UEnum_Mechanics_EWalk_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "WalkingForward", (int64)WalkingForward },
				{ "WalkingBackward", (int64)WalkingBackward },
				{ "WalkingRight", (int64)WalkingRight },
				{ "WalkingLeft", (int64)WalkingLeft },
				{ "CrouchingForward", (int64)CrouchingForward },
				{ "CrouchingBackward", (int64)CrouchingBackward },
				{ "CrouchingRight", (int64)CrouchingRight },
				{ "CrouchingLeft", (int64)CrouchingLeft },
				{ "NoWalk", (int64)NoWalk },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CrouchingBackward.DisplayName", "CrouchingBackward" },
				{ "CrouchingBackward.Name", "CrouchingBackward" },
				{ "CrouchingForward.DisplayName", "CrouchingForward" },
				{ "CrouchingForward.Name", "CrouchingForward" },
				{ "CrouchingLeft.DisplayName", "CrouchingLeft" },
				{ "CrouchingLeft.Name", "CrouchingLeft" },
				{ "CrouchingRight.DisplayName", "CrouchingRight" },
				{ "CrouchingRight.Name", "CrouchingRight" },
				{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
				{ "NoWalk.DisplayName", "None" },
				{ "NoWalk.Name", "NoWalk" },
				{ "WalkingBackward.DisplayName", "WalkingBackward" },
				{ "WalkingBackward.Name", "WalkingBackward" },
				{ "WalkingForward.DisplayName", "WalkingForward" },
				{ "WalkingForward.Name", "WalkingForward" },
				{ "WalkingLeft.DisplayName", "WalkingLeft" },
				{ "WalkingLeft.Name", "WalkingLeft" },
				{ "WalkingRight.DisplayName", "WalkingRight" },
				{ "WalkingRight.Name", "WalkingRight" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Mechanics,
				nullptr,
				"EWalk",
				"EWalk",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAttack_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Mechanics_EAttack, Z_Construct_UPackage__Script_Mechanics(), TEXT("EAttack"));
		}
		return Singleton;
	}
	template<> MECHANICS_API UEnum* StaticEnum<EAttack>()
	{
		return EAttack_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAttack(EAttack_StaticEnum, TEXT("/Script/Mechanics"), TEXT("EAttack"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Mechanics_EAttack_Hash() { return 1105172218U; }
	UEnum* Z_Construct_UEnum_Mechanics_EAttack()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Mechanics();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAttack"), 0, Get_Z_Construct_UEnum_Mechanics_EAttack_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "None", (int64)None },
				{ "BasicAttack1", (int64)BasicAttack1 },
				{ "BasicAttack2", (int64)BasicAttack2 },
				{ "BasicAttack3", (int64)BasicAttack3 },
				{ "HeavyAttack1", (int64)HeavyAttack1 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BasicAttack1.DisplayName", "BasicAttack1" },
				{ "BasicAttack1.Name", "BasicAttack1" },
				{ "BasicAttack2.DisplayName", "BasicAttack2" },
				{ "BasicAttack2.Name", "BasicAttack2" },
				{ "BasicAttack3.DisplayName", "BasicAttack3" },
				{ "BasicAttack3.Name", "BasicAttack3" },
				{ "BlueprintType", "true" },
				{ "HeavyAttack1.DisplayName", "HeavyAttack1" },
				{ "HeavyAttack1.Name", "HeavyAttack1" },
				{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
				{ "None.DisplayName", "None" },
				{ "None.Name", "None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Mechanics,
				nullptr,
				"EAttack",
				"EAttack",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPlayerStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Mechanics_EPlayerStatus, Z_Construct_UPackage__Script_Mechanics(), TEXT("EPlayerStatus"));
		}
		return Singleton;
	}
	template<> MECHANICS_API UEnum* StaticEnum<EPlayerStatus>()
	{
		return EPlayerStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlayerStatus(EPlayerStatus_StaticEnum, TEXT("/Script/Mechanics"), TEXT("EPlayerStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Mechanics_EPlayerStatus_Hash() { return 2999196146U; }
	UEnum* Z_Construct_UEnum_Mechanics_EPlayerStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Mechanics();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlayerStatus"), 0, Get_Z_Construct_UEnum_Mechanics_EPlayerStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Idle", (int64)Idle },
				{ "Walking", (int64)Walking },
				{ "Running", (int64)Running },
				{ "Jumping", (int64)Jumping },
				{ "Crouching", (int64)Crouching },
				{ "Dodging", (int64)Dodging },
				{ "Sheath", (int64)Sheath },
				{ "Withdraw", (int64)Withdraw },
				{ "NoAnim", (int64)NoAnim },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Crouching.DisplayName", "Crouching" },
				{ "Crouching.Name", "Crouching" },
				{ "Dodging.DisplayName", "Dodging" },
				{ "Dodging.Name", "Dodging" },
				{ "Idle.DisplayName", "Idle" },
				{ "Idle.Name", "Idle" },
				{ "Jumping.DisplayName", "Jumping" },
				{ "Jumping.Name", "Jumping" },
				{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
				{ "NoAnim.DisplayName", "NoAnim" },
				{ "NoAnim.Name", "NoAnim" },
				{ "Running.Comment", "//WalkingForward\x09\x09= 1\x09\x09UMETA(DisplayName = \"WalkingForward\"),\n//WalkingBackward\x09\x09= 2\x09\x09UMETA(DisplayName = \"WalkingBackward\"),\n//WalkingRight\x09\x09= 3\x09\x09UMETA(DisplayName = \"WalkingRight\"),\n//WalkingLeft\x09\x09\x09= 4\x09\x09UMETA(DisplayName = \"WalkingLeft\"),\n" },
				{ "Running.DisplayName", "Running" },
				{ "Running.Name", "Running" },
				{ "Running.ToolTip", "WalkingForward          = 1             UMETA(DisplayName = \"WalkingForward\"),\nWalkingBackward                = 2             UMETA(DisplayName = \"WalkingBackward\"),\nWalkingRight           = 3             UMETA(DisplayName = \"WalkingRight\"),\nWalkingLeft                    = 4             UMETA(DisplayName = \"WalkingLeft\")," },
				{ "Sheath.DisplayName", "Sheath" },
				{ "Sheath.Name", "Sheath" },
				{ "Walking.DisplayName", "Walking" },
				{ "Walking.Name", "Walking" },
				{ "Withdraw.DisplayName", "Withdraw" },
				{ "Withdraw.Name", "Withdraw" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Mechanics,
				nullptr,
				"EPlayerStatus",
				"EPlayerStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(AThirdPersonCharacter::execUsePotion)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UsePotion(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThirdPersonCharacter::execGetIsJumping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsJumping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThirdPersonCharacter::execGetIsDodging)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsDodging();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThirdPersonCharacter::execGetVerticalMove)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetVerticalMove();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThirdPersonCharacter::execGetHorizontalMove)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHorizontalMove();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThirdPersonCharacter::execGetIsMovingVertical)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsMovingVertical();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThirdPersonCharacter::execGetIsRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsRunning();
		P_NATIVE_END;
	}
	void AThirdPersonCharacter::StaticRegisterNativesAThirdPersonCharacter()
	{
		UClass* Class = AThirdPersonCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHorizontalMove", &AThirdPersonCharacter::execGetHorizontalMove },
			{ "GetIsDodging", &AThirdPersonCharacter::execGetIsDodging },
			{ "GetIsJumping", &AThirdPersonCharacter::execGetIsJumping },
			{ "GetIsMovingVertical", &AThirdPersonCharacter::execGetIsMovingVertical },
			{ "GetIsRunning", &AThirdPersonCharacter::execGetIsRunning },
			{ "GetVerticalMove", &AThirdPersonCharacter::execGetVerticalMove },
			{ "UsePotion", &AThirdPersonCharacter::execUsePotion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AThirdPersonCharacter_GetHorizontalMove_Statics
	{
		struct ThirdPersonCharacter_eventGetHorizontalMove_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AThirdPersonCharacter_GetHorizontalMove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThirdPersonCharacter_eventGetHorizontalMove_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThirdPersonCharacter_GetHorizontalMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThirdPersonCharacter_GetHorizontalMove_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThirdPersonCharacter_GetHorizontalMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThirdPersonCharacter_GetHorizontalMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThirdPersonCharacter, nullptr, "GetHorizontalMove", nullptr, nullptr, sizeof(ThirdPersonCharacter_eventGetHorizontalMove_Parms), Z_Construct_UFunction_AThirdPersonCharacter_GetHorizontalMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonCharacter_GetHorizontalMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThirdPersonCharacter_GetHorizontalMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonCharacter_GetHorizontalMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThirdPersonCharacter_GetHorizontalMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThirdPersonCharacter_GetHorizontalMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThirdPersonCharacter_GetIsDodging_Statics
	{
		struct ThirdPersonCharacter_eventGetIsDodging_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AThirdPersonCharacter_GetIsDodging_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ThirdPersonCharacter_eventGetIsDodging_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AThirdPersonCharacter_GetIsDodging_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ThirdPersonCharacter_eventGetIsDodging_Parms), &Z_Construct_UFunction_AThirdPersonCharacter_GetIsDodging_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThirdPersonCharacter_GetIsDodging_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThirdPersonCharacter_GetIsDodging_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThirdPersonCharacter_GetIsDodging_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThirdPersonCharacter_GetIsDodging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThirdPersonCharacter, nullptr, "GetIsDodging", nullptr, nullptr, sizeof(ThirdPersonCharacter_eventGetIsDodging_Parms), Z_Construct_UFunction_AThirdPersonCharacter_GetIsDodging_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonCharacter_GetIsDodging_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThirdPersonCharacter_GetIsDodging_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonCharacter_GetIsDodging_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThirdPersonCharacter_GetIsDodging()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThirdPersonCharacter_GetIsDodging_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThirdPersonCharacter_GetIsJumping_Statics
	{
		struct ThirdPersonCharacter_eventGetIsJumping_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AThirdPersonCharacter_GetIsJumping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ThirdPersonCharacter_eventGetIsJumping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AThirdPersonCharacter_GetIsJumping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ThirdPersonCharacter_eventGetIsJumping_Parms), &Z_Construct_UFunction_AThirdPersonCharacter_GetIsJumping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThirdPersonCharacter_GetIsJumping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThirdPersonCharacter_GetIsJumping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThirdPersonCharacter_GetIsJumping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThirdPersonCharacter_GetIsJumping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThirdPersonCharacter, nullptr, "GetIsJumping", nullptr, nullptr, sizeof(ThirdPersonCharacter_eventGetIsJumping_Parms), Z_Construct_UFunction_AThirdPersonCharacter_GetIsJumping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonCharacter_GetIsJumping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThirdPersonCharacter_GetIsJumping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonCharacter_GetIsJumping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThirdPersonCharacter_GetIsJumping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThirdPersonCharacter_GetIsJumping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThirdPersonCharacter_GetIsMovingVertical_Statics
	{
		struct ThirdPersonCharacter_eventGetIsMovingVertical_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AThirdPersonCharacter_GetIsMovingVertical_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ThirdPersonCharacter_eventGetIsMovingVertical_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AThirdPersonCharacter_GetIsMovingVertical_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ThirdPersonCharacter_eventGetIsMovingVertical_Parms), &Z_Construct_UFunction_AThirdPersonCharacter_GetIsMovingVertical_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThirdPersonCharacter_GetIsMovingVertical_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThirdPersonCharacter_GetIsMovingVertical_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThirdPersonCharacter_GetIsMovingVertical_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThirdPersonCharacter_GetIsMovingVertical_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThirdPersonCharacter, nullptr, "GetIsMovingVertical", nullptr, nullptr, sizeof(ThirdPersonCharacter_eventGetIsMovingVertical_Parms), Z_Construct_UFunction_AThirdPersonCharacter_GetIsMovingVertical_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonCharacter_GetIsMovingVertical_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThirdPersonCharacter_GetIsMovingVertical_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonCharacter_GetIsMovingVertical_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThirdPersonCharacter_GetIsMovingVertical()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThirdPersonCharacter_GetIsMovingVertical_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThirdPersonCharacter_GetIsRunning_Statics
	{
		struct ThirdPersonCharacter_eventGetIsRunning_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AThirdPersonCharacter_GetIsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ThirdPersonCharacter_eventGetIsRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AThirdPersonCharacter_GetIsRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ThirdPersonCharacter_eventGetIsRunning_Parms), &Z_Construct_UFunction_AThirdPersonCharacter_GetIsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThirdPersonCharacter_GetIsRunning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThirdPersonCharacter_GetIsRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThirdPersonCharacter_GetIsRunning_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThirdPersonCharacter_GetIsRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThirdPersonCharacter, nullptr, "GetIsRunning", nullptr, nullptr, sizeof(ThirdPersonCharacter_eventGetIsRunning_Parms), Z_Construct_UFunction_AThirdPersonCharacter_GetIsRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonCharacter_GetIsRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThirdPersonCharacter_GetIsRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonCharacter_GetIsRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThirdPersonCharacter_GetIsRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThirdPersonCharacter_GetIsRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThirdPersonCharacter_GetVerticalMove_Statics
	{
		struct ThirdPersonCharacter_eventGetVerticalMove_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AThirdPersonCharacter_GetVerticalMove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThirdPersonCharacter_eventGetVerticalMove_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThirdPersonCharacter_GetVerticalMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThirdPersonCharacter_GetVerticalMove_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThirdPersonCharacter_GetVerticalMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThirdPersonCharacter_GetVerticalMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThirdPersonCharacter, nullptr, "GetVerticalMove", nullptr, nullptr, sizeof(ThirdPersonCharacter_eventGetVerticalMove_Parms), Z_Construct_UFunction_AThirdPersonCharacter_GetVerticalMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonCharacter_GetVerticalMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThirdPersonCharacter_GetVerticalMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonCharacter_GetVerticalMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThirdPersonCharacter_GetVerticalMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThirdPersonCharacter_GetVerticalMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThirdPersonCharacter_UsePotion_Statics
	{
		struct ThirdPersonCharacter_eventUsePotion_Parms
		{
			int32 Index;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AThirdPersonCharacter_UsePotion_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThirdPersonCharacter_eventUsePotion_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThirdPersonCharacter_UsePotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThirdPersonCharacter_UsePotion_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThirdPersonCharacter_UsePotion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThirdPersonCharacter_UsePotion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThirdPersonCharacter, nullptr, "UsePotion", nullptr, nullptr, sizeof(ThirdPersonCharacter_eventUsePotion_Parms), Z_Construct_UFunction_AThirdPersonCharacter_UsePotion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonCharacter_UsePotion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThirdPersonCharacter_UsePotion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonCharacter_UsePotion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThirdPersonCharacter_UsePotion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThirdPersonCharacter_UsePotion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AThirdPersonCharacter_NoRegister()
	{
		return AThirdPersonCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AThirdPersonCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsRunning_MetaData[];
#endif
		static void NewProp_IsRunning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRunning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsJumping_MetaData[];
#endif
		static void NewProp_IsJumping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsJumping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMovingVertical_MetaData[];
#endif
		static void NewProp_bIsMovingVertical_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMovingVertical;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMovingHorizontal_MetaData[];
#endif
		static void NewProp_bIsMovingHorizontal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMovingHorizontal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HorizontalMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VerticalMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDodging_MetaData[];
#endif
		static void NewProp_IsDodging_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDodging;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanRun_MetaData[];
#endif
		static void NewProp_CanRun_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanRun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanAttack_MetaData[];
#endif
		static void NewProp_CanAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAttacking_MetaData[];
#endif
		static void NewProp_IsAttacking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAttacking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EAttackCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EAttackCounter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasicAttackClicks_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BasicAttackClicks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeavyAttackClicks_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_HeavyAttackClicks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArmCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseWorldLocation_MetaData[];
#endif
		static void NewProp_bUseWorldLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseWorldLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoomWorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoomWorldLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoomWorldRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoomWorldRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayerStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WalkStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BP_Sword_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BP_Sword;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSwordSheathed_MetaData[];
#endif
		static void NewProp_bIsSwordSheathed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSwordSheathed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BP_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BP_Inventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InventoryIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryUIClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InventoryUIClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInventoryOpen_MetaData[];
#endif
		static void NewProp_bIsInventoryOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInventoryOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeathAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeathAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManaPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ManaPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaminaPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StaminaPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThirdPersonCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Mechanics,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AThirdPersonCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AThirdPersonCharacter_GetHorizontalMove, "GetHorizontalMove" }, // 4046332793
		{ &Z_Construct_UFunction_AThirdPersonCharacter_GetIsDodging, "GetIsDodging" }, // 649930956
		{ &Z_Construct_UFunction_AThirdPersonCharacter_GetIsJumping, "GetIsJumping" }, // 2607229348
		{ &Z_Construct_UFunction_AThirdPersonCharacter_GetIsMovingVertical, "GetIsMovingVertical" }, // 1152656864
		{ &Z_Construct_UFunction_AThirdPersonCharacter_GetIsRunning, "GetIsRunning" }, // 4186052095
		{ &Z_Construct_UFunction_AThirdPersonCharacter_GetVerticalMove, "GetVerticalMove" }, // 36257844
		{ &Z_Construct_UFunction_AThirdPersonCharacter_UsePotion, "UsePotion" }, // 806727598
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ThirdPersonCharacter.h" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_IsRunning_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_IsRunning_SetBit(void* Obj)
	{
		((AThirdPersonCharacter*)Obj)->IsRunning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_IsRunning = { "IsRunning", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AThirdPersonCharacter), &Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_IsRunning_SetBit, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_IsRunning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_IsRunning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_IsJumping_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_IsJumping_SetBit(void* Obj)
	{
		((AThirdPersonCharacter*)Obj)->IsJumping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_IsJumping = { "IsJumping", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AThirdPersonCharacter), &Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_IsJumping_SetBit, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_IsJumping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_IsJumping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bIsMovingVertical_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bIsMovingVertical_SetBit(void* Obj)
	{
		((AThirdPersonCharacter*)Obj)->bIsMovingVertical = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bIsMovingVertical = { "bIsMovingVertical", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AThirdPersonCharacter), &Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bIsMovingVertical_SetBit, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bIsMovingVertical_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bIsMovingVertical_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bIsMovingHorizontal_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bIsMovingHorizontal_SetBit(void* Obj)
	{
		((AThirdPersonCharacter*)Obj)->bIsMovingHorizontal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bIsMovingHorizontal = { "bIsMovingHorizontal", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AThirdPersonCharacter), &Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bIsMovingHorizontal_SetBit, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bIsMovingHorizontal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bIsMovingHorizontal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_HorizontalMove_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_HorizontalMove = { "HorizontalMove", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThirdPersonCharacter, HorizontalMove), METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_HorizontalMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_HorizontalMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_VerticalMove_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_VerticalMove = { "VerticalMove", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThirdPersonCharacter, VerticalMove), METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_VerticalMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_VerticalMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_IsDodging_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_IsDodging_SetBit(void* Obj)
	{
		((AThirdPersonCharacter*)Obj)->IsDodging = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_IsDodging = { "IsDodging", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AThirdPersonCharacter), &Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_IsDodging_SetBit, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_IsDodging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_IsDodging_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_CanRun_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_CanRun_SetBit(void* Obj)
	{
		((AThirdPersonCharacter*)Obj)->CanRun = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_CanRun = { "CanRun", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AThirdPersonCharacter), &Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_CanRun_SetBit, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_CanRun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_CanRun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_CanAttack_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_CanAttack_SetBit(void* Obj)
	{
		((AThirdPersonCharacter*)Obj)->CanAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_CanAttack = { "CanAttack", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AThirdPersonCharacter), &Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_CanAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_CanAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_CanAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_IsAttacking_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_IsAttacking_SetBit(void* Obj)
	{
		((AThirdPersonCharacter*)Obj)->IsAttacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_IsAttacking = { "IsAttacking", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AThirdPersonCharacter), &Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_IsAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_IsAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_IsAttacking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_EAttackCounter_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_EAttackCounter = { "EAttackCounter", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThirdPersonCharacter, EAttackCounter), Z_Construct_UEnum_Mechanics_EAttack, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_EAttackCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_EAttackCounter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_BasicAttackClicks_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_BasicAttackClicks = { "BasicAttackClicks", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThirdPersonCharacter, BasicAttackClicks), METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_BasicAttackClicks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_BasicAttackClicks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_HeavyAttackClicks_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_HeavyAttackClicks = { "HeavyAttackClicks", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThirdPersonCharacter, HeavyAttackClicks), METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_HeavyAttackClicks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_HeavyAttackClicks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// Camera\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
		{ "ToolTip", "Camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThirdPersonCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_SpringArmCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_SpringArmCamera = { "SpringArmCamera", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThirdPersonCharacter, SpringArmCamera), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_SpringArmCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_SpringArmCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bUseWorldLocation_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bUseWorldLocation_SetBit(void* Obj)
	{
		((AThirdPersonCharacter*)Obj)->bUseWorldLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bUseWorldLocation = { "bUseWorldLocation", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AThirdPersonCharacter), &Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bUseWorldLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bUseWorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bUseWorldLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_BoomWorldLocation_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_BoomWorldLocation = { "BoomWorldLocation", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThirdPersonCharacter, BoomWorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_BoomWorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_BoomWorldLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_BoomWorldRotation_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_BoomWorldRotation = { "BoomWorldRotation", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThirdPersonCharacter, BoomWorldRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_BoomWorldRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_BoomWorldRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_PlayerStatus_MetaData[] = {
		{ "Category", "PlayerStatus" },
		{ "Comment", "// Player status\n" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
		{ "ToolTip", "Player status" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_PlayerStatus = { "PlayerStatus", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThirdPersonCharacter, PlayerStatus), Z_Construct_UEnum_Mechanics_EPlayerStatus, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_PlayerStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_PlayerStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_WalkStatus_MetaData[] = {
		{ "Category", "PlayerStatus" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_WalkStatus = { "WalkStatus", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThirdPersonCharacter, WalkStatus), Z_Construct_UEnum_Mechanics_EWalk, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_WalkStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_WalkStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_BP_Sword_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "// Weapon\n" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
		{ "ToolTip", "Weapon" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_BP_Sword = { "BP_Sword", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThirdPersonCharacter, BP_Sword), Z_Construct_UClass_ASword_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_BP_Sword_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_BP_Sword_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bIsSwordSheathed_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bIsSwordSheathed_SetBit(void* Obj)
	{
		((AThirdPersonCharacter*)Obj)->bIsSwordSheathed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bIsSwordSheathed = { "bIsSwordSheathed", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AThirdPersonCharacter), &Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bIsSwordSheathed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bIsSwordSheathed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bIsSwordSheathed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_BP_Inventory_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "// Inventory\n" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
		{ "ToolTip", "Inventory" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_BP_Inventory = { "BP_Inventory", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThirdPersonCharacter, BP_Inventory), Z_Construct_UClass_AInventoryActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_BP_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_BP_Inventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_InventoryIndex_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_InventoryIndex = { "InventoryIndex", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThirdPersonCharacter, InventoryIndex), METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_InventoryIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_InventoryIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_InventoryUIClass_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_InventoryUIClass = { "InventoryUIClass", nullptr, (EPropertyFlags)0x0024080000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThirdPersonCharacter, InventoryUIClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_InventoryUIClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_InventoryUIClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_CurrentWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThirdPersonCharacter, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_CurrentWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_CurrentWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bIsInventoryOpen_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bIsInventoryOpen_SetBit(void* Obj)
	{
		((AThirdPersonCharacter*)Obj)->bIsInventoryOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bIsInventoryOpen = { "bIsInventoryOpen", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AThirdPersonCharacter), &Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bIsInventoryOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bIsInventoryOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bIsInventoryOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_DeathAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "Comment", "// Animations\n" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
		{ "ToolTip", "Animations" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_DeathAnimation = { "DeathAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThirdPersonCharacter, DeathAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_DeathAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_DeathAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_HealthPoints_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "/* PLAYER STATS */// Health\n" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
		{ "ToolTip", "PLAYER STATS // Health" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_HealthPoints = { "HealthPoints", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThirdPersonCharacter, HealthPoints), METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_HealthPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_HealthPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_ManaPoints_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "// Mana\n" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
		{ "ToolTip", "Mana" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_ManaPoints = { "ManaPoints", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThirdPersonCharacter, ManaPoints), METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_ManaPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_ManaPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_StaminaPoints_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "// Stamina\n" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
		{ "ToolTip", "Stamina" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_StaminaPoints = { "StaminaPoints", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThirdPersonCharacter, StaminaPoints), METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_StaminaPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_StaminaPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_Inventory_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/ThirdPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThirdPersonCharacter, Inventory), Z_Construct_UClass_AInventoryActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_Inventory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThirdPersonCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_IsRunning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_IsJumping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bIsMovingVertical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bIsMovingHorizontal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_HorizontalMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_VerticalMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_IsDodging,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_CanRun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_CanAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_IsAttacking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_EAttackCounter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_BasicAttackClicks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_HeavyAttackClicks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_SpringArmCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bUseWorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_BoomWorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_BoomWorldRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_PlayerStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_WalkStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_BP_Sword,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bIsSwordSheathed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_BP_Inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_InventoryIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_InventoryUIClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_CurrentWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bIsInventoryOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_DeathAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_HealthPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_ManaPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_StaminaPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_Inventory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThirdPersonCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThirdPersonCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AThirdPersonCharacter_Statics::ClassParams = {
		&AThirdPersonCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AThirdPersonCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThirdPersonCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AThirdPersonCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AThirdPersonCharacter, 3852537380);
	template<> MECHANICS_API UClass* StaticClass<AThirdPersonCharacter>()
	{
		return AThirdPersonCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AThirdPersonCharacter(Z_Construct_UClass_AThirdPersonCharacter, &AThirdPersonCharacter::StaticClass, TEXT("/Script/Mechanics"), TEXT("AThirdPersonCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThirdPersonCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
