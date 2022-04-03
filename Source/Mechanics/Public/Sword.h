// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "Sword.generated.h"

/**
 * FOR INVENTORY WORK PROPERTLY, THIS MUST HAVE THE SPRITE, SO DO POTIONS
 */
UCLASS()
class MECHANICS_API ASword : public ATriggerBox {
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

	bool bCanAttack;
	bool bIsAttacking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	float BaseDamage = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	float PhysicalDamage = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	float MagicalDamage = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	float CriticalPercent = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	float CriticalMultiplier = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	float ManaCost = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	float StaminaCost = 0;

public:
	ASword();

	UFUNCTION()
	void Attack(class AActor* OverlappedActor, class AActor* OtherActor);

	void SetIsAttacking(bool IsAttacking);
	bool GetIsAttacking();
	void ResetCanAttack();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	bool IsPlayerSword = true;

	float GetManaCost();
	float GetStaminaCost();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InventoryImage")
	UTexture2D* ItemSprite;
};
