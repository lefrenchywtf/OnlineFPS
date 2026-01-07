// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSPlayerController.h"
#include "FPSCharacter.h"
#include "FPSGameState.h"
#include "GameFramework/PlayerState.h"

void AFPSPlayerController::SpawnOthersWeapons()
{
	AFPSGameState* gameState = GetWorld()->GetGameState<AFPSGameState>();
	if (gameState)
	{
		TArray<APlayerState*> players = gameState->PlayerArray;
		for (int i = 0; i < players.Num(); i++)
		{
			AFPSCharacter* player = Cast<AFPSCharacter>(players[i]->GetPawn());
			if (player && player != Chara)
			{
				Chara->SpawnCharaWeapons(player);
			}
		}
	}
}

void AFPSPlayerController::Client_NeedSpawnWeapons_Implementation()
{
	bNeedToSpawnWeapons = true;
}

void AFPSPlayerController::SetChara(class AFPSCharacter* _chara)
{
	Chara = _chara;
	if (bNeedToSpawnWeapons)
	{
		FTimerHandle SpawnTimer;
		GetWorldTimerManager().SetTimer(SpawnTimer, this, &AFPSPlayerController::SpawnOthersWeapons, 1.f);
		bNeedToSpawnWeapons = false;
	}
}

void AFPSPlayerController::EnableInputs()
{
	EnableInput(this);
}

void AFPSPlayerController::DisableInputs()
{
	DisableInput(this);
}