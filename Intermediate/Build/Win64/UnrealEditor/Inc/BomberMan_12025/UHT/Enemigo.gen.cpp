// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_12025/Enemigo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigo() {}

// Begin Cross Module References
BOMBERMAN_12025_API UClass* Z_Construct_UClass_AEnemigo();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_AEnemigo_NoRegister();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_UIComponente_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_12025();
// End Cross Module References

// Begin Class AEnemigo
void AEnemigo::StaticRegisterNativesAEnemigo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigo);
UClass* Z_Construct_UClass_AEnemigo_NoRegister()
{
	return AEnemigo::StaticClass();
}
struct Z_Construct_UClass_AEnemigo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Enemigo.h" },
		{ "ModuleRelativePath", "Enemigo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshEnemigo_MetaData[] = {
		{ "Category", "Enemigo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemigo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleSystem_MetaData[] = {
		{ "Category", "Enemigo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemigo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshEnemigo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleSystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigo_Statics::NewProp_MeshEnemigo = { "MeshEnemigo", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigo, MeshEnemigo), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshEnemigo_MetaData), NewProp_MeshEnemigo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigo_Statics::NewProp_ParticleSystem = { "ParticleSystem", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigo, ParticleSystem), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleSystem_MetaData), NewProp_ParticleSystem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Statics::NewProp_MeshEnemigo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Statics::NewProp_ParticleSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemigo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_12025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEnemigo_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIComponente_NoRegister, (int32)VTABLE_OFFSET(AEnemigo, IIComponente), false },  // 3404882091
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigo_Statics::ClassParams = {
	&AEnemigo::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEnemigo_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigo()
{
	if (!Z_Registration_Info_UClass_AEnemigo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigo.OuterSingleton, Z_Construct_UClass_AEnemigo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigo.OuterSingleton;
}
template<> BOMBERMAN_12025_API UClass* StaticClass<AEnemigo>()
{
	return AEnemigo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigo);
AEnemigo::~AEnemigo() {}
// End Class AEnemigo

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_Enemigo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigo, AEnemigo::StaticClass, TEXT("AEnemigo"), &Z_Registration_Info_UClass_AEnemigo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigo), 4285220826U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_Enemigo_h_3144187207(TEXT("/Script/BomberMan_12025"),
	Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_Enemigo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_Enemigo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
