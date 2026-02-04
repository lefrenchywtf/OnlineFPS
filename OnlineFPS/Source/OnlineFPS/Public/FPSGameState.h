// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "FPSStructs.h"
#include "FPSGameState.generated.h"

/**
 * 
 */

UCLASS()
class ONLINEFPS_API AFPSGameState : public AGameState
{
	GENERATED_BODY()
protected:
	UPROPERTY(Replicated)
	TArray<APlayerState*> LobbyPawns;

	UPROPERTY(Replicated)
	TArray<FVector> Spawns;

	UPROPERTY(Replicated, BlueprintReadOnly)
	FTeamBasedInfos modeInfos;
public:
	UPROPERTY(Replicated)
	bool bTeamBased = false;

	UPROPERTY(Replicated, BlueprintReadOnly)
	int timeRemaining = 0;

	UPROPERTY(Replicated, BlueprintReadOnly)
	int preGameCountdown = 10;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	void UpdatePlayersList();

	void UpdateSpawns(const TArray<FVector>& _array);

	void UpdateObjectives(const FTeamBasedInfos& _infos);

	UFUNCTION(BlueprintCallable)
	TArray<FVector> GetSpawns();
};
