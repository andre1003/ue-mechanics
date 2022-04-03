// Fill out your copyright notice in the Description page of Project Settings.


#include "ThirdPersonCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"
#include "ThirdPersonCharacter.h"
#include "TimerManager.h"
#include "Weapon.h"
#include "Sword.h"
#include "Potion.h"
#include "InventoryActor.h"
#include "MechanicsPlayerController.h"


// Sets default values
AThirdPersonCharacter::AThirdPersonCharacter() {
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArmCamera = CreateDefaultSubobject<USpringArmComponent>(FName("SpringArmCamera"));
	SpringArmCamera->TargetArmLength = 200.f;
	SpringArmCamera->bUsePawnControlRotation = true;
	SpringArmCamera->AddRelativeLocation(FVector(0.f, 80.f, 50.f));
	SpringArmCamera->bEnableCameraLag = true;
	SpringArmCamera->CameraLagSpeed = 40.f;
	SpringArmCamera->SetupAttachment(RootComponent);

	Camera = CreateDefaultSubobject<UCameraComponent>(FName("Camera"));
	Camera->SetupAttachment(SpringArmCamera);

	GetCharacterMovement()->GetNavAgentPropertiesRef().bCanCrouch = true;

	GetCharacterMovement()->AirControl = 0.25f;
	GetCharacterMovement()->CrouchedHalfHeight = 65.f;
	GetCharacterMovement()->GravityScale = 1.5f;
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->MaxWalkSpeed = 300.f;

	////Sword = CreateDefaultSubobject<AWeapon>(FName("Sword"));
	//SwordMesh = CreateAbstractDefaultSubobject<UStaticMeshComponent>(FName("SwordMesh"));
	////SwordMesh->SetupAttachment(RootComponent);
	//SwordMesh->SetRelativeLocation(GetMesh()->GetSocketLocation(FName("WeaponSocket")));
	//SwordMesh->SetCanEverAffectNavigation(false);
	//SwordMesh->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	//

	//ConstructorHelpers::FObjectFinder<UStaticMesh>SwordMeshRef(TEXT("StaticMesh'/Game/Objects/Sword/Sword.Sword'"));
	//if(SwordMeshRef.Succeeded())
	//	SwordMesh->SetStaticMesh(SwordMeshRef.Object);

	//SwordMesh->AttachToComponent(Cast<USceneComponent>(GetMesh()), FAttachmentTransformRules::SnapToTargetNotIncludingScale, FName("WeaponSocket"));


	AutoPossessPlayer = EAutoReceiveInput::Player0;
}


// Called when the game starts or when spawned
void AThirdPersonCharacter::BeginPlay() {
	Super::BeginPlay();

	CurrentWidget = nullptr;

	IsRunning = false;
	IsJumping = false;

	bIsMovingVertical = false;
	bIsMovingHorizontal = false;
	bIsSwordSheathed = false;

	BasicAttackClicks = 0;
	HeavyAttackClicks = 0;
	InventoryIndex = 0;
	
	PlayerStatus = EPlayerStatus::Idle;
	WalkStatus = EWalk::NoWalk;
	//const UEnum* EnumPtr = FindObject<UEnum>(ANY_PACKAGE, TEXT("EPlayerStatus"), true);
	//UE_LOG(LogTemp, Warning, TEXT("Player Status: %s"), *EnumPtr->GetDisplayNameTextByValue(PlayerStatus).ToString());
	
	EAttackCounter = EAttack::None;

	FActorSpawnParameters Params;
	Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	Sword = GetWorld()->SpawnActor<ASword>(BP_Sword, FTransform(), Params);
	Sword->AttachToComponent(Cast<USceneComponent>(GetMesh()), FAttachmentTransformRules::SnapToTargetNotIncludingScale, FName("WeaponSocket"));
	Sword->SetActorRelativeLocation(FVector(0.f, 0.f, 75.f));

	Inventory = GetWorld()->SpawnActor<AInventoryActor>(BP_Inventory, FTransform(), Params);
}


