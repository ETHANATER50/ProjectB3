// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ProjectB3GameMode.generated.h"

UCLASS(minimalapi)
class AProjectB3GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AProjectB3GameMode();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameMode")
	int players;
};



