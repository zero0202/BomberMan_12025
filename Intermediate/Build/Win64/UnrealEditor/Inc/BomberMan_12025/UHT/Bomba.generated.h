// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Bomba.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN_12025_Bomba_generated_h
#error "Bomba.generated.h already included, missing '#pragma once' in Bomba.h"
#endif
#define BOMBERMAN_12025_Bomba_generated_h

#define FID_BomberMan_12025_Source_BomberMan_12025_Bomba_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABomba(); \
	friend struct Z_Construct_UClass_ABomba_Statics; \
public: \
	DECLARE_CLASS(ABomba, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BomberMan_12025"), NO_API) \
	DECLARE_SERIALIZER(ABomba)


#define FID_BomberMan_12025_Source_BomberMan_12025_Bomba_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABomba(ABomba&&); \
	ABomba(const ABomba&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABomba); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABomba); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABomba) \
	NO_API virtual ~ABomba();


#define FID_BomberMan_12025_Source_BomberMan_12025_Bomba_h_9_PROLOG
#define FID_BomberMan_12025_Source_BomberMan_12025_Bomba_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BomberMan_12025_Source_BomberMan_12025_Bomba_h_12_INCLASS_NO_PURE_DECLS \
	FID_BomberMan_12025_Source_BomberMan_12025_Bomba_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN_12025_API UClass* StaticClass<class ABomba>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BomberMan_12025_Source_BomberMan_12025_Bomba_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
