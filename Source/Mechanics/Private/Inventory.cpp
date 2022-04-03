// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory.h"

Inventory::Inventory() {	
}

Inventory::~Inventory() {
}

TSubclassOf<class ASword> Inventory::GetSlotAtIndex(int Index) {
	return SwordSlots->operator[](Index);
}

void Inventory::AddSwordToSlot(TSubclassOf<class ASword> Sword) {
}
