// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSCharacter.h"
#include "FPSWeapon.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Net/UnrealNetwork.h"
#include "Kismet/GameplayStatics.h"
#include "FPSGameState.h"

// Sets default values
AFPSCharacter::AFPSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	equipedWeapon = EWeaponType::PRIMARY;
}

// Called when the game starts or when spawned
void AFPSCharacter::BeginPlay()
{
	Super::BeginPlay();
	currentHealth = maxHealth;
	OnTakeAnyDamage.AddDynamic(this, &AFPSCharacter::HandleTakeDamage);
}

// Called every frame
void AFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


void AFPSCharacter::Move(FVector2D _inputs)
{
	AddMovementInput(GetActorForwardVector(), _inputs.X);
	AddMovementInput(GetActorRightVector(), _inputs.Y);
}

void AFPSCharacter::JumpChara()
{
	if (CanJump())
	{
		Jump();
	}
}

void AFPSCharacter::CrouchChara(bool _state)
{
	if (_state)
	{
		if (bIsSprinting)
		{
			SprintChara(false);
		}
		Crouch();
	}
	else
	{
		UnCrouch();
	}
}

void AFPSCharacter::SprintChara(bool _state)
{
	if (_state)
	{
		if (!bIsCrouched && !bIsAiming)
		{
			bIsSprinting = true;
			if (bIsReloading)
			{
				CancelReload();
			}
			Server_ChangeWalkSpeed(SprintSpeedMax);
		}
	}
	else
	{
		bIsSprinting = false;
		Server_ChangeWalkSpeed(walkSpeedMax);
	}
}

void AFPSCharacter::Server_ChangeWalkSpeed_Implementation(float _newSpeed)
{
	GetCharacterMovement()->MaxWalkSpeed = _newSpeed;
}

void AFPSCharacter::ShootGun()
{
	AFPSWeapon* weapon = GetEquipedWeapon();
	if (weapon)
	{
		weapon->StartFiring();
	}
}

void AFPSCharacter::StopShooting()
{
	AFPSWeapon* weapon = GetEquipedWeapon();
	if (weapon && weapon->IsAutomatic())
	{
		weapon->StopFiring();
	}
}

void AFPSCharacter::MoveCamera(FVector2D _inputs)
{
	AddControllerYawInput(_inputs.X);
	AddControllerPitchInput(_inputs.Y);
}

void AFPSCharacter::Client_SpawnOtherWeapons_Implementation(AFPSCharacter* _chara)
{
	SpawnCharaWeapons(_chara);
}

void AFPSCharacter::HandleTakeDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	ReduceHealth(Damage);
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("health: %d"), currentHealth));
}

void AFPSCharacter::ReduceHealth_Implementation(float _damage)
{
	if (currentHealth > 0)
	{
		currentHealth -= _damage;
		if (currentHealth <= 0)
		{
			currentHealth = 0;
			DieChara();
		}
		UpdateHealthBar();
		PlayTPPHitAnim();
	}
}

void AFPSCharacter::TakeDamage(float _damage)
{
	if (currentHealth > 0)
	{
		currentHealth -= _damage;
		if (currentHealth <= 0)
		{
			DieChara();
		}
	}
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("health: %d"), currentHealth));
}

void AFPSCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFPSCharacter, currentHealth);
	DOREPLIFETIME(AFPSCharacter, equipedWeapon);
	DOREPLIFETIME(AFPSCharacter, bIsReloading);
}

void AFPSCharacter::OnRepHealth()
{
	
}

void AFPSCharacter::OnRepEquiped()
{

}

void AFPSCharacter::OnRepReload()
{

}

AFPSWeapon* AFPSCharacter::GetEquipedWeapon()
{
	switch (equipedWeapon)
	{
	case EWeaponType::PRIMARY:
		return primaryWeapon;
		break;
	case EWeaponType::SECONDARY:
		return secondaryWeapon;
		break;
	default:
		return nullptr;
		break;
	}
}

AFPSWeapon* AFPSCharacter::GetWeapon(EWeaponType _type)
{
	switch (_type)
	{
	case EWeaponType::PRIMARY:
		return primaryWeapon;
		break;
	case EWeaponType::SECONDARY:
		return secondaryWeapon;
		break;
	default:
		return nullptr;
		break;
	}
}

void AFPSCharacter::EquipGun_Implementation(EWeaponType _type)
{
	if (_type != equipedWeapon && !bIsAiming)
	{
		if (bIsReloading)
		{
			CancelReload();
		}
		ChangeGunVisibility(this ,equipedWeapon ,false);
		equipedWeapon = _type;
		ChangeHUDGunInfo();
		ChangeGunVisibility(this,_type ,true);
	}
}

void AFPSCharacter::StartADS()
{
	if (!bIsReloading)
	{
		bIsAiming = true;
		if (bIsSprinting)
		{
			SprintChara(false);
		}
		EnterADSAnim();
	}
}

void AFPSCharacter::EndADS()
{
	bIsAiming = false;
	ExitADSAnim();
}

