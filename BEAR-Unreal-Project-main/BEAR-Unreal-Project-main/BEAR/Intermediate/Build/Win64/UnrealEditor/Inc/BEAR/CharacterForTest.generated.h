// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BEAR_CharacterForTest_generated_h
#error "CharacterForTest.generated.h already included, missing '#pragma once' in CharacterForTest.h"
#endif
#define BEAR_CharacterForTest_generated_h

#define FID_BEAR_Source_BEAR_CharacterForTest_h_12_SPARSE_DATA
#define FID_BEAR_Source_BEAR_CharacterForTest_h_12_RPC_WRAPPERS
#define FID_BEAR_Source_BEAR_CharacterForTest_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_BEAR_Source_BEAR_CharacterForTest_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterForTest(); \
	friend struct Z_Construct_UClass_ACharacterForTest_Statics; \
public: \
	DECLARE_CLASS(ACharacterForTest, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BEAR"), NO_API) \
	DECLARE_SERIALIZER(ACharacterForTest)


#define FID_BEAR_Source_BEAR_CharacterForTest_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACharacterForTest(); \
	friend struct Z_Construct_UClass_ACharacterForTest_Statics; \
public: \
	DECLARE_CLASS(ACharacterForTest, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BEAR"), NO_API) \
	DECLARE_SERIALIZER(ACharacterForTest)


#define FID_BEAR_Source_BEAR_CharacterForTest_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharacterForTest(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacterForTest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterForTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterForTest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterForTest(ACharacterForTest&&); \
	NO_API ACharacterForTest(const ACharacterForTest&); \
public:


#define FID_BEAR_Source_BEAR_CharacterForTest_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterForTest(ACharacterForTest&&); \
	NO_API ACharacterForTest(const ACharacterForTest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterForTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterForTest); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacterForTest)


#define FID_BEAR_Source_BEAR_CharacterForTest_h_9_PROLOG
#define FID_BEAR_Source_BEAR_CharacterForTest_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BEAR_Source_BEAR_CharacterForTest_h_12_SPARSE_DATA \
	FID_BEAR_Source_BEAR_CharacterForTest_h_12_RPC_WRAPPERS \
	FID_BEAR_Source_BEAR_CharacterForTest_h_12_INCLASS \
	FID_BEAR_Source_BEAR_CharacterForTest_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BEAR_Source_BEAR_CharacterForTest_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BEAR_Source_BEAR_CharacterForTest_h_12_SPARSE_DATA \
	FID_BEAR_Source_BEAR_CharacterForTest_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BEAR_Source_BEAR_CharacterForTest_h_12_INCLASS_NO_PURE_DECLS \
	FID_BEAR_Source_BEAR_CharacterForTest_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BEAR_API UClass* StaticClass<class ACharacterForTest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BEAR_Source_BEAR_CharacterForTest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
