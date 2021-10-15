#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
//#include "BaseGameInstance.h"
#include "ProjectB3Character.generated.h"

USTRUCT()
struct FAttack {
	GENERATED_BODY()

	UPROPERTY()
	int damage;
};

UCLASS(config=Game)
class AProjectB3Character : public ACharacter
{
	GENERATED_BODY()

	/** Side view camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* SideViewCameraComponent;

	/** Camera boom positioning the camera beside the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	//protected functions
protected:

	/** Called for side to side input */
	UFUNCTION(BlueprintCallable)
	void MoveRight(float Val);

	/** Handle touch inputs. */
	void TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location);

	/** Handle touch stop event. */
	void TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location);

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End of APawn interface

	//add or subtract damage (add is hurt, subtract is heal)
	UFUNCTION(BlueprintCallable)
	float determineDamageCounterValue(float damage);

	//reset damage to 0
	UFUNCTION(BlueprintCallable)
	void resetDamageCounter();

	UFUNCTION(BlueprintCallable)
	void standardAttack();

	UFUNCTION(BlueprintCallable)
	void forwardAttack();

	UFUNCTION(BlueprintCallable)
	void forwardSmash();

	//test function to make sure damage updates
	void debugDamage();

	//protected properties
protected:

	//boolean used to denote charging an attack
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	bool isCharging;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	bool hasUsedBasicAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	bool hasUsedForwardAttack;

	float maxInputHoldTime;

	FTimerHandle inputHeldTimer;

	//field to make class visible and adjustable in blueprints
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	//CharacterClass characterClass;

	//boolean to trigger standard attacks
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	bool isStandardAttacking;

	//field to store and make visible the amount of damage a character has taken
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	float damageCounter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	int playerNumber;

public:
	AProjectB3Character();

	/** Returns SideViewCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetSideViewCameraComponent() const { return SideViewCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
};
