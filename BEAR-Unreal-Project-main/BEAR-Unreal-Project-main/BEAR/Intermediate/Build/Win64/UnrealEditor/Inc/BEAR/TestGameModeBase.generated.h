// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BEAR_TestGameModeBase_generated_h
#error "TestGameModeBase.generated.h already included, missing '#pragma once' in TestGameModeBase.h"
#endif
#define BEAR_TestGameModeBase_generated_h

#define FID_BEAR_Source_BEAR_TestGameModeBase_h_15_SPARSE_DATA
#define FID_BEAR_Source_BEAR_TestGameModeBase_h_15_RPC_WRAPPERS
#define FID_BEAR_Source_BEAR_TestGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_BEAR_Source_BEAR_TestGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestGameModeBase(); \
	friend struct Z_Construct_UClass_ATestGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ATestGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BEAR"), NO_API) \
	DECLARE_SERIALIZER(ATestGameModeBase)


#define FID_BEAR_Source_BEAR_TestGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATestGameModeBase(); \
	friend struct Z_Construct_UClass_ATestGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ATestGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BEAR"), NO_API) \
	DECLARE_SERIALIZER(ATestGameModeBase)


#define FID_BEAR_Source_BEAR_TestGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestGameModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestGameModeBase(ATestGameModeBase&&); \
	NO_API ATestGameModeBase(const ATestGameModeBase&); \
public:


#define FID_BEAR_Source_BEAR_TestGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestGameModeBase(ATestGameModeBase&&); \
	NO_API ATestGameModeBase(const ATestGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestGameModeBase)


#define FID_BEAR_Source_BEAR_TestGameModeBase_h_12_PROLOG
#define FID_BEAR_Source_BEAR_TestGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BEAR_Source_BEAR_TestGameModeBase_h_15_SPARSE_DATA \
	FID_BEAR_Source_BEAR_TestGameModeBase_h_15_RPC_WRAPPERS \
	FID_BEAR_Source_BEAR_TestGameModeBase_h_15_INCLASS \
	FID_BEAR_Source_BEAR_TestGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BEAR_Source_BEAR_TestGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BEAR_Source_BEAR_TestGameModeBase_h_15_SPARSE_DATA \
	FID_BEAR_Source_BEAR_TestGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BEAR_Source_BEAR_TestGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_BEAR_Source_BEAR_TestGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BEAR_API UClass* StaticClass<class ATestGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BEAR_Source_BEAR_TestGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
