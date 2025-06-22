// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_12025/MovimientoCircular.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovimientoCircular() {}

// Begin Cross Module References
BOMBERMAN_12025_API UClass* Z_Construct_UClass_AMovimientoCircular();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_AMovimientoCircular_NoRegister();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_UIMplementacion_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_12025();
// End Cross Module References

// Begin Class AMovimientoCircular
void AMovimientoCircular::StaticRegisterNativesAMovimientoCircular()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovimientoCircular);
UClass* Z_Construct_UClass_AMovimientoCircular_NoRegister()
{
	return AMovimientoCircular::StaticClass();
}
struct Z_Construct_UClass_AMovimientoCircular_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MovimientoCircular.h" },
		{ "ModuleRelativePath", "MovimientoCircular.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovimientoCircular>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMovimientoCircular_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_12025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovimientoCircular_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMovimientoCircular_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIMplementacion_NoRegister, (int32)VTABLE_OFFSET(AMovimientoCircular, IIMplementacion), false },  // 3553856589
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovimientoCircular_Statics::ClassParams = {
	&AMovimientoCircular::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovimientoCircular_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovimientoCircular_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMovimientoCircular()
{
	if (!Z_Registration_Info_UClass_AMovimientoCircular.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovimientoCircular.OuterSingleton, Z_Construct_UClass_AMovimientoCircular_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMovimientoCircular.OuterSingleton;
}
template<> BOMBERMAN_12025_API UClass* StaticClass<AMovimientoCircular>()
{
	return AMovimientoCircular::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMovimientoCircular);
AMovimientoCircular::~AMovimientoCircular() {}
// End Class AMovimientoCircular

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_MovimientoCircular_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMovimientoCircular, AMovimientoCircular::StaticClass, TEXT("AMovimientoCircular"), &Z_Registration_Info_UClass_AMovimientoCircular, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovimientoCircular), 1358297038U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_MovimientoCircular_h_2934081233(TEXT("/Script/BomberMan_12025"),
	Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_MovimientoCircular_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_MovimientoCircular_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
