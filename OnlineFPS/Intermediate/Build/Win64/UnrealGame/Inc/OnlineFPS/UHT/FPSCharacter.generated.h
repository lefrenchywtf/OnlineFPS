// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPSCharacter.h"

#ifdef ONLINEFPS_FPSCharacter_generated_h
#error "FPSCharacter.generated.h already included, missing '#pragma once' in FPSCharacter.h"
#endif
#define ONLINEFPS_FPSCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class AController;
class AFPSCharacter;
class AFPSWeapon;
class UAnimMontage;
class UDamageType;
class UMaterial;
class UParticleSystem;
class USoundBase;
enum class EWeaponType : uint8;
struct FHitResult;
struct FRecoilAnimValues;

// ********** Begin ScriptStruct FPlayerWeapons ****************************************************
#define FID_OnlineFPS_Source_OnlineFPS_Public_FPSCharacter_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerWeapons_Statics; \
	ONLINEFPS_API static class UScriptStruct* StaticStruct();


struct FPlayerWeapons;
// ********** End ScriptStruct FPlayerWeapons ******************************************************

// ********** Begin Class AFPSCharacter ************************************************************
#define FID_OnlineFPS_Source_OnlineFPS_Public_FPSCharacter_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_TpToLocation_Implementation(FVector _location); \
	virtual void Server_SendKill_Implementation(AFPSCharacter* _killer); \
	virtual void MC_SpawnDecal_Implementation(UMaterial* _decalMat, FVector _location, FRotator _rotation); \
	virtual void Server_SpawnDecal_Implementation(UMaterial* _decalMat, FVector _location, FRotator _rotation); \
	virtual void MC_PlaySound_Implementation(USoundBase* _sound, FVector _location); \
	virtual void Server_PlaySound_Implementation(USoundBase* _sound, FVector _location); \
	virtual void MC_SpawnParticule_Implementation(UParticleSystem* _particule, FVector _location, FRotator _rotation); \
	virtual void Server_SpawnParticule_Implementation(UParticleSystem* _particule, FVector _location, FRotator _rotation); \
	virtual void MC_SpawnFireParticule_Implementation(UParticleSystem* _particule); \
	virtual void Server_SpawnFireParticule_Implementation(UParticleSystem* _particule); \
	virtual void Server_DealDamage_Implementation(float _damage, FHitResult _hit); \
	virtual void EquipGun_Implementation(EWeaponType _type); \
	virtual void ReduceHealth_Implementation(float _damage, AActor* _damageCauser); \
	virtual void Client_SpawnOtherWeapons_Implementation(AFPSCharacter* _chara); \
	virtual void Server_ChangeWalkSpeed_Implementation(float _newSpeed); \
	DECLARE_FUNCTION(execServer_TpToLocation); \
	DECLARE_FUNCTION(execServer_SendKill); \
	DECLARE_FUNCTION(execMC_SpawnDecal); \
	DECLARE_FUNCTION(execServer_SpawnDecal); \
	DECLARE_FUNCTION(execPlayFootstep); \
	DECLARE_FUNCTION(execMC_PlaySound); \
	DECLARE_FUNCTION(execServer_PlaySound); \
	DECLARE_FUNCTION(execMC_SpawnParticule); \
	DECLARE_FUNCTION(execServer_SpawnParticule); \
	DECLARE_FUNCTION(execMC_SpawnFireParticule); \
	DECLARE_FUNCTION(execServer_SpawnFireParticule); \
	DECLARE_FUNCTION(execServer_DealDamage); \
	DECLARE_FUNCTION(execCancelReload); \
	DECLARE_FUNCTION(execStartReloading); \
	DECLARE_FUNCTION(execGetCurrentWeaponFovScale); \
	DECLARE_FUNCTION(execEndADS); \
	DECLARE_FUNCTION(execStartADS); \
	DECLARE_FUNCTION(execEquipGun); \
	DECLARE_FUNCTION(execGetWeapon); \
	DECLARE_FUNCTION(execGetEquipedWeapon); \
	DECLARE_FUNCTION(execOnRepReload); \
	DECLARE_FUNCTION(execOnRepEquiped); \
	DECLARE_FUNCTION(execOnRepHealth); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execReduceHealth); \
	DECLARE_FUNCTION(execHandleTakeDamage); \
	DECLARE_FUNCTION(execClient_SpawnOtherWeapons); \
	DECLARE_FUNCTION(execStopShooting); \
	DECLARE_FUNCTION(execShootGun); \
	DECLARE_FUNCTION(execMoveCamera); \
	DECLARE_FUNCTION(execServer_ChangeWalkSpeed); \
	DECLARE_FUNCTION(execSprintChara); \
	DECLARE_FUNCTION(execCrouchChara); \
	DECLARE_FUNCTION(execJumpChara); \
	DECLARE_FUNCTION(execMove);


#define FID_OnlineFPS_Source_OnlineFPS_Public_FPSCharacter_h_28_CALLBACK_WRAPPERS
ONLINEFPS_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();

#define FID_OnlineFPS_Source_OnlineFPS_Public_FPSCharacter_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINEFPS_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineFPS"), Z_Construct_UClass_AFPSCharacter_NoRegister) \
	DECLARE_SERIALIZER(AFPSCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		equipedWeapon=NETFIELD_REP_START, \
		currentHealth, \
		bIsReloading, \
		NETFIELD_REP_END=bIsReloading	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_OnlineFPS_Source_OnlineFPS_Public_FPSCharacter_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFPSCharacter(AFPSCharacter&&) = delete; \
	AFPSCharacter(const AFPSCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSCharacter) \
	NO_API virtual ~AFPSCharacter();


#define FID_OnlineFPS_Source_OnlineFPS_Public_FPSCharacter_h_25_PROLOG
#define FID_OnlineFPS_Source_OnlineFPS_Public_FPSCharacter_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OnlineFPS_Source_OnlineFPS_Public_FPSCharacter_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_OnlineFPS_Source_OnlineFPS_Public_FPSCharacter_h_28_CALLBACK_WRAPPERS \
	FID_OnlineFPS_Source_OnlineFPS_Public_FPSCharacter_h_28_INCLASS_NO_PURE_DECLS \
	FID_OnlineFPS_Source_OnlineFPS_Public_FPSCharacter_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFPSCharacter;

// ********** End Class AFPSCharacter **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_OnlineFPS_Source_OnlineFPS_Public_FPSCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
