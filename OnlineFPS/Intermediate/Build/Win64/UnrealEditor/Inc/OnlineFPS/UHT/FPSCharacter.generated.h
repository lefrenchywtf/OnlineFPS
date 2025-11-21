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

class AFPSCharacter;

// ********** Begin ScriptStruct FPlayerWeapons ****************************************************
#define FID_OnlineFPS_Source_OnlineFPS_Public_FPSCharacter_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerWeapons_Statics; \
	ONLINEFPS_API static class UScriptStruct* StaticStruct();


struct FPlayerWeapons;
// ********** End ScriptStruct FPlayerWeapons ******************************************************

// ********** Begin Class AFPSCharacter ************************************************************
#define FID_OnlineFPS_Source_OnlineFPS_Public_FPSCharacter_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_SpawnOtherWeapons_Implementation(AFPSCharacter* _chara); \
	DECLARE_FUNCTION(execClient_SpawnOtherWeapons); \
	DECLARE_FUNCTION(execStopShooting); \
	DECLARE_FUNCTION(execShootGun); \
	DECLARE_FUNCTION(execMoveCamera); \
	DECLARE_FUNCTION(execSprintChara); \
	DECLARE_FUNCTION(execCrouchChara); \
	DECLARE_FUNCTION(execJumpChara); \
	DECLARE_FUNCTION(execMove);


#define FID_OnlineFPS_Source_OnlineFPS_Public_FPSCharacter_h_27_CALLBACK_WRAPPERS
ONLINEFPS_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();

#define FID_OnlineFPS_Source_OnlineFPS_Public_FPSCharacter_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINEFPS_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineFPS"), Z_Construct_UClass_AFPSCharacter_NoRegister) \
	DECLARE_SERIALIZER(AFPSCharacter)


#define FID_OnlineFPS_Source_OnlineFPS_Public_FPSCharacter_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFPSCharacter(AFPSCharacter&&) = delete; \
	AFPSCharacter(const AFPSCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSCharacter) \
	NO_API virtual ~AFPSCharacter();


#define FID_OnlineFPS_Source_OnlineFPS_Public_FPSCharacter_h_24_PROLOG
#define FID_OnlineFPS_Source_OnlineFPS_Public_FPSCharacter_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OnlineFPS_Source_OnlineFPS_Public_FPSCharacter_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_OnlineFPS_Source_OnlineFPS_Public_FPSCharacter_h_27_CALLBACK_WRAPPERS \
	FID_OnlineFPS_Source_OnlineFPS_Public_FPSCharacter_h_27_INCLASS_NO_PURE_DECLS \
	FID_OnlineFPS_Source_OnlineFPS_Public_FPSCharacter_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFPSCharacter;

// ********** End Class AFPSCharacter **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_OnlineFPS_Source_OnlineFPS_Public_FPSCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
