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

USTRUCT(BlueprintType)
struct FRecoilAnimValues
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float recoilMultiplier = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float sideRecoilMultiplier = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float kickbackMultiplier = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float kicksideMultiplier = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float kickupMultiplier = 1.f;
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
	USkeletalMeshComponent* GunModel;

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsAutomatic = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ADSTime = .5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ADSFovScale = 1.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float reloadTime = 2.f;

	UPROPERTY(BlueprintReadWrite)
	class AFPSCharacter* weaponOwner;

	FTimerHandle fireTimerHandle;

	FTimerHandle reloadTimerHandle;

	UPROPERTY(BlueprintReadWrite)
	bool bIsFiring = false;

	UPROPERTY(BlueprintReadWrite)
	class UCameraComponent* playerCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRecoilAnimValues recoilAnim;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void StartFiring();

	UFUNCTION(BlueprintCallable)
	void Fire();

	UFUNCTION(BlueprintCallable)
	void StopFiring();

	UFUNCTION(Server, Reliable)
	void TraceBullet();

	float GetADSFovScale();

	void StartReload();

	void CancelReload();

	void ReloadGun();

	UFUNCTION(BlueprintCallable)
	bool IsAutomatic();

	UFUNCTION(BlueprintCallable)
	float GetReloadPlayRate();

	UFUNCTION(BlueprintCallable)
	EWeaponType GetWeaponType();

	float GetReloadTime();
};
