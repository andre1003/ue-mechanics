// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"


AWeapon::AWeapon() {
	//PrimaryActorTick.bCanEverTick = true;

	/*Mesh = CreateDefaultSubobject<UStaticMeshComponent>(FName("Mesh"));
	Mesh->SetRelati(FVector(0.f, 0.f, 0.f))*/
	OnActorBeginOverlap.AddDynamic(this, &AWeapon::OverlapInit);
	OnActorEndOverlap.AddDynamic(this, &AWeapon::OverlapEnd);
}

void AWeapon::BeginPlay() {
	Super::BeginPlay();
}

void AWeapon::OverlapInit(class AActor* OverlappedActor, class AActor* OtherActor) {
	//UE_LOG(LogTemp, Warning, TEXT("Sobrepondo: %s"), *OverlappedActor->GetName());
	UE_LOG(LogTemp, Warning, TEXT("Sobrepondo algo"));
}

void AWeapon::OverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor) {
	UE_LOG(LogTemp, Warning, TEXT("Deixando de sobrepor"));
}
