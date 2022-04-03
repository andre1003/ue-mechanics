// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BotAIController.generated.h"

/**
 *
 */
UCLASS()
class MECHANICS_API ABotAIController : public AAIController {
	GENERATED_BODY()


protected:
	ABotAIController();

	virtual void OnPossess(APawn* InPawn) override;

	UPROPERTY(EditDefaultsOnly)
	class UPawnSensingComponent* PawnSensingComp;

	UPROPERTY(EditDefaultsOnly)
	class UBehaviorTree* BehaviorTree;

	UPROPERTY(EditDefaultsOnly)
	class UBehaviorTreeComponent* BehaviorTreeComp;

	UPROPERTY(EditDefaultsOnly)
	class UBlackboardComponent* BlackBoardComp;

	UPROPERTY(EditDefaultsOnly)
	bool bCanAttackSetted = false;

	UFUNCTION()
	void OnSeePawn(class APawn* SensedPawn);
};
