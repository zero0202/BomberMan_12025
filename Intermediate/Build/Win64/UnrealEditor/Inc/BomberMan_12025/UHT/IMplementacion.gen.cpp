// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_12025/IMplementacion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMplementacion() {}

// Begin Cross Module References
BOMBERMAN_12025_API UClass* Z_Construct_UClass_UIMplementacion();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_UIMplementacion_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BomberMan_12025();
// End Cross Module References

// Begin Interface UIMplementacion
void UIMplementacion::StaticRegisterNativesUIMplementacion()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIMplementacion);
UClass* Z_Construct_UClass_UIMplementacion_NoRegister()
{
	return UIMplementacion::StaticClass();
}
struct Z_Construct_UClass_UIMplementacion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IMplementacion.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIMplementacion>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIMplementacion_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_12025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIMplementacion_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIMplementacion_Statics::ClassParams = {
	&UIMplementacion::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMplementacion_Statics::Class_MetaDataParams), Z_Construct_UClass_UIMplementacion_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIMplementacion()
{
	if (!Z_Registration_Info_UClass_UIMplementacion.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIMplementacion.OuterSingleton, Z_Construct_UClass_UIMplementacion_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIMplementacion.OuterSingleton;
}
template<> BOMBERMAN_12025_API UClass* StaticClass<UIMplementacion>()
{
	return UIMplementacion::StaticClass();
}
UIMplementacion::UIMplementacion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIMplementacion);
UIMplementacion::~UIMplementacion() {}
// End Interface UIMplementacion

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_IMplementacion_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIMplementacion, UIMplementacion::StaticClass, TEXT("UIMplementacion"), &Z_Registration_Info_UClass_UIMplementacion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIMplementacion), 3553856589U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_IMplementacion_h_613058264(TEXT("/Script/BomberMan_12025"),
	Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_IMplementacion_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_IMplementacion_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
