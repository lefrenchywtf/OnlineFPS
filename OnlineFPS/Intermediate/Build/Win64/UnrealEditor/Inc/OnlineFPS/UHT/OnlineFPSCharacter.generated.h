// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OnlineFPSCharacter.h"

#ifdef ONLINEFPS_OnlineFPSCharacter_generated_h
#error "OnlineFPSCharacter.generated.h already included, missing '#pragma once' in OnlineFPSCharacter.h"
#endif
#define ONLINEFPS_OnlineFPSCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AOnlineFPSCharacter ******************************************************
#define FID_OnlineFPS_Source_OnlineFPS_OnlineFPSCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


ONLINEFPS_API UClass* Z_Construct_UClass_AOnlineFPSCharacter_NoRegister();

#define FID_OnlineFPS_Source_OnlineFPS_OnlineFPSCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOnlineFPSCharacter(); \
	friend struct Z_Construct_UClass_AOnlineFPSCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINEFPS_API UClass* Z_Construct_UClass_AOnlineFPSCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AOnlineFPSCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineFPS"), Z_Construct_UClass_AOnlineFPSCharacter_NoRegister) \
	DECLARE_SERIALIZER(AOnlineFPSCharacter)


#define FID_OnlineFPS_Source_OnlineFPS_OnlineFPSCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AOnlineFPSCharacter(AOnlineFPSCharacter&&) = delete; \
	AOnlineFPSCharacter(const AOnlineFPSCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOnlineFPSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOnlineFPSCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AOnlineFPSCharacter) \
	NO_API virtual ~AOnlineFPSCharacter();


#define FID_OnlineFPS_Source_OnlineFPS_OnlineFPSCharacter_h_21_PROLOG
#define FID_OnlineFPS_Source_OnlineFPS_OnlineFPSCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OnlineFPS_Source_OnlineFPS_OnlineFPSCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_OnlineFPS_Source_OnlineFPS_OnlineFPSCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_OnlineFPS_Source_OnlineFPS_OnlineFPSCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AOnlineFPSCharacter;

// ********** End Class AOnlineFPSCharacter ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_OnlineFPS_Source_OnlineFPS_OnlineFPSCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
