// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_12025/IMemento.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMemento() {}

// Begin Cross Module References
BOMBERMAN_12025_API UClass* Z_Construct_UClass_UIMemento();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_UIMemento_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BomberMan_12025();
// End Cross Module References

// Begin Interface UIMemento
void UIMemento::StaticRegisterNativesUIMemento()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIMemento);
UClass* Z_Construct_UClass_UIMemento_NoRegister()
{
	return UIMemento::StaticClass();
}
struct Z_Construct_UClass_UIMemento_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IMemento.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIMemento>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIMemento_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_12025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIMemento_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIMemento_Statics::ClassParams = {
	&UIMemento::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMemento_Statics::Class_MetaDataParams), Z_Construct_UClass_UIMemento_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIMemento()
{
	if (!Z_Registration_Info_UClass_UIMemento.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIMemento.OuterSingleton, Z_Construct_UClass_UIMemento_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIMemento.OuterSingleton;
}
template<> BOMBERMAN_12025_API UClass* StaticClass<UIMemento>()
{
	return UIMemento::StaticClass();
}
UIMemento::UIMemento(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIMemento);
UIMemento::~UIMemento() {}
// End Interface UIMemento

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_IMemento_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIMemento, UIMemento::StaticClass, TEXT("UIMemento"), &Z_Registration_Info_UClass_UIMemento, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIMemento), 1618526059U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_IMemento_h_493350878(TEXT("/Script/BomberMan_12025"),
	Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_IMemento_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_IMemento_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
