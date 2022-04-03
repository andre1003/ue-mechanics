// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InventoryActor.generated.h"

UCLASS()
class MECHANICS_API AInventoryActor : public AActor {
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AInventoryActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	
	// Slots
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Slots")
	TArray<TSubclassOf<class ASword>> SwordSlots;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Slots")
	TArray<TSubclassOf<class APotion>> PotionSlots;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Slots")
	TArray<TSubclassOf<class AItem>> ItemSlots;


	// Sword inventory
	TSubclassOf<class ASword> GetSwordSlotAtIndex(int Index);
	void AddSwordToSlot(TSubclassOf<class ASword> Sword);
	int SwordInventoryLength();

	// Potion inventory
	TSubclassOf<class APotion> GetPotionSlotAtIndex(int Index);
	void AddPotionToSlot(TSubclassOf<class APotion> Potion);
	int PotionInventoryLength();

	// Item inventory
	UFUNCTION()
	TSubclassOf<class AItem> GetItemSlotAtIndex(int Index);
	void AddItemToSlot(TSubclassOf<class AItem> Item);
	int ItemInventoryLength();
};
