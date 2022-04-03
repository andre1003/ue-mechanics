// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ThirdPersonCharacter.generated.h"

UENUM(BlueprintType)
enum EPlayerStatus {
	Idle				= 0		UMETA(DisplayName = "Idle"),
	Walking				= 1		UMETA(DisplayName = "Walking"),
	//WalkingForward		= 1		UMETA(DisplayName = "WalkingForward"),
	//WalkingBackward		= 2		UMETA(DisplayName = "WalkingBackward"),
	//WalkingRight		= 3		UMETA(DisplayName = "WalkingRight"),
	//WalkingLeft			= 4		UMETA(DisplayName = "WalkingLeft"),
	Running				= 5		UMETA(DisplayName = "Running"),
	Jumping				= 6		UMETA(DisplayName = "Jumping"),
	Crouching			= 7		UMETA(DisplayName = "Crouching"),
	Dodging				= 8		UMETA(DisplayName = "Dodging"),
	Sheath				= 9		UMETA(DisplayName = "Sheath"),
	Withdraw			= 10	UMETA(DisplayName = "Withdraw"),
	NoAnim				= 11	UMETA(DisplayName = "NoAnim"),
};

UENUM(BlueprintType)
enum EAttack {
	None			= 0 UMETA(DisplayName = "None"),
	BasicAttack1	= 1 UMETA(DisplayName = "BasicAttack1"),
	BasicAttack2	= 2 UMETA(DisplayName = "BasicAttack2"),
	BasicAttack3	= 3 UMETA(DisplayName = "BasicAttack3"),
	HeavyAttack1	= 4 UMETA(DisplayName = "HeavyAttack1"),
};

UENUM(BlueprintType)
enum EWalk {
	WalkingForward		= 0		UMETA(DisplayName = "WalkingForward"),
	WalkingBackward		= 1		UMETA(DisplayName = "WalkingBackward"),
	WalkingRight		= 2		UMETA(DisplayName = "WalkingRight"),
	WalkingLeft			= 3		UMETA(DisplayName = "WalkingLeft"),
	CrouchingForward	= 4		UMETA(DisplayName = "CrouchingForward"),
	CrouchingBackward	= 5		UMETA(DisplayName = "CrouchingBackward"),
	CrouchingRight		= 6		UMETA(DisplayName = "CrouchingRight"),
	CrouchingLeft		= 7		UMETA(DisplayName = "CrouchingLeft"),
	NoWalk				= 8		UMETA(DisplayName = "None"),
};

UCLASS()
class MECHANICS_API AThirdPersonCharacter : public ACharacter {
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AThirdPersonCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	// Movement
	void VerticalMovement(float Value);
	void HorizontalMovement(float Value);

	void StartRunning();
	void StopRunning();

	void DrainStamina();
	void RegenStamina();

	void StartCrouch();
	void Uncrouch();

	void Dodge();
	void StopDodge();

	void StartJump();
	void StopJump();

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool IsRunning = false;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool IsJumping = false;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool bIsMovingVertical = false;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool bIsMovingHorizontal = false;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	float HorizontalMove = 0.f;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	float VerticalMove = 0.f;

	UPROPERTY(BlueprintReadWrite, Category = "Movement")
	bool IsDodging = false;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool CanRun = true;

	// Timers
	FTimerHandle DodgeTimer, JumpTimer, BasicAttackTimer, HeavyAttackTimer, BasicAttackCooldown, HeavyAttackCooldown, DrawSwordTimer, DrainTimer;


	// Attack
	void StopAttack();
	void BasicAttackSetCooldown();
	void StartBasicAttack();
	void TestBasicAttack();
	void StartHeavyAttack();

	UPROPERTY(BlueprintReadOnly, Category = "Attack")
	bool CanAttack = true;

	UPROPERTY(BlueprintReadOnly, Category = "Attack")
	bool IsAttacking = false;

	UPROPERTY(BlueprintReadOnly, Category = "Attack")
	TEnumAsByte<EAttack> EAttackCounter;

	UPROPERTY(BlueprintReadOnly, Category = "Attack")
	int BasicAttackClicks = 0;

	UPROPERTY(BlueprintReadOnly, Category = "Attack")
	int HeavyAttackClicks = 0;


	// Camera
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class USpringArmComponent* SpringArmCamera;
	
	void CameraFreeze();
	void ResetCamera();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	bool bUseWorldLocation = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	FVector BoomWorldLocation;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	FRotator BoomWorldRotation;


	// Player status
	UPROPERTY(BlueprintReadWrite, Category = "PlayerStatus")
	TEnumAsByte<EPlayerStatus> PlayerStatus;

	UPROPERTY(BlueprintReadWrite, Category = "PlayerStatus")
	TEnumAsByte<EWalk> WalkStatus;


	// Weapon
	UPROPERTY(EditAnywhere, Category = "Weapon")
	TSubclassOf<class ASword> BP_Sword;

	UPROPERTY(BlueprintReadOnly, Category = "Weapon")
	bool bIsSwordSheathed = false;

	void StoreWeapon();
	void EndStoreWeapon();


	// Inventory
	UPROPERTY(EditAnywhere, Category = "Inventory")
	TSubclassOf<class AInventoryActor> BP_Inventory;

	UPROPERTY(BlueprintReadOnly, Category = "Inventory")
	int InventoryIndex = 0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Inventory")
	TSubclassOf<class UUserWidget> InventoryUIClass;

	UPROPERTY()
	class UUserWidget* CurrentWidget;
	
	UPROPERTY(EditAnywhere, Category = "Inventory")
	bool bIsInventoryOpen = false;

	void ChangeWeapon();	void DisplayInventoryUI();


	// Animations
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animations")
	UAnimationAsset* DeathAnimation;


	/* PLAYER STATS */
	// Health
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float HealthPoints = 100;

	void Death();


	// Mana
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float ManaPoints = 50;


	// Stamina
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float StaminaPoints = 50;

	void CheckCanAttack();




public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	bool GetIsRunning();

	UFUNCTION()
	bool GetIsMovingVertical();

	UFUNCTION()
	float GetHorizontalMove();
	
	UFUNCTION()
	float GetVerticalMove();

	UFUNCTION()
	bool GetIsDodging();

	UFUNCTION()
	bool GetIsJumping();

	class ASword* Sword;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Inventory")
	class AInventoryActor* Inventory;

	UFUNCTION(BlueprintCallable)
	void UsePotion(int Index);


	// Stats
	void SetHealth(float Points, bool bIsDamage);
	float GetHealth();

	void SetMana(float Points, bool bUse);
	float GetMana();

	void SetStamina(float Points, bool bUse);
	float GetStamina();
};
