// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_12025/MonedaOro.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonedaOro() {}

// Begin Cross Module References
BOMBERMAN_12025_API UClass* Z_Construct_UClass_AMoneda();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_AMonedaOro();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_AMonedaOro_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_12025();
// End Cross Module References

// Begin Class AMonedaOro
void AMonedaOro::StaticRegisterNativesAMonedaOro()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMonedaOro);
UClass* Z_Construct_UClass_AMonedaOro_NoRegister()
{
	return AMonedaOro::StaticClass();
}
struct Z_Construct_UClass_AMonedaOro_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MonedaOro.h" },
		{ "ModuleRelativePath", "MonedaOro.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonedaOro>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMonedaOro_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMoneda,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_12025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMonedaOro_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMonedaOro_Statics::ClassParams = {
	&AMonedaOro::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMonedaOro_Statics::Class_MetaDataParams), Z_Construct_UClass_AMonedaOro_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMonedaOro()
{
	if (!Z_Registration_Info_UClass_AMonedaOro.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMonedaOro.OuterSingleton, Z_Construct_UClass_AMonedaOro_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMonedaOro.OuterSingleton;
}
template<> BOMBERMAN_12025_API UClass* StaticClass<AMonedaOro>()
{
	return AMonedaOro::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMonedaOro);
AMonedaOro::~AMonedaOro() {}
// End Class AMonedaOro

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_MonedaOro_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMonedaOro, AMonedaOro::StaticClass, TEXT("AMonedaOro"), &Z_Registration_Info_UClass_AMonedaOro, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMonedaOro), 660287990U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_MonedaOro_h_1691838258(TEXT("/Script/BomberMan_12025"),
	Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_MonedaOro_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_MonedaOro_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
