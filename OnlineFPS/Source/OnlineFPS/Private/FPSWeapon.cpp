// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSWeapon.h"
#include "FPSCharacter.h"

// Sets default values
AFPSWeapon::AFPSWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFPSWeapon::BeginPlay()
{
	Super::BeginPlay();
	ammoCount = maxAmmo;
}

// Called every frame
void AFPSWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFPSWeapon::Fire()
{
	ammoCount--;
	if (ammoCount < 0)
	{
		ammoCount = 0;
	}
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("ammo: %d"), ammoCount));
}

void AFPSWeapon::StartFiring()
{
	if (!bIsFiring)
	{
		bIsFiring = true;
		Fire();
		FTimerManager fireTimer;
		float timerRate = 1.f/(RPM / 60.f);
		GetWorldTimerManager().SetTimer(fireTimerHandle, this, &AFPSWeapon::Fire, timerRate, true);
	}
}

void AFPSWeapon::StopFiring()
{
	bIsFiring = false;
	GetWorldTimerManager().ClearTimer(fireTimerHandle);
}