// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_12025/EnemigoTortuga.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoTortuga() {}

// Begin Cross Module References
BOMBERMAN_12025_API UClass* Z_Construct_UClass_AEnemigo();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_AEnemigoTortuga();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_AEnemigoTortuga_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_12025();
// End Cross Module References

// Begin Class AEnemigoTortuga
void AEnemigoTortuga::StaticRegisterNativesAEnemigoTortuga()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigoTortuga);
UClass* Z_Construct_UClass_AEnemigoTortuga_NoRegister()
{
	return AEnemigoTortuga::StaticClass();
}
struct Z_Construct_UClass_AEnemigoTortuga_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EnemigoTortuga.h" },
		{ "ModuleRelativePath", "EnemigoTortuga.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoTortuga>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemigoTortuga_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemigo,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_12025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoTortuga_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoTortuga_Statics::ClassParams = {
	&AEnemigoTortuga::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoTortuga_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigoTortuga_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigoTortuga()
{
	if (!Z_Registration_Info_UClass_AEnemigoTortuga.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigoTortuga.OuterSingleton, Z_Construct_UClass_AEnemigoTortuga_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigoTortuga.OuterSingleton;
}
template<> BOMBERMAN_12025_API UClass* StaticClass<AEnemigoTortuga>()
{
	return AEnemigoTortuga::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoTortuga);
AEnemigoTortuga::~AEnemigoTortuga() {}
// End Class AEnemigoTortuga

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_EnemigoTortuga_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigoTortuga, AEnemigoTortuga::StaticClass, TEXT("AEnemigoTortuga"), &Z_Registration_Info_UClass_AEnemigoTortuga, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigoTortuga), 912395090U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_EnemigoTortuga_h_3670096135(TEXT("/Script/BomberMan_12025"),
	Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_EnemigoTortuga_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_EnemigoTortuga_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
