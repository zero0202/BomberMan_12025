// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_12025/BombaBlanco.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBombaBlanco() {}

// Begin Cross Module References
BOMBERMAN_12025_API UClass* Z_Construct_UClass_ABomba();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_ABombaBlanco();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_ABombaBlanco_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_12025();
// End Cross Module References

// Begin Class ABombaBlanco
void ABombaBlanco::StaticRegisterNativesABombaBlanco()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABombaBlanco);
UClass* Z_Construct_UClass_ABombaBlanco_NoRegister()
{
	return ABombaBlanco::StaticClass();
}
struct Z_Construct_UClass_ABombaBlanco_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BombaBlanco.h" },
		{ "ModuleRelativePath", "BombaBlanco.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABombaBlanco>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABombaBlanco_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABomba,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_12025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABombaBlanco_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABombaBlanco_Statics::ClassParams = {
	&ABombaBlanco::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABombaBlanco_Statics::Class_MetaDataParams), Z_Construct_UClass_ABombaBlanco_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABombaBlanco()
{
	if (!Z_Registration_Info_UClass_ABombaBlanco.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABombaBlanco.OuterSingleton, Z_Construct_UClass_ABombaBlanco_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABombaBlanco.OuterSingleton;
}
template<> BOMBERMAN_12025_API UClass* StaticClass<ABombaBlanco>()
{
	return ABombaBlanco::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABombaBlanco);
ABombaBlanco::~ABombaBlanco() {}
// End Class ABombaBlanco

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_BombaBlanco_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABombaBlanco, ABombaBlanco::StaticClass, TEXT("ABombaBlanco"), &Z_Registration_Info_UClass_ABombaBlanco, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABombaBlanco), 1803501266U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_BombaBlanco_h_782368507(TEXT("/Script/BomberMan_12025"),
	Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_BombaBlanco_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_BombaBlanco_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
