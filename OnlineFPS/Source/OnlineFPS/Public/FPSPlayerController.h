// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "FPSPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class ONLINEFPS_API AFPSPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	bool bNeedToSpawnWeapons = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsSprintToggle = false;
public:
	UPROPERTY(BlueprintReadWrite)
	class AFPSCharacter* Chara;

	UFUNCTION(Client, Reliable)
	void Client_NeedSpawnWeapons();

	void SpawnOthersWeapons();

	UFUNCTION(BlueprintCallable)
	void SetChara(class AFPSCharacter* _chara);

	void EnableInputs();

	void DisableInputs();
};
