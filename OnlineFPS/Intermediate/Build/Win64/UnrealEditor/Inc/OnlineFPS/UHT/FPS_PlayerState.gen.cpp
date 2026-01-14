// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS_PlayerState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFPS_PlayerState() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
ONLINEFPS_API UClass* Z_Construct_UClass_AFPS_PlayerState();
ONLINEFPS_API UClass* Z_Construct_UClass_AFPS_PlayerState_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnlineFPS();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFPS_PlayerState *********************************************************
void AFPS_PlayerState::StaticRegisterNativesAFPS_PlayerState()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFPS_PlayerState;
UClass* AFPS_PlayerState::GetPrivateStaticClass()
{
	using TClass = AFPS_PlayerState;
	if (!Z_Registration_Info_UClass_AFPS_PlayerState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FPS_PlayerState"),
			Z_Registration_Info_UClass_AFPS_PlayerState.InnerSingleton,
			StaticRegisterNativesAFPS_PlayerState,
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
	return Z_Registration_Info_UClass_AFPS_PlayerState.InnerSingleton;
}
UClass* Z_Construct_UClass_AFPS_PlayerState_NoRegister()
{
	return AFPS_PlayerState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFPS_PlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FPS_PlayerState.h" },
		{ "ModuleRelativePath", "Public/FPS_PlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_teamID_MetaData[] = {
		{ "Category", "FPS_PlayerState" },
		{ "ModuleRelativePath", "Public/FPS_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_kills_MetaData[] = {
		{ "Category", "FPS_PlayerState" },
		{ "ModuleRelativePath", "Public/FPS_PlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_deaths_MetaData[] = {
		{ "Category", "FPS_PlayerState" },
		{ "ModuleRelativePath", "Public/FPS_PlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_teamID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_kills;
	static const UECodeGen_Private::FIntPropertyParams NewProp_deaths;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPS_PlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFPS_PlayerState_Statics::NewProp_teamID = { "teamID", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPS_PlayerState, teamID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_teamID_MetaData), NewProp_teamID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFPS_PlayerState_Statics::NewProp_kills = { "kills", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPS_PlayerState, kills), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_kills_MetaData), NewProp_kills_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFPS_PlayerState_Statics::NewProp_deaths = { "deaths", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPS_PlayerState, deaths), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_deaths_MetaData), NewProp_deaths_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPS_PlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_PlayerState_Statics::NewProp_teamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_PlayerState_Statics::NewProp_kills,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_PlayerState_Statics::NewProp_deaths,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_PlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFPS_PlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_PlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPS_PlayerState_Statics::ClassParams = {
	&AFPS_PlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFPS_PlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_PlayerState_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_PlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPS_PlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPS_PlayerState()
{
	if (!Z_Registration_Info_UClass_AFPS_PlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPS_PlayerState.OuterSingleton, Z_Construct_UClass_AFPS_PlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPS_PlayerState.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void AFPS_PlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_teamID(TEXT("teamID"));
	static FName Name_kills(TEXT("kills"));
	static FName Name_deaths(TEXT("deaths"));
	const bool bIsValid = true
		&& Name_teamID == ClassReps[(int32)ENetFields_Private::teamID].Property->GetFName()
		&& Name_kills == ClassReps[(int32)ENetFields_Private::kills].Property->GetFName()
		&& Name_deaths == ClassReps[(int32)ENetFields_Private::deaths].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AFPS_PlayerState"));
}
#endif
AFPS_PlayerState::AFPS_PlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPS_PlayerState);
AFPS_PlayerState::~AFPS_PlayerState() {}
// ********** End Class AFPS_PlayerState ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPS_PlayerState_h__Script_OnlineFPS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPS_PlayerState, AFPS_PlayerState::StaticClass, TEXT("AFPS_PlayerState"), &Z_Registration_Info_UClass_AFPS_PlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPS_PlayerState), 398867518U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPS_PlayerState_h__Script_OnlineFPS_245791272(TEXT("/Script/OnlineFPS"),
	Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPS_PlayerState_h__Script_OnlineFPS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPS_PlayerState_h__Script_OnlineFPS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
