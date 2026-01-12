// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPSGameMode_TDM.h"

#ifdef ONLINEFPS_FPSGameMode_TDM_generated_h
#error "FPSGameMode_TDM.generated.h already included, missing '#pragma once' in FPSGameMode_TDM.h"
#endif
#define ONLINEFPS_FPSGameMode_TDM_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFPSGameMode_TDM *********************************************************
ONLINEFPS_API UClass* Z_Construct_UClass_AFPSGameMode_TDM_NoRegister();

#define FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameMode_TDM_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSGameMode_TDM(); \
	friend struct Z_Construct_UClass_AFPSGameMode_TDM_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINEFPS_API UClass* Z_Construct_UClass_AFPSGameMode_TDM_NoRegister(); \
public: \
	DECLARE_CLASS2(AFPSGameMode_TDM, AFPSGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineFPS"), Z_Construct_UClass_AFPSGameMode_TDM_NoRegister) \
	DECLARE_SERIALIZER(AFPSGameMode_TDM)


#define FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameMode_TDM_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSGameMode_TDM(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFPSGameMode_TDM(AFPSGameMode_TDM&&) = delete; \
	AFPSGameMode_TDM(const AFPSGameMode_TDM&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSGameMode_TDM); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSGameMode_TDM); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSGameMode_TDM) \
	NO_API virtual ~AFPSGameMode_TDM();


#define FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameMode_TDM_h_12_PROLOG
#define FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameMode_TDM_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameMode_TDM_h_15_INCLASS_NO_PURE_DECLS \
	FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameMode_TDM_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFPSGameMode_TDM;

// ********** End Class AFPSGameMode_TDM ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameMode_TDM_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
