// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mechanics/Public/MechanicsPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMechanicsPlayerController() {}
// Cross Module References
	MECHANICS_API UClass* Z_Construct_UClass_AMechanicsPlayerController_NoRegister();
	MECHANICS_API UClass* Z_Construct_UClass_AMechanicsPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Mechanics();
// End Cross Module References
	void AMechanicsPlayerController::StaticRegisterNativesAMechanicsPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AMechanicsPlayerController_NoRegister()
	{
		return AMechanicsPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMechanicsPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMechanicsPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Mechanics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechanicsPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MechanicsPlayerController.h" },
		{ "ModuleRelativePath", "Public/MechanicsPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMechanicsPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMechanicsPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMechanicsPlayerController_Statics::ClassParams = {
		&AMechanicsPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMechanicsPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMechanicsPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMechanicsPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMechanicsPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMechanicsPlayerController, 3293518105);
	template<> MECHANICS_API UClass* StaticClass<AMechanicsPlayerController>()
	{
		return AMechanicsPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMechanicsPlayerController(Z_Construct_UClass_AMechanicsPlayerController, &AMechanicsPlayerController::StaticClass, TEXT("/Script/Mechanics"), TEXT("AMechanicsPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMechanicsPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
