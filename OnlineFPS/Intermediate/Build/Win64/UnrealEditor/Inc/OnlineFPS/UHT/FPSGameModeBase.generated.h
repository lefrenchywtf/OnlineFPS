// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPSGameModeBase.h"

#ifdef ONLINEFPS_FPSGameModeBase_generated_h
#error "FPSGameModeBase.generated.h already included, missing '#pragma once' in FPSGameModeBase.h"
#endif
#define ONLINEFPS_FPSGameModeBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AFPSCharacter;

// ********** Begin Class AFPSGameModeBase *********************************************************
#define FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameModeBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddPlayer);


ONLINEFPS_API UClass* Z_Construct_UClass_AFPSGameModeBase_NoRegister();

#define FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameModeBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSGameModeBase(); \
	friend struct Z_Construct_UClass_AFPSGameModeBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINEFPS_API UClass* Z_Construct_UClass_AFPSGameModeBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AFPSGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineFPS"), Z_Construct_UClass_AFPSGameModeBase_NoRegister) \
	DECLARE_SERIALIZER(AFPSGameModeBase)


#define FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameModeBase_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFPSGameModeBase(AFPSGameModeBase&&) = delete; \
	AFPSGameModeBase(const AFPSGameModeBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSGameModeBase) \
	NO_API virtual ~AFPSGameModeBase();


#define FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameModeBase_h_14_PROLOG
#define FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameModeBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameModeBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameModeBase_h_17_INCLASS_NO_PURE_DECLS \
	FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameModeBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFPSGameModeBase;

// ********** End Class AFPSGameModeBase ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameModeBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
