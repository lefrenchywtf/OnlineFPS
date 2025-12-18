// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSGameModeBase.h"
#include "FPSCharacter.h"
#include "FPSPlayerController.h"
#include "FPSGameState.h"

void AFPSGameModeBase::AddPlayer(AFPSPlayerController* _character)
{
	if (_character)
	{
		LobbyPlayers.Add(_character->GetPawn());
		UpdateGameState();
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
		LobbyPlayers.Remove(_controller->GetPawn());
		UpdateGameState();
	}
}

void AFPSGameModeBase::SpawnOthersWeapons(AFPSCharacter* _client)
{
	for (int i = 0; i < connectedPlayers.Num() - 1; i++)
	{
		_client->Client_SpawnOtherWeapons(connectedPlayers[i]);
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