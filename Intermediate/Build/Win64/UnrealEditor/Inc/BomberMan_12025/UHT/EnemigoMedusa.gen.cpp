// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_12025/EnemigoMedusa.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoMedusa() {}

// Begin Cross Module References
BOMBERMAN_12025_API UClass* Z_Construct_UClass_AEnemigo();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_AEnemigoMedusa();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_AEnemigoMedusa_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_12025();
// End Cross Module References

// Begin Class AEnemigoMedusa
void AEnemigoMedusa::StaticRegisterNativesAEnemigoMedusa()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigoMedusa);
UClass* Z_Construct_UClass_AEnemigoMedusa_NoRegister()
{
	return AEnemigoMedusa::StaticClass();
}
struct Z_Construct_UClass_AEnemigoMedusa_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EnemigoMedusa.h" },
		{ "ModuleRelativePath", "EnemigoMedusa.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoMedusa>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemigoMedusa_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemigo,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_12025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoMedusa_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoMedusa_Statics::ClassParams = {
	&AEnemigoMedusa::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoMedusa_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigoMedusa_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigoMedusa()
{
	if (!Z_Registration_Info_UClass_AEnemigoMedusa.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigoMedusa.OuterSingleton, Z_Construct_UClass_AEnemigoMedusa_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigoMedusa.OuterSingleton;
}
template<> BOMBERMAN_12025_API UClass* StaticClass<AEnemigoMedusa>()
{
	return AEnemigoMedusa::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoMedusa);
AEnemigoMedusa::~AEnemigoMedusa() {}
// End Class AEnemigoMedusa

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_EnemigoMedusa_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigoMedusa, AEnemigoMedusa::StaticClass, TEXT("AEnemigoMedusa"), &Z_Registration_Info_UClass_AEnemigoMedusa, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigoMedusa), 3783855761U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_EnemigoMedusa_h_3148831048(TEXT("/Script/BomberMan_12025"),
	Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_EnemigoMedusa_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_EnemigoMedusa_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