float AFPSCharacter::GetCurrentWeaponFovScale()
{
	AFPSWeapon* weapon = GetEquipedWeapon();
	if (weapon)
	{
		return weapon->GetADSFovScale();
	}
	return 1.f;
}

void AFPSCharacter::StartReloading()
{
	if (!bIsReloading)
	{
		AFPSWeapon* weapon = GetEquipedWeapon();
		if (weapon)
		{
			if (bIsAiming)
			{
				EndADS();
			}
			bIsReloading = true;
			weapon->StartReload();
			PlayTPPReloadAnim(weapon->GetWeaponType());
		}
	}
}

void AFPSCharacter::EndReload()
{
	bIsReloading = false;
	UpdateGunAmmo();
}

void AFPSCharacter::CancelReload()
{
	AFPSWeapon* weapon = GetEquipedWeapon();
	if (weapon)
	{
		bIsReloading = false;
		weapon->CancelReload();
		StopTPPReloadAnim(weapon->GetWeaponType());
	}
}

void AFPSCharacter::PlayFireAnimations(EWeaponType _type, FRecoilAnimValues _weaponRecoil)
{
	UAnimMontage* TPPAnim = *TPP_FireAnims.Find(_type);
	PlayFPPFireAnim(_weaponRecoil);
	if (TPPAnim)
	{
		PlayAnim(TPPAnim);
	}
}

void AFPSCharacter::PlayTPPReloadAnim(EWeaponType _type)
{
	UAnimMontage* TPPAnim = *TPP_ReloadAnims.Find(_type);
	if (TPPAnim)
	{
		float playRate =  TPPAnim->GetPlayLength() / GetEquipedWeapon()->GetReloadTime();
		PlayAnim(TPPAnim, playRate);
	}
}

void AFPSCharacter::StopTPPReloadAnim(EWeaponType _type)
{
	UAnimMontage* TPPAnim = *TPP_ReloadAnims.Find(_type);
	if (TPPAnim)
	{
		StopAnim(TPPAnim);
	}
}

void AFPSCharacter::PlayTPPHitAnim()
{
	if (TPP_HitAnims.Num() > 0)
	{
		int index = 0;
		if (TPP_HitAnims.Num() > 1)
		{
			index = FMath::RandRange(0, TPP_HitAnims.Num() - 1);
		}
		UAnimMontage* anim = TPP_HitAnims[index];
		if (anim)
		{
			PlayAnim(anim);
		}
	}
}

void AFPSCharacter::Server_DealDamage_Implementation(float _damage, FHitResult _hit)
{
	UGameplayStatics::ApplyPointDamage(_hit.GetActor(), _damage, _hit.TraceStart, _hit, nullptr, this, UDamageType::StaticClass());
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("%s"), *_hit.GetActor()->GetName()));
}

void AFPSCharacter::DieChara()
{
	FTimerHandle respawnTimer;
	GetWorldTimerManager().SetTimer(respawnTimer, this, &AFPSCharacter::RespawnChara, respawnTime);
	EnableRagdoll(true);
}

void AFPSCharacter::RespawnChara()
{
	currentHealth = maxHealth;
	UpdateHealthBar();
	EnableRagdoll(false);
	TpToSpawnPoint();
}

void AFPSCharacter::TpToSpawnPoint()
{
	AFPSGameState* gameState = GetWorld()->GetGameState<AFPSGameState>();
	if (gameState)
	{
		TArray<FVector> spawns = gameState->GetSpawns();
		if (spawns.Num() > 0)
		{
			int index = 0;
			if (spawns.Num() > 1)
			{
				index = FMath::RandRange(0, spawns.Num() - 1);
			}
			SetActorLocation(spawns[index]);
		}
	}
}

void AFPSCharacter::UpdateHealthBar()
{
	float percent = currentHealth / (float)maxHealth;
	SendHealthToHud(percent);
}


void AFPSCharacter::Server_SpawnFireParticule_Implementation(UParticleSystem* _particule)
{
	MC_SpawnFireParticule(_particule);
}

void AFPSCharacter::MC_SpawnFireParticule_Implementation(UParticleSystem* _particule)
{
	AFPSWeapon* gun = GetEquipedWeapon();
	if (gun && _particule)
	{
		FVector scale = FVector(1, 1, 1);
		if (IsLocallyControlled() && bIsAiming)
		{
			scale /= 2.f;
		}
		FTransform spawnTransform = gun->GetMuzzleTransform();
		UGameplayStatics::SpawnEmitterAttached(_particule, gun->GetWeaponModel(), "Muzzle", ((FVector)(ForceInit)), FRotator::ZeroRotator,scale);
		//UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), _particule, spawnTransform);
	}
}

void AFPSCharacter::SpawnParticule(UParticleSystem* _particule, FVector _location)
{

}

void AFPSCharacter::Server_PlaySound_Implementation(USoundBase* _sound, FVector _location)
{
	MC_PlaySound(_sound, _location);
}

void AFPSCharacter::MC_PlaySound_Implementation(USoundBase* _sound, FVector _location)
{
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), _sound, _location);
}