// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "FPSGameModeBase.generated.h"

/**
 * 
 */


UCLASS()
class ONLINEFPS_API AFPSGameModeBase : public AGameMode
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

	TArray<class AFPSPlayerController*> LobbyPlayers;

	TArray<FVector> Spawns;

	bool bSpawnsGiven = false;

	class AFPSGameState* gameState;
	
public:	

	UFUNCTION(BlueprintCallable)
	void AddPlayer(class AFPSPlayerController* _controller);

	UFUNCTION(BlueprintCallable)
	void RemovePlayer(class AFPSPlayerController* _controller);

	void UpdateGameState();

	void RetrieveSpawns();
};
