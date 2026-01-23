// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSStructs.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFPSStructs() {}

// ********** Begin Cross Module References ********************************************************
ONLINEFPS_API UEnum* Z_Construct_UEnum_OnlineFPS_EObjectiveType();
ONLINEFPS_API UScriptStruct* Z_Construct_UScriptStruct_FTeamBasedInfos();
UPackage* Z_Construct_UPackage__Script_OnlineFPS();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EObjectiveType ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EObjectiveType;
static UEnum* EObjectiveType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EObjectiveType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EObjectiveType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineFPS_EObjectiveType, (UObject*)Z_Construct_UPackage__Script_OnlineFPS(), TEXT("EObjectiveType"));
	}
	return Z_Registration_Info_UEnum_EObjectiveType.OuterSingleton;
}
template<> ONLINEFPS_API UEnum* StaticEnum<EObjectiveType>()
{
	return EObjectiveType_StaticEnum();
}
struct Z_Construct_UEnum_OnlineFPS_EObjectiveType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "KILLS.Comment", "/**\n * \n */" },
		{ "KILLS.Name", "EObjectiveType::KILLS" },
		{ "ModuleRelativePath", "Public/FPSStructs.h" },
		{ "ZONES.Comment", "/**\n * \n */" },
		{ "ZONES.Name", "EObjectiveType::ZONES" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EObjectiveType::KILLS", (int64)EObjectiveType::KILLS },
		{ "EObjectiveType::ZONES", (int64)EObjectiveType::ZONES },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineFPS_EObjectiveType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OnlineFPS,
	nullptr,
	"EObjectiveType",
	"EObjectiveType",
	Z_Construct_UEnum_OnlineFPS_EObjectiveType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineFPS_EObjectiveType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineFPS_EObjectiveType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OnlineFPS_EObjectiveType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OnlineFPS_EObjectiveType()
{
	if (!Z_Registration_Info_UEnum_EObjectiveType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EObjectiveType.InnerSingleton, Z_Construct_UEnum_OnlineFPS_EObjectiveType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EObjectiveType.InnerSingleton;
}
// ********** End Enum EObjectiveType **************************************************************

// ********** Begin ScriptStruct FTeamBasedInfos ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTeamBasedInfos;
class UScriptStruct* FTeamBasedInfos::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTeamBasedInfos.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTeamBasedInfos.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTeamBasedInfos, (UObject*)Z_Construct_UPackage__Script_OnlineFPS(), TEXT("TeamBasedInfos"));
	}
	return Z_Registration_Info_UScriptStruct_FTeamBasedInfos.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTeamBasedInfos_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FPSStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_numberOfTeams_MetaData[] = {
		{ "Category", "TeamBasedInfos" },
		{ "ModuleRelativePath", "Public/FPSStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_objectiveToReach_MetaData[] = {
		{ "Category", "TeamBasedInfos" },
		{ "ModuleRelativePath", "Public/FPSStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentObjectives_MetaData[] = {
		{ "Category", "TeamBasedInfos" },
		{ "ModuleRelativePath", "Public/FPSStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_objectiveType_MetaData[] = {
		{ "Category", "TeamBasedInfos" },
		{ "ModuleRelativePath", "Public/FPSStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_numberOfTeams;
	static const UECodeGen_Private::FIntPropertyParams NewProp_objectiveToReach;
	static const UECodeGen_Private::FIntPropertyParams NewProp_currentObjectives_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_currentObjectives;
	static const UECodeGen_Private::FBytePropertyParams NewProp_objectiveType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_objectiveType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTeamBasedInfos>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTeamBasedInfos_Statics::NewProp_numberOfTeams = { "numberOfTeams", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTeamBasedInfos, numberOfTeams), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_numberOfTeams_MetaData), NewProp_numberOfTeams_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTeamBasedInfos_Statics::NewProp_objectiveToReach = { "objectiveToReach", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTeamBasedInfos, objectiveToReach), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_objectiveToReach_MetaData), NewProp_objectiveToReach_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTeamBasedInfos_Statics::NewProp_currentObjectives_Inner = { "currentObjectives", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTeamBasedInfos_Statics::NewProp_currentObjectives = { "currentObjectives", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTeamBasedInfos, currentObjectives), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentObjectives_MetaData), NewProp_currentObjectives_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTeamBasedInfos_Statics::NewProp_objectiveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTeamBasedInfos_Statics::NewProp_objectiveType = { "objectiveType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTeamBasedInfos, objectiveType), Z_Construct_UEnum_OnlineFPS_EObjectiveType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_objectiveType_MetaData), NewProp_objectiveType_MetaData) }; // 2863190875
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTeamBasedInfos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamBasedInfos_Statics::NewProp_numberOfTeams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamBasedInfos_Statics::NewProp_objectiveToReach,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamBasedInfos_Statics::NewProp_currentObjectives_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamBasedInfos_Statics::NewProp_currentObjectives,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamBasedInfos_Statics::NewProp_objectiveType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamBasedInfos_Statics::NewProp_objectiveType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamBasedInfos_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTeamBasedInfos_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineFPS,
	nullptr,
	&NewStructOps,
	"TeamBasedInfos",
	Z_Construct_UScriptStruct_FTeamBasedInfos_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamBasedInfos_Statics::PropPointers),
	sizeof(FTeamBasedInfos),
	alignof(FTeamBasedInfos),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamBasedInfos_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTeamBasedInfos_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTeamBasedInfos()
{
	if (!Z_Registration_Info_UScriptStruct_FTeamBasedInfos.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTeamBasedInfos.InnerSingleton, Z_Construct_UScriptStruct_FTeamBasedInfos_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTeamBasedInfos.InnerSingleton;
}
// ********** End ScriptStruct FTeamBasedInfos *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSStructs_h__Script_OnlineFPS_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EObjectiveType_StaticEnum, TEXT("EObjectiveType"), &Z_Registration_Info_UEnum_EObjectiveType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2863190875U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTeamBasedInfos::StaticStruct, Z_Construct_UScriptStruct_FTeamBasedInfos_Statics::NewStructOps, TEXT("TeamBasedInfos"), &Z_Registration_Info_UScriptStruct_FTeamBasedInfos, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTeamBasedInfos), 1820631868U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSStructs_h__Script_OnlineFPS_3719603704(TEXT("/Script/OnlineFPS"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSStructs_h__Script_OnlineFPS_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSStructs_h__Script_OnlineFPS_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSStructs_h__Script_OnlineFPS_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSStructs_h__Script_OnlineFPS_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
