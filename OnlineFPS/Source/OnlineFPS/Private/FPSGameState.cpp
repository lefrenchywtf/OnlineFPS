// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSGameState.h"
#include "Net/UnrealNetwork.h"

void AFPSGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFPSGameState, LobbyPawns);
	DOREPLIFETIME(AFPSGameState, Spawns);
}

void AFPSGameState::UpdatePlayersList()
{
	LobbyPawns = PlayerArray;
}

void AFPSGameState::UpdateSpawns(const TArray<FVector>& _array)
{
	Spawns = _array;
}

TArray<FVector> AFPSGameState::GetSpawns()
{
	return Spawns;
}