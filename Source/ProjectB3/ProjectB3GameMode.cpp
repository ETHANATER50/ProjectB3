// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectB3GameMode.h"
#include "ProjectB3Character.h"
#include "UObject/ConstructorHelpers.h"

AProjectB3GameMode::AProjectB3GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	numPlayers = 3;
}
