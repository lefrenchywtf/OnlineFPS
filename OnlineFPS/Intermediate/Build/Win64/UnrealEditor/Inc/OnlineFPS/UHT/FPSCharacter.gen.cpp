// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFPSCharacter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ONLINEFPS_API UClass* Z_Construct_UClass_AFPSCharacter();
ONLINEFPS_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();
ONLINEFPS_API UClass* Z_Construct_UClass_AFPSWeapon_NoRegister();
ONLINEFPS_API UEnum* Z_Construct_UEnum_OnlineFPS_EWeaponType();
ONLINEFPS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerWeapons();
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_SpawnCharaWeapons_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "SpawnCharaWeapons", Z_Construct_UFunction_AFPSCharacter_SpawnCharaWeapons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_SpawnCharaWeapons_Statics::PropPointers), sizeof(FPSCharacter_eventSpawnCharaWeapons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_SpawnCharaWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_SpawnCharaWeapons_Statics::Function_MetaDataParams)},  };
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

// ********** Begin Class AFPSCharacter ************************************************************
void AFPSCharacter::StaticRegisterNativesAFPSCharacter()
{
	UClass* Class = AFPSCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Client_SpawnOtherWeapons", &AFPSCharacter::execClient_SpawnOtherWeapons },
		{ "CrouchChara", &AFPSCharacter::execCrouchChara },
		{ "JumpChara", &AFPSCharacter::execJumpChara },
		{ "Move", &AFPSCharacter::execMove },
		{ "MoveCamera", &AFPSCharacter::execMoveCamera },
		{ "ShootGun", &AFPSCharacter::execShootGun },
		{ "SprintChara", &AFPSCharacter::execSprintChara },
		{ "StopShooting", &AFPSCharacter::execStopShooting },
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
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_weaponsToSpawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_primaryWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_secondaryWeapon;
	static const UECodeGen_Private::FBytePropertyParams NewProp_equipedWeapon_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_equipedWeapon;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_currentHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_maxHealth;
	static const UECodeGen_Private::FNamePropertyParams NewProp_playerName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_walkSpeedMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeedMax;
	static void NewProp_bIsSprinting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSprinting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSCharacter_Client_SpawnOtherWeapons, "Client_SpawnOtherWeapons" }, // 3411999588
		{ &Z_Construct_UFunction_AFPSCharacter_CrouchChara, "CrouchChara" }, // 3090643592
		{ &Z_Construct_UFunction_AFPSCharacter_JumpChara, "JumpChara" }, // 4149562585
		{ &Z_Construct_UFunction_AFPSCharacter_Move, "Move" }, // 3742239479
		{ &Z_Construct_UFunction_AFPSCharacter_MoveCamera, "MoveCamera" }, // 4161976889
		{ &Z_Construct_UFunction_AFPSCharacter_ShootGun, "ShootGun" }, // 2298979356
		{ &Z_Construct_UFunction_AFPSCharacter_SpawnCharaWeapons, "SpawnCharaWeapons" }, // 2048071705
		{ &Z_Construct_UFunction_AFPSCharacter_SprintChara, "SprintChara" }, // 3351018664
		{ &Z_Construct_UFunction_AFPSCharacter_StopShooting, "StopShooting" }, // 1716966931
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_weaponsToSpawn = { "weaponsToSpawn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, weaponsToSpawn), Z_Construct_UScriptStruct_FPlayerWeapons, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponsToSpawn_MetaData), NewProp_weaponsToSpawn_MetaData) }; // 1467568506
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_primaryWeapon = { "primaryWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, primaryWeapon), Z_Construct_UClass_AFPSWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_primaryWeapon_MetaData), NewProp_primaryWeapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_secondaryWeapon = { "secondaryWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, secondaryWeapon), Z_Construct_UClass_AFPSWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_secondaryWeapon_MetaData), NewProp_secondaryWeapon_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_equipedWeapon_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_equipedWeapon = { "equipedWeapon", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, equipedWeapon), Z_Construct_UEnum_OnlineFPS_EWeaponType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_equipedWeapon_MetaData), NewProp_equipedWeapon_MetaData) }; // 3700248627
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_currentHealth = { "currentHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, currentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentHealth_MetaData), NewProp_currentHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_maxHealth = { "maxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, maxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxHealth_MetaData), NewProp_maxHealth_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_playerName = { "playerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, playerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerName_MetaData), NewProp_playerName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_walkSpeedMax = { "walkSpeedMax", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, walkSpeedMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_walkSpeedMax_MetaData), NewProp_walkSpeedMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SprintSpeedMax = { "SprintSpeedMax", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, SprintSpeedMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeedMax_MetaData), NewProp_SprintSpeedMax_MetaData) };
void Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bIsSprinting_SetBit(void* Obj)
{
	((AFPSCharacter*)Obj)->bIsSprinting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bIsSprinting = { "bIsSprinting", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFPSCharacter), &Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bIsSprinting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSprinting_MetaData), NewProp_bIsSprinting_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_weaponsToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_primaryWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_secondaryWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_equipedWeapon_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_equipedWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_currentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_maxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_playerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_walkSpeedMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SprintSpeedMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bIsSprinting,
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
		{ Z_Construct_UClass_AFPSCharacter, AFPSCharacter::StaticClass, TEXT("AFPSCharacter"), &Z_Registration_Info_UClass_AFPSCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSCharacter), 3665473287U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSCharacter_h__Script_OnlineFPS_3244955191(TEXT("/Script/OnlineFPS"),
	Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSCharacter_h__Script_OnlineFPS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSCharacter_h__Script_OnlineFPS_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSCharacter_h__Script_OnlineFPS_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSCharacter_h__Script_OnlineFPS_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
