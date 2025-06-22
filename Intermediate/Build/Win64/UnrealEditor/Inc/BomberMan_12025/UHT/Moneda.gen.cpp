// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_12025/Moneda.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoneda() {}

// Begin Cross Module References
BOMBERMAN_12025_API UClass* Z_Construct_UClass_AMoneda();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_AMoneda_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_12025();
// End Cross Module References

// Begin Class AMoneda
void AMoneda::StaticRegisterNativesAMoneda()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMoneda);
UClass* Z_Construct_UClass_AMoneda_NoRegister()
{
	return AMoneda::StaticClass();
}
struct Z_Construct_UClass_AMoneda_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Moneda.h" },
		{ "ModuleRelativePath", "Moneda.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoneda>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMoneda_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_12025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMoneda_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMoneda_Statics::ClassParams = {
	&AMoneda::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMoneda_Statics::Class_MetaDataParams), Z_Construct_UClass_AMoneda_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMoneda()
{
	if (!Z_Registration_Info_UClass_AMoneda.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMoneda.OuterSingleton, Z_Construct_UClass_AMoneda_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMoneda.OuterSingleton;
}
template<> BOMBERMAN_12025_API UClass* StaticClass<AMoneda>()
{
	return AMoneda::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMoneda);
AMoneda::~AMoneda() {}
// End Class AMoneda

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_Moneda_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMoneda, AMoneda::StaticClass, TEXT("AMoneda"), &Z_Registration_Info_UClass_AMoneda, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMoneda), 943833360U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_Moneda_h_3015335372(TEXT("/Script/BomberMan_12025"),
	Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_Moneda_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_Moneda_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
