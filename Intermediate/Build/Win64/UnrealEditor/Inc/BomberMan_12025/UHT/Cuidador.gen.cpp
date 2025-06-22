// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_12025/Cuidador.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCuidador() {}

// Begin Cross Module References
BOMBERMAN_12025_API UClass* Z_Construct_UClass_ACuidador();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_ACuidador_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_12025();
// End Cross Module References

// Begin Class ACuidador
void ACuidador::StaticRegisterNativesACuidador()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACuidador);
UClass* Z_Construct_UClass_ACuidador_NoRegister()
{
	return ACuidador::StaticClass();
}
struct Z_Construct_UClass_ACuidador_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Cuidador.h" },
		{ "ModuleRelativePath", "Cuidador.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACuidador>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACuidador_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_12025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACuidador_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACuidador_Statics::ClassParams = {
	&ACuidador::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACuidador_Statics::Class_MetaDataParams), Z_Construct_UClass_ACuidador_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACuidador()
{
	if (!Z_Registration_Info_UClass_ACuidador.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACuidador.OuterSingleton, Z_Construct_UClass_ACuidador_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACuidador.OuterSingleton;
}
template<> BOMBERMAN_12025_API UClass* StaticClass<ACuidador>()
{
	return ACuidador::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACuidador);
ACuidador::~ACuidador() {}
// End Class ACuidador

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_Cuidador_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACuidador, ACuidador::StaticClass, TEXT("ACuidador"), &Z_Registration_Info_UClass_ACuidador, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACuidador), 2870565306U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_Cuidador_h_2518949728(TEXT("/Script/BomberMan_12025"),
	Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_Cuidador_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_Cuidador_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
