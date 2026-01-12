// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPS_PlayerState.h"

#ifdef ONLINEFPS_FPS_PlayerState_generated_h
#error "FPS_PlayerState.generated.h already included, missing '#pragma once' in FPS_PlayerState.h"
#endif
#define ONLINEFPS_FPS_PlayerState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFPS_PlayerState *********************************************************
ONLINEFPS_API UClass* Z_Construct_UClass_AFPS_PlayerState_NoRegister();

#define FID_OnlineFPS_Source_OnlineFPS_Public_FPS_PlayerState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPS_PlayerState(); \
	friend struct Z_Construct_UClass_AFPS_PlayerState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINEFPS_API UClass* Z_Construct_UClass_AFPS_PlayerState_NoRegister(); \
public: \
	DECLARE_CLASS2(AFPS_PlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineFPS"), Z_Construct_UClass_AFPS_PlayerState_NoRegister) \
	DECLARE_SERIALIZER(AFPS_PlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		kills=NETFIELD_REP_START, \
		deaths, \
		NETFIELD_REP_END=deaths	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_OnlineFPS_Source_OnlineFPS_Public_FPS_PlayerState_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPS_PlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFPS_PlayerState(AFPS_PlayerState&&) = delete; \
	AFPS_PlayerState(const AFPS_PlayerState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPS_PlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPS_PlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPS_PlayerState) \
	NO_API virtual ~AFPS_PlayerState();


#define FID_OnlineFPS_Source_OnlineFPS_Public_FPS_PlayerState_h_12_PROLOG
#define FID_OnlineFPS_Source_OnlineFPS_Public_FPS_PlayerState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OnlineFPS_Source_OnlineFPS_Public_FPS_PlayerState_h_15_INCLASS_NO_PURE_DECLS \
	FID_OnlineFPS_Source_OnlineFPS_Public_FPS_PlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFPS_PlayerState;

// ********** End Class AFPS_PlayerState ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_OnlineFPS_Source_OnlineFPS_Public_FPS_PlayerState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
