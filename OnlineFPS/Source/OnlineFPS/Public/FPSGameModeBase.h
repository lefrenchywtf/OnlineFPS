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
	TArray<APawn*> LobbyPlayers;
	TArray<class AFPSCharacter*> connectedPlayers;

	class AFPSGameState* gameState;

	//TMap<class AFPSCharacter*, struct FPlayerWeapons> playersWeapons;

	UFUNCTION(BlueprintCallable)
	void AddPlayer(class AFPSPlayerController* _controller);

	UFUNCTION(BlueprintCallable)
	void RemovePlayer(class AFPSPlayerController* _controller);

	void SpawnOthersWeapons(class AFPSCharacter* _client);

	void UpdateGameState();
};
