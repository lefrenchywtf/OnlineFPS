// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSGameModeBase.h"
#include "FPSCharacter.h"

void AFPSGameModeBase::AddPlayer(AFPSCharacter* _character)
{
	if (_character)
	{
		connectedPlayers.Add(_character);
		if (connectedPlayers.Num() > 1)
		{
			SpawnOthersWeapons(_character);
		}
		//playersWeapons.Add(_character, _character->weaponsToSpawn);
	}
}

void AFPSGameModeBase::SpawnOthersWeapons(AFPSCharacter* _client)
{
	for (int i = 0; i < connectedPlayers.Num() - 1; i++)
	{
		_client->Client_SpawnOtherWeapons(connectedPlayers[i]);
	}
}