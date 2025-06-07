// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_12025/Bloque.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloque() {}

// Begin Cross Module References
BOMBERMAN_12025_API UClass* Z_Construct_UClass_ABloque();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_ABloque_NoRegister();
BOMBERMAN_12025_API UEnum* Z_Construct_UEnum_BomberMan_12025_EBloqueTipo();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_12025();
// End Cross Module References

// Begin Enum EBloqueTipo
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBloqueTipo;
static UEnum* EBloqueTipo_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBloqueTipo.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBloqueTipo.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BomberMan_12025_EBloqueTipo, (UObject*)Z_Construct_UPackage__Script_BomberMan_12025(), TEXT("EBloqueTipo"));
	}
	return Z_Registration_Info_UEnum_EBloqueTipo.OuterSingleton;
}
template<> BOMBERMAN_12025_API UEnum* StaticEnum<EBloqueTipo>()
{
	return EBloqueTipo_StaticEnum();
}
struct Z_Construct_UEnum_BomberMan_12025_EBloqueTipo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Acero.DisplayName", "Acero" },
		{ "Acero.Name", "EBloqueTipo::Acero" },
		{ "Arena.DisplayName", "Arena" },
		{ "Arena.Name", "EBloqueTipo::Arena" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enumeracion definida \n" },
#endif
		{ "Concreto.DisplayName", "Concreto" },
		{ "Concreto.Name", "EBloqueTipo::Concreto" },
		{ "Electrico.DisplayName", "Electrico" },
		{ "Electrico.Name", "EBloqueTipo::Electrico" },
		{ "Hielo.DisplayName", "Hielo" },
		{ "Hielo.Name", "EBloqueTipo::Hielo" },
		{ "Hongo.DisplayName", "Hongo" },
		{ "Hongo.Name", "EBloqueTipo::Hongo" },
		{ "Ladrillo.DisplayName", "Ladrillo" },
		{ "Ladrillo.Name", "EBloqueTipo::Ladrillo" },
		{ "Lava.DisplayName", "Lava" },
		{ "Lava.Name", "EBloqueTipo::Lava" },
		{ "Madera.DisplayName", "Madera" },
		{ "Madera.Name", "EBloqueTipo::Madera" },
		{ "ModuleRelativePath", "Bloque.h" },
		{ "Pegajoso.DisplayName", "Pegajoso" },
		{ "Pegajoso.Name", "EBloqueTipo::Pegajoso" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumeracion definida" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBloqueTipo::Madera", (int64)EBloqueTipo::Madera },
		{ "EBloqueTipo::Concreto", (int64)EBloqueTipo::Concreto },
		{ "EBloqueTipo::Ladrillo", (int64)EBloqueTipo::Ladrillo },
		{ "EBloqueTipo::Acero", (int64)EBloqueTipo::Acero },
		{ "EBloqueTipo::Lava", (int64)EBloqueTipo::Lava },
		{ "EBloqueTipo::Hielo", (int64)EBloqueTipo::Hielo },
		{ "EBloqueTipo::Electrico", (int64)EBloqueTipo::Electrico },
		{ "EBloqueTipo::Arena", (int64)EBloqueTipo::Arena },
		{ "EBloqueTipo::Hongo", (int64)EBloqueTipo::Hongo },
		{ "EBloqueTipo::Pegajoso", (int64)EBloqueTipo::Pegajoso },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BomberMan_12025_EBloqueTipo_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BomberMan_12025,
	nullptr,
	"EBloqueTipo",
	"EBloqueTipo",
	Z_Construct_UEnum_BomberMan_12025_EBloqueTipo_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BomberMan_12025_EBloqueTipo_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BomberMan_12025_EBloqueTipo_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BomberMan_12025_EBloqueTipo_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BomberMan_12025_EBloqueTipo()
{
	if (!Z_Registration_Info_UEnum_EBloqueTipo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBloqueTipo.InnerSingleton, Z_Construct_UEnum_BomberMan_12025_EBloqueTipo_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBloqueTipo.InnerSingleton;
}
// End Enum EBloqueTipo

// Begin Class ABloque
void ABloque::StaticRegisterNativesABloque()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloque);
UClass* Z_Construct_UClass_ABloque_NoRegister()
{
	return ABloque::StaticClass();
}
struct Z_Construct_UClass_ABloque_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Bloque.h" },
		{ "ModuleRelativePath", "Bloque.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshBloque_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//malla del bloque\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Bloque.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "malla del bloque" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Particulas_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Bloque.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshBloque;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Particulas;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloque>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloque_Statics::NewProp_MeshBloque = { "MeshBloque", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloque, MeshBloque), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshBloque_MetaData), NewProp_MeshBloque_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloque_Statics::NewProp_Particulas = { "Particulas", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloque, Particulas), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Particulas_MetaData), NewProp_Particulas_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloque_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloque_Statics::NewProp_MeshBloque,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloque_Statics::NewProp_Particulas,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloque_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_12025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloque_Statics::ClassParams = {
	&ABloque::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloque_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloque_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloque()
{
	if (!Z_Registration_Info_UClass_ABloque.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloque.OuterSingleton, Z_Construct_UClass_ABloque_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloque.OuterSingleton;
}
template<> BOMBERMAN_12025_API UClass* StaticClass<ABloque>()
{
	return ABloque::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloque);
ABloque::~ABloque() {}
// End Class ABloque

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_Bloque_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBloqueTipo_StaticEnum, TEXT("EBloqueTipo"), &Z_Registration_Info_UEnum_EBloqueTipo, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2260843510U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloque, ABloque::StaticClass, TEXT("ABloque"), &Z_Registration_Info_UClass_ABloque, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloque), 1565274856U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_Bloque_h_672629485(TEXT("/Script/BomberMan_12025"),
	Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_Bloque_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_Bloque_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_Bloque_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_Bloque_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
