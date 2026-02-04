// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFPSPlayerController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ONLINEFPS_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();
ONLINEFPS_API UClass* Z_Construct_UClass_AFPSPlayerController();
ONLINEFPS_API UClass* Z_Construct_UClass_AFPSPlayerController_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnlineFPS();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFPSPlayerController Function AddKillToFeed ******************************
struct FPSPlayerController_eventAddKillToFeed_Parms
{
	AFPSCharacter* _killer;
	AFPSCharacter* _victim;
	FString _gunName;
};
static FName NAME_AFPSPlayerController_AddKillToFeed = FName(TEXT("AddKillToFeed"));
void AFPSPlayerController::AddKillToFeed(AFPSCharacter* _killer, AFPSCharacter* _victim, const FString& _gunName)
{
	FPSPlayerController_eventAddKillToFeed_Parms Parms;
	Parms._killer=_killer;
	Parms._victim=_victim;
	Parms._gunName=_gunName;
	UFunction* Func = FindFunctionChecked(NAME_AFPSPlayerController_AddKillToFeed);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AFPSPlayerController_AddKillToFeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__gunName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__killer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__victim;
	static const UECodeGen_Private::FStrPropertyParams NewProp__gunName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSPlayerController_AddKillToFeed_Statics::NewProp__killer = { "_killer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSPlayerController_eventAddKillToFeed_Parms, _killer), Z_Construct_UClass_AFPSCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSPlayerController_AddKillToFeed_Statics::NewProp__victim = { "_victim", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSPlayerController_eventAddKillToFeed_Parms, _victim), Z_Construct_UClass_AFPSCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFPSPlayerController_AddKillToFeed_Statics::NewProp__gunName = { "_gunName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSPlayerController_eventAddKillToFeed_Parms, _gunName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__gunName_MetaData), NewProp__gunName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerController_AddKillToFeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerController_AddKillToFeed_Statics::NewProp__killer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerController_AddKillToFeed_Statics::NewProp__victim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerController_AddKillToFeed_Statics::NewProp__gunName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_AddKillToFeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerController_AddKillToFeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSPlayerController, nullptr, "AddKillToFeed", Z_Construct_UFunction_AFPSPlayerController_AddKillToFeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_AddKillToFeed_Statics::PropPointers), sizeof(FPSPlayerController_eventAddKillToFeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_AddKillToFeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSPlayerController_AddKillToFeed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FPSPlayerController_eventAddKillToFeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSPlayerController_AddKillToFeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSPlayerController_AddKillToFeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AFPSPlayerController Function AddKillToFeed ********************************

// ********** Begin Class AFPSPlayerController Function Client_AddKillToFeed ***********************
struct FPSPlayerController_eventClient_AddKillToFeed_Parms
{
	AFPSCharacter* _killer;
	AFPSCharacter* _victim;
	FString _gunName;
};
static FName NAME_AFPSPlayerController_Client_AddKillToFeed = FName(TEXT("Client_AddKillToFeed"));
void AFPSPlayerController::Client_AddKillToFeed(AFPSCharacter* _killer, AFPSCharacter* _victim, const FString& _gunName)
{
	FPSPlayerController_eventClient_AddKillToFeed_Parms Parms;
	Parms._killer=_killer;
	Parms._victim=_victim;
	Parms._gunName=_gunName;
	UFunction* Func = FindFunctionChecked(NAME_AFPSPlayerController_Client_AddKillToFeed);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AFPSPlayerController_Client_AddKillToFeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__gunName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__killer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__victim;
	static const UECodeGen_Private::FStrPropertyParams NewProp__gunName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSPlayerController_Client_AddKillToFeed_Statics::NewProp__killer = { "_killer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSPlayerController_eventClient_AddKillToFeed_Parms, _killer), Z_Construct_UClass_AFPSCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSPlayerController_Client_AddKillToFeed_Statics::NewProp__victim = { "_victim", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSPlayerController_eventClient_AddKillToFeed_Parms, _victim), Z_Construct_UClass_AFPSCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFPSPlayerController_Client_AddKillToFeed_Statics::NewProp__gunName = { "_gunName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSPlayerController_eventClient_AddKillToFeed_Parms, _gunName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__gunName_MetaData), NewProp__gunName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerController_Client_AddKillToFeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerController_Client_AddKillToFeed_Statics::NewProp__killer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerController_Client_AddKillToFeed_Statics::NewProp__victim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerController_Client_AddKillToFeed_Statics::NewProp__gunName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_Client_AddKillToFeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerController_Client_AddKillToFeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSPlayerController, nullptr, "Client_AddKillToFeed", Z_Construct_UFunction_AFPSPlayerController_Client_AddKillToFeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_Client_AddKillToFeed_Statics::PropPointers), sizeof(FPSPlayerController_eventClient_AddKillToFeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_Client_AddKillToFeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSPlayerController_Client_AddKillToFeed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FPSPlayerController_eventClient_AddKillToFeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSPlayerController_Client_AddKillToFeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSPlayerController_Client_AddKillToFeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSPlayerController::execClient_AddKillToFeed)
{
	P_GET_OBJECT(AFPSCharacter,Z_Param__killer);
	P_GET_OBJECT(AFPSCharacter,Z_Param__victim);
	P_GET_PROPERTY(FStrProperty,Z_Param__gunName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_AddKillToFeed_Implementation(Z_Param__killer,Z_Param__victim,Z_Param__gunName);
	P_NATIVE_END;
}
// ********** End Class AFPSPlayerController Function Client_AddKillToFeed *************************

// ********** Begin Class AFPSPlayerController Function Client_CreateGamemodeWidget ****************
struct FPSPlayerController_eventClient_CreateGamemodeWidget_Parms
{
	TSubclassOf<UUserWidget> _widget;
};
static FName NAME_AFPSPlayerController_Client_CreateGamemodeWidget = FName(TEXT("Client_CreateGamemodeWidget"));
void AFPSPlayerController::Client_CreateGamemodeWidget(TSubclassOf<UUserWidget> _widget)
{
	FPSPlayerController_eventClient_CreateGamemodeWidget_Parms Parms;
	Parms._widget=_widget;
	UFunction* Func = FindFunctionChecked(NAME_AFPSPlayerController_Client_CreateGamemodeWidget);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AFPSPlayerController_Client_CreateGamemodeWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp__widget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFPSPlayerController_Client_CreateGamemodeWidget_Statics::NewProp__widget = { "_widget", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSPlayerController_eventClient_CreateGamemodeWidget_Parms, _widget), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerController_Client_CreateGamemodeWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerController_Client_CreateGamemodeWidget_Statics::NewProp__widget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_Client_CreateGamemodeWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerController_Client_CreateGamemodeWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSPlayerController, nullptr, "Client_CreateGamemodeWidget", Z_Construct_UFunction_AFPSPlayerController_Client_CreateGamemodeWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_Client_CreateGamemodeWidget_Statics::PropPointers), sizeof(FPSPlayerController_eventClient_CreateGamemodeWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_Client_CreateGamemodeWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSPlayerController_Client_CreateGamemodeWidget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FPSPlayerController_eventClient_CreateGamemodeWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSPlayerController_Client_CreateGamemodeWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSPlayerController_Client_CreateGamemodeWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSPlayerController::execClient_CreateGamemodeWidget)
{
	P_GET_OBJECT(UClass,Z_Param__widget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_CreateGamemodeWidget_Implementation(Z_Param__widget);
	P_NATIVE_END;
}
// ********** End Class AFPSPlayerController Function Client_CreateGamemodeWidget ******************

// ********** Begin Class AFPSPlayerController Function Client_NeedSpawnWeapons ********************
static FName NAME_AFPSPlayerController_Client_NeedSpawnWeapons = FName(TEXT("Client_NeedSpawnWeapons"));
void AFPSPlayerController::Client_NeedSpawnWeapons()
{
	UFunction* Func = FindFunctionChecked(NAME_AFPSPlayerController_Client_NeedSpawnWeapons);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AFPSPlayerController_Client_NeedSpawnWeapons_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerController_Client_NeedSpawnWeapons_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSPlayerController, nullptr, "Client_NeedSpawnWeapons", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_Client_NeedSpawnWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSPlayerController_Client_NeedSpawnWeapons_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFPSPlayerController_Client_NeedSpawnWeapons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSPlayerController_Client_NeedSpawnWeapons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSPlayerController::execClient_NeedSpawnWeapons)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_NeedSpawnWeapons_Implementation();
	P_NATIVE_END;
}
// ********** End Class AFPSPlayerController Function Client_NeedSpawnWeapons **********************

// ********** Begin Class AFPSPlayerController Function Client_UpdateGamemodeHud *******************
static FName NAME_AFPSPlayerController_Client_UpdateGamemodeHud = FName(TEXT("Client_UpdateGamemodeHud"));
void AFPSPlayerController::Client_UpdateGamemodeHud()
{
	UFunction* Func = FindFunctionChecked(NAME_AFPSPlayerController_Client_UpdateGamemodeHud);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AFPSPlayerController_Client_UpdateGamemodeHud_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerController_Client_UpdateGamemodeHud_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSPlayerController, nullptr, "Client_UpdateGamemodeHud", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_Client_UpdateGamemodeHud_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSPlayerController_Client_UpdateGamemodeHud_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFPSPlayerController_Client_UpdateGamemodeHud()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSPlayerController_Client_UpdateGamemodeHud_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSPlayerController::execClient_UpdateGamemodeHud)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_UpdateGamemodeHud_Implementation();
	P_NATIVE_END;
}
// ********** End Class AFPSPlayerController Function Client_UpdateGamemodeHud *********************

// ********** Begin Class AFPSPlayerController Function CreateGamemodeWidget ***********************
struct FPSPlayerController_eventCreateGamemodeWidget_Parms
{
	TSubclassOf<UUserWidget> _widget;
};
static FName NAME_AFPSPlayerController_CreateGamemodeWidget = FName(TEXT("CreateGamemodeWidget"));
void AFPSPlayerController::CreateGamemodeWidget(TSubclassOf<UUserWidget> _widget)
{
	FPSPlayerController_eventCreateGamemodeWidget_Parms Parms;
	Parms._widget=_widget;
	UFunction* Func = FindFunctionChecked(NAME_AFPSPlayerController_CreateGamemodeWidget);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AFPSPlayerController_CreateGamemodeWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp__widget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFPSPlayerController_CreateGamemodeWidget_Statics::NewProp__widget = { "_widget", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSPlayerController_eventCreateGamemodeWidget_Parms, _widget), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerController_CreateGamemodeWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerController_CreateGamemodeWidget_Statics::NewProp__widget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_CreateGamemodeWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerController_CreateGamemodeWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSPlayerController, nullptr, "CreateGamemodeWidget", Z_Construct_UFunction_AFPSPlayerController_CreateGamemodeWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_CreateGamemodeWidget_Statics::PropPointers), sizeof(FPSPlayerController_eventCreateGamemodeWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_CreateGamemodeWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSPlayerController_CreateGamemodeWidget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FPSPlayerController_eventCreateGamemodeWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSPlayerController_CreateGamemodeWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSPlayerController_CreateGamemodeWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AFPSPlayerController Function CreateGamemodeWidget *************************

// ********** Begin Class AFPSPlayerController Function HidePreGameCounter *************************
static FName NAME_AFPSPlayerController_HidePreGameCounter = FName(TEXT("HidePreGameCounter"));
void AFPSPlayerController::HidePreGameCounter()
{
	UFunction* Func = FindFunctionChecked(NAME_AFPSPlayerController_HidePreGameCounter);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AFPSPlayerController_HidePreGameCounter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerController_HidePreGameCounter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSPlayerController, nullptr, "HidePreGameCounter", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_HidePreGameCounter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSPlayerController_HidePreGameCounter_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFPSPlayerController_HidePreGameCounter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSPlayerController_HidePreGameCounter_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AFPSPlayerController Function HidePreGameCounter ***************************

// ********** Begin Class AFPSPlayerController Function SetChara ***********************************
struct Z_Construct_UFunction_AFPSPlayerController_SetChara_Statics
{
	struct FPSPlayerController_eventSetChara_Parms
	{
		AFPSCharacter* _chara;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__chara;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSPlayerController_SetChara_Statics::NewProp__chara = { "_chara", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSPlayerController_eventSetChara_Parms, _chara), Z_Construct_UClass_AFPSCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerController_SetChara_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerController_SetChara_Statics::NewProp__chara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_SetChara_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerController_SetChara_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSPlayerController, nullptr, "SetChara", Z_Construct_UFunction_AFPSPlayerController_SetChara_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_SetChara_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSPlayerController_SetChara_Statics::FPSPlayerController_eventSetChara_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_SetChara_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSPlayerController_SetChara_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFPSPlayerController_SetChara_Statics::FPSPlayerController_eventSetChara_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSPlayerController_SetChara()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSPlayerController_SetChara_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSPlayerController::execSetChara)
{
	P_GET_OBJECT(AFPSCharacter,Z_Param__chara);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetChara(Z_Param__chara);
	P_NATIVE_END;
}
// ********** End Class AFPSPlayerController Function SetChara *************************************

// ********** Begin Class AFPSPlayerController Function ShowMouseCursor ****************************
struct FPSPlayerController_eventShowMouseCursor_Parms
{
	bool _bShow;
};
static FName NAME_AFPSPlayerController_ShowMouseCursor = FName(TEXT("ShowMouseCursor"));
void AFPSPlayerController::ShowMouseCursor(bool _bShow)
{
	FPSPlayerController_eventShowMouseCursor_Parms Parms;
	Parms._bShow=_bShow ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AFPSPlayerController_ShowMouseCursor);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AFPSPlayerController_ShowMouseCursor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp__bShow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__bShow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AFPSPlayerController_ShowMouseCursor_Statics::NewProp__bShow_SetBit(void* Obj)
{
	((FPSPlayerController_eventShowMouseCursor_Parms*)Obj)->_bShow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSPlayerController_ShowMouseCursor_Statics::NewProp__bShow = { "_bShow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPSPlayerController_eventShowMouseCursor_Parms), &Z_Construct_UFunction_AFPSPlayerController_ShowMouseCursor_Statics::NewProp__bShow_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerController_ShowMouseCursor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerController_ShowMouseCursor_Statics::NewProp__bShow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_ShowMouseCursor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerController_ShowMouseCursor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSPlayerController, nullptr, "ShowMouseCursor", Z_Construct_UFunction_AFPSPlayerController_ShowMouseCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_ShowMouseCursor_Statics::PropPointers), sizeof(FPSPlayerController_eventShowMouseCursor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_ShowMouseCursor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSPlayerController_ShowMouseCursor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FPSPlayerController_eventShowMouseCursor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSPlayerController_ShowMouseCursor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSPlayerController_ShowMouseCursor_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AFPSPlayerController Function ShowMouseCursor ******************************

// ********** Begin Class AFPSPlayerController Function ShowPlayerHUD ******************************
struct FPSPlayerController_eventShowPlayerHUD_Parms
{
	bool _bShow;
};
static FName NAME_AFPSPlayerController_ShowPlayerHUD = FName(TEXT("ShowPlayerHUD"));
void AFPSPlayerController::ShowPlayerHUD(bool _bShow)
{
	FPSPlayerController_eventShowPlayerHUD_Parms Parms;
	Parms._bShow=_bShow ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AFPSPlayerController_ShowPlayerHUD);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AFPSPlayerController_ShowPlayerHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp__bShow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__bShow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AFPSPlayerController_ShowPlayerHUD_Statics::NewProp__bShow_SetBit(void* Obj)
{
	((FPSPlayerController_eventShowPlayerHUD_Parms*)Obj)->_bShow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSPlayerController_ShowPlayerHUD_Statics::NewProp__bShow = { "_bShow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPSPlayerController_eventShowPlayerHUD_Parms), &Z_Construct_UFunction_AFPSPlayerController_ShowPlayerHUD_Statics::NewProp__bShow_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerController_ShowPlayerHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerController_ShowPlayerHUD_Statics::NewProp__bShow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_ShowPlayerHUD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerController_ShowPlayerHUD_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSPlayerController, nullptr, "ShowPlayerHUD", Z_Construct_UFunction_AFPSPlayerController_ShowPlayerHUD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_ShowPlayerHUD_Statics::PropPointers), sizeof(FPSPlayerController_eventShowPlayerHUD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_ShowPlayerHUD_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSPlayerController_ShowPlayerHUD_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FPSPlayerController_eventShowPlayerHUD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSPlayerController_ShowPlayerHUD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSPlayerController_ShowPlayerHUD_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AFPSPlayerController Function ShowPlayerHUD ********************************

// ********** Begin Class AFPSPlayerController Function UpdateGamemodeHud **************************
static FName NAME_AFPSPlayerController_UpdateGamemodeHud = FName(TEXT("UpdateGamemodeHud"));
void AFPSPlayerController::UpdateGamemodeHud()
{
	UFunction* Func = FindFunctionChecked(NAME_AFPSPlayerController_UpdateGamemodeHud);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AFPSPlayerController_UpdateGamemodeHud_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerController_UpdateGamemodeHud_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSPlayerController, nullptr, "UpdateGamemodeHud", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_UpdateGamemodeHud_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSPlayerController_UpdateGamemodeHud_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFPSPlayerController_UpdateGamemodeHud()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSPlayerController_UpdateGamemodeHud_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AFPSPlayerController Function UpdateGamemodeHud ****************************

// ********** Begin Class AFPSPlayerController *****************************************************
void AFPSPlayerController::StaticRegisterNativesAFPSPlayerController()
{
	UClass* Class = AFPSPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Client_AddKillToFeed", &AFPSPlayerController::execClient_AddKillToFeed },
		{ "Client_CreateGamemodeWidget", &AFPSPlayerController::execClient_CreateGamemodeWidget },
		{ "Client_NeedSpawnWeapons", &AFPSPlayerController::execClient_NeedSpawnWeapons },
		{ "Client_UpdateGamemodeHud", &AFPSPlayerController::execClient_UpdateGamemodeHud },
		{ "SetChara", &AFPSPlayerController::execSetChara },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFPSPlayerController;
UClass* AFPSPlayerController::GetPrivateStaticClass()
{
	using TClass = AFPSPlayerController;
	if (!Z_Registration_Info_UClass_AFPSPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FPSPlayerController"),
			Z_Registration_Info_UClass_AFPSPlayerController.InnerSingleton,
			StaticRegisterNativesAFPSPlayerController,
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
	return Z_Registration_Info_UClass_AFPSPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AFPSPlayerController_NoRegister()
{
	return AFPSPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFPSPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "FPSPlayerController.h" },
		{ "ModuleRelativePath", "Public/FPSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSprintToggle_MetaData[] = {
		{ "Category", "FPSPlayerController" },
		{ "ModuleRelativePath", "Public/FPSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Chara_MetaData[] = {
		{ "Category", "FPSPlayerController" },
		{ "ModuleRelativePath", "Public/FPSPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsSprintToggle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSprintToggle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Chara;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSPlayerController_AddKillToFeed, "AddKillToFeed" }, // 3993397144
		{ &Z_Construct_UFunction_AFPSPlayerController_Client_AddKillToFeed, "Client_AddKillToFeed" }, // 3301224369
		{ &Z_Construct_UFunction_AFPSPlayerController_Client_CreateGamemodeWidget, "Client_CreateGamemodeWidget" }, // 3583803181
		{ &Z_Construct_UFunction_AFPSPlayerController_Client_NeedSpawnWeapons, "Client_NeedSpawnWeapons" }, // 3347532319
		{ &Z_Construct_UFunction_AFPSPlayerController_Client_UpdateGamemodeHud, "Client_UpdateGamemodeHud" }, // 2117352617
		{ &Z_Construct_UFunction_AFPSPlayerController_CreateGamemodeWidget, "CreateGamemodeWidget" }, // 1149282693
		{ &Z_Construct_UFunction_AFPSPlayerController_HidePreGameCounter, "HidePreGameCounter" }, // 111432971
		{ &Z_Construct_UFunction_AFPSPlayerController_SetChara, "SetChara" }, // 1397199780
		{ &Z_Construct_UFunction_AFPSPlayerController_ShowMouseCursor, "ShowMouseCursor" }, // 3407306184
		{ &Z_Construct_UFunction_AFPSPlayerController_ShowPlayerHUD, "ShowPlayerHUD" }, // 3260565253
		{ &Z_Construct_UFunction_AFPSPlayerController_UpdateGamemodeHud, "UpdateGamemodeHud" }, // 2014591570
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AFPSPlayerController_Statics::NewProp_bIsSprintToggle_SetBit(void* Obj)
{
	((AFPSPlayerController*)Obj)->bIsSprintToggle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSPlayerController_Statics::NewProp_bIsSprintToggle = { "bIsSprintToggle", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFPSPlayerController), &Z_Construct_UClass_AFPSPlayerController_Statics::NewProp_bIsSprintToggle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSprintToggle_MetaData), NewProp_bIsSprintToggle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSPlayerController_Statics::NewProp_Chara = { "Chara", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSPlayerController, Chara), Z_Construct_UClass_AFPSCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Chara_MetaData), NewProp_Chara_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerController_Statics::NewProp_bIsSprintToggle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerController_Statics::NewProp_Chara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFPSPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSPlayerController_Statics::ClassParams = {
	&AFPSPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFPSPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPSPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPSPlayerController()
{
	if (!Z_Registration_Info_UClass_AFPSPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPSPlayerController.OuterSingleton, Z_Construct_UClass_AFPSPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPSPlayerController.OuterSingleton;
}
AFPSPlayerController::AFPSPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSPlayerController);
AFPSPlayerController::~AFPSPlayerController() {}
// ********** End Class AFPSPlayerController *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSPlayerController_h__Script_OnlineFPS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPSPlayerController, AFPSPlayerController::StaticClass, TEXT("AFPSPlayerController"), &Z_Registration_Info_UClass_AFPSPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSPlayerController), 2956825754U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSPlayerController_h__Script_OnlineFPS_3731523039(TEXT("/Script/OnlineFPS"),
	Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSPlayerController_h__Script_OnlineFPS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSPlayerController_h__Script_OnlineFPS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
