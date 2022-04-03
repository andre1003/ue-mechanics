// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerAnimInstance.h"

void UPlayerAnimInstance::SetRootMotion(bool bEnableRootMotion) {
	if(bEnableRootMotion) {
		this->RootMotionMode = ERootMotionMode::RootMotionFromMontagesOnly;
	}
	else {
		this->RootMotionMode = ERootMotionMode::RootMotionFromEverything;
	}
}