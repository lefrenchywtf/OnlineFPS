// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OnlineFPSPlayerController.h"

#ifdef ONLINEFPS_OnlineFPSPlayerController_generated_h
#error "OnlineFPSPlayerController.generated.h already included, missing '#pragma once' in OnlineFPSPlayerController.h"
#endif
#define ONLINEFPS_OnlineFPSPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AOnlineFPSPlayerController ***********************************************
ONLINEFPS_API UClass* Z_Construct_UClass_AOnlineFPSPlayerController_NoRegister();

#define FID_OnlineFPS_Source_OnlineFPS_OnlineFPSPlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOnlineFPSPlayerController(); \
	friend struct Z_Construct_UClass_AOnlineFPSPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINEFPS_API UClass* Z_Construct_UClass_AOnlineFPSPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AOnlineFPSPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineFPS"), Z_Construct_UClass_AOnlineFPSPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AOnlineFPSPlayerController)


#define FID_OnlineFPS_Source_OnlineFPS_OnlineFPSPlayerController_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AOnlineFPSPlayerController(AOnlineFPSPlayerController&&) = delete; \
	AOnlineFPSPlayerController(const AOnlineFPSPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOnlineFPSPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOnlineFPSPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AOnlineFPSPlayerController) \
	NO_API virtual ~AOnlineFPSPlayerController();


#define FID_OnlineFPS_Source_OnlineFPS_OnlineFPSPlayerController_h_17_PROLOG
#define FID_OnlineFPS_Source_OnlineFPS_OnlineFPSPlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OnlineFPS_Source_OnlineFPS_OnlineFPSPlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_OnlineFPS_Source_OnlineFPS_OnlineFPSPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AOnlineFPSPlayerController;

// ********** End Class AOnlineFPSPlayerController *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_OnlineFPS_Source_OnlineFPS_OnlineFPSPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
