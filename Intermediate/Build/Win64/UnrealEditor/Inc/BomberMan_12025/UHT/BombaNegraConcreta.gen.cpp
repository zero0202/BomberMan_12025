// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_12025/BombaNegraConcreta.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBombaNegraConcreta() {}

// Begin Cross Module References
BOMBERMAN_12025_API UClass* Z_Construct_UClass_ABombaNegraConcreta();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_ABombaNegraConcreta_NoRegister();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_UIComand_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_12025();
// End Cross Module References

// Begin Class ABombaNegraConcreta
void ABombaNegraConcreta::StaticRegisterNativesABombaNegraConcreta()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABombaNegraConcreta);
UClass* Z_Construct_UClass_ABombaNegraConcreta_NoRegister()
{
	return ABombaNegraConcreta::StaticClass();
}
struct Z_Construct_UClass_ABombaNegraConcreta_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BombaNegraConcreta.h" },
		{ "ModuleRelativePath", "BombaNegraConcreta.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABombaNegraConcreta>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABombaNegraConcreta_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_12025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABombaNegraConcreta_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABombaNegraConcreta_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIComand_NoRegister, (int32)VTABLE_OFFSET(ABombaNegraConcreta, IIComand), false },  // 4254921848
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABombaNegraConcreta_Statics::ClassParams = {
	&ABombaNegraConcreta::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABombaNegraConcreta_Statics::Class_MetaDataParams), Z_Construct_UClass_ABombaNegraConcreta_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABombaNegraConcreta()
{
	if (!Z_Registration_Info_UClass_ABombaNegraConcreta.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABombaNegraConcreta.OuterSingleton, Z_Construct_UClass_ABombaNegraConcreta_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABombaNegraConcreta.OuterSingleton;
}
template<> BOMBERMAN_12025_API UClass* StaticClass<ABombaNegraConcreta>()
{
	return ABombaNegraConcreta::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABombaNegraConcreta);
ABombaNegraConcreta::~ABombaNegraConcreta() {}
// End Class ABombaNegraConcreta

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_BombaNegraConcreta_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABombaNegraConcreta, ABombaNegraConcreta::StaticClass, TEXT("ABombaNegraConcreta"), &Z_Registration_Info_UClass_ABombaNegraConcreta, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABombaNegraConcreta), 1644860081U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_BombaNegraConcreta_h_4269918620(TEXT("/Script/BomberMan_12025"),
	Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_BombaNegraConcreta_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_BombaNegraConcreta_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
