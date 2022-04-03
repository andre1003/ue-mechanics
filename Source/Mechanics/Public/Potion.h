// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Potion.generated.h"

UCLASS()
class MECHANICS_API APotion : public AActor {
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APotion();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PotionSettings")
	float HealthPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PotionSettings")
	float ManaPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PotionSettings")
	float StaminaPoints;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	float GetHealthPoints();
	float GetManaPoints();
	float GetStaminaPoints();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InventoryImage")
	UTexture2D* ItemSprite;
};
