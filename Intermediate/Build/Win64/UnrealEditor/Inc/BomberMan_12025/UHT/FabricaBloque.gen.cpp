// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_12025/FabricaBloque.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaBloque() {}

// Begin Cross Module References
BOMBERMAN_12025_API UClass* Z_Construct_UClass_AFabricaBloque();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_AFabricaBloque_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_12025();
// End Cross Module References

// Begin Class AFabricaBloque
void AFabricaBloque::StaticRegisterNativesAFabricaBloque()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFabricaBloque);
UClass* Z_Construct_UClass_AFabricaBloque_NoRegister()
{
	return AFabricaBloque::StaticClass();
}
struct Z_Construct_UClass_AFabricaBloque_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FabricaBloque.h" },
		{ "ModuleRelativePath", "FabricaBloque.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaBloque>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFabricaBloque_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_12025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaBloque_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFabricaBloque_Statics::ClassParams = {
	&AFabricaBloque::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaBloque_Statics::Class_MetaDataParams), Z_Construct_UClass_AFabricaBloque_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFabricaBloque()
{
	if (!Z_Registration_Info_UClass_AFabricaBloque.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFabricaBloque.OuterSingleton, Z_Construct_UClass_AFabricaBloque_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFabricaBloque.OuterSingleton;
}
template<> BOMBERMAN_12025_API UClass* StaticClass<AFabricaBloque>()
{
	return AFabricaBloque::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaBloque);
AFabricaBloque::~AFabricaBloque() {}
// End Class AFabricaBloque

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_FabricaBloque_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFabricaBloque, AFabricaBloque::StaticClass, TEXT("AFabricaBloque"), &Z_Registration_Info_UClass_AFabricaBloque, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFabricaBloque), 1350296487U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_FabricaBloque_h_1068962285(TEXT("/Script/BomberMan_12025"),
	Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_FabricaBloque_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_FabricaBloque_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
