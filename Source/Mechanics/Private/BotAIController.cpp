// Fill out your copyright notice in the Description page of Project Settings.


#include "BotAIController.h"
#include "Perception/PawnSensingComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Pawn.h"
#include "BotCharacter.h"
#include "Engine/Engine.h"
#include "Sword.h"
#include "ThirdPersonCharacter.h"


ABotAIController::ABotAIController() {
	PawnSensingComp = CreateDefaultSubobject<UPawnSensingComponent>(FName("PawnSensingComp"));
	PawnSensingComp->SensingInterval = 0.25f;
	PawnSensingComp->bOnlySensePlayers = true;
	PawnSensingComp->SetPeripheralVisionAngle(150.f);
	PawnSensingComp->SightRadius = 1000.f;

	BehaviorTreeComp = CreateDefaultSubobject<UBehaviorTreeComponent>(FName("BehaviorTreeComp"));
	BlackBoardComp = CreateDefaultSubobject<UBlackboardComponent>(FName("BlackBoardComp"));

	bCanAttackSetted = false;
}

void ABotAIController::OnPossess(APawn* InPawn) {
	Super::OnPossess(InPawn);
	PawnSensingComp->OnSeePawn.AddDynamic(this, &ABotAIController::OnSeePawn);

	if(BehaviorTree) {
		BlackBoardComp->InitializeBlackboard(*BehaviorTree->BlackboardAsset);
		BehaviorTreeComp->StartTree(*BehaviorTree);
		BlackBoardComp->SetValueAsBool("MustWalk", true);
	}
}

void ABotAIController::OnSeePawn(APawn* SensedPawn) {
	if(Blackboard && SensedPawn) {
		ABotCharacter* Enemy = Cast<ABotCharacter>(GetPawn());
		AThirdPersonCharacter* Player = Cast<AThirdPersonCharacter>(SensedPawn);

		if(Enemy->GetHealth() <= 0 || Player->GetHealth() <= 0) {
			BlackBoardComp->SetValueAsObject("Enemy", nullptr);
			Enemy->PlayerDeath();
			return;
		}
		else {
			BlackBoardComp->SetValueAsObject("Enemy", SensedPawn); // The enemy of my enemy is me
			BlackBoardComp->SetValueAsBool("MustWalk", false);

			if(!bCanAttackSetted) {
				Enemy->SetCanAttack(true);
				bCanAttackSetted = true;
			}
		}
		
		//ABotCharacter* Bot = Cast<ABotCharacter>(GetPawn());
		//Bot->EnemySword->Attack();
	}
	else if(Blackboard) {
		BlackBoardComp->SetValueAsObject("Enemy", nullptr);
		return;
	}
}
