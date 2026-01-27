// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSGameModeBase.h"
#include "FPSCharacter.h"
#include "FPSPlayerController.h"
#include "FPSGameState.h"
#include "EngineUtils.h"
#include "GameFramework/PlayerStart.h"
#include "FPS_PlayerState.h"
#include "FPSWeapon.h"

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
		_character->Client_CreateGamemodeWidget(gameModeWidget);
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
			AddKillToFeed(_killer, _victim);
			if (teamModeInfo.objectiveType == EObjectiveType::KILLS)
			{
				UpdateTeamObjective(KillerPS->teamID, 1);
			}
		}
	}
}

void AFPSGameModeBase::AddKillToFeed(class AFPSCharacter* _killer, class AFPSCharacter* _victim)
{
	FString gunName = _killer->GetEquipedWeapon()->GetWeaponName();
	for (int i = 0; i < LobbyPlayers.Num(); i++)
	{
		LobbyPlayers[i]->Client_AddKillToFeed(_killer, _victim, gunName);
	}
}

void AFPSGameModeBase::UpdateTeamObjective(int _teamId, int _increment)
{
	if (_teamId < teamModeInfo.numberOfTeams && _teamId >= 0)
	{
		teamModeInfo.currentObjectives[_teamId] += _increment;
		CheckWin();
		gameState->UpdateObjectives(teamModeInfo);
		UpdatePlayersHud();
	}
}

void AFPSGameModeBase::UpdatePlayersHud()
{
	for (int i = 0; i < LobbyPlayers.Num(); i++)
	{
		LobbyPlayers[i]->Client_UpdateGamemodeHud();
	}
}

void AFPSGameModeBase::CheckWin()
{
	for (int i = 0; i < teamModeInfo.numberOfTeams; i++)
	{
		if (teamModeInfo.currentObjectives[i] >= teamModeInfo.objectiveToReach)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("ggez")));
		}
	}
}

void AFPSGameModeBase::SelectTeam(AFPSPlayerController* _controller, int _teamId, TArray<TSubclassOf<class AFPSCharacter>> _charas)
{
	AFPS_PlayerState* playerState = _controller->GetPlayerState<AFPS_PlayerState>();
	if (playerState)
	{
		playerState->teamID = _teamId;
		if (_teamId < _charas.Num())
		{
			SpawnChara(_controller, _charas[_teamId]);
		}
	}
}