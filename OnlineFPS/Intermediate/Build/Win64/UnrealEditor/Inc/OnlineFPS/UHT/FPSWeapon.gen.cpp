// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSWeapon.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFPSWeapon() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ONLINEFPS_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();
ONLINEFPS_API UClass* Z_Construct_UClass_AFPSWeapon();
ONLINEFPS_API UClass* Z_Construct_UClass_AFPSWeapon_NoRegister();
ONLINEFPS_API UEnum* Z_Construct_UEnum_OnlineFPS_EWeaponType();
UPackage* Z_Construct_UPackage__Script_OnlineFPS();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EWeaponType ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponType;
static UEnum* EWeaponType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWeaponType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWeaponType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineFPS_EWeaponType, (UObject*)Z_Construct_UPackage__Script_OnlineFPS(), TEXT("EWeaponType"));
	}
	return Z_Registration_Info_UEnum_EWeaponType.OuterSingleton;
}
template<> ONLINEFPS_API UEnum* StaticEnum<EWeaponType>()
{
	return EWeaponType_StaticEnum();
}
struct Z_Construct_UEnum_OnlineFPS_EWeaponType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
		{ "PRIMARY.Name", "EWeaponType::PRIMARY" },
		{ "Secondary.Name", "EWeaponType::Secondary" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWeaponType::PRIMARY", (int64)EWeaponType::PRIMARY },
		{ "EWeaponType::Secondary", (int64)EWeaponType::Secondary },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineFPS_EWeaponType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OnlineFPS,
	nullptr,
	"EWeaponType",
	"EWeaponType",
	Z_Construct_UEnum_OnlineFPS_EWeaponType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineFPS_EWeaponType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineFPS_EWeaponType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OnlineFPS_EWeaponType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OnlineFPS_EWeaponType()
{
	if (!Z_Registration_Info_UEnum_EWeaponType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponType.InnerSingleton, Z_Construct_UEnum_OnlineFPS_EWeaponType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWeaponType.InnerSingleton;
}
// ********** End Enum EWeaponType *****************************************************************

// ********** Begin Class AFPSWeapon ***************************************************************
void AFPSWeapon::StaticRegisterNativesAFPSWeapon()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFPSWeapon;
UClass* AFPSWeapon::GetPrivateStaticClass()
{
	using TClass = AFPSWeapon;
	if (!Z_Registration_Info_UClass_AFPSWeapon.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FPSWeapon"),
			Z_Registration_Info_UClass_AFPSWeapon.InnerSingleton,
			StaticRegisterNativesAFPSWeapon,
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
	return Z_Registration_Info_UClass_AFPSWeapon.InnerSingleton;
}
UClass* Z_Construct_UClass_AFPSWeapon_NoRegister()
{
	return AFPSWeapon::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFPSWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FPSWeapon.h" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weaponName_MetaData[] = {
		{ "Category", "FPSWeapon" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "FPSWeapon" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxAmmo_MetaData[] = {
		{ "Category", "FPSWeapon" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ammoCount_MetaData[] = {
		{ "Category", "FPSWeapon" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_damage_MetaData[] = {
		{ "Category", "FPSWeapon" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HsMultiplier_MetaData[] = {
		{ "Category", "FPSWeapon" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weaponOwner_MetaData[] = {
		{ "Category", "FPSWeapon" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_weaponName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maxAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ammoCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_damage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HsMultiplier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_weaponOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_weaponName = { "weaponName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSWeapon, weaponName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponName_MetaData), NewProp_weaponName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSWeapon, Type), Z_Construct_UEnum_OnlineFPS_EWeaponType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 999620573
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_maxAmmo = { "maxAmmo", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSWeapon, maxAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxAmmo_MetaData), NewProp_maxAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_ammoCount = { "ammoCount", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSWeapon, ammoCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ammoCount_MetaData), NewProp_ammoCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSWeapon, damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_damage_MetaData), NewProp_damage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_HsMultiplier = { "HsMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSWeapon, HsMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HsMultiplier_MetaData), NewProp_HsMultiplier_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_weaponOwner = { "weaponOwner", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSWeapon, weaponOwner), Z_Construct_UClass_AFPSCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponOwner_MetaData), NewProp_weaponOwner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_weaponName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_maxAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_ammoCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_HsMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_weaponOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFPSWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSWeapon_Statics::ClassParams = {
	&AFPSWeapon::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFPSWeapon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPSWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPSWeapon()
{
	if (!Z_Registration_Info_UClass_AFPSWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPSWeapon.OuterSingleton, Z_Construct_UClass_AFPSWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPSWeapon.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSWeapon);
AFPSWeapon::~AFPSWeapon() {}
// ********** End Class AFPSWeapon *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSWeapon_h__Script_OnlineFPS_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWeaponType_StaticEnum, TEXT("EWeaponType"), &Z_Registration_Info_UEnum_EWeaponType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 999620573U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPSWeapon, AFPSWeapon::StaticClass, TEXT("AFPSWeapon"), &Z_Registration_Info_UClass_AFPSWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSWeapon), 2320396421U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSWeapon_h__Script_OnlineFPS_1408996290(TEXT("/Script/OnlineFPS"),
	Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSWeapon_h__Script_OnlineFPS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSWeapon_h__Script_OnlineFPS_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSWeapon_h__Script_OnlineFPS_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OnlineFPS_Source_OnlineFPS_Public_FPSWeapon_h__Script_OnlineFPS_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
