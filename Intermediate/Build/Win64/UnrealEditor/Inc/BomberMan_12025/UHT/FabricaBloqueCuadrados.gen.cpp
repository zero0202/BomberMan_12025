// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_12025/FabricaBloqueCuadrados.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaBloqueCuadrados() {}

// Begin Cross Module References
BOMBERMAN_12025_API UClass* Z_Construct_UClass_AFabricaBloque();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_AFabricaBloqueCuadrados();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_AFabricaBloqueCuadrados_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_12025();
// End Cross Module References

// Begin Class AFabricaBloqueCuadrados
void AFabricaBloqueCuadrados::StaticRegisterNativesAFabricaBloqueCuadrados()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFabricaBloqueCuadrados);
UClass* Z_Construct_UClass_AFabricaBloqueCuadrados_NoRegister()
{
	return AFabricaBloqueCuadrados::StaticClass();
}
struct Z_Construct_UClass_AFabricaBloqueCuadrados_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "FabricaBloqueCuadrados.h" },
		{ "ModuleRelativePath", "FabricaBloqueCuadrados.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaBloqueCuadrados>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFabricaBloqueCuadrados_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AFabricaBloque,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_12025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaBloqueCuadrados_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFabricaBloqueCuadrados_Statics::ClassParams = {
	&AFabricaBloqueCuadrados::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaBloqueCuadrados_Statics::Class_MetaDataParams), Z_Construct_UClass_AFabricaBloqueCuadrados_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFabricaBloqueCuadrados()
{
	if (!Z_Registration_Info_UClass_AFabricaBloqueCuadrados.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFabricaBloqueCuadrados.OuterSingleton, Z_Construct_UClass_AFabricaBloqueCuadrados_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFabricaBloqueCuadrados.OuterSingleton;
}
template<> BOMBERMAN_12025_API UClass* StaticClass<AFabricaBloqueCuadrados>()
{
	return AFabricaBloqueCuadrados::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaBloqueCuadrados);
AFabricaBloqueCuadrados::~AFabricaBloqueCuadrados() {}
// End Class AFabricaBloqueCuadrados

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_FabricaBloqueCuadrados_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFabricaBloqueCuadrados, AFabricaBloqueCuadrados::StaticClass, TEXT("AFabricaBloqueCuadrados"), &Z_Registration_Info_UClass_AFabricaBloqueCuadrados, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFabricaBloqueCuadrados), 2682955024U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_FabricaBloqueCuadrados_h_574580060(TEXT("/Script/BomberMan_12025"),
	Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_FabricaBloqueCuadrados_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_FabricaBloqueCuadrados_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
