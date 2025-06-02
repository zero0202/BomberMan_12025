// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_12025/BomberMan_12025GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomberMan_12025GameMode() {}

// Begin Cross Module References
BOMBERMAN_12025_API UClass* Z_Construct_UClass_ABloque_NoRegister();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_ABomberMan_12025GameMode();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_ABomberMan_12025GameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BomberMan_12025();
// End Cross Module References

// Begin Class ABomberMan_12025GameMode
void ABomberMan_12025GameMode::StaticRegisterNativesABomberMan_12025GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABomberMan_12025GameMode);
UClass* Z_Construct_UClass_ABomberMan_12025GameMode_NoRegister()
{
	return ABomberMan_12025GameMode::StaticClass();
}
struct Z_Construct_UClass_ABomberMan_12025GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BomberMan_12025GameMode.h" },
		{ "ModuleRelativePath", "BomberMan_12025GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloquesA_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Para bloque\n" },
#endif
		{ "ModuleRelativePath", "BomberMan_12025GameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Para bloque" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BloquesA_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BloquesA;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomberMan_12025GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan_12025GameMode_Statics::NewProp_BloquesA_Inner = { "BloquesA", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABloque_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABomberMan_12025GameMode_Statics::NewProp_BloquesA = { "BloquesA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_12025GameMode, BloquesA), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloquesA_MetaData), NewProp_BloquesA_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABomberMan_12025GameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_12025GameMode_Statics::NewProp_BloquesA_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_12025GameMode_Statics::NewProp_BloquesA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_12025GameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABomberMan_12025GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_12025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_12025GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABomberMan_12025GameMode_Statics::ClassParams = {
	&ABomberMan_12025GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABomberMan_12025GameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_12025GameMode_Statics::PropPointers),
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_12025GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABomberMan_12025GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABomberMan_12025GameMode()
{
	if (!Z_Registration_Info_UClass_ABomberMan_12025GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABomberMan_12025GameMode.OuterSingleton, Z_Construct_UClass_ABomberMan_12025GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABomberMan_12025GameMode.OuterSingleton;
}
template<> BOMBERMAN_12025_API UClass* StaticClass<ABomberMan_12025GameMode>()
{
	return ABomberMan_12025GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABomberMan_12025GameMode);
ABomberMan_12025GameMode::~ABomberMan_12025GameMode() {}
// End Class ABomberMan_12025GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_BomberMan_12025GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABomberMan_12025GameMode, ABomberMan_12025GameMode::StaticClass, TEXT("ABomberMan_12025GameMode"), &Z_Registration_Info_UClass_ABomberMan_12025GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABomberMan_12025GameMode), 1778904562U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_BomberMan_12025GameMode_h_1637941661(TEXT("/Script/BomberMan_12025"),
	Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_BomberMan_12025GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_BomberMan_12025GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
