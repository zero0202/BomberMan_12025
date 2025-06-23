// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_12025/Emisor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmisor() {}

// Begin Cross Module References
BOMBERMAN_12025_API UClass* Z_Construct_UClass_AEmisor();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_AEmisor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_12025();
// End Cross Module References

// Begin Class AEmisor
void AEmisor::StaticRegisterNativesAEmisor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEmisor);
UClass* Z_Construct_UClass_AEmisor_NoRegister()
{
	return AEmisor::StaticClass();
}
struct Z_Construct_UClass_AEmisor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Emisor.h" },
		{ "ModuleRelativePath", "Emisor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEmisor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEmisor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_12025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEmisor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEmisor_Statics::ClassParams = {
	&AEmisor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEmisor_Statics::Class_MetaDataParams), Z_Construct_UClass_AEmisor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEmisor()
{
	if (!Z_Registration_Info_UClass_AEmisor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEmisor.OuterSingleton, Z_Construct_UClass_AEmisor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEmisor.OuterSingleton;
}
template<> BOMBERMAN_12025_API UClass* StaticClass<AEmisor>()
{
	return AEmisor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEmisor);
AEmisor::~AEmisor() {}
// End Class AEmisor

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_Emisor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEmisor, AEmisor::StaticClass, TEXT("AEmisor"), &Z_Registration_Info_UClass_AEmisor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEmisor), 2134589109U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_Emisor_h_1000139250(TEXT("/Script/BomberMan_12025"),
	Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_Emisor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_Emisor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