// Called every frame
void AThirdPersonCharacter::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

	if(WalkStatus != EWalk::NoWalk && !bIsInventoryOpen)
		bUseControllerRotationYaw = true;
	else
		bUseControllerRotationYaw = false;
		

	if(bUseWorldLocation) {
		SpringArmCamera->SetWorldLocation(BoomWorldLocation);
		SpringArmCamera->SetRelativeRotation(BoomWorldRotation);
	}
}


// Called to bind functionality to input
void AThirdPersonCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) {
	Super::SetupPlayerInputComponent(PlayerInputComponent);


	// Bind axis
	PlayerInputComponent->BindAxis("Vertical", this, &AThirdPersonCharacter::VerticalMovement);
	PlayerInputComponent->BindAxis("Horizontal", this, &AThirdPersonCharacter::HorizontalMovement);
	PlayerInputComponent->BindAxis("LookVertical", this, &AThirdPersonCharacter::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookHorizontal", this, &AThirdPersonCharacter::AddControllerYawInput);


	// Bind actions
	PlayerInputComponent->BindAction("Jump", EInputEvent::IE_Pressed, this, &AThirdPersonCharacter::StartJump);
	//PlayerInputComponent->BindAction("Jump", EInputEvent::IE_Released, this, &AThirdPersonCharacter::StopJump);

	PlayerInputComponent->BindAction("Run", EInputEvent::IE_Pressed, this, &AThirdPersonCharacter::StartRunning);
	PlayerInputComponent->BindAction("Run", EInputEvent::IE_Released, this, &AThirdPersonCharacter::StopRunning);

	PlayerInputComponent->BindAction("Crouch", EInputEvent::IE_Pressed, this, &AThirdPersonCharacter::StartCrouch);
	PlayerInputComponent->BindAction("Crouch", EInputEvent::IE_Released, this, &AThirdPersonCharacter::Uncrouch);

	//PlayerInputComponent->BindAction("Dodge", EInputEvent::IE_Pressed, this, &AThirdPersonCharacter::Dodge);

	PlayerInputComponent->BindAction("LightAttack", EInputEvent::IE_Pressed, this, &AThirdPersonCharacter::TestBasicAttack);
	PlayerInputComponent->BindAction("HeavyAttack", EInputEvent::IE_Pressed, this, &AThirdPersonCharacter::StartHeavyAttack);

	PlayerInputComponent->BindAction("WeaponChange", EInputEvent::IE_Pressed, this, &AThirdPersonCharacter::ChangeWeapon);
	PlayerInputComponent->BindAction("StoreWeapon", EInputEvent::IE_Pressed, this, &AThirdPersonCharacter::StoreWeapon);

	//PlayerInputComponent->BindAction("UsePotion", EInputEvent::IE_Pressed, this, &AThirdPersonCharacter::UsePotion);

	PlayerInputComponent->BindAction("Inventory", EInputEvent::IE_Pressed, this, &AThirdPersonCharacter::DisplayInventoryUI);
}


// Movement
void AThirdPersonCharacter::VerticalMovement(float Value) {
	//if(!IsAttacking) {
	//	AddMovementInput(GetActorForwardVector() * Value);
	//	VerticalMove = Value;

	//	if(Value != 0.f && PlayerStatus != EPlayerStatus::Jumping && PlayerStatus != EPlayerStatus::Sheath && PlayerStatus != EPlayerStatus::Withdraw) {
	//		bIsMovingVertical = true;

	//		// Setting PlayerStatus enum
	//		if(PlayerStatus != EPlayerStatus::Running) {
	//			if(Value < 0.f)
	//				PlayerStatus = EPlayerStatus::WalkingBackward;
	//			else
	//				PlayerStatus = EPlayerStatus::WalkingForward;
	//		}
	//	}
	//	else if(PlayerStatus != EPlayerStatus::Jumping && PlayerStatus != EPlayerStatus::Sheath && PlayerStatus != EPlayerStatus::Withdraw) {
	//		bIsMovingVertical = false;

	//		// Setting PlayerStatus enum
	//		if(!bIsMovingVertical && !bIsMovingHorizontal && EAttackCounter == EAttack::None)
	//			PlayerStatus = EPlayerStatus::Idle;
	//	}
	//}

	if(!IsAttacking && !IsJumping && (PlayerStatus == EPlayerStatus::Idle || PlayerStatus == EPlayerStatus::Walking || PlayerStatus == EPlayerStatus::Crouching || PlayerStatus == EPlayerStatus::Running)) {
		AddMovementInput(GetActorForwardVector() * Value);
		VerticalMove = Value;

		if(Value != 0.f) {
			bIsMovingVertical = true;

			// Setting PlayerStatus enum
			if(PlayerStatus != EPlayerStatus::Running) {

				if(Value < 0.f) {
					if(PlayerStatus == EPlayerStatus::Crouching)
						WalkStatus = EWalk::CrouchingBackward;
					else {
						PlayerStatus = EPlayerStatus::Walking;
						WalkStatus = EWalk::WalkingBackward;
					}
				}
					
				else {
					if(PlayerStatus == EPlayerStatus::Crouching)
						WalkStatus = EWalk::CrouchingForward;
					else {
						PlayerStatus = EPlayerStatus::Walking;
						WalkStatus = EWalk::WalkingForward;
					}
				}
					
			}
		}
		else {
			bIsMovingVertical = false;

			// Setting PlayerStatus enum
			if(!bIsMovingVertical && !bIsMovingHorizontal && EAttackCounter == EAttack::None) {
				WalkStatus = EWalk::NoWalk;

				if(PlayerStatus != EPlayerStatus::Crouching)
					PlayerStatus = EPlayerStatus::Idle;
			}		
		}
	}
}

void AThirdPersonCharacter::HorizontalMovement(float Value) {
	//if(!IsAttacking) {
	//	AddMovementInput(GetActorRightVector() * Value);
	//	HorizontalMove = Value;

	//	if(Value != 0.f && PlayerStatus != EPlayerStatus::Jumping && PlayerStatus != EPlayerStatus::Sheath && PlayerStatus != EPlayerStatus::Withdraw) {
	//		bIsMovingHorizontal = true;

	//		// Setting PlayerStatus enum
	//		if(PlayerStatus != EPlayerStatus::Running) {
	//			if(Value < 0.f)
	//				PlayerStatus = EPlayerStatus::WalkingLeft;
	//			else
	//				PlayerStatus = EPlayerStatus::WalkingRight;
	//		}

	//	}
	//	else if(PlayerStatus != EPlayerStatus::Jumping && PlayerStatus != EPlayerStatus::Sheath && PlayerStatus != EPlayerStatus::Withdraw) {
	//		bIsMovingHorizontal = false;

	//		// Setting PlayerStatus enum
	//		if(!bIsMovingVertical && !bIsMovingHorizontal && EAttackCounter == EAttack::None)
	//			PlayerStatus = EPlayerStatus::Idle;
	//	}
	//}
	
	if(!IsAttacking && !IsJumping && (PlayerStatus == EPlayerStatus::Idle || PlayerStatus == EPlayerStatus::Walking || PlayerStatus == EPlayerStatus::Crouching || PlayerStatus == EPlayerStatus::Running)) {
		AddMovementInput(GetActorRightVector() * Value);
		HorizontalMove = Value;

		if(Value != 0.f) {
			bIsMovingHorizontal = true;

			// Setting PlayerStatus enum
			if(PlayerStatus != EPlayerStatus::Running) {
				if(Value < 0.f) {
					if(PlayerStatus == EPlayerStatus::Crouching)
						WalkStatus = EWalk::CrouchingLeft;
					else {
						PlayerStatus = EPlayerStatus::Walking;
						WalkStatus = EWalk::WalkingLeft;
					}
				}
				else {
					if(PlayerStatus == EPlayerStatus::Crouching)
						WalkStatus = EWalk::CrouchingRight;
					else {
						PlayerStatus = EPlayerStatus::Walking;
						WalkStatus = EWalk::WalkingRight;
					}
				}
			}

		}
		else if(PlayerStatus) {
			bIsMovingHorizontal = false;

			// Setting PlayerStatus enum
			if(!bIsMovingVertical && !bIsMovingHorizontal && EAttackCounter == EAttack::None) {
				WalkStatus = EWalk::NoWalk;

				if(PlayerStatus != EPlayerStatus::Crouching)
					PlayerStatus = EPlayerStatus::Idle;
			}
		}
	}
}


// Run
void AThirdPersonCharacter::StartRunning() {
	if((bIsMovingVertical || bIsMovingHorizontal) && CanRun) {
		IsRunning = true;
		PlayerStatus = EPlayerStatus::Running;
		GetCharacterMovement()->MaxWalkSpeed = 1200.f;
		DrainStamina();
	}
}

void AThirdPersonCharacter::StopRunning() {
	IsRunning = false;

	if(!IsJumping) {
		PlayerStatus = EPlayerStatus::Walking;

		if(HorizontalMove > 0.f)
			WalkStatus = EWalk::WalkingRight;
		else if(HorizontalMove < 0.f)
			WalkStatus = EWalk::WalkingLeft;
		else if(VerticalMove > 0.f)
			WalkStatus = EWalk::WalkingForward;
		else if(VerticalMove < 0.f)
			WalkStatus = EWalk::WalkingBackward;
		else {
			WalkStatus = EWalk::NoWalk;
			PlayerStatus = EPlayerStatus::Idle;
		}
	}

	GetCharacterMovement()->MaxWalkSpeed = 300.f;
	RegenStamina();
}


// Drain stamina
void AThirdPersonCharacter::DrainStamina() {
	if(IsRunning) {
		StaminaPoints = FMath::Clamp(StaminaPoints - 0.15f, 0.f, 100.f);

		if(StaminaPoints <= 0.f) {
			CanRun = false;
			StopRunning();
		}
		else {
			GetWorldTimerManager().SetTimer(DrainTimer, this, &AThirdPersonCharacter::DrainStamina, 0.01f, false);
		}
	}
}

void AThirdPersonCharacter::RegenStamina() {
	if(!IsRunning && StaminaPoints < 100.f) {
		StaminaPoints = FMath::Clamp(StaminaPoints + 1.f, 0.f, 100.f);
		GetWorldTimerManager().SetTimer(DrainTimer, this, &AThirdPersonCharacter::RegenStamina, 0.01f, false);
		
		if(StaminaPoints >= 30.f)
			CanRun = true;
	}
}


// Crouch
void AThirdPersonCharacter::StartCrouch() {
	if(PlayerStatus != EPlayerStatus::Running && PlayerStatus != EPlayerStatus::Jumping) {
		Crouch();
		PlayerStatus = EPlayerStatus::Crouching;
	}
}

void AThirdPersonCharacter::Uncrouch() {
	UnCrouch();

	if(!IsRunning && !IsJumping) {
		PlayerStatus = EPlayerStatus::Walking;

		if(HorizontalMove > 0.f)
			WalkStatus = EWalk::WalkingRight;
		else if(HorizontalMove < 0.f)
			WalkStatus = EWalk::WalkingLeft;
		else if(VerticalMove > 0.f)
			WalkStatus = EWalk::WalkingForward;
		else if(VerticalMove < 0.f)
			WalkStatus = EWalk::WalkingBackward;
		else {
			WalkStatus = EWalk::NoWalk;
			PlayerStatus = EPlayerStatus::Idle;
		}
	}
	else if(IsRunning)
		PlayerStatus = EPlayerStatus::Running;
	else if(IsJumping)
		PlayerStatus = EPlayerStatus::Jumping;
}


// Dodge
void AThirdPersonCharacter::Dodge() {
	/* I FOUND THE SOLUTION: TIMER!
	* For this, I'll need to set a timer to wait for setting dodge animation at AnimationBlueprint.
	* After the time is up, reset the IsDodging variable to false and life goes on.
	*/
	if(!IsJumping) {
		IsDodging = true;
		LaunchCharacter(GetActorRightVector() * 3000.f * HorizontalMove, false, false); // This applys a force with a given velocity
		GetWorldTimerManager().SetTimer(DodgeTimer, this, &AThirdPersonCharacter::StopDodge, 0.2f, false); // Life savior 
	}
}

void AThirdPersonCharacter::StopDodge() {
	IsDodging = false;
	GetWorldTimerManager().ClearTimer(DodgeTimer);
}


// Jump
void AThirdPersonCharacter::StartJump() {
	if(!IsDodging) {
		IsJumping = true;
		PlayerStatus = EPlayerStatus::Jumping;
		Jump();
		GetCapsuleComponent()->SetCapsuleHalfHeight(60.f);
		GetWorldTimerManager().SetTimer(JumpTimer, this, &AThirdPersonCharacter::StopJump, 0.9f, false);
	}
}

void AThirdPersonCharacter::StopJump() {
	IsJumping = false;
	if(IsRunning)
		PlayerStatus = EPlayerStatus::Running;
	else
		PlayerStatus = EPlayerStatus::Idle;
	StopJumping();
	GetCapsuleComponent()->SetCapsuleHalfHeight(88.f);
	GetWorldTimerManager().ClearTimer(JumpTimer);
}



//void AThirdPersonCharacter::StartAttack() {
//	IsAttacking = true;
//	GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Flying); // Allows the animation change Z axis at RootMotion
//
//	DisableInput(GetWorld()->GetFirstPlayerController()); // This prevent player to walk around while animation is playing, messing up with player rotation
//
//	GetCapsuleComponent()->SetCapsuleHalfHeight(25.f); // This handles the floating animation (thanks god)
//	GetWorldTimerManager().SetTimer(AttackTimer, this, &AThirdPersonCharacter::StopAttack, 3.5f, false);
//}

// Attack
////////////
// This is working properly. FINALLY!!
////////////
void AThirdPersonCharacter::StopAttack() {
	if(EAttackCounter == EAttack::HeavyAttack1)
		ResetCamera();

	Sword->ResetCanAttack();

	if(CurrentWidget != nullptr)
		CanAttack = false;
	else
		CanAttack = true;

	IsAttacking = false;

	GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking);
	PlayerStatus = EPlayerStatus::Idle;
	
	if(EAttackCounter == EAttack::None || EAttackCounter == EAttack::BasicAttack1)
		GetWorldTimerManager().SetTimer(BasicAttackCooldown, this, &AThirdPersonCharacter::BasicAttackSetCooldown, 2.f, false);
	else if(EAttackCounter == EAttack::BasicAttack3 || EAttackCounter == EAttack::HeavyAttack1) { // This shit is not working ;-;
		EAttackCounter = EAttack::None;
		BasicAttackSetCooldown();
	}
	else
		GetWorldTimerManager().ClearTimer(BasicAttackCooldown);

	EAttackCounter = EAttack::None;
	GetCapsuleComponent()->SetCapsuleHalfHeight(88.f);
	GetWorldTimerManager().ClearTimer(BasicAttackTimer);
}

