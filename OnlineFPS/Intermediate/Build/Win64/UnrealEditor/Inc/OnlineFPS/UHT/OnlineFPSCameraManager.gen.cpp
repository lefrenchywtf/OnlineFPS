// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineFPSCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOnlineFPSCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
ONLINEFPS_API UClass* Z_Construct_UClass_AOnlineFPSCameraManager();
ONLINEFPS_API UClass* Z_Construct_UClass_AOnlineFPSCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnlineFPS();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AOnlineFPSCameraManager **************************************************
void AOnlineFPSCameraManager::StaticRegisterNativesAOnlineFPSCameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AOnlineFPSCameraManager;
UClass* AOnlineFPSCameraManager::GetPrivateStaticClass()
{
	using TClass = AOnlineFPSCameraManager;
	if (!Z_Registration_Info_UClass_AOnlineFPSCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OnlineFPSCameraManager"),
			Z_Registration_Info_UClass_AOnlineFPSCameraManager.InnerSingleton,
			StaticRegisterNativesAOnlineFPSCameraManager,
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
	return Z_Registration_Info_UClass_AOnlineFPSCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AOnlineFPSCameraManager_NoRegister()
{
	return AOnlineFPSCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AOnlineFPSCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "OnlineFPSCameraManager.h" },
		{ "ModuleRelativePath", "OnlineFPSCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOnlineFPSCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AOnlineFPSCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineFPSCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOnlineFPSCameraManager_Statics::ClassParams = {
	&AOnlineFPSCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineFPSCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AOnlineFPSCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOnlineFPSCameraManager()
{
	if (!Z_Registration_Info_UClass_AOnlineFPSCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOnlineFPSCameraManager.OuterSingleton, Z_Construct_UClass_AOnlineFPSCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOnlineFPSCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOnlineFPSCameraManager);
AOnlineFPSCameraManager::~AOnlineFPSCameraManager() {}
// ********** End Class AOnlineFPSCameraManager ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_OnlineFPSCameraManager_h__Script_OnlineFPS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOnlineFPSCameraManager, AOnlineFPSCameraManager::StaticClass, TEXT("AOnlineFPSCameraManager"), &Z_Registration_Info_UClass_AOnlineFPSCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOnlineFPSCameraManager), 3486847898U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_OnlineFPSCameraManager_h__Script_OnlineFPS_4089607644(TEXT("/Script/OnlineFPS"),
	Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_OnlineFPSCameraManager_h__Script_OnlineFPS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_OnlineFPSCameraManager_h__Script_OnlineFPS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
