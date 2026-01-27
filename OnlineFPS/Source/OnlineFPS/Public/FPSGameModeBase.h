// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "FPSStructs.h"
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

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	bool bTeamBasedMode = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FTeamBasedInfos teamModeInfo;

	int nextTeamIdToGive = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> gameModeWidget;
public:	

	UFUNCTION(BlueprintCallable)
	void AddPlayer(class AFPSPlayerController* _controller);

	UFUNCTION(BlueprintCallable)
	void RemovePlayer(class AFPSPlayerController* _controller);

	void UpdateGameState();

	void RetrieveSpawns();

	void RegisterKill(class AFPSCharacter* _killer, class AFPSCharacter* _victim);

	void UpdateTeamObjective(int _teamId, int _increment);

	void UpdatePlayersHud();

	void CheckWin();

	void AddKillToFeed(class AFPSCharacter* _killer, class AFPSCharacter* _victim);

	UFUNCTION(BlueprintCallable)
	void SelectTeam(class AFPSPlayerController* _controller, int _teamId, TArray<TSubclassOf<AFPSCharacter>> _charas);
	
	UFUNCTION(BlueprintImplementableEvent)
	void SpawnChara(class AFPSPlayerController* _controller, TSubclassOf<class AFPSCharacter> _chara);
};
