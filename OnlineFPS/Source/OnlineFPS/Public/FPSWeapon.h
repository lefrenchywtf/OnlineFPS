// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPSWeapon.generated.h"

UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	PRIMARY,
	SECONDARY,
};


UCLASS()
class ONLINEFPS_API AFPSWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFPSWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString weaponName = "Gun";

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EWeaponType Type = EWeaponType::PRIMARY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int maxAmmo = 20;

	UPROPERTY(BlueprintReadWrite)
	int ammoCount = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float damage = 10.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HsMultiplier = 1.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RPM = 600;

	UPROPERTY(BlueprintReadWrite)
	class AFPSCharacter* weaponOwner;

	FTimerHandle fireTimerHandle;

	UPROPERTY(BlueprintReadWrite)
	bool bIsFiring = false;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void StartFiring();

	UFUNCTION(BlueprintCallable)
	void Fire();

	UFUNCTION(BlueprintCallable)
	void StopFiring();
};
