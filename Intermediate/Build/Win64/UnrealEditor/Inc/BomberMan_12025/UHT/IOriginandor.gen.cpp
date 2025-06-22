// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_12025/IOriginandor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOriginandor() {}

// Begin Cross Module References
BOMBERMAN_12025_API UClass* Z_Construct_UClass_UIOriginandor();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_UIOriginandor_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BomberMan_12025();
// End Cross Module References

// Begin Interface UIOriginandor
void UIOriginandor::StaticRegisterNativesUIOriginandor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIOriginandor);
UClass* Z_Construct_UClass_UIOriginandor_NoRegister()
{
	return UIOriginandor::StaticClass();
}
struct Z_Construct_UClass_UIOriginandor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IOriginandor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIOriginandor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIOriginandor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_12025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIOriginandor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIOriginandor_Statics::ClassParams = {
	&UIOriginandor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIOriginandor_Statics::Class_MetaDataParams), Z_Construct_UClass_UIOriginandor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIOriginandor()
{
	if (!Z_Registration_Info_UClass_UIOriginandor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIOriginandor.OuterSingleton, Z_Construct_UClass_UIOriginandor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIOriginandor.OuterSingleton;
}
template<> BOMBERMAN_12025_API UClass* StaticClass<UIOriginandor>()
{
	return UIOriginandor::StaticClass();
}
UIOriginandor::UIOriginandor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIOriginandor);
UIOriginandor::~UIOriginandor() {}
// End Interface UIOriginandor

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_IOriginandor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIOriginandor, UIOriginandor::StaticClass, TEXT("UIOriginandor"), &Z_Registration_Info_UClass_UIOriginandor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIOriginandor), 2162416020U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_IOriginandor_h_3856209964(TEXT("/Script/BomberMan_12025"),
	Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_IOriginandor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_IOriginandor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
