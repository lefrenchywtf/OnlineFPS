// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGameModeBase.h"
#include "FPSStructs.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFPSGameModeBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
ONLINEFPS_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();
ONLINEFPS_API UClass* Z_Construct_UClass_AFPSGameModeBase();
ONLINEFPS_API UClass* Z_Construct_UClass_AFPSGameModeBase_NoRegister();
ONLINEFPS_API UClass* Z_Construct_UClass_AFPSPlayerController_NoRegister();
ONLINEFPS_API UScriptStruct* Z_Construct_UScriptStruct_FTeamBasedInfos();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnlineFPS();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFPSGameModeBase Function AddPlayer **************************************
struct Z_Construct_UFunction_AFPSGameModeBase_AddPlayer_Statics
{
	struct FPSGameModeBase_eventAddPlayer_Parms
	{
		AFPSPlayerController* _controller;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__controller;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSGameModeBase_AddPlayer_Statics::NewProp__controller = { "_controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSGameModeBase_eventAddPlayer_Parms, _controller), Z_Construct_UClass_AFPSPlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSGameModeBase_AddPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameModeBase_AddPlayer_Statics::NewProp__controller,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameModeBase_AddPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameModeBase_AddPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSGameModeBase, nullptr, "AddPlayer", Z_Construct_UFunction_AFPSGameModeBase_AddPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameModeBase_AddPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSGameModeBase_AddPlayer_Statics::FPSGameModeBase_eventAddPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameModeBase_AddPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSGameModeBase_AddPlayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFPSGameModeBase_AddPlayer_Statics::FPSGameModeBase_eventAddPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSGameModeBase_AddPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSGameModeBase_AddPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSGameModeBase::execAddPlayer)
{
	P_GET_OBJECT(AFPSPlayerController,Z_Param__controller);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPlayer(Z_Param__controller);
	P_NATIVE_END;
}
// ********** End Class AFPSGameModeBase Function AddPlayer ****************************************

// ********** Begin Class AFPSGameModeBase Function RemovePlayer ***********************************
struct Z_Construct_UFunction_AFPSGameModeBase_RemovePlayer_Statics
{
	struct FPSGameModeBase_eventRemovePlayer_Parms
	{
		AFPSPlayerController* _controller;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__controller;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSGameModeBase_RemovePlayer_Statics::NewProp__controller = { "_controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSGameModeBase_eventRemovePlayer_Parms, _controller), Z_Construct_UClass_AFPSPlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSGameModeBase_RemovePlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameModeBase_RemovePlayer_Statics::NewProp__controller,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameModeBase_RemovePlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameModeBase_RemovePlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSGameModeBase, nullptr, "RemovePlayer", Z_Construct_UFunction_AFPSGameModeBase_RemovePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameModeBase_RemovePlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSGameModeBase_RemovePlayer_Statics::FPSGameModeBase_eventRemovePlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameModeBase_RemovePlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSGameModeBase_RemovePlayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFPSGameModeBase_RemovePlayer_Statics::FPSGameModeBase_eventRemovePlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSGameModeBase_RemovePlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSGameModeBase_RemovePlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSGameModeBase::execRemovePlayer)
{
	P_GET_OBJECT(AFPSPlayerController,Z_Param__controller);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemovePlayer(Z_Param__controller);
	P_NATIVE_END;
}
// ********** End Class AFPSGameModeBase Function RemovePlayer *************************************

// ********** Begin Class AFPSGameModeBase Function SelectTeam *************************************
struct Z_Construct_UFunction_AFPSGameModeBase_SelectTeam_Statics
{
	struct FPSGameModeBase_eventSelectTeam_Parms
	{
		AFPSPlayerController* _controller;
		int32 _teamId;
		TArray<TSubclassOf<AFPSCharacter>> _charas;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__controller;
	static const UECodeGen_Private::FIntPropertyParams NewProp__teamId;
	static const UECodeGen_Private::FClassPropertyParams NewProp__charas_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__charas;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSGameModeBase_SelectTeam_Statics::NewProp__controller = { "_controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSGameModeBase_eventSelectTeam_Parms, _controller), Z_Construct_UClass_AFPSPlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSGameModeBase_SelectTeam_Statics::NewProp__teamId = { "_teamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSGameModeBase_eventSelectTeam_Parms, _teamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFPSGameModeBase_SelectTeam_Statics::NewProp__charas_Inner = { "_charas", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AFPSCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFPSGameModeBase_SelectTeam_Statics::NewProp__charas = { "_charas", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSGameModeBase_eventSelectTeam_Parms, _charas), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSGameModeBase_SelectTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameModeBase_SelectTeam_Statics::NewProp__controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameModeBase_SelectTeam_Statics::NewProp__teamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameModeBase_SelectTeam_Statics::NewProp__charas_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameModeBase_SelectTeam_Statics::NewProp__charas,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameModeBase_SelectTeam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameModeBase_SelectTeam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSGameModeBase, nullptr, "SelectTeam", Z_Construct_UFunction_AFPSGameModeBase_SelectTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameModeBase_SelectTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSGameModeBase_SelectTeam_Statics::FPSGameModeBase_eventSelectTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameModeBase_SelectTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSGameModeBase_SelectTeam_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFPSGameModeBase_SelectTeam_Statics::FPSGameModeBase_eventSelectTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSGameModeBase_SelectTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSGameModeBase_SelectTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSGameModeBase::execSelectTeam)
{
	P_GET_OBJECT(AFPSPlayerController,Z_Param__controller);
	P_GET_PROPERTY(FIntProperty,Z_Param__teamId);
	P_GET_TARRAY(TSubclassOf<AFPSCharacter>,Z_Param__charas);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectTeam(Z_Param__controller,Z_Param__teamId,Z_Param__charas);
	P_NATIVE_END;
}
// ********** End Class AFPSGameModeBase Function SelectTeam ***************************************

// ********** Begin Class AFPSGameModeBase Function SpawnChara *************************************
struct FPSGameModeBase_eventSpawnChara_Parms
{
	AFPSPlayerController* _controller;
	TSubclassOf<AFPSCharacter> _chara;
};
static FName NAME_AFPSGameModeBase_SpawnChara = FName(TEXT("SpawnChara"));
void AFPSGameModeBase::SpawnChara(AFPSPlayerController* _controller, TSubclassOf<AFPSCharacter> _chara)
{
	FPSGameModeBase_eventSpawnChara_Parms Parms;
	Parms._controller=_controller;
	Parms._chara=_chara;
	UFunction* Func = FindFunctionChecked(NAME_AFPSGameModeBase_SpawnChara);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AFPSGameModeBase_SpawnChara_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__controller;
	static const UECodeGen_Private::FClassPropertyParams NewProp__chara;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSGameModeBase_SpawnChara_Statics::NewProp__controller = { "_controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSGameModeBase_eventSpawnChara_Parms, _controller), Z_Construct_UClass_AFPSPlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFPSGameModeBase_SpawnChara_Statics::NewProp__chara = { "_chara", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSGameModeBase_eventSpawnChara_Parms, _chara), Z_Construct_UClass_UClass, Z_Construct_UClass_AFPSCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSGameModeBase_SpawnChara_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameModeBase_SpawnChara_Statics::NewProp__controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameModeBase_SpawnChara_Statics::NewProp__chara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameModeBase_SpawnChara_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameModeBase_SpawnChara_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSGameModeBase, nullptr, "SpawnChara", Z_Construct_UFunction_AFPSGameModeBase_SpawnChara_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameModeBase_SpawnChara_Statics::PropPointers), sizeof(FPSGameModeBase_eventSpawnChara_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameModeBase_SpawnChara_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSGameModeBase_SpawnChara_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FPSGameModeBase_eventSpawnChara_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSGameModeBase_SpawnChara()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSGameModeBase_SpawnChara_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AFPSGameModeBase Function SpawnChara ***************************************

// ********** Begin Class AFPSGameModeBase *********************************************************
void AFPSGameModeBase::StaticRegisterNativesAFPSGameModeBase()
{
	UClass* Class = AFPSGameModeBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddPlayer", &AFPSGameModeBase::execAddPlayer },
		{ "RemovePlayer", &AFPSGameModeBase::execRemovePlayer },
		{ "SelectTeam", &AFPSGameModeBase::execSelectTeam },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFPSGameModeBase;
UClass* AFPSGameModeBase::GetPrivateStaticClass()
{
	using TClass = AFPSGameModeBase;
	if (!Z_Registration_Info_UClass_AFPSGameModeBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FPSGameModeBase"),
			Z_Registration_Info_UClass_AFPSGameModeBase.InnerSingleton,
			StaticRegisterNativesAFPSGameModeBase,
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
	return Z_Registration_Info_UClass_AFPSGameModeBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AFPSGameModeBase_NoRegister()
{
	return AFPSGameModeBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFPSGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FPSGameModeBase.h" },
		{ "ModuleRelativePath", "Public/FPSGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTeamBasedMode_MetaData[] = {
		{ "Category", "FPSGameModeBase" },
		{ "ModuleRelativePath", "Public/FPSGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_teamModeInfo_MetaData[] = {
		{ "Category", "FPSGameModeBase" },
		{ "ModuleRelativePath", "Public/FPSGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_gameModeWidget_MetaData[] = {
		{ "Category", "FPSGameModeBase" },
		{ "ModuleRelativePath", "Public/FPSGameModeBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bTeamBasedMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeamBasedMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_teamModeInfo;
	static const UECodeGen_Private::FClassPropertyParams NewProp_gameModeWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSGameModeBase_AddPlayer, "AddPlayer" }, // 4141198723
		{ &Z_Construct_UFunction_AFPSGameModeBase_RemovePlayer, "RemovePlayer" }, // 3148630357
		{ &Z_Construct_UFunction_AFPSGameModeBase_SelectTeam, "SelectTeam" }, // 3553505195
		{ &Z_Construct_UFunction_AFPSGameModeBase_SpawnChara, "SpawnChara" }, // 2788896610
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AFPSGameModeBase_Statics::NewProp_bTeamBasedMode_SetBit(void* Obj)
{
	((AFPSGameModeBase*)Obj)->bTeamBasedMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSGameModeBase_Statics::NewProp_bTeamBasedMode = { "bTeamBasedMode", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFPSGameModeBase), &Z_Construct_UClass_AFPSGameModeBase_Statics::NewProp_bTeamBasedMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTeamBasedMode_MetaData), NewProp_bTeamBasedMode_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSGameModeBase_Statics::NewProp_teamModeInfo = { "teamModeInfo", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSGameModeBase, teamModeInfo), Z_Construct_UScriptStruct_FTeamBasedInfos, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_teamModeInfo_MetaData), NewProp_teamModeInfo_MetaData) }; // 1820631868
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFPSGameModeBase_Statics::NewProp_gameModeWidget = { "gameModeWidget", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSGameModeBase, gameModeWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_gameModeWidget_MetaData), NewProp_gameModeWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSGameModeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameModeBase_Statics::NewProp_bTeamBasedMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameModeBase_Statics::NewProp_teamModeInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameModeBase_Statics::NewProp_gameModeWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameModeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFPSGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSGameModeBase_Statics::ClassParams = {
	&AFPSGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFPSGameModeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameModeBase_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPSGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPSGameModeBase()
{
	if (!Z_Registration_Info_UClass_AFPSGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPSGameModeBase.OuterSingleton, Z_Construct_UClass_AFPSGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPSGameModeBase.OuterSingleton;
}
AFPSGameModeBase::AFPSGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSGameModeBase);
AFPSGameModeBase::~AFPSGameModeBase() {}
// ********** End Class AFPSGameModeBase ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameModeBase_h__Script_OnlineFPS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPSGameModeBase, AFPSGameModeBase::StaticClass, TEXT("AFPSGameModeBase"), &Z_Registration_Info_UClass_AFPSGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSGameModeBase), 1757094519U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameModeBase_h__Script_OnlineFPS_1997662717(TEXT("/Script/OnlineFPS"),
	Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameModeBase_h__Script_OnlineFPS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameModeBase_h__Script_OnlineFPS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
