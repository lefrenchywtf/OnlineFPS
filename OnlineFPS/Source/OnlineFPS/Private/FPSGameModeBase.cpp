// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSGameModeBase.h"
#include "FPSCharacter.h"
#include "FPSPlayerController.h"
#include "FPSGameState.h"
#include "EngineUtils.h"
#include "GameFramework/PlayerStart.h"
#include "FPS_PlayerState.h"

void AFPSGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	gameState = GetGameState<AFPSGameState>();
	if (gameState)
	{
		gameState->bTeamBased = bTeamBasedMode;
	}
	for (int i = 0; i < teamModeInfo.numberOfTeams; i++)
	{
		teamModeInfo.currentObjectives.Add(0);
	}
	RetrieveSpawns();
}

void AFPSGameModeBase::RetrieveSpawns()
{
	for (APlayerStart* Actor : TActorRange<APlayerStart>(GetWorld()))
	{
		Spawns.Add(Actor->GetActorLocation());
	}
	if (!gameState)
	{
		gameState = GetGameState<AFPSGameState>();
	}
	if (gameState)
	{
		gameState->UpdateSpawns(Spawns);
	}
}

void AFPSGameModeBase::AddPlayer(AFPSPlayerController* _character)
{
	if (_character)
	{
		LobbyPlayers.Add(_character);
		UpdateGameState();
		if (bTeamBasedMode)
		{
			AFPS_PlayerState* playerState = _character->GetPlayerState<AFPS_PlayerState>();
			if (playerState)
			{
				playerState->teamID = nextTeamIdToGive;
				nextTeamIdToGive++;
				if (nextTeamIdToGive >= teamModeInfo.numberOfTeams)
				{
					nextTeamIdToGive = 0;
				}
			}
		}
		if (LobbyPlayers.Num() > 1)
		{
			_character->Client_NeedSpawnWeapons();
		}
		//playersWeapons.Add(_character, _character->weaponsToSpawn);
	}
}

void AFPSGameModeBase::RemovePlayer(class AFPSPlayerController* _controller)
{
	if (_controller)
	{
		LobbyPlayers.Remove(_controller);
		UpdateGameState();
	}
}

void AFPSGameModeBase::UpdateGameState()
{
	if (!gameState)
	{
		gameState = GetGameState<AFPSGameState>();
	}
	if (gameState)
	{
		gameState->UpdatePlayersList();
	}
}

void AFPSGameModeBase::RegisterKill(AFPSCharacter* _killer, AFPSCharacter* _victim)
{
	if (_killer && _victim)
	{
		AFPS_PlayerState* victimPS = _victim->GetPlayerState<AFPS_PlayerState>();
		AFPS_PlayerState* KillerPS = _killer->GetPlayerState<AFPS_PlayerState>();
		if (victimPS && KillerPS)
		{
			victimPS->deaths++;
			KillerPS->kills++;

			if (teamModeInfo.objectiveType == EObjectiveType::KILLS)
			{
				teamModeInfo.currentObjectives[KillerPS->teamID]++;
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("%d"), teamModeInfo.currentObjectives[KillerPS->teamID]));
			}
		}
	}
}