void AThirdPersonCharacter::BasicAttackSetCooldown() {
	
	
	GetWorldTimerManager().ClearTimer(BasicAttackCooldown);
	GetWorldTimerManager().ClearTimer(BasicAttackTimer);
	BasicAttackClicks = 0;
}

void AThirdPersonCharacter::StartBasicAttack() {
	//UE_LOG(LogTemp, Warning, TEXT("Attack Timer: %d"), AttackTimer.IsValid()); // This can help wait for animation to end so the next can be played
	if(CanAttack) {
		GetWorldTimerManager().ClearTimer(BasicAttackTimer);
		GetWorldTimerManager().ClearTimer(BasicAttackCooldown);

		CanAttack = false;
		//DisableInput(GetWorld()->GetFirstPlayerController());
		PlayerStatus = EPlayerStatus::NoAnim;

		if(EAttackCounter == EAttack::None) {
			EAttackCounter = EAttack::BasicAttack1;
			GetWorldTimerManager().SetTimer(BasicAttackTimer, this, &AThirdPersonCharacter::StopAttack, 0.7f, false);
		}
		else if(EAttackCounter == EAttack::BasicAttack1) {
			EAttackCounter = EAttack::BasicAttack2;
			GetWorldTimerManager().SetTimer(BasicAttackTimer, this, &AThirdPersonCharacter::StopAttack, 0.9f, false);
		}
		else if(EAttackCounter == EAttack::BasicAttack2) {
			EAttackCounter = EAttack::BasicAttack3;
			GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Flying); // Allows the animation change Z axis at RootMotion
			GetCapsuleComponent()->SetCapsuleHalfHeight(20.f);
			GetWorldTimerManager().SetTimer(BasicAttackTimer, this, &AThirdPersonCharacter::StopAttack, 3.5f, false);
		}
	}
}

