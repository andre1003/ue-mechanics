// Fill out your copyright notice in the Description page of Project Settings.


#include "BotCharacter.h"
#include "Sword.h"
#include "Engine/EngineTypes.h"
#include "TimerManager.h"
#include "Components/CapsuleComponent.h"

// Sets default values
ABotCharacter::ABotCharacter() {
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABotCharacter::BeginPlay() {
	Super::BeginPlay();

	bCanAttack = false;

	FActorSpawnParameters Params;
	Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	EnemySword = GetWorld()->SpawnActor<ASword>(BP_Sword, FTransform(), Params);
	EnemySword->AttachToComponent(Cast<USceneComponent>(GetMesh()), FAttachmentTransformRules::SnapToTargetNotIncludingScale, FName("WeaponSocket"));
	EnemySword->SetActorRelativeLocation(FVector(0.f, 0.f, 66.f));
	EnemySword->IsPlayerSword = false;
}

// Called every frame
void ABotCharacter::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

	/*if(GetVelocity() != FVector::ZeroVector && !bIsRunning) {
		GetMesh()->PlayAnimation(RunAnimation, true);
		bIsRunning = true;
		bCanAttack = false;
	}
	else if(GetVelocity() == FVector::ZeroVector && !bCanAttack && !EnemySword->GetIsAttacking()) {
		bIsRunning = false;
		bCanAttack = true;
	}*/

	Attack();
}

// Called to bind functionality to input
void ABotCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) {
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


// HEALTH
void ABotCharacter::SetHealth(float BaseDamage, float PhysicalDamage, float MagicalDamage, float CriticalPercent, float CriticalMultiplier) {
	TakeHit();
	int Damage, PD, MD;

	// Physical damage calculation
	PD = PhysicalDamage - Armor;
	if(PD < 0)
		PD = 0;

	// Magical damage calculation
	MD = MagicalDamage - MagicResistance;
	if(MD < 0)
		MD = 0;

	// Set damage
	Damage = BaseDamage + PD + MD;
	
	// Critical damage calculation
	float Random = FMath::RandRange(0.f, 100.f);
	if(Random <= CriticalPercent) {
		UE_LOG(LogTemp, Error, TEXT("Cricitcal Hit!!"));
		Damage *= CriticalMultiplier;
	}

	// Apply damage
	HealthPoints -= Damage;
	UE_LOG(LogTemp, Error, TEXT("Enemy health: %d"), HealthPoints);

	// Check if bot is dead
	if(HealthPoints <= 0)
		Death();
}

float ABotCharacter::GetHealth() {
	return HealthPoints;
}

void ABotCharacter::Attack() {
	if(bCanAttack) {
		bCanAttack = false;
		EnemySword->SetIsAttacking(true);
		GetMesh()->PlayAnimation(AttackAnimation, false);
		GetWorldTimerManager().SetTimer(AttackTimer, this, &ABotCharacter::EndAttack, 2.67f, false);
	}
}

void ABotCharacter::EndAttack() {
	EnemySword->ResetCanAttack();
	GetWorldTimerManager().ClearTimer(AttackTimer);
	bCanAttack = true;
}

void ABotCharacter::SetCanAttack(bool CanAttack) {
	bCanAttack = CanAttack;
}

bool ABotCharacter::GetCanAttack() {
	return bCanAttack;
}

void ABotCharacter::PlayerDeath() {
	bCanAttack = false;
	GetWorldTimerManager().ClearTimer(AttackTimer);
}

//////////
// THIS IS JUST FOR TESTING
// Tip: use the enum for changing animation, as used in ThirdPersonCharacter class
//////////
void ABotCharacter::TakeHit() {
	bCanAttack = false;
	EnemySword->SetIsAttacking(false);
	GetMesh()->PlayAnimation(HitAnimation, false);
	GetWorldTimerManager().SetTimer(AnimationTimer, this, &ABotCharacter::ResetAnimation, 0.9f, false);
}

void ABotCharacter::Death() {
	GetCapsuleComponent()->SetGenerateOverlapEvents(false);
	GetWorldTimerManager().ClearTimer(AnimationTimer);
	GetMesh()->PlayAnimation(DeathAnimation, false);
	SetLifeSpan(5.f);
	EnemySword->Destroy();
}

void ABotCharacter::ResetAnimation() {
	bCanAttack = true;
	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	GetMesh()->SetAnimClass(AnimationBlueprint);
}
