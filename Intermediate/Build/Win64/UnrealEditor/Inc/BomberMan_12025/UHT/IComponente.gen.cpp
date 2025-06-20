// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_12025/IComponente.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIComponente() {}

// Begin Cross Module References
BOMBERMAN_12025_API UClass* Z_Construct_UClass_UIComponente();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_UIComponente_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BomberMan_12025();
// End Cross Module References

// Begin Interface UIComponente
void UIComponente::StaticRegisterNativesUIComponente()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIComponente);
UClass* Z_Construct_UClass_UIComponente_NoRegister()
{
	return UIComponente::StaticClass();
}
struct Z_Construct_UClass_UIComponente_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IComponente.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIComponente>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIComponente_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_12025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIComponente_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIComponente_Statics::ClassParams = {
	&UIComponente::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIComponente_Statics::Class_MetaDataParams), Z_Construct_UClass_UIComponente_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIComponente()
{
	if (!Z_Registration_Info_UClass_UIComponente.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIComponente.OuterSingleton, Z_Construct_UClass_UIComponente_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIComponente.OuterSingleton;
}
template<> BOMBERMAN_12025_API UClass* StaticClass<UIComponente>()
{
	return UIComponente::StaticClass();
}
UIComponente::UIComponente(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIComponente);
UIComponente::~UIComponente() {}
// End Interface UIComponente

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_IComponente_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIComponente, UIComponente::StaticClass, TEXT("UIComponente"), &Z_Registration_Info_UClass_UIComponente, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIComponente), 3404882091U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_IComponente_h_1444441707(TEXT("/Script/BomberMan_12025"),
	Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_IComponente_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_IComponente_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
