// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMMainMenu.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGMMainMenu() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
ONLINEFPS_API UClass* Z_Construct_UClass_AGMMainMenu();
ONLINEFPS_API UClass* Z_Construct_UClass_AGMMainMenu_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnlineFPS();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGMMainMenu **************************************************************
void AGMMainMenu::StaticRegisterNativesAGMMainMenu()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGMMainMenu;
UClass* AGMMainMenu::GetPrivateStaticClass()
{
	using TClass = AGMMainMenu;
	if (!Z_Registration_Info_UClass_AGMMainMenu.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GMMainMenu"),
			Z_Registration_Info_UClass_AGMMainMenu.InnerSingleton,
			StaticRegisterNativesAGMMainMenu,
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
	return Z_Registration_Info_UClass_AGMMainMenu.InnerSingleton;
}
UClass* Z_Construct_UClass_AGMMainMenu_NoRegister()
{
	return AGMMainMenu::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGMMainMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GMMainMenu.h" },
		{ "ModuleRelativePath", "Public/GMMainMenu.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGMMainMenu>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGMMainMenu_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGMMainMenu_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGMMainMenu_Statics::ClassParams = {
	&AGMMainMenu::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGMMainMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_AGMMainMenu_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGMMainMenu()
{
	if (!Z_Registration_Info_UClass_AGMMainMenu.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGMMainMenu.OuterSingleton, Z_Construct_UClass_AGMMainMenu_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGMMainMenu.OuterSingleton;
}
AGMMainMenu::AGMMainMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGMMainMenu);
AGMMainMenu::~AGMMainMenu() {}
// ********** End Class AGMMainMenu ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_GMMainMenu_h__Script_OnlineFPS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGMMainMenu, AGMMainMenu::StaticClass, TEXT("AGMMainMenu"), &Z_Registration_Info_UClass_AGMMainMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGMMainMenu), 3182356105U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_GMMainMenu_h__Script_OnlineFPS_2798295750(TEXT("/Script/OnlineFPS"),
	Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_GMMainMenu_h__Script_OnlineFPS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_GMMainMenu_h__Script_OnlineFPS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
