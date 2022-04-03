// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"
#include "ThirdPersonCharacter.h"
#include "InventoryActor.h"

AItem::AItem() {
	OnActorBeginOverlap.AddDynamic(this, &AItem::OverlapInit);
}

void AItem::BeginPlay() {
	Super::BeginPlay();
}

void AItem::OverlapInit(AActor* OverlappedActor, AActor* OtherActor) {
	if(OtherActor) {
		AThirdPersonCharacter* Character = Cast<AThirdPersonCharacter>(OtherActor);
		if(Character) {
			if(EType == EItemType::Sword) {
				TSubclassOf<ASword> Sword = BP_Item;
				Character->Inventory->AddSwordToSlot(Sword);
				Destroy();
			}
			else if(EType == EItemType::Potion) {
				TSubclassOf<APotion> Potion = BP_Item;
				Character->Inventory->AddPotionToSlot(Potion);
				Destroy();
			}
		}
		
	}
}

//UTexture2D* AItem::GetItemSprite() {
//	return ItemSprite;
//}
