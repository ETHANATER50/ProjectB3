#include "ProjectB3Character.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

AProjectB3Character::AProjectB3Character()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate when the controller rotates.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Create a camera boom attached to the root (capsule)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Rotation of the character should not affect rotation of boom
	CameraBoom->bDoCollisionTest = false;
	CameraBoom->TargetArmLength = 500.f;
	CameraBoom->SocketOffset = FVector(0.f,0.f,75.f);
	CameraBoom->SetRelativeRotation(FRotator(0.f,180.f,0.f));

	// Create a camera and attach to boom
	SideViewCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	SideViewCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	SideViewCameraComponent->bUsePawnControlRotation = false; // We don't want the controller rotating the camera

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Face in the direction we are moving..
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->GravityScale = 2.f;
	GetCharacterMovement()->AirControl = 0.80f;
	GetCharacterMovement()->JumpZVelocity = 1000.f;
	GetCharacterMovement()->GroundFriction = 3.f;
	GetCharacterMovement()->MaxWalkSpeed = 600.f;
	GetCharacterMovement()->MaxFlySpeed = 600.f;

	damageCounter = 0;
	isStandardAttacking = false;
	isCharging = false;
	hasUsedBasicAttack = false;
	hasUsedForwardAttack = false;
	maxInputHoldTime = 3;
	playerNumber = 0;
	//characterClass = CharacterClass::VE_Default;

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
}

//////////////////////////////////////////////////////////////////////////
// Input

void AProjectB3Character::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("DebugDamage", IE_Released, this, &AProjectB3Character::debugDamage);
	PlayerInputComponent->BindAction("StandardAttack", IE_Released, this, &AProjectB3Character::standardAttack);
	PlayerInputComponent->BindAction("ForwardSmash", IE_Pressed, this, &AProjectB3Character::forwardAttack);
	PlayerInputComponent->BindAction("ForwardSmash", IE_Released, this, &AProjectB3Character::forwardSmash);
	PlayerInputComponent->BindAxis("MoveRight", this, &AProjectB3Character::MoveRight);

	PlayerInputComponent->BindTouch(IE_Pressed, this, &AProjectB3Character::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &AProjectB3Character::TouchStopped);
}

float AProjectB3Character::determineDamageCounterValue(float damage)
{
	if (damageCounter + damage >= 1000) {
		damageCounter = 999;
	}
	else if (damageCounter + damage < 0) {
		damageCounter = 0;
	}
	else {
		damageCounter += damage;
	}

	return damageCounter;
}

void AProjectB3Character::resetDamageCounter()
{
	damageCounter = 0;
}

void AProjectB3Character::standardAttack()
{

	isStandardAttacking = true;
}

void AProjectB3Character::forwardAttack()
{
	if (!isCharging) {
		hasUsedForwardAttack = true;
		isCharging = true;
		GetWorld()->GetTimerManager().SetTimer(inputHeldTimer, this, &AProjectB3Character::forwardSmash, maxInputHoldTime, false);
	}
}

void AProjectB3Character::forwardSmash()
{
	if (isCharging) {
		hasUsedForwardAttack = true;
		isCharging = false;
	}
}



void AProjectB3Character::debugDamage()
{
	determineDamageCounterValue(5);
}

void AProjectB3Character::MoveRight(float Value)
{
	// add movement in that direction
	AddMovementInput(FVector(0.f,-1.f,0.f), Value);
}



void AProjectB3Character::TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	// jump on any touch
	Jump();
}

void AProjectB3Character::TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	StopJumping();
}

