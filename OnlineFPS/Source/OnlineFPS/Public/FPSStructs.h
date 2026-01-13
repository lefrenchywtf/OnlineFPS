// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FPSStructs.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class EObjectiveType : uint8
{
	KILLS,
	ZONES,
};

USTRUCT(BlueprintType)
struct FTeamBasedInfos
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int numberOfTeams = 2;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int objectiveToReach = 10;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TArray<int> currentObjectives;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	EObjectiveType objectiveType;
};