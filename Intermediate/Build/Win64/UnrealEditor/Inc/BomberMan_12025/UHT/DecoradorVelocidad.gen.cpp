// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_12025/DecoradorVelocidad.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDecoradorVelocidad() {}

// Begin Cross Module References
BOMBERMAN_12025_API UClass* Z_Construct_UClass_ADecoradorEnemigo();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_ADecoradorVelocidad();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_ADecoradorVelocidad_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_12025();
// End Cross Module References

// Begin Class ADecoradorVelocidad
void ADecoradorVelocidad::StaticRegisterNativesADecoradorVelocidad()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADecoradorVelocidad);
UClass* Z_Construct_UClass_ADecoradorVelocidad_NoRegister()
{
	return ADecoradorVelocidad::StaticClass();
}
struct Z_Construct_UClass_ADecoradorVelocidad_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DecoradorVelocidad.h" },
		{ "ModuleRelativePath", "DecoradorVelocidad.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADecoradorVelocidad>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADecoradorVelocidad_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADecoradorEnemigo,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_12025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADecoradorVelocidad_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADecoradorVelocidad_Statics::ClassParams = {
	&ADecoradorVelocidad::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADecoradorVelocidad_Statics::Class_MetaDataParams), Z_Construct_UClass_ADecoradorVelocidad_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADecoradorVelocidad()
{
	if (!Z_Registration_Info_UClass_ADecoradorVelocidad.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADecoradorVelocidad.OuterSingleton, Z_Construct_UClass_ADecoradorVelocidad_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADecoradorVelocidad.OuterSingleton;
}
template<> BOMBERMAN_12025_API UClass* StaticClass<ADecoradorVelocidad>()
{
	return ADecoradorVelocidad::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADecoradorVelocidad);
ADecoradorVelocidad::~ADecoradorVelocidad() {}
// End Class ADecoradorVelocidad

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_DecoradorVelocidad_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADecoradorVelocidad, ADecoradorVelocidad::StaticClass, TEXT("ADecoradorVelocidad"), &Z_Registration_Info_UClass_ADecoradorVelocidad, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADecoradorVelocidad), 3980881269U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_DecoradorVelocidad_h_4077278716(TEXT("/Script/BomberMan_12025"),
	Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_DecoradorVelocidad_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_DecoradorVelocidad_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
