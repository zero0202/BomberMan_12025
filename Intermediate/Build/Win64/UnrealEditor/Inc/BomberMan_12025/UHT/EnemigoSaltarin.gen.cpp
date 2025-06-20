// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_12025/EnemigoSaltarin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoSaltarin() {}

// Begin Cross Module References
BOMBERMAN_12025_API UClass* Z_Construct_UClass_AEnemigo();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_AEnemigoSaltarin();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_AEnemigoSaltarin_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_12025();
// End Cross Module References

// Begin Class AEnemigoSaltarin
void AEnemigoSaltarin::StaticRegisterNativesAEnemigoSaltarin()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigoSaltarin);
UClass* Z_Construct_UClass_AEnemigoSaltarin_NoRegister()
{
	return AEnemigoSaltarin::StaticClass();
}
struct Z_Construct_UClass_AEnemigoSaltarin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EnemigoSaltarin.h" },
		{ "ModuleRelativePath", "EnemigoSaltarin.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoSaltarin>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemigoSaltarin_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemigo,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_12025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoSaltarin_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoSaltarin_Statics::ClassParams = {
	&AEnemigoSaltarin::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoSaltarin_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigoSaltarin_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigoSaltarin()
{
	if (!Z_Registration_Info_UClass_AEnemigoSaltarin.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigoSaltarin.OuterSingleton, Z_Construct_UClass_AEnemigoSaltarin_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigoSaltarin.OuterSingleton;
}
template<> BOMBERMAN_12025_API UClass* StaticClass<AEnemigoSaltarin>()
{
	return AEnemigoSaltarin::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoSaltarin);
AEnemigoSaltarin::~AEnemigoSaltarin() {}
// End Class AEnemigoSaltarin

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_EnemigoSaltarin_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigoSaltarin, AEnemigoSaltarin::StaticClass, TEXT("AEnemigoSaltarin"), &Z_Registration_Info_UClass_AEnemigoSaltarin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigoSaltarin), 3499365097U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_EnemigoSaltarin_h_132105661(TEXT("/Script/BomberMan_12025"),
	Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_EnemigoSaltarin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_EnemigoSaltarin_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
