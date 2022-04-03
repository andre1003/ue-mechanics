// Fill out your copyright notice in the Description page of Project Settings.


#include "Sword.h"
#include "BotCharacter.h"
#include "ThirdPersonCharacter.h"


ASword::ASword() {
	OnActorBeginOverlap.AddDynamic(this, &ASword::Attack);
}

void ASword::BeginPlay() {
	Super::BeginPlay();

	bCanAttack = true;
	bIsAttacking = false;
}

void ASword::Attack(AActor* OverlappedActor, AActor* OtherActor) {
	if(bCanAttack && bIsAttacking && OtherActor) {
		// Tip: deactivate bCanAttack only when cast the enemy (this will ensure that the sword hits the enemy)
		
		ABotCharacter* Enemy = Cast<ABotCharacter>(OtherActor);
		if(Enemy && IsPlayerSword) {
			UE_LOG(LogTemp, Warning, TEXT("%s ovelapped!"), *OtherActor->GetName());
			bCanAttack = false;
			Enemy->SetHealth(BaseDamage, PhysicalDamage, MagicalDamage, CriticalPercent, CriticalMultiplier);
		}
		else if(!IsPlayerSword) {
			AThirdPersonCharacter* Character = Cast<AThirdPersonCharacter>(OtherActor);
			if(Character) {
				bCanAttack = false;
				Character->SetHealth(BaseDamage, true);
			}
		}
	}
}

void ASword::SetIsAttacking(bool IsAttacking) {
	bIsAttacking = IsAttacking;
}

bool ASword::GetIsAttacking() {
	return bIsAttacking;
}

void ASword::ResetCanAttack() {
	bCanAttack = true;
	bIsAttacking = false;
}

// Getters
float ASword::GetManaCost() {
	return ManaCost;
}

float ASword::GetStaminaCost() {
	return StaminaCost;
}
