// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSWeapon.h"
#include "FPSCharacter.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AFPSWeapon::AFPSWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	GunModel = CreateDefaultSubobject<USkeletalMeshComponent>("GunModel");
	RootComponent = GunModel;
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
	if (ammoCount > 0)
	{
		ammoCount--;
		TraceBullet();
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

void AFPSWeapon::TraceBullet_Implementation()
{
	if (!playerCamera)
	{
		return;
	}

	FHitResult hitResult;
	FVector traceStart = playerCamera->GetComponentLocation();
	FVector traceEnd = traceStart + playerCamera->GetForwardVector() * 100000;
	FCollisionQueryParams params;
	params.AddIgnoredActor(this);
	params.AddIgnoredActor(weaponOwner);
	if (GetWorld()->LineTraceSingleByChannel(hitResult, traceStart, traceEnd, ECC_Camera, params))
	{
		AFPSCharacter* hitChara = Cast<AFPSCharacter>(hitResult.GetActor());
		if (hitChara)
		{
			UGameplayStatics::ApplyDamage(hitChara, damage, nullptr, this, UDamageType::StaticClass());
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("%s"), *hitResult.GetActor()->GetName()));
		}
	}
	DrawDebugLine(GetWorld(), traceStart, traceEnd, FColor::Red, false, 5);
}

float AFPSWeapon::GetADSFovScale()
{
	return ADSFovScale;
}