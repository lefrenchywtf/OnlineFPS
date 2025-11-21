// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPSWeapon.h"

#ifdef ONLINEFPS_FPSWeapon_generated_h
#error "FPSWeapon.generated.h already included, missing '#pragma once' in FPSWeapon.h"
#endif
#define ONLINEFPS_FPSWeapon_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFPSWeapon ***************************************************************
#define FID_OnlineFPS_Source_OnlineFPS_Public_FPSWeapon_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopFiring); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execStartFiring);


ONLINEFPS_API UClass* Z_Construct_UClass_AFPSWeapon_NoRegister();

#define FID_OnlineFPS_Source_OnlineFPS_Public_FPSWeapon_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSWeapon(); \
	friend struct Z_Construct_UClass_AFPSWeapon_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINEFPS_API UClass* Z_Construct_UClass_AFPSWeapon_NoRegister(); \
public: \
	DECLARE_CLASS2(AFPSWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineFPS"), Z_Construct_UClass_AFPSWeapon_NoRegister) \
	DECLARE_SERIALIZER(AFPSWeapon)


#define FID_OnlineFPS_Source_OnlineFPS_Public_FPSWeapon_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFPSWeapon(AFPSWeapon&&) = delete; \
	AFPSWeapon(const AFPSWeapon&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSWeapon) \
	NO_API virtual ~AFPSWeapon();


#define FID_OnlineFPS_Source_OnlineFPS_Public_FPSWeapon_h_17_PROLOG
#define FID_OnlineFPS_Source_OnlineFPS_Public_FPSWeapon_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OnlineFPS_Source_OnlineFPS_Public_FPSWeapon_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_OnlineFPS_Source_OnlineFPS_Public_FPSWeapon_h_20_INCLASS_NO_PURE_DECLS \
	FID_OnlineFPS_Source_OnlineFPS_Public_FPSWeapon_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFPSWeapon;

// ********** End Class AFPSWeapon *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_OnlineFPS_Source_OnlineFPS_Public_FPSWeapon_h

// ********** Begin Enum EWeaponType ***************************************************************
#define FOREACH_ENUM_EWEAPONTYPE(op) \
	op(EWeaponType::PRIMARY) \
	op(EWeaponType::SECONDARY) 

enum class EWeaponType : uint8;
template<> struct TIsUEnumClass<EWeaponType> { enum { Value = true }; };
template<> ONLINEFPS_API UEnum* StaticEnum<EWeaponType>();
// ********** End Enum EWeaponType *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
