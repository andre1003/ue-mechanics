// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mechanics/Public/PlayerStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerStatus() {}
// Cross Module References
	MECHANICS_API UEnum* Z_Construct_UEnum_Mechanics_EStatus();
	UPackage* Z_Construct_UPackage__Script_Mechanics();
// End Cross Module References
	static UEnum* EStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Mechanics_EStatus, Z_Construct_UPackage__Script_Mechanics(), TEXT("EStatus"));
		}
		return Singleton;
	}
	template<> MECHANICS_API UEnum* StaticEnum<EStatus>()
	{
		return EStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStatus(EStatus_StaticEnum, TEXT("/Script/Mechanics"), TEXT("EStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Mechanics_EStatus_Hash() { return 252237263U; }
	UEnum* Z_Construct_UEnum_Mechanics_EStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Mechanics();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStatus"), 0, Get_Z_Construct_UEnum_Mechanics_EStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Idle", (int64)Idle },
				{ "Walking", (int64)Walking },
				{ "Running", (int64)Running },
				{ "Attacking", (int64)Attacking },
				{ "Crouching", (int64)Crouching },
				{ "Dodging", (int64)Dodging },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attacking.DisplayName", "Attacking" },
				{ "Attacking.Name", "Attacking" },
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \n */// Enum\n" },
				{ "Crouching.DisplayName", "Crouching" },
				{ "Crouching.Name", "Crouching" },
				{ "Dodging.DisplayName", "Dodging" },
				{ "Dodging.Name", "Dodging" },
				{ "Idle.DisplayName", "Idle" },
				{ "Idle.Name", "Idle" },
				{ "ModuleRelativePath", "Public/PlayerStatus.h" },
				{ "Running.DisplayName", "Running" },
				{ "Running.Name", "Running" },
				{ "ToolTip", "// Enum" },
				{ "Walking.DisplayName", "Walking" },
				{ "Walking.Name", "Walking" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Mechanics,
				nullptr,
				"EStatus",
				"EStatus",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
