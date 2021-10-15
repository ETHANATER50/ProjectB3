// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ProjectB3Character.h"
#include "ProjectB3GameMode.generated.h"

UCLASS(minimalapi)
class AProjectB3GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AProjectB3GameMode();

	//number of current players
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameMode")
	int numPlayers;

	//array of player object pointers
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameMode")
	TArray<AProjectB3Character*> players;
};



