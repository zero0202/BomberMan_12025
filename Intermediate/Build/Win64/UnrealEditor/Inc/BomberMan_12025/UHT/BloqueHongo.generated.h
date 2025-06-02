// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BloqueHongo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef BOMBERMAN_12025_BloqueHongo_generated_h
#error "BloqueHongo.generated.h already included, missing '#pragma once' in BloqueHongo.h"
#endif
#define BOMBERMAN_12025_BloqueHongo_generated_h

#define FID_BomberMan_12025_Source_BomberMan_12025_BloqueHongo_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_BomberMan_12025_Source_BomberMan_12025_BloqueHongo_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABloqueHongo(); \
	friend struct Z_Construct_UClass_ABloqueHongo_Statics; \
public: \
	DECLARE_CLASS(ABloqueHongo, ABloque, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BomberMan_12025"), NO_API) \
	DECLARE_SERIALIZER(ABloqueHongo) \
	virtual UObject* _getUObject() const override { return const_cast<ABloqueHongo*>(this); }


#define FID_BomberMan_12025_Source_BomberMan_12025_BloqueHongo_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABloqueHongo(ABloqueHongo&&); \
	ABloqueHongo(const ABloqueHongo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABloqueHongo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABloqueHongo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABloqueHongo) \
	NO_API virtual ~ABloqueHongo();


#define FID_BomberMan_12025_Source_BomberMan_12025_BloqueHongo_h_13_PROLOG
#define FID_BomberMan_12025_Source_BomberMan_12025_BloqueHongo_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BomberMan_12025_Source_BomberMan_12025_BloqueHongo_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BomberMan_12025_Source_BomberMan_12025_BloqueHongo_h_16_INCLASS_NO_PURE_DECLS \
	FID_BomberMan_12025_Source_BomberMan_12025_BloqueHongo_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN_12025_API UClass* StaticClass<class ABloqueHongo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BomberMan_12025_Source_BomberMan_12025_BloqueHongo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
