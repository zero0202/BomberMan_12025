// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DecoradorEnemigo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN_12025_DecoradorEnemigo_generated_h
#error "DecoradorEnemigo.generated.h already included, missing '#pragma once' in DecoradorEnemigo.h"
#endif
#define BOMBERMAN_12025_DecoradorEnemigo_generated_h

#define FID_BomberMan_12025_Source_BomberMan_12025_DecoradorEnemigo_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADecoradorEnemigo(); \
	friend struct Z_Construct_UClass_ADecoradorEnemigo_Statics; \
public: \
	DECLARE_CLASS(ADecoradorEnemigo, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BomberMan_12025"), NO_API) \
	DECLARE_SERIALIZER(ADecoradorEnemigo) \
	virtual UObject* _getUObject() const override { return const_cast<ADecoradorEnemigo*>(this); }


#define FID_BomberMan_12025_Source_BomberMan_12025_DecoradorEnemigo_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADecoradorEnemigo(ADecoradorEnemigo&&); \
	ADecoradorEnemigo(const ADecoradorEnemigo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADecoradorEnemigo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADecoradorEnemigo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADecoradorEnemigo) \
	NO_API virtual ~ADecoradorEnemigo();


#define FID_BomberMan_12025_Source_BomberMan_12025_DecoradorEnemigo_h_10_PROLOG
#define FID_BomberMan_12025_Source_BomberMan_12025_DecoradorEnemigo_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BomberMan_12025_Source_BomberMan_12025_DecoradorEnemigo_h_13_INCLASS_NO_PURE_DECLS \
	FID_BomberMan_12025_Source_BomberMan_12025_DecoradorEnemigo_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN_12025_API UClass* StaticClass<class ADecoradorEnemigo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BomberMan_12025_Source_BomberMan_12025_DecoradorEnemigo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
