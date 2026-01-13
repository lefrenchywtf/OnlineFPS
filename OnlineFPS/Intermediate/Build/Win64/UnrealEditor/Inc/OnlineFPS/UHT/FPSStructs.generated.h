// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPSStructs.h"

#ifdef ONLINEFPS_FPSStructs_generated_h
#error "FPSStructs.generated.h already included, missing '#pragma once' in FPSStructs.h"
#endif
#define ONLINEFPS_FPSStructs_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTeamBasedInfos ***************************************************
#define FID_OnlineFPS_Source_OnlineFPS_Public_FPSStructs_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTeamBasedInfos_Statics; \
	ONLINEFPS_API static class UScriptStruct* StaticStruct();


struct FTeamBasedInfos;
// ********** End ScriptStruct FTeamBasedInfos *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_OnlineFPS_Source_OnlineFPS_Public_FPSStructs_h

// ********** Begin Enum EObjectiveType ************************************************************
#define FOREACH_ENUM_EOBJECTIVETYPE(op) \
	op(EObjectiveType::KILLS) \
	op(EObjectiveType::ZONES) 

enum class EObjectiveType : uint8;
template<> struct TIsUEnumClass<EObjectiveType> { enum { Value = true }; };
template<> ONLINEFPS_API UEnum* StaticEnum<EObjectiveType>();
// ********** End Enum EObjectiveType **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
