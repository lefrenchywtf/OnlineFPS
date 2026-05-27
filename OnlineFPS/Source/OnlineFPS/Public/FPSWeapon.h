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

UENUM(BlueprintType)
enum class EWeaponParticule : uint8
{
	FIRE,
	IMPACT_FLESH,
	IMPACT_STONE
};

UENUM(BlueprintType)
enum class EWeaponSounds : uint8
{
	FIRE,
	RELOAD_START,
	RELOAD_END
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

USTRUCT(BlueprintType)
struct FWeaponRecoil
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float minHorizontal = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float maxHorizontal = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float minVertical = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float maxVertical = 0.f;
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

	// Allows a gun to use the other weapon type anims (for vertical grip for a primary)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInvertFPPAnim = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int maxAmmo = 20;

	UPROPERTY(BlueprintReadWrite)
	int ammoCount = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float damage = 10.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HsMultiplier = 1.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LegsMultiplier = .75f;

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EWeaponParticule, TObjectPtr<UParticleSystem>> weaponParticules;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EWeaponSounds, TObjectPtr<USoundBase>> weaponSounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FWeaponRecoil recoil;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float minSpread = .1f; //smallest circle radius
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float maxSpread = .5f; // biggest circle radius

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float currentSpread = 0.f; //current circle radius

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float spreadIncrement = .2f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float spreadRecoverySpeed = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterial* bulletHoleMat;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void StartFiring();

	UFUNCTION(BlueprintCallable)
	void Fire();

	UFUNCTION(BlueprintCallable)
	void ApplyRecoil();

	void IncreaseSpread();

	UFUNCTION(BlueprintCallable)
	void StopFiring();

	//UFUNCTION(Server, Reliable)
	void TraceBullet();

	// includes spread
	FVector CalculateEndTrace();

	float CalculateDamage(FHitResult _hit);

	UFUNCTION(Server, Reliable)
	void Server_DealDamage(FHitResult _hit, class AFPSCharacter* _character);

	float GetADSFovScale();

	bool CanReload();

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

	FTransform GetMuzzleTransform();

	void SpawnFireParticule();

	USkeletalMeshComponent* GetWeaponModel();

	float GetCurrentSpread();

	UFUNCTION(BlueprintImplementableEvent)
	void ResetSpread();

	void PlayFireSound();

	void PlayReloadSound(bool _start);

	void ResetGun();

	void SpawnImpactParticule(FHitResult _hitresult);

	bool CanDamagePlayer(class AFPSCharacter* _hitChara);

	FString GetWeaponName();
};
