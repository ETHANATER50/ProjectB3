#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "BaseGameInstance.generated.h"

//enum to differentiate between characters
UENUM(BlueprintType)
enum class CharacterClass : uint8 {
	VE_Default  UMETA(DisplayName = "Mannequin"),
	VE_Default2 UMETA(DisplayName = "Mannequin 2")
};

USTRUCT(BlueprintType)
struct FPlayerDetails {
	GENERATED_BODY()


public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	FString playerName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player References")
	CharacterClass characterClass;
};



UCLASS()
class PROJECTB3_API UBaseGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player References")
	int numPlayers;

	//array of players
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player References")
	TArray<FPlayerDetails> players;
};
