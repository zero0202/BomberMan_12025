// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_12025/BombaNegro.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBombaNegro() {}

// Begin Cross Module References
BOMBERMAN_12025_API UClass* Z_Construct_UClass_ABomba();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_ABombaNegro();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_ABombaNegro_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_12025();
// End Cross Module References

// Begin Class ABombaNegro
void ABombaNegro::StaticRegisterNativesABombaNegro()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABombaNegro);
UClass* Z_Construct_UClass_ABombaNegro_NoRegister()
{
	return ABombaNegro::StaticClass();
}
struct Z_Construct_UClass_ABombaNegro_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BombaNegro.h" },
		{ "ModuleRelativePath", "BombaNegro.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABombaNegro>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABombaNegro_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABomba,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_12025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABombaNegro_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABombaNegro_Statics::ClassParams = {
	&ABombaNegro::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABombaNegro_Statics::Class_MetaDataParams), Z_Construct_UClass_ABombaNegro_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABombaNegro()
{
	if (!Z_Registration_Info_UClass_ABombaNegro.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABombaNegro.OuterSingleton, Z_Construct_UClass_ABombaNegro_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABombaNegro.OuterSingleton;
}
template<> BOMBERMAN_12025_API UClass* StaticClass<ABombaNegro>()
{
	return ABombaNegro::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABombaNegro);
ABombaNegro::~ABombaNegro() {}
// End Class ABombaNegro

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_BombaNegro_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABombaNegro, ABombaNegro::StaticClass, TEXT("ABombaNegro"), &Z_Registration_Info_UClass_ABombaNegro, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABombaNegro), 309978511U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_BombaNegro_h_3477340907(TEXT("/Script/BomberMan_12025"),
	Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_BombaNegro_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_BombaNegro_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
