// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_12025/MementoConcreto.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMementoConcreto() {}

// Begin Cross Module References
BOMBERMAN_12025_API UClass* Z_Construct_UClass_AMementoConcreto();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_AMementoConcreto_NoRegister();
BOMBERMAN_12025_API UClass* Z_Construct_UClass_UIMemento_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_12025();
// End Cross Module References

// Begin Class AMementoConcreto
void AMementoConcreto::StaticRegisterNativesAMementoConcreto()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMementoConcreto);
UClass* Z_Construct_UClass_AMementoConcreto_NoRegister()
{
	return AMementoConcreto::StaticClass();
}
struct Z_Construct_UClass_AMementoConcreto_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MementoConcreto.h" },
		{ "ModuleRelativePath", "MementoConcreto.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMementoConcreto>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMementoConcreto_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_12025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMementoConcreto_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMementoConcreto_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIMemento_NoRegister, (int32)VTABLE_OFFSET(AMementoConcreto, IIMemento), false },  // 1618526059
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMementoConcreto_Statics::ClassParams = {
	&AMementoConcreto::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMementoConcreto_Statics::Class_MetaDataParams), Z_Construct_UClass_AMementoConcreto_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMementoConcreto()
{
	if (!Z_Registration_Info_UClass_AMementoConcreto.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMementoConcreto.OuterSingleton, Z_Construct_UClass_AMementoConcreto_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMementoConcreto.OuterSingleton;
}
template<> BOMBERMAN_12025_API UClass* StaticClass<AMementoConcreto>()
{
	return AMementoConcreto::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMementoConcreto);
AMementoConcreto::~AMementoConcreto() {}
// End Class AMementoConcreto

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_MementoConcreto_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMementoConcreto, AMementoConcreto::StaticClass, TEXT("AMementoConcreto"), &Z_Registration_Info_UClass_AMementoConcreto, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMementoConcreto), 125463812U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_MementoConcreto_h_1991551481(TEXT("/Script/BomberMan_12025"),
	Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_MementoConcreto_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_12025_Source_BomberMan_12025_MementoConcreto_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
