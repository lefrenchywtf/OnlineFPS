// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FPSGameModeBase.generated.h"

/**
 * 
 */


UCLASS()
class ONLINEFPS_API AFPSGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	TArray<class AFPSCharacter*> connectedPlayers;

	//TMap<class AFPSCharacter*, struct FPlayerWeapons> playersWeapons;

	UFUNCTION(BlueprintCallable)
	void AddPlayer(class AFPSCharacter* _character);

	void SpawnOthersWeapons(class AFPSCharacter* _client);
};
