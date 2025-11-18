// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGameModeBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFPSGameModeBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
ONLINEFPS_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();
ONLINEFPS_API UClass* Z_Construct_UClass_AFPSGameModeBase();
ONLINEFPS_API UClass* Z_Construct_UClass_AFPSGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnlineFPS();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFPSGameModeBase Function AddPlayer **************************************
struct Z_Construct_UFunction_AFPSGameModeBase_AddPlayer_Statics
{
	struct FPSGameModeBase_eventAddPlayer_Parms
	{
		AFPSCharacter* _character;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TMap<class AFPSCharacter*, struct FPlayerWeapons> playersWeapons;\n" },
#endif
		{ "ModuleRelativePath", "Public/FPSGameModeBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TMap<class AFPSCharacter*, struct FPlayerWeapons> playersWeapons;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__character;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSGameModeBase_AddPlayer_Statics::NewProp__character = { "_character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSGameModeBase_eventAddPlayer_Parms, _character), Z_Construct_UClass_AFPSCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSGameModeBase_AddPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameModeBase_AddPlayer_Statics::NewProp__character,
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
	P_GET_OBJECT(AFPSCharacter,Z_Param__character);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPlayer(Z_Param__character);
	P_NATIVE_END;
}
// ********** End Class AFPSGameModeBase Function AddPlayer ****************************************

// ********** Begin Class AFPSGameModeBase *********************************************************
void AFPSGameModeBase::StaticRegisterNativesAFPSGameModeBase()
{
	UClass* Class = AFPSGameModeBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddPlayer", &AFPSGameModeBase::execAddPlayer },
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSGameModeBase_AddPlayer, "AddPlayer" }, // 3399643858
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFPSGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSGameModeBase_Statics::ClassParams = {
	&AFPSGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
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
		{ Z_Construct_UClass_AFPSGameModeBase, AFPSGameModeBase::StaticClass, TEXT("AFPSGameModeBase"), &Z_Registration_Info_UClass_AFPSGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSGameModeBase), 2543694111U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameModeBase_h__Script_OnlineFPS_3201636918(TEXT("/Script/OnlineFPS"),
	Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameModeBase_h__Script_OnlineFPS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameModeBase_h__Script_OnlineFPS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