//////////////
/// Testing Basic Attack
/////////////
void AThirdPersonCharacter::TestBasicAttack() {
	if(ManaPoints - Sword->GetManaCost() < 0 || StaminaPoints - Sword->GetStaminaCost() < 0) {
		UE_LOG(LogTemp, Error, TEXT("You cannot attack, no mana or stamina available!"));
		CanAttack = false;
		IsAttacking = false;
		//GetWorldTimerManager().ClearTimer(BasicAttackTimer);
		//GetWorldTimerManager().ClearTimer(BasicAttackCooldown);
		//EAttackCounter = EAttack::None;
		//PlayerStatus = EPlayerStatus::Idle;
	}
	
	if(CanAttack) {
		//UE_LOG(LogTemp, Warning, TEXT("Attack Click: %d"), AttackClicks);

		SetMana(Sword->GetManaCost(), true);
		SetStamina(Sword->GetStaminaCost(), true);

		GetWorldTimerManager().ClearTimer(BasicAttackTimer);
		GetWorldTimerManager().ClearTimer(BasicAttackCooldown);
		BasicAttackClicks++;
		
		CanAttack = false;
		IsAttacking = true;

		PlayerStatus = EPlayerStatus::NoAnim;
		Sword->SetIsAttacking(true);

		if(BasicAttackClicks == 1) {
			EAttackCounter = EAttack::BasicAttack1;
			GetWorldTimerManager().SetTimer(BasicAttackTimer, this, &AThirdPersonCharacter::StopAttack, 0.9f, false);
		}
		else if(BasicAttackClicks == 2) {
			EAttackCounter = EAttack::BasicAttack2;
			GetWorldTimerManager().SetTimer(BasicAttackTimer, this, &AThirdPersonCharacter::StopAttack, 0.9f, false);
		}
		else if(BasicAttackClicks >= 3) {
			EAttackCounter = EAttack::BasicAttack3;
			GetCharacterMovement()->StopMovementImmediately();
			GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Flying); // Allows the animation change Z axis at RootMotion
			GetCapsuleComponent()->SetCapsuleHalfHeight(20.f);
			GetWorldTimerManager().SetTimer(BasicAttackTimer, this, &AThirdPersonCharacter::StopAttack, 1.2f, false);
		}
	}
}

