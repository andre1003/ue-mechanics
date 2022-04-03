// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BotCharacter.generated.h"

UCLASS()
class MECHANICS_API ABotCharacter : public ACharacter {
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABotCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Weapon")
	TSubclassOf<class ASword> BP_Sword;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float HealthPoints = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float Armor = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float MagicResistance = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animations")
	UClass* AnimationBlueprint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animations")
	UAnimationAsset* DeathAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animations")
	UAnimationAsset* HitAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animations")
	UAnimationAsset* AttackAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animations")
	UAnimationAsset* RunAnimation;

	UPROPERTY(BlueprintReadOnly, Category = "Animations")
	bool bIsRunning = false;

	FTimerHandle AnimationTimer, AttackTimer;

	void Death();
	void ResetAnimation();

	UPROPERTY(BlueprintReadOnly, Category = "Attack")
	bool bCanAttack = true;

	void Attack();
	void EndAttack();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	class ASword* EnemySword;

	void SetHealth(float BaseDamage, float PhysicalDamage, float MagicalDamage, float CriticalPercent, float CriticalMultiplier);
	float GetHealth();

	void TakeHit();

	void SetCanAttack(bool CanAttack);
	bool GetCanAttack();

	void PlayerDeath();
};
