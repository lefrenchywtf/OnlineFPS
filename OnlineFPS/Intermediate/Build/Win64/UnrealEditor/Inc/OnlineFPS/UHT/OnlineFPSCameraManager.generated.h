// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OnlineFPSCameraManager.h"

#ifdef ONLINEFPS_OnlineFPSCameraManager_generated_h
#error "OnlineFPSCameraManager.generated.h already included, missing '#pragma once' in OnlineFPSCameraManager.h"
#endif
#define ONLINEFPS_OnlineFPSCameraManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AOnlineFPSCameraManager **************************************************
ONLINEFPS_API UClass* Z_Construct_UClass_AOnlineFPSCameraManager_NoRegister();

#define FID_OnlineFPS_Source_OnlineFPS_OnlineFPSCameraManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOnlineFPSCameraManager(); \
	friend struct Z_Construct_UClass_AOnlineFPSCameraManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINEFPS_API UClass* Z_Construct_UClass_AOnlineFPSCameraManager_NoRegister(); \
public: \
	DECLARE_CLASS2(AOnlineFPSCameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineFPS"), Z_Construct_UClass_AOnlineFPSCameraManager_NoRegister) \
	DECLARE_SERIALIZER(AOnlineFPSCameraManager)


#define FID_OnlineFPS_Source_OnlineFPS_OnlineFPSCameraManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AOnlineFPSCameraManager(AOnlineFPSCameraManager&&) = delete; \
	AOnlineFPSCameraManager(const AOnlineFPSCameraManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOnlineFPSCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOnlineFPSCameraManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOnlineFPSCameraManager) \
	NO_API virtual ~AOnlineFPSCameraManager();


#define FID_OnlineFPS_Source_OnlineFPS_OnlineFPSCameraManager_h_13_PROLOG
#define FID_OnlineFPS_Source_OnlineFPS_OnlineFPSCameraManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OnlineFPS_Source_OnlineFPS_OnlineFPSCameraManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_OnlineFPS_Source_OnlineFPS_OnlineFPSCameraManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AOnlineFPSCameraManager;

// ********** End Class AOnlineFPSCameraManager ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_OnlineFPS_Source_OnlineFPS_OnlineFPSCameraManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