// Heavy Attack
/////////
// Working, but when player starts to walk, things go really crazy
/////////
void AThirdPersonCharacter::StartHeavyAttack() {
	if(CanAttack) {
		GetWorldTimerManager().ClearTimer(HeavyAttackTimer);
		GetWorldTimerManager().ClearTimer(HeavyAttackCooldown);

		SetMana(Sword->GetManaCost(), true);
		SetStamina(Sword->GetStaminaCost(), true);

		HeavyAttackClicks++;
		CanAttack = false;
		PlayerStatus = EPlayerStatus::NoAnim;
		Sword->SetIsAttacking(true);

		if(HeavyAttackClicks > 0) {
			CameraFreeze();
			EAttackCounter = EAttack::HeavyAttack1;
			GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Flying); // Allows the animation change Z axis at RootMotion
			GetCapsuleComponent()->SetCapsuleHalfHeight(20.f);
			GetWorldTimerManager().SetTimer(HeavyAttackTimer, this, &AThirdPersonCharacter::StopAttack, 3.5f, false);
		}
	}
}


// Camera freeze on attack
void AThirdPersonCharacter::CameraFreeze() {

	SpringArmCamera->bUsePawnControlRotation = false;
	SpringArmCamera->bInheritPitch = false;
	SpringArmCamera->bInheritRoll = false;
	SpringArmCamera->bInheritYaw = false;

	SpringArmCamera->SetRelativeLocation(FVector(0.f, 0.f, 100.f));
	SpringArmCamera->TargetArmLength += 100.f;
	BoomWorldLocation = SpringArmCamera->GetComponentLocation();
	BoomWorldRotation = GetCapsuleComponent()->GetComponentRotation() + FRotator(-20.f, 0.f, 0.f);

	bUseWorldLocation = true;
}

