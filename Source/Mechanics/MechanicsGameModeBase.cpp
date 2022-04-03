// Copyright Epic Games, Inc. All Rights Reserved.


#include "MechanicsGameModeBase.h"
#include "ThirdPersonCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"


void AMechanicsGameModeBase::BeginPlay() {
	Super::BeginPlay();
	
	AThirdPersonCharacter* Player = Cast<AThirdPersonCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

	if(PlayerHUDClass != nullptr) {
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), PlayerHUDClass);

		if(CurrentWidget)
			CurrentWidget->AddToViewport();
	}
}