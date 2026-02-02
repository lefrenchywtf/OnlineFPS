// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineFPS_init() {}
	ONLINEFPS_API UFunction* Z_Construct_UDelegateFunction_OnlineFPS_BulletCountUpdatedDelegate__DelegateSignature();
	ONLINEFPS_API UFunction* Z_Construct_UDelegateFunction_OnlineFPS_DamagedDelegate__DelegateSignature();
	ONLINEFPS_API UFunction* Z_Construct_UDelegateFunction_OnlineFPS_PawnDeathDelegate__DelegateSignature();
	ONLINEFPS_API UFunction* Z_Construct_UDelegateFunction_OnlineFPS_SprintStateChangedDelegate__DelegateSignature();
	ONLINEFPS_API UFunction* Z_Construct_UDelegateFunction_OnlineFPS_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OnlineFPS;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OnlineFPS()
	{
		if (!Z_Registration_Info_UPackage__Script_OnlineFPS.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_OnlineFPS_BulletCountUpdatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OnlineFPS_DamagedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OnlineFPS_PawnDeathDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OnlineFPS_SprintStateChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OnlineFPS_UpdateSprintMeterDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/OnlineFPS",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD4BEEB14,
				0x8542FE32,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OnlineFPS.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_OnlineFPS.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OnlineFPS(Z_Construct_UPackage__Script_OnlineFPS, TEXT("/Script/OnlineFPS"), Z_Registration_Info_UPackage__Script_OnlineFPS, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD4BEEB14, 0x8542FE32));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
