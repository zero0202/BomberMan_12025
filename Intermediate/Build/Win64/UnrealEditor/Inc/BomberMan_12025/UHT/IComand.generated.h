// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IComand.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN_12025_IComand_generated_h
#error "IComand.generated.h already included, missing '#pragma once' in IComand.h"
#endif
#define BOMBERMAN_12025_IComand_generated_h

#define FID_BomberMan_12025_Source_BomberMan_12025_IComand_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BOMBERMAN_12025_API UIComand(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIComand(UIComand&&); \
	UIComand(const UIComand&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BOMBERMAN_12025_API, UIComand); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIComand); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIComand) \
	BOMBERMAN_12025_API virtual ~UIComand();


#define FID_BomberMan_12025_Source_BomberMan_12025_IComand_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIComand(); \
	friend struct Z_Construct_UClass_UIComand_Statics; \
public: \
	DECLARE_CLASS(UIComand, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BomberMan_12025"), BOMBERMAN_12025_API) \
	DECLARE_SERIALIZER(UIComand)


#define FID_BomberMan_12025_Source_BomberMan_12025_IComand_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_BomberMan_12025_Source_BomberMan_12025_IComand_h_13_GENERATED_UINTERFACE_BODY() \
	FID_BomberMan_12025_Source_BomberMan_12025_IComand_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BomberMan_12025_Source_BomberMan_12025_IComand_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIComand() {} \
public: \
	typedef UIComand UClassType; \
	typedef IIComand ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_BomberMan_12025_Source_BomberMan_12025_IComand_h_10_PROLOG
#define FID_BomberMan_12025_Source_BomberMan_12025_IComand_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BomberMan_12025_Source_BomberMan_12025_IComand_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN_12025_API UClass* StaticClass<class UIComand>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BomberMan_12025_Source_BomberMan_12025_IComand_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
