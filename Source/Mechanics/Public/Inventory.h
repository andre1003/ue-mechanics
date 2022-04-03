// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 *
 */
class MECHANICS_API Inventory {
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Slots")
	TArray<TSubclassOf<class ASword>>* SwordSlots;

public:
	Inventory();
	~Inventory();

	TSubclassOf<class ASword> GetSlotAtIndex(int Index);
	void AddSwordToSlot(TSubclassOf<class ASword> Sword);
};
