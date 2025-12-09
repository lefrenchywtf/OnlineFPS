// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSCharacter.h"
#include "FPSWeapon.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Net/UnrealNetwork.h"

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
	if (_state && !bIsCrouched)
	{
		bIsSprinting = _state;
		GetCharacterMovement()->MaxWalkSpeed = SprintSpeedMax;
	}
	else
	{
		bIsSprinting = _state;
		GetCharacterMovement()->MaxWalkSpeed = walkSpeedMax;
	}
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
	if (currentHealth > 0)
	{
		currentHealth -= Damage;
	}
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("health: %d"), currentHealth));
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
	if (_type != equipedWeapon)
	{
		ChangeGunVisibility(this ,equipedWeapon ,false);
		equipedWeapon = _type;
		ChangeGunVisibility(this,_type ,true);
	}
}

void AFPSCharacter::StartADS()
{
	EnterADSAnim();
}

void AFPSCharacter::EndADS()
{
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
	AFPSWeapon* weapon = GetEquipedWeapon();
	if (weapon)
	{
		bIsReloading = true;
		weapon->StartReload();
	}
}

void AFPSCharacter::EndReload()
{
	bIsReloading = false;
}

void AFPSCharacter::CancelReload()
{
	AFPSWeapon* weapon = GetEquipedWeapon();
	if (weapon)
	{
		bIsReloading = false;
		weapon->CancelReload();
	}
}

void AFPSCharacter::PlayFireAnimations(EWeaponType _type)
{
	UAnimMontage* FPPAnim = *FPP_FireAnims.Find(_type);
	UAnimMontage* TPPAnim = *TPP_FireAnims.Find(_type);

	PlayAnim(true, FPPAnim);
}