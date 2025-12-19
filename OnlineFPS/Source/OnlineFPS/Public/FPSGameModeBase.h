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
	TArray<class AFPSPlayerController*> LobbyPlayers;

	class AFPSGameState* gameState;

	UFUNCTION(BlueprintCallable)
	void AddPlayer(class AFPSPlayerController* _controller);

	UFUNCTION(BlueprintCallable)
	void RemovePlayer(class AFPSPlayerController* _controller);

	void UpdateGameState();
};
