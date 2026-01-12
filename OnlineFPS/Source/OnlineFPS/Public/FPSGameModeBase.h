// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "FPSGameModeBase.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FTeamBasedInfos
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int numberOfTeams = 2;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int objectiveToReach = 10;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TArray<int> currentObjectives;
};

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

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	bool bTeamBasedMode = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FTeamBasedInfos teamModeInfo;

	int nextTeamIdToGive = 0;
public:	

	UFUNCTION(BlueprintCallable)
	void AddPlayer(class AFPSPlayerController* _controller);

	UFUNCTION(BlueprintCallable)
	void RemovePlayer(class AFPSPlayerController* _controller);

	void UpdateGameState();

	void RetrieveSpawns();
};