// Reset Camera
void AThirdPersonCharacter::ResetCamera() {
	SpringArmCamera->bUsePawnControlRotation = true;
	SpringArmCamera->bInheritPitch = true;
	SpringArmCamera->bInheritRoll = true;
	SpringArmCamera->bInheritYaw = true;
	
	SpringArmCamera->TargetArmLength -= 100.f;
	SpringArmCamera->SetRelativeLocation(FVector(0.f, 80.f, 50.f));

	bUseWorldLocation = false;
}


// Store weapon
void AThirdPersonCharacter::StoreWeapon() {
	EAttackCounter = EAttack::None;

	if(!bIsSwordSheathed) {
		PlayerStatus = EPlayerStatus::Sheath;
		CanAttack = false;
		GetWorldTimerManager().SetTimer(DrawSwordTimer, this, &AThirdPersonCharacter::EndStoreWeapon, 1.24f, false);
	}
	else {
		PlayerStatus = EPlayerStatus::Withdraw;
		CanAttack = true;
		GetWorldTimerManager().SetTimer(DrawSwordTimer, this, &AThirdPersonCharacter::EndStoreWeapon, 0.65f, false);
	}
}

void AThirdPersonCharacter::EndStoreWeapon() {
	GetWorldTimerManager().ClearTimer(DrawSwordTimer);

	if(PlayerStatus == EPlayerStatus::Sheath) {
		bIsSwordSheathed = true;
		Sword->AttachToComponent(Cast<USceneComponent>(GetMesh()), FAttachmentTransformRules::SnapToTargetNotIncludingScale, FName("SheathSocket"));
		Sword->SetActorRelativeLocation(FVector(-10.f, 40.f, -50.f));
		Sword->SetActorRelativeRotation(FRotator(40.f, 90.0f, 170.0f));
	}
	else if(PlayerStatus == EPlayerStatus::Withdraw) {
		bIsSwordSheathed = false;
		Sword->AttachToComponent(Cast<USceneComponent>(GetMesh()), FAttachmentTransformRules::SnapToTargetNotIncludingScale, FName("WeaponSocket"));
		Sword->SetActorRelativeLocation(FVector(0.f, 0.f, 75.f));
	}

	PlayerStatus = EPlayerStatus::Idle;
}


