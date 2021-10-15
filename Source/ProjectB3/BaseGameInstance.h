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

UCLASS()
class PROJECTB3_API UBaseGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:

	//array of available classes
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player References")
	TArray<CharacterClass> classes;
};
