// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
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
public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	void UpdatePlayersList();

	void UpdateSpawns(const TArray<FVector>& _array);

	UFUNCTION(BlueprintCallable)
	TArray<FVector> GetSpawns();
};