// Change weapon
void AThirdPersonCharacter::ChangeWeapon() {
	Sword->Destroy();

	InventoryIndex++;
	if(InventoryIndex >= Inventory->SwordInventoryLength())
		InventoryIndex = 0;

	FActorSpawnParameters Params;
	Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	Sword = GetWorld()->SpawnActor<ASword>(Inventory->GetSwordSlotAtIndex(InventoryIndex), FTransform(), Params);
	Sword->AttachToComponent(Cast<USceneComponent>(GetMesh()), FAttachmentTransformRules::SnapToTargetNotIncludingScale, FName("WeaponSocket"));
	Sword->SetActorRelativeLocation(FVector(0.f, 0.f, 75.f));
}


// Use potion
void AThirdPersonCharacter::UsePotion(int Index) {
	FActorSpawnParameters Params;
	Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	APotion* Potion = GetWorld()->SpawnActor<APotion>(Inventory->GetPotionSlotAtIndex(Index), FTransform(), Params);

	if(Potion) {
		SetHealth(Potion->GetHealthPoints(), false);
		SetMana(Potion->GetManaPoints(), false);
		SetStamina(Potion->GetStaminaPoints(), false);

		UE_LOG(LogTemp, Error, TEXT("A potion has been used"));
		Potion->Destroy();
	}
}


