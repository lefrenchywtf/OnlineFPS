// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSCharacter.h"
#include "FPSWeapon.h"
#include "GameFramework/CharacterMovementComponent.h"

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
	Jump();
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
	switch (equipedWeapon)
	{
	case EWeaponType::PRIMARY:
		primaryWeapon->StartFiring();
		break;
	case EWeaponType::SECONDARY:
		secondaryWeapon->StartFiring();
		break;
	default:
		break;
	}
}

void AFPSCharacter::StopShooting()
{
	switch (equipedWeapon)
	{
	case EWeaponType::PRIMARY:
		primaryWeapon->StopFiring();
		break;
	case EWeaponType::SECONDARY:
		secondaryWeapon->StopFiring();
		break;
	default:
		break;
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