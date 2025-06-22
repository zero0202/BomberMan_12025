// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_12025/MonedaPlatino.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonedaPlatino() {}

// Begin Cross Module References
BOMBERMAN_12025_API UClass* Z_Construct_UClass_AMoneda();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_AMonedaPlatino();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_AMonedaPlatino_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_12025();
// End Cross Module References

// Begin Class AMonedaPlatino
void AMonedaPlatino::StaticRegisterNativesAMonedaPlatino()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMonedaPlatino);
UClass* Z_Construct_UClass_AMonedaPlatino_NoRegister()
{
	return AMonedaPlatino::StaticClass();
}
struct Z_Construct_UClass_AMonedaPlatino_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MonedaPlatino.h" },
		{ "ModuleRelativePath", "MonedaPlatino.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonedaPlatino>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMonedaPlatino_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMoneda,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_12025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMonedaPlatino_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMonedaPlatino_Statics::ClassParams = {
	&AMonedaPlatino::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMonedaPlatino_Statics::Class_MetaDataParams), Z_Construct_UClass_AMonedaPlatino_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMonedaPlatino()
{
	if (!Z_Registration_Info_UClass_AMonedaPlatino.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMonedaPlatino.OuterSingleton, Z_Construct_UClass_AMonedaPlatino_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMonedaPlatino.OuterSingleton;
}
template<> BOMBERMAN_12025_API UClass* StaticClass<AMonedaPlatino>()
{
	return AMonedaPlatino::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMonedaPlatino);
AMonedaPlatino::~AMonedaPlatino() {}
// End Class AMonedaPlatino

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_MonedaPlatino_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMonedaPlatino, AMonedaPlatino::StaticClass, TEXT("AMonedaPlatino"), &Z_Registration_Info_UClass_AMonedaPlatino, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMonedaPlatino), 2599702974U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_MonedaPlatino_h_2065613985(TEXT("/Script/BomberMan_12025"),
	Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_MonedaPlatino_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_MonedaPlatino_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
