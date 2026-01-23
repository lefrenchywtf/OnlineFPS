// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OnlineFPSGameMode.h"

#ifdef ONLINEFPS_OnlineFPSGameMode_generated_h
#error "OnlineFPSGameMode.generated.h already included, missing '#pragma once' in OnlineFPSGameMode.h"
#endif
#define ONLINEFPS_OnlineFPSGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AOnlineFPSGameMode *******************************************************
ONLINEFPS_API UClass* Z_Construct_UClass_AOnlineFPSGameMode_NoRegister();

#define FID_OnlineFPS_Source_OnlineFPS_OnlineFPSGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOnlineFPSGameMode(); \
	friend struct Z_Construct_UClass_AOnlineFPSGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINEFPS_API UClass* Z_Construct_UClass_AOnlineFPSGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AOnlineFPSGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineFPS"), Z_Construct_UClass_AOnlineFPSGameMode_NoRegister) \
	DECLARE_SERIALIZER(AOnlineFPSGameMode)


#define FID_OnlineFPS_Source_OnlineFPS_OnlineFPSGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AOnlineFPSGameMode(AOnlineFPSGameMode&&) = delete; \
	AOnlineFPSGameMode(const AOnlineFPSGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOnlineFPSGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOnlineFPSGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AOnlineFPSGameMode) \
	NO_API virtual ~AOnlineFPSGameMode();


#define FID_OnlineFPS_Source_OnlineFPS_OnlineFPSGameMode_h_12_PROLOG
#define FID_OnlineFPS_Source_OnlineFPS_OnlineFPSGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OnlineFPS_Source_OnlineFPS_OnlineFPSGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_OnlineFPS_Source_OnlineFPS_OnlineFPSGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AOnlineFPSGameMode;

// ********** End Class AOnlineFPSGameMode *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_OnlineFPS_Source_OnlineFPS_OnlineFPSGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
