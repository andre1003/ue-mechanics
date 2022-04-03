// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryActor.h"

// Sets default values
AInventoryActor::AInventoryActor() {
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SwordSlots = TArray<TSubclassOf<ASword>>();
}

// Called when the game starts or when spawned
void AInventoryActor::BeginPlay() {
	Super::BeginPlay();

}

// Called every frame
void AInventoryActor::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

}

// Sword inventory
TSubclassOf<class ASword> AInventoryActor::GetSwordSlotAtIndex(int Index) {
	return SwordSlots[Index];
}

void AInventoryActor::AddSwordToSlot(TSubclassOf<class ASword> Sword) {
	UE_LOG(LogTemp, Warning, TEXT("New sword added to inventory"));
	SwordSlots.Add(Sword);
}

int AInventoryActor::SwordInventoryLength() {
	return SwordSlots.Num();
}


// Potion inventory
TSubclassOf<class APotion> AInventoryActor::GetPotionSlotAtIndex(int Index) {
	return PotionSlots[Index];
}

void AInventoryActor::AddPotionToSlot(TSubclassOf<class APotion> Potion) {
	UE_LOG(LogTemp, Warning, TEXT("New potion added to inventory"));
	PotionSlots.Add(Potion);
}

int AInventoryActor::PotionInventoryLength() {
	return PotionSlots.Num();
}


// Item inventory
TSubclassOf<class AItem> AInventoryActor::GetItemSlotAtIndex(int Index) {
	return ItemSlots[Index];
}

void AInventoryActor::AddItemToSlot(TSubclassOf<class AItem> Item) {
	UE_LOG(LogTemp, Warning, TEXT("New item added to inventory"));
	ItemSlots.Add(Item);
}

int AInventoryActor::ItemInventoryLength() {
	return ItemSlots.Num();
}

