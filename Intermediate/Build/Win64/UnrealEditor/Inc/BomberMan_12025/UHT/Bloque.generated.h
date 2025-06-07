// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Bloque.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN_12025_Bloque_generated_h
#error "Bloque.generated.h already included, missing '#pragma once' in Bloque.h"
#endif
#define BOMBERMAN_12025_Bloque_generated_h

#define FID_BomberMan_12025_Source_BomberMan_12025_Bloque_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABloque(); \
	friend struct Z_Construct_UClass_ABloque_Statics; \
public: \
	DECLARE_CLASS(ABloque, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BomberMan_12025"), NO_API) \
	DECLARE_SERIALIZER(ABloque)


#define FID_BomberMan_12025_Source_BomberMan_12025_Bloque_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABloque(ABloque&&); \
	ABloque(const ABloque&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABloque); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABloque); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABloque) \
	NO_API virtual ~ABloque();


#define FID_BomberMan_12025_Source_BomberMan_12025_Bloque_h_24_PROLOG
#define FID_BomberMan_12025_Source_BomberMan_12025_Bloque_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BomberMan_12025_Source_BomberMan_12025_Bloque_h_27_INCLASS_NO_PURE_DECLS \
	FID_BomberMan_12025_Source_BomberMan_12025_Bloque_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN_12025_API UClass* StaticClass<class ABloque>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BomberMan_12025_Source_BomberMan_12025_Bloque_h


#define FOREACH_ENUM_EBLOQUETIPO(op) \
	op(EBloqueTipo::Madera) \
	op(EBloqueTipo::Concreto) \
	op(EBloqueTipo::Ladrillo) \
	op(EBloqueTipo::Acero) \
	op(EBloqueTipo::Lava) \
	op(EBloqueTipo::Hielo) \
	op(EBloqueTipo::Electrico) \
	op(EBloqueTipo::Arena) \
	op(EBloqueTipo::Hongo) \
	op(EBloqueTipo::Pegajoso) 

enum class EBloqueTipo : uint8;
template<> struct TIsUEnumClass<EBloqueTipo> { enum { Value = true }; };
template<> BOMBERMAN_12025_API UEnum* StaticEnum<EBloqueTipo>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
