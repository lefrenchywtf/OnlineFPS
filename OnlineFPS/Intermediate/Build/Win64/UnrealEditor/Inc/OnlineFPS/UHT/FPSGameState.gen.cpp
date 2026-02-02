// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGameState.h"
#include "FPSStructs.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFPSGameState() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AGameState();
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
ONLINEFPS_API UClass* Z_Construct_UClass_AFPSGameState();
ONLINEFPS_API UClass* Z_Construct_UClass_AFPSGameState_NoRegister();
ONLINEFPS_API UScriptStruct* Z_Construct_UScriptStruct_FTeamBasedInfos();
UPackage* Z_Construct_UPackage__Script_OnlineFPS();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFPSGameState Function GetSpawns *****************************************
struct Z_Construct_UFunction_AFPSGameState_GetSpawns_Statics
{
	struct FPSGameState_eventGetSpawns_Parms
	{
		TArray<FVector> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSGameState_GetSpawns_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFPSGameState_GetSpawns_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSGameState_eventGetSpawns_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSGameState_GetSpawns_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameState_GetSpawns_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameState_GetSpawns_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameState_GetSpawns_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameState_GetSpawns_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSGameState, nullptr, "GetSpawns", Z_Construct_UFunction_AFPSGameState_GetSpawns_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameState_GetSpawns_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSGameState_GetSpawns_Statics::FPSGameState_eventGetSpawns_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameState_GetSpawns_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSGameState_GetSpawns_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFPSGameState_GetSpawns_Statics::FPSGameState_eventGetSpawns_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSGameState_GetSpawns()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSGameState_GetSpawns_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSGameState::execGetSpawns)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector>*)Z_Param__Result=P_THIS->GetSpawns();
	P_NATIVE_END;
}
// ********** End Class AFPSGameState Function GetSpawns *******************************************

// ********** Begin Class AFPSGameState ************************************************************
void AFPSGameState::StaticRegisterNativesAFPSGameState()
{
	UClass* Class = AFPSGameState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSpawns", &AFPSGameState::execGetSpawns },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFPSGameState;
UClass* AFPSGameState::GetPrivateStaticClass()
{
	using TClass = AFPSGameState;
	if (!Z_Registration_Info_UClass_AFPSGameState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FPSGameState"),
			Z_Registration_Info_UClass_AFPSGameState.InnerSingleton,
			StaticRegisterNativesAFPSGameState,
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
	return Z_Registration_Info_UClass_AFPSGameState.InnerSingleton;
}
UClass* Z_Construct_UClass_AFPSGameState_NoRegister()
{
	return AFPSGameState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFPSGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FPSGameState.h" },
		{ "ModuleRelativePath", "Public/FPSGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyPawns_MetaData[] = {
		{ "ModuleRelativePath", "Public/FPSGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spawns_MetaData[] = {
		{ "ModuleRelativePath", "Public/FPSGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_modeInfos_MetaData[] = {
		{ "Category", "FPSGameState" },
		{ "ModuleRelativePath", "Public/FPSGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTeamBased_MetaData[] = {
		{ "ModuleRelativePath", "Public/FPSGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_timeRemaining_MetaData[] = {
		{ "Category", "FPSGameState" },
		{ "ModuleRelativePath", "Public/FPSGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LobbyPawns_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LobbyPawns;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spawns_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Spawns;
	static const UECodeGen_Private::FStructPropertyParams NewProp_modeInfos;
	static void NewProp_bTeamBased_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeamBased;
	static const UECodeGen_Private::FIntPropertyParams NewProp_timeRemaining;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSGameState_GetSpawns, "GetSpawns" }, // 1634850624
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSGameState_Statics::NewProp_LobbyPawns_Inner = { "LobbyPawns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFPSGameState_Statics::NewProp_LobbyPawns = { "LobbyPawns", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSGameState, LobbyPawns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyPawns_MetaData), NewProp_LobbyPawns_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSGameState_Statics::NewProp_Spawns_Inner = { "Spawns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFPSGameState_Statics::NewProp_Spawns = { "Spawns", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSGameState, Spawns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spawns_MetaData), NewProp_Spawns_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSGameState_Statics::NewProp_modeInfos = { "modeInfos", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSGameState, modeInfos), Z_Construct_UScriptStruct_FTeamBasedInfos, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_modeInfos_MetaData), NewProp_modeInfos_MetaData) }; // 1820631868
void Z_Construct_UClass_AFPSGameState_Statics::NewProp_bTeamBased_SetBit(void* Obj)
{
	((AFPSGameState*)Obj)->bTeamBased = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSGameState_Statics::NewProp_bTeamBased = { "bTeamBased", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFPSGameState), &Z_Construct_UClass_AFPSGameState_Statics::NewProp_bTeamBased_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTeamBased_MetaData), NewProp_bTeamBased_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFPSGameState_Statics::NewProp_timeRemaining = { "timeRemaining", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSGameState, timeRemaining), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_timeRemaining_MetaData), NewProp_timeRemaining_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameState_Statics::NewProp_LobbyPawns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameState_Statics::NewProp_LobbyPawns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameState_Statics::NewProp_Spawns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameState_Statics::NewProp_Spawns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameState_Statics::NewProp_modeInfos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameState_Statics::NewProp_bTeamBased,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGameState_Statics::NewProp_timeRemaining,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFPSGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameState,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSGameState_Statics::ClassParams = {
	&AFPSGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFPSGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameState_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPSGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPSGameState()
{
	if (!Z_Registration_Info_UClass_AFPSGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPSGameState.OuterSingleton, Z_Construct_UClass_AFPSGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPSGameState.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void AFPSGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_LobbyPawns(TEXT("LobbyPawns"));
	static FName Name_Spawns(TEXT("Spawns"));
	static FName Name_modeInfos(TEXT("modeInfos"));
	static FName Name_bTeamBased(TEXT("bTeamBased"));
	static FName Name_timeRemaining(TEXT("timeRemaining"));
	const bool bIsValid = true
		&& Name_LobbyPawns == ClassReps[(int32)ENetFields_Private::LobbyPawns].Property->GetFName()
		&& Name_Spawns == ClassReps[(int32)ENetFields_Private::Spawns].Property->GetFName()
		&& Name_modeInfos == ClassReps[(int32)ENetFields_Private::modeInfos].Property->GetFName()
		&& Name_bTeamBased == ClassReps[(int32)ENetFields_Private::bTeamBased].Property->GetFName()
		&& Name_timeRemaining == ClassReps[(int32)ENetFields_Private::timeRemaining].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AFPSGameState"));
}
#endif
AFPSGameState::AFPSGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSGameState);
AFPSGameState::~AFPSGameState() {}
// ********** End Class AFPSGameState **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameState_h__Script_OnlineFPS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPSGameState, AFPSGameState::StaticClass, TEXT("AFPSGameState"), &Z_Registration_Info_UClass_AFPSGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSGameState), 104769725U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameState_h__Script_OnlineFPS_2638471967(TEXT("/Script/OnlineFPS"),
	Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameState_h__Script_OnlineFPS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameState_h__Script_OnlineFPS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
