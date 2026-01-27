// Fill out your copyright notice in the Description page of Project Settings.


#include "FPS_PlayerState.h"
#include "Net/UnrealNetwork.h"

void AFPS_PlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFPS_PlayerState, teamID);
	DOREPLIFETIME(AFPS_PlayerState, kills);
	DOREPLIFETIME(AFPS_PlayerState, deaths);
}

void AFPS_PlayerState::SetNewPlayerName(FString _newName)
{
	SetPlayerName(_newName);
}