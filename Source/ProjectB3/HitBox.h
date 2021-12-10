// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HitBox.generated.h"

UENUM(BlueprintType)
enum class EHitboxEnum : uint8 {
	Strike UMETA(DisplayName = "Strike"),
	Hurtbox UMETA(DisplayName = "Hurtbox")
};

UCLASS()
class PROJECTB3_API AHitBox : public AActor
{
	GENERATED_BODY()
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:	
	// Sets default values for this actor's properties
	AHitBox();

protected:
	//how much damage this hitbox will do
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hitbox")
	float hitboxDamage;

	//where the hitbox will spawn
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hitbox")
	FVector hitboxLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hitbox")
	float launchAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hitbox")
	float damageMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hitbox")
	float launchMultiplier;

	//type of hitbox
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hitbox")
	EHitboxEnum hitboxType;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
