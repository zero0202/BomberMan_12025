// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_12025/FabricaBloqueRedondos.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaBloqueRedondos() {}

// Begin Cross Module References
BOMBERMAN_12025_API UClass* Z_Construct_UClass_AFabricaBloque();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_AFabricaBloqueRedondos();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_AFabricaBloqueRedondos_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_12025();
// End Cross Module References

// Begin Class AFabricaBloqueRedondos
void AFabricaBloqueRedondos::StaticRegisterNativesAFabricaBloqueRedondos()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFabricaBloqueRedondos);
UClass* Z_Construct_UClass_AFabricaBloqueRedondos_NoRegister()
{
	return AFabricaBloqueRedondos::StaticClass();
}
struct Z_Construct_UClass_AFabricaBloqueRedondos_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "FabricaBloqueRedondos.h" },
		{ "ModuleRelativePath", "FabricaBloqueRedondos.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaBloqueRedondos>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFabricaBloqueRedondos_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AFabricaBloque,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_12025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaBloqueRedondos_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFabricaBloqueRedondos_Statics::ClassParams = {
	&AFabricaBloqueRedondos::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaBloqueRedondos_Statics::Class_MetaDataParams), Z_Construct_UClass_AFabricaBloqueRedondos_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFabricaBloqueRedondos()
{
	if (!Z_Registration_Info_UClass_AFabricaBloqueRedondos.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFabricaBloqueRedondos.OuterSingleton, Z_Construct_UClass_AFabricaBloqueRedondos_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFabricaBloqueRedondos.OuterSingleton;
}
template<> BOMBERMAN_12025_API UClass* StaticClass<AFabricaBloqueRedondos>()
{
	return AFabricaBloqueRedondos::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaBloqueRedondos);
AFabricaBloqueRedondos::~AFabricaBloqueRedondos() {}
// End Class AFabricaBloqueRedondos

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_FabricaBloqueRedondos_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFabricaBloqueRedondos, AFabricaBloqueRedondos::StaticClass, TEXT("AFabricaBloqueRedondos"), &Z_Registration_Info_UClass_AFabricaBloqueRedondos, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFabricaBloqueRedondos), 3128400062U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_FabricaBloqueRedondos_h_1121390448(TEXT("/Script/BomberMan_12025"),
	Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_FabricaBloqueRedondos_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_FabricaBloqueRedondos_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
