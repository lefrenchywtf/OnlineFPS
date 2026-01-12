// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "FPS_PlayerState.generated.h"

/**
 * 
 */
UCLASS()
class ONLINEFPS_API AFPS_PlayerState : public APlayerState
{
	GENERATED_BODY()

protected:

public:
	//UPROPERTY(Replicated)
	int teamID = 0;
	UPROPERTY(Replicated)
	int kills = 0;
	UPROPERTY(Replicated)
	int deaths = 0;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
};