// Display inventory UI
void AThirdPersonCharacter::DisplayInventoryUI() {
	if(InventoryUIClass != nullptr) {
		AMechanicsPlayerController* PlayerController = Cast<AMechanicsPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));

		if(CurrentWidget == nullptr) {
			PlayerController->ShowMouse();
			
			CanAttack = false;

			SpringArmCamera->bUsePawnControlRotation = false;
			SpringArmCamera->bInheritPitch = false;
			SpringArmCamera->bInheritRoll = false;
			SpringArmCamera->bInheritYaw = false;
			SpringArmCamera->SetRelativeRotation(GetCapsuleComponent()->GetComponentRotation());

			bIsInventoryOpen = true;

			CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), InventoryUIClass);

			if(CurrentWidget)
				CurrentWidget->AddToViewport();
		}
		else {
			PlayerController->HideMouse();

			CanAttack = true;

			SpringArmCamera->bUsePawnControlRotation = true;
			SpringArmCamera->bInheritPitch = true;
			SpringArmCamera->bInheritRoll = true;
			SpringArmCamera->bInheritYaw = true;
			
			bIsInventoryOpen = false;

			CurrentWidget->RemoveFromViewport();
			CurrentWidget = nullptr;
		}
	}
}


// Getters
bool AThirdPersonCharacter::GetIsRunning() {
	return IsRunning;
}

bool AThirdPersonCharacter::GetIsMovingVertical() {
	return bIsMovingVertical;
}

float AThirdPersonCharacter::GetHorizontalMove() {
	return HorizontalMove;
}

float AThirdPersonCharacter::GetVerticalMove() {
	return VerticalMove;
}

bool AThirdPersonCharacter::GetIsDodging() {
	return IsDodging;
}

bool AThirdPersonCharacter::GetIsJumping() {
	return IsJumping;
}


// Health
void AThirdPersonCharacter::SetHealth(float Points, bool bIsDamage) {
	if(bIsDamage) {
		// Remove HealthPoints
		HealthPoints -= Points;

		UE_LOG(LogTemp, Error, TEXT("Player health: %d"), HealthPoints);

		if(HealthPoints <= 0)
			Death();
	}
	else {
		// Add HealhPoints
		HealthPoints += Points;
		UE_LOG(LogTemp, Error, TEXT("Player health: %d"), HealthPoints);
		if(HealthPoints > 100)
			HealthPoints = 100;
	}
}

float AThirdPersonCharacter::GetHealth() {
	return HealthPoints;
}

void AThirdPersonCharacter::Death() {
	GetMesh()->PlayAnimation(DeathAnimation, false);
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	check(PlayerController);
	PlayerController->GetPawn()->DisableInput(PlayerController);
}


// Mana
void AThirdPersonCharacter::SetMana(float Points, bool bUse) {
	if(bUse) {
		// Use mana (remove ManaPoints)
		ManaPoints -= Points;

		UE_LOG(LogTemp, Error, TEXT("Player Mana: %d"), ManaPoints);

		if(ManaPoints < 0)
			ManaPoints = 0;
	}
	else {
		ManaPoints += Points;

		UE_LOG(LogTemp, Error, TEXT("Player Mana: %d"), ManaPoints);

		if(ManaPoints > 100)
			ManaPoints = 100;

		CheckCanAttack();
	}
}

float AThirdPersonCharacter::GetMana() {
	return ManaPoints;
}


// Stamina
void AThirdPersonCharacter::SetStamina(float Points, bool bUse) {
	if(bUse) {
		// Use mana (remove ManaPoints)
		StaminaPoints -= Points;

		UE_LOG(LogTemp, Error, TEXT("Player Stamina: %d"), StaminaPoints);

		if(StaminaPoints < 0)
			StaminaPoints = 0;
	}
	else {
		StaminaPoints += Points;

		UE_LOG(LogTemp, Error, TEXT("Player Stamina: %d"), StaminaPoints);

		if(StaminaPoints > 100)
			StaminaPoints = 100;

		CheckCanAttack();
	}
}

float AThirdPersonCharacter::GetStamina() {
	return StaminaPoints;
}


// Check if player can attack
void AThirdPersonCharacter::CheckCanAttack() {
	if(ManaPoints - Sword->GetManaCost() >= 0 && StaminaPoints - Sword->GetStaminaCost() >= 0 && CurrentWidget == nullptr) {
		CanAttack = true;
	}
}