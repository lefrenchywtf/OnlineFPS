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
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ONLINEFPS_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();
ONLINEFPS_API UClass* Z_Construct_UClass_AFPSPlayerController();
ONLINEFPS_API UClass* Z_Construct_UClass_AFPSPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnlineFPS();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFPSPlayerController Function CharaSpawnWeapons **************************
struct FPSPlayerController_eventCharaSpawnWeapons_Parms
{
	AFPSCharacter* _otherPlayer;
};
static FName NAME_AFPSPlayerController_CharaSpawnWeapons = FName(TEXT("CharaSpawnWeapons"));
void AFPSPlayerController::CharaSpawnWeapons(AFPSCharacter* _otherPlayer)
{
	FPSPlayerController_eventCharaSpawnWeapons_Parms Parms;
	Parms._otherPlayer=_otherPlayer;
	UFunction* Func = FindFunctionChecked(NAME_AFPSPlayerController_CharaSpawnWeapons);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AFPSPlayerController_CharaSpawnWeapons_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__otherPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSPlayerController_CharaSpawnWeapons_Statics::NewProp__otherPlayer = { "_otherPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSPlayerController_eventCharaSpawnWeapons_Parms, _otherPlayer), Z_Construct_UClass_AFPSCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerController_CharaSpawnWeapons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerController_CharaSpawnWeapons_Statics::NewProp__otherPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_CharaSpawnWeapons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerController_CharaSpawnWeapons_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSPlayerController, nullptr, "CharaSpawnWeapons", Z_Construct_UFunction_AFPSPlayerController_CharaSpawnWeapons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_CharaSpawnWeapons_Statics::PropPointers), sizeof(FPSPlayerController_eventCharaSpawnWeapons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_CharaSpawnWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSPlayerController_CharaSpawnWeapons_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FPSPlayerController_eventCharaSpawnWeapons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSPlayerController_CharaSpawnWeapons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSPlayerController_CharaSpawnWeapons_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AFPSPlayerController Function CharaSpawnWeapons ****************************

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

// ********** Begin Class AFPSPlayerController *****************************************************
void AFPSPlayerController::StaticRegisterNativesAFPSPlayerController()
{
	UClass* Class = AFPSPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Client_NeedSpawnWeapons", &AFPSPlayerController::execClient_NeedSpawnWeapons },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Chara_MetaData[] = {
		{ "Category", "FPSPlayerController" },
		{ "ModuleRelativePath", "Public/FPSPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Chara;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSPlayerController_CharaSpawnWeapons, "CharaSpawnWeapons" }, // 223705767
		{ &Z_Construct_UFunction_AFPSPlayerController_Client_NeedSpawnWeapons, "Client_NeedSpawnWeapons" }, // 3347532319
		{ &Z_Construct_UFunction_AFPSPlayerController_SetChara, "SetChara" }, // 1397199780
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSPlayerController_Statics::NewProp_Chara = { "Chara", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSPlayerController, Chara), Z_Construct_UClass_AFPSCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Chara_MetaData), NewProp_Chara_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSPlayerController_Statics::PropPointers[] = {
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
		{ Z_Construct_UClass_AFPSPlayerController, AFPSPlayerController::StaticClass, TEXT("AFPSPlayerController"), &Z_Registration_Info_UClass_AFPSPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSPlayerController), 1088133627U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSPlayerController_h__Script_OnlineFPS_2505899441(TEXT("/Script/OnlineFPS"),
	Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSPlayerController_h__Script_OnlineFPS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSPlayerController_h__Script_OnlineFPS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
