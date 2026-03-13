// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSPlayerController.h"
#include "FPSCharacter.h"
#include "FPSGameState.h"
#include "FPS_PlayerState.h"

void AFPSPlayerController::SpawnOthersWeapons()
{
	AFPSGameState* gameState = GetWorld()->GetGameState<AFPSGameState>();
	if (gameState)
	{
		TArray<APlayerState*> players = gameState->PlayerArray;
		for (int i = 0; i < players.Num(); i++)
		{
			AFPSCharacter* player = Cast<AFPSCharacter>(players[i]->GetPawn());
			if (player && player != Chara && !player->primaryWeapon)
			{
				player->SpawnCharaWeapons();
			}
		}
	}
}

void AFPSPlayerController::Client_NeedSpawnWeapons_Implementation()
{
	FTimerHandle SpawnTimer;
	GetWorldTimerManager().SetTimer(SpawnTimer, this, &AFPSPlayerController::SpawnOthersWeapons, 1.f);
}

void AFPSPlayerController::SetChara(class AFPSCharacter* _chara)
{
	Chara = _chara;
	Chara->UpdateSensitivity(Sensitivity);
	Chara->FOV = savedFOV;
	//if (bNeedToSpawnWeapons)
	//{
	//	FTimerHandle SpawnTimer;
	//	GetWorldTimerManager().SetTimer(SpawnTimer, this, &AFPSPlayerController::SpawnOthersWeapons, 1.f);
	//	bNeedToSpawnWeapons = false;
	//}
}

void AFPSPlayerController::EnableInputs()
{
	EnableInput(this);
}

void AFPSPlayerController::DisableInputs()
{
	DisableInput(this);
	Chara->StopShooting();
}

void AFPSPlayerController::Client_CreateGamemodeWidget_Implementation(TSubclassOf<UUserWidget> _widget)
{
	CreateGamemodeWidget(_widget);
}

void AFPSPlayerController::Client_UpdateGamemodeHud_Implementation()
{
	UpdateGamemodeHud();
}

void AFPSPlayerController::Client_AddKillToFeed_Implementation(AFPSCharacter* _killer, AFPSCharacter* _victim, const FString& _gunName)
{
	AddKillToFeed(_killer, _victim, _gunName);
}

void AFPSPlayerController::ChangeSensitivity(float _newSens)
{
	Sensitivity = _newSens;
	if (Chara)
	{
		Chara->UpdateSensitivity(Sensitivity);
	}
}