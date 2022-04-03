// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "Weapon.generated.h"

/**
 *
 */
UCLASS()
class MECHANICS_API AWeapon : public ATriggerBox {
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	AWeapon();
	
	UFUNCTION()
	void OverlapInit(class AActor* OverlappedActor, class AActor* OtherActor);

	UFUNCTION()
	void OverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor);

	/*UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "WeaponMesh", meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* Mesh;*/
};
