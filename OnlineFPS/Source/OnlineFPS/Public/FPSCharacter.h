// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FPSCharacter.generated.h"


enum class EWeaponType : uint8;

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPlayerWeapons weaponsToSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EWeaponType, TObjectPtr<UAnimMontage>> FPP_FireAnims;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EWeaponType, TObjectPtr<UAnimMontage>> TPP_FireAnims;

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

	UFUNCTION(BlueprintCallable)
	void MoveCamera(FVector2D _inputs);

	UFUNCTION(BlueprintCallable)
	void ShootGun();

	UFUNCTION(BlueprintCallable)
	void StopShooting();

	UFUNCTION(BlueprintImplementableEvent)
	void SpawnCharaWeapons(AFPSCharacter* _chara);

	UFUNCTION(Client, Reliable)
	void Client_SpawnOtherWeapons(AFPSCharacter* _chara);

	UFUNCTION()
	void HandleTakeDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

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
	void PlayAnim(bool _firstPerson, UAnimMontage* _animMontage);

	void PlayFireAnimations(EWeaponType _type);
};
