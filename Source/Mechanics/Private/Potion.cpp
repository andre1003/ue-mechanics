// Fill out your copyright notice in the Description page of Project Settings.


#include "Potion.h"
#include "ThirdPersonCharacter.h"


// Sets default values
APotion::APotion() {
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APotion::BeginPlay() {
	Super::BeginPlay();

}

// Called every frame
void APotion::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

}

float APotion::GetHealthPoints() {
	return HealthPoints;
}

float APotion::GetManaPoints() {
	return ManaPoints;
}

float APotion::GetStaminaPoints() {
	return StaminaPoints;
}
