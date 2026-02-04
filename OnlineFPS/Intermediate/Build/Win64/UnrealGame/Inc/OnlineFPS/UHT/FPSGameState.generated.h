// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPSGameState.h"

#ifdef ONLINEFPS_FPSGameState_generated_h
#error "FPSGameState.generated.h already included, missing '#pragma once' in FPSGameState.h"
#endif
#define ONLINEFPS_FPSGameState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFPSGameState ************************************************************
#define FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameState_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSpawns);


ONLINEFPS_API UClass* Z_Construct_UClass_AFPSGameState_NoRegister();

#define FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameState_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSGameState(); \
	friend struct Z_Construct_UClass_AFPSGameState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINEFPS_API UClass* Z_Construct_UClass_AFPSGameState_NoRegister(); \
public: \
	DECLARE_CLASS2(AFPSGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineFPS"), Z_Construct_UClass_AFPSGameState_NoRegister) \
	DECLARE_SERIALIZER(AFPSGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		LobbyPawns=NETFIELD_REP_START, \
		Spawns, \
		modeInfos, \
		bTeamBased, \
		timeRemaining, \
		preGameCountdown, \
		NETFIELD_REP_END=preGameCountdown	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameState_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFPSGameState(AFPSGameState&&) = delete; \
	AFPSGameState(const AFPSGameState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSGameState) \
	NO_API virtual ~AFPSGameState();


#define FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameState_h_14_PROLOG
#define FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameState_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameState_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameState_h_17_INCLASS_NO_PURE_DECLS \
	FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameState_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFPSGameState;

// ********** End Class AFPSGameState **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
