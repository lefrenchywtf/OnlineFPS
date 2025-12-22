// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSCharacter.h"
#include "Engine/HitResult.h"
#include "FPSWeapon.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFPSCharacter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ONLINEFPS_API UClass* Z_Construct_UClass_AFPSCharacter();
ONLINEFPS_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();
ONLINEFPS_API UClass* Z_Construct_UClass_AFPSWeapon_NoRegister();
ONLINEFPS_API UEnum* Z_Construct_UEnum_OnlineFPS_EWeaponType();
ONLINEFPS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerWeapons();
ONLINEFPS_API UScriptStruct* Z_Construct_UScriptStruct_FRecoilAnimValues();
UPackage* Z_Construct_UPackage__Script_OnlineFPS();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPlayerWeapons ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPlayerWeapons;
class UScriptStruct* FPlayerWeapons::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPlayerWeapons.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPlayerWeapons.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerWeapons, (UObject*)Z_Construct_UPackage__Script_OnlineFPS(), TEXT("PlayerWeapons"));
	}
	return Z_Registration_Info_UScriptStruct_FPlayerWeapons.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPlayerWeapons_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Primary_MetaData[] = {
		{ "Category", "PlayerWeapons" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Secondary_MetaData[] = {
		{ "Category", "PlayerWeapons" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Primary;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Secondary;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerWeapons>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPlayerWeapons_Statics::NewProp_Primary = { "Primary", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerWeapons, Primary), Z_Construct_UClass_UClass, Z_Construct_UClass_AFPSWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Primary_MetaData), NewProp_Primary_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPlayerWeapons_Statics::NewProp_Secondary = { "Secondary", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerWeapons, Secondary), Z_Construct_UClass_UClass, Z_Construct_UClass_AFPSWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Secondary_MetaData), NewProp_Secondary_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerWeapons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerWeapons_Statics::NewProp_Primary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerWeapons_Statics::NewProp_Secondary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerWeapons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerWeapons_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineFPS,
	nullptr,
	&NewStructOps,
	"PlayerWeapons",
	Z_Construct_UScriptStruct_FPlayerWeapons_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerWeapons_Statics::PropPointers),
	sizeof(FPlayerWeapons),
	alignof(FPlayerWeapons),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerWeapons_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerWeapons_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerWeapons()
{
	if (!Z_Registration_Info_UScriptStruct_FPlayerWeapons.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPlayerWeapons.InnerSingleton, Z_Construct_UScriptStruct_FPlayerWeapons_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPlayerWeapons.InnerSingleton;
}
// ********** End ScriptStruct FPlayerWeapons ******************************************************

// ********** Begin Class AFPSCharacter Function CancelReload **************************************
struct Z_Construct_UFunction_AFPSCharacter_CancelReload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_CancelReload_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "CancelReload", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_CancelReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_CancelReload_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFPSCharacter_CancelReload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_CancelReload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execCancelReload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelReload();
	P_NATIVE_END;
}
// ********** End Class AFPSCharacter Function CancelReload ****************************************

// ********** Begin Class AFPSCharacter Function ChangeGunVisibility *******************************
struct FPSCharacter_eventChangeGunVisibility_Parms
{
	AFPSCharacter* chara;
	EWeaponType _type;
	bool _visible;
};
static FName NAME_AFPSCharacter_ChangeGunVisibility = FName(TEXT("ChangeGunVisibility"));
void AFPSCharacter::ChangeGunVisibility(AFPSCharacter* chara, EWeaponType _type, bool _visible)
{
	FPSCharacter_eventChangeGunVisibility_Parms Parms;
	Parms.chara=chara;
	Parms._type=_type;
	Parms._visible=_visible ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AFPSCharacter_ChangeGunVisibility);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AFPSCharacter_ChangeGunVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_chara;
	static const UECodeGen_Private::FBytePropertyParams NewProp__type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__type;
	static void NewProp__visible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__visible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacter_ChangeGunVisibility_Statics::NewProp_chara = { "chara", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventChangeGunVisibility_Parms, chara), Z_Construct_UClass_AFPSCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFPSCharacter_ChangeGunVisibility_Statics::NewProp__type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFPSCharacter_ChangeGunVisibility_Statics::NewProp__type = { "_type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventChangeGunVisibility_Parms, _type), Z_Construct_UEnum_OnlineFPS_EWeaponType, METADATA_PARAMS(0, nullptr) }; // 3700248627
void Z_Construct_UFunction_AFPSCharacter_ChangeGunVisibility_Statics::NewProp__visible_SetBit(void* Obj)
{
	((FPSCharacter_eventChangeGunVisibility_Parms*)Obj)->_visible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacter_ChangeGunVisibility_Statics::NewProp__visible = { "_visible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPSCharacter_eventChangeGunVisibility_Parms), &Z_Construct_UFunction_AFPSCharacter_ChangeGunVisibility_Statics::NewProp__visible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_ChangeGunVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_ChangeGunVisibility_Statics::NewProp_chara,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_ChangeGunVisibility_Statics::NewProp__type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_ChangeGunVisibility_Statics::NewProp__type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_ChangeGunVisibility_Statics::NewProp__visible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_ChangeGunVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_ChangeGunVisibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "ChangeGunVisibility", Z_Construct_UFunction_AFPSCharacter_ChangeGunVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_ChangeGunVisibility_Statics::PropPointers), sizeof(FPSCharacter_eventChangeGunVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_ChangeGunVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_ChangeGunVisibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FPSCharacter_eventChangeGunVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSCharacter_ChangeGunVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_ChangeGunVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AFPSCharacter Function ChangeGunVisibility *********************************

// ********** Begin Class AFPSCharacter Function ChangeHUDGunInfo **********************************
static FName NAME_AFPSCharacter_ChangeHUDGunInfo = FName(TEXT("ChangeHUDGunInfo"));
void AFPSCharacter::ChangeHUDGunInfo()
{
	UFunction* Func = FindFunctionChecked(NAME_AFPSCharacter_ChangeHUDGunInfo);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AFPSCharacter_ChangeHUDGunInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_ChangeHUDGunInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "ChangeHUDGunInfo", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_ChangeHUDGunInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_ChangeHUDGunInfo_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFPSCharacter_ChangeHUDGunInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_ChangeHUDGunInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AFPSCharacter Function ChangeHUDGunInfo ************************************

// ********** Begin Class AFPSCharacter Function Client_SpawnOtherWeapons **************************
struct FPSCharacter_eventClient_SpawnOtherWeapons_Parms
{
	AFPSCharacter* _chara;
};
static FName NAME_AFPSCharacter_Client_SpawnOtherWeapons = FName(TEXT("Client_SpawnOtherWeapons"));
void AFPSCharacter::Client_SpawnOtherWeapons(AFPSCharacter* _chara)
{
	FPSCharacter_eventClient_SpawnOtherWeapons_Parms Parms;
	Parms._chara=_chara;
	UFunction* Func = FindFunctionChecked(NAME_AFPSCharacter_Client_SpawnOtherWeapons);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AFPSCharacter_Client_SpawnOtherWeapons_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__chara;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacter_Client_SpawnOtherWeapons_Statics::NewProp__chara = { "_chara", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventClient_SpawnOtherWeapons_Parms, _chara), Z_Construct_UClass_AFPSCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_Client_SpawnOtherWeapons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_Client_SpawnOtherWeapons_Statics::NewProp__chara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_Client_SpawnOtherWeapons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_Client_SpawnOtherWeapons_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "Client_SpawnOtherWeapons", Z_Construct_UFunction_AFPSCharacter_Client_SpawnOtherWeapons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_Client_SpawnOtherWeapons_Statics::PropPointers), sizeof(FPSCharacter_eventClient_SpawnOtherWeapons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_Client_SpawnOtherWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_Client_SpawnOtherWeapons_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FPSCharacter_eventClient_SpawnOtherWeapons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSCharacter_Client_SpawnOtherWeapons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_Client_SpawnOtherWeapons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execClient_SpawnOtherWeapons)
{
	P_GET_OBJECT(AFPSCharacter,Z_Param__chara);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_SpawnOtherWeapons_Implementation(Z_Param__chara);
	P_NATIVE_END;
}
// ********** End Class AFPSCharacter Function Client_SpawnOtherWeapons ****************************

// ********** Begin Class AFPSCharacter Function CrouchChara ***************************************
struct Z_Construct_UFunction_AFPSCharacter_CrouchChara_Statics
{
	struct FPSCharacter_eventCrouchChara_Parms
	{
		bool _state;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp__state_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__state;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AFPSCharacter_CrouchChara_Statics::NewProp__state_SetBit(void* Obj)
{
	((FPSCharacter_eventCrouchChara_Parms*)Obj)->_state = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacter_CrouchChara_Statics::NewProp__state = { "_state", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPSCharacter_eventCrouchChara_Parms), &Z_Construct_UFunction_AFPSCharacter_CrouchChara_Statics::NewProp__state_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_CrouchChara_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_CrouchChara_Statics::NewProp__state,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_CrouchChara_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_CrouchChara_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "CrouchChara", Z_Construct_UFunction_AFPSCharacter_CrouchChara_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_CrouchChara_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSCharacter_CrouchChara_Statics::FPSCharacter_eventCrouchChara_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_CrouchChara_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_CrouchChara_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFPSCharacter_CrouchChara_Statics::FPSCharacter_eventCrouchChara_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSCharacter_CrouchChara()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_CrouchChara_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execCrouchChara)
{
	P_GET_UBOOL(Z_Param__state);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CrouchChara(Z_Param__state);
	P_NATIVE_END;
}
// ********** End Class AFPSCharacter Function CrouchChara *****************************************

// ********** Begin Class AFPSCharacter Function EnableRagdoll *************************************
struct FPSCharacter_eventEnableRagdoll_Parms
{
	bool _enable;
};
static FName NAME_AFPSCharacter_EnableRagdoll = FName(TEXT("EnableRagdoll"));
void AFPSCharacter::EnableRagdoll(bool _enable)
{
	FPSCharacter_eventEnableRagdoll_Parms Parms;
	Parms._enable=_enable ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AFPSCharacter_EnableRagdoll);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AFPSCharacter_EnableRagdoll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp__enable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__enable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AFPSCharacter_EnableRagdoll_Statics::NewProp__enable_SetBit(void* Obj)
{
	((FPSCharacter_eventEnableRagdoll_Parms*)Obj)->_enable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacter_EnableRagdoll_Statics::NewProp__enable = { "_enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPSCharacter_eventEnableRagdoll_Parms), &Z_Construct_UFunction_AFPSCharacter_EnableRagdoll_Statics::NewProp__enable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_EnableRagdoll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_EnableRagdoll_Statics::NewProp__enable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_EnableRagdoll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_EnableRagdoll_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "EnableRagdoll", Z_Construct_UFunction_AFPSCharacter_EnableRagdoll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_EnableRagdoll_Statics::PropPointers), sizeof(FPSCharacter_eventEnableRagdoll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_EnableRagdoll_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_EnableRagdoll_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FPSCharacter_eventEnableRagdoll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSCharacter_EnableRagdoll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_EnableRagdoll_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AFPSCharacter Function EnableRagdoll ***************************************

// ********** Begin Class AFPSCharacter Function EndADS ********************************************
struct Z_Construct_UFunction_AFPSCharacter_EndADS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_EndADS_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "EndADS", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_EndADS_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_EndADS_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFPSCharacter_EndADS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_EndADS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execEndADS)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndADS();
	P_NATIVE_END;
}
// ********** End Class AFPSCharacter Function EndADS **********************************************

// ********** Begin Class AFPSCharacter Function EnterADSAnim **************************************
static FName NAME_AFPSCharacter_EnterADSAnim = FName(TEXT("EnterADSAnim"));
void AFPSCharacter::EnterADSAnim()
{
	UFunction* Func = FindFunctionChecked(NAME_AFPSCharacter_EnterADSAnim);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AFPSCharacter_EnterADSAnim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_EnterADSAnim_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "EnterADSAnim", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_EnterADSAnim_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_EnterADSAnim_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFPSCharacter_EnterADSAnim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_EnterADSAnim_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AFPSCharacter Function EnterADSAnim ****************************************

// ********** Begin Class AFPSCharacter Function EquipGun ******************************************
struct FPSCharacter_eventEquipGun_Parms
{
	EWeaponType _type;
};
static FName NAME_AFPSCharacter_EquipGun = FName(TEXT("EquipGun"));
void AFPSCharacter::EquipGun(EWeaponType _type)
{
	FPSCharacter_eventEquipGun_Parms Parms;
	Parms._type=_type;
	UFunction* Func = FindFunctionChecked(NAME_AFPSCharacter_EquipGun);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AFPSCharacter_EquipGun_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp__type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFPSCharacter_EquipGun_Statics::NewProp__type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFPSCharacter_EquipGun_Statics::NewProp__type = { "_type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventEquipGun_Parms, _type), Z_Construct_UEnum_OnlineFPS_EWeaponType, METADATA_PARAMS(0, nullptr) }; // 3700248627
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_EquipGun_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_EquipGun_Statics::NewProp__type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_EquipGun_Statics::NewProp__type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_EquipGun_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_EquipGun_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "EquipGun", Z_Construct_UFunction_AFPSCharacter_EquipGun_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_EquipGun_Statics::PropPointers), sizeof(FPSCharacter_eventEquipGun_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_EquipGun_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_EquipGun_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FPSCharacter_eventEquipGun_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSCharacter_EquipGun()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_EquipGun_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execEquipGun)
{
	P_GET_ENUM(EWeaponType,Z_Param__type);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EquipGun_Implementation(EWeaponType(Z_Param__type));
	P_NATIVE_END;
}
// ********** End Class AFPSCharacter Function EquipGun ********************************************

// ********** Begin Class AFPSCharacter Function ExitADSAnim ***************************************
static FName NAME_AFPSCharacter_ExitADSAnim = FName(TEXT("ExitADSAnim"));
void AFPSCharacter::ExitADSAnim()
{
	UFunction* Func = FindFunctionChecked(NAME_AFPSCharacter_ExitADSAnim);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AFPSCharacter_ExitADSAnim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_ExitADSAnim_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "ExitADSAnim", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_ExitADSAnim_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_ExitADSAnim_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFPSCharacter_ExitADSAnim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_ExitADSAnim_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AFPSCharacter Function ExitADSAnim *****************************************

// ********** Begin Class AFPSCharacter Function GetCurrentWeaponFovScale **************************
struct Z_Construct_UFunction_AFPSCharacter_GetCurrentWeaponFovScale_Statics
{
	struct FPSCharacter_eventGetCurrentWeaponFovScale_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacter_GetCurrentWeaponFovScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventGetCurrentWeaponFovScale_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_GetCurrentWeaponFovScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_GetCurrentWeaponFovScale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetCurrentWeaponFovScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_GetCurrentWeaponFovScale_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "GetCurrentWeaponFovScale", Z_Construct_UFunction_AFPSCharacter_GetCurrentWeaponFovScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetCurrentWeaponFovScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSCharacter_GetCurrentWeaponFovScale_Statics::FPSCharacter_eventGetCurrentWeaponFovScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetCurrentWeaponFovScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_GetCurrentWeaponFovScale_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFPSCharacter_GetCurrentWeaponFovScale_Statics::FPSCharacter_eventGetCurrentWeaponFovScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSCharacter_GetCurrentWeaponFovScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_GetCurrentWeaponFovScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execGetCurrentWeaponFovScale)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentWeaponFovScale();
	P_NATIVE_END;
}
// ********** End Class AFPSCharacter Function GetCurrentWeaponFovScale ****************************

// ********** Begin Class AFPSCharacter Function GetEquipedWeapon **********************************
struct Z_Construct_UFunction_AFPSCharacter_GetEquipedWeapon_Statics
{
	struct FPSCharacter_eventGetEquipedWeapon_Parms
	{
		AFPSWeapon* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacter_GetEquipedWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventGetEquipedWeapon_Parms, ReturnValue), Z_Construct_UClass_AFPSWeapon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_GetEquipedWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_GetEquipedWeapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetEquipedWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_GetEquipedWeapon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "GetEquipedWeapon", Z_Construct_UFunction_AFPSCharacter_GetEquipedWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetEquipedWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSCharacter_GetEquipedWeapon_Statics::FPSCharacter_eventGetEquipedWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetEquipedWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_GetEquipedWeapon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFPSCharacter_GetEquipedWeapon_Statics::FPSCharacter_eventGetEquipedWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSCharacter_GetEquipedWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_GetEquipedWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execGetEquipedWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AFPSWeapon**)Z_Param__Result=P_THIS->GetEquipedWeapon();
	P_NATIVE_END;
}
// ********** End Class AFPSCharacter Function GetEquipedWeapon ************************************

// ********** Begin Class AFPSCharacter Function GetWeapon *****************************************
struct Z_Construct_UFunction_AFPSCharacter_GetWeapon_Statics
{
	struct FPSCharacter_eventGetWeapon_Parms
	{
		EWeaponType _type;
		AFPSWeapon* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp__type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__type;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFPSCharacter_GetWeapon_Statics::NewProp__type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFPSCharacter_GetWeapon_Statics::NewProp__type = { "_type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventGetWeapon_Parms, _type), Z_Construct_UEnum_OnlineFPS_EWeaponType, METADATA_PARAMS(0, nullptr) }; // 3700248627
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacter_GetWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventGetWeapon_Parms, ReturnValue), Z_Construct_UClass_AFPSWeapon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_GetWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_GetWeapon_Statics::NewProp__type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_GetWeapon_Statics::NewProp__type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_GetWeapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_GetWeapon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "GetWeapon", Z_Construct_UFunction_AFPSCharacter_GetWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSCharacter_GetWeapon_Statics::FPSCharacter_eventGetWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_GetWeapon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFPSCharacter_GetWeapon_Statics::FPSCharacter_eventGetWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSCharacter_GetWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_GetWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execGetWeapon)
{
	P_GET_ENUM(EWeaponType,Z_Param__type);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AFPSWeapon**)Z_Param__Result=P_THIS->GetWeapon(EWeaponType(Z_Param__type));
	P_NATIVE_END;
}
// ********** End Class AFPSCharacter Function GetWeapon *******************************************

// ********** Begin Class AFPSCharacter Function HandleTakeDamage **********************************
struct Z_Construct_UFunction_AFPSCharacter_HandleTakeDamage_Statics
{
	struct FPSCharacter_eventHandleTakeDamage_Parms
	{
		AActor* DamagedActor;
		float Damage;
		const UDamageType* DamageType;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacter_HandleTakeDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventHandleTakeDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacter_HandleTakeDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventHandleTakeDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacter_HandleTakeDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventHandleTakeDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacter_HandleTakeDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventHandleTakeDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacter_HandleTakeDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventHandleTakeDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_HandleTakeDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_HandleTakeDamage_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_HandleTakeDamage_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_HandleTakeDamage_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_HandleTakeDamage_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_HandleTakeDamage_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_HandleTakeDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_HandleTakeDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "HandleTakeDamage", Z_Construct_UFunction_AFPSCharacter_HandleTakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_HandleTakeDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSCharacter_HandleTakeDamage_Statics::FPSCharacter_eventHandleTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_HandleTakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_HandleTakeDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFPSCharacter_HandleTakeDamage_Statics::FPSCharacter_eventHandleTakeDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSCharacter_HandleTakeDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_HandleTakeDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execHandleTakeDamage)
{
	P_GET_OBJECT(AActor,Z_Param_DamagedActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_OBJECT(UDamageType,Z_Param_DamageType);
	P_GET_OBJECT(AController,Z_Param_InstigatedBy);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTakeDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// ********** End Class AFPSCharacter Function HandleTakeDamage ************************************

// ********** Begin Class AFPSCharacter Function JumpChara *****************************************
struct Z_Construct_UFunction_AFPSCharacter_JumpChara_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_JumpChara_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "JumpChara", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_JumpChara_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_JumpChara_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFPSCharacter_JumpChara()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_JumpChara_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execJumpChara)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->JumpChara();
	P_NATIVE_END;
}
// ********** End Class AFPSCharacter Function JumpChara *******************************************

// ********** Begin Class AFPSCharacter Function MC_SpawnFireParticule *****************************
struct FPSCharacter_eventMC_SpawnFireParticule_Parms
{
	UParticleSystem* _particule;
};
static FName NAME_AFPSCharacter_MC_SpawnFireParticule = FName(TEXT("MC_SpawnFireParticule"));
void AFPSCharacter::MC_SpawnFireParticule(UParticleSystem* _particule)
{
	FPSCharacter_eventMC_SpawnFireParticule_Parms Parms;
	Parms._particule=_particule;
	UFunction* Func = FindFunctionChecked(NAME_AFPSCharacter_MC_SpawnFireParticule);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AFPSCharacter_MC_SpawnFireParticule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__particule;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacter_MC_SpawnFireParticule_Statics::NewProp__particule = { "_particule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventMC_SpawnFireParticule_Parms, _particule), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_MC_SpawnFireParticule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_MC_SpawnFireParticule_Statics::NewProp__particule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_MC_SpawnFireParticule_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_MC_SpawnFireParticule_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "MC_SpawnFireParticule", Z_Construct_UFunction_AFPSCharacter_MC_SpawnFireParticule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_MC_SpawnFireParticule_Statics::PropPointers), sizeof(FPSCharacter_eventMC_SpawnFireParticule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_MC_SpawnFireParticule_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_MC_SpawnFireParticule_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FPSCharacter_eventMC_SpawnFireParticule_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSCharacter_MC_SpawnFireParticule()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_MC_SpawnFireParticule_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execMC_SpawnFireParticule)
{
	P_GET_OBJECT(UParticleSystem,Z_Param__particule);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MC_SpawnFireParticule_Implementation(Z_Param__particule);
	P_NATIVE_END;
}
// ********** End Class AFPSCharacter Function MC_SpawnFireParticule *******************************

// ********** Begin Class AFPSCharacter Function Move **********************************************
struct Z_Construct_UFunction_AFPSCharacter_Move_Statics
{
	struct FPSCharacter_eventMove_Parms
	{
		FVector2D _inputs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__inputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSCharacter_Move_Statics::NewProp__inputs = { "_inputs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventMove_Parms, _inputs), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_Move_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_Move_Statics::NewProp__inputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_Move_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_Move_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "Move", Z_Construct_UFunction_AFPSCharacter_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_Move_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSCharacter_Move_Statics::FPSCharacter_eventMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_Move_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFPSCharacter_Move_Statics::FPSCharacter_eventMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSCharacter_Move()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_Move_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execMove)
{
	P_GET_STRUCT(FVector2D,Z_Param__inputs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Move(Z_Param__inputs);
	P_NATIVE_END;
}
// ********** End Class AFPSCharacter Function Move ************************************************

// ********** Begin Class AFPSCharacter Function MoveCamera ****************************************
struct Z_Construct_UFunction_AFPSCharacter_MoveCamera_Statics
{
	struct FPSCharacter_eventMoveCamera_Parms
	{
		FVector2D _inputs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__inputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSCharacter_MoveCamera_Statics::NewProp__inputs = { "_inputs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventMoveCamera_Parms, _inputs), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_MoveCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_MoveCamera_Statics::NewProp__inputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_MoveCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_MoveCamera_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "MoveCamera", Z_Construct_UFunction_AFPSCharacter_MoveCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_MoveCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSCharacter_MoveCamera_Statics::FPSCharacter_eventMoveCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_MoveCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_MoveCamera_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFPSCharacter_MoveCamera_Statics::FPSCharacter_eventMoveCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSCharacter_MoveCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_MoveCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execMoveCamera)
{
	P_GET_STRUCT(FVector2D,Z_Param__inputs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveCamera(Z_Param__inputs);
	P_NATIVE_END;
}
// ********** End Class AFPSCharacter Function MoveCamera ******************************************

// ********** Begin Class AFPSCharacter Function OnRepEquiped **************************************
struct Z_Construct_UFunction_AFPSCharacter_OnRepEquiped_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_OnRepEquiped_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "OnRepEquiped", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_OnRepEquiped_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_OnRepEquiped_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFPSCharacter_OnRepEquiped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_OnRepEquiped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execOnRepEquiped)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRepEquiped();
	P_NATIVE_END;
}
// ********** End Class AFPSCharacter Function OnRepEquiped ****************************************

// ********** Begin Class AFPSCharacter Function OnRepHealth ***************************************
struct Z_Construct_UFunction_AFPSCharacter_OnRepHealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_OnRepHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "OnRepHealth", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_OnRepHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_OnRepHealth_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFPSCharacter_OnRepHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_OnRepHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execOnRepHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRepHealth();
	P_NATIVE_END;
}
// ********** End Class AFPSCharacter Function OnRepHealth *****************************************

// ********** Begin Class AFPSCharacter Function OnRepReload ***************************************
struct Z_Construct_UFunction_AFPSCharacter_OnRepReload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_OnRepReload_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "OnRepReload", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_OnRepReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_OnRepReload_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFPSCharacter_OnRepReload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_OnRepReload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execOnRepReload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRepReload();
	P_NATIVE_END;
}
// ********** End Class AFPSCharacter Function OnRepReload *****************************************

// ********** Begin Class AFPSCharacter Function PlayAnim ******************************************
struct FPSCharacter_eventPlayAnim_Parms
{
	UAnimMontage* _animMontage;
	float playRate;
};
static FName NAME_AFPSCharacter_PlayAnim = FName(TEXT("PlayAnim"));
void AFPSCharacter::PlayAnim(UAnimMontage* _animMontage, float playRate)
{
	FPSCharacter_eventPlayAnim_Parms Parms;
	Parms._animMontage=_animMontage;
	Parms.playRate=playRate;
	UFunction* Func = FindFunctionChecked(NAME_AFPSCharacter_PlayAnim);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AFPSCharacter_PlayAnim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_playRate", "1.000000" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__animMontage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_playRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacter_PlayAnim_Statics::NewProp__animMontage = { "_animMontage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventPlayAnim_Parms, _animMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacter_PlayAnim_Statics::NewProp_playRate = { "playRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventPlayAnim_Parms, playRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_PlayAnim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_PlayAnim_Statics::NewProp__animMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_PlayAnim_Statics::NewProp_playRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_PlayAnim_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_PlayAnim_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "PlayAnim", Z_Construct_UFunction_AFPSCharacter_PlayAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_PlayAnim_Statics::PropPointers), sizeof(FPSCharacter_eventPlayAnim_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_PlayAnim_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_PlayAnim_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FPSCharacter_eventPlayAnim_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSCharacter_PlayAnim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_PlayAnim_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AFPSCharacter Function PlayAnim ********************************************

// ********** Begin Class AFPSCharacter Function PlayFPPFireAnim ***********************************
struct FPSCharacter_eventPlayFPPFireAnim_Parms
{
	FRecoilAnimValues _recoil;
};
static FName NAME_AFPSCharacter_PlayFPPFireAnim = FName(TEXT("PlayFPPFireAnim"));
void AFPSCharacter::PlayFPPFireAnim(FRecoilAnimValues _recoil)
{
	FPSCharacter_eventPlayFPPFireAnim_Parms Parms;
	Parms._recoil=_recoil;
	UFunction* Func = FindFunctionChecked(NAME_AFPSCharacter_PlayFPPFireAnim);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AFPSCharacter_PlayFPPFireAnim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__recoil;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSCharacter_PlayFPPFireAnim_Statics::NewProp__recoil = { "_recoil", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventPlayFPPFireAnim_Parms, _recoil), Z_Construct_UScriptStruct_FRecoilAnimValues, METADATA_PARAMS(0, nullptr) }; // 2669564610
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_PlayFPPFireAnim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_PlayFPPFireAnim_Statics::NewProp__recoil,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_PlayFPPFireAnim_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_PlayFPPFireAnim_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "PlayFPPFireAnim", Z_Construct_UFunction_AFPSCharacter_PlayFPPFireAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_PlayFPPFireAnim_Statics::PropPointers), sizeof(FPSCharacter_eventPlayFPPFireAnim_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_PlayFPPFireAnim_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_PlayFPPFireAnim_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FPSCharacter_eventPlayFPPFireAnim_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSCharacter_PlayFPPFireAnim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_PlayFPPFireAnim_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AFPSCharacter Function PlayFPPFireAnim *************************************

// ********** Begin Class AFPSCharacter Function ReduceHealth **************************************
struct FPSCharacter_eventReduceHealth_Parms
{
	float _damage;
};
static FName NAME_AFPSCharacter_ReduceHealth = FName(TEXT("ReduceHealth"));
void AFPSCharacter::ReduceHealth(float _damage)
{
	FPSCharacter_eventReduceHealth_Parms Parms;
	Parms._damage=_damage;
	UFunction* Func = FindFunctionChecked(NAME_AFPSCharacter_ReduceHealth);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AFPSCharacter_ReduceHealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp__damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacter_ReduceHealth_Statics::NewProp__damage = { "_damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventReduceHealth_Parms, _damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_ReduceHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_ReduceHealth_Statics::NewProp__damage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_ReduceHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_ReduceHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "ReduceHealth", Z_Construct_UFunction_AFPSCharacter_ReduceHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_ReduceHealth_Statics::PropPointers), sizeof(FPSCharacter_eventReduceHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_ReduceHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_ReduceHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FPSCharacter_eventReduceHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSCharacter_ReduceHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_ReduceHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execReduceHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param__damage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReduceHealth_Implementation(Z_Param__damage);
	P_NATIVE_END;
}
// ********** End Class AFPSCharacter Function ReduceHealth ****************************************

// ********** Begin Class AFPSCharacter Function SendHealthToHud ***********************************
struct FPSCharacter_eventSendHealthToHud_Parms
{
	float _percent;
};
static FName NAME_AFPSCharacter_SendHealthToHud = FName(TEXT("SendHealthToHud"));
void AFPSCharacter::SendHealthToHud(float _percent)
{
	FPSCharacter_eventSendHealthToHud_Parms Parms;
	Parms._percent=_percent;
	UFunction* Func = FindFunctionChecked(NAME_AFPSCharacter_SendHealthToHud);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AFPSCharacter_SendHealthToHud_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp__percent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacter_SendHealthToHud_Statics::NewProp__percent = { "_percent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventSendHealthToHud_Parms, _percent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_SendHealthToHud_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_SendHealthToHud_Statics::NewProp__percent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_SendHealthToHud_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_SendHealthToHud_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "SendHealthToHud", Z_Construct_UFunction_AFPSCharacter_SendHealthToHud_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_SendHealthToHud_Statics::PropPointers), sizeof(FPSCharacter_eventSendHealthToHud_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_SendHealthToHud_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_SendHealthToHud_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FPSCharacter_eventSendHealthToHud_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSCharacter_SendHealthToHud()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_SendHealthToHud_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AFPSCharacter Function SendHealthToHud *************************************

// ********** Begin Class AFPSCharacter Function Server_DealDamage *********************************
struct FPSCharacter_eventServer_DealDamage_Parms
{
	float _damage;
	FHitResult _hit;
};
static FName NAME_AFPSCharacter_Server_DealDamage = FName(TEXT("Server_DealDamage"));
void AFPSCharacter::Server_DealDamage(float _damage, FHitResult _hit)
{
	FPSCharacter_eventServer_DealDamage_Parms Parms;
	Parms._damage=_damage;
	Parms._hit=_hit;
	UFunction* Func = FindFunctionChecked(NAME_AFPSCharacter_Server_DealDamage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AFPSCharacter_Server_DealDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp__damage;
	static const UECodeGen_Private::FStructPropertyParams NewProp__hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacter_Server_DealDamage_Statics::NewProp__damage = { "_damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventServer_DealDamage_Parms, _damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSCharacter_Server_DealDamage_Statics::NewProp__hit = { "_hit", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventServer_DealDamage_Parms, _hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_Server_DealDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_Server_DealDamage_Statics::NewProp__damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_Server_DealDamage_Statics::NewProp__hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_Server_DealDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_Server_DealDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "Server_DealDamage", Z_Construct_UFunction_AFPSCharacter_Server_DealDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_Server_DealDamage_Statics::PropPointers), sizeof(FPSCharacter_eventServer_DealDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_Server_DealDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_Server_DealDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FPSCharacter_eventServer_DealDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSCharacter_Server_DealDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_Server_DealDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execServer_DealDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param__damage);
	P_GET_STRUCT(FHitResult,Z_Param__hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_DealDamage_Implementation(Z_Param__damage,Z_Param__hit);
	P_NATIVE_END;
}
// ********** End Class AFPSCharacter Function Server_DealDamage ***********************************

// ********** Begin Class AFPSCharacter Function Server_SpawnFireParticule *************************
struct FPSCharacter_eventServer_SpawnFireParticule_Parms
{
	UParticleSystem* _particule;
};
static FName NAME_AFPSCharacter_Server_SpawnFireParticule = FName(TEXT("Server_SpawnFireParticule"));
void AFPSCharacter::Server_SpawnFireParticule(UParticleSystem* _particule)
{
	FPSCharacter_eventServer_SpawnFireParticule_Parms Parms;
	Parms._particule=_particule;
	UFunction* Func = FindFunctionChecked(NAME_AFPSCharacter_Server_SpawnFireParticule);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AFPSCharacter_Server_SpawnFireParticule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__particule;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacter_Server_SpawnFireParticule_Statics::NewProp__particule = { "_particule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventServer_SpawnFireParticule_Parms, _particule), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_Server_SpawnFireParticule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_Server_SpawnFireParticule_Statics::NewProp__particule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_Server_SpawnFireParticule_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_Server_SpawnFireParticule_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "Server_SpawnFireParticule", Z_Construct_UFunction_AFPSCharacter_Server_SpawnFireParticule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_Server_SpawnFireParticule_Statics::PropPointers), sizeof(FPSCharacter_eventServer_SpawnFireParticule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_Server_SpawnFireParticule_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_Server_SpawnFireParticule_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FPSCharacter_eventServer_SpawnFireParticule_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSCharacter_Server_SpawnFireParticule()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_Server_SpawnFireParticule_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execServer_SpawnFireParticule)
{
	P_GET_OBJECT(UParticleSystem,Z_Param__particule);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SpawnFireParticule_Implementation(Z_Param__particule);
	P_NATIVE_END;
}
// ********** End Class AFPSCharacter Function Server_SpawnFireParticule ***************************

// ********** Begin Class AFPSCharacter Function ShootGun ******************************************
struct Z_Construct_UFunction_AFPSCharacter_ShootGun_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_ShootGun_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "ShootGun", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_ShootGun_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_ShootGun_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFPSCharacter_ShootGun()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_ShootGun_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execShootGun)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShootGun();
	P_NATIVE_END;
}
// ********** End Class AFPSCharacter Function ShootGun ********************************************

// ********** Begin Class AFPSCharacter Function SpawnCharaWeapons *********************************
struct FPSCharacter_eventSpawnCharaWeapons_Parms
{
	AFPSCharacter* _chara;
};
static FName NAME_AFPSCharacter_SpawnCharaWeapons = FName(TEXT("SpawnCharaWeapons"));
void AFPSCharacter::SpawnCharaWeapons(AFPSCharacter* _chara)
{
	FPSCharacter_eventSpawnCharaWeapons_Parms Parms;
	Parms._chara=_chara;
	UFunction* Func = FindFunctionChecked(NAME_AFPSCharacter_SpawnCharaWeapons);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AFPSCharacter_SpawnCharaWeapons_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__chara;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacter_SpawnCharaWeapons_Statics::NewProp__chara = { "_chara", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventSpawnCharaWeapons_Parms, _chara), Z_Construct_UClass_AFPSCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_SpawnCharaWeapons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_SpawnCharaWeapons_Statics::NewProp__chara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_SpawnCharaWeapons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_SpawnCharaWeapons_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "SpawnCharaWeapons", Z_Construct_UFunction_AFPSCharacter_SpawnCharaWeapons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_SpawnCharaWeapons_Statics::PropPointers), sizeof(FPSCharacter_eventSpawnCharaWeapons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_SpawnCharaWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_SpawnCharaWeapons_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FPSCharacter_eventSpawnCharaWeapons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSCharacter_SpawnCharaWeapons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_SpawnCharaWeapons_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AFPSCharacter Function SpawnCharaWeapons ***********************************

// ********** Begin Class AFPSCharacter Function SprintChara ***************************************
struct Z_Construct_UFunction_AFPSCharacter_SprintChara_Statics
{
	struct FPSCharacter_eventSprintChara_Parms
	{
		bool _state;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp__state_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__state;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AFPSCharacter_SprintChara_Statics::NewProp__state_SetBit(void* Obj)
{
	((FPSCharacter_eventSprintChara_Parms*)Obj)->_state = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacter_SprintChara_Statics::NewProp__state = { "_state", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPSCharacter_eventSprintChara_Parms), &Z_Construct_UFunction_AFPSCharacter_SprintChara_Statics::NewProp__state_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_SprintChara_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_SprintChara_Statics::NewProp__state,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_SprintChara_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_SprintChara_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "SprintChara", Z_Construct_UFunction_AFPSCharacter_SprintChara_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_SprintChara_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSCharacter_SprintChara_Statics::FPSCharacter_eventSprintChara_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_SprintChara_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_SprintChara_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFPSCharacter_SprintChara_Statics::FPSCharacter_eventSprintChara_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSCharacter_SprintChara()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_SprintChara_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execSprintChara)
{
	P_GET_UBOOL(Z_Param__state);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SprintChara(Z_Param__state);
	P_NATIVE_END;
}
// ********** End Class AFPSCharacter Function SprintChara *****************************************

// ********** Begin Class AFPSCharacter Function StartADS ******************************************
struct Z_Construct_UFunction_AFPSCharacter_StartADS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_StartADS_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "StartADS", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_StartADS_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_StartADS_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFPSCharacter_StartADS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_StartADS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execStartADS)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartADS();
	P_NATIVE_END;
}
// ********** End Class AFPSCharacter Function StartADS ********************************************

// ********** Begin Class AFPSCharacter Function StartReloading ************************************
struct Z_Construct_UFunction_AFPSCharacter_StartReloading_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_StartReloading_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "StartReloading", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_StartReloading_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_StartReloading_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFPSCharacter_StartReloading()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_StartReloading_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execStartReloading)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartReloading();
	P_NATIVE_END;
}
// ********** End Class AFPSCharacter Function StartReloading **************************************

// ********** Begin Class AFPSCharacter Function StopAnim ******************************************
struct FPSCharacter_eventStopAnim_Parms
{
	UAnimMontage* _animMontage;
};
static FName NAME_AFPSCharacter_StopAnim = FName(TEXT("StopAnim"));
void AFPSCharacter::StopAnim(UAnimMontage* _animMontage)
{
	FPSCharacter_eventStopAnim_Parms Parms;
	Parms._animMontage=_animMontage;
	UFunction* Func = FindFunctionChecked(NAME_AFPSCharacter_StopAnim);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AFPSCharacter_StopAnim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__animMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacter_StopAnim_Statics::NewProp__animMontage = { "_animMontage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventStopAnim_Parms, _animMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_StopAnim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_StopAnim_Statics::NewProp__animMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_StopAnim_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_StopAnim_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "StopAnim", Z_Construct_UFunction_AFPSCharacter_StopAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_StopAnim_Statics::PropPointers), sizeof(FPSCharacter_eventStopAnim_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_StopAnim_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_StopAnim_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FPSCharacter_eventStopAnim_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSCharacter_StopAnim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_StopAnim_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AFPSCharacter Function StopAnim ********************************************

// ********** Begin Class AFPSCharacter Function StopShooting **************************************
struct Z_Construct_UFunction_AFPSCharacter_StopShooting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_StopShooting_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "StopShooting", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_StopShooting_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_StopShooting_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFPSCharacter_StopShooting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_StopShooting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execStopShooting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopShooting();
	P_NATIVE_END;
}
// ********** End Class AFPSCharacter Function StopShooting ****************************************

// ********** Begin Class AFPSCharacter Function TakeDamage ****************************************
struct Z_Construct_UFunction_AFPSCharacter_TakeDamage_Statics
{
	struct FPSCharacter_eventTakeDamage_Parms
	{
		float _damage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp__damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacter_TakeDamage_Statics::NewProp__damage = { "_damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventTakeDamage_Parms, _damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_TakeDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_TakeDamage_Statics::NewProp__damage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_TakeDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_TakeDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "TakeDamage", Z_Construct_UFunction_AFPSCharacter_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_TakeDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSCharacter_TakeDamage_Statics::FPSCharacter_eventTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_TakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_TakeDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFPSCharacter_TakeDamage_Statics::FPSCharacter_eventTakeDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSCharacter_TakeDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_TakeDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execTakeDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param__damage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TakeDamage(Z_Param__damage);
	P_NATIVE_END;
}
// ********** End Class AFPSCharacter Function TakeDamage ******************************************

// ********** Begin Class AFPSCharacter Function UpdateGunAmmo *************************************
static FName NAME_AFPSCharacter_UpdateGunAmmo = FName(TEXT("UpdateGunAmmo"));
void AFPSCharacter::UpdateGunAmmo()
{
	UFunction* Func = FindFunctionChecked(NAME_AFPSCharacter_UpdateGunAmmo);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AFPSCharacter_UpdateGunAmmo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_UpdateGunAmmo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "UpdateGunAmmo", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_UpdateGunAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_UpdateGunAmmo_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFPSCharacter_UpdateGunAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_UpdateGunAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AFPSCharacter Function UpdateGunAmmo ***************************************

// ********** Begin Class AFPSCharacter ************************************************************
void AFPSCharacter::StaticRegisterNativesAFPSCharacter()
{
	UClass* Class = AFPSCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CancelReload", &AFPSCharacter::execCancelReload },
		{ "Client_SpawnOtherWeapons", &AFPSCharacter::execClient_SpawnOtherWeapons },
		{ "CrouchChara", &AFPSCharacter::execCrouchChara },
		{ "EndADS", &AFPSCharacter::execEndADS },
		{ "EquipGun", &AFPSCharacter::execEquipGun },
		{ "GetCurrentWeaponFovScale", &AFPSCharacter::execGetCurrentWeaponFovScale },
		{ "GetEquipedWeapon", &AFPSCharacter::execGetEquipedWeapon },
		{ "GetWeapon", &AFPSCharacter::execGetWeapon },
		{ "HandleTakeDamage", &AFPSCharacter::execHandleTakeDamage },
		{ "JumpChara", &AFPSCharacter::execJumpChara },
		{ "MC_SpawnFireParticule", &AFPSCharacter::execMC_SpawnFireParticule },
		{ "Move", &AFPSCharacter::execMove },
		{ "MoveCamera", &AFPSCharacter::execMoveCamera },
		{ "OnRepEquiped", &AFPSCharacter::execOnRepEquiped },
		{ "OnRepHealth", &AFPSCharacter::execOnRepHealth },
		{ "OnRepReload", &AFPSCharacter::execOnRepReload },
		{ "ReduceHealth", &AFPSCharacter::execReduceHealth },
		{ "Server_DealDamage", &AFPSCharacter::execServer_DealDamage },
		{ "Server_SpawnFireParticule", &AFPSCharacter::execServer_SpawnFireParticule },
		{ "ShootGun", &AFPSCharacter::execShootGun },
		{ "SprintChara", &AFPSCharacter::execSprintChara },
		{ "StartADS", &AFPSCharacter::execStartADS },
		{ "StartReloading", &AFPSCharacter::execStartReloading },
		{ "StopShooting", &AFPSCharacter::execStopShooting },
		{ "TakeDamage", &AFPSCharacter::execTakeDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFPSCharacter;
UClass* AFPSCharacter::GetPrivateStaticClass()
{
	using TClass = AFPSCharacter;
	if (!Z_Registration_Info_UClass_AFPSCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FPSCharacter"),
			Z_Registration_Info_UClass_AFPSCharacter.InnerSingleton,
			StaticRegisterNativesAFPSCharacter,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AFPSCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AFPSCharacter_NoRegister()
{
	return AFPSCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFPSCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FPSCharacter.h" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weaponsToSpawn_MetaData[] = {
		{ "Category", "FPSCharacter" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TPP_ReloadAnims_MetaData[] = {
		{ "Category", "FPSCharacter" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TPP_FireAnims_MetaData[] = {
		{ "Category", "FPSCharacter" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TPP_HitAnims_MetaData[] = {
		{ "Category", "FPSCharacter" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_primaryWeapon_MetaData[] = {
		{ "Category", "FPSCharacter" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_secondaryWeapon_MetaData[] = {
		{ "Category", "FPSCharacter" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_equipedWeapon_MetaData[] = {
		{ "Category", "FPSCharacter" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentHealth_MetaData[] = {
		{ "Category", "FPSCharacter" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsReloading_MetaData[] = {
		{ "Category", "FPSCharacter" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxHealth_MetaData[] = {
		{ "Category", "FPSCharacter" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerName_MetaData[] = {
		{ "Category", "FPSCharacter" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_walkSpeedMax_MetaData[] = {
		{ "Category", "FPSCharacter" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeedMax_MetaData[] = {
		{ "Category", "FPSCharacter" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSprinting_MetaData[] = {
		{ "Category", "FPSCharacter" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOV_MetaData[] = {
		{ "Category", "FPSCharacter" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAiming_MetaData[] = {
		{ "Category", "FPSCharacter" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_respawnTime_MetaData[] = {
		{ "Category", "FPSCharacter" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_weaponsToSpawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TPP_ReloadAnims_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TPP_ReloadAnims_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TPP_ReloadAnims_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TPP_ReloadAnims;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TPP_FireAnims_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TPP_FireAnims_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TPP_FireAnims_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TPP_FireAnims;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TPP_HitAnims_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TPP_HitAnims;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_primaryWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_secondaryWeapon;
	static const UECodeGen_Private::FBytePropertyParams NewProp_equipedWeapon_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_equipedWeapon;
	static const UECodeGen_Private::FIntPropertyParams NewProp_currentHealth;
	static void NewProp_bIsReloading_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReloading;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maxHealth;
	static const UECodeGen_Private::FNamePropertyParams NewProp_playerName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_walkSpeedMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeedMax;
	static void NewProp_bIsSprinting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSprinting;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FOV;
	static void NewProp_bIsAiming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAiming;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_respawnTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSCharacter_CancelReload, "CancelReload" }, // 1999083201
		{ &Z_Construct_UFunction_AFPSCharacter_ChangeGunVisibility, "ChangeGunVisibility" }, // 3950503238
		{ &Z_Construct_UFunction_AFPSCharacter_ChangeHUDGunInfo, "ChangeHUDGunInfo" }, // 1546341984
		{ &Z_Construct_UFunction_AFPSCharacter_Client_SpawnOtherWeapons, "Client_SpawnOtherWeapons" }, // 3411999588
		{ &Z_Construct_UFunction_AFPSCharacter_CrouchChara, "CrouchChara" }, // 3090643592
		{ &Z_Construct_UFunction_AFPSCharacter_EnableRagdoll, "EnableRagdoll" }, // 516924553
		{ &Z_Construct_UFunction_AFPSCharacter_EndADS, "EndADS" }, // 4154453626
		{ &Z_Construct_UFunction_AFPSCharacter_EnterADSAnim, "EnterADSAnim" }, // 1925936544
		{ &Z_Construct_UFunction_AFPSCharacter_EquipGun, "EquipGun" }, // 4085511601
		{ &Z_Construct_UFunction_AFPSCharacter_ExitADSAnim, "ExitADSAnim" }, // 1258330427
		{ &Z_Construct_UFunction_AFPSCharacter_GetCurrentWeaponFovScale, "GetCurrentWeaponFovScale" }, // 3134560654
		{ &Z_Construct_UFunction_AFPSCharacter_GetEquipedWeapon, "GetEquipedWeapon" }, // 2412336643
		{ &Z_Construct_UFunction_AFPSCharacter_GetWeapon, "GetWeapon" }, // 1369632632
		{ &Z_Construct_UFunction_AFPSCharacter_HandleTakeDamage, "HandleTakeDamage" }, // 2629927805
		{ &Z_Construct_UFunction_AFPSCharacter_JumpChara, "JumpChara" }, // 4149562585
		{ &Z_Construct_UFunction_AFPSCharacter_MC_SpawnFireParticule, "MC_SpawnFireParticule" }, // 1437917633
		{ &Z_Construct_UFunction_AFPSCharacter_Move, "Move" }, // 3742239479
		{ &Z_Construct_UFunction_AFPSCharacter_MoveCamera, "MoveCamera" }, // 4161976889
		{ &Z_Construct_UFunction_AFPSCharacter_OnRepEquiped, "OnRepEquiped" }, // 3204835420
		{ &Z_Construct_UFunction_AFPSCharacter_OnRepHealth, "OnRepHealth" }, // 2107147057
		{ &Z_Construct_UFunction_AFPSCharacter_OnRepReload, "OnRepReload" }, // 4198297096
		{ &Z_Construct_UFunction_AFPSCharacter_PlayAnim, "PlayAnim" }, // 4018498092
		{ &Z_Construct_UFunction_AFPSCharacter_PlayFPPFireAnim, "PlayFPPFireAnim" }, // 3608326157
		{ &Z_Construct_UFunction_AFPSCharacter_ReduceHealth, "ReduceHealth" }, // 2581001555
		{ &Z_Construct_UFunction_AFPSCharacter_SendHealthToHud, "SendHealthToHud" }, // 195339159
		{ &Z_Construct_UFunction_AFPSCharacter_Server_DealDamage, "Server_DealDamage" }, // 680099646
		{ &Z_Construct_UFunction_AFPSCharacter_Server_SpawnFireParticule, "Server_SpawnFireParticule" }, // 3592095325
		{ &Z_Construct_UFunction_AFPSCharacter_ShootGun, "ShootGun" }, // 2298979356
		{ &Z_Construct_UFunction_AFPSCharacter_SpawnCharaWeapons, "SpawnCharaWeapons" }, // 2376710997
		{ &Z_Construct_UFunction_AFPSCharacter_SprintChara, "SprintChara" }, // 3351018664
		{ &Z_Construct_UFunction_AFPSCharacter_StartADS, "StartADS" }, // 1456146248
		{ &Z_Construct_UFunction_AFPSCharacter_StartReloading, "StartReloading" }, // 102950416
		{ &Z_Construct_UFunction_AFPSCharacter_StopAnim, "StopAnim" }, // 1014373352
		{ &Z_Construct_UFunction_AFPSCharacter_StopShooting, "StopShooting" }, // 1716966931
		{ &Z_Construct_UFunction_AFPSCharacter_TakeDamage, "TakeDamage" }, // 3680357053
		{ &Z_Construct_UFunction_AFPSCharacter_UpdateGunAmmo, "UpdateGunAmmo" }, // 2458167350
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_weaponsToSpawn = { "weaponsToSpawn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, weaponsToSpawn), Z_Construct_UScriptStruct_FPlayerWeapons, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponsToSpawn_MetaData), NewProp_weaponsToSpawn_MetaData) }; // 1467568506
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_TPP_ReloadAnims_ValueProp = { "TPP_ReloadAnims", nullptr, (EPropertyFlags)0x0104000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_TPP_ReloadAnims_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_TPP_ReloadAnims_Key_KeyProp = { "TPP_ReloadAnims_Key", nullptr, (EPropertyFlags)0x0100000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OnlineFPS_EWeaponType, METADATA_PARAMS(0, nullptr) }; // 3700248627
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_TPP_ReloadAnims = { "TPP_ReloadAnims", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, TPP_ReloadAnims), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TPP_ReloadAnims_MetaData), NewProp_TPP_ReloadAnims_MetaData) }; // 3700248627
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_TPP_FireAnims_ValueProp = { "TPP_FireAnims", nullptr, (EPropertyFlags)0x0104000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_TPP_FireAnims_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_TPP_FireAnims_Key_KeyProp = { "TPP_FireAnims_Key", nullptr, (EPropertyFlags)0x0100000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OnlineFPS_EWeaponType, METADATA_PARAMS(0, nullptr) }; // 3700248627
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_TPP_FireAnims = { "TPP_FireAnims", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, TPP_FireAnims), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TPP_FireAnims_MetaData), NewProp_TPP_FireAnims_MetaData) }; // 3700248627
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_TPP_HitAnims_Inner = { "TPP_HitAnims", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_TPP_HitAnims = { "TPP_HitAnims", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, TPP_HitAnims), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TPP_HitAnims_MetaData), NewProp_TPP_HitAnims_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_primaryWeapon = { "primaryWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, primaryWeapon), Z_Construct_UClass_AFPSWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_primaryWeapon_MetaData), NewProp_primaryWeapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_secondaryWeapon = { "secondaryWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, secondaryWeapon), Z_Construct_UClass_AFPSWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_secondaryWeapon_MetaData), NewProp_secondaryWeapon_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_equipedWeapon_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_equipedWeapon = { "equipedWeapon", "OnRepEquiped", (EPropertyFlags)0x0010000100000024, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, equipedWeapon), Z_Construct_UEnum_OnlineFPS_EWeaponType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_equipedWeapon_MetaData), NewProp_equipedWeapon_MetaData) }; // 3700248627
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_currentHealth = { "currentHealth", "OnRepHealth", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, currentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentHealth_MetaData), NewProp_currentHealth_MetaData) };
void Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bIsReloading_SetBit(void* Obj)
{
	((AFPSCharacter*)Obj)->bIsReloading = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bIsReloading = { "bIsReloading", "OnRepReload", (EPropertyFlags)0x0010000100000024, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFPSCharacter), &Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bIsReloading_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsReloading_MetaData), NewProp_bIsReloading_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_maxHealth = { "maxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, maxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxHealth_MetaData), NewProp_maxHealth_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_playerName = { "playerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, playerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerName_MetaData), NewProp_playerName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_walkSpeedMax = { "walkSpeedMax", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, walkSpeedMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_walkSpeedMax_MetaData), NewProp_walkSpeedMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SprintSpeedMax = { "SprintSpeedMax", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, SprintSpeedMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeedMax_MetaData), NewProp_SprintSpeedMax_MetaData) };
void Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bIsSprinting_SetBit(void* Obj)
{
	((AFPSCharacter*)Obj)->bIsSprinting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bIsSprinting = { "bIsSprinting", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFPSCharacter), &Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bIsSprinting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSprinting_MetaData), NewProp_bIsSprinting_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, FOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOV_MetaData), NewProp_FOV_MetaData) };
void Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bIsAiming_SetBit(void* Obj)
{
	((AFPSCharacter*)Obj)->bIsAiming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bIsAiming = { "bIsAiming", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFPSCharacter), &Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bIsAiming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAiming_MetaData), NewProp_bIsAiming_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_respawnTime = { "respawnTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, respawnTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_respawnTime_MetaData), NewProp_respawnTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_weaponsToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_TPP_ReloadAnims_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_TPP_ReloadAnims_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_TPP_ReloadAnims_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_TPP_ReloadAnims,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_TPP_FireAnims_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_TPP_FireAnims_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_TPP_FireAnims_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_TPP_FireAnims,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_TPP_HitAnims_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_TPP_HitAnims,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_primaryWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_secondaryWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_equipedWeapon_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_equipedWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_currentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bIsReloading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_maxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_playerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_walkSpeedMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SprintSpeedMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bIsSprinting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bIsAiming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_respawnTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFPSCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSCharacter_Statics::ClassParams = {
	&AFPSCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFPSCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPSCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPSCharacter()
{
	if (!Z_Registration_Info_UClass_AFPSCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPSCharacter.OuterSingleton, Z_Construct_UClass_AFPSCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPSCharacter.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void AFPSCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_equipedWeapon(TEXT("equipedWeapon"));
	static FName Name_currentHealth(TEXT("currentHealth"));
	static FName Name_bIsReloading(TEXT("bIsReloading"));
	const bool bIsValid = true
		&& Name_equipedWeapon == ClassReps[(int32)ENetFields_Private::equipedWeapon].Property->GetFName()
		&& Name_currentHealth == ClassReps[(int32)ENetFields_Private::currentHealth].Property->GetFName()
		&& Name_bIsReloading == ClassReps[(int32)ENetFields_Private::bIsReloading].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AFPSCharacter"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSCharacter);
AFPSCharacter::~AFPSCharacter() {}
// ********** End Class AFPSCharacter **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSCharacter_h__Script_OnlineFPS_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPlayerWeapons::StaticStruct, Z_Construct_UScriptStruct_FPlayerWeapons_Statics::NewStructOps, TEXT("PlayerWeapons"), &Z_Registration_Info_UScriptStruct_FPlayerWeapons, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerWeapons), 1467568506U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPSCharacter, AFPSCharacter::StaticClass, TEXT("AFPSCharacter"), &Z_Registration_Info_UClass_AFPSCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSCharacter), 2868139308U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSCharacter_h__Script_OnlineFPS_1973490387(TEXT("/Script/OnlineFPS"),
	Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSCharacter_h__Script_OnlineFPS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSCharacter_h__Script_OnlineFPS_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSCharacter_h__Script_OnlineFPS_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSCharacter_h__Script_OnlineFPS_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
