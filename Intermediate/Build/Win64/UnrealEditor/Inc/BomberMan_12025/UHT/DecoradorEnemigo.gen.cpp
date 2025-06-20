// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_12025/DecoradorEnemigo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDecoradorEnemigo() {}

// Begin Cross Module References
BOMBERMAN_12025_API UClass* Z_Construct_UClass_ADecoradorEnemigo();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_ADecoradorEnemigo_NoRegister();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_UIComponente_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_12025();
// End Cross Module References

// Begin Class ADecoradorEnemigo
void ADecoradorEnemigo::StaticRegisterNativesADecoradorEnemigo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADecoradorEnemigo);
UClass* Z_Construct_UClass_ADecoradorEnemigo_NoRegister()
{
	return ADecoradorEnemigo::StaticClass();
}
struct Z_Construct_UClass_ADecoradorEnemigo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DecoradorEnemigo.h" },
		{ "ModuleRelativePath", "DecoradorEnemigo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADecoradorEnemigo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADecoradorEnemigo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_12025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADecoradorEnemigo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADecoradorEnemigo_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIComponente_NoRegister, (int32)VTABLE_OFFSET(ADecoradorEnemigo, IIComponente), false },  // 3404882091
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADecoradorEnemigo_Statics::ClassParams = {
	&ADecoradorEnemigo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADecoradorEnemigo_Statics::Class_MetaDataParams), Z_Construct_UClass_ADecoradorEnemigo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADecoradorEnemigo()
{
	if (!Z_Registration_Info_UClass_ADecoradorEnemigo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADecoradorEnemigo.OuterSingleton, Z_Construct_UClass_ADecoradorEnemigo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADecoradorEnemigo.OuterSingleton;
}
template<> BOMBERMAN_12025_API UClass* StaticClass<ADecoradorEnemigo>()
{
	return ADecoradorEnemigo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADecoradorEnemigo);
ADecoradorEnemigo::~ADecoradorEnemigo() {}
// End Class ADecoradorEnemigo

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_DecoradorEnemigo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADecoradorEnemigo, ADecoradorEnemigo::StaticClass, TEXT("ADecoradorEnemigo"), &Z_Registration_Info_UClass_ADecoradorEnemigo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADecoradorEnemigo), 3020106663U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_DecoradorEnemigo_h_1863000464(TEXT("/Script/BomberMan_12025"),
	Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_DecoradorEnemigo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_DecoradorEnemigo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
