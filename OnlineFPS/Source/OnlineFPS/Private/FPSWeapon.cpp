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
		weaponOwner->PlayFireAnimations(Type, recoilAnim);
	}
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("ammo: %d"), ammoCount));
}

void AFPSWeapon::StartFiring()
{
	if (!bIsFiring)
	{
		bIsFiring = true;
		Fire();
		float timerRate = 1.f / (RPM / 60.f);
		if (bIsAutomatic)
		{
			GetWorldTimerManager().SetTimer(fireTimerHandle, this, &AFPSWeapon::Fire, timerRate, true);
		}
		else
		{
			GetWorldTimerManager().SetTimer(fireTimerHandle, this, &AFPSWeapon::StopFiring, timerRate, true);
		}
	}
}

void AFPSWeapon::StopFiring()
{
	bIsFiring = false;
	GetWorldTimerManager().ClearTimer(fireTimerHandle);
}

void AFPSWeapon::TraceBullet()
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
	params.bReturnPhysicalMaterial = true;
	if (GetWorld()->LineTraceSingleByChannel(hitResult, traceStart, traceEnd, ECollisionChannel::ECC_GameTraceChannel2, params))
	{
		AFPSCharacter* hitChara = Cast<AFPSCharacter>(hitResult.GetActor());
		if (hitChara)
		{
			float finalDamage = CalculateDamage(hitResult);
			weaponOwner->Server_DealDamage(finalDamage, hitResult);
		}
	}
	DrawDebugLine(GetWorld(), traceStart, traceEnd, FColor::Red, false, 5);
}

float AFPSWeapon::CalculateDamage(FHitResult _hit)
{
	if (_hit.PhysMaterial != nullptr)
	{
		switch (_hit.PhysMaterial->SurfaceType)
		{
		case EPhysicalSurface::SurfaceType1: // Head
			return damage * HsMultiplier;
		case EPhysicalSurface::SurfaceType2: // Body
			return damage;
		case EPhysicalSurface::SurfaceType3: // Legs
			return damage * LegsMultiplier;
		default:
			return damage;
		}
	}
	return damage;
}

void AFPSWeapon::Server_DealDamage_Implementation(FHitResult _hit, class AFPSCharacter* _character)
{
	if (_character)
	{
		UGameplayStatics::ApplyPointDamage(_character, damage, _hit.TraceStart, _hit, nullptr, this, UDamageType::StaticClass());
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("%s"), *_hit.GetActor()->GetName()));
	}
}

float AFPSWeapon::GetADSFovScale()
{
	return ADSFovScale;
}

void AFPSWeapon::StartReload()
{
	if (ammoCount < maxAmmo)
	{
		GetWorldTimerManager().SetTimer(reloadTimerHandle, this, &AFPSWeapon::ReloadGun, reloadTime, false);
	}
}

void AFPSWeapon::ReloadGun()
{
	ammoCount = maxAmmo;
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("%d"), ammoCount));
	GetWorldTimerManager().ClearTimer(reloadTimerHandle);
	weaponOwner->EndReload();
}

bool AFPSWeapon::IsAutomatic()
{
	return bIsAutomatic;
}

void AFPSWeapon::CancelReload()
{
	GetWorldTimerManager().ClearTimer(reloadTimerHandle);
}

float AFPSWeapon::GetReloadPlayRate()
{
	return 1.f / reloadTime;
}

float AFPSWeapon::GetReloadTime()
{
	return reloadTime;
}

EWeaponType AFPSWeapon::GetWeaponType()
{
	return Type;
}