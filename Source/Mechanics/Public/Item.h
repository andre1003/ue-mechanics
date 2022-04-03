// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "Item.generated.h"

UENUM(BlueprintType)
enum EItemType {
	Sword	= 0 UMETA(DisplayName = "Sword"),
	Potion	= 1 UMETA(DisplayName = "Potion"),
};

UCLASS()
class MECHANICS_API AItem : public ATriggerBox {
	GENERATED_BODY()

public:
	AItem();

protected:
	virtual void BeginPlay() override;

public:
	UFUNCTION()
	void OverlapInit(AActor* OverlappedActor, AActor* OtherActor);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemType")
	TEnumAsByte<EItemType> EType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemType")
	TSubclassOf<AActor> BP_Item;

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InventoryImage")
	UTexture2D* ItemSprite;

	UFUNCTION()
	UTexture2D* GetItemSprite();*/
};