// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_12025/BloqueElectrico.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueElectrico() {}

// Begin Cross Module References
BOMBERMAN_12025_API UClass* Z_Construct_UClass_ABloque();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_ABloqueElectrico();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_ABloqueElectrico_NoRegister();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_UIPrototypeBloque_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_12025();
// End Cross Module References

// Begin Class ABloqueElectrico
void ABloqueElectrico::StaticRegisterNativesABloqueElectrico()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueElectrico);
UClass* Z_Construct_UClass_ABloqueElectrico_NoRegister()
{
	return ABloqueElectrico::StaticClass();
}
struct Z_Construct_UClass_ABloqueElectrico_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueElectrico.h" },
		{ "ModuleRelativePath", "BloqueElectrico.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueElectrico>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueElectrico_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_12025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueElectrico_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABloqueElectrico_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIPrototypeBloque_NoRegister, (int32)VTABLE_OFFSET(ABloqueElectrico, IIPrototypeBloque), false },  // 2221044317
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueElectrico_Statics::ClassParams = {
	&ABloqueElectrico::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueElectrico_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueElectrico_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueElectrico()
{
	if (!Z_Registration_Info_UClass_ABloqueElectrico.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueElectrico.OuterSingleton, Z_Construct_UClass_ABloqueElectrico_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueElectrico.OuterSingleton;
}
template<> BOMBERMAN_12025_API UClass* StaticClass<ABloqueElectrico>()
{
	return ABloqueElectrico::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueElectrico);
ABloqueElectrico::~ABloqueElectrico() {}
// End Class ABloqueElectrico

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_BloqueElectrico_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueElectrico, ABloqueElectrico::StaticClass, TEXT("ABloqueElectrico"), &Z_Registration_Info_UClass_ABloqueElectrico, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueElectrico), 598484878U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_BloqueElectrico_h_1349859638(TEXT("/Script/BomberMan_12025"),
	Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_BloqueElectrico_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_BloqueElectrico_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
