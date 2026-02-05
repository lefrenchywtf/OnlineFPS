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
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Sensitivity = 1.f;

	UPROPERTY(BlueprintReadWrite)
	class AFPSCharacter* Chara;

	UFUNCTION(Client, Reliable)
	void Client_NeedSpawnWeapons();

	void SpawnOthersWeapons(); 

	UFUNCTION(BlueprintCallable)
	void SetChara(class AFPSCharacter* _chara);

	void EnableInputs();

	void DisableInputs();

	UFUNCTION(Client, Reliable)
	void Client_CreateGamemodeWidget(TSubclassOf<UUserWidget> _widget);

	UFUNCTION(BlueprintImplementableEvent)
	void CreateGamemodeWidget(TSubclassOf<UUserWidget> _widget);

	UFUNCTION(Client, Reliable)
	void Client_UpdateGamemodeHud();

	UFUNCTION(BlueprintImplementableEvent)
	void UpdateGamemodeHud();

	UFUNCTION(Client, Reliable)
	void Client_AddKillToFeed(AFPSCharacter* _killer, AFPSCharacter* _victim, const FString& _gunName);

	UFUNCTION(BlueprintImplementableEvent)
	void AddKillToFeed(AFPSCharacter* _killer, AFPSCharacter* _victim, const FString& _gunName);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void ShowPlayerHUD(bool _bShow);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void HidePreGameCounter();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void ShowMouseCursor(bool _bShow);
};
