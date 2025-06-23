// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_12025/BombaBlancaConcreta.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBombaBlancaConcreta() {}

// Begin Cross Module References
BOMBERMAN_12025_API UClass* Z_Construct_UClass_ABombaBlancaConcreta();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_ABombaBlancaConcreta_NoRegister();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_UIComand_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_12025();
// End Cross Module References

// Begin Class ABombaBlancaConcreta
void ABombaBlancaConcreta::StaticRegisterNativesABombaBlancaConcreta()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABombaBlancaConcreta);
UClass* Z_Construct_UClass_ABombaBlancaConcreta_NoRegister()
{
	return ABombaBlancaConcreta::StaticClass();
}
struct Z_Construct_UClass_ABombaBlancaConcreta_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BombaBlancaConcreta.h" },
		{ "ModuleRelativePath", "BombaBlancaConcreta.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABombaBlancaConcreta>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABombaBlancaConcreta_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_12025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABombaBlancaConcreta_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABombaBlancaConcreta_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIComand_NoRegister, (int32)VTABLE_OFFSET(ABombaBlancaConcreta, IIComand), false },  // 4254921848
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABombaBlancaConcreta_Statics::ClassParams = {
	&ABombaBlancaConcreta::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABombaBlancaConcreta_Statics::Class_MetaDataParams), Z_Construct_UClass_ABombaBlancaConcreta_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABombaBlancaConcreta()
{
	if (!Z_Registration_Info_UClass_ABombaBlancaConcreta.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABombaBlancaConcreta.OuterSingleton, Z_Construct_UClass_ABombaBlancaConcreta_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABombaBlancaConcreta.OuterSingleton;
}
template<> BOMBERMAN_12025_API UClass* StaticClass<ABombaBlancaConcreta>()
{
	return ABombaBlancaConcreta::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABombaBlancaConcreta);
ABombaBlancaConcreta::~ABombaBlancaConcreta() {}
// End Class ABombaBlancaConcreta

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_BombaBlancaConcreta_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABombaBlancaConcreta, ABombaBlancaConcreta::StaticClass, TEXT("ABombaBlancaConcreta"), &Z_Registration_Info_UClass_ABombaBlancaConcreta, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABombaBlancaConcreta), 2024373625U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_BombaBlancaConcreta_h_922037670(TEXT("/Script/BomberMan_12025"),
	Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_BombaBlancaConcreta_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_BombaBlancaConcreta_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
