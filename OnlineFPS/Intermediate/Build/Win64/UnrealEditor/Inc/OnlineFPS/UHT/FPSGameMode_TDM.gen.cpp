// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGameMode_TDM.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFPSGameMode_TDM() {}

// ********** Begin Cross Module References ********************************************************
ONLINEFPS_API UClass* Z_Construct_UClass_AFPSGameMode_TDM();
ONLINEFPS_API UClass* Z_Construct_UClass_AFPSGameMode_TDM_NoRegister();
ONLINEFPS_API UClass* Z_Construct_UClass_AFPSGameModeBase();
UPackage* Z_Construct_UPackage__Script_OnlineFPS();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFPSGameMode_TDM *********************************************************
void AFPSGameMode_TDM::StaticRegisterNativesAFPSGameMode_TDM()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFPSGameMode_TDM;
UClass* AFPSGameMode_TDM::GetPrivateStaticClass()
{
	using TClass = AFPSGameMode_TDM;
	if (!Z_Registration_Info_UClass_AFPSGameMode_TDM.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FPSGameMode_TDM"),
			Z_Registration_Info_UClass_AFPSGameMode_TDM.InnerSingleton,
			StaticRegisterNativesAFPSGameMode_TDM,
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
	return Z_Registration_Info_UClass_AFPSGameMode_TDM.InnerSingleton;
}
UClass* Z_Construct_UClass_AFPSGameMode_TDM_NoRegister()
{
	return AFPSGameMode_TDM::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFPSGameMode_TDM_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FPSGameMode_TDM.h" },
		{ "ModuleRelativePath", "Public/FPSGameMode_TDM.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSGameMode_TDM>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFPSGameMode_TDM_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AFPSGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameMode_TDM_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSGameMode_TDM_Statics::ClassParams = {
	&AFPSGameMode_TDM::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameMode_TDM_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPSGameMode_TDM_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPSGameMode_TDM()
{
	if (!Z_Registration_Info_UClass_AFPSGameMode_TDM.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPSGameMode_TDM.OuterSingleton, Z_Construct_UClass_AFPSGameMode_TDM_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPSGameMode_TDM.OuterSingleton;
}
AFPSGameMode_TDM::AFPSGameMode_TDM(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSGameMode_TDM);
AFPSGameMode_TDM::~AFPSGameMode_TDM() {}
// ********** End Class AFPSGameMode_TDM ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameMode_TDM_h__Script_OnlineFPS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPSGameMode_TDM, AFPSGameMode_TDM::StaticClass, TEXT("AFPSGameMode_TDM"), &Z_Registration_Info_UClass_AFPSGameMode_TDM, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSGameMode_TDM), 472962418U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameMode_TDM_h__Script_OnlineFPS_2624476292(TEXT("/Script/OnlineFPS"),
	Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameMode_TDM_h__Script_OnlineFPS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSGameMode_TDM_h__Script_OnlineFPS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
