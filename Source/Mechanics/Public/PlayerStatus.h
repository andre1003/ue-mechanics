// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PlayerStatus.generated.h"

/**
 * 
 */

// Enum
UENUM(BlueprintType)
enum EStatus {
	Idle		UMETA(DisplayName = "Idle"),
	Walking		UMETA(DisplayName = "Walking"),
	Running		UMETA(DisplayName = "Running"),
	Attacking	UMETA(DisplayName = "Attacking"),
	Crouching	UMETA(DisplayName = "Crouching"),
	Dodging		UMETA(DisplayName = "Dodging"),
};