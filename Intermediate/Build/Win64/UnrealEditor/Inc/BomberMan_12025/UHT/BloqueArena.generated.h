// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BloqueArena.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef BOMBERMAN_12025_BloqueArena_generated_h
#error "BloqueArena.generated.h already included, missing '#pragma once' in BloqueArena.h"
#endif
#define BOMBERMAN_12025_BloqueArena_generated_h

#define FID_BomberMan_12025_Source_BomberMan_12025_BloqueArena_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_BomberMan_12025_Source_BomberMan_12025_BloqueArena_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABloqueArena(); \
	friend struct Z_Construct_UClass_ABloqueArena_Statics; \
public: \
	DECLARE_CLASS(ABloqueArena, ABloque, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BomberMan_12025"), NO_API) \
	DECLARE_SERIALIZER(ABloqueArena)


#define FID_BomberMan_12025_Source_BomberMan_12025_BloqueArena_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABloqueArena(ABloqueArena&&); \
	ABloqueArena(const ABloqueArena&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABloqueArena); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABloqueArena); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABloqueArena) \
	NO_API virtual ~ABloqueArena();


#define FID_BomberMan_12025_Source_BomberMan_12025_BloqueArena_h_12_PROLOG
#define FID_BomberMan_12025_Source_BomberMan_12025_BloqueArena_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BomberMan_12025_Source_BomberMan_12025_BloqueArena_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BomberMan_12025_Source_BomberMan_12025_BloqueArena_h_15_INCLASS_NO_PURE_DECLS \
	FID_BomberMan_12025_Source_BomberMan_12025_BloqueArena_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN_12025_API UClass* StaticClass<class ABloqueArena>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BomberMan_12025_Source_BomberMan_12025_BloqueArena_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
