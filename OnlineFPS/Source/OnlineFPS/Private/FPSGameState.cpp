// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSGameState.h"
#include "Net/UnrealNetwork.h"

void AFPSGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	DOREPLIFETIME(AFPSGameState, LobbyPawns);
}

void AFPSGameState::UpdatePlayersList()
{
	LobbyPawns = PlayerArray;
}