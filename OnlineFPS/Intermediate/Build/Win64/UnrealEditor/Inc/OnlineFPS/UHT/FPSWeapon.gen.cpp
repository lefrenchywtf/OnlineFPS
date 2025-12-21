// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSWeapon.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFPSWeapon() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ONLINEFPS_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();
ONLINEFPS_API UClass* Z_Construct_UClass_AFPSWeapon();
ONLINEFPS_API UClass* Z_Construct_UClass_AFPSWeapon_NoRegister();
ONLINEFPS_API UEnum* Z_Construct_UEnum_OnlineFPS_EWeaponType();
ONLINEFPS_API UScriptStruct* Z_Construct_UScriptStruct_FRecoilAnimValues();
UPackage* Z_Construct_UPackage__Script_OnlineFPS();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EWeaponType ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponType;
static UEnum* EWeaponType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWeaponType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWeaponType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineFPS_EWeaponType, (UObject*)Z_Construct_UPackage__Script_OnlineFPS(), TEXT("EWeaponType"));
	}
	return Z_Registration_Info_UEnum_EWeaponType.OuterSingleton;
}
template<> ONLINEFPS_API UEnum* StaticEnum<EWeaponType>()
{
	return EWeaponType_StaticEnum();
}
struct Z_Construct_UEnum_OnlineFPS_EWeaponType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
		{ "PRIMARY.Name", "EWeaponType::PRIMARY" },
		{ "SECONDARY.Name", "EWeaponType::SECONDARY" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWeaponType::PRIMARY", (int64)EWeaponType::PRIMARY },
		{ "EWeaponType::SECONDARY", (int64)EWeaponType::SECONDARY },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineFPS_EWeaponType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OnlineFPS,
	nullptr,
	"EWeaponType",
	"EWeaponType",
	Z_Construct_UEnum_OnlineFPS_EWeaponType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineFPS_EWeaponType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineFPS_EWeaponType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OnlineFPS_EWeaponType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OnlineFPS_EWeaponType()
{
	if (!Z_Registration_Info_UEnum_EWeaponType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponType.InnerSingleton, Z_Construct_UEnum_OnlineFPS_EWeaponType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWeaponType.InnerSingleton;
}
// ********** End Enum EWeaponType *****************************************************************

// ********** Begin ScriptStruct FRecoilAnimValues *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRecoilAnimValues;
class UScriptStruct* FRecoilAnimValues::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRecoilAnimValues.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRecoilAnimValues.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecoilAnimValues, (UObject*)Z_Construct_UPackage__Script_OnlineFPS(), TEXT("RecoilAnimValues"));
	}
	return Z_Registration_Info_UScriptStruct_FRecoilAnimValues.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FRecoilAnimValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_recoilMultiplier_MetaData[] = {
		{ "Category", "RecoilAnimValues" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sideRecoilMultiplier_MetaData[] = {
		{ "Category", "RecoilAnimValues" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_kickbackMultiplier_MetaData[] = {
		{ "Category", "RecoilAnimValues" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_kicksideMultiplier_MetaData[] = {
		{ "Category", "RecoilAnimValues" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_kickupMultiplier_MetaData[] = {
		{ "Category", "RecoilAnimValues" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_recoilMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_sideRecoilMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_kickbackMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_kicksideMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_kickupMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecoilAnimValues>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecoilAnimValues_Statics::NewProp_recoilMultiplier = { "recoilMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecoilAnimValues, recoilMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_recoilMultiplier_MetaData), NewProp_recoilMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecoilAnimValues_Statics::NewProp_sideRecoilMultiplier = { "sideRecoilMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecoilAnimValues, sideRecoilMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sideRecoilMultiplier_MetaData), NewProp_sideRecoilMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecoilAnimValues_Statics::NewProp_kickbackMultiplier = { "kickbackMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecoilAnimValues, kickbackMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_kickbackMultiplier_MetaData), NewProp_kickbackMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecoilAnimValues_Statics::NewProp_kicksideMultiplier = { "kicksideMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecoilAnimValues, kicksideMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_kicksideMultiplier_MetaData), NewProp_kicksideMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecoilAnimValues_Statics::NewProp_kickupMultiplier = { "kickupMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecoilAnimValues, kickupMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_kickupMultiplier_MetaData), NewProp_kickupMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecoilAnimValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecoilAnimValues_Statics::NewProp_recoilMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecoilAnimValues_Statics::NewProp_sideRecoilMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecoilAnimValues_Statics::NewProp_kickbackMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecoilAnimValues_Statics::NewProp_kicksideMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecoilAnimValues_Statics::NewProp_kickupMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecoilAnimValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecoilAnimValues_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineFPS,
	nullptr,
	&NewStructOps,
	"RecoilAnimValues",
	Z_Construct_UScriptStruct_FRecoilAnimValues_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecoilAnimValues_Statics::PropPointers),
	sizeof(FRecoilAnimValues),
	alignof(FRecoilAnimValues),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecoilAnimValues_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRecoilAnimValues_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRecoilAnimValues()
{
	if (!Z_Registration_Info_UScriptStruct_FRecoilAnimValues.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRecoilAnimValues.InnerSingleton, Z_Construct_UScriptStruct_FRecoilAnimValues_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FRecoilAnimValues.InnerSingleton;
}
// ********** End ScriptStruct FRecoilAnimValues ***************************************************

// ********** Begin Class AFPSWeapon Function Fire *************************************************
struct Z_Construct_UFunction_AFPSWeapon_Fire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSWeapon_Fire_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSWeapon, nullptr, "Fire", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSWeapon_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSWeapon_Fire_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFPSWeapon_Fire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSWeapon_Fire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSWeapon::execFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fire();
	P_NATIVE_END;
}
// ********** End Class AFPSWeapon Function Fire ***************************************************

// ********** Begin Class AFPSWeapon Function GetReloadPlayRate ************************************
struct Z_Construct_UFunction_AFPSWeapon_GetReloadPlayRate_Statics
{
	struct FPSWeapon_eventGetReloadPlayRate_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSWeapon_GetReloadPlayRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSWeapon_eventGetReloadPlayRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSWeapon_GetReloadPlayRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSWeapon_GetReloadPlayRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSWeapon_GetReloadPlayRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSWeapon_GetReloadPlayRate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSWeapon, nullptr, "GetReloadPlayRate", Z_Construct_UFunction_AFPSWeapon_GetReloadPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSWeapon_GetReloadPlayRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSWeapon_GetReloadPlayRate_Statics::FPSWeapon_eventGetReloadPlayRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSWeapon_GetReloadPlayRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSWeapon_GetReloadPlayRate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFPSWeapon_GetReloadPlayRate_Statics::FPSWeapon_eventGetReloadPlayRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSWeapon_GetReloadPlayRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSWeapon_GetReloadPlayRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSWeapon::execGetReloadPlayRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetReloadPlayRate();
	P_NATIVE_END;
}
// ********** End Class AFPSWeapon Function GetReloadPlayRate **************************************

// ********** Begin Class AFPSWeapon Function GetWeaponType ****************************************
struct Z_Construct_UFunction_AFPSWeapon_GetWeaponType_Statics
{
	struct FPSWeapon_eventGetWeaponType_Parms
	{
		EWeaponType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFPSWeapon_GetWeaponType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFPSWeapon_GetWeaponType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSWeapon_eventGetWeaponType_Parms, ReturnValue), Z_Construct_UEnum_OnlineFPS_EWeaponType, METADATA_PARAMS(0, nullptr) }; // 3700248627
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSWeapon_GetWeaponType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSWeapon_GetWeaponType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSWeapon_GetWeaponType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSWeapon_GetWeaponType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSWeapon_GetWeaponType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSWeapon, nullptr, "GetWeaponType", Z_Construct_UFunction_AFPSWeapon_GetWeaponType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSWeapon_GetWeaponType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSWeapon_GetWeaponType_Statics::FPSWeapon_eventGetWeaponType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSWeapon_GetWeaponType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSWeapon_GetWeaponType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFPSWeapon_GetWeaponType_Statics::FPSWeapon_eventGetWeaponType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSWeapon_GetWeaponType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSWeapon_GetWeaponType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSWeapon::execGetWeaponType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EWeaponType*)Z_Param__Result=P_THIS->GetWeaponType();
	P_NATIVE_END;
}
// ********** End Class AFPSWeapon Function GetWeaponType ******************************************

// ********** Begin Class AFPSWeapon Function IsAutomatic ******************************************
struct Z_Construct_UFunction_AFPSWeapon_IsAutomatic_Statics
{
	struct FPSWeapon_eventIsAutomatic_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AFPSWeapon_IsAutomatic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FPSWeapon_eventIsAutomatic_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSWeapon_IsAutomatic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPSWeapon_eventIsAutomatic_Parms), &Z_Construct_UFunction_AFPSWeapon_IsAutomatic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSWeapon_IsAutomatic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSWeapon_IsAutomatic_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSWeapon_IsAutomatic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSWeapon_IsAutomatic_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSWeapon, nullptr, "IsAutomatic", Z_Construct_UFunction_AFPSWeapon_IsAutomatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSWeapon_IsAutomatic_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSWeapon_IsAutomatic_Statics::FPSWeapon_eventIsAutomatic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSWeapon_IsAutomatic_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSWeapon_IsAutomatic_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFPSWeapon_IsAutomatic_Statics::FPSWeapon_eventIsAutomatic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSWeapon_IsAutomatic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSWeapon_IsAutomatic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSWeapon::execIsAutomatic)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAutomatic();
	P_NATIVE_END;
}
// ********** End Class AFPSWeapon Function IsAutomatic ********************************************

// ********** Begin Class AFPSWeapon Function Server_DealDamage ************************************
struct FPSWeapon_eventServer_DealDamage_Parms
{
	FHitResult _hit;
	AFPSCharacter* _character;
};
static FName NAME_AFPSWeapon_Server_DealDamage = FName(TEXT("Server_DealDamage"));
void AFPSWeapon::Server_DealDamage(FHitResult _hit, AFPSCharacter* _character)
{
	FPSWeapon_eventServer_DealDamage_Parms Parms;
	Parms._hit=_hit;
	Parms._character=_character;
	UFunction* Func = FindFunctionChecked(NAME_AFPSWeapon_Server_DealDamage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AFPSWeapon_Server_DealDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__hit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__character;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSWeapon_Server_DealDamage_Statics::NewProp__hit = { "_hit", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSWeapon_eventServer_DealDamage_Parms, _hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 267591329
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSWeapon_Server_DealDamage_Statics::NewProp__character = { "_character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSWeapon_eventServer_DealDamage_Parms, _character), Z_Construct_UClass_AFPSCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSWeapon_Server_DealDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSWeapon_Server_DealDamage_Statics::NewProp__hit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSWeapon_Server_DealDamage_Statics::NewProp__character,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSWeapon_Server_DealDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSWeapon_Server_DealDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSWeapon, nullptr, "Server_DealDamage", Z_Construct_UFunction_AFPSWeapon_Server_DealDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSWeapon_Server_DealDamage_Statics::PropPointers), sizeof(FPSWeapon_eventServer_DealDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSWeapon_Server_DealDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSWeapon_Server_DealDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FPSWeapon_eventServer_DealDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSWeapon_Server_DealDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSWeapon_Server_DealDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSWeapon::execServer_DealDamage)
{
	P_GET_STRUCT(FHitResult,Z_Param__hit);
	P_GET_OBJECT(AFPSCharacter,Z_Param__character);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_DealDamage_Implementation(Z_Param__hit,Z_Param__character);
	P_NATIVE_END;
}
// ********** End Class AFPSWeapon Function Server_DealDamage **************************************

// ********** Begin Class AFPSWeapon Function StartFiring ******************************************
struct Z_Construct_UFunction_AFPSWeapon_StartFiring_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSWeapon_StartFiring_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSWeapon, nullptr, "StartFiring", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSWeapon_StartFiring_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSWeapon_StartFiring_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFPSWeapon_StartFiring()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSWeapon_StartFiring_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSWeapon::execStartFiring)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartFiring();
	P_NATIVE_END;
}
// ********** End Class AFPSWeapon Function StartFiring ********************************************

// ********** Begin Class AFPSWeapon Function StopFiring *******************************************
struct Z_Construct_UFunction_AFPSWeapon_StopFiring_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSWeapon_StopFiring_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSWeapon, nullptr, "StopFiring", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSWeapon_StopFiring_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSWeapon_StopFiring_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFPSWeapon_StopFiring()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSWeapon_StopFiring_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSWeapon::execStopFiring)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopFiring();
	P_NATIVE_END;
}
// ********** End Class AFPSWeapon Function StopFiring *********************************************

// ********** Begin Class AFPSWeapon ***************************************************************
void AFPSWeapon::StaticRegisterNativesAFPSWeapon()
{
	UClass* Class = AFPSWeapon::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fire", &AFPSWeapon::execFire },
		{ "GetReloadPlayRate", &AFPSWeapon::execGetReloadPlayRate },
		{ "GetWeaponType", &AFPSWeapon::execGetWeaponType },
		{ "IsAutomatic", &AFPSWeapon::execIsAutomatic },
		{ "Server_DealDamage", &AFPSWeapon::execServer_DealDamage },
		{ "StartFiring", &AFPSWeapon::execStartFiring },
		{ "StopFiring", &AFPSWeapon::execStopFiring },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFPSWeapon;
UClass* AFPSWeapon::GetPrivateStaticClass()
{
	using TClass = AFPSWeapon;
	if (!Z_Registration_Info_UClass_AFPSWeapon.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FPSWeapon"),
			Z_Registration_Info_UClass_AFPSWeapon.InnerSingleton,
			StaticRegisterNativesAFPSWeapon,
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
	return Z_Registration_Info_UClass_AFPSWeapon.InnerSingleton;
}
UClass* Z_Construct_UClass_AFPSWeapon_NoRegister()
{
	return AFPSWeapon::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFPSWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FPSWeapon.h" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GunModel_MetaData[] = {
		{ "Category", "FPSWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weaponName_MetaData[] = {
		{ "Category", "FPSWeapon" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "FPSWeapon" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxAmmo_MetaData[] = {
		{ "Category", "FPSWeapon" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ammoCount_MetaData[] = {
		{ "Category", "FPSWeapon" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_damage_MetaData[] = {
		{ "Category", "FPSWeapon" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HsMultiplier_MetaData[] = {
		{ "Category", "FPSWeapon" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LegsMultiplier_MetaData[] = {
		{ "Category", "FPSWeapon" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RPM_MetaData[] = {
		{ "Category", "FPSWeapon" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAutomatic_MetaData[] = {
		{ "Category", "FPSWeapon" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ADSTime_MetaData[] = {
		{ "Category", "FPSWeapon" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ADSFovScale_MetaData[] = {
		{ "Category", "FPSWeapon" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_reloadTime_MetaData[] = {
		{ "Category", "FPSWeapon" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weaponOwner_MetaData[] = {
		{ "Category", "FPSWeapon" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFiring_MetaData[] = {
		{ "Category", "FPSWeapon" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerCamera_MetaData[] = {
		{ "Category", "FPSWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_recoilAnim_MetaData[] = {
		{ "Category", "FPSWeapon" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GunModel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_weaponName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maxAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ammoCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_damage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HsMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LegsMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RPM;
	static void NewProp_bIsAutomatic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAutomatic;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ADSTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ADSFovScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_reloadTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_weaponOwner;
	static void NewProp_bIsFiring_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFiring;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_playerCamera;
	static const UECodeGen_Private::FStructPropertyParams NewProp_recoilAnim;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSWeapon_Fire, "Fire" }, // 359106387
		{ &Z_Construct_UFunction_AFPSWeapon_GetReloadPlayRate, "GetReloadPlayRate" }, // 2326002912
		{ &Z_Construct_UFunction_AFPSWeapon_GetWeaponType, "GetWeaponType" }, // 2118898252
		{ &Z_Construct_UFunction_AFPSWeapon_IsAutomatic, "IsAutomatic" }, // 2045936501
		{ &Z_Construct_UFunction_AFPSWeapon_Server_DealDamage, "Server_DealDamage" }, // 3403743354
		{ &Z_Construct_UFunction_AFPSWeapon_StartFiring, "StartFiring" }, // 1483084652
		{ &Z_Construct_UFunction_AFPSWeapon_StopFiring, "StopFiring" }, // 3209095793
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_GunModel = { "GunModel", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSWeapon, GunModel), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GunModel_MetaData), NewProp_GunModel_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_weaponName = { "weaponName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSWeapon, weaponName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponName_MetaData), NewProp_weaponName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSWeapon, Type), Z_Construct_UEnum_OnlineFPS_EWeaponType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 3700248627
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_maxAmmo = { "maxAmmo", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSWeapon, maxAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxAmmo_MetaData), NewProp_maxAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_ammoCount = { "ammoCount", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSWeapon, ammoCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ammoCount_MetaData), NewProp_ammoCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSWeapon, damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_damage_MetaData), NewProp_damage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_HsMultiplier = { "HsMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSWeapon, HsMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HsMultiplier_MetaData), NewProp_HsMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_LegsMultiplier = { "LegsMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSWeapon, LegsMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LegsMultiplier_MetaData), NewProp_LegsMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_RPM = { "RPM", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSWeapon, RPM), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RPM_MetaData), NewProp_RPM_MetaData) };
void Z_Construct_UClass_AFPSWeapon_Statics::NewProp_bIsAutomatic_SetBit(void* Obj)
{
	((AFPSWeapon*)Obj)->bIsAutomatic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_bIsAutomatic = { "bIsAutomatic", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFPSWeapon), &Z_Construct_UClass_AFPSWeapon_Statics::NewProp_bIsAutomatic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAutomatic_MetaData), NewProp_bIsAutomatic_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_ADSTime = { "ADSTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSWeapon, ADSTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ADSTime_MetaData), NewProp_ADSTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_ADSFovScale = { "ADSFovScale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSWeapon, ADSFovScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ADSFovScale_MetaData), NewProp_ADSFovScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_reloadTime = { "reloadTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSWeapon, reloadTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_reloadTime_MetaData), NewProp_reloadTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_weaponOwner = { "weaponOwner", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSWeapon, weaponOwner), Z_Construct_UClass_AFPSCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponOwner_MetaData), NewProp_weaponOwner_MetaData) };
void Z_Construct_UClass_AFPSWeapon_Statics::NewProp_bIsFiring_SetBit(void* Obj)
{
	((AFPSWeapon*)Obj)->bIsFiring = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_bIsFiring = { "bIsFiring", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFPSWeapon), &Z_Construct_UClass_AFPSWeapon_Statics::NewProp_bIsFiring_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFiring_MetaData), NewProp_bIsFiring_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_playerCamera = { "playerCamera", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSWeapon, playerCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerCamera_MetaData), NewProp_playerCamera_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_recoilAnim = { "recoilAnim", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSWeapon, recoilAnim), Z_Construct_UScriptStruct_FRecoilAnimValues, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_recoilAnim_MetaData), NewProp_recoilAnim_MetaData) }; // 2669564610
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_GunModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_weaponName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_maxAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_ammoCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_HsMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_LegsMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_RPM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_bIsAutomatic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_ADSTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_ADSFovScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_reloadTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_weaponOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_bIsFiring,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_playerCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_recoilAnim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFPSWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSWeapon_Statics::ClassParams = {
	&AFPSWeapon::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFPSWeapon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPSWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPSWeapon()
{
	if (!Z_Registration_Info_UClass_AFPSWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPSWeapon.OuterSingleton, Z_Construct_UClass_AFPSWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPSWeapon.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSWeapon);
AFPSWeapon::~AFPSWeapon() {}
// ********** End Class AFPSWeapon *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSWeapon_h__Script_OnlineFPS_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWeaponType_StaticEnum, TEXT("EWeaponType"), &Z_Registration_Info_UEnum_EWeaponType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3700248627U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRecoilAnimValues::StaticStruct, Z_Construct_UScriptStruct_FRecoilAnimValues_Statics::NewStructOps, TEXT("RecoilAnimValues"), &Z_Registration_Info_UScriptStruct_FRecoilAnimValues, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRecoilAnimValues), 2669564610U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPSWeapon, AFPSWeapon::StaticClass, TEXT("AFPSWeapon"), &Z_Registration_Info_UClass_AFPSWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSWeapon), 1329531568U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSWeapon_h__Script_OnlineFPS_451348605(TEXT("/Script/OnlineFPS"),
	Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSWeapon_h__Script_OnlineFPS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSWeapon_h__Script_OnlineFPS_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSWeapon_h__Script_OnlineFPS_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSWeapon_h__Script_OnlineFPS_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSWeapon_h__Script_OnlineFPS_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSWeapon_h__Script_OnlineFPS_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
