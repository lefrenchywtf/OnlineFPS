// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GMMainMenu.h"

#ifdef ONLINEFPS_GMMainMenu_generated_h
#error "GMMainMenu.generated.h already included, missing '#pragma once' in GMMainMenu.h"
#endif
#define ONLINEFPS_GMMainMenu_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGMMainMenu **************************************************************
ONLINEFPS_API UClass* Z_Construct_UClass_AGMMainMenu_NoRegister();

#define FID_OnlineFPS_Source_OnlineFPS_Public_GMMainMenu_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGMMainMenu(); \
	friend struct Z_Construct_UClass_AGMMainMenu_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINEFPS_API UClass* Z_Construct_UClass_AGMMainMenu_NoRegister(); \
public: \
	DECLARE_CLASS2(AGMMainMenu, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineFPS"), Z_Construct_UClass_AGMMainMenu_NoRegister) \
	DECLARE_SERIALIZER(AGMMainMenu)


#define FID_OnlineFPS_Source_OnlineFPS_Public_GMMainMenu_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGMMainMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGMMainMenu(AGMMainMenu&&) = delete; \
	AGMMainMenu(const AGMMainMenu&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGMMainMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGMMainMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGMMainMenu) \
	NO_API virtual ~AGMMainMenu();


#define FID_OnlineFPS_Source_OnlineFPS_Public_GMMainMenu_h_12_PROLOG
#define FID_OnlineFPS_Source_OnlineFPS_Public_GMMainMenu_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OnlineFPS_Source_OnlineFPS_Public_GMMainMenu_h_15_INCLASS_NO_PURE_DECLS \
	FID_OnlineFPS_Source_OnlineFPS_Public_GMMainMenu_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGMMainMenu;

// ********** End Class AGMMainMenu ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_OnlineFPS_Source_OnlineFPS_Public_GMMainMenu_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
