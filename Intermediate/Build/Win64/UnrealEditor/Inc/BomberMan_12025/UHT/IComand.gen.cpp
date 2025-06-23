// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_12025/IComand.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIComand() {}

// Begin Cross Module References
BOMBERMAN_12025_API UClass* Z_Construct_UClass_UIComand();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_UIComand_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BomberMan_12025();
// End Cross Module References

// Begin Interface UIComand
void UIComand::StaticRegisterNativesUIComand()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIComand);
UClass* Z_Construct_UClass_UIComand_NoRegister()
{
	return UIComand::StaticClass();
}
struct Z_Construct_UClass_UIComand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IComand.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIComand>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIComand_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_12025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIComand_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIComand_Statics::ClassParams = {
	&UIComand::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIComand_Statics::Class_MetaDataParams), Z_Construct_UClass_UIComand_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIComand()
{
	if (!Z_Registration_Info_UClass_UIComand.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIComand.OuterSingleton, Z_Construct_UClass_UIComand_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIComand.OuterSingleton;
}
template<> BOMBERMAN_12025_API UClass* StaticClass<UIComand>()
{
	return UIComand::StaticClass();
}
UIComand::UIComand(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIComand);
UIComand::~UIComand() {}
// End Interface UIComand

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_IComand_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIComand, UIComand::StaticClass, TEXT("UIComand"), &Z_Registration_Info_UClass_UIComand, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIComand), 4254921848U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_IComand_h_678962517(TEXT("/Script/BomberMan_12025"),
	Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_IComand_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_IComand_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
