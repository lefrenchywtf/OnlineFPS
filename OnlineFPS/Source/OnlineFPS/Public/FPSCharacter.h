// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FPSCharacter.generated.h"


enum class EWeaponType : uint8;
struct FPlayerWeapons;

USTRUCT(BlueprintType)
struct FPlayerWeapons
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class AFPSWeapon> Primary;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class AFPSWeapon> Secondary;
};

UCLASS()
class ONLINEFPS_API AFPSCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFPSCharacter();

	UPROPERTY(BlueprintReadWrite)
	class AFPSPlayerController* FPSController;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	FPlayerWeapons weaponsToSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EWeaponType, TObjectPtr<UAnimMontage>> TPP_ReloadAnims;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EWeaponType, TObjectPtr<UAnimMontage>> TPP_FireAnims;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TObjectPtr<UAnimMontage>> TPP_HitAnims;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AFPSWeapon* primaryWeapon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AFPSWeapon* secondaryWeapon;

	UPROPERTY(BlueprintReadWrite, ReplicatedUsing = OnRepEquiped)
	EWeaponType equipedWeapon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRepHealth)
	int currentHealth = 0;

	UPROPERTY(BlueprintReadWrite, ReplicatedUsing = OnRepReload)
	bool bIsReloading = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int maxHealth = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName playerName = "Player";

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float walkSpeedMax = 600.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float SprintSpeedMax = 1200.f;

	UPROPERTY(BlueprintReadWrite)
	bool bIsSprinting = false;

	UPROPERTY(BlueprintReadWrite)
	float FOV = 90.f;

	UPROPERTY(BlueprintReadWrite)
	bool bIsAiming = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float respawnTime = 3.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<USoundBase*> footstepSounds;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(BlueprintCallable)
	void Move(FVector2D _inputs);

	UFUNCTION(BlueprintCallable)
	void JumpChara();

	UFUNCTION(BlueprintCallable)
	void CrouchChara(bool _state);

	UFUNCTION(BlueprintCallable)
	void SprintChara(bool _state);

	UFUNCTION(Server, Reliable)
	void Server_ChangeWalkSpeed(float _newSpeed);

	UFUNCTION(BlueprintCallable)
	void MoveCamera(FVector2D _inputs);

	UFUNCTION(BlueprintCallable)
	void ShootGun();

	UFUNCTION(BlueprintCallable)
	void StopShooting();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SpawnCharaWeapons();

	UFUNCTION(Client, Reliable)
	void Client_SpawnOtherWeapons(AFPSCharacter* _chara);

	UFUNCTION()
	void HandleTakeDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

	UFUNCTION(Client, Reliable)
	void ReduceHealth(float _damage, AActor* _damageCauser);

	UFUNCTION(BlueprintCallable)
	void TakeDamage(float _damage);

	UFUNCTION()
	void OnRepHealth();

	UFUNCTION()
	void OnRepEquiped();

	UFUNCTION()
	void OnRepReload();

	UFUNCTION(BlueprintCallable)
	class AFPSWeapon* GetEquipedWeapon();

	UFUNCTION(BlueprintCallable)
	class AFPSWeapon* GetWeapon(EWeaponType _type);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void EquipGun(EWeaponType _type);

	UFUNCTION(BlueprintImplementableEvent)
	void ChangeGunVisibility(AFPSCharacter* chara, EWeaponType _type, bool _visible);

	UFUNCTION(BlueprintImplementableEvent)
	void ChangeHUDGunInfo();

	UFUNCTION(BlueprintImplementableEvent)
	void UpdateGunAmmo();

	UFUNCTION(BlueprintCallable)
	void StartADS();

	UFUNCTION(BlueprintImplementableEvent)
	void EnterADSAnim();

	UFUNCTION(BlueprintImplementableEvent)
	void ExitADSAnim();

	UFUNCTION(BlueprintCallable)
	void EndADS();

	UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetCurrentWeaponFovScale();

	UFUNCTION(BlueprintCallable)
	void StartReloading();

	void EndReload();

	UFUNCTION(BlueprintCallable)
	void CancelReload();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PlayAnim(UAnimMontage* _animMontage, float playRate = 1.0f);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void StopAnim(UAnimMontage* _animMontage);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PlayFPPFireAnim(FRecoilAnimValues _recoil);

	void PlayFireAnimations(EWeaponType _type, FRecoilAnimValues _recoil);

	void PlayTPPReloadAnim(EWeaponType _type);

	void StopTPPReloadAnim(EWeaponType _type);

	void PlayTPPHitAnim();

	void DieChara();

	UFUNCTION(BlueprintImplementableEvent)
	void EnableRagdoll(bool _enable);

	void RespawnChara();

	void TpToSpawnPoint();

	UFUNCTION(Server, Reliable)
	void Server_DealDamage(float _damage, FHitResult _hit);

	//UFUNCTION(Client, Reliable)
	void UpdateHealthBar();

	UFUNCTION(BlueprintImplementableEvent)
	void SendHealthToHud(float _percent);

	UFUNCTION(Server, Reliable)
	void Server_SpawnFireParticule(UParticleSystem* _particule);

	UFUNCTION(NetMulticast, Reliable)
	void MC_SpawnFireParticule(UParticleSystem* _particule);

	UFUNCTION(Server, Reliable)
	void Server_SpawnParticule(UParticleSystem* _particule, FVector _location, FRotator _rotation = FRotator::ZeroRotator);

	UFUNCTION(NetMulticast, Reliable)
	void MC_SpawnParticule(UParticleSystem* _particule, FVector _location, FRotator _rotation = FRotator::ZeroRotator);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void UpdateSpreadHUD(float _spreadValue);

	UFUNCTION(Server, Reliable)
	void Server_PlaySound(USoundBase* _sound, FVector _location);

	UFUNCTION(NetMulticast, Reliable)
	void MC_PlaySound(USoundBase* _sound, FVector _location);

	UFUNCTION(BlueprintCallable)
	void PlayFootstep();

	void ResetChara();
	
	UFUNCTION(Server, Reliable)
	void Server_SpawnDecal(UMaterial* _decalMat, FVector _location, FRotator _rotation);

	UFUNCTION(NetMulticast, Reliable)
	void MC_SpawnDecal(UMaterial* _decalMat, FVector _location, FRotator _rotation);

	UFUNCTION(Server, Reliable)
	void Server_SendKill(AFPSCharacter* _killer);

	UFUNCTION(Server, Reliable)
	void Server_TpToLocation(FVector _location);
};